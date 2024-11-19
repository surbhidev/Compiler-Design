/*
    LEXER FOR OUR CSV DATA PROCESSING DSL (Raccoons)
    File extension: .rc
*/

%{
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"

FILE* lex_output;
extern FILE* yacc_output;

// Function prototypes
void count();

// File pointer for output

// Global counter
int column = 0;
int lineFlag = 0;
%}
start \/\*
end \*\/
%%
"df"            { count(); yylval.str = strdup(yytext); fprintf(lex_output, "\n %d : DATAFRAME", yylineno); return(DATAFRAME); }
"sep"           { count(); fprintf(lex_output, "\n %d : SEP", yylineno); return(SEP); }
"header"        { count(); fprintf(lex_output, "\n %d : HEADER", yylineno); return(HEADER); }
"index_col"     { count(); fprintf(lex_output, "\n %d : INDEX_COL", yylineno); return(INDEX_COL); }
"index"         { count(); fprintf(lex_output, "\n %d : INDEX", yylineno); return(INDEX); }
"usecols"       { count(); fprintf(lex_output, "\n %d : USECOLS", yylineno); return(USECOLS); }
"drop"          { count(); fprintf(lex_output, "\n %d : DROP", yylineno); return(DROP); }
"skip_na"       { count(); fprintf(lex_output, "\n %d : SKIPNA", yylineno); return(SKIPNA); }
"inplace"       { count(); fprintf(lex_output, "\n %d : INPLACE", yylineno); return(INPLACE); }
"ffill"         { count(); fprintf(lex_output, "\n %d : FFILL", yylineno); return(FFILL); }
"bfill"         { count(); fprintf(lex_output, "\n %d : BFILL", yylineno); return(BFILL); }
"fill"          { count(); fprintf(lex_output, "\n %d : FILL", yylineno); return(FILL); }
"method"        { count(); fprintf(lex_output, "\n %d : METHOD", yylineno); return(METHOD); }
"interpolate"   { count(); fprintf(lex_output, "\n %d : INTERPOLATE", yylineno); return(INTERPOLATE); }
"regex"         { count(); fprintf(lex_output, "\n %d : REGX", yylineno); return(REGX); }
"inner"         { count(); fprintf(lex_output, "\n %d : INNER", yylineno); return(INNER); }
"outer"         { count(); fprintf(lex_output, "\n %d : OUTER", yylineno); return(OUTER); }
"left"          { count(); fprintf(lex_output, "\n %d : LEFT", yylineno); return(LEFT); }
"right"         { count(); fprintf(lex_output, "\n %d : RIGHT", yylineno); return(RIGHT); }
"function"      { count(); fprintf(lex_output, "\n %d : FUNC", yylineno); return(FUNC); }
"return"        { count(); fprintf(lex_output, "\n %d : RTRN", yylineno); return(RTRN); }
"loop"          {count(); fprintf(lex_output, "\n %d : LOOP", yylineno); return(LOOP);}
"if"            {count(); fprintf(lex_output, "\n %d : IF", yylineno); return(IF);}
"else if"       {count(); fprintf(lex_output, "\n %d : ELSEIF", yylineno); return(ELSEIF);}
"else"          {count(); fprintf(lex_output, "\n %d : ELSE", yylineno); return(ELSE);}
"break"         {count(); fprintf(lex_output, "\n %d : BREAK", yylineno); return(BREAK);}
"continue"      {count(); fprintf(lex_output, "\n %d : CONTINUE", yylineno); return(CONTINUE);}
"int"           {count(); fprintf(lex_output, "\n %d : INT_TYPE", yylineno); return(INT_TYPE);}
"float"         {count(); fprintf(lex_output, "\n %d : FLOAT_TYPE", yylineno); return(FLOAT_TYPE);}
"string"        {count(); fprintf(lex_output, "\n %d : STRING_TYPE", yylineno); return(STRING_TYPE);}
"true"          {count(); fprintf(lex_output, "\n %d : TRUE", yylineno); return(TRUE);}
"false"         {count(); fprintf(lex_output, "\n %d : FALSE", yylineno); return(FALSE);}
"input"         {count(); fprintf(lex_output, "\n %d : INPUT", yylineno); return(INPUT);}
"output"        {count(); fprintf(lex_output, "\n %d : OUTPUT", yylineno); return(OUTPUT);}
"print"         {count(); fprintf(lex_output, "\n %d : PRINT", yylineno); return(PRINT);}
"+="            {count(); fprintf(lex_output, "\n %d : ADD_ASSIGN_OPERATOR", yylineno); return(ADD_ASSIGN_OPERATOR);}
"-="            {count(); fprintf(lex_output, "\n %d : SUB_ASSIGN_OPERATOR", yylineno); return(SUB_ASSIGN_OPERATOR);}
"*="            {count(); fprintf(lex_output, "\n %d : MUL_ASSIGN_OPERATOR", yylineno); return(MUL_ASSIGN_OPERATOR);}
"/="            {count(); fprintf(lex_output, "\n %d : DIV_ASSIGN_OPERATOR", yylineno); return(DIV_ASSIGN_OPERATOR);}
"%="            {count(); fprintf(lex_output, "\n %d : MOD_ASSIGN_OPERATOR", yylineno); return(MOD_ASSIGN_OPERATOR);}
"<="            {count(); fprintf(lex_output, "\n %d : LE_OPERATOR", yylineno); return(LE_OPERATOR);}
">="            {count(); fprintf(lex_output, "\n %d : GE_OPERATOR", yylineno); return(GE_OPERATOR);}
"=="            {count(); fprintf(lex_output, "\n %d : DEQ_OPERATOR", yylineno); return(DEQ_OPERATOR);}
"!="            {count(); fprintf(lex_output, "\n %d : NE_OPERATOR", yylineno); return(NE_OPERATOR);}
"!"             {count(); fprintf(lex_output, "\n %d : NOT_OPERATOR", yylineno); return(NOT_OPERATOR);}
";"             {count(); fprintf(lex_output, "\n %d : SEMICOLON", yylineno); return(SEMICOLON);}
"+"             {count(); fprintf(lex_output, "\n %d : +", yylineno); return('+');}
"-"             {count(); fprintf(lex_output, "\n %d : -", yylineno); return('-');}
"*"             {count(); fprintf(lex_output, "\n %d : *", yylineno); return('*');}
"/"             {count(); fprintf(lex_output, "\n %d : /", yylineno); return('/');}
"%"             {count(); fprintf(lex_output, "\n %d : %", yylineno); return('%');}
"="             {count(); fprintf(lex_output, "\n %d : =", yylineno); return('=');}
"<"             {count(); fprintf(lex_output, "\n %d : <", yylineno); return('<');}
">"             {count(); fprintf(lex_output, "\n %d : >", yylineno); return('>');}
"&"             {count(); fprintf(lex_output, "\n %d : &", yylineno); return('&');}
"^"			    {count(); fprintf(lex_output, "\n %d : ^", yylineno); return('^');}
"|"             {count(); fprintf(lex_output, "\n %d : |", yylineno); return('|');}
"~"             {count(); fprintf(lex_output, "\n %d : ~", yylineno); return('~');}
"."			    {count(); fprintf(lex_output, "\n %d : .", yylineno); return('.');}
"("			    {count(); fprintf(lex_output, "\n %d : (", yylineno); return('(');}
")"			    {count(); fprintf(lex_output, "\n %d : )", yylineno); return(')');}
"["		        {count(); fprintf(lex_output, "\n %d : [", yylineno); return('[');}
"]"     		{count(); fprintf(lex_output, "\n %d : ]", yylineno); return(']');}
"{"		        {count(); fprintf(lex_output, "\n %d : {", yylineno); return('{');}
"}"		        {count(); fprintf(lex_output, "\n %d : }", yylineno); return('}');}
","			    {count(); fprintf(lex_output, "\n %d : ,", yylineno); return(',');}
":"			    {count(); fprintf(lex_output, "\n %d : :", yylineno); return(':');}
"&&"			{count(); fprintf(lex_output, "\n %d : AND_OPERATOR", yylineno); return(AND_OPERATOR);}
"||"			{count(); fprintf(lex_output, "\n %d : OR_OPERATOR", yylineno); return(OR_OPERATOR);}
"++"			{count(); fprintf(lex_output, "\n %d : INC_OPERATOR", yylineno); return(INC_OPERATOR);}
"--"			{count(); fprintf(lex_output, "\n %d : DEC_OPERATOR", yylineno); return(DEC_OPERATOR);}
">>"			{count(); fprintf(lex_output, "\n %d : RIGHTSHIFT_OPERATOR", yylineno); return(RIGHTSHIFT_OPERATOR);}
"<<"			{count(); fprintf(lex_output, "\n %d : LEFTSHIFT_OPERATOR", yylineno); return(LEFTSHIFT_OPERATOR);}
"..."			{count(); fprintf(lex_output, "\n %d : ELLIPSIS", yylineno); return(ELLIPSIS);}
"read"          { count(); fprintf(lex_output, "\n %d : READCSVFUNC", yylineno); return READCSVFUNC; }
"head"          { count(); fprintf(lex_output, "\n %d : HEADFUNC", yylineno); return HEADFUNC; }
"tail"          { count(); fprintf(lex_output, "\n %d : TAILFUNC", yylineno); return TAILFUNC; }
"reset_index"   { count(); fprintf(lex_output, "\n %d : RESETINDEXFUNC", yylineno); return RESETINDEXFUNC; }
"to_csv"        { count(); fprintf(lex_output, "\n %d : TOCSVFUNC", yylineno); return TOCSVFUNC; }
"describe"      { count(); fprintf(lex_output, "\n %d : DESCRIBEFUNC", yylineno); return DESCRIBEFUNC; }
"mean"          { count(); fprintf(lex_output, "\n %d : MEANFUNC", yylineno); return MEANFUNC; }
"mode"          { count(); fprintf(lex_output, "\n %d : MODEFUNC", yylineno); return MODEFUNC; }
"median"        { count(); fprintf(lex_output, "\n %d : MEDIANFUNC", yylineno); return MEDIANFUNC; }
"sum"           { count(); fprintf(lex_output, "\n %d : SUMFUNC", yylineno); return SUMFUNC; }
"min"           { count(); fprintf(lex_output, "\n %d : MINFUNC", yylineno); return MINFUNC; }
"max"           { count(); fprintf(lex_output, "\n %d : MAXFUNC", yylineno); return MAXFUNC; }
"numeric"       { count(); fprintf(lex_output, "\n %d : NUMERIC", yylineno); return NUMERIC; }
"axis"          { count(); fprintf(lex_output, "\n %d : AXIS", yylineno); return AXIS; }
"miss_value"    { count(); fprintf(lex_output, "\n %d : MISSVALUEFUNC", yylineno); return MISSVALUEFUNC; }
"exchange"      { count(); fprintf(lex_output, "\n %d : EXCHANGEVALUEFUNC", yylineno); return EXCHANGEVALUEFUNC; }
"groupby"       { count(); fprintf(lex_output, "\n %d : GROUPBYFUNC", yylineno); return GROUPBYFUNC; }
"concat"        { count(); fprintf(lex_output, "\n %d : CONCATFUNC", yylineno); return CONCATFUNC; }
"merge"         { count(); fprintf(lex_output, "\n %d : MERGEFUNC", yylineno); return MERGEFUNC; }
"how"           { count(); fprintf(lex_output, "\n %d : HOW_TOKEN", yylineno); return HOW_TOKEN;  }
"on"            { count(); fprintf(lex_output, "\n %d : ON_TOKEN", yylineno); return ON_TOKEN;  }
"suffix"        { count(); fprintf(lex_output, "\n %d : SUFFIXES_TOKEN", yylineno); return SUFFIXES_TOKEN;  }
"join"          { count(); fprintf(lex_output, "\n %d : JOINFUNC", yylineno); return JOINFUNC; }
[0-9]+(\.[0-9]+)?([eE][+-]?[0-9]+)     {count(); fprintf(lex_output, "\n %d : EXPONENTIAL", yylineno); return EXPONENTIAL;}
[0-9]+(\.[0-9]+)?%                     {count(); fprintf(lex_output, "\n %d : PERCENTAGE", yylineno); return PERCENTAGE;}
[0-9]+(\.[0-9]+)                       {count(); fprintf(lex_output, "\n %d : FLOATNUM", yylineno); return FLOATNUM; }
[0-9]+                                 {count(); yylval.in = atoi(yytext); fprintf(lex_output, "\n %d : INTNUM", yylineno); return INTNUM; }
"'"[A-Za-z_]+\.csv"'"                  {count(); yylval.str = strdup(yytext); fprintf(lex_output, "\n %d : CSVFILE", yylineno); return CSVFILE; }
"'"([^'\\]|\\.)*"'"                    {count(); fprintf(lex_output, "\n %d : SINGLE_QUOTED_STRING", yylineno); return SINGLE_QUOTED_STRING;}
\"([^\"\\]|\\.)*\"                     {count(); fprintf(lex_output, "\n %d : STRING", yylineno); return STRING;}
[A-Za-z][A-Za-z0-9_]*                  {count(); yylval.str = strdup(yytext); fprintf(lex_output, "\n %d : IDENTIFIER", yylineno); return IDENTIFIER;}
\/\/[^\n]*                             ;
{start}([^*]|\*+[^/])*{end}            ;
'                                      {count(); return '\'';}
\"                                     {count(); return '\"';}
[ ]                                    ;
\n                                     { count(); yylineno++; }
[ \t\v\f]                              { count(); }
.                                      {count();}
%%

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
