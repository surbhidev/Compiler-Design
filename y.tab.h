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
    INT_TYPE = 262,                /* INT_TYPE  */
    FLOAT_TYPE = 263,              /* FLOAT_TYPE  */
    STRING_TYPE = 264,             /* STRING_TYPE  */
    SKIPNA = 265,                  /* SKIPNA  */
    FILL = 266,                    /* FILL  */
    FFILL = 267,                   /* FFILL  */
    BFILL = 268,                   /* BFILL  */
    INTERPOLATE = 269,             /* INTERPOLATE  */
    METHOD = 270,                  /* METHOD  */
    REGX = 271,                    /* REGX  */
    INNER = 272,                   /* INNER  */
    LEFT = 273,                    /* LEFT  */
    RIGHT = 274,                   /* RIGHT  */
    OUTER = 275,                   /* OUTER  */
    SEP = 276,                     /* SEP  */
    HEADER = 277,                  /* HEADER  */
    INDEX_COL = 278,               /* INDEX_COL  */
    USECOLS = 279,                 /* USECOLS  */
    INDEX = 280,                   /* INDEX  */
    DROP = 281,                    /* DROP  */
    INPLACE = 282,                 /* INPLACE  */
    AXIS = 283,                    /* AXIS  */
    NUMERIC = 284,                 /* NUMERIC  */
    LOOP = 285,                    /* LOOP  */
    IF = 286,                      /* IF  */
    ELSE = 287,                    /* ELSE  */
    ELSEIF = 288,                  /* ELSEIF  */
    BREAK = 289,                   /* BREAK  */
    CONTINUE = 290,                /* CONTINUE  */
    RTRN = 291,                    /* RTRN  */
    FUNC = 292,                    /* FUNC  */
    FLOATNUM = 293,                /* FLOATNUM  */
    STRING = 294,                  /* STRING  */
    TRUE = 295,                    /* TRUE  */
    FALSE = 296,                   /* FALSE  */
    SINGLE_QUOTED_STRING = 297,    /* SINGLE_QUOTED_STRING  */
    INPUT = 298,                   /* INPUT  */
    OUTPUT = 299,                  /* OUTPUT  */
    ADD_ASSIGN_OPERATOR = 300,     /* ADD_ASSIGN_OPERATOR  */
    SUB_ASSIGN_OPERATOR = 301,     /* SUB_ASSIGN_OPERATOR  */
    MUL_ASSIGN_OPERATOR = 302,     /* MUL_ASSIGN_OPERATOR  */
    DIV_ASSIGN_OPERATOR = 303,     /* DIV_ASSIGN_OPERATOR  */
    MOD_ASSIGN_OPERATOR = 304,     /* MOD_ASSIGN_OPERATOR  */
    LE_OPERATOR = 305,             /* LE_OPERATOR  */
    GE_OPERATOR = 306,             /* GE_OPERATOR  */
    DEQ_OPERATOR = 307,            /* DEQ_OPERATOR  */
    NE_OPERATOR = 308,             /* NE_OPERATOR  */
    PERCENTAGE = 309,              /* PERCENTAGE  */
    INTEGER = 310,                 /* INTEGER  */
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
#define IDENTIFIER 260
#define DATAFRAME 261
#define INT_TYPE 262
#define FLOAT_TYPE 263
#define STRING_TYPE 264
#define SKIPNA 265
#define FILL 266
#define FFILL 267
#define BFILL 268
#define INTERPOLATE 269
#define METHOD 270
#define REGX 271
#define INNER 272
#define LEFT 273
#define RIGHT 274
#define OUTER 275
#define SEP 276
#define HEADER 277
#define INDEX_COL 278
#define USECOLS 279
#define INDEX 280
#define DROP 281
#define INPLACE 282
#define AXIS 283
#define NUMERIC 284
#define LOOP 285
#define IF 286
#define ELSE 287
#define ELSEIF 288
#define BREAK 289
#define CONTINUE 290
#define RTRN 291
#define FUNC 292
#define FLOATNUM 293
#define STRING 294
#define TRUE 295
#define FALSE 296
#define SINGLE_QUOTED_STRING 297
#define INPUT 298
#define OUTPUT 299
#define ADD_ASSIGN_OPERATOR 300
#define SUB_ASSIGN_OPERATOR 301
#define MUL_ASSIGN_OPERATOR 302
#define DIV_ASSIGN_OPERATOR 303
#define MOD_ASSIGN_OPERATOR 304
#define LE_OPERATOR 305
#define GE_OPERATOR 306
#define DEQ_OPERATOR 307
#define NE_OPERATOR 308
#define PERCENTAGE 309
#define INTEGER 310
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
