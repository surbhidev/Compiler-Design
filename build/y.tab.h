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
    EXPONENTIAL = 263,             /* EXPONENTIAL  */
    PERCENTAGE = 264,              /* PERCENTAGE  */
    INNER = 265,                   /* INNER  */
    LEFT = 266,                    /* LEFT  */
    RIGHT = 267,                   /* RIGHT  */
    OUTER = 268,                   /* OUTER  */
    INT_TYPE = 269,                /* INT_TYPE  */
    FLOAT_TYPE = 270,              /* FLOAT_TYPE  */
    STRING_TYPE = 271,             /* STRING_TYPE  */
    SKIPNA = 272,                  /* SKIPNA  */
    FILL = 273,                    /* FILL  */
    FFILL = 274,                   /* FFILL  */
    BFILL = 275,                   /* BFILL  */
    INTERPOLATE = 276,             /* INTERPOLATE  */
    METHOD = 277,                  /* METHOD  */
    REGX = 278,                    /* REGX  */
    SEP = 279,                     /* SEP  */
    HEADER = 280,                  /* HEADER  */
    INDEX_COL = 281,               /* INDEX_COL  */
    USECOLS = 282,                 /* USECOLS  */
    INDEX = 283,                   /* INDEX  */
    DROP = 284,                    /* DROP  */
    INPLACE = 285,                 /* INPLACE  */
    AXIS = 286,                    /* AXIS  */
    NUMERIC = 287,                 /* NUMERIC  */
    LOOP = 288,                    /* LOOP  */
    IF = 289,                      /* IF  */
    ELSE = 290,                    /* ELSE  */
    ELSEIF = 291,                  /* ELSEIF  */
    BREAK = 292,                   /* BREAK  */
    CONTINUE = 293,                /* CONTINUE  */
    RTRN = 294,                    /* RTRN  */
    FUNC = 295,                    /* FUNC  */
    FLOATNUM = 296,                /* FLOATNUM  */
    STRING = 297,                  /* STRING  */
    SINGLE_QUOTED_STRING = 298,    /* SINGLE_QUOTED_STRING  */
    TRUE = 299,                    /* TRUE  */
    FALSE = 300,                   /* FALSE  */
    NOT_OPERATOR = 301,            /* NOT_OPERATOR  */
    INPUT = 302,                   /* INPUT  */
    OUTPUT = 303,                  /* OUTPUT  */
    ADD_ASSIGN_OPERATOR = 304,     /* ADD_ASSIGN_OPERATOR  */
    SUB_ASSIGN_OPERATOR = 305,     /* SUB_ASSIGN_OPERATOR  */
    MUL_ASSIGN_OPERATOR = 306,     /* MUL_ASSIGN_OPERATOR  */
    DIV_ASSIGN_OPERATOR = 307,     /* DIV_ASSIGN_OPERATOR  */
    MOD_ASSIGN_OPERATOR = 308,     /* MOD_ASSIGN_OPERATOR  */
    LE_OPERATOR = 309,             /* LE_OPERATOR  */
    GE_OPERATOR = 310,             /* GE_OPERATOR  */
    DEQ_OPERATOR = 311,            /* DEQ_OPERATOR  */
    NE_OPERATOR = 312,             /* NE_OPERATOR  */
    INTEGER = 313,                 /* INTEGER  */
    SEMICOLON = 314,               /* SEMICOLON  */
    AND_OPERATOR = 315,            /* AND_OPERATOR  */
    OR_OPERATOR = 316,             /* OR_OPERATOR  */
    INC_OPERATOR = 317,            /* INC_OPERATOR  */
    DEC_OPERATOR = 318,            /* DEC_OPERATOR  */
    RIGHTSHIFT_OPERATOR = 319,     /* RIGHTSHIFT_OPERATOR  */
    LEFTSHIFT_OPERATOR = 320,      /* LEFTSHIFT_OPERATOR  */
    ELLIPSIS = 321,                /* ELLIPSIS  */
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
#define EXPONENTIAL 263
#define PERCENTAGE 264
#define INNER 265
#define LEFT 266
#define RIGHT 267
#define OUTER 268
#define INT_TYPE 269
#define FLOAT_TYPE 270
#define STRING_TYPE 271
#define SKIPNA 272
#define FILL 273
#define FFILL 274
#define BFILL 275
#define INTERPOLATE 276
#define METHOD 277
#define REGX 278
#define SEP 279
#define HEADER 280
#define INDEX_COL 281
#define USECOLS 282
#define INDEX 283
#define DROP 284
#define INPLACE 285
#define AXIS 286
#define NUMERIC 287
#define LOOP 288
#define IF 289
#define ELSE 290
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
#line 33 "../src/rc_parser.y"

    int in;
    float flt;
    char *str;
    bool bl;

#line 266 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
