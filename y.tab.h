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
    DATAFRAME = 262,               /* DATAFRAME  */
    LOOP = 263,                    /* LOOP  */
    IF = 264,                      /* IF  */
    ELSE = 265,                    /* ELSE  */
    BREAK = 266,                   /* BREAK  */
    CONTINUE = 267,                /* CONTINUE  */
    RTRN = 268,                    /* RTRN  */
    FUNC = 269,                    /* FUNC  */
    INTNUM = 270,                  /* INTNUM  */
    FLOATNUM = 271,                /* FLOATNUM  */
    STRING = 272,                  /* STRING  */
    BOOL = 273,                    /* BOOL  */
    TRUE = 274,                    /* TRUE  */
    FALSE = 275,                   /* FALSE  */
    SINGLE_QUOTED_STRING = 276,    /* SINGLE_QUOTED_STRING  */
    INPUT = 277,                   /* INPUT  */
    OUTPUT = 278,                  /* OUTPUT  */
    ADD_ASSIGN_OPERATOR = 279,     /* ADD_ASSIGN_OPERATOR  */
    SUB_ASSIGN_OPERATOR = 280,     /* SUB_ASSIGN_OPERATOR  */
    MUL_ASSIGN_OPERATOR = 281,     /* MUL_ASSIGN_OPERATOR  */
    DIV_ASSIGN_OPERATOR = 282,     /* DIV_ASSIGN_OPERATOR  */
    MOD_ASSIGN_OPERATOR = 283,     /* MOD_ASSIGN_OPERATOR  */
    LE_OPERATOR = 284,             /* LE_OPERATOR  */
    GE_OPERATOR = 285,             /* GE_OPERATOR  */
    DEQ_OPERATOR = 286,            /* DEQ_OPERATOR  */
    NE_OPERATOR = 287,             /* NE_OPERATOR  */
    PERCENTAGE = 288,              /* PERCENTAGE  */
    INTEGER = 289,                 /* INTEGER  */
    IDENTIFIER = 290,              /* IDENTIFIER  */
    SEMICOLON = 291,               /* SEMICOLON  */
    AND_OPERATOR = 292,            /* AND_OPERATOR  */
    OR_OPERATOR = 293,             /* OR_OPERATOR  */
    NOT_OPERATOR = 294,            /* NOT_OPERATOR  */
    INC_OPERATOR = 295,            /* INC_OPERATOR  */
    DEC_OPERATOR = 296,            /* DEC_OPERATOR  */
    RIGHTSHIFT_OPERATOR = 297,     /* RIGHTSHIFT_OPERATOR  */
    LEFTSHIFT_OPERATOR = 298,      /* LEFTSHIFT_OPERATOR  */
    ELLIPSIS = 299,                /* ELLIPSIS  */
    EXPONENTIAL = 300,             /* EXPONENTIAL  */
    DUST = 301,                    /* DUST  */
    CSVFILE = 302,                 /* CSVFILE  */
    FUNCTIONCALL = 303,            /* FUNCTIONCALL  */
    PRINT = 304,                   /* PRINT  */
    CONSTANT = 305,                /* CONSTANT  */
    READCSVFUNC = 306,             /* READCSVFUNC  */
    HEADFUNC = 307,                /* HEADFUNC  */
    TAILFUNC = 308,                /* TAILFUNC  */
    RESETINDEXFUNC = 309,          /* RESETINDEXFUNC  */
    TOCSVFUNC = 310,               /* TOCSVFUNC  */
    DESCRIBEFUNC = 311,            /* DESCRIBEFUNC  */
    MEANFUNC = 312,                /* MEANFUNC  */
    MODEFUNC = 313,                /* MODEFUNC  */
    MEDIANFUNC = 314,              /* MEDIANFUNC  */
    SUMFUNC = 315,                 /* SUMFUNC  */
    MINFUNC = 316,                 /* MINFUNC  */
    MAXFUNC = 317,                 /* MAXFUNC  */
    MISSVALUEFUNC = 318,           /* MISSVALUEFUNC  */
    EXCHANGEFUNC = 319,            /* EXCHANGEFUNC  */
    GROUPBYFUNC = 320,             /* GROUPBYFUNC  */
    CONCATFUNC = 321,              /* CONCATFUNC  */
    MERGEFUNC = 322,               /* MERGEFUNC  */
    JOINFUNC = 323,                /* JOINFUNC  */
    AXIS_TOKEN = 324,              /* AXIS_TOKEN  */
    DROP_TOKEN = 325,              /* DROP_TOKEN  */
    INPLACE_TOKEN = 326,           /* INPLACE_TOKEN  */
    METHOD_TOKEN = 327,            /* METHOD_TOKEN  */
    HOW_TOKEN = 328,               /* HOW_TOKEN  */
    ON_TOKEN = 329,                /* ON_TOKEN  */
    SUFFIXES_TOKEN = 330,          /* SUFFIXES_TOKEN  */
    FILL_TOKEN = 331               /* FILL_TOKEN  */
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
#define DATAFRAME 262
#define LOOP 263
#define IF 264
#define ELSE 265
#define BREAK 266
#define CONTINUE 267
#define RTRN 268
#define FUNC 269
#define INTNUM 270
#define FLOATNUM 271
#define STRING 272
#define BOOL 273
#define TRUE 274
#define FALSE 275
#define SINGLE_QUOTED_STRING 276
#define INPUT 277
#define OUTPUT 278
#define ADD_ASSIGN_OPERATOR 279
#define SUB_ASSIGN_OPERATOR 280
#define MUL_ASSIGN_OPERATOR 281
#define DIV_ASSIGN_OPERATOR 282
#define MOD_ASSIGN_OPERATOR 283
#define LE_OPERATOR 284
#define GE_OPERATOR 285
#define DEQ_OPERATOR 286
#define NE_OPERATOR 287
#define PERCENTAGE 288
#define INTEGER 289
#define IDENTIFIER 290
#define SEMICOLON 291
#define AND_OPERATOR 292
#define OR_OPERATOR 293
#define NOT_OPERATOR 294
#define INC_OPERATOR 295
#define DEC_OPERATOR 296
#define RIGHTSHIFT_OPERATOR 297
#define LEFTSHIFT_OPERATOR 298
#define ELLIPSIS 299
#define EXPONENTIAL 300
#define DUST 301
#define CSVFILE 302
#define FUNCTIONCALL 303
#define PRINT 304
#define CONSTANT 305
#define READCSVFUNC 306
#define HEADFUNC 307
#define TAILFUNC 308
#define RESETINDEXFUNC 309
#define TOCSVFUNC 310
#define DESCRIBEFUNC 311
#define MEANFUNC 312
#define MODEFUNC 313
#define MEDIANFUNC 314
#define SUMFUNC 315
#define MINFUNC 316
#define MAXFUNC 317
#define MISSVALUEFUNC 318
#define EXCHANGEFUNC 319
#define GROUPBYFUNC 320
#define CONCATFUNC 321
#define MERGEFUNC 322
#define JOINFUNC 323
#define AXIS_TOKEN 324
#define DROP_TOKEN 325
#define INPLACE_TOKEN 326
#define METHOD_TOKEN 327
#define HOW_TOKEN 328
#define ON_TOKEN 329
#define SUFFIXES_TOKEN 330
#define FILL_TOKEN 331

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
