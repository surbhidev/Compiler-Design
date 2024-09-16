/*
    LEXER FOR OUR CSV DATA PROCESSING DSL

    File extension: .rc is the extension we have created for our DSL Raccoons
    
    Takes the code from .rc files
    Identifies the lexemes or tokens in the code
    These split lexemes are given as input to the parser

*/

// __definition or declaration section__

%{

#include <stdio.h>
// this wud be needed after parser is built
// #include "y.tab.h"


//function prototypes 

/*
    Count function - to keep track of the line and column in the line we are in 
    This is important when we want to throw errors at a particular line

    (inspired from the ANSI C lex code in https://www.lysator.liu.se/c/ANSI-C-grammar-l.html )
*/
void count();

// A function to ignore multi-line comments 
void comment_ml();

// A function to ignore single-line comments 
void comment_sl();
%}


// __Rules section__
%%

/* comment recognition - both the comment syntaxes are inspired from C++ style */
"/*"            {comment_ml();}
"//"            {comment_sl();}

/* KEYWORDS RECOGNITION RULES */

/* keywords necessary for control flow */
"for"           {count(); return(FOR);}
"while"         {count(); return(WHILE);}
"if"            {count(); return(IF);}
"else"          {count(); return(ELSE);}
"break"         {count(); return(BREAK);}
"continue"      {count(); return(CONTINUE);}

/* keywords for datatype specification */
"int"           {count(); return(INT);}
"float"         {count(); return(FLOAT);}
"string"        {count(); return(STRING);}
"bool"          {count(); return(BOOL);}

/* boolean values keywords */
"true"          {count(); return(TRUE);}
"false"         {count(); return(FALSE);}

/* keywords for io operations */
"input"         {count(); return(INPUT);}
"output"        {count(); return(OUTPUT);}

/* operator matching rules */
"..."			{count(); return(ELLIPSIS);}

/* 
    these rules are placed before +, -, *, /, % rules 
    this relative order is important

    we are returning tokens like ADD_ASSIGN_OPERATOR here
    This is necessary to ensure that the parser is not confused btwn differnt symbols like += and +
    For operators with just character, we prefer to return the operator itself instead of a token for simplicity
*/
"+="			{count(); return(ADD_ASSIGN_OPERATOR);}
"-="			{count(); return(SUB_ASSIGN_OPERATOR);}
"*="			{count(); return(MUL_ASSIGN_OPERATOR);}
"/="			{count(); return(DIV_ASSIGN_OPERATOR);}
"%="			{count(); return(MOD_ASSIGN_OPERATOR);}

/* right and left shift bitwise operators */
">>"			{count(); return(RIGHTSHIFT_OPERATOR);}
"<<"			{count(); return(LEFTSHIFT_OPERATOR);}

/* increment and decrement - carefully placed before + and - */
"++"			{count(); return(INC_OPERATOR);}
"--"			{count(); return(DEC_OPERATOR);}

/* logical AND and OR - placed before the bitwise & and | rules */ 
"&&"			{count(); return(AND_OPERATOR);}
"||"			{count(); return(OR_OPERATOR);}

/* comparision operators */
"<="			{count(); return(LE_OPERATOR);}
">="			{count(); return(GE_OPERATOR);}
"=="			{count(); return(EQ_OPERATOR);}
"!="			{count(); return(NE_OPERATOR);}

/* 
    operators with just a single character
    for simplicity, I am returing the operator itself 

    All of these are listed down based on their precedence over other operators 
    Though it doesnt make a difference to lex, we have done this to stay consistent with the precendence order
*/

"{"		        {count(); return('{');}
"}"		        {count(); return('}');}
","			    {count(); return(',');}
":"			    {count(); return(':');}
"="             {count(); return('=');}
"("			    {count(); return('(');}
")"			    {count(); return(')');}
"["		        {count(); return('[');}
"]"     		{count(); return(']');}
"."			    {count(); return('.');}

"&"			    {count(); return('&');}

/* logical not */
"!"			    {count(); return('!');}
/* bitwise not */
"~"			    {count(); return('~');}

"*"			    {count(); return('*');}
"/"			    {count(); return('/');}
"%"			    {count(); return('%');}

"-"			    {count(); return('-');}
"+"			    {count(); return('+');}

"<"			    {count(); return('<');}
">"			    {count(); return('>');}

"^"			    {count(); return('^');}
"|"			    {count(); return('|');}

/* would be required to support ternary operator */
"?"			    {count(); return('?');}


/* identifier matching rule */


/* auto typecasting rules - the ones written by Suved for white paper */

/* Is this needed @suved...what is the purpose of this
"datatype"      {return DATATYPE_KEYWORD;}

"percentage"    {return PERCENTAGE_KEYWORD;}


[0-9]+(\.[0-9]+)?([eE][+-]?[0-9]+)  {return EXPONENTIAL;}
[0-9]+(\.[0-9]+)?%                  {return PERCENTAGE;}
[0-9]+(\.[0-9]+)                    {return FLOAT;}
[+-]?[0-9]+                         {return INTEGER;}
\"([^\"\\]|\\.)*\"                  {return STRING;}
.                                   { /* DUST_BIN */ }

%%


// __Function definitions section__

yywrap()
{
    return (1);
}


void comment_ml()
{
    int comment_end_flag = 1;
    //this flag will be set to 0 when we do not encounter / after *


    while(comment_end_flag == 1)
    {
        //loop through all the characters in the comment until we find *
        //input() is a flex function that reads the next char from the input stream
        
        while ((c = input())!= '*')
            ;

        //checking if that * is actually indicating end of the comment 
        //(by making sure the next character is /)
        if(c = input() != '/')
        {
            comment_end_flag = 0;
            //indicating that the comment has not ended
        }
        else{
            break;
        }
    }
}


void comment_sl()
{
    while(c = input() != '\n')
        ;
}


// declaring the column count variable globally
int column = 0;

void count()
{
    // we need to know the column number of the encountered character in the code 
    // line number can be found by using the yylineno function given by flex
    while(yytext[letter] != '\0')
    {
        //looping until we find the EOF character
        if(yytext[letter] == '/n')
        {
            // in a new line, we again start from column 0
            column = 0;
        }
        else
        {
            column++;
        }

        //moving to the next letter in the line
        letter++;
    }
}


