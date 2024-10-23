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
    ELSEIF = 287,                  /* ELSEIF  */
    BREAK = 288,                   /* BREAK  */
    CONTINUE = 289,                /* CONTINUE  */
    RTRN = 290,                    /* RTRN  */
    FUNC = 291,                    /* FUNC  */
    FLOATNUM = 292,                /* FLOATNUM  */
    STRING = 293,                  /* STRING  */
    TRUE = 294,                    /* TRUE  */
    FALSE = 295,                   /* FALSE  */
    SINGLE_QUOTED_STRING = 296,    /* SINGLE_QUOTED_STRING  */
    INPUT = 297,                   /* INPUT  */
    OUTPUT = 298,                  /* OUTPUT  */
    ADD_ASSIGN_OPERATOR = 299,     /* ADD_ASSIGN_OPERATOR  */
    SUB_ASSIGN_OPERATOR = 300,     /* SUB_ASSIGN_OPERATOR  */
    MUL_ASSIGN_OPERATOR = 301,     /* MUL_ASSIGN_OPERATOR  */
    DIV_ASSIGN_OPERATOR = 302,     /* DIV_ASSIGN_OPERATOR  */
    MOD_ASSIGN_OPERATOR = 303,     /* MOD_ASSIGN_OPERATOR  */
    LE_OPERATOR = 304,             /* LE_OPERATOR  */
    GE_OPERATOR = 305,             /* GE_OPERATOR  */
    DEQ_OPERATOR = 306,            /* DEQ_OPERATOR  */
    NE_OPERATOR = 307,             /* NE_OPERATOR  */
    PERCENTAGE = 308,              /* PERCENTAGE  */
    INTEGER = 309,                 /* INTEGER  */
    IDENTIFIER = 310,              /* IDENTIFIER  */
    SEMICOLON = 311,               /* SEMICOLON  */
    AND_OPERATOR = 312,            /* AND_OPERATOR  */
    OR_OPERATOR = 313,             /* OR_OPERATOR  */
    NOT_OPERATOR = 314,            /* NOT_OPERATOR  */
    INC_OPERATOR = 315,            /* INC_OPERATOR  */
    DEC_OPERATOR = 316,            /* DEC_OPERATOR  */
    RIGHTSHIFT_OPERATOR = 317,     /* RIGHTSHIFT_OPERATOR  */
    LEFTSHIFT_OPERATOR = 318,      /* LEFTSHIFT_OPERATOR  */
    ELLIPSIS = 319,                /* ELLIPSIS  */
    EXPONENTIAL = 320,             /* EXPONENTIAL  */
    DUST = 321,                    /* DUST  */
    CSVFILE = 322,                 /* CSVFILE  */
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
#define ELSEIF 287
#define BREAK 288
#define CONTINUE 289
#define RTRN 290
#define FUNC 291
#define FLOATNUM 292
#define STRING 293
#define TRUE 294
#define FALSE 295
#define SINGLE_QUOTED_STRING 296
#define INPUT 297
#define OUTPUT 298
#define ADD_ASSIGN_OPERATOR 299
#define SUB_ASSIGN_OPERATOR 300
#define MUL_ASSIGN_OPERATOR 301
#define DIV_ASSIGN_OPERATOR 302
#define MOD_ASSIGN_OPERATOR 303
#define LE_OPERATOR 304
#define GE_OPERATOR 305
#define DEQ_OPERATOR 306
#define NE_OPERATOR 307
#define PERCENTAGE 308
#define INTEGER 309
#define IDENTIFIER 310
#define SEMICOLON 311
#define AND_OPERATOR 312
#define OR_OPERATOR 313
#define NOT_OPERATOR 314
#define INC_OPERATOR 315
#define DEC_OPERATOR 316
#define RIGHTSHIFT_OPERATOR 317
#define LEFTSHIFT_OPERATOR 318
#define ELLIPSIS 319
#define EXPONENTIAL 320
#define DUST 321
#define CSVFILE 322
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
#line 12 "rc_parser.y"

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
