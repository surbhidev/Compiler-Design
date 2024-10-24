%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void yyerror(const char *s);
int yylex(); 
extern int yylineno;
extern FILE *yyin;
extern FILE *yyout;
%}

%union {
    int in;
    float flt;
    char *str;  
}

%left '+' '-' '\\' '.'
%left '*' '/' '%'
%left '=' 
%nonassoc '<' '>' 
%nonassoc LOWER_THAN_ELSE
%right ELSE

%start translation_unit

%token <in> INTNUM
%token <str> IDENTIFIER DATAFRAME
%type <in> axis_bit
%type <str> dataframe_list dataframe assignment_statement
%token INT_TYPE FLOAT_TYPE STRING_TYPE SKIPNA
%token FILL FFILL BFILL INTERPOLATE METHOD REGX
%token INNER LEFT RIGHT OUTER
%token SEP HEADER INDEX_COL USECOLS INDEX
%token DROP INPLACE AXIS NUMERIC
%token LOOP IF ELSE ELSEIF BREAK CONTINUE RTRN FUNC
%token FLOATNUM STRING TRUE FALSE SINGLE_QUOTED_STRING
%token INPUT OUTPUT ADD_ASSIGN_OPERATOR SUB_ASSIGN_OPERATOR
%token MUL_ASSIGN_OPERATOR DIV_ASSIGN_OPERATOR MOD_ASSIGN_OPERATOR
%token LE_OPERATOR GE_OPERATOR DEQ_OPERATOR NE_OPERATOR PERCENTAGE
%token INTEGER SEMICOLON AND_OPERATOR OR_OPERATOR NOT_OPERATOR
%token INC_OPERATOR DEC_OPERATOR RIGHTSHIFT_OPERATOR LEFTSHIFT_OPERATOR
%token ELLIPSIS EXPONENTIAL DUST CSVFILE FUNCTIONCALL PRINT CONSTANT
%token READCSVFUNC HEADFUNC TAILFUNC RESETINDEXFUNC TOCSVFUNC DESCRIBEFUNC MEANFUNC MODEFUNC MEDIANFUNC SUMFUNC MINFUNC MAXFUNC MISSVALUEFUNC EXCHANGEVALUEFUNC GROUPBYFUNC CONCATFUNC MERGEFUNC JOINFUNC
%token AXIS_TOKEN DROP_TOKEN INPLACE_TOKEN METHOD_TOKEN HOW_TOKEN ON_TOKEN SUFFIXES_TOKEN FILL_TOKEN

%%

translation_unit:
    declaration_statement
    | translation_unit declaration_statement
    ;

declaration_statement:
    assignment_statement SEMICOLON
    | Function_Declaration
    | input_statement
    | Print_Statement
    | Loop_Statement
    | function_call_statement SEMICOLON
    | Conditional_Statements
    ;

input_statement:
    INPUT CSVFILE SEMICOLON
    ;

assignment_statement:
    IDENTIFIER '=' expressions
    | dataframe_list '=' function_call_statement
                                                            {   
                                                                int count = 0;
                                                                for(int i = 0; i < strlen($1); i++){
                                                                    if($1[i] == ','){
                                                                        count ++;
                                                                    }
                                                                }
                                                                if(count != 0)
                                                                {
                                                                    perror("Syntax Error: Expected single dataframe");
                                                                    return 0;
                                                                }
                                                            }

    | dataframe_list '=' dataframe '.' GROUPBYFUNC '(' single_quoted_string_list ')' 
    ;

dataframe: 
    DATAFRAME '(' IDENTIFIER ')'                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s(%s)", $1, $3);
                                                                $$ = strdup(buffer); 
                                                            }
    ;

expressions:
    expressions operators IDENTIFIER 
    | expressions operators INTNUM
    | expressions operators FLOATNUM
    | expressions operators grouping
    | expressions operators function_call_statement
    | expressions operators aggregate_function_calls
    | IDENTIFIER
    | INTNUM                                                
    | FLOATNUM
    | grouping                                              
    | function_call_statement  
    | aggregate_function_calls                   
    ;

Function_Declaration:
    FUNC IDENTIFIER '(' argument_list ')'
    '{' function_body '}'
    ;

argument_list:
    IDENTIFIER
    | argument_list ',' IDENTIFIER
    |
    ;

function_body: 
    '{' loop_body '}'                                                                                
    | Function_Assignment_Statement SEMICOLON function_body         
    | Function_Loop_Statement function_body               
    // | Identifier_List SEMICOLON function_body        
    | Function_Print_Statement SEMICOLON function_body             
    | RTRN return_statement SEMICOLON                              
    ;

return_statement:
    expressions       
    ;

Function_Print_Statement:
    PRINT '(' print_expressions ')' 
    ;

print_expressions:
    expressions
    | strings_list
    | print_expressions ',' strings_list    //expr , string
    | print_expressions ',' expressions // string or expr, expr 
    ;

strings_list:
    STRING
    ;

Function_Loop_Statement:
    Sub_Loop_Statement                            
    ;

Print_Statement:
    PRINT '(' print_expressions ')' SEMICOLON 
    ;

// function_call_statement:
//     IDENTIFIER '(' actual_parameters ')'
//     ;

aggregate_function_calls:
    dataframe'[' single_quoted_string_list ']' '.' MEANFUNC '(' ')'      
    | dataframe'[' single_quoted_string_list ']' '.' MODEFUNC '(' ')'  
    | dataframe'[' single_quoted_string_list ']' '.' MEDIANFUNC '(' ')'  
    | dataframe'[' single_quoted_string_list ']' '.' SUMFUNC '(' ')'
    | dataframe'[' single_quoted_string_list ']' '.' MINFUNC '(' ')'
    | dataframe'[' single_quoted_string_list ']' '.' MAXFUNC '(' ')'
    | dataframe '.' MEANFUNC '(' mean_body mean_numerical ')'                  
    | dataframe '.' MODEFUNC '('  mean_body mean_numerical ')'                                   
    | dataframe '.' MEDIANFUNC '('  mean_body mean_numerical ')'                                 
    | dataframe '.' SUMFUNC '(' mean_body mean_numerical ')'                                   
    | dataframe '.' MINFUNC '(' mean_body mean_numerical ')'                                    
    | dataframe '.' MAXFUNC '(' mean_body mean_numerical ')' 
    ;

function_call_statement:
    READCSVFUNC '(' CSVFILE readcsv_body ')'         
    | dataframe '.' HEADFUNC '(' head_tail_body ')'                                  
    | dataframe '.' TAILFUNC '(' head_tail_body ')'                                  
    | dataframe '.' RESETINDEXFUNC '(' reset_index_body_drop reset_index_body_implace ')'           
    | dataframe '.' TOCSVFUNC '(' CSVFILE readcsv_body ')' 
    | dataframe '.' DESCRIBEFUNC '(' ')'                                  
    | dataframe '.' MISSVALUEFUNC '(' missing_value_body_confirm missing_value_body ')' 
    | dataframe '.' EXCHANGEVALUEFUNC '(' to_exchange ',' exchange_value exchange_body_optional ')'          
    | CONCATFUNC '(' '[' dataframe_list ']' ',' concat_body ')' 
    | MERGEFUNC '(' dataframe ',' dataframe ',' how_clause ',' on_clause ',' suffixes_clause ')' 
    | IDENTIFIER '(' actual_parameters ')'
    ;

concat_body:
    AXIS '=' axis_bit 
    ;

dataframe_list:
    dataframe                                               { 
                                                                $$ = $1;
                                                            }
    | dataframe_list ',' dataframe                          { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s,%s", $1, $3);
                                                                $$ = strdup(buffer); 
                                                            }
    ;

to_exchange:
    REGX SINGLE_QUOTED_STRING
    ; 

exchange_value:
    INTNUM
    | FLOATNUM
    | EXPONENTIAL
    | PERCENTAGE
    | IDENTIFIER
    ;

exchange_body_optional:
    ',' INPLACE '=' BOOL exchange_body_optional
    | ',' USECOLS '=' '[' single_quoted_string_list ']' exchange_body_optional
    | ',' mean_body exchange_body_optional
    | 
    ;

missing_value_body_confirm:
    FILL ',' INTNUM
    | FILL ',' aggregate_function_calls
    | FILL ',' METHOD '=' FFILL 
    | FILL ',' METHOD '=' BFILL
    | FILL ',' METHOD '=' INTERPOLATE
    | DROP
    ;

missing_value_body:
    ',' INPLACE '=' BOOL missing_value_body
    | ',' USECOLS '=' '[' single_quoted_string_list ']' missing_value_body
    | ',' mean_body missing_value_body
    | 
    ;

mean_body:
    AXIS '=' axis_bit 
    | 
    ; 

axis_bit:
    INTNUM 
    {
        if($1 == 0)
        {
            $$ = 0;
        }
        else if($1 == 1)
        {
            $$ = 1;
        }
    }
    ;

mean_numerical:
    ',' NUMERIC '=' BOOL mean_numerical
    | ',' SKIPNA '=' BOOL mean_numerical
    | ',' USECOLS '=' '[' single_quoted_string_list ']' mean_numerical
    |
    ; 

reset_index_body_drop:
    DROP '=' TRUE
    | DROP '=' FALSE ',' USECOLS '=' '[' single_quoted_string_list ']'
    ;

BOOL:
    TRUE
    | FALSE
    ;

reset_index_body_implace:
    ',' INPLACE '=' BOOL
    | 
    ;

head_tail_body:
    INTNUM 
    | 
    ;

readcsv_body:
    ',' SEP '=' SINGLE_QUOTED_STRING readcsv_body
    | ',' HEADER '=' INTNUM readcsv_body
    | ',' INDEX_COL '=' INTNUM readcsv_body
    | ',' INDEX '=' BOOL readcsv_body
    | ',' USECOLS '=' '[' single_quoted_string_list ']' readcsv_body
    |
    ;

single_quoted_string_list:
    SINGLE_QUOTED_STRING
    | single_quoted_string_list ',' SINGLE_QUOTED_STRING
    ;


actual_parameters:          
    expressions                                             
    | actual_parameters ',' expressions                   
    ;

grouping:
    '(' expressions ')'                              
    ;

operators:
    '+'
    | '-'
    | '*'
    | '/'
    | '%'
    | '&'
    | '|'
    | '^'
    | '~'
    ;

Loop_Statement:
    Sub_Loop_Statement
    ;

Sub_Loop_Statement:
    LOOP '(' initializtion SEMICOLON predicate_list SEMICOLON update ')'
    '{' loop_body '}' 
    ;

initializtion:
    Identifier_List                                   
    ;

Identifier_List:
    IDENTIFIER '=' INTNUM                          
    | IDENTIFIER '=' FLOATNUM                      
    | IDENTIFIER                                            
    | Identifier_List ',' IDENTIFIER                     
    | Identifier_List ',' IDENTIFIER '=' INTNUM  
    | Identifier_List ',' IDENTIFIER '=' FLOATNUM 
    ;

update:
    Function_Assignment_Statement                      
    ;

loop_body:
    statment_list   
    ;

statment_list:
    statement                                 
    | statment_list statement                                                  
    ;

statement:                                                  
    Function_Assignment_Statement SEMICOLON                 
    | Function_Print_Statement SEMICOLON    
    | Conditional_Statements   
    | Loop_Statement             
    | BREAK SEMICOLON
    | CONTINUE SEMICOLON
    | function_call_statement 
    | Function_Assignment_Statement              
    // |                                                        
    ;

Function_Assignment_Statement:
    IDENTIFIER '=' expressions
    | dataframe_list '=' function_call_statement
    | dataframe_list '=' dataframe '.' GROUPBYFUNC '(' single_quoted_string_list ')' 
    ;
    
predicate_list:
    predicate                                               
    | predicate_list logical_operators predicate            
    | predicate_list comparison_operators predicate 
    ;

predicate:
    expressions comparison_operators expressions            
    | expressions logical_operators expressions
    | NOT_OPERATOR expressions
    ;

logical_operators:
    AND_OPERATOR
    | OR_OPERATOR
    ;

comparison_operators:
    '<'                   
    | '>'              
    | LE_OPERATOR                
    | GE_OPERATOR                 
    | NE_OPERATOR              
    | DEQ_OPERATOR           
    ;

how_clause:
    HOW_TOKEN '=' how_list
    ;

how_list:
    INNER 
    | LEFT
    | RIGHT
    | OUTER
    ;

on_clause:
    ON_TOKEN '=' SINGLE_QUOTED_STRING
    ;

suffixes_clause:
    SUFFIXES_TOKEN '=' '[' single_quoted_string_list ']'
    ;

Conditional_Statements:
    Conditional_Statements_1
    | Conditional_Statements_2
    | Conditional_Statements_3
    | Conditional_Statements_4
    ;

Conditional_Statements_1:
    IF '(' predicate_list ')' '{' conditional_body '}' 
    else_if_loop
    ELSE '{' conditional_body '}'
    ;

Conditional_Statements_2:
    IF '(' predicate_list ')' '{' conditional_body '}' 
    else_if_loop
    ;

Conditional_Statements_3:
    IF '(' predicate_list ')' '{' conditional_body '}' 
    ELSE '{' conditional_body '}'
    ;

Conditional_Statements_4:
    IF '(' predicate_list ')' '{' conditional_body '}' 
    ;

else_if_loop:
    ELSEIF '(' predicate_list ')' '{' conditional_body '}'
    | else_if_loop ELSEIF '(' predicate_list ')' '{' conditional_body '}'
    ;

conditional_body:
    loop_body
    ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Error at line %d: %s\n", yylineno, s);
}

int yywrap() {
    return 1;
}

int main(int argc, char **argv) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return EXIT_FAILURE;
    }
    
    yyin = fopen(argv[1], "r");
    if (!yyin) {
        fprintf(stderr, "Error: Unable to open input file: %s\n", argv[1]);
        return EXIT_FAILURE;
    }

    // Call yyparse to parse the input until EOF
    yyparse();
    // Clean up
    fclose(yyin);
    return 0;
}
