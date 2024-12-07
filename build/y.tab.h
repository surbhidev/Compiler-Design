/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    LOWER_THAN_ELSE = 258,
    ELSE = 259,
    INTNUM = 260,
    IDENTIFIER = 261,
    DATAFRAME = 262,
    CSVFILE = 263,
    EXPONENTIAL = 264,
    PERCENTAGE = 265,
    INNER = 266,
    LEFT = 267,
    RIGHT = 268,
    OUTER = 269,
    INT_TYPE = 270,
    FLOAT_TYPE = 271,
    STRING_TYPE = 272,
    SKIPNA = 273,
    FILL = 274,
    FFILL = 275,
    BFILL = 276,
    INTERPOLATE = 277,
    METHOD = 278,
    REGX = 279,
    SEP = 280,
    HEADER = 281,
    INDEX_COL = 282,
    USECOLS = 283,
    INDEX = 284,
    DROP = 285,
    INPLACE = 286,
    AXIS = 287,
    NUMERIC = 288,
    LOOP = 289,
    IF = 290,
    ELSEIF = 291,
    BREAK = 292,
    CONTINUE = 293,
    RTRN = 294,
    FUNC = 295,
    FLOATNUM = 296,
    STRING = 297,
    SINGLE_QUOTED_STRING = 298,
    TRUE = 299,
    FALSE = 300,
    NOT_OPERATOR = 301,
    INPUT = 302,
    OUTPUT = 303,
    ADD_ASSIGN_OPERATOR = 304,
    SUB_ASSIGN_OPERATOR = 305,
    MUL_ASSIGN_OPERATOR = 306,
    DIV_ASSIGN_OPERATOR = 307,
    MOD_ASSIGN_OPERATOR = 308,
    LE_OPERATOR = 309,
    GE_OPERATOR = 310,
    DEQ_OPERATOR = 311,
    NE_OPERATOR = 312,
    INTEGER = 313,
    SEMICOLON = 314,
    AND_OPERATOR = 315,
    OR_OPERATOR = 316,
    INC_OPERATOR = 317,
    DEC_OPERATOR = 318,
    RIGHTSHIFT_OPERATOR = 319,
    LEFTSHIFT_OPERATOR = 320,
    ELLIPSIS = 321,
    DUST = 322,
    FUNCTIONCALL = 323,
    PRINT = 324,
    CONSTANT = 325,
    READCSVFUNC = 326,
    HEADFUNC = 327,
    TAILFUNC = 328,
    RESETINDEXFUNC = 329,
    TOCSVFUNC = 330,
    DESCRIBEFUNC = 331,
    MEANFUNC = 332,
    MODEFUNC = 333,
    MEDIANFUNC = 334,
    SUMFUNC = 335,
    MINFUNC = 336,
    MAXFUNC = 337,
    MISSVALUEFUNC = 338,
    EXCHANGEVALUEFUNC = 339,
    GROUPBYFUNC = 340,
    CONCATFUNC = 341,
    MERGEFUNC = 342,
    JOINFUNC = 343,
    AXIS_TOKEN = 344,
    DROP_TOKEN = 345,
    INPLACE_TOKEN = 346,
    METHOD_TOKEN = 347,
    HOW_TOKEN = 348,
    ON_TOKEN = 349,
    SUFFIXES_TOKEN = 350,
    FILL_TOKEN = 351
  };
#endif
/* Tokens.  */
#define LOWER_THAN_ELSE 258
#define ELSE 259
#define INTNUM 260
#define IDENTIFIER 261
#define DATAFRAME 262
#define CSVFILE 263
#define EXPONENTIAL 264
#define PERCENTAGE 265
#define INNER 266
#define LEFT 267
#define RIGHT 268
#define OUTER 269
#define INT_TYPE 270
#define FLOAT_TYPE 271
#define STRING_TYPE 272
#define SKIPNA 273
#define FILL 274
#define FFILL 275
#define BFILL 276
#define INTERPOLATE 277
#define METHOD 278
#define REGX 279
#define SEP 280
#define HEADER 281
#define INDEX_COL 282
#define USECOLS 283
#define INDEX 284
#define DROP 285
#define INPLACE 286
#define AXIS 287
#define NUMERIC 288
#define LOOP 289
#define IF 290
#define ELSEIF 291
#define BREAK 292
#define CONTINUE 293
#define RTRN 294
#define FUNC 295
#define FLOATNUM 296
#define STRING 297
#define SINGLE_QUOTED_STRING 298
#define TRUE 299
#define FALSE 300
#define NOT_OPERATOR 301
#define INPUT 302
#define OUTPUT 303
#define ADD_ASSIGN_OPERATOR 304
#define SUB_ASSIGN_OPERATOR 305
#define MUL_ASSIGN_OPERATOR 306
#define DIV_ASSIGN_OPERATOR 307
#define MOD_ASSIGN_OPERATOR 308
#define LE_OPERATOR 309
#define GE_OPERATOR 310
#define DEQ_OPERATOR 311
#define NE_OPERATOR 312
#define INTEGER 313
#define SEMICOLON 314
#define AND_OPERATOR 315
#define OR_OPERATOR 316
#define INC_OPERATOR 317
#define DEC_OPERATOR 318
#define RIGHTSHIFT_OPERATOR 319
#define LEFTSHIFT_OPERATOR 320
#define ELLIPSIS 321
#define DUST 322
#define FUNCTIONCALL 323
#define PRINT 324
#define CONSTANT 325
#define READCSVFUNC 326
#define HEADFUNC 327
#define TAILFUNC 328
#define RESETINDEXFUNC 329
#define TOCSVFUNC 330
#define DESCRIBEFUNC 331
#define MEANFUNC 332
#define MODEFUNC 333
#define MEDIANFUNC 334
#define SUMFUNC 335
#define MINFUNC 336
#define MAXFUNC 337
#define MISSVALUEFUNC 338
#define EXCHANGEVALUEFUNC 339
#define GROUPBYFUNC 340
#define CONCATFUNC 341
#define MERGEFUNC 342
#define JOINFUNC 343
#define AXIS_TOKEN 344
#define DROP_TOKEN 345
#define INPLACE_TOKEN 346
#define METHOD_TOKEN 347
#define HOW_TOKEN 348
#define ON_TOKEN 349
#define SUFFIXES_TOKEN 350
#define FILL_TOKEN 351

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 31 "../src/rc_parser.y"

    int in;
    float flt;
    char *str;
    bool bl;


#line 257 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
