%{
#include <stdio.h>
#include <stdlib.h>

void yyerror(const char *s);
int yylex(); 
extern int yylineno;
extern FILE *yyin;
extern FILE *yyout;
%}


%left '+' '-'
%left '*' '/' '%'
%left '=' 
%nonassoc '<' '>' 
%nonassoc LOWER_THAN_ELSE
%right ELSE

%start translation_unit

%token LOOP IF ELSE BREAK CONTINUE RETURN
%token INT FLOAT STRING BOOL TRUE FALSE SINGLE_QUOTED_STRING
%token INPUT OUTPUT ADD_ASSIGN_OPERATOR SUB_ASSIGN_OPERATOR
%token MUL_ASSIGN_OPERATOR DIV_ASSIGN_OPERATOR MOD_ASSIGN_OPERATOR
%token LE_OPERATOR GE_OPERATOR EQ_OPERATOR NE_OPERATOR PERCENTAGE
%token INTEGER IDENTIFIER SEMICOLON AND_OPERATOR OR_OPERATOR
%token INC_OPERATOR DEC_OPERATOR RIGHTSHIFT_OPERATOR LEFTSHIFT_OPERATOR
%token ELLIPSIS EXPONENTIAL DUST CSVFILE FUNCTIONCALL PRINT CONSTANT
%token READCSVFUNC HEADFUNC TAILFUNC RESETINDEXFUNC TOCSVFUNC DESCRIBEFUNC MEANFUNC MODEFUNC MEDIANFUNC SUMFUNC MINFUNC MAXFUNC MISSVALUEFUNC EXCHANGEFUNC GROUPBYFUNC CONCATFUNC MERGEFUNC JOINFUNC
%token AXIS_TOKEN DROP_TOKEN INPLACE_TOKEN METHOD_TOKEN HOW_TOKEN ON_TOKEN SUFFIXES_TOKEN FILL_TOKEN

%%

translation_unit:
    declaration
    | translation_unit declaration
    ;

declaration:
    IDENTIFIER SEMICOLON
    | assignment_statement SEMICOLON
    | function_definition
    | input_statement
    ;

input_statement:
    INPUT CSVFILE SEMICOLON
    ;

assignment_statement:
    IDENTIFIER EQ_OPERATOR expressions          { fprintf(syntax, "%s = %s;\n", $1, $3);}  { fprintf(statementlog, "%d: Assignment Statement\n", yylineno); }
    ;

expressions:
    expressions operators IDENTIFIER                        { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s %s %s", $1, $2, $3);
                                                                $$ = strdup(buffer);
                                                            }
    | expressions operators INTNUM                          { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s %s %d", $1, $2, $3);
                                                                $$ = strdup(buffer);
                                                            }
    | expressions operators FLOATNUM                        { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s %s %f", $1, $2, $3);
                                                                $$ = strdup(buffer);
                                                            }
    | expressions operators grouping                        { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s %s %s", $1, $2, $3);
                                                                $$ = strdup(buffer);
                                                            }
    | expressions operators Size_Of                         { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s %s %s", $1, $2, $3);
                                                                $$ = strdup(buffer);
                                                            }
    | expressions operators function_call_statement         { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s %s %s", $1, $2, $3);
                                                                $$ = strdup(buffer);
                                                            }
    | IDENTIFIER                                            { 
                                                                $$ = strdup($1);
                                                            }
    | INTNUM                                                {
                                                                char buffer[256];
                                                                snprintf(buffer, sizeof(buffer), "%d", $1);
                                                                $$ = strdup(buffer);
                                                            }
    | FLOATNUM                                              {
                                                                char buffer[256];
                                                                snprintf(buffer, sizeof(buffer), "%f", $1);
                                                                $$ = strdup(buffer);
                                                            }       
    | grouping                                              { 
                                                                $$ = strdup($1);
                                                            }
    | function_call_statement                                         { 
                                                                $$ = strdup($1);
                                                            }
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
    '{' loop_body '}'                                          { $$ = strdup($2); }                                          
    | Function_Assignment_Statement SEMICOLON function_body         { 
                                                                        char buffer[256]; 
                                                                        snprintf(buffer, sizeof(buffer), "%s; %s", $1, $3);
                                                                        $$ = strdup(buffer);
                                                                    }
    | Function_Loop_Statement function_body               { 
                                                                        char buffer[256]; 
                                                                        snprintf(buffer, sizeof(buffer), "%s %s", $1, $3);
                                                                        $$ = strdup(buffer);
                                                                    }
    | Identifier_List SEMICOLON function_body         { 
                                                                        char buffer[256]; 
                                                                        snprintf(buffer, sizeof(buffer), "%s; %s", $1, $3);
                                                                        $$ = strdup(buffer);
                                                                    }
    | Function_Print_Statement SEMICOLON function_body              { 
                                                                        char buffer[256]; 
                                                                        snprintf(buffer, sizeof(buffer), "%s; %s", $1, $3);
                                                                        $$ = strdup(buffer);
                                                                    }
    | RTRN return_statement SEMICOLON                               { 
                                                                        char buffer[256]; 
                                                                        snprintf(buffer, sizeof(buffer), "return %s;", $2);
                                                                        $$ = strdup(buffer);
                                                                    } 
    ;

return_statement:
    expressions         { $$ = strdup($1); }
    ;

Function_Print_Statement:
    PRINT '(' print_expressions ')'  
    | 
    ;

print_expressions:
    expressions
    | strings_list
    | print_expressions '+' strings_list
    ;

strings_list:
    STRING
    ;

Function_Loop_Statement:
    Sub_Loop_Statement                            { fprintf(syntax, "%s\n",$1); }
    ;

Print_Statement:
    PRINT '(' print_expressions ')'  
    | 
    ;

function_call_statement:
    READCSVFUNC '(' SINGLE_QUOTED_STRING ')'           
    | HEADFUNC '(' ')'                                  
    | TAILFUNC '(' ')'                                  
    | RESETINDEXFUNC '(' parameter_list ')'           
    | TOCSVFUNC '(' SINGLE_QUOTED_STRING ',' parameter_list ')' 
    | DESCRIBEFUNC '(' ')'                              
    | MEANFUNC '(' parameter_list ')'                  
    | MODEFUNC '(' ')'                                   
    | MEDIANFUNC '(' ')'                                 
    | SUMFUNC '(' ')'                                   
    | MINFUNC '(' ')'                                    
    | MAXFUNC '(' ')'                                   
    | MISSVALUEFUNC '(' fill_action ',' parameter_list ')' 
    | GROUPBYFUNC '(' SINGLE_QUOTED_STRING ')'          
    | CONCATFUNC '(' '[' expression_list ']' ',' parameter_list ')' 
    | MERGEFUNC '(' IDENTIFIER ',' IDENTIFIER ',' how_clause ',' on_clause ',' suffixes_clause ')' 
    | JOINFUNC '(' IDENTIFIER ',' how_clause ',' on_clause ')' 
    | IDENTIFIER '(' actual_parameters ')'
    ;

actual_parameters:          
    expressions                                             
    | actual_parameters ',' expressions                   
    ;

grouping:
    '(' expressions ')'                               { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "(%s)", $2);
                                                                $$ = strdup(buffer);
                                                            }
    ;

operators:
    ADD             { $$ = "+"; }
    | SUB           { $$ = "-"; }
    | MUL           { $$ = "*"; }
    | DIV           { $$ = "/"; }
    | MOD           { $$ = "%"; }
    | BIT_AND       { $$ = "&"; }
    | BIT_NOT       { $$ = "~"; }
    | BIT_OR        { $$ = "|"; }
    | BIT_XOR       { $$ = "^"; }
    ;

Loop_Statement:
    Sub_Loop_Statement                            { fprintf(syntax, "%s\n",$1); }
    ;

Sub_Loop_Statement:
    LOOP '(' initializtion SEMICOLON predicate_list SEMICOLON update ')'
    '{' loop_body '}' 
    ;

initializtion:
    Identifier_List                                   
    ;

Identifier_List:
    IDENTIFIER EQ_OPERATOR INTNUM                           { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s = %d", $1, $3);
                                                                $$ = strdup(buffer);
                                                            }
    | IDENTIFIER EQ_OPERATOR FLOATNUM                       { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s = %f", $1, $3);
                                                                $$ = strdup(buffer); 
                                                            }
    | IDENTIFIER                                            { 
                                                                $$ = strdup($1);
                                                            }
    | Identifier_List COMMA IDENTIFIER                      {
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s, %s", $1, $3);
                                                                $$ = strdup(buffer); 
                                                            }
    | Identifier_List COMMA IDENTIFIER EQ_OPERATOR INTNUM   {
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s, %s = %d", $1, $3, $5);
                                                                $$ = strdup(buffer); 
                                                            }
    | Identifier_List COMMA IDENTIFIER EQ_OPERATOR FLOATNUM { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s, %s = %f", $1, $3, $5);
                                                                $$ = strdup(buffer); 
                                                            }
    ;

update:
    Function_Assignment_Statement                      
    ;

loop_body:
    statment_list   
    ;

statment_list:
    statement                                               { $$ = strdup($1); }            
    | statment_list statement                               { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s %s", $1, $2);
                                                                $$ = strdup(buffer);
                                                            }                     
    ;

statement:                                                  
    Function_Assignment_Statement SEMICOLON                 { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s", $1);
                                                                $$ = strdup(buffer);
                                                            }
    | Function_Print_Statement SEMICOLON                    { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s", $1);
                                                                $$ = strdup(buffer);
                                                            }
    | BREAK SEMICOLON
    | CONTINUE SEMICOLON                                       
    |                                                               { $$ = " "; }
    ;

Function_Assignment_Statement:
    IDENTIFIER EQ_OPERATOR expressions         
    ;

predicate_list:
    predicate                                               { $$ = strdup($1); }
    | predicate_list logical_operators predicate            { 
                                 | predicate_list QUESTION                               { $$ = strdup($1); }                                   char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s %s %s", $1, $2, $3);
                                                                $$ = strdup(buffer);
                                                            }
    | predicate_list comparison_operators predicate         { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s %s %s", $1, $2, $3);
                                                                $$ = strdup(buffer);
                                                            }
    ;

predicate:
    expressions comparison_operators expressions            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s %s %s", $1, $2, $3);
                                                                $$ = strdup(buffer);
                                                            }
    | expressions logical_operators expressions             { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s %s %s", $1, $2, $3);
                                                                $$ = strdup(buffer);
                                                            }
    ;

logical_operators:
    LOG_AND         { $$ = "&&"; }
    | LOG_NOT       { $$ = "!"; }
    | LOG_OR        { $$ = "||"; }
    ;

comparison_operators:
    LESS                { $$ = "<"; }       
    | GREATER           { $$ = ">"; }       
    | LSEQ              { $$ = "<="; }     
    | GREQ              { $$ = ">="; }      
    | NOTEQ             { $$ = "!="; }     
    | DOUBLE_EQUAL      { $$ = "=="; }        
    ;



parameter_list:
    | parameter
    | parameter_list ',' parameter
    ;


parameter:
    type IDENTIFIER
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
    while (yyparse() == 0) {
        // Parsing successful
    }

    // Clean up
    fclose(yyin);
    return EXIT_SUCCESS;
}
