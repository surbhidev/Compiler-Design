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

// Global counter
int column = 0;
%}
start \/\*
end \*\/
%%
"for"           {count(); fprintf(outfile, "< | KEYWORD,(%s) | >",yytext); return(FOR);}
"while"         {count(); fprintf(outfile, "< | KEYWORD,(%s) | >",yytext); return(WHILE);}
"if"            {count(); fprintf(outfile, "< | KEYWORD,(%s) | >",yytext); return(IF);}
"else"          {count(); fprintf(outfile, "< | KEYWORD,(%s) | >",yytext); return(ELSE);}
"break"         {count(); fprintf(outfile, "< | KEYWORD,(%s) | >",yytext); return(BREAK);}
"continue"      {count(); fprintf(outfile, "< | KEYWORD,(%s) | >",yytext); return(CONTINUE);}
"int"           {count(); fprintf(outfile, "< | KEYWORD,(%s) | >",yytext); return(INT);}
"float"         {count(); fprintf(outfile, "< | KEYWORD,(%s) | >",yytext); return(FLOAT);}
"string"        {count(); fprintf(outfile, "< | KEYWORD,(%s) | >",yytext); return(STRING);}
"bool"          {count(); fprintf(outfile, "< | KEYWORD,(%s) | >",yytext); return(BOOL);}
"true"          {count(); fprintf(outfile, "< | KEYWORD,(%s) | >",yytext); return(TRUE);}
"false"         {count(); fprintf(outfile, "< | KEYWORD,(%s) | >",yytext); return(FALSE);}
"input"         {count(); fprintf(outfile, "< | KEYWORD,(%s) | >",yytext); return(INPUT);}
"output"        {count(); fprintf(outfile, "< | KEYWORD,(%s) | >",yytext); return(OUTPUT);}
"print"         {count(); fprintf(outfile, "< | KEYWORD,(%s) | >",yytext); return(PRINT);}
"+="            {count(); fprintf(outfile, "< | OPERATOR,(%s) | >",yytext); return(ADD_ASSIGN_OPERATOR);}
"-="            {count(); fprintf(outfile, "< | OPERATOR,(%s) | >",yytext); return(SUB_ASSIGN_OPERATOR);}
"*="            {count(); fprintf(outfile, "< | OPERATOR,(%s) | >",yytext); return(MUL_ASSIGN_OPERATOR);}
"/="            {count(); fprintf(outfile, "< | OPERATOR,(%s) | >",yytext); return(DIV_ASSIGN_OPERATOR);}
"%="            {count(); fprintf(outfile, "< | OPERATOR,(%s) | >",yytext); return(MOD_ASSIGN_OPERATOR);}
"<="            {count(); fprintf(outfile, "< | OPERATOR,(%s) | >",yytext); return(LE_OPERATOR);}
">="            {count(); fprintf(outfile, "< | OPERATOR,(%s) | >",yytext); return(GE_OPERATOR);}
"=="            {count(); fprintf(outfile, "< | OPERATOR,(%s) | >",yytext); return(EQ_OPERATOR);}
"!="            {count(); fprintf(outfile, "< | OPERATOR,(%s) | >",yytext); return(NE_OPERATOR);}
";"             {count(); fprintf(outfile, "< | PUNCTUATION,(%s) | >\n",yytext); yylineno++; return(SEMICOLON);}
"+"             {count(); fprintf(outfile, "< | OPERATOR,(%s) | >",yytext); return('+');}
"-"             {count(); fprintf(outfile, "< | OPERATOR,(%s) | >",yytext); return('-');}
"*"             {count(); fprintf(outfile, "< | OPERATOR,(%s) | >",yytext); return('*');}
"/"             {count(); fprintf(outfile, "< | OPERATOR,(%s) | >",yytext); return('/');}
"%"             {count(); fprintf(outfile, "< | OPERATOR,(%s) | >",yytext); return('%');}
"="             {count(); fprintf(outfile, "< | OPERATOR,(%s) | >",yytext); return('=');}
"<"             {count(); fprintf(outfile, "< | OPERATOR,(%s) | >",yytext); return('<');}
">"             {count(); fprintf(outfile, "< | OPERATOR,(%s) | >",yytext); return('>');}
"&"             {count(); fprintf(outfile, "< | OPERATOR,(%s) | >",yytext); return('&');}
"^"			    {count(); fprintf(outfile, "< | OPERATOR,(%s) | >",yytext); return('^');}
"|"             {count(); fprintf(outfile, "< | OPERATOR,(%s) | >",yytext); return('|');}
"."			    {count(); fprintf(outfile, "< | PUNCTUATION,(%s) | >",yytext); return('.');}
"("			    {count(); fprintf(outfile, "< | PUNCTUATION,(%s) | >",yytext); return('(');}
")"			    {count(); fprintf(outfile, "< | PUNCTUATION,(%s) | >",yytext); return(')');}
"["		        {count(); fprintf(outfile, "< | PUNCTUATION,(%s) | >",yytext); return('[');}
"]"     		{count(); fprintf(outfile, "< | PUNCTUATION,(%s) | >",yytext); return(']');}
"{"		        {count(); fprintf(outfile, "< | PUNCTUATION,(%s) | >",yytext); return('{');}
"}"		        {count(); fprintf(outfile, "< | PUNCTUATION,(%s) | >",yytext); return('}');}
","			    {count(); fprintf(outfile, "< | PUNCTUATION,(%s) | >",yytext); return(',');}
":"			    {count(); fprintf(outfile, "< | PUNCTUATION,(%s) | >",yytext); return(':');}
"&&"			{count(); fprintf(outfile, "< | OPERATOR,(%s) | >",yytext); return(AND_OPERATOR);}
"||"			{count(); fprintf(outfile, "< | OPERATOR,(%s) | >",yytext); return(OR_OPERATOR);}
"++"			{count(); fprintf(outfile, "< | OPERATOR,(%s) | >",yytext); return(INC_OPERATOR);}
"--"			{count(); fprintf(outfile, "< | OPERATOR,(%s) | >",yytext); return(DEC_OPERATOR);}
">>"			{count(); fprintf(outfile, "< | OPERATOR,(%s) | >",yytext); return(RIGHTSHIFT_OPERATOR);}
"<<"			{count(); fprintf(outfile, "< | OPERATOR,(%s) | >",yytext); return(LEFTSHIFT_OPERATOR);}
"..."			{count(); fprintf(outfile, "< | PUNCTUATION,(%s) | >",yytext); return(ELLIPSIS);}
[0-9]+(\.[0-9]+)?([eE][+-]?[0-9]+)   {count(); fprintf(outfile, "< | EXPONENTIAL,(%s) | >",yytext); return EXPONENTIAL;}
[0-9]+(\.[0-9]+)?% {count(); fprintf(outfile, "< | PERCENTAGE,(%s) | >",yytext); return PERCENTAGE;}
\"([^\"\\]|\\.)*\" {count(); fprintf(outfile, "< | STRING_LITERAL,(%s) | >",yytext); return STRING;}
[A-Za-z_]+\.csv  {count(); fprintf(outfile, "< | CSVFILE,(%s) | >",yytext); return CSVFILE;}
[A-Za-z][A-Za-z0-9_]*          {count(); fprintf(outfile, "< | WORD,(%s) | >",yytext); return WORD;}
\/\/[^\n]* { yylineno++; }
{start}([^*]|\*+[^/])*{end} { yylineno++; }
' {count(); fprintf(outfile, "< | PUNCTUATION,(') | >"); return '\'';}
\" {count(); fprintf(outfile, "< | PUNCTUATION,('\"') | >"); return '\"';}
[ ]                 ;
. {count(); fprintf(outfile, "< | DUST,(%s) | >", yytext); return DUST;}
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
