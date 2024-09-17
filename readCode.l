/*
    LEXER FOR OUR CSV DATA PROCESSING DSL (Raccoons)
    File extension: .rc
*/

%{
#include <stdio.h>
#include <stdlib.h>
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
#define LE_OPERATOR 20
#define GE_OPERATOR 21
#define EQ_OPERATOR 22
#define NE_OPERATOR 23
#define PERCENTAGE 24
#define INTEGER 25
#define WORD 26
#define SEMICOLON 27
#define AND_OPERATOR 28
#define OR_OPERATOR 29
#define INC_OPERATOR 30
#define DEC_OPERATOR 31
#define RIGHTSHIFT_OPERATOR 32
#define LEFTSHIFT_OPERATOR 33
#define ELLIPSIS 34
#define EXPONENTIAL 35
#define DUST 36
#define CSVFILE 37
#define FUNCTIONCALL 38
#define PRINT 39
// Function prototypes
void count();
void comment_ml();
void comment_sl();

// File pointer for output
FILE *outfile;

// Globa counter
int column = 0;
%}
start \/\*
end \*\/
%%
"for"           {count(); fprintf(outfile, "FOR token at line %d\n", yylineno); return(FOR);}
"while"         {count(); fprintf(outfile, "WHILE token at line %d\n", yylineno); return(WHILE);}
"if"            {count(); fprintf(outfile, "IF token at line %d\n", yylineno); return(IF);}
"else"          {count(); fprintf(outfile, "ELSE token at line %d\n", yylineno); return(ELSE);}
"break"         {count(); fprintf(outfile, "BREAK token at line %d\n", yylineno); return(BREAK);}
"continue"      {count(); fprintf(outfile, "CONTINUE token at line %d\n", yylineno); return(CONTINUE);}
"int"           {count(); fprintf(outfile, "INT token at line  %d\n", yylineno); return(INT);}
"float"         {count(); fprintf(outfile, "FLOAT token at line %d\n", yylineno); return(FLOAT);}
"string"        {count(); fprintf(outfile, "STRING token at line %d\n", yylineno); return(STRING);}
"bool"          {count(); fprintf(outfile, "BOOL token at line %d\n", yylineno); return(BOOL);}
"true"          {count(); fprintf(outfile, "TRUE token at line %d\n", yylineno); return(TRUE);}
"false"         {count(); fprintf(outfile, "FALSE token at line %d\n", yylineno); return(FALSE);}
"input"         {count(); fprintf(outfile, "INPUT token at line %d\n", yylineno); return(INPUT);}
"output"        {count(); fprintf(outfile, "OUTPUT token at line %d\n", yylineno); return(OUTPUT);}
"print"         {count(); fprintf(outfile, "PRINT token at line %d\n", yylineno); return(PRINT);}
"+="            {count(); fprintf(outfile, "ADD_ASSIGN_OPERATOR at line %d\n", yylineno); return(ADD_ASSIGN_OPERATOR);}
"-="            {count(); fprintf(outfile, "SUB_ASSIGN_OPERATOR at line %d\n", yylineno); return(SUB_ASSIGN_OPERATOR);}
"*="            {count(); fprintf(outfile, "MUL_ASSIGN_OPERATOR at line %d\n", yylineno); return(MUL_ASSIGN_OPERATOR);}
"/="            {count(); fprintf(outfile, "DIV_ASSIGN_OPERATOR at line %d\n", yylineno); return(DIV_ASSIGN_OPERATOR);}
"%="            {count(); fprintf(outfile, "MOD_ASSIGN_OPERATOR at line %d\n", yylineno); return(MOD_ASSIGN_OPERATOR);}
"<="            {count(); fprintf(outfile, "LE_OPERATOR at line %d\n", yylineno); return(LE_OPERATOR);}
">="            {count(); fprintf(outfile, "GE_OPERATOR at line %d\n", yylineno); return(GE_OPERATOR);}
"=="            {count(); fprintf(outfile, "EQ_OPERATOR at line %d\n", yylineno); return(EQ_OPERATOR);}
"!="            {count(); fprintf(outfile, "NE_OPERATOR at line %d\n", yylineno); return(NE_OPERATOR);}
";"             {count(); fprintf(outfile, "SEMICOLON at line %d\n", yylineno); yylineno++; return(SEMICOLON);}
"+"             {count(); fprintf(outfile, "'+' token at line %d\n", yylineno); return('+');}
"-"             {count(); fprintf(outfile, "'-' token at line %d\n", yylineno); return('-');}
"*"             {count(); fprintf(outfile, "'*' token at line %d\n", yylineno); return('*');}
"/"             {count(); fprintf(outfile, "'/' token at line %d\n", yylineno); return('/');}
"%"             {count(); fprintf(outfile, "'%' token at line %d\n", yylineno); return('%');}
"="             {count(); fprintf(outfile, "'=' token at line %d\n", yylineno); return('=');}
"<"             {count(); fprintf(outfile, "'<' token at line %d\n", yylineno); return('<');}
">"             {count(); fprintf(outfile, "'>' token at line %d\n", yylineno); return('>');}
"&"             {count(); fprintf(outfile, "'&' token at line %d\n", yylineno); return('&');}
"^"			    {count(); fprintf(outfile, "'^' token at line %d\n", yylineno); return('^');}
"|"             {count(); fprintf(outfile, "'|' token at line %d\n", yylineno); return('|');}
"."			    {count(); fprintf(outfile, "'.' token at line %d\n", yylineno); return('.');}
"("			    {count(); fprintf(outfile, "'(' token at line %d\n", yylineno); return('(');}
")"			    {count(); fprintf(outfile, "')' token at line %d\n", yylineno); return(')');}
"["		        {count(); fprintf(outfile, "'[' token at line %d\n", yylineno); return('[');}
"]"     		{count(); fprintf(outfile, "']' token at line %d\n", yylineno); return(']');}
"{"		        {count(); fprintf(outfile, "'{' token at line %d\n", yylineno); return('{');}
"}"		        {count(); fprintf(outfile, "'}' token at line %d\n", yylineno); return('}');}
","			    {count(); fprintf(outfile, "',' token at line %d\n", yylineno); return(',');}
":"			    {count(); fprintf(outfile, "':' token at line %d\n", yylineno); return(':');}
"&&"			{count(); fprintf(outfile, "'AND_OPERATOR' token at line %d\n", yylineno); return(AND_OPERATOR);}
"||"			{count(); fprintf(outfile, "'OR_OPERATOR' token at line %d\n", yylineno); return(OR_OPERATOR);}
"++"			{count(); fprintf(outfile, "'INC_OPERATOR' token at line %d\n", yylineno); return(INC_OPERATOR);}
"--"			{count(); fprintf(outfile, "'DEC_OPERATOR' token at line %d\n", yylineno); return(DEC_OPERATOR);}
">>"			{count(); fprintf(outfile, "'RIGHTSHIFT_OPERATOR' token at line %d\n", yylineno); return(RIGHTSHIFT_OPERATOR);}
"<<"			{count(); fprintf(outfile, "'LEFTSHIFT_OPERATOR' token at line %d\n", yylineno); return(LEFTSHIFT_OPERATOR);}
"..."			{count(); fprintf(outfile, "'ELLIPSIS' token at line %d\n", yylineno); return(ELLIPSIS);}
[0-9]+(\.[0-9]+)?([eE][+-]?[0-9]+)  {count(); fprintf(outfile, "EXPONENTIAL at line %d\n", yylineno); return EXPONENTIAL;}
[0-9]+(\.[0-9]+)?% {count(); fprintf(outfile, "PERCENTAGE at line %d\n", yylineno); return PERCENTAGE;}
\"([^\"\\]|\\.)*\" {count(); fprintf(outfile, "%s at line %d\n", yytext, yylineno); return STRING;}
[A-Za-z_]+\.csv  {count(); fprintf(outfile, "%s at line %d\n", yytext, yylineno); return CSVFILE;}
[A-Za-z_]+          {count(); fprintf(outfile, "%s at line %d\n", yytext, yylineno); return WORD;}
\/\/[^\n]* { yylineno++; }
{start}([^*]|\*+[^/])*{end} { yylineno++; }
' {count(); fprintf(outfile, "' token at line %d\n", yylineno); return '\'';}
\" {count(); fprintf(outfile, "\" token at line %d\n", yylineno); return '\"';}
[ ]                 ;
. {count(); fprintf(outfile, "DUST: %s at line %d\n", yytext, yylineno); return DUST;}
%%
int main(int argc, char **argv)
{
    char filename[100];
    scanf("%s",filename);
    yyin = fopen(filename,"r");
    // Open the output file
    outfile = fopen("output.txt", "w");
    if (!outfile) {
        fprintf(stderr, "Error: Unable to open output file\n");
        exit(1);
    }

    // Call yylex to tokenize the input until EOF
    while (yylex())
        ;

    // Close the output file
    fclose(outfile);

    return 0;
}

int yywrap()
{
    return 1;
}

void count()
{
    // Tracking the column number in the current line
    int letter = 0;
    while (yytext[letter] != '\0') {
        if (yytext[letter] == '\n') {
            column = 0;
        } else {
            column++;
        }
        letter++;
    }
}
