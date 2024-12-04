%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "typechecker.h"
#include <stdbool.h>

void yyerror(const char *s);

#ifdef __cplusplus
extern "C" {
#endif

int yylex();
int yyparse();
int yywrap();

#ifdef __cplusplus
}
#endif

extern int yylineno;
extern FILE *yyin;
extern FILE *yyout;

FILE* yacc_output;
extern FILE* lex_output;
%}

%union {
    int in;
    float flt;
    char *str;
    bool bl;
}

%left '+' '-' '\\' '.'
%left '*' '/' '%'
%left '='
%nonassoc '<' '>'
%nonassoc LOWER_THAN_ELSE
%right ELSE

%start translation_unit

%token <in> INTNUM
%token <str> IDENTIFIER DATAFRAME CSVFILE EXPONENTIAL PERCENTAGE INNER LEFT RIGHT OUTER
%type <in> axis_bit 
%type <str> dataframe_list dataframe assignment_statement BOOL single_quoted_string_list function_call_statement readcsv_body head_tail_body reset_index_body_drop reset_index_body_implace
%type <str> mean_numerical mean_body missing_value_body missing_value_body_confirm aggregate_function_calls
%type <str> exchange_body_optional exchange_value to_exchange concat_body
%type <str> suffixes_clause on_clause how_list how_clause operators grouping actual_parameters expressions
%token INT_TYPE FLOAT_TYPE STRING_TYPE SKIPNA
%token FILL FFILL BFILL INTERPOLATE METHOD REGX
%token SEP HEADER INDEX_COL USECOLS INDEX
%token DROP INPLACE AXIS NUMERIC
%token LOOP IF ELSE ELSEIF BREAK CONTINUE RTRN FUNC
%token <flt> FLOATNUM 
%token <str> STRING SINGLE_QUOTED_STRING
%token <str> TRUE FALSE 
%token INPUT OUTPUT ADD_ASSIGN_OPERATOR SUB_ASSIGN_OPERATOR
%token MUL_ASSIGN_OPERATOR DIV_ASSIGN_OPERATOR MOD_ASSIGN_OPERATOR
%token LE_OPERATOR GE_OPERATOR DEQ_OPERATOR NE_OPERATOR
%token INTEGER SEMICOLON AND_OPERATOR OR_OPERATOR NOT_OPERATOR
%token INC_OPERATOR DEC_OPERATOR RIGHTSHIFT_OPERATOR LEFTSHIFT_OPERATOR
%token ELLIPSIS DUST FUNCTIONCALL PRINT CONSTANT
%token READCSVFUNC HEADFUNC TAILFUNC RESETINDEXFUNC TOCSVFUNC DESCRIBEFUNC MEANFUNC MODEFUNC MEDIANFUNC SUMFUNC MINFUNC MAXFUNC MISSVALUEFUNC EXCHANGEVALUEFUNC GROUPBYFUNC CONCATFUNC MERGEFUNC JOINFUNC
%token AXIS_TOKEN DROP_TOKEN INPLACE_TOKEN METHOD_TOKEN HOW_TOKEN ON_TOKEN SUFFIXES_TOKEN FILL_TOKEN

%%

translation_unit:
    declaration_statement
    | translation_unit declaration_statement
    ;

declaration_statement:
    assignment_statement SEMICOLON {fprintf(yacc_output,"\n");}
    | Function_Declaration {fprintf(yacc_output,"\n");}
    | input_statement {fprintf(yacc_output,"\n");}
    | Print_Statement {fprintf(yacc_output,"\n");}
    | Loop_Statement {fprintf(yacc_output,"\n");}
    | function_call_statement SEMICOLON {fprintf(yacc_output,"\n");}
    | Conditional_Statements {fprintf(yacc_output,"\n");}
    ;

input_statement:
    INPUT CSVFILE SEMICOLON
    {
        char *cleaned_filename = double_quote_remover($2);  // remove quotes from filename
        FILE *file = fopen(cleaned_filename, "r");

        if (file == NULL)
        {
            fprintf(stderr, "Failed to open file: %s\n", cleaned_filename);
        }
        /* else
        {
            fclose(file);
        }

        free(cleaned_filename); */
    }
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
                                                            {
                                                                fprintf(yacc_output, "%s = %s", $1, $3);
                                                            }
    ;

dataframe:
    DATAFRAME '(' IDENTIFIER ')'                            {
                                                                char buffer[256];
                                                                snprintf(buffer, sizeof(buffer), "%s(%s)", $1, $3);
                                                                $$ = strdup(buffer);
                                                            }
    ;

expressions:
    expressions operators IDENTIFIER                                        { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s%s%s", $1,$2,$3);
                                                                                $$ = strdup(buffer);
                                                                            }
    | expressions operators INTNUM
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s%s%d", $1,$2,$3);
                                                                                $$ = strdup(buffer);
                                                                            }
    | expressions operators FLOATNUM
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s%s%f", $1,$2,$3);
                                                                                $$ = strdup(buffer);
                                                                            }
    | expressions operators grouping                                        { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s%s%s", $1,$2,$3);
                                                                                $$ = strdup(buffer);
                                                                            }
    | expressions operators function_call_statement
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s%s%s", $1,$2,$3);
                                                                                $$ = strdup(buffer);
                                                                            }
    | expressions operators aggregate_function_calls
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s%s%s", $1,$2,$3);
                                                                                $$ = strdup(buffer);
                                                                            }
    | IDENTIFIER                                                            {$$=$1;}
    | INTNUM
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%d",$1);
                                                                                $$ = strdup(buffer);
                                                                            }
    | FLOATNUM
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%f",$1);
                                                                                $$ = strdup(buffer);
                                                                            }
    | grouping          
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s",$1);
                                                                                $$ = strdup(buffer);
                                                                            }
    | function_call_statement
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s",$1);
                                                                                $$ = strdup(buffer);
                                                                            }
    | aggregate_function_calls
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s",$1);
                                                                                $$ = strdup(buffer);
                                                                            }
    ;

Function_Declaration:
    FUNC IDENTIFIER '(' argument_list ')'
    '{' function_body '}'

    {
        fprintf(yacc_output,"def %s(%s):\n\t%s",$2,$4,$7);
    }
    ;

argument_list:
    IDENTIFIER                                      {
                                                        $$ = $1;
                                                    }
    | argument_list ',' IDENTIFIER
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s,%s",$1,$3);
                                                                                $$ = strdup(buffer);
                                                                            }
    |
    ;

function_body:
    '{' loop_body '}'
                                                                            {

                                                                            }
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
                                                                        { 
                                                                                    
                                                                                    char *input = $1; // $1 is the string passed from the 'dataframe' rule
                                                                                    char identifier[100]; // Buffer to store the extracted identifier

                                                                                    // Find the opening parenthesis
                                                                                    char *start = strchr(input, '(');
                                                                                    if (start == NULL) {
                                                                                        yyerror("Invalid format: no opening parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Find the closing parenthesis
                                                                                    char *end = strchr(start, ')');
                                                                                    if (end == NULL) {
                                                                                        yyerror("Invalid format: no closing parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Copy the content between parentheses into the identifier buffer
                                                                                    size_t length = end - start - 1;
                                                                                    if (length <= 0 || length >= sizeof(identifier)) {
                                                                                        yyerror("Invalid identifier length");
                                                                                        YYABORT;
                                                                                    }
                                                                                    strncpy(identifier, start + 1, length);
                                                                                    identifier[length] = '\0'; // Null-terminate the string

                                                                                    char buffer[256]; 
                                                                                    snprintf(buffer, sizeof(buffer), "%s[%s].mean()", identifier,$3);
                                                                                    $$ = strdup(buffer);
                                                                                    
                                                                        }     
    | dataframe'[' single_quoted_string_list ']' '.' MODEFUNC '(' ')'
                                                                        { 
                                                                                    
                                                                                    char *input = $1; // $1 is the string passed from the 'dataframe' rule
                                                                                    char identifier[100]; // Buffer to store the extracted identifier

                                                                                    // Find the opening parenthesis
                                                                                    char *start = strchr(input, '(');
                                                                                    if (start == NULL) {
                                                                                        yyerror("Invalid format: no opening parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Find the closing parenthesis
                                                                                    char *end = strchr(start, ')');
                                                                                    if (end == NULL) {
                                                                                        yyerror("Invalid format: no closing parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Copy the content between parentheses into the identifier buffer
                                                                                    size_t length = end - start - 1;
                                                                                    if (length <= 0 || length >= sizeof(identifier)) {
                                                                                        yyerror("Invalid identifier length");
                                                                                        YYABORT;
                                                                                    }
                                                                                    strncpy(identifier, start + 1, length);
                                                                                    identifier[length] = '\0'; // Null-terminate the string

                                                                                    char buffer[256]; 
                                                                                    snprintf(buffer, sizeof(buffer), "%s[%s].mode()", identifier,$3);
                                                                                    $$ = strdup(buffer);
                                                                                    
                                                                        }
    | dataframe'[' single_quoted_string_list ']' '.' MEDIANFUNC '(' ')'
                                                                        { 
                                                                                    
                                                                                    char *input = $1; // $1 is the string passed from the 'dataframe' rule
                                                                                    char identifier[100]; // Buffer to store the extracted identifier

                                                                                    // Find the opening parenthesis
                                                                                    char *start = strchr(input, '(');
                                                                                    if (start == NULL) {
                                                                                        yyerror("Invalid format: no opening parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Find the closing parenthesis
                                                                                    char *end = strchr(start, ')');
                                                                                    if (end == NULL) {
                                                                                        yyerror("Invalid format: no closing parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Copy the content between parentheses into the identifier buffer
                                                                                    size_t length = end - start - 1;
                                                                                    if (length <= 0 || length >= sizeof(identifier)) {
                                                                                        yyerror("Invalid identifier length");
                                                                                        YYABORT;
                                                                                    }
                                                                                    strncpy(identifier, start + 1, length);
                                                                                    identifier[length] = '\0'; // Null-terminate the string

                                                                                    char buffer[256]; 
                                                                                    snprintf(buffer, sizeof(buffer), "%s[%s].median()", identifier,$3);
                                                                                    $$ = strdup(buffer);
                                                                                    
                                                                        }
    | dataframe'[' single_quoted_string_list ']' '.' SUMFUNC '(' ')'    
                                                                        { 
                                                                                    
                                                                                    char *input = $1; // $1 is the string passed from the 'dataframe' rule
                                                                                    char identifier[100]; // Buffer to store the extracted identifier

                                                                                    // Find the opening parenthesis
                                                                                    char *start = strchr(input, '(');
                                                                                    if (start == NULL) {
                                                                                        yyerror("Invalid format: no opening parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Find the closing parenthesis
                                                                                    char *end = strchr(start, ')');
                                                                                    if (end == NULL) {
                                                                                        yyerror("Invalid format: no closing parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Copy the content between parentheses into the identifier buffer
                                                                                    size_t length = end - start - 1;
                                                                                    if (length <= 0 || length >= sizeof(identifier)) {
                                                                                        yyerror("Invalid identifier length");
                                                                                        YYABORT;
                                                                                    }
                                                                                    strncpy(identifier, start + 1, length);
                                                                                    identifier[length] = '\0'; // Null-terminate the string

                                                                                    char buffer[256]; 
                                                                                    snprintf(buffer, sizeof(buffer), "%s[%s].sum()", identifier,$3);
                                                                                    $$ = strdup(buffer);
                                                                                    
                                                                        }
    | dataframe'[' single_quoted_string_list ']' '.' MINFUNC '(' ')'
                                                                        { 
                                                                                    
                                                                                    char *input = $1; // $1 is the string passed from the 'dataframe' rule
                                                                                    char identifier[100]; // Buffer to store the extracted identifier

                                                                                    // Find the opening parenthesis
                                                                                    char *start = strchr(input, '(');
                                                                                    if (start == NULL) {
                                                                                        yyerror("Invalid format: no opening parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Find the closing parenthesis
                                                                                    char *end = strchr(start, ')');
                                                                                    if (end == NULL) {
                                                                                        yyerror("Invalid format: no closing parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Copy the content between parentheses into the identifier buffer
                                                                                    size_t length = end - start - 1;
                                                                                    if (length <= 0 || length >= sizeof(identifier)) {
                                                                                        yyerror("Invalid identifier length");
                                                                                        YYABORT;
                                                                                    }
                                                                                    strncpy(identifier, start + 1, length);
                                                                                    identifier[length] = '\0'; // Null-terminate the string

                                                                                    char buffer[256]; 
                                                                                    snprintf(buffer, sizeof(buffer), "%s[%s].min()", identifier,$3);
                                                                                    $$ = strdup(buffer);
                                                                                    
                                                                        }
    | dataframe'[' single_quoted_string_list ']' '.' MAXFUNC '(' ')'
                                                                        { 
                                                                                    
                                                                                    char *input = $1; // $1 is the string passed from the 'dataframe' rule
                                                                                    char identifier[100]; // Buffer to store the extracted identifier

                                                                                    // Find the opening parenthesis
                                                                                    char *start = strchr(input, '(');
                                                                                    if (start == NULL) {
                                                                                        yyerror("Invalid format: no opening parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Find the closing parenthesis
                                                                                    char *end = strchr(start, ')');
                                                                                    if (end == NULL) {
                                                                                        yyerror("Invalid format: no closing parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Copy the content between parentheses into the identifier buffer
                                                                                    size_t length = end - start - 1;
                                                                                    if (length <= 0 || length >= sizeof(identifier)) {
                                                                                        yyerror("Invalid identifier length");
                                                                                        YYABORT;
                                                                                    }
                                                                                    strncpy(identifier, start + 1, length);
                                                                                    identifier[length] = '\0'; // Null-terminate the string

                                                                                    char buffer[256]; 
                                                                                    snprintf(buffer, sizeof(buffer), "%s[%s].max()", identifier,$3);
                                                                                    $$ = strdup(buffer);
                                                                                    
                                                                        }
    | dataframe '.' MEANFUNC '(' mean_body mean_numerical ')'
                                                                        { 
                                                                                    
                                                                                    char *input = $1; // $1 is the string passed from the 'dataframe' rule
                                                                                    char identifier[100]; // Buffer to store the extracted identifier

                                                                                    // Find the opening parenthesis
                                                                                    char *start = strchr(input, '(');
                                                                                    if (start == NULL) {
                                                                                        yyerror("Invalid format: no opening parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Find the closing parenthesis
                                                                                    char *end = strchr(start, ')');
                                                                                    if (end == NULL) {
                                                                                        yyerror("Invalid format: no closing parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Copy the content between parentheses into the identifier buffer
                                                                                    size_t length = end - start - 1;
                                                                                    if (length <= 0 || length >= sizeof(identifier)) {
                                                                                        yyerror("Invalid identifier length");
                                                                                        YYABORT;
                                                                                    }
                                                                                    strncpy(identifier, start + 1, length);
                                                                                    identifier[length] = '\0'; // Null-terminate the string

                                                                                    char buffer[256]; 
                                                                                    snprintf(buffer, sizeof(buffer), "%s.mean(%s%s)", identifier,$5,$6);
                                                                                    $$ = strdup(buffer);
                                                                                    
                                                                        }
    | dataframe '.' MODEFUNC '('  mean_body mean_numerical ')'
                                                                        { 
                                                                                    
                                                                                    char *input = $1; // $1 is the string passed from the 'dataframe' rule
                                                                                    char identifier[100]; // Buffer to store the extracted identifier

                                                                                    // Find the opening parenthesis
                                                                                    char *start = strchr(input, '(');
                                                                                    if (start == NULL) {
                                                                                        yyerror("Invalid format: no opening parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Find the closing parenthesis
                                                                                    char *end = strchr(start, ')');
                                                                                    if (end == NULL) {
                                                                                        yyerror("Invalid format: no closing parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Copy the content between parentheses into the identifier buffer
                                                                                    size_t length = end - start - 1;
                                                                                    if (length <= 0 || length >= sizeof(identifier)) {
                                                                                        yyerror("Invalid identifier length");
                                                                                        YYABORT;
                                                                                    }
                                                                                    strncpy(identifier, start + 1, length);
                                                                                    identifier[length] = '\0'; // Null-terminate the string

                                                                                    char buffer[256]; 
                                                                                    snprintf(buffer, sizeof(buffer), "%s.mean(%s%s)", identifier, $5,$6);
                                                                                    $$ = strdup(buffer);
                                                                                    
                                                                        }
    | dataframe '.' MEDIANFUNC '('  mean_body mean_numerical ')'
                                                                        { 
                                                                                    
                                                                                    char *input = $1; // $1 is the string passed from the 'dataframe' rule
                                                                                    char identifier[100]; // Buffer to store the extracted identifier

                                                                                    // Find the opening parenthesis
                                                                                    char *start = strchr(input, '(');
                                                                                    if (start == NULL) {
                                                                                        yyerror("Invalid format: no opening parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Find the closing parenthesis
                                                                                    char *end = strchr(start, ')');
                                                                                    if (end == NULL) {
                                                                                        yyerror("Invalid format: no closing parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Copy the content between parentheses into the identifier buffer
                                                                                    size_t length = end - start - 1;
                                                                                    if (length <= 0 || length >= sizeof(identifier)) {
                                                                                        yyerror("Invalid identifier length");
                                                                                        YYABORT;
                                                                                    }
                                                                                    strncpy(identifier, start + 1, length);
                                                                                    identifier[length] = '\0'; // Null-terminate the string

                                                                                    char buffer[256]; 
                                                                                    snprintf(buffer, sizeof(buffer), "%s.mean(%s%s)", identifier, $5,$6);
                                                                                    $$ = strdup(buffer);
                                                                                    
                                                                        }
    | dataframe '.' SUMFUNC '(' mean_body mean_numerical ')'
                                                                        { 
                                                                                    
                                                                                    char *input = $1; // $1 is the string passed from the 'dataframe' rule
                                                                                    char identifier[100]; // Buffer to store the extracted identifier

                                                                                    // Find the opening parenthesis
                                                                                    char *start = strchr(input, '(');
                                                                                    if (start == NULL) {
                                                                                        yyerror("Invalid format: no opening parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Find the closing parenthesis
                                                                                    char *end = strchr(start, ')');
                                                                                    if (end == NULL) {
                                                                                        yyerror("Invalid format: no closing parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Copy the content between parentheses into the identifier buffer
                                                                                    size_t length = end - start - 1;
                                                                                    if (length <= 0 || length >= sizeof(identifier)) {
                                                                                        yyerror("Invalid identifier length");
                                                                                        YYABORT;
                                                                                    }
                                                                                    strncpy(identifier, start + 1, length);
                                                                                    identifier[length] = '\0'; // Null-terminate the string

                                                                                    char buffer[256]; 
                                                                                    snprintf(buffer, sizeof(buffer), "%s.mean(%s%s)", identifier, $5,$6);
                                                                                    $$ = strdup(buffer);
                                                                                    
                                                                        }
    | dataframe '.' MINFUNC '(' mean_body mean_numerical ')'
                                                                        { 
                                                                                    
                                                                                    char *input = $1; // $1 is the string passed from the 'dataframe' rule
                                                                                    char identifier[100]; // Buffer to store the extracted identifier

                                                                                    // Find the opening parenthesis
                                                                                    char *start = strchr(input, '(');
                                                                                    if (start == NULL) {
                                                                                        yyerror("Invalid format: no opening parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Find the closing parenthesis
                                                                                    char *end = strchr(start, ')');
                                                                                    if (end == NULL) {
                                                                                        yyerror("Invalid format: no closing parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Copy the content between parentheses into the identifier buffer
                                                                                    size_t length = end - start - 1;
                                                                                    if (length <= 0 || length >= sizeof(identifier)) {
                                                                                        yyerror("Invalid identifier length");
                                                                                        YYABORT;
                                                                                    }
                                                                                    strncpy(identifier, start + 1, length);
                                                                                    identifier[length] = '\0'; // Null-terminate the string

                                                                                    char buffer[256]; 
                                                                                    snprintf(buffer, sizeof(buffer), "%s.mean(%s%s)", identifier, $5,$6);
                                                                                    $$ = strdup(buffer);
                                                                                    
                                                                        }
    | dataframe '.' MAXFUNC '(' mean_body mean_numerical ')'
                                                                        { 
                                                                                    
                                                                                    char *input = $1; // $1 is the string passed from the 'dataframe' rule
                                                                                    char identifier[100]; // Buffer to store the extracted identifier

                                                                                    // Find the opening parenthesis
                                                                                    char *start = strchr(input, '(');
                                                                                    if (start == NULL) {
                                                                                        yyerror("Invalid format: no opening parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Find the closing parenthesis
                                                                                    char *end = strchr(start, ')');
                                                                                    if (end == NULL) {
                                                                                        yyerror("Invalid format: no closing parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Copy the content between parentheses into the identifier buffer
                                                                                    size_t length = end - start - 1;
                                                                                    if (length <= 0 || length >= sizeof(identifier)) {
                                                                                        yyerror("Invalid identifier length");
                                                                                        YYABORT;
                                                                                    }
                                                                                    strncpy(identifier, start + 1, length);
                                                                                    identifier[length] = '\0'; // Null-terminate the string

                                                                                    char buffer[256]; 
                                                                                    snprintf(buffer, sizeof(buffer), "%s.mean(%s%s)", identifier, $5,$6);
                                                                                    $$ = strdup(buffer);
                                                                                    
                                                                        }
    ;

function_call_statement:
    READCSVFUNC '(' CSVFILE readcsv_body ')'        { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "pd.read_csv(%s)\n", $3);
                                                                $$ = strdup(buffer);
                                                    }
    | dataframe '.' HEADFUNC '(' head_tail_body ')'
                                                    { 
                                                                
                                                                char *input = $1; // $1 is the string passed from the 'dataframe' rule
                                                                char identifier[100]; // Buffer to store the extracted identifier

                                                                // Find the opening parenthesis
                                                                char *start = strchr(input, '(');
                                                                if (start == NULL) {
                                                                    yyerror("Invalid format: no opening parenthesis found");
                                                                    YYABORT;
                                                                }

                                                                // Find the closing parenthesis
                                                                char *end = strchr(start, ')');
                                                                if (end == NULL) {
                                                                    yyerror("Invalid format: no closing parenthesis found");
                                                                    YYABORT;
                                                                }

                                                                // Copy the content between parentheses into the identifier buffer
                                                                size_t length = end - start - 1;
                                                                if (length <= 0 || length >= sizeof(identifier)) {
                                                                    yyerror("Invalid identifier length");
                                                                    YYABORT;
                                                                }
                                                                strncpy(identifier, start + 1, length);
                                                                identifier[length] = '\0'; // Null-terminate the string

    
                                                                fprintf(yacc_output,"%s.head(%s)\n", identifier, $5);
                                                    }    
    | dataframe '.' TAILFUNC '(' head_tail_body ')'
                                                    { 
                                                                
                                                                char *input = $1; // $1 is the string passed from the 'dataframe' rule
                                                                char identifier[100]; // Buffer to store the extracted identifier

                                                                // Find the opening parenthesis
                                                                char *start = strchr(input, '(');
                                                                if (start == NULL) {
                                                                    yyerror("Invalid format: no opening parenthesis found");
                                                                    YYABORT;
                                                                }

                                                                // Find the closing parenthesis
                                                                char *end = strchr(start, ')');
                                                                if (end == NULL) {
                                                                    yyerror("Invalid format: no closing parenthesis found");
                                                                    YYABORT;
                                                                }

                                                                // Copy the content between parentheses into the identifier buffer
                                                                size_t length = end - start - 1;
                                                                if (length <= 0 || length >= sizeof(identifier)) {
                                                                    yyerror("Invalid identifier length");
                                                                    YYABORT;
                                                                }
                                                                strncpy(identifier, start + 1, length);
                                                                identifier[length] = '\0'; // Null-terminate the string

    
                                                                fprintf(yacc_output,"%s.tail(%s)\n", identifier, $5);
                                                    }  
    | dataframe '.' RESETINDEXFUNC '(' reset_index_body_drop reset_index_body_implace ')'
                                                                    { 
                                                                        char *input = $1; // $1 is the string passed from the 'dataframe' rule
                                                                        char identifier[100]; // Buffer to store the extracted identifier

                                                                        // Find the opening parenthesis
                                                                        char *start = strchr(input, '(');
                                                                        if (start == NULL) {
                                                                            yyerror("Invalid format: no opening parenthesis found");
                                                                            YYABORT;
                                                                        }

                                                                        // Find the closing parenthesis
                                                                        char *end = strchr(start, ')');
                                                                        if (end == NULL) {
                                                                            yyerror("Invalid format: no closing parenthesis found");
                                                                            YYABORT;
                                                                        }

                                                                        // Copy the content between parentheses into the identifier buffer
                                                                        size_t length = end - start - 1;
                                                                        if (length <= 0 || length >= sizeof(identifier)) {
                                                                            yyerror("Invalid identifier length");
                                                                            YYABORT;
                                                                        }
                                                                        strncpy(identifier, start + 1, length);
                                                                        identifier[length] = '\0'; // Null-terminate the string

                                                                        if(!strcmp($6, "inplace = False"))
                                                                        {
                                                                            if(!strcmp($5,"drop = True"))
                                                                            {
                                                                                
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s.reset_index(%s %s)\n",identifier,$5,$6);
                                                                                $$ = strdup(buffer);
                                                                            }
                                                                            else
                                                                            {
                                                                                
                                                                                
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s.set_index(%s)\n",identifier,$5);
                                                                                $$ = strdup(buffer);
                                                                            }
                                                                        }
                                                                        else
                                                                        {
                                                                            if(!strcmp($5,"drop = True"))
                                                                            {
                                                                                fprintf(yacc_output, "%s.reset_index(%s %s)\n",identifier,$5,$6);
                                                                            }
                                                                            else
                                                                            {
                                                                                
                                                                                fprintf(yacc_output, "%s.set_index(%s, inplace = True)\n",identifier,$5);
                                                                            }
                                                                        }
                                                                    }
    | dataframe '.' TOCSVFUNC '(' CSVFILE readcsv_body ')'
                                                    { 
                                                                char *input = $1; // $1 is the string passed from the 'dataframe' rule
                                                                char identifier[100]; // Buffer to store the extracted identifier

                                                                // Find the opening parenthesis
                                                                char *start = strchr(input, '(');
                                                                if (start == NULL) {
                                                                    yyerror("Invalid format: no opening parenthesis found");
                                                                    YYABORT;
                                                                }

                                                                // Find the closing parenthesis
                                                                char *end = strchr(start, ')');
                                                                if (end == NULL) {
                                                                    yyerror("Invalid format: no closing parenthesis found");
                                                                    YYABORT;
                                                                }

                                                                // Copy the content between parentheses into the identifier buffer
                                                                size_t length = end - start - 1;
                                                                if (length <= 0 || length >= sizeof(identifier)) {
                                                                    yyerror("Invalid identifier length");
                                                                    YYABORT;
                                                                }
                                                                strncpy(identifier, start + 1, length);
                                                                identifier[length] = '\0'; // Null-terminate the string

                                                                char buffer[256]; 
                                                                fprintf(yacc_output, "identifier.to_csv(%s)\n", $6);
                                                    }
    | dataframe '.' DESCRIBEFUNC '(' ')'             
                                                    {
                                                                char *input = $1; // $1 is the string passed from the 'dataframe' rule
                                                                char identifier[100]; // Buffer to store the extracted identifier

                                                                // Find the opening parenthesis
                                                                char *start = strchr(input, '(');
                                                                if (start == NULL) {
                                                                    yyerror("Invalid format: no opening parenthesis found");
                                                                    YYABORT;
                                                                }

                                                                // Find the closing parenthesis
                                                                char *end = strchr(start, ')');
                                                                if (end == NULL) {
                                                                    yyerror("Invalid format: no closing parenthesis found");
                                                                    YYABORT;
                                                                }

                                                                // Copy the content between parentheses into the identifier buffer
                                                                size_t length = end - start - 1;
                                                                if (length <= 0 || length >= sizeof(identifier)) {
                                                                    yyerror("Invalid identifier length");
                                                                    YYABORT;
                                                                }
                                                                strncpy(identifier, start + 1, length);
                                                                identifier[length] = '\0'; // Null-terminate the string

                                                                fprintf(yacc_output,"%s.describe()\n",identifier);
                                                    }
    | dataframe '.' MISSVALUEFUNC '(' missing_value_body_confirm missing_value_body ')'
                                                    { 
                                                                
                                                                char *input = $1; // $1 is the string passed from the 'dataframe' rule
                                                                char identifier[100]; // Buffer to store the extracted identifier

                                                                // Find the opening parenthesis
                                                                char *start = strchr(input, '(');
                                                                if (start == NULL) {
                                                                    yyerror("Invalid format: no opening parenthesis found");
                                                                    YYABORT;
                                                                }

                                                                // Find the closing parenthesis
                                                                char *end = strchr(start, ')');
                                                                if (end == NULL) {
                                                                    yyerror("Invalid format: no closing parenthesis found");
                                                                    YYABORT;
                                                                }

                                                                // Copy the content between parentheses into the identifier buffer
                                                                size_t length = end - start - 1;
                                                                if (length <= 0 || length >= sizeof(identifier)) {
                                                                    yyerror("Invalid identifier length");
                                                                    YYABORT;
                                                                }
                                                                strncpy(identifier, start + 1, length);
                                                                identifier[length] = '\0'; // Null-terminate the string
    
                                                

                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s.%s%s)\n", identifier, $5, $6);
                                                                $$ = strdup(buffer);
                                                                

                                                    }
    | dataframe '.' EXCHANGEVALUEFUNC '(' to_exchange ',' exchange_value exchange_body_optional ')'
                                                            { 
                                                                char *input = $1; // $1 is the string passed from the 'dataframe' rule
                                                                char identifier[100]; // Buffer to store the extracted identifier

                                                                // Find the opening parenthesis
                                                                char *start = strchr(input, '(');
                                                                if (start == NULL) {
                                                                    yyerror("Invalid format: no opening parenthesis found");
                                                                    YYABORT;
                                                                }

                                                                // Find the closing parenthesis
                                                                char *end = strchr(start, ')');
                                                                if (end == NULL) {
                                                                    yyerror("Invalid format: no closing parenthesis found");
                                                                    YYABORT;
                                                                }

                                                                // Copy the content between parentheses into the identifier buffer
                                                                size_t length = end - start - 1;
                                                                if (length <= 0 || length >= sizeof(identifier)) {
                                                                    yyerror("Invalid identifier length");
                                                                    YYABORT;
                                                                }
                                                                strncpy(identifier, start + 1, length);
                                                                identifier[length] = '\0'; // Null-terminate the string

                                                                char buffer[256]; 
                                                                fprintf(yacc_output, "%s.replace(%s,%s%s)", identifier,$5,$7,$8);
                                                            }  
    | CONCATFUNC '(' '[' dataframe_list ']' ',' concat_body ')'
                                                                            { 
                                                                                fprintf(yacc_output,"pd.concat([%s],%s)", $4,$7);
                                                                            }
    | MERGEFUNC '(' dataframe ',' dataframe ',' how_clause ',' on_clause ',' suffixes_clause ')'
                                                                            { 
                                                                                char *input = $3; // $1 is the string passed from the 'dataframe' rule
                                                                                char identifier[100]; // Buffer to store the extracted identifier

                                                                                // Find the opening parenthesis
                                                                                char *start = strchr(input, '(');
                                                                                if (start == NULL) {
                                                                                    yyerror("Invalid format: no opening parenthesis found");
                                                                                    YYABORT;
                                                                                }

                                                                                // Find the closing parenthesis
                                                                                char *end = strchr(start, ')');
                                                                                if (end == NULL) {
                                                                                    yyerror("Invalid format: no closing parenthesis found");
                                                                                    YYABORT;
                                                                                }

                                                                                // Copy the content between parentheses into the identifier buffer
                                                                                size_t length = end - start - 1;
                                                                                if (length <= 0 || length >= sizeof(identifier)) {
                                                                                    yyerror("Invalid identifier length");
                                                                                    YYABORT;
                                                                                }
                                                                                strncpy(identifier, start + 1, length);
                                                                                identifier[length] = '\0'; // Null-terminate the string

                                                                                char *input2 = $5; // $1 is the string passed from the 'dataframe' rule
                                                                                char identifier2[100]; // Buffer to store the extracted identifier

                                                                                // Find the opening parenthesis
                                                                                char *start2 = strchr(input2, '(');
                                                                                if (start == NULL) {
                                                                                    yyerror("Invalid format: no opening parenthesis found");
                                                                                    YYABORT;
                                                                                }

                                                                                // Find the closing parenthesis
                                                                                char *end2 = strchr(start2, ')');
                                                                                if (end == NULL) {
                                                                                    yyerror("Invalid format: no closing parenthesis found");
                                                                                    YYABORT;
                                                                                }

                                                                                // Copy the content between parentheses into the identifier buffer
                                                                                size_t length2 = end2 - start2 - 1;
                                                                                if (length2 <= 0 || length2 >= sizeof(identifier2)) {
                                                                                    yyerror("Invalid identifier length");
                                                                                    YYABORT;
                                                                                }
                                                                                strncpy(identifier2, start2 + 1, length2);
                                                                                identifier2[length2] = '\0'; // Null-terminate the string

                                                                            
                                                                                fprintf(yacc_output,"pd.merge(%s,%s,%s,%s,%s)",identifier, identifier2, $7,$9,$11);
                                                                            }

    | IDENTIFIER '(' actual_parameters ')'                                  
                                                                            { 
                                                                                fprintf(yacc_output, "%s(%s)",$1, $3);
                                                                            }
    ;

concat_body:
    AXIS '=' axis_bit
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "axis = %d", $3);
                                                                                $$ = strdup(buffer);
                                                                            }
    ;

dataframe_list:
    dataframe {
        char *input = $1; // $1 is the string passed from the 'dataframe' rule
        char identifier[100]; // Buffer to store the extracted identifier

        // Find the opening parenthesis
        char *start = strchr(input, '(');
        if (start == NULL) {
            yyerror("Invalid format: no opening parenthesis found");
            YYABORT;
        }

        // Find the closing parenthesis
        char *end = strchr(start, ')');
        if (end == NULL) {
            yyerror("Invalid format: no closing parenthesis found");
            YYABORT;
        }

        // Copy the content between parentheses into the identifier buffer
        size_t length = end - start - 1;
        if (length <= 0 || length >= sizeof(identifier)) {
            yyerror("Invalid identifier length");
            YYABORT;
        }
        strncpy(identifier, start + 1, length);
        identifier[length] = '\0'; // Null-terminate the string

        $$ = strdup(identifier); // Store the extracted identifier in $$
    }
    | 
        dataframe_list ',' dataframe {
            char *input = $3; // $1 is the string passed from the 'dataframe' rule
        char identifier[100]; // Buffer to store the extracted identifier

        // Find the opening parenthesis
        char *start = strchr(input, '(');
        if (start == NULL) {
            yyerror("Invalid format: no opening parenthesis found");
            YYABORT;
        }

        // Find the closing parenthesis
        char *end = strchr(start, ')');
        if (end == NULL) {
            yyerror("Invalid format: no closing parenthesis found");
            YYABORT;
        }

        // Copy the content between parentheses into the identifier buffer
        size_t length = end - start - 1;
        if (length <= 0 || length >= sizeof(identifier)) {
            yyerror("Invalid identifier length");
            YYABORT;
        }
        strncpy(identifier, start + 1, length);
        identifier[length] = '\0'; // Null-terminate the string
        char buffer[256]; // Buffer to combine identifiers with a comma
        snprintf(buffer, sizeof(buffer), "%s,%s", $1, identifier);
        $$ = strdup(buffer); // Store the concatenated string in $$
    }
    ;


to_exchange:
    REGX SINGLE_QUOTED_STRING
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "to_replace=r%s", $2);
                                                                                $$ = strdup(buffer);
                                                                            }
    ;

exchange_value:
    INTNUM                                                                  
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "value = %d", $1);
                                                                                $$ = strdup(buffer);
                                                                            }
    | FLOATNUM                                                              
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "value = %f", $1);
                                                                                $$ = strdup(buffer);
                                                                            }
    | EXPONENTIAL                                                           { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "value = %s", $1);
                                                                                $$ = strdup(buffer);
                                                                            }
    | PERCENTAGE                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "value = %s", $1);
                                                                                $$ = strdup(buffer);
                                                                            }
    | IDENTIFIER                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "value = '%s'", $1);
                                                                                $$ = strdup(buffer);
                                                                            }
    ;

exchange_body_optional:
    ',' INPLACE '=' BOOL exchange_body_optional
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), ",inplace = %s", $4);
                                                                                $$ = strdup(buffer);
                                                                            }   
    | ',' mean_body exchange_body_optional
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), ",%s", $2);
                                                                                $$ = strdup(buffer);
                                                                            }
    |                                                                       { 
                                                                                char buffer[256]; 
                                                                                buffer[0] = '\0';
                                                                                $$ = strdup(buffer);
                                                                            } 
    ;

missing_value_body_confirm:
    FILL ',' INTNUM   
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "fillna(value = %d", $3);
                                                                                $$ = strdup(buffer);
                                                                            }
    | FILL ',' aggregate_function_calls                 
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "fillna(value = %s", $3);
                                                                                $$ = strdup(buffer);
                                                                            }
    | FILL ',' METHOD '=' FFILL 
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "fillna(method = 'ffill'");
                                                                                $$ = strdup(buffer);
                                                                            }
    | FILL ',' METHOD '=' BFILL
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "fillna(method = 'bfill'");
                                                                                $$ = strdup(buffer);
                                                                            }
    | FILL ',' METHOD '=' INTERPOLATE
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "fillna(method = 'interpolate'");
                                                                                $$ = strdup(buffer);
                                                                            }
    | DROP
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "dropna(");
                                                                                $$ = strdup(buffer);
                                                                            }
    ;

missing_value_body:
    ',' INPLACE '=' BOOL missing_value_body
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), ",inplace = %s", $4);
                                                                                $$ = strdup(buffer);
                                                                            }
    | ',' mean_body missing_value_body
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), ",%s", $2);
                                                                                $$ = strdup(buffer);
                                                                            }
    |
                                                                            { 
                                                                                char buffer[256]; 
                                                                                buffer[0] = '\0';
                                                                                $$ = strdup(buffer);
                                                                            } 
    ;

mean_body:
    AXIS '=' axis_bit                   
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "axis = %d",$3);
                                                                                $$ = strdup(buffer);
                                                                            }  
    |               
                                                                           { 
                                                                                char buffer[256]; 
                                                                                buffer[0] = '\0';
                                                                                $$ = strdup(buffer);
                                                                            } 
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
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), ", numeric_only = %s",$4);
                                                                                $$ = strdup(buffer);
                                                                            }  
    | ',' SKIPNA '=' BOOL mean_numerical                                    { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), ", skip_na = %s",$4);
                                                                                $$ = strdup(buffer);
                                                                            } 
    | ',' USECOLS '=' '[' single_quoted_string_list ']' mean_numerical      
                                                                            { 
                                                                                char buffer[256]; 
                                                                                buffer[0] = '\0';
                                                                                $$ = strdup(buffer);
                                                                            } 
    |   
                                                                            { 
                                                                                char buffer[256]; 
                                                                                buffer[0] = '\0';
                                                                                $$ = strdup(buffer);
                                                                            } 
    ;

reset_index_body_drop:
    DROP '=' TRUE    
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "drop = True");
                                                                                $$ = strdup(buffer);
                                                                            }           
    | DROP '=' FALSE ',' USECOLS '=' '[' single_quoted_string_list ']'
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "[%s]",$8);
                                                                                $$ = strdup(buffer);
                                                                            }  
    ;

BOOL:
    TRUE        { $$ = $1; }
    | FALSE     { $$ = $1; }
    ;

reset_index_body_implace:
    ',' INPLACE '=' BOOL                                                    { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), ",inplace = %s",$4);
                                                                                $$ = strdup(buffer);
                                                                            }  
    |
                                                                            { 
                                                                                char buffer[256]; 
                                                                                buffer[0] = '\0';
                                                                                $$ = strdup(buffer);
                                                                            }
    ;

head_tail_body:
    INTNUM                                                  { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%d", $1);
                                                                $$ = strdup(buffer);
                                                            }
    |                          
                                                            { 
                                                                char buffer[256]; 
                                                                buffer[0] = '\0';
                                                                $$ = strdup(buffer);
                                                            }
    ;

readcsv_body:
    ',' SEP '=' SINGLE_QUOTED_STRING readcsv_body                           
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), ", sep = %s\n", $4);
                                                                $$ = strdup(buffer);
                                                            }
    | ',' HEADER '=' INTNUM readcsv_body
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), ", header = %d\n", $4);
                                                                $$ = strdup(buffer);
                                                            }
    | ',' INDEX_COL '=' INTNUM readcsv_body
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), ", index_col = %d\n", $4);
                                                                $$ = strdup(buffer);
                                                            }
    | ',' INDEX '=' BOOL readcsv_body
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), ", index = %s\n", $4);
                                                                $$ = strdup(buffer);
                                                            }
    | ',' USECOLS '=' '[' single_quoted_string_list ']' readcsv_body    
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), ", usecols = [%s]\n", $5);
                                                                $$ = strdup(buffer);
                                                            }                                  
    |                                                      
                                                            { 
                                                                char buffer[256]; 
                                                                buffer[0] = '\0';
                                                                $$ = strdup(buffer);
                                                            }
    ;

single_quoted_string_list:
    SINGLE_QUOTED_STRING                                   { $$ = $1; }
    | single_quoted_string_list ',' SINGLE_QUOTED_STRING   
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s , %s", $1,$3);
                                                                $$ = strdup(buffer);
                                                            }  
    ;


actual_parameters:
    expressions
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s", $1);
                                                                                $$ = strdup(buffer);
                                                                            }
    | actual_parameters ',' expressions
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s,%s", $1,$3);
                                                                                $$ = strdup(buffer);
                                                                            }
    ;

grouping:
    '(' expressions ')'                             
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "(%s)", $2);
                                                                                $$ = strdup(buffer);
                                                                            }
    ;

operators:
      '+' { $$ = strdup("+"); }
    | '-' { $$ = strdup("-"); }
    | '*' { $$ = strdup("*"); }
    | '/' { $$ = strdup("/"); }
    | '%' { $$ = strdup("%"); }
    | '&' { $$ = strdup("&"); }
    | '|' { $$ = strdup("|"); }
    | '^' { $$ = strdup("^"); }
    | '~' { $$ = strdup("~"); }
    ;

Loop_Statement:
    Sub_Loop_Statement                                                                  { 
                                                                                            char buffer[256]; 
                                                                                            snprintf(buffer, sizeof(buffer), "%s", $1);
                                                                                            $$ = strdup(buffer);
                                                                                        }
    ;

Sub_Loop_Statement:
    LOOP '(' initializtion SEMICOLON predicate_list SEMICOLON update ')'
    '{' loop_body '}'

                                                                                        {
                                                                                            char left[100], right[100];  // Buffers for the two parts
                                                                                                char *equal_sign;

                                                                                                // Find the '=' symbol in the string
                                                                                            char* input = $3;
                                                                                                equal_sign = strchr(input, '=');

                                                                                                if (equal_sign != NULL) {
                                                                                                    // Copy the part before '=' into 'left'
                                                                                                    size_t left_length = equal_sign - input;
                                                                                                    strncpy(left, input, left_length);
                                                                                                    left[left_length] = '\0';  // Null-terminate the string

                                                                                                    // Copy the part after '=' into 'right'
                                                                                                    strcpy(right, equal_sign + 1);

                                                                                                    // Output the results
                                                                                                    printf("Left: %s\n", left);
                                                                                                    printf("Right: %s\n", right);
                                                                                                } else {
                                                                                                    printf("Error: '=' not found in the string.\n");
                                                                                                } 
                                                                                            char buffer[256]; 
                                                                                            snprintf(buffer, sizeof(buffer), "for %s in range (%s)", $1,$3);
                                                                                            $$ = strdup(buffer);
                                                                                        }
    ;

initializtion:
    Identifier_List                 { $$ = strdup($1); }
    ;

Identifier_List:
    IDENTIFIER '=' INTNUM                                                               { 
                                                                                            char buffer[256]; 
                                                                                            snprintf(buffer, sizeof(buffer), "%s = %d", $1,$3);
                                                                                            $$ = strdup(buffer);
                                                                                        }
    | IDENTIFIER '=' FLOATNUM                                                           { 
                                                                                            char buffer[256]; 
                                                                                            snprintf(buffer, sizeof(buffer), "%s = %f", $1,$3);
                                                                                            $$ = strdup(buffer);
                                                                                        }
    ;

update:
    Function_Assignment_Statement
    ;

loop_body:
    statment_list   { $$ = strdup($1); }
    ;

statment_list:
    statement                           { $$ = strdup($1); } 
    | statment_list statement                               { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s%s", $1, $2);
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
    | Conditional_Statements
    | Loop_Statement
    | BREAK SEMICOLON
    | CONTINUE SEMICOLON
    | function_call_statement
    | Function_Assignment_Statement
    // |
    ;

Function_Assignment_Statement:
    IDENTIFIER '=' expressions                                                          { 
                                                                                            char buffer[256]; 
                                                                                            snprintf(buffer, sizeof(buffer), "%s = %s", $1 ,$3);
                                                                                            $$ = strdup(buffer);
                                                                                        }
    | dataframe_list '=' function_call_statement                                        { 
                                                                                            char buffer[256]; 
                                                                                            snprintf(buffer, sizeof(buffer), "%s = %s", $1,$3);
                                                                                            $$ = strdup(buffer);
                                                                                        }
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
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "how = %s", $3);
                                                                $$ = strdup(buffer);
                                                            } 
    ;

how_list:
    INNER                                                   { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "'%s'", $1);
                                                                $$ = strdup(buffer);
                                                            } 
    | RIGHT                                                 { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "'%s'", $1);
                                                                $$ = strdup(buffer);
                                                            } 
    | OUTER                                                 { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "'%s'", $1);
                                                                $$ = strdup(buffer);
                                                            } 
    ;

on_clause:
    ON_TOKEN '=' SINGLE_QUOTED_STRING                       { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "on = %s", $3);
                                                                $$ = strdup(buffer);
                                                            } 
    ;

suffixes_clause:
    SUFFIXES_TOKEN '=' '[' single_quoted_string_list ']'    { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "suffixes = [%s]", $4);
                                                                $$ = strdup(buffer);
                                                            } 
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

    yacc_output = fopen("../outputs/yacc_output.py", "w");
    fprintf(yacc_output, "import pandas as pd \nimport numpy as np \n \n");
    if(!yacc_output){
        perror("Error: Unable to open yacc_output.txt");
        fprintf(stderr, "Error: Unable to open yacc_output.txt");
    }
    lex_output = fopen("../outputs/lex_output.txt", "w");
    if(!lex_output){
        perror("Error: Unable to open lex_output.txt");
        fprintf(stderr, "Error: Unable to open lex_output.txt");
    }

    // Call yyparse to parse the input until EOF
    yyparse();
    // Clean up
    fclose(yyin);

    int runStatus = system("python3 ../outputs/yacc_output.py > ../outputs/printed1.cpp");

    // Check if the script executed successfully
    if (runStatus != 0) {
        fprintf(stderr, "Error running the Python script\n");
        return 1; // Exit with an error code
    }

    return 0;
}
