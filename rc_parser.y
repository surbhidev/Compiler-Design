%{
#include <stdio.h>
#include <stdlib.h>

void yyerror(const char *s);
int yylex(); 

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

%token FOR WHILE IF ELSE BREAK CONTINUE RETURN
%token INT FLOAT STRING BOOL TRUE FALSE
%token INPUT OUTPUT ADD_ASSIGN_OPERATOR SUB_ASSIGN_OPERATOR
%token MUL_ASSIGN_OPERATOR DIV_ASSIGN_OPERATOR MOD_ASSIGN_OPERATOR
%token LE_OPERATOR GE_OPERATOR EQ_OPERATOR NE_OPERATOR PERCENTAGE
%token INTEGER IDENTIFIER SEMICOLON AND_OPERATOR OR_OPERATOR
%token INC_OPERATOR DEC_OPERATOR RIGHTSHIFT_OPERATOR LEFTSHIFT_OPERATOR
%token ELLIPSIS EXPONENTIAL DUST CSVFILE FUNCTIONCALL PRINT CONSTANT

%%

translation_unit:
    declaration
    | translation_unit declaration
    ;

declaration:
    type IDENTIFIER SEMICOLON
    | function_definition
    ;

type:
    INT
    | FLOAT
    | STRING
    | BOOL
    ;

function_definition:
    type IDENTIFIER '(' parameter_list ')' compound_statement
    ;

parameter_list:
    type IDENTIFIER
    | parameter_list ',' type IDENTIFIER
    | 
    ;

compound_statement:
    '{' statement_list '}'
    ;

statement_list:
    statement
    | statement_list statement
    ;

statement:
    if_statement
    | while_statement
    | for_statement
    | compound_statement
    | expression_statement
    | jump_statement
    ;

if_statement:
    IF '(' expression ')' statement %prec LOWER_THAN_ELSE
    | IF '(' expression ')' statement ELSE statement
    ;

while_statement:
    WHILE '(' expression ')' statement
    ;

for_statement:
    FOR '(' expression_statement expression_statement ')' statement
    | FOR '(' expression_statement expression_statement expression ')' statement
    ;

jump_statement:
    BREAK SEMICOLON
    | CONTINUE SEMICOLON
    | RETURN SEMICOLON
    | RETURN expression SEMICOLON
    ;

expression_statement:
    ';'
    | expression SEMICOLON
    ;

expression:
    IDENTIFIER
    | CONSTANT
    | expression '+' expression
    | expression '-' expression
    | expression '*' expression
    | expression '/' expression
    | expression '%' expression
    | '(' expression ')'
    ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
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
