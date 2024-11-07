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
    IDENTIFIER = 260,              /* IDENTIFIER  */
    DATAFRAME = 261,               /* DATAFRAME  */
    CSVFILE = 262,                 /* CSVFILE  */
    INT_TYPE = 263,                /* INT_TYPE  */
    FLOAT_TYPE = 264,              /* FLOAT_TYPE  */
    STRING_TYPE = 265,             /* STRING_TYPE  */
    SKIPNA = 266,                  /* SKIPNA  */
    FILL = 267,                    /* FILL  */
    FFILL = 268,                   /* FFILL  */
    BFILL = 269,                   /* BFILL  */
    INTERPOLATE = 270,             /* INTERPOLATE  */
    METHOD = 271,                  /* METHOD  */
    REGX = 272,                    /* REGX  */
    INNER = 273,                   /* INNER  */
    LEFT = 274,                    /* LEFT  */
    RIGHT = 275,                   /* RIGHT  */
    OUTER = 276,                   /* OUTER  */
    SEP = 277,                     /* SEP  */
    HEADER = 278,                  /* HEADER  */
    INDEX_COL = 279,               /* INDEX_COL  */
    USECOLS = 280,                 /* USECOLS  */
    INDEX = 281,                   /* INDEX  */
    DROP = 282,                    /* DROP  */
    INPLACE = 283,                 /* INPLACE  */
    AXIS = 284,                    /* AXIS  */
    NUMERIC = 285,                 /* NUMERIC  */
    LOOP = 286,                    /* LOOP  */
    IF = 287,                      /* IF  */
    ELSE = 288,                    /* ELSE  */
    ELSEIF = 289,                  /* ELSEIF  */
    BREAK = 290,                   /* BREAK  */
    CONTINUE = 291,                /* CONTINUE  */
    RTRN = 292,                    /* RTRN  */
    FUNC = 293,                    /* FUNC  */
    FLOATNUM = 294,                /* FLOATNUM  */
    STRING = 295,                  /* STRING  */
    TRUE = 296,                    /* TRUE  */
    FALSE = 297,                   /* FALSE  */
    SINGLE_QUOTED_STRING = 298,    /* SINGLE_QUOTED_STRING  */
    INPUT = 299,                   /* INPUT  */
    OUTPUT = 300,                  /* OUTPUT  */
    ADD_ASSIGN_OPERATOR = 301,     /* ADD_ASSIGN_OPERATOR  */
    SUB_ASSIGN_OPERATOR = 302,     /* SUB_ASSIGN_OPERATOR  */
    MUL_ASSIGN_OPERATOR = 303,     /* MUL_ASSIGN_OPERATOR  */
    DIV_ASSIGN_OPERATOR = 304,     /* DIV_ASSIGN_OPERATOR  */
    MOD_ASSIGN_OPERATOR = 305,     /* MOD_ASSIGN_OPERATOR  */
    LE_OPERATOR = 306,             /* LE_OPERATOR  */
    GE_OPERATOR = 307,             /* GE_OPERATOR  */
    DEQ_OPERATOR = 308,            /* DEQ_OPERATOR  */
    NE_OPERATOR = 309,             /* NE_OPERATOR  */
    PERCENTAGE = 310,              /* PERCENTAGE  */
    INTEGER = 311,                 /* INTEGER  */
    SEMICOLON = 312,               /* SEMICOLON  */
    AND_OPERATOR = 313,            /* AND_OPERATOR  */
    OR_OPERATOR = 314,             /* OR_OPERATOR  */
    NOT_OPERATOR = 315,            /* NOT_OPERATOR  */
    INC_OPERATOR = 316,            /* INC_OPERATOR  */
    DEC_OPERATOR = 317,            /* DEC_OPERATOR  */
    RIGHTSHIFT_OPERATOR = 318,     /* RIGHTSHIFT_OPERATOR  */
    LEFTSHIFT_OPERATOR = 319,      /* LEFTSHIFT_OPERATOR  */
    ELLIPSIS = 320,                /* ELLIPSIS  */
    EXPONENTIAL = 321,             /* EXPONENTIAL  */
    DUST = 322,                    /* DUST  */
    FUNCTIONCALL = 323,            /* FUNCTIONCALL  */
    PRINT = 324,                   /* PRINT  */
    CONSTANT = 325,                /* CONSTANT  */
    READCSVFUNC = 326,             /* READCSVFUNC  */
    HEADFUNC = 327,                /* HEADFUNC  */
    TAILFUNC = 328,                /* TAILFUNC  */
    RESETINDEXFUNC = 329,          /* RESETINDEXFUNC  */
    TOCSVFUNC = 330,               /* TOCSVFUNC  */
    DESCRIBEFUNC = 331,            /* DESCRIBEFUNC  */
    MEANFUNC = 332,                /* MEANFUNC  */
    MODEFUNC = 333,                /* MODEFUNC  */
    MEDIANFUNC = 334,              /* MEDIANFUNC  */
    SUMFUNC = 335,                 /* SUMFUNC  */
    MINFUNC = 336,                 /* MINFUNC  */
    MAXFUNC = 337,                 /* MAXFUNC  */
    MISSVALUEFUNC = 338,           /* MISSVALUEFUNC  */
    EXCHANGEVALUEFUNC = 339,       /* EXCHANGEVALUEFUNC  */
    GROUPBYFUNC = 340,             /* GROUPBYFUNC  */
    CONCATFUNC = 341,              /* CONCATFUNC  */
    MERGEFUNC = 342,               /* MERGEFUNC  */
    JOINFUNC = 343,                /* JOINFUNC  */
    AXIS_TOKEN = 344,              /* AXIS_TOKEN  */
    DROP_TOKEN = 345,              /* DROP_TOKEN  */
    INPLACE_TOKEN = 346,           /* INPLACE_TOKEN  */
    METHOD_TOKEN = 347,            /* METHOD_TOKEN  */
    HOW_TOKEN = 348,               /* HOW_TOKEN  */
    ON_TOKEN = 349,                /* ON_TOKEN  */
    SUFFIXES_TOKEN = 350,          /* SUFFIXES_TOKEN  */
    FILL_TOKEN = 351               /* FILL_TOKEN  */
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
#define IDENTIFIER 260
#define DATAFRAME 261
#define CSVFILE 262
#define INT_TYPE 263
#define FLOAT_TYPE 264
#define STRING_TYPE 265
#define SKIPNA 266
#define FILL 267
#define FFILL 268
#define BFILL 269
#define INTERPOLATE 270
#define METHOD 271
#define REGX 272
#define INNER 273
#define LEFT 274
#define RIGHT 275
#define OUTER 276
#define SEP 277
#define HEADER 278
#define INDEX_COL 279
#define USECOLS 280
#define INDEX 281
#define DROP 282
#define INPLACE 283
#define AXIS 284
#define NUMERIC 285
#define LOOP 286
#define IF 287
#define ELSE 288
#define ELSEIF 289
#define BREAK 290
#define CONTINUE 291
#define RTRN 292
#define FUNC 293
#define FLOATNUM 294
#define STRING 295
#define TRUE 296
#define FALSE 297
#define SINGLE_QUOTED_STRING 298
#define INPUT 299
#define OUTPUT 300
#define ADD_ASSIGN_OPERATOR 301
#define SUB_ASSIGN_OPERATOR 302
#define MUL_ASSIGN_OPERATOR 303
#define DIV_ASSIGN_OPERATOR 304
#define MOD_ASSIGN_OPERATOR 305
#define LE_OPERATOR 306
#define GE_OPERATOR 307
#define DEQ_OPERATOR 308
#define NE_OPERATOR 309
#define PERCENTAGE 310
#define INTEGER 311
#define SEMICOLON 312
#define AND_OPERATOR 313
#define OR_OPERATOR 314
#define NOT_OPERATOR 315
#define INC_OPERATOR 316
#define DEC_OPERATOR 317
#define RIGHTSHIFT_OPERATOR 318
#define LEFTSHIFT_OPERATOR 319
#define ELLIPSIS 320
#define EXPONENTIAL 321
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
#line 13 "rc_parser.y"

    int in;
    float flt;
    char *str;  

#line 265 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
