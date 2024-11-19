/*
    LEXER FOR OUR CSV DATA PROCESSING DSL (Raccoons)
    File extension: .rc
*/

%{
#include <stdio.h>
#include <stdlib.h>
#include "symbol_table.hpp"
#include "y.tab.h"

FILE* lex_output;
extern FILE* yacc_output;

// Function prototypes
void count();

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
"df"            {count(); yylval.str = strdup(yytext); std::string token_name = "DATAFRAME"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : DATAFRAME", yylineno); return(DATAFRAME);}
"sep"           {count(); std::string token_name = "SEP"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : SEP", yylineno); return(SEP);}
"header"        {count(); std::string token_name = "HEADER"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : HEADER", yylineno); return(HEADER);}
"index_col"     {count(); std::string token_name = "INDEX_COL"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : INDEX_COL", yylineno); return(INDEX_COL);}
"index"         {count(); std::string token_name = "INDEX"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : INDEX", yylineno); return(INDEX);}
"usecols"       {count(); std::string token_name = "USECOLS"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : USECOLS", yylineno); return(USECOLS);}
"drop"          {count(); std::string token_name = "DROP"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : DROP", yylineno); return(DROP);}
"skip_na"       {count(); std::string token_name = "SKIPNA"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : SKIPNA", yylineno); return(SKIPNA);}
"inplace"       {count(); std::string token_name = "INPLACE"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : INPLACE", yylineno); return(INPLACE);}
"ffill"         {count(); std::string token_name = "FFILL"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : FFILL", yylineno); return(FFILL);}
"bfill"         {count(); std::string token_name = "BFILL"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : BFILL", yylineno); return(BFILL);}
"fill"          {count(); std::string token_name = "FILL"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : FILL", yylineno); return(FILL);}
"method"        {count(); std::string token_name = "METHOD"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : METHOD", yylineno); return(METHOD);}
"interpolate"   {count(); std::string token_name = "INTERPOLATE"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : INTERPOLATE", yylineno); return(INTERPOLATE);}
"regex"         {count(); std::string token_name = "REGX"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : REGX", yylineno); return(REGX);}
"inner"         {count(); std::string token_name = "INNER"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : INNER", yylineno); return(INNER);}
"outer"         {count(); std::string token_name = "OUTER"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : OUTER", yylineno); return(OUTER);}
"left"          {count(); std::string token_name = "LEFT"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : LEFT", yylineno); return(LEFT);}
"right"         {count(); std::string token_name = "RIGHT"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : RIGHT", yylineno); return(RIGHT);}
"function"      {count(); std::string token_name = "FUNC"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : FUNC", yylineno); return(FUNC);}
"return"        {count(); std::string token_name = "RTRN"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : RTRN", yylineno); return(RTRN);}
"loop"          {count(); std::string token_name = "LOOP"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : LOOP", yylineno); return(LOOP);}
"if"            {count(); std::string token_name = "IF"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : IF", yylineno); return(IF);}
"else if"       {count(); std::string token_name = "ELSEIF"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : ELSEIF", yylineno); return(ELSEIF);}
"else"          {count(); std::string token_name = "ELSE"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : ELSE", yylineno); return(ELSE);}
"break"         {count(); std::string token_name = "BREAK"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : BREAK", yylineno); return(BREAK);}
"continue"      {count(); std::string token_name = "CONTINUE"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : CONTINUE", yylineno); return(CONTINUE);}
"int"           {count(); std::string token_name = "INT_TYPE"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : INT_TYPE", yylineno); return(INT_TYPE);}
"float"         {count(); std::string token_name = "FLOAT_TYPE"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : FLOAT_TYPE", yylineno); return(FLOAT_TYPE);}
"string"        {count(); std::string token_name = "STRING_TYPE"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : STRING_TYPE", yylineno); return(STRING_TYPE);}
"true"          {count(); std::string token_name = "TRUE"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : TRUE", yylineno); return(TRUE);}
"false"         {count(); std::string token_name = "FALSE"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : FALSE", yylineno); return(FALSE);}
"input"         {count(); std::string token_name = "INPUT"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : INPUT", yylineno); return(INPUT);}
"output"        {count(); std::string token_name = "OUTPUT"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : OUTPUT", yylineno); return(OUTPUT);}
"print"         {count(); std::string token_name = "PRINT"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : PRINT", yylineno); return(PRINT);}
"+="            {count(); std::string token_name = "ADD_ASSIGN_OPERATOR"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : ADD_ASSIGN_OPERATOR", yylineno); return(ADD_ASSIGN_OPERATOR);}
"-="            {count(); std::string token_name = "SUB_ASSIGN_OPERATOR"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : SUB_ASSIGN_OPERATOR", yylineno); return(SUB_ASSIGN_OPERATOR);}
"*="            {count(); std::string token_name = "MUL_ASSIGN_OPERATOR"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : MUL_ASSIGN_OPERATOR", yylineno); return(MUL_ASSIGN_OPERATOR);}
"/="            {count(); std::string token_name = "DIV_ASSIGN_OPERATOR"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : DIV_ASSIGN_OPERATOR", yylineno); return(DIV_ASSIGN_OPERATOR);}
"%="            {count(); std::string token_name = "MOD_ASSIGN_OPERATOR"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : MOD_ASSIGN_OPERATOR", yylineno); return(MOD_ASSIGN_OPERATOR);}
"<="            {count(); std::string token_name = "LE_OPERATOR"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : LE_OPERATOR", yylineno); return(LE_OPERATOR);}
">="            {count(); std::string token_name = "GE_OPERATOR"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : GE_OPERATOR", yylineno); return(GE_OPERATOR);}
"=="            {count(); std::string token_name = "DEQ_OPERATOR"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : DEQ_OPERATOR", yylineno); return(DEQ_OPERATOR);}
"!="            {count(); std::string token_name = "NE_OPERATOR"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : NE_OPERATOR", yylineno); return(NE_OPERATOR);}
"!"             {count(); std::string token_name = "NOT_OPERATOR"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : NOT_OPERATOR", yylineno); return(NOT_OPERATOR);}
";"             {count(); std::string token_name = "SEMICOLON"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : SEMICOLON", yylineno); return(SEMICOLON);}
"+"             {count(); std::string token_name = yytext; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : +", yylineno); return('+');}
"-"             {count(); std::string token_name = yytext; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : -", yylineno); return('-');}
"*"             {count(); std::string token_name = yytext; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : *", yylineno); return('*');}
"/"             {count(); std::string token_name = yytext; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : /", yylineno); return('/');}
"%"             {count(); std::string token_name = yytext; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : %", yylineno); return('%');}
"="             {count(); std::string token_name = yytext; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : =", yylineno); return('=');}
"<"             {count(); std::string token_name = yytext; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : <", yylineno); return('<');}
">"             {count(); std::string token_name = yytext; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : >", yylineno); return('>');}
"&"             {count(); std::string token_name = yytext; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : &", yylineno); return('&');}
"^"			    {count(); std::string token_name = yytext; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : ^", yylineno); return('^');}
"|"             {count(); std::string token_name = yytext; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : |", yylineno); return('|');}
"~"             {count(); std::string token_name = yytext; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : ~", yylineno); return('~');}
"."			    {count(); std::string token_name = yytext; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : .", yylineno); return('.');}
"("			    {count(); std::string token_name = yytext; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : (", yylineno); return('(');}
")"			    {count(); std::string token_name = yytext; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : )", yylineno); return(')');}
"["		        {count(); std::string token_name = yytext; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : [", yylineno); return('[');}
"]"     		{count(); std::string token_name = yytext; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : ]", yylineno); return(']');}
"{"		        {count(); std::string token_name = yytext; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : {", yylineno); return('{');}
"}"		        {count(); std::string token_name = yytext; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : }", yylineno); return('}');}
","			    {count(); std::string token_name = yytext; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : ,", yylineno); return(',');}
":"			    {count(); std::string token_name = yytext; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : :", yylineno); return(':');}
"&&"			{count(); std::string token_name = "AND_OPERATOR"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : AND_OPERATOR", yylineno); return(AND_OPERATOR);}
"||"			{count(); std::string token_name = "OR_OPERATOR"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : OR_OPERATOR", yylineno); return(OR_OPERATOR);}
"++"			{count(); std::string token_name = "INC_OPERATOR"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : INC_OPERATOR", yylineno); return(INC_OPERATOR);}
"--"			{count(); std::string token_name = "DEC_OPERATOR"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : DEC_OPERATOR", yylineno); return(DEC_OPERATOR);}
">>"			{count(); std::string token_name = "RIGHTSHIFT_OPERATOR"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : RIGHTSHIFT_OPERATOR", yylineno); return(RIGHTSHIFT_OPERATOR);}
"<<"			{count(); std::string token_name = "LEFTSHIFT_OPERATOR"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : LEFTSHIFT_OPERATOR", yylineno); return(LEFTSHIFT_OPERATOR);}
"..."			{count(); std::string token_name = "ELLIPSIS"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : ELLIPSIS", yylineno); return(ELLIPSIS);}
"read"          { count(); std::string token_name = "READCSVFUNC"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : READCSVFUNC", yylineno); return READCSVFUNC;}
"head"          { count(); std::string token_name = "HEADFUNC"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : HEADFUNC", yylineno); return HEADFUNC;}
"tail"          { count(); std::string token_name = "TAILFUNC"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : TAILFUNC", yylineno); return TAILFUNC;}
"reset_index"   { count(); std::string token_name = "RESETINDEXFUNC"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : RESETINDEXFUNC", yylineno); return RESETINDEXFUNC;}
"to_csv"        { count(); std::string token_name = "TOCSVFUNC"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : TOCSVFUNC", yylineno); return TOCSVFUNC;}
"describe"      { count(); std::string token_name = "DESCRIBEFUNC"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : DESCRIBEFUNC", yylineno); return DESCRIBEFUNC;}
"mean"          { count(); std::string token_name = "MEANFUNC"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : MEANFUNC", yylineno); return MEANFUNC;}
"mode"          { count(); std::string token_name = "MODEFUNC"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : MODEFUNC", yylineno); return MODEFUNC;}
"median"        { count(); std::string token_name = "MEDIANFUNC"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : MEDIANFUNC", yylineno); return MEDIANFUNC;}
"sum"           { count(); std::string token_name = "SUMFUNC"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : SUMFUNC", yylineno); return SUMFUNC;}
"min"           { count(); std::string token_name = "MINFUNC"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : MINFUNC", yylineno); return MINFUNC;}
"max"           { count(); std::string token_name = "MAXFUNC"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : MAXFUNC", yylineno); return MAXFUNC;}
"numeric"       { count(); std::string token_name = "NUMERIC"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : NUMERIC", yylineno); return NUMERIC;}
"axis"          { count(); std::string token_name = "AXIS"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : AXIS", yylineno); return AXIS;}
"miss_value"    { count(); std::string token_name = "MISSVALUEFUNC"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : MISSVALUEFUNC", yylineno); return MISSVALUEFUNC;}
"exchange"      { count(); std::string token_name = "EXCHANGEVALUEFUNC"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : EXCHANGEVALUEFUNC", yylineno); return EXCHANGEVALUEFUNC;}
"groupby"       { count(); std::string token_name = "GROUPBYFUNC"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : GROUPBYFUNC", yylineno); return GROUPBYFUNC;}
"concat"        { count(); std::string token_name = "CONCATFUNC"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : CONCATFUNC", yylineno); return CONCATFUNC;}
"merge"         { count(); std::string token_name = "MERGEFUNC"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : MERGEFUNC", yylineno); return MERGEFUNC;}
"how"           { count(); std::string token_name = "HOW_TOKEN"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : HOW_TOKEN", yylineno); return HOW_TOKEN;}
"on"            { count(); std::string token_name = "ON_TOKEN"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : ON_TOKEN", yylineno); return ON_TOKEN;}
"suffix"        { count(); std::string token_name = "SUFFIXES_TOKEN"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : SUFFIXES_TOKEN", yylineno); return SUFFIXES_TOKEN;}
"join"          { count(); std::string token_name = "JOINFUNC"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : JOINFUNC", yylineno); return JOINFUNC;}
[0-9]+(\.[0-9]+)?([eE][+-]?[0-9]+)     {count(); std::string token_name = "EXPONENTIAL"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : EXPONENTIAL", yylineno); return EXPONENTIAL;}
[0-9]+(\.[0-9]+)?%                     {count(); std::string token_name = "PERCENTAGE"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : PERCENTAGE", yylineno); return PERCENTAGE;}
[0-9]+(\.[0-9]+)                       {count(); std::string token_name = "FLOATNUM"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : FLOATNUM", yylineno); return FLOATNUM;}
[0-9]+                                 {count(); yylval.in = atoi(yytext); std::string token_name = "INTNUM"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : INTNUM", yylineno); return INTNUM;}
"'"[A-Za-z_]+\.csv"'"                  {count(); yylval.str = strdup(yytext); std::string token_name = "CSVFILE"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : CSVFILE", yylineno); return CSVFILE;}
"'"([^'\\]|\\.)*"'"                    {count(); std::string token_name = "SINGLE_QUOTED_STRING"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : SINGLE_QUOTED_STRING", yylineno); return SINGLE_QUOTED_STRING;}
\"([^\"\\]|\\.)*\"                     {count(); std::string token_name = "STRING"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : STRING", yylineno); return STRING;}
[A-Za-z][A-Za-z0-9_]*                  {count(); yylval.str = strdup(yytext); std::string token_name = "IDENTIFIER"; SymbolInfo info(token_name, yylineno, column, " "); symbolTable.put(uniqueID, info); uniqueID++; fprintf(lex_output, "\n %d : IDENTIFIER", yylineno); return IDENTIFIER;}
\/\/[^\n]*                             ;
{start}([^*]|\*+[^/])*{end}            ;
'                                      {count(); return '\'';}
\"                                     {count(); return '\"';}
[ ]                                    ;
\n                                     { count(); yylineno++;}
[ \t\v\f]                              { count();}
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
