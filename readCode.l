/*
    LEXER FOR OUR CSV DATA PROCESSING DSL (Raccoons)
    File extension: .rc
*/

%{
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"

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
"function"       { count(); return(FUNC); }
"return"         { count(); return(RTRN); }
"loop"           {count(); return(LOOP);}
"if"            {count(); return(IF);}
"else"          {count(); return(ELSE);}
"break"         {count(); return(BREAK);}
"continue"      {count(); return(CONTINUE);}
"int"           {count(); return(INT);}
"float"         {count(); return(FLOAT);}
"string"        {count(); return(STRING);}
"bool"          {count(); return(BOOL);}
"true"          {count(); return(TRUE);}
"false"         {count(); return(FALSE);}
"input"         {count(); return(INPUT);}
"output"        {count(); return(OUTPUT);}
"print"         {count(); return(PRINT);}
"+="            {count(); return(ADD_ASSIGN_OPERATOR);}
"-="            {count(); return(SUB_ASSIGN_OPERATOR);}
"*="            {count(); return(MUL_ASSIGN_OPERATOR);}
"/="            {count(); return(DIV_ASSIGN_OPERATOR);}
"%="            {count(); return(MOD_ASSIGN_OPERATOR);}
"<="            {count(); return(LE_OPERATOR);}
">="            {count(); return(GE_OPERATOR);}
"=="            {count(); return(EQ_OPERATOR);}
"!="            {count(); return(NE_OPERATOR);}
";"             {count(); return(SEMICOLON);}
"+"             {count(); return('+');}
"-"             {count(); return('-');}
"*"             {count(); return('*');}
"/"             {count(); return('/');}
"%"             {count(); return('%');}
"="             {count(); return('=');}
"<"             {count(); return('<');}
">"             {count(); return('>');}
"&"             {count(); return('&');}
"^"			    {count(); return('^');}
"|"             {count(); return('|');}
"."			    {count(); return('.');}
"("			    {count(); return('(');}
")"			    {count(); return(')');}
"["		        {count(); return('[');}
"]"     		{count(); return(']');}
"{"		        {count(); return('{');}
"}"		        {count(); return('}');}
","			    {count(); return(',');}
":"			    {count(); return(':');}
"&&"			{count(); return(AND_OPERATOR);}
"||"			{count(); return(OR_OPERATOR);}
"++"			{count(); return(INC_OPERATOR);}
"--"			{count(); return(DEC_OPERATOR);}
">>"			{count(); return(RIGHTSHIFT_OPERATOR);}
"<<"			{count(); return(LEFTSHIFT_OPERATOR);}
"..."			{count(); return(ELLIPSIS);}
"read"         { count(); return READCSVFUNC; }
"head"         { count(); return HEADFUNC; }
"tail"         { count(); return TAILFUNC; }
"reset_index"  { count(); return RESETINDEXFUNC; }
"to_csv"       { count(); return TOCSVFUNC; }
"describe"     { count(); return DESCRIBEFUNC; }
"mean"         { count(); return MEANFUNC; }
"mode"         { count(); return MODEFUNC; }
"median"       { count(); return MEDIANFUNC; }
"sum"          { count(); return SUMFUNC; }
"min"          { count(); return MINFUNC; }
"max"          { count(); return MAXFUNC; }
"miss_value"   { count(); return MISSVALUEFUNC; }
"exchange"     { count(); return EXCHANGEFUNC; }
"groupby"      { count(); return GROUPBYFUNC; }
"concat"       { count(); return CONCATFUNC; }
"merge"        { count(); return MERGEFUNC; }
"join"         { count(); return JOINFUNC; }
[0-9]+(\.[0-9]+)?([eE][+-]?[0-9]+)     {count(); return EXPONENTIAL;}
[0-9]+(\.[0-9]+)?%                     {count(); return PERCENTAGE;}
[0-9]+(\.[0-9]+)                       { count(); return FLOAT; }
[0-9]+                                 { count(); return INTEGER; }
"'"([^'\\]|\\.)*"'"                    {count(); return SINGLE_QUOTED_STRING;}
\"([^\"\\]|\\.)*\"                     {count(); return STRING;}
[A-Za-z_]+\.csv                        {count(); return CSVFILE;}
[A-Za-z][A-Za-z0-9_]*                  {count(); return IDENTIFIER;}
\/\/[^\n]*                             ;
{start}([^*]|\*+[^/])*{end}            ;
'                                      {count(); return '\'';}
\"                                     {count(); return '\"';}
[ ]                                    ;
\n                                     { count(); yylineno++; }
[ \t\v\f]                              { count(); }
.                                      {count();return DUST;}
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
