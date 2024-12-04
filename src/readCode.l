/*
    LEXER FOR OUR CSV DATA PROCESSING DSL (Raccoons)
    File extension: .rc
*/

%{
#include <stdio.h>
#include <stdlib.h>
#include "symbol_table.hpp"
#include "y.tab.h"
extern FILE *tokensFile;

FILE* lex_output;
extern FILE* yacc_output;

// Function prototypes
void count();
void handle_token(std::string token_name, int yylineno, int column, int uniqueID);


#ifdef __cplusplus
extern "C" {
#endif

int yylex();
int yywrap();

#ifdef __cplusplus
}
#endif


// File pointer for output

// Global counter
int column = 0;
int lineFlag = 0;


//creating the symbol table
ST<int, SymbolInfo> symbolTable;
// Counter for unique IDs
int uniqueID = 1;

%}

start \/\*
end \*\/
%%
"df"            {count(); yylval.str = strdup(yytext); std::string token_name = "DATAFRAME"; handle_token(token_name, yylineno, column, uniqueID); return(DATAFRAME);}
"sep"           {count(); std::string token_name = "SEP"; handle_token(token_name, yylineno, column, uniqueID); return(SEP);}
"header"        {count(); std::string token_name = "HEADER"; handle_token(token_name, yylineno, column, uniqueID); return(HEADER);}
"index_col"     {count(); std::string token_name = "INDEX_COL"; handle_token(token_name, yylineno, column, uniqueID); return(INDEX_COL);}
"index"         {count(); std::string token_name = "INDEX"; handle_token(token_name, yylineno, column, uniqueID); return(INDEX);}
"usecols"       {count(); std::string token_name = "USECOLS"; handle_token(token_name, yylineno, column, uniqueID); return(USECOLS);}
"drop"          {count(); std::string token_name = "DROP"; handle_token(token_name, yylineno, column, uniqueID); return(DROP);}
"skip_na"       {count(); std::string token_name = "SKIPNA"; handle_token(token_name, yylineno, column, uniqueID); return(SKIPNA);}
"inplace"       {count(); std::string token_name = "INPLACE"; handle_token(token_name, yylineno, column, uniqueID); return(INPLACE);}
"ffill"         {count(); std::string token_name = "FFILL"; handle_token(token_name, yylineno, column, uniqueID); return(FFILL);}
"bfill"         {count(); std::string token_name = "BFILL"; handle_token(token_name, yylineno, column, uniqueID); return(BFILL);}
"fill"          {count(); std::string token_name = "FILL"; handle_token(token_name, yylineno, column, uniqueID); return(FILL);}
"method"        {count(); std::string token_name = "METHOD"; handle_token(token_name, yylineno, column, uniqueID); return(METHOD);}
"interpolate"   {count(); std::string token_name = "INTERPOLATE"; handle_token(token_name, yylineno, column, uniqueID); return(INTERPOLATE);}
"regex"         {count(); std::string token_name = "REGX"; handle_token(token_name, yylineno, column, uniqueID); return(REGX);}
"inner"         {count(); yylval.str = strdup(yytext);std::string token_name = "INNER"; handle_token(token_name, yylineno, column, uniqueID); return(INNER);}
"outer"         {count(); yylval.str = strdup(yytext);std::string token_name = "OUTER"; handle_token(token_name, yylineno, column, uniqueID); return(OUTER);}
"left"          {count(); yylval.str = strdup(yytext);std::string token_name = "LEFT"; handle_token(token_name, yylineno, column, uniqueID); return(LEFT);}
"right"         {count(); yylval.str = strdup(yytext);std::string token_name = "RIGHT"; handle_token(token_name, yylineno, column, uniqueID); return(RIGHT);}
"function"      {count(); std::string token_name = "FUNC"; handle_token(token_name, yylineno, column, uniqueID); return(FUNC);}
"return"        {count(); std::string token_name = "RTRN"; handle_token(token_name, yylineno, column, uniqueID); return(RTRN);}
"loop"          {count(); std::string token_name = "LOOP"; handle_token(token_name, yylineno, column, uniqueID); return(LOOP);}
"if"            {count(); std::string token_name = "IF"; handle_token(token_name, yylineno, column, uniqueID); return(IF);}
"else if"       {count(); std::string token_name = "ELSEIF"; handle_token(token_name, yylineno, column, uniqueID); return(ELSEIF);}
"else"          {count(); std::string token_name = "ELSE"; handle_token(token_name, yylineno, column, uniqueID); return(ELSE);}
"break"         {count(); std::string token_name = "BREAK"; handle_token(token_name, yylineno, column, uniqueID); return(BREAK);}
"continue"      {count(); std::string token_name = "CONTINUE"; handle_token(token_name, yylineno, column, uniqueID); return(CONTINUE);}
"int"           {count(); std::string token_name = "INT_TYPE"; handle_token(token_name, yylineno, column, uniqueID); return(INT_TYPE);}
"float"         {count(); std::string token_name = "FLOAT_TYPE"; handle_token(token_name, yylineno, column, uniqueID); return(FLOAT_TYPE);}
"string"        {count(); std::string token_name = "STRING_TYPE"; handle_token(token_name, yylineno, column, uniqueID); return(STRING_TYPE);}
"True"          {count(); yylval.str = strdup(yytext); std::string token_name = "TRUE"; handle_token(token_name, yylineno, column, uniqueID); return(TRUE);}
"False"         {count(); yylval.str = strdup(yytext); std::string token_name = "FALSE"; handle_token(token_name, yylineno, column, uniqueID); return(FALSE);}
"input"         {count(); std::string token_name = "INPUT"; handle_token(token_name, yylineno, column, uniqueID); return(INPUT);}
"output"        {count(); std::string token_name = "OUTPUT"; handle_token(token_name, yylineno, column, uniqueID); return(OUTPUT);}
"print"         {count(); std::string token_name = "PRINT"; handle_token(token_name, yylineno, column, uniqueID); return(PRINT);}
"+="            {count(); std::string token_name = "ADD_ASSIGN_OPERATOR"; handle_token(token_name, yylineno, column, uniqueID); return(ADD_ASSIGN_OPERATOR);}
"-="            {count(); std::string token_name = "SUB_ASSIGN_OPERATOR"; handle_token(token_name, yylineno, column, uniqueID); return(SUB_ASSIGN_OPERATOR);}
"*="            {count(); std::string token_name = "MUL_ASSIGN_OPERATOR"; handle_token(token_name, yylineno, column, uniqueID); return(MUL_ASSIGN_OPERATOR);}
"/="            {count(); std::string token_name = "DIV_ASSIGN_OPERATOR"; handle_token(token_name, yylineno, column, uniqueID); return(DIV_ASSIGN_OPERATOR);}
"%="            {count(); std::string token_name = "MOD_ASSIGN_OPERATOR"; handle_token(token_name, yylineno, column, uniqueID); return(MOD_ASSIGN_OPERATOR);}
"<="            {count(); std::string token_name = "LE_OPERATOR"; handle_token(token_name, yylineno, column, uniqueID); return(LE_OPERATOR);}
">="            {count(); std::string token_name = "GE_OPERATOR"; handle_token(token_name, yylineno, column, uniqueID); return(GE_OPERATOR);}
"=="            {count(); std::string token_name = "DEQ_OPERATOR"; handle_token(token_name, yylineno, column, uniqueID); return(DEQ_OPERATOR);}
"!="            {count(); std::string token_name = "NE_OPERATOR"; handle_token(token_name, yylineno, column, uniqueID); return(NE_OPERATOR);}
"!"             {count(); std::string token_name = "NOT_OPERATOR"; handle_token(token_name, yylineno, column, uniqueID); return(NOT_OPERATOR);}
";"             {count(); std::string token_name = "SEMICOLON"; handle_token(token_name, yylineno, column, uniqueID); return(SEMICOLON);}
"+"             {count(); std::string token_name = yytext; handle_token(token_name, yylineno, column, uniqueID); return('+');}
"-"             {count(); std::string token_name = yytext; handle_token(token_name, yylineno, column, uniqueID); return('-');}
"*"             {count(); std::string token_name = yytext; handle_token(token_name, yylineno, column, uniqueID); return('*');}
"/"             {count(); std::string token_name = yytext; handle_token(token_name, yylineno, column, uniqueID); return('/');}
"%"             {count(); std::string token_name = yytext; handle_token(token_name, yylineno, column, uniqueID); return('%');}
"="             {count(); std::string token_name = yytext; handle_token(token_name, yylineno, column, uniqueID); return('=');}
"<"             {count(); std::string token_name = yytext; handle_token(token_name, yylineno, column, uniqueID); return('<');}
">"             {count(); std::string token_name = yytext; handle_token(token_name, yylineno, column, uniqueID); return('>');}
"&"             {count(); std::string token_name = yytext; handle_token(token_name, yylineno, column, uniqueID); return('&');}
"^"			    {count(); std::string token_name = yytext; handle_token(token_name, yylineno, column, uniqueID); return('^');}
"|"             {count(); std::string token_name = yytext; handle_token(token_name, yylineno, column, uniqueID); return('|');}
"~"             {count(); std::string token_name = yytext; handle_token(token_name, yylineno, column, uniqueID); return('~');}
"."			    {count(); std::string token_name = yytext; handle_token(token_name, yylineno, column, uniqueID); return('.');}
"("			    {count(); std::string token_name = yytext; handle_token(token_name, yylineno, column, uniqueID); return('(');}
")"			    {count(); std::string token_name = yytext; handle_token(token_name, yylineno, column, uniqueID); return(')');}
"["		        {count(); std::string token_name = yytext; handle_token(token_name, yylineno, column, uniqueID); return('[');}
"]"     		{count(); std::string token_name = yytext; handle_token(token_name, yylineno, column, uniqueID); return(']');}
"{"		        {count(); std::string token_name = yytext; handle_token(token_name, yylineno, column, uniqueID); return('{');}
"}"		        {count(); std::string token_name = yytext; handle_token(token_name, yylineno, column, uniqueID); return('}');}
","			    {count(); std::string token_name = yytext; handle_token(token_name, yylineno, column, uniqueID); return(',');}
":"			    {count(); std::string token_name = yytext; handle_token(token_name, yylineno, column, uniqueID); return(':');}
"&&"			{count(); std::string token_name = "AND_OPERATOR"; handle_token(token_name, yylineno, column, uniqueID); return(AND_OPERATOR);}
"||"			{count(); std::string token_name = "OR_OPERATOR"; handle_token(token_name, yylineno, column, uniqueID); return(OR_OPERATOR);}
"++"			{count(); std::string token_name = "INC_OPERATOR"; handle_token(token_name, yylineno, column, uniqueID); return(INC_OPERATOR);}
"--"			{count(); std::string token_name = "DEC_OPERATOR"; handle_token(token_name, yylineno, column, uniqueID); return(DEC_OPERATOR);}
">>"			{count(); std::string token_name = "RIGHTSHIFT_OPERATOR"; handle_token(token_name, yylineno, column, uniqueID); return(RIGHTSHIFT_OPERATOR);}
"<<"			{count(); std::string token_name = "LEFTSHIFT_OPERATOR"; handle_token(token_name, yylineno, column, uniqueID); return(LEFTSHIFT_OPERATOR);}
"..."			{count(); std::string token_name = "ELLIPSIS"; handle_token(token_name, yylineno, column, uniqueID); return(ELLIPSIS);}
"read"          { count(); std::string token_name = "READCSVFUNC"; handle_token(token_name, yylineno, column, uniqueID); return READCSVFUNC;}
"head"          { count(); std::string token_name = "HEADFUNC"; handle_token(token_name, yylineno, column, uniqueID); return HEADFUNC;}
"tail"          { count(); std::string token_name = "TAILFUNC"; handle_token(token_name, yylineno, column, uniqueID); return TAILFUNC;}
"reset_index"   { count(); std::string token_name = "RESETINDEXFUNC"; handle_token(token_name, yylineno, column, uniqueID); return RESETINDEXFUNC;}
"to_csv"        { count(); std::string token_name = "TOCSVFUNC"; handle_token(token_name, yylineno, column, uniqueID); return TOCSVFUNC;}
"describe"      { count(); std::string token_name = "DESCRIBEFUNC"; handle_token(token_name, yylineno, column, uniqueID); return DESCRIBEFUNC;}
"mean"          { count(); std::string token_name = "MEANFUNC"; handle_token(token_name, yylineno, column, uniqueID); return MEANFUNC;}
"mode"          { count(); std::string token_name = "MODEFUNC"; handle_token(token_name, yylineno, column, uniqueID); return MODEFUNC;}
"median"        { count(); std::string token_name = "MEDIANFUNC"; handle_token(token_name, yylineno, column, uniqueID); return MEDIANFUNC;}
"sum"           { count(); std::string token_name = "SUMFUNC"; handle_token(token_name, yylineno, column, uniqueID); return SUMFUNC;}
"min"           { count(); std::string token_name = "MINFUNC"; handle_token(token_name, yylineno, column, uniqueID); return MINFUNC;}
"max"           { count(); std::string token_name = "MAXFUNC"; handle_token(token_name, yylineno, column, uniqueID); return MAXFUNC;}
"numeric"       { count(); std::string token_name = "NUMERIC"; handle_token(token_name, yylineno, column, uniqueID); return NUMERIC;}
"axis"          { count(); std::string token_name = "AXIS"; handle_token(token_name, yylineno, column, uniqueID); return AXIS;}
"miss_value"    { count(); std::string token_name = "MISSVALUEFUNC"; handle_token(token_name, yylineno, column, uniqueID); return MISSVALUEFUNC;}
"exchange"      { count(); std::string token_name = "EXCHANGEVALUEFUNC"; handle_token(token_name, yylineno, column, uniqueID); return EXCHANGEVALUEFUNC;}
"groupby"       { count(); std::string token_name = "GROUPBYFUNC"; handle_token(token_name, yylineno, column, uniqueID); return GROUPBYFUNC;}
"concat"        { count(); std::string token_name = "CONCATFUNC"; handle_token(token_name, yylineno, column, uniqueID); return CONCATFUNC;}
"merge"         { count(); std::string token_name = "MERGEFUNC"; handle_token(token_name, yylineno, column, uniqueID); return MERGEFUNC;}
"how"           { count(); std::string token_name = "HOW_TOKEN"; handle_token(token_name, yylineno, column, uniqueID); return HOW_TOKEN;}
"on"            { count(); std::string token_name = "ON_TOKEN"; handle_token(token_name, yylineno, column, uniqueID); return ON_TOKEN;}
"suffix"        { count(); std::string token_name = "SUFFIXES_TOKEN"; handle_token(token_name, yylineno, column, uniqueID); return SUFFIXES_TOKEN;}
"join"          { count(); std::string token_name = "JOINFUNC"; handle_token(token_name, yylineno, column, uniqueID); return JOINFUNC;}
[0-9]+(\.[0-9]+)?([eE][+-]?[0-9]+)     {count(); yylval.str = strdup(yytext);std::string token_name = "EXPONENTIAL"; handle_token(token_name, yylineno, column, uniqueID); return EXPONENTIAL;}
[0-9]+(\.[0-9]+)?%                     {count(); yylval.str = strdup(yytext);std::string token_name = "PERCENTAGE"; handle_token(token_name, yylineno, column, uniqueID); return PERCENTAGE;}
[0-9]+(\.[0-9]+)                       {count(); yylval.flt = atof(yytext); std::string token_name = "FLOATNUM"; handle_token(token_name, yylineno, column, uniqueID); return FLOATNUM;}
[0-9]+                                 {count(); yylval.in = atoi(yytext); std::string token_name = "INTNUM"; handle_token(token_name, yylineno, column, uniqueID); return INTNUM;}
"'"[A-Za-z_]+\.csv"'"                  {count(); yylval.str = strdup(yytext); std::string token_name = "CSVFILE"; handle_token(token_name, yylineno, column, uniqueID); return CSVFILE;}
"'"([^'\\]|\\.)*"'"                    {count(); yylval.str = strdup(yytext); std::string token_name = "SINGLE_QUOTED_STRING"; handle_token(token_name, yylineno, column, uniqueID); return SINGLE_QUOTED_STRING;}
\"([^\"\\]|\\.)*\"                     {count(); yylval.str = strdup(yytext); std::string token_name = "STRING"; handle_token(token_name, yylineno, column, uniqueID); return STRING;}
[A-Za-z][A-Za-z0-9_]*                  {count(); yylval.str = strdup(yytext); std::string token_name = "IDENTIFIER"; handle_token(token_name, yylineno, column, uniqueID); return IDENTIFIER;}
\/\/[^\n]*                             ;
{start}([^*]|\*+[^/])*{end}            ;
'                                      {count(); return '\'';}
\"                                     {count(); return '\"';}
[ ]                                    ;
\n                                     {count(); yylineno++;}
[ \t\v\f]                              {count();}
.                                      {count();}
%%


// consider modifying the CSVFILE regexp to 
// "'"([A-Za-z_./\\]+)\\.csv"'"
// to allow the path as well to be given in place of filename

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

void handle_token(std::string token_name, int yylineno, int column, int uniqueID){
    SymbolInfo info(token_name, yylineno, column); 
    symbolTable.put(uniqueID, info); 
    uniqueID++; 
    // included .c_str() at the end to convert the std::string to a c style null terminated string
    fprintf(lex_output, "\n %d : %s", yylineno, token_name.c_str());
}

