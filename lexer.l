%{
#include <stdio.h>
#include <ctype.h>

#define FOR 1
#define WHILE 2
#define IF 3
#define ELSE 4
#define BREAK 5
#define CONTINUE 6
#define INT 7
#define FLOAT 8
#define STRING 9
#define BOOL 10
#define TRUE 11
#define FALSE 12
#define INPUT 13
#define OUTPUT 14
#define ADD_ASSIGN_OPERATOR 15
#define SUB_ASSIGN_OPERATOR 16
#define MUL_ASSIGN_OPERATOR 17
#define DIV_ASSIGN_OPERATOR 18
#define MOD_ASSIGN_OPERATOR 19
#define RIGHTSHIFT_OPERATOR 20
#define LEFTSHIFT_OPERATOR 21
#define INC_OPERATOR 22
#define DEC_OPERATOR 23
#define AND_OPERATOR 24
#define OR_OPERATOR 25
#define LE_OPERATOR 26
#define GE_OPERATOR 27
#define EQ_OPERATOR 28
#define NE_OPERATOR 29
#define INTEGER 30
#define WORD 31
#define DOUBLE_QUOTE 32
#define SINGLE_QUOTE 33

void count();
void comment_ml();
void comment_sl();
%}

%%

\/\/[^\n]*                { comment_sl(); }    // Single-line comment
\/\*([^*]|\*+[^/])*\*\/   { comment_ml(); }    // Multi-line comment


"for"           { printf("FOR keyword found\n"); count(); return(FOR); }
"while"         { printf("WHILE keyword found\n"); count(); return(WHILE); }
"if"            { printf("IF keyword found\n"); count(); return(IF); }
"else"          { printf("ELSE keyword found\n"); count(); return(ELSE); }
"break"         { printf("BREAK keyword found\n"); count(); return(BREAK); }
"continue"      { printf("CONTINUE keyword found\n"); count(); return(CONTINUE); }

"int"           { printf("INT type found\n"); count(); return(INT); }
"float"         { printf("FLOAT type found\n"); count(); return(FLOAT); }
"string"        { printf("STRING type found\n"); count(); return(STRING); }
"bool"          { printf("BOOL type found\n"); count(); return(BOOL); }

"true"          { printf("TRUE value found\n"); count(); return(TRUE); }
"false"         { printf("FALSE value found\n"); count(); return(FALSE); }

"input"         { printf("INPUT found\n"); count(); return(INPUT); }
"output"        { printf("OUTPUT found\n"); count(); return(OUTPUT); }

"+="            { printf("ADD_ASSIGN_OPERATOR found\n"); count(); return(ADD_ASSIGN_OPERATOR); }
"-="            { printf("SUB_ASSIGN_OPERATOR found\n"); count(); return(SUB_ASSIGN_OPERATOR); }
"*="            { printf("MUL_ASSIGN_OPERATOR found\n"); count(); return(MUL_ASSIGN_OPERATOR); }
"/="            { printf("DIV_ASSIGN_OPERATOR found\n"); count(); return(DIV_ASSIGN_OPERATOR); }
"%="            { printf("MOD_ASSIGN_OPERATOR found\n"); count(); return(MOD_ASSIGN_OPERATOR); }
">>"            { printf("RIGHTSHIFT_OPERATOR found\n"); count(); return(RIGHTSHIFT_OPERATOR); }
"<<"            { printf("LEFTSHIFT_OPERATOR found\n"); count(); return(LEFTSHIFT_OPERATOR); }
"++"            { printf("INC_OPERATOR found\n"); count(); return(INC_OPERATOR); }
"--"            { printf("DEC_OPERATOR found\n"); count(); return(DEC_OPERATOR); }
"&&"            { printf("AND_OPERATOR found\n"); count(); return(AND_OPERATOR); }
"||"            { printf("OR_OPERATOR found\n"); count(); return(OR_OPERATOR); }
"<="            { printf("LE_OPERATOR found\n"); count(); return(LE_OPERATOR); }
">="            { printf("GE_OPERATOR found\n"); count(); return(GE_OPERATOR); }
"=="            { printf("EQ_OPERATOR found\n"); count(); return(EQ_OPERATOR); }
"!="            { printf("NE_OPERATOR found\n"); count(); return(NE_OPERATOR); }


"{"             { printf("Left brace '{' found\n"); count(); return('{'); }
"}"             { printf("Right brace '}' found\n"); count(); return('}'); }
","             { printf("Comma ',' found\n"); count(); return(','); }
":"             { printf("Colon ':' found\n"); count(); return(':'); }
"="             { printf("Assignment '=' found\n"); count(); return('='); }
"("             { printf("Left parenthesis '(' found\n"); count(); return('('); }
")"             { printf("Right parenthesis ')' found\n"); count(); return(')'); }
"["             { printf("Left bracket '[' found\n"); count(); return('['); }
"]"             { printf("Right bracket ']' found\n"); count(); return(']'); }
"."             { printf("Dot '.' found\n"); count(); return('.'); }
";"             { printf("semiColon ';' found\n"); count(); return(';'); }
\"             { printf("DOUBLE_QUOTE found\n"); count(); return DOUBLE_QUOTE; }
\'             { printf("SINGLE_QUOTE found\n"); count(); return SINGLE_QUOTE; }


"&"             { printf("Bitwise AND '&' found\n"); count(); return('&'); }
"!"             { printf("Logical NOT '!' found\n"); count(); return('!'); }
"~"             { printf("Bitwise NOT '~' found\n"); count(); return('~'); }
"*"             { printf("Multiplication '*' found\n"); count(); return('*'); }
"/"             { printf("Division '/' found\n"); count(); return('/'); }
"%"             { printf("Modulo '%' found\n"); count(); return('%'); }
"-"             { printf("Subtraction '-' found\n"); count(); return('-'); }
"+"             { printf("Addition '+' found\n"); count(); return('+'); }
"<"             { printf("Less than '<' found\n"); count(); return('<'); }
">"             { printf("Greater than '>' found\n"); count(); return('>'); }
"^"             { printf("Bitwise XOR '^' found\n"); count(); return('^'); }
"|"             { printf("Bitwise OR '|' found\n"); count(); return('|'); }
"?"             { printf("Ternary operator '?' found\n"); count(); return('?'); }

[0-9]+(\.[0-9]+)?([eE][+-]?[0-9]+)?   { printf("FLOAT number found: %s\n", yytext); count(); return FLOAT; }

\"([^\"\\]|\\.)*\"                    { printf("STRING literal found: %s\n", yytext); count(); return STRING; }

[A-Za-z_]+                           { printf("WORD found: %s\n", yytext); count(); return(WORD); }

.                                     { printf("Unrecognized character: %c\n", yytext[0]); }  
[ \t\n\r]+                              ;  

%%

int column = 0; 

int yywrap() {
    return 1;
}

void comment_ml() {
    printf("Multi-line comment found\n");
}

void comment_sl() {
    printf("Single-line comment found\n");
}

void count() {
    int letter = 0;
    // Loop through the yytext to count columns
    while (yytext[letter] != '\0') {
        if (yytext[letter] == '\n') {
            column = 0;
        } else {
            column++;
        }
        letter++;
    }
}

// Main function to process the input and print tokens
int main(int argc, char **argv) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    FILE *input_file = fopen(argv[1], "r");
    if (!input_file) {
        perror("Error opening file");
        return 1;
    }

    // Set the input file for the lexer
    yyin = input_file;

    int token;
    while ((token = yylex())) {
        printf("Token: %d\n", token);
    }

    fclose(input_file);
    return 0;
}
