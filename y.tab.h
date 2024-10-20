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
    INT_TYPE = 259,                /* INT_TYPE  */
    FLOAT_TYPE = 260,              /* FLOAT_TYPE  */
    STRING_TYPE = 261,             /* STRING_TYPE  */
    LOOP = 262,                    /* LOOP  */
    IF = 263,                      /* IF  */
    ELSE = 264,                    /* ELSE  */
    BREAK = 265,                   /* BREAK  */
    CONTINUE = 266,                /* CONTINUE  */
    RTRN = 267,                    /* RTRN  */
    FUNC = 268,                    /* FUNC  */
    INTNUM = 269,                  /* INTNUM  */
    FLOATNUM = 270,                /* FLOATNUM  */
    STRING = 271,                  /* STRING  */
    BOOL = 272,                    /* BOOL  */
    TRUE = 273,                    /* TRUE  */
    FALSE = 274,                   /* FALSE  */
    SINGLE_QUOTED_STRING = 275,    /* SINGLE_QUOTED_STRING  */
    INPUT = 276,                   /* INPUT  */
    OUTPUT = 277,                  /* OUTPUT  */
    ADD_ASSIGN_OPERATOR = 278,     /* ADD_ASSIGN_OPERATOR  */
    SUB_ASSIGN_OPERATOR = 279,     /* SUB_ASSIGN_OPERATOR  */
    MUL_ASSIGN_OPERATOR = 280,     /* MUL_ASSIGN_OPERATOR  */
    DIV_ASSIGN_OPERATOR = 281,     /* DIV_ASSIGN_OPERATOR  */
    MOD_ASSIGN_OPERATOR = 282,     /* MOD_ASSIGN_OPERATOR  */
    LE_OPERATOR = 283,             /* LE_OPERATOR  */
    GE_OPERATOR = 284,             /* GE_OPERATOR  */
    DEQ_OPERATOR = 285,            /* DEQ_OPERATOR  */
    NE_OPERATOR = 286,             /* NE_OPERATOR  */
    PERCENTAGE = 287,              /* PERCENTAGE  */
    INTEGER = 288,                 /* INTEGER  */
    IDENTIFIER = 289,              /* IDENTIFIER  */
    SEMICOLON = 290,               /* SEMICOLON  */
    AND_OPERATOR = 291,            /* AND_OPERATOR  */
    OR_OPERATOR = 292,             /* OR_OPERATOR  */
    NOT_OPERATOR = 293,            /* NOT_OPERATOR  */
    INC_OPERATOR = 294,            /* INC_OPERATOR  */
    DEC_OPERATOR = 295,            /* DEC_OPERATOR  */
    RIGHTSHIFT_OPERATOR = 296,     /* RIGHTSHIFT_OPERATOR  */
    LEFTSHIFT_OPERATOR = 297,      /* LEFTSHIFT_OPERATOR  */
    ELLIPSIS = 298,                /* ELLIPSIS  */
    EXPONENTIAL = 299,             /* EXPONENTIAL  */
    DUST = 300,                    /* DUST  */
    CSVFILE = 301,                 /* CSVFILE  */
    FUNCTIONCALL = 302,            /* FUNCTIONCALL  */
    PRINT = 303,                   /* PRINT  */
    CONSTANT = 304,                /* CONSTANT  */
    READCSVFUNC = 305,             /* READCSVFUNC  */
    HEADFUNC = 306,                /* HEADFUNC  */
    TAILFUNC = 307,                /* TAILFUNC  */
    RESETINDEXFUNC = 308,          /* RESETINDEXFUNC  */
    TOCSVFUNC = 309,               /* TOCSVFUNC  */
    DESCRIBEFUNC = 310,            /* DESCRIBEFUNC  */
    MEANFUNC = 311,                /* MEANFUNC  */
    MODEFUNC = 312,                /* MODEFUNC  */
    MEDIANFUNC = 313,              /* MEDIANFUNC  */
    SUMFUNC = 314,                 /* SUMFUNC  */
    MINFUNC = 315,                 /* MINFUNC  */
    MAXFUNC = 316,                 /* MAXFUNC  */
    MISSVALUEFUNC = 317,           /* MISSVALUEFUNC  */
    EXCHANGEFUNC = 318,            /* EXCHANGEFUNC  */
    GROUPBYFUNC = 319,             /* GROUPBYFUNC  */
    CONCATFUNC = 320,              /* CONCATFUNC  */
    MERGEFUNC = 321,               /* MERGEFUNC  */
    JOINFUNC = 322,                /* JOINFUNC  */
    AXIS_TOKEN = 323,              /* AXIS_TOKEN  */
    DROP_TOKEN = 324,              /* DROP_TOKEN  */
    INPLACE_TOKEN = 325,           /* INPLACE_TOKEN  */
    METHOD_TOKEN = 326,            /* METHOD_TOKEN  */
    HOW_TOKEN = 327,               /* HOW_TOKEN  */
    ON_TOKEN = 328,                /* ON_TOKEN  */
    SUFFIXES_TOKEN = 329,          /* SUFFIXES_TOKEN  */
    FILL_TOKEN = 330               /* FILL_TOKEN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define LOWER_THAN_ELSE 258
#define INT_TYPE 259
#define FLOAT_TYPE 260
#define STRING_TYPE 261
#define LOOP 262
#define IF 263
#define ELSE 264
#define BREAK 265
#define CONTINUE 266
#define RTRN 267
#define FUNC 268
#define INTNUM 269
#define FLOATNUM 270
#define STRING 271
#define BOOL 272
#define TRUE 273
#define FALSE 274
#define SINGLE_QUOTED_STRING 275
#define INPUT 276
#define OUTPUT 277
#define ADD_ASSIGN_OPERATOR 278
#define SUB_ASSIGN_OPERATOR 279
#define MUL_ASSIGN_OPERATOR 280
#define DIV_ASSIGN_OPERATOR 281
#define MOD_ASSIGN_OPERATOR 282
#define LE_OPERATOR 283
#define GE_OPERATOR 284
#define DEQ_OPERATOR 285
#define NE_OPERATOR 286
#define PERCENTAGE 287
#define INTEGER 288
#define IDENTIFIER 289
#define SEMICOLON 290
#define AND_OPERATOR 291
#define OR_OPERATOR 292
#define NOT_OPERATOR 293
#define INC_OPERATOR 294
#define DEC_OPERATOR 295
#define RIGHTSHIFT_OPERATOR 296
#define LEFTSHIFT_OPERATOR 297
#define ELLIPSIS 298
#define EXPONENTIAL 299
#define DUST 300
#define CSVFILE 301
#define FUNCTIONCALL 302
#define PRINT 303
#define CONSTANT 304
#define READCSVFUNC 305
#define HEADFUNC 306
#define TAILFUNC 307
#define RESETINDEXFUNC 308
#define TOCSVFUNC 309
#define DESCRIBEFUNC 310
#define MEANFUNC 311
#define MODEFUNC 312
#define MEDIANFUNC 313
#define SUMFUNC 314
#define MINFUNC 315
#define MAXFUNC 316
#define MISSVALUEFUNC 317
#define EXCHANGEFUNC 318
#define GROUPBYFUNC 319
#define CONCATFUNC 320
#define MERGEFUNC 321
#define JOINFUNC 322
#define AXIS_TOKEN 323
#define DROP_TOKEN 324
#define INPLACE_TOKEN 325
#define METHOD_TOKEN 326
#define HOW_TOKEN 327
#define ON_TOKEN 328
#define SUFFIXES_TOKEN 329
#define FILL_TOKEN 330

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
