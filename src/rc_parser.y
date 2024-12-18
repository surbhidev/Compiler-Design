%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "typechecker.h"
#include <stdbool.h>
#include "read_sym_chk.h"
#include "head_tail_chk.h"
DataFrameManager df_manager;
#include "df_chks.h"
DataFrameStore store = createStore();
char* df_file;
char* column_name;
char* df_names[3];
int df_cnt =0;
int concat_axis = -1;
void yyerror(const char *s);

#ifdef __cplusplus
extern "C" {
#endif

int yylex();
int yyparse();
int yywrap();
int header_present=0,header=-1;

// Global var for indentation of loop body
int indent = 0;

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
%type <str> Function_Declaration argument_list print_expressions Loop_Statement Sub_Loop_Statement conditional_body
%type <str> initializtion Identifier_List update loop_body statment_list statement Function_Assignment_Statement
%type <str> predicate_list predicate logical_operators comparison_operators Conditional_Statements else_if_loop 
%type <str> function_body Function_Loop_Statement return_statement Function_Print_Statement strings_list
%type <str> Conditional_Statements_1 Conditional_Statements_2 Conditional_Statements_3 Conditional_Statements_4
%token INT_TYPE FLOAT_TYPE STRING_TYPE SKIPNA
%token FILL FFILL BFILL INTERPOLATE METHOD REGX
%token SEP HEADER INDEX_COL USECOLS INDEX
%token DROP INPLACE AXIS NUMERIC
%token LOOP IF ELSE ELSEIF BREAK CONTINUE RTRN FUNC
%token <flt> FLOATNUM 
%token <str> STRING SINGLE_QUOTED_STRING
%token <str> TRUE FALSE NOT_OPERATOR
%token INPUT OUTPUT ADD_ASSIGN_OPERATOR SUB_ASSIGN_OPERATOR
%token MUL_ASSIGN_OPERATOR DIV_ASSIGN_OPERATOR MOD_ASSIGN_OPERATOR
%token LE_OPERATOR GE_OPERATOR DEQ_OPERATOR NE_OPERATOR
%token INTEGER SEMICOLON AND_OPERATOR OR_OPERATOR
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
    | Loop_Statement {fprintf(yacc_output,"%s\n", $1);}
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
    

assignment_statement:
    IDENTIFIER '=' expressions{
        fprintf(yacc_output,"%s = %s",$1,$3);
    }
    | dataframe_list '=' function_call_statement
                                                            {   df_manager.addDataFrame($1);
                                                                    char file_name[512];
								    strncpy(file_name, df_file, sizeof(file_name) - 1);
								    file_name[sizeof(file_name) - 1] = '\0'; // Ensure null termination

								    // Strip surrounding quotes
								    strip_quotes(file_name);

								    // Define the prefix path
								    const char *prefix = "../build/";

								    // Buffer to store the full path
								    char full_path[512];
								    // Concatenate the prefix and the file name
                                                                snprintf(full_path, sizeof(full_path), "%s%s", prefix, file_name);
                                                                
                                                                adddfname(&store,$1,df_file);
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
    | {$$ = strdup("");}
    ;

function_body:
    '{' loop_body '}'
                                                    {
                                                        $$ = $2;
                                                    }
    | Function_Assignment_Statement SEMICOLON function_body  {char buffer[256]; 
                                        snprintf(buffer, sizeof(buffer), "%s\n%s", $1,$3);
                                        $$ = strdup(buffer);}
    | Function_Loop_Statement function_body {char buffer[256]; 
                                        snprintf(buffer, sizeof(buffer), "%s\n%s", $1,$2);
                                        $$ = strdup(buffer);}
    // | Identifier_List SEMICOLON function_body
    | Function_Print_Statement SEMICOLON function_body  {char buffer[256]; 
                                        snprintf(buffer, sizeof(buffer), "%s\n%s", $1,$3);
                                        $$ = strdup(buffer);}
    | RTRN return_statement SEMICOLON  {char buffer[256]; 
                                        snprintf(buffer, sizeof(buffer), "return %s\n", $2);
                                        $$ = strdup(buffer);}
    ;

return_statement:
    expressions {$$ = $1;}
    ;

Function_Print_Statement:
    PRINT '(' print_expressions ')' {char buffer[256]; 
                                        snprintf(buffer, sizeof(buffer), "print(%s)\n", $3);
                                        $$ = strdup(buffer);}
    ;

print_expressions:
    expressions {$$ = $1;}
    | strings_list {$$ = $1;}
    | print_expressions ',' strings_list {char buffer[256]; 
                                        snprintf(buffer, sizeof(buffer), "%s,%s", $1,$3);
                                        $$ = strdup(buffer);}
    | print_expressions ',' expressions {char buffer[256]; 
                                        snprintf(buffer, sizeof(buffer), "%s,%s", $1,$3);
                                        $$ = strdup(buffer);}
    | dataframe 
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
                                                                                    snprintf(buffer, sizeof(buffer), "%s", identifier);
                                                                                    df_names[df_cnt]=identifier;
                                                                                    df_cnt++;
                                                                                    $$ = strdup(buffer);
                                                                                    
                                                                                    
                                                                        }
    ;

strings_list:
    STRING  {$$ = $1;}
    ;

Function_Loop_Statement:
    Sub_Loop_Statement {$$ = $1;}
    ;

Print_Statement:
    PRINT '(' print_expressions ')' SEMICOLON { fprintf(yacc_output, "print(%s)", $3);}
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
    READCSVFUNC '(' CSVFILE readcsv_body ')'        {           if(header_present == 1){
                                                                   
                                                                   is_valid_header_row($3,header);
                                               
                                                                 }
                                                                process_csvfile($3);
                                                                df_file = $3;
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
                                                                                    char buffer[256]; 
                                                                                    snprintf(buffer, sizeof(buffer), "%s.head(%s)", identifier, $5);
                                                                                    $$ = strdup(buffer);

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
                                                                char buffer[256]; 
                                                                                    snprintf(buffer, sizeof(buffer), "%s.tail(%s)", identifier, $5);
                                                                                    $$ = strdup(buffer);

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
                                                                fprintf(yacc_output, "%s.to_csv(%s %s)\n",identifier, $5,$6);
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
                                                                            if(concat_axis == 1){
                                                                                    
//haveSameNumberOfRows(findDataFrameNameByFilePath(&store,df_names[0]),findDataFrameNameByFilePath(&store,df_names[1]));
                                                                                 }else{
                                                                               //haveSameNumberOfColumns(findDataFrameNameByFilePath(&store,df_names[0]),findDataFrameNameByFilePath(&store,df_names[1]));  
                                                                                 
                                                                                 }
                                                                                fprintf(yacc_output,"pd.concat([%s],%s)", $4,$7);
                                                                            }
    | MERGEFUNC '(' dataframe ',' dataframe ',' how_clause ',' on_clause ',' suffixes_clause ')'
                                                                            { //printf("csv1=%s,csv2=%s",findDataFrameNameByFilePath(&store,$3),findDataFrameNameByFilePath(&store,$5));
                                                                            //columnExistsInBoth(findDataFrameNameByFilePath($3),findDataFrameNameByFilePath($4));
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
                                                                            {   concat_axis = $3;
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
                                                            {   is_valid_delimiter($4);
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), ", sep = %s\n", $4);
                                                                $$ = strdup(buffer);
                                                            }
    | ',' HEADER '=' INTNUM readcsv_body
                                                            {   header_present=1;
                                                                header=$4;
                                                                
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
Sub_Loop_Statement                      { 
                                            indent += 1;
                                            char buffer[256]; 
                                            snprintf(buffer, sizeof(buffer), "%s", $1);
                                            $$ = strdup(buffer);
                                           // indent -= 1;
                                        }
    ;

Sub_Loop_Statement:
    LOOP '(' initializtion SEMICOLON predicate_list SEMICOLON update ')'
    '{' loop_body '}'
                    {
                        char buffer[256]; 
                        snprintf(buffer, sizeof(buffer), "%s\nwhile(%s):\n%s\n\t%s", $3, $5, $10, $7);
                        $$ = strdup(buffer);
                    }
    ;

initializtion:
    Identifier_List                 { $$ = strdup($1); }
    ;

Identifier_List:
    IDENTIFIER '=' INTNUM           { 
                                        char buffer[256]; 
                                        snprintf(buffer, sizeof(buffer), "%s = %d", $1,$3);
                                        $$ = strdup(buffer);
                                    }
    | IDENTIFIER '=' FLOATNUM       { 
                                        char buffer[256]; 
                                        snprintf(buffer, sizeof(buffer), "%s = %f", $1,$3);
                                        $$ = strdup(buffer);
                                    }
    ;

update:
    Function_Assignment_Statement { $$ = strdup($1); }
    ;

loop_body:
    statment_list   { $$ = strdup($1); }
    ;

statment_list:
    statement                           {  
                                            char buffer[256] ;
                                            snprintf(buffer, sizeof(buffer), "\t%s\n", $1); 
                                            $$ = strdup(buffer);
                                        } 
    | statment_list statement           { 
                                            char buffer[256]; 
                                            snprintf(buffer, sizeof(buffer), "%s\t%s", $1, $2);
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
    | Conditional_Statements            {$$ = $1;}
    | Loop_Statement                    {$$ = $1;}                       
    | BREAK SEMICOLON                   { 
                                            char buffer[256]; 
                                            snprintf(buffer, sizeof(buffer), "break");
                                            $$ = strdup(buffer);
                                        }
    | CONTINUE SEMICOLON                { 
                                            char buffer[256]; 
                                            snprintf(buffer, sizeof(buffer), "continue");
                                            $$ = strdup(buffer);
                                        }
    | function_call_statement           {$$ = $1;}
    | Function_Assignment_Statement     {$$ = $1;}
    // |
    ;

Function_Assignment_Statement:
    IDENTIFIER '=' expressions                  { 
                                                    char buffer[256]; 
                                                    snprintf(buffer, sizeof(buffer), "%s = %s", $1 ,$3);
                                                    $$ = strdup(buffer);
                                                }
    | dataframe_list '=' function_call_statement            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s = %s", $1,$3);
                                                                $$ = strdup(buffer);
                                                            }
    ;

predicate_list:
    predicate { $$ = strdup($1);}
    | predicate_list logical_operators predicate            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s %s %s", $1,$2, $3);
                                                                $$ = strdup(buffer);
                                                            }
    | predicate_list comparison_operators predicate         { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s %s %s", $1,$2, $3);
                                                                $$ = strdup(buffer);
                                                            }
    ;

predicate:
    expressions comparison_operators expressions { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s %s %s", $1,$2, $3);
                                                                $$ = strdup(buffer);
                                                            }
    | expressions logical_operators expressions { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s %s %s", $1,$2, $3);
                                                                $$ = strdup(buffer);
                                                            }
    | NOT_OPERATOR expressions { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s %s", $1,$2);
                                                                $$ = strdup(buffer);
                                                            }
    ;

logical_operators:
    AND_OPERATOR    { $$ = strdup(" and ");}
    | OR_OPERATOR { $$ = strdup(" or ");}
    ;

comparison_operators:
    '<' {$$ = strdup("<");}
    | '>'   {$$ = strdup(">");}
    | LE_OPERATOR   {$$ = strdup(" <= ");}
    | GE_OPERATOR   {$$ = strdup(" >= ");}
    | NE_OPERATOR   {$$ = strdup(" != ");}
    | DEQ_OPERATOR  {$$ = strdup(" == ");}
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
    | LEFT                                                { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "'%s'", $1);
                                                                $$ = strdup(buffer);
                                                            } 
    ;

on_clause:
    ON_TOKEN '=' SINGLE_QUOTED_STRING                       {   column_name = $3;
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
    Conditional_Statements_1 { $$ = strdup($1);}
    | Conditional_Statements_2 { $$ = strdup($1);}
    | Conditional_Statements_3 { $$ = strdup($1);}
    | Conditional_Statements_4 { $$ = strdup($1);}
    ;

Conditional_Statements_1:
    IF '(' predicate_list ')' '{' conditional_body '}'
    else_if_loop
    ELSE '{' conditional_body '}'
    {
        indent += 1;
        fprintf(yacc_output, "if(%s):\n%s\n%selse:\n%s", $3, $6, $8, $11);
        indent -= 1;
    }
    ;

Conditional_Statements_2:
    IF '(' predicate_list ')' '{' conditional_body '}'
    else_if_loop
    {
        indent += 1;
        fprintf(yacc_output, "if(%s):\n%s\n%s", $3, $6, $8);
        indent -= 1;
    }
    ;

Conditional_Statements_3:
    IF '(' predicate_list ')' '{' conditional_body '}'
    ELSE '{' conditional_body '}'
    {
        indent += 1;
        fprintf(yacc_output, "if(%s):\n%s\nelse:\n%s", $3, $6, $10);
        indent -= 1;
    }
    ;

Conditional_Statements_4:
    IF '(' predicate_list ')' '{' conditional_body '}'
    {
        indent += 1;
        fprintf(yacc_output, "if(%s):\n%s\n", $3, $6);
        indent -= 1;
    }
    ;

else_if_loop:
    ELSEIF '(' predicate_list ')' '{' conditional_body '}' {
        indent += 1;
        char buffer[256];
        snprintf(buffer, sizeof(buffer), "elif(%s):\n%s\n", $3, $6);
        $$ = strdup(buffer);
        indent -= 1;
    }
    | else_if_loop ELSEIF '(' predicate_list ')' '{' conditional_body '}'
    { 
        char buffer[256]; 
        snprintf(buffer, sizeof(buffer), "%s\nelif(%s):\n%s\n", $1, $4, $7);
        $$ = strdup(buffer);
    }
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

    yacc_output = fopen("yacc_output.py", "w");
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

    int runStatus = system("python3 yacc_output.py");

    // Check if the script executed successfully
    if (runStatus != 0) {
        fprintf(stderr, "Error running the Python script\n");
        return 1; // Exit with an error code
    }

    return 0;
}
