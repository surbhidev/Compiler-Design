/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    LOWER_THAN_ELSE = 258,         /* LOWER_THAN_ELSE  */
    INTNUM = 259,                  /* INTNUM  */
    INT_TYPE = 260,                /* INT_TYPE  */
    FLOAT_TYPE = 261,              /* FLOAT_TYPE  */
    STRING_TYPE = 262,             /* STRING_TYPE  */
    DATAFRAME = 263,               /* DATAFRAME  */
    SKIPNA = 264,                  /* SKIPNA  */
    FILL = 265,                    /* FILL  */
    FFILL = 266,                   /* FFILL  */
    BFILL = 267,                   /* BFILL  */
    INTERPOLATE = 268,             /* INTERPOLATE  */
    METHOD = 269,                  /* METHOD  */
    REGX = 270,                    /* REGX  */
    INNER = 271,                   /* INNER  */
    LEFT = 272,                    /* LEFT  */
    RIGHT = 273,                   /* RIGHT  */
    OUTER = 274,                   /* OUTER  */
    SEP = 275,                     /* SEP  */
    HEADER = 276,                  /* HEADER  */
    INDEX_COL = 277,               /* INDEX_COL  */
    USECOLS = 278,                 /* USECOLS  */
    INDEX = 279,                   /* INDEX  */
    DROP = 280,                    /* DROP  */
    INPLACE = 281,                 /* INPLACE  */
    AXIS = 282,                    /* AXIS  */
    NUMERIC = 283,                 /* NUMERIC  */
    LOOP = 284,                    /* LOOP  */
    IF = 285,                      /* IF  */
    ELSE = 286,                    /* ELSE  */
    BREAK = 287,                   /* BREAK  */
    CONTINUE = 288,                /* CONTINUE  */
    RTRN = 289,                    /* RTRN  */
    FUNC = 290,                    /* FUNC  */
    FLOATNUM = 291,                /* FLOATNUM  */
    STRING = 292,                  /* STRING  */
    TRUE = 293,                    /* TRUE  */
    FALSE = 294,                   /* FALSE  */
    SINGLE_QUOTED_STRING = 295,    /* SINGLE_QUOTED_STRING  */
    INPUT = 296,                   /* INPUT  */
    OUTPUT = 297,                  /* OUTPUT  */
    ADD_ASSIGN_OPERATOR = 298,     /* ADD_ASSIGN_OPERATOR  */
    SUB_ASSIGN_OPERATOR = 299,     /* SUB_ASSIGN_OPERATOR  */
    MUL_ASSIGN_OPERATOR = 300,     /* MUL_ASSIGN_OPERATOR  */
    DIV_ASSIGN_OPERATOR = 301,     /* DIV_ASSIGN_OPERATOR  */
    MOD_ASSIGN_OPERATOR = 302,     /* MOD_ASSIGN_OPERATOR  */
    LE_OPERATOR = 303,             /* LE_OPERATOR  */
    GE_OPERATOR = 304,             /* GE_OPERATOR  */
    DEQ_OPERATOR = 305,            /* DEQ_OPERATOR  */
    NE_OPERATOR = 306,             /* NE_OPERATOR  */
    PERCENTAGE = 307,              /* PERCENTAGE  */
    INTEGER = 308,                 /* INTEGER  */
    IDENTIFIER = 309,              /* IDENTIFIER  */
    SEMICOLON = 310,               /* SEMICOLON  */
    AND_OPERATOR = 311,            /* AND_OPERATOR  */
    OR_OPERATOR = 312,             /* OR_OPERATOR  */
    NOT_OPERATOR = 313,            /* NOT_OPERATOR  */
    INC_OPERATOR = 314,            /* INC_OPERATOR  */
    DEC_OPERATOR = 315,            /* DEC_OPERATOR  */
    RIGHTSHIFT_OPERATOR = 316,     /* RIGHTSHIFT_OPERATOR  */
    LEFTSHIFT_OPERATOR = 317,      /* LEFTSHIFT_OPERATOR  */
    ELLIPSIS = 318,                /* ELLIPSIS  */
    EXPONENTIAL = 319,             /* EXPONENTIAL  */
    DUST = 320,                    /* DUST  */
    CSVFILE = 321,                 /* CSVFILE  */
    FUNCTIONCALL = 322,            /* FUNCTIONCALL  */
    PRINT = 323,                   /* PRINT  */
    CONSTANT = 324,                /* CONSTANT  */
    READCSVFUNC = 325,             /* READCSVFUNC  */
    HEADFUNC = 326,                /* HEADFUNC  */
    TAILFUNC = 327,                /* TAILFUNC  */
    RESETINDEXFUNC = 328,          /* RESETINDEXFUNC  */
    TOCSVFUNC = 329,               /* TOCSVFUNC  */
    DESCRIBEFUNC = 330,            /* DESCRIBEFUNC  */
    MEANFUNC = 331,                /* MEANFUNC  */
    MODEFUNC = 332,                /* MODEFUNC  */
    MEDIANFUNC = 333,              /* MEDIANFUNC  */
    SUMFUNC = 334,                 /* SUMFUNC  */
    MINFUNC = 335,                 /* MINFUNC  */
    MAXFUNC = 336,                 /* MAXFUNC  */
    MISSVALUEFUNC = 337,           /* MISSVALUEFUNC  */
    EXCHANGEVALUEFUNC = 338,       /* EXCHANGEVALUEFUNC  */
    GROUPBYFUNC = 339,             /* GROUPBYFUNC  */
    CONCATFUNC = 340,              /* CONCATFUNC  */
    MERGEFUNC = 341,               /* MERGEFUNC  */
    JOINFUNC = 342,                /* JOINFUNC  */
    AXIS_TOKEN = 343,              /* AXIS_TOKEN  */
    DROP_TOKEN = 344,              /* DROP_TOKEN  */
    INPLACE_TOKEN = 345,           /* INPLACE_TOKEN  */
    METHOD_TOKEN = 346,            /* METHOD_TOKEN  */
    HOW_TOKEN = 347,               /* HOW_TOKEN  */
    ON_TOKEN = 348,                /* ON_TOKEN  */
    SUFFIXES_TOKEN = 349,          /* SUFFIXES_TOKEN  */
    FILL_TOKEN = 350               /* FILL_TOKEN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define LOWER_THAN_ELSE 258
#define INTNUM 259
#define INT_TYPE 260
#define FLOAT_TYPE 261
#define STRING_TYPE 262
#define DATAFRAME 263
#define SKIPNA 264
#define FILL 265
#define FFILL 266
#define BFILL 267
#define INTERPOLATE 268
#define METHOD 269
#define REGX 270
#define INNER 271
#define LEFT 272
#define RIGHT 273
#define OUTER 274
#define SEP 275
#define HEADER 276
#define INDEX_COL 277
#define USECOLS 278
#define INDEX 279
#define DROP 280
#define INPLACE 281
#define AXIS 282
#define NUMERIC 283
#define LOOP 284
#define IF 285
#define ELSE 286
#define BREAK 287
#define CONTINUE 288
#define RTRN 289
#define FUNC 290
#define FLOATNUM 291
#define STRING 292
#define TRUE 293
#define FALSE 294
#define SINGLE_QUOTED_STRING 295
#define INPUT 296
#define OUTPUT 297
#define ADD_ASSIGN_OPERATOR 298
#define SUB_ASSIGN_OPERATOR 299
#define MUL_ASSIGN_OPERATOR 300
#define DIV_ASSIGN_OPERATOR 301
#define MOD_ASSIGN_OPERATOR 302
#define LE_OPERATOR 303
#define GE_OPERATOR 304
#define DEQ_OPERATOR 305
#define NE_OPERATOR 306
#define PERCENTAGE 307
#define INTEGER 308
#define IDENTIFIER 309
#define SEMICOLON 310
#define AND_OPERATOR 311
#define OR_OPERATOR 312
#define NOT_OPERATOR 313
#define INC_OPERATOR 314
#define DEC_OPERATOR 315
#define RIGHTSHIFT_OPERATOR 316
#define LEFTSHIFT_OPERATOR 317
#define ELLIPSIS 318
#define EXPONENTIAL 319
#define DUST 320
#define CSVFILE 321
#define FUNCTIONCALL 322
#define PRINT 323
#define CONSTANT 324
#define READCSVFUNC 325
#define HEADFUNC 326
#define TAILFUNC 327
#define RESETINDEXFUNC 328
#define TOCSVFUNC 329
#define DESCRIBEFUNC 330
#define MEANFUNC 331
#define MODEFUNC 332
#define MEDIANFUNC 333
#define SUMFUNC 334
#define MINFUNC 335
#define MAXFUNC 336
#define MISSVALUEFUNC 337
#define EXCHANGEVALUEFUNC 338
#define GROUPBYFUNC 339
#define CONCATFUNC 340
#define MERGEFUNC 341
#define JOINFUNC 342
#define AXIS_TOKEN 343
#define DROP_TOKEN 344
#define INPLACE_TOKEN 345
#define METHOD_TOKEN 346
#define HOW_TOKEN 347
#define ON_TOKEN 348
#define SUFFIXES_TOKEN 349
#define FILL_TOKEN 350

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "rc_parser.y"

    int in;
    float flt;
    char *str;  

#line 263 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
