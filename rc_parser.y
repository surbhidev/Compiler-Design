%{
#include <stdio.h>
#include <stdlib.h>

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
%type <in> axis_bit
%token INT_TYPE FLOAT_TYPE STRING_TYPE DATAFRAME SKIPNA
%token SEP HEADER INDEX_COL USECOLS INDEX
%token DROP INPLACE AXIS NUMERIC
%token LOOP IF ELSE BREAK CONTINUE RTRN FUNC
%token FLOATNUM STRING TRUE FALSE SINGLE_QUOTED_STRING
%token INPUT OUTPUT ADD_ASSIGN_OPERATOR SUB_ASSIGN_OPERATOR
%token MUL_ASSIGN_OPERATOR DIV_ASSIGN_OPERATOR MOD_ASSIGN_OPERATOR
%token LE_OPERATOR GE_OPERATOR DEQ_OPERATOR NE_OPERATOR PERCENTAGE
%token INTEGER IDENTIFIER SEMICOLON AND_OPERATOR OR_OPERATOR NOT_OPERATOR
%token INC_OPERATOR DEC_OPERATOR RIGHTSHIFT_OPERATOR LEFTSHIFT_OPERATOR
%token ELLIPSIS EXPONENTIAL DUST CSVFILE FUNCTIONCALL PRINT CONSTANT
%token READCSVFUNC HEADFUNC TAILFUNC RESETINDEXFUNC TOCSVFUNC DESCRIBEFUNC MEANFUNC MODEFUNC MEDIANFUNC SUMFUNC MINFUNC MAXFUNC MISSVALUEFUNC EXCHANGEFUNC GROUPBYFUNC CONCATFUNC MERGEFUNC JOINFUNC
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
    ;

input_statement:
    INPUT CSVFILE SEMICOLON
    ;

assignment_statement:
    IDENTIFIER '=' expressions
    | dataframe '=' function_call_statement
    ;

dataframe: 
    DATAFRAME '(' IDENTIFIER ')'
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
    dataframe'[' SINGLE_QUOTED_STRING_LIST ']' '.' MEANFUNC '(' ')'      
    | dataframe'[' SINGLE_QUOTED_STRING_LIST ']' '.' MODEFUNC '(' ')'  
    | dataframe'[' SINGLE_QUOTED_STRING_LIST ']' '.' MEDIANFUNC '(' ')'                              
    | dataframe '.' MEANFUNC '(' mean_body mean_numerical ')'                  
    | dataframe '.' MODEFUNC '('  mean_body mean_numerical ')'                                   
    | dataframe '.' MEDIANFUNC '('  mean_body mean_numerical ')'                                 
    | dataframe '.' SUMFUNC '(' mean_body mean_numerical ')'                                   
    | dataframe '.' MINFUNC '(' mean_body mean_numerical ')'                                    
    | dataframe '.' MAXFUNC '(' mean_body mean_numerical ')' 

function_call_statement:
    READCSVFUNC '(' CSVFILE readcsv_body ')'         
    | dataframe '.' HEADFUNC '(' head_tail_body ')'                                  
    | dataframe '.' TAILFUNC '(' head_tail_body ')'                                  
    | dataframe '.' RESETINDEXFUNC '(' reset_index_body_drop reset_index_body_implace ')'           
    | dataframe '.' TOCSVFUNC '(' CSVFILE readcsv_body ')' 
    | dataframe '.' DESCRIBEFUNC '(' ')'                                  
    | dataframe '.' MISSVALUEFUNC '(' fill_action ',' parameter_list ')' 
    | dataframe '.' GROUPBYFUNC '(' SINGLE_QUOTED_STRING ')'          
    | dataframe '.' CONCATFUNC '(' '[' expressions ']' ',' parameter_list ')' 
    | dataframe '.' MERGEFUNC '(' IDENTIFIER ',' IDENTIFIER ',' how_clause ',' on_clause ',' suffixes_clause ')' 
    | dataframe '.' JOINFUNC '(' IDENTIFIER ',' how_clause ',' on_clause ')' 
    | IDENTIFIER '(' actual_parameters ')'
    ;

mean_body:
    AXIS '=' axis_bit
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

mean_numerical:
    ',' NUMERIC '=' BOOL
    | ',' SKIPNA '=' BOOL
    |
    ; 

reset_index_body_drop:
    DROP '=' TRUE
    | DROP '=' FALSE ',' IDENTIFIER

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
    ',' SEP '=' SINGLE_QUOTED_STRING
    | ',' HEADER '=' INTNUM
    | ',' INDEX_COL '=' INTNUM
    | ',' INDEX '=' BOOL
    | ',' USECOLS '=' '[' SINGLE_QUOTED_STRING_LIST ']'
    |
    ;

SINGLE_QUOTED_STRING_LIST:
    SINGLE_QUOTED_STRING
    | SINGLE_QUOTED_STRING_LIST ',' SINGLE_QUOTED_STRING
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
    | BREAK SEMICOLON
    | CONTINUE SEMICOLON                                       
    // |                                                        
    ;

Function_Assignment_Statement:
    IDENTIFIER '=' expressions         
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



parameter_list:
    | parameter
    | parameter_list ',' parameter
    ;


parameter:
    IDENTIFIER
    | AXIS_TOKEN '=' INTEGER
    | INPLACE_TOKEN '=' BOOL
    | METHOD_TOKEN '=' SINGLE_QUOTED_STRING
    ;

how_clause:
    HOW_TOKEN '=' SINGLE_QUOTED_STRING

on_clause:
    ON_TOKEN '=' SINGLE_QUOTED_STRING

suffixes_clause:
    SUFFIXES_TOKEN '=' '[' SINGLE_QUOTED_STRING ',' SINGLE_QUOTED_STRING ']'

fill_action:
    FILL_TOKEN
    | DROP_TOKEN
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
    return EXIT_SUCCESS;
}
