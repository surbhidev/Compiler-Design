/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "../src/rc_parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "typechecker.h"
#include <stdbool.h>

void yyerror(const char *s);

#ifdef __cplusplus
extern "C" {
#endif

int yylex();
int yyparse();
int yywrap();

// Global var for indentation of loop body
int indent = 0;

#ifdef __cplusplus
}
#endif

extern int yylineno;
extern FILE *yyin;
extern FILE *yyout;

FILE* yacc_output;
extern FILE* lex_output;

#line 103 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 355 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_3_ = 3,                         /* '+'  */
  YYSYMBOL_4_ = 4,                         /* '-'  */
  YYSYMBOL_5_ = 5,                         /* '\\'  */
  YYSYMBOL_6_ = 6,                         /* '.'  */
  YYSYMBOL_7_ = 7,                         /* '*'  */
  YYSYMBOL_8_ = 8,                         /* '/'  */
  YYSYMBOL_9_ = 9,                         /* '%'  */
  YYSYMBOL_10_ = 10,                       /* '='  */
  YYSYMBOL_11_ = 11,                       /* '<'  */
  YYSYMBOL_12_ = 12,                       /* '>'  */
  YYSYMBOL_LOWER_THAN_ELSE = 13,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_INTNUM = 14,                    /* INTNUM  */
  YYSYMBOL_IDENTIFIER = 15,                /* IDENTIFIER  */
  YYSYMBOL_DATAFRAME = 16,                 /* DATAFRAME  */
  YYSYMBOL_CSVFILE = 17,                   /* CSVFILE  */
  YYSYMBOL_EXPONENTIAL = 18,               /* EXPONENTIAL  */
  YYSYMBOL_PERCENTAGE = 19,                /* PERCENTAGE  */
  YYSYMBOL_INNER = 20,                     /* INNER  */
  YYSYMBOL_LEFT = 21,                      /* LEFT  */
  YYSYMBOL_RIGHT = 22,                     /* RIGHT  */
  YYSYMBOL_OUTER = 23,                     /* OUTER  */
  YYSYMBOL_INT_TYPE = 24,                  /* INT_TYPE  */
  YYSYMBOL_FLOAT_TYPE = 25,                /* FLOAT_TYPE  */
  YYSYMBOL_STRING_TYPE = 26,               /* STRING_TYPE  */
  YYSYMBOL_SKIPNA = 27,                    /* SKIPNA  */
  YYSYMBOL_FILL = 28,                      /* FILL  */
  YYSYMBOL_FFILL = 29,                     /* FFILL  */
  YYSYMBOL_BFILL = 30,                     /* BFILL  */
  YYSYMBOL_INTERPOLATE = 31,               /* INTERPOLATE  */
  YYSYMBOL_METHOD = 32,                    /* METHOD  */
  YYSYMBOL_REGX = 33,                      /* REGX  */
  YYSYMBOL_SEP = 34,                       /* SEP  */
  YYSYMBOL_HEADER = 35,                    /* HEADER  */
  YYSYMBOL_INDEX_COL = 36,                 /* INDEX_COL  */
  YYSYMBOL_USECOLS = 37,                   /* USECOLS  */
  YYSYMBOL_INDEX = 38,                     /* INDEX  */
  YYSYMBOL_DROP = 39,                      /* DROP  */
  YYSYMBOL_INPLACE = 40,                   /* INPLACE  */
  YYSYMBOL_AXIS = 41,                      /* AXIS  */
  YYSYMBOL_NUMERIC = 42,                   /* NUMERIC  */
  YYSYMBOL_LOOP = 43,                      /* LOOP  */
  YYSYMBOL_IF = 44,                        /* IF  */
  YYSYMBOL_ELSE = 45,                      /* ELSE  */
  YYSYMBOL_ELSEIF = 46,                    /* ELSEIF  */
  YYSYMBOL_BREAK = 47,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 48,                  /* CONTINUE  */
  YYSYMBOL_RTRN = 49,                      /* RTRN  */
  YYSYMBOL_FUNC = 50,                      /* FUNC  */
  YYSYMBOL_FLOATNUM = 51,                  /* FLOATNUM  */
  YYSYMBOL_STRING = 52,                    /* STRING  */
  YYSYMBOL_SINGLE_QUOTED_STRING = 53,      /* SINGLE_QUOTED_STRING  */
  YYSYMBOL_TRUE = 54,                      /* TRUE  */
  YYSYMBOL_FALSE = 55,                     /* FALSE  */
  YYSYMBOL_NOT_OPERATOR = 56,              /* NOT_OPERATOR  */
  YYSYMBOL_INPUT = 57,                     /* INPUT  */
  YYSYMBOL_OUTPUT = 58,                    /* OUTPUT  */
  YYSYMBOL_ADD_ASSIGN_OPERATOR = 59,       /* ADD_ASSIGN_OPERATOR  */
  YYSYMBOL_SUB_ASSIGN_OPERATOR = 60,       /* SUB_ASSIGN_OPERATOR  */
  YYSYMBOL_MUL_ASSIGN_OPERATOR = 61,       /* MUL_ASSIGN_OPERATOR  */
  YYSYMBOL_DIV_ASSIGN_OPERATOR = 62,       /* DIV_ASSIGN_OPERATOR  */
  YYSYMBOL_MOD_ASSIGN_OPERATOR = 63,       /* MOD_ASSIGN_OPERATOR  */
  YYSYMBOL_LE_OPERATOR = 64,               /* LE_OPERATOR  */
  YYSYMBOL_GE_OPERATOR = 65,               /* GE_OPERATOR  */
  YYSYMBOL_DEQ_OPERATOR = 66,              /* DEQ_OPERATOR  */
  YYSYMBOL_NE_OPERATOR = 67,               /* NE_OPERATOR  */
  YYSYMBOL_INTEGER = 68,                   /* INTEGER  */
  YYSYMBOL_SEMICOLON = 69,                 /* SEMICOLON  */
  YYSYMBOL_AND_OPERATOR = 70,              /* AND_OPERATOR  */
  YYSYMBOL_OR_OPERATOR = 71,               /* OR_OPERATOR  */
  YYSYMBOL_INC_OPERATOR = 72,              /* INC_OPERATOR  */
  YYSYMBOL_DEC_OPERATOR = 73,              /* DEC_OPERATOR  */
  YYSYMBOL_RIGHTSHIFT_OPERATOR = 74,       /* RIGHTSHIFT_OPERATOR  */
  YYSYMBOL_LEFTSHIFT_OPERATOR = 75,        /* LEFTSHIFT_OPERATOR  */
  YYSYMBOL_ELLIPSIS = 76,                  /* ELLIPSIS  */
  YYSYMBOL_DUST = 77,                      /* DUST  */
  YYSYMBOL_FUNCTIONCALL = 78,              /* FUNCTIONCALL  */
  YYSYMBOL_PRINT = 79,                     /* PRINT  */
  YYSYMBOL_CONSTANT = 80,                  /* CONSTANT  */
  YYSYMBOL_READCSVFUNC = 81,               /* READCSVFUNC  */
  YYSYMBOL_HEADFUNC = 82,                  /* HEADFUNC  */
  YYSYMBOL_TAILFUNC = 83,                  /* TAILFUNC  */
  YYSYMBOL_RESETINDEXFUNC = 84,            /* RESETINDEXFUNC  */
  YYSYMBOL_TOCSVFUNC = 85,                 /* TOCSVFUNC  */
  YYSYMBOL_DESCRIBEFUNC = 86,              /* DESCRIBEFUNC  */
  YYSYMBOL_MEANFUNC = 87,                  /* MEANFUNC  */
  YYSYMBOL_MODEFUNC = 88,                  /* MODEFUNC  */
  YYSYMBOL_MEDIANFUNC = 89,                /* MEDIANFUNC  */
  YYSYMBOL_SUMFUNC = 90,                   /* SUMFUNC  */
  YYSYMBOL_MINFUNC = 91,                   /* MINFUNC  */
  YYSYMBOL_MAXFUNC = 92,                   /* MAXFUNC  */
  YYSYMBOL_MISSVALUEFUNC = 93,             /* MISSVALUEFUNC  */
  YYSYMBOL_EXCHANGEVALUEFUNC = 94,         /* EXCHANGEVALUEFUNC  */
  YYSYMBOL_GROUPBYFUNC = 95,               /* GROUPBYFUNC  */
  YYSYMBOL_CONCATFUNC = 96,                /* CONCATFUNC  */
  YYSYMBOL_MERGEFUNC = 97,                 /* MERGEFUNC  */
  YYSYMBOL_JOINFUNC = 98,                  /* JOINFUNC  */
  YYSYMBOL_AXIS_TOKEN = 99,                /* AXIS_TOKEN  */
  YYSYMBOL_DROP_TOKEN = 100,               /* DROP_TOKEN  */
  YYSYMBOL_INPLACE_TOKEN = 101,            /* INPLACE_TOKEN  */
  YYSYMBOL_METHOD_TOKEN = 102,             /* METHOD_TOKEN  */
  YYSYMBOL_HOW_TOKEN = 103,                /* HOW_TOKEN  */
  YYSYMBOL_ON_TOKEN = 104,                 /* ON_TOKEN  */
  YYSYMBOL_SUFFIXES_TOKEN = 105,           /* SUFFIXES_TOKEN  */
  YYSYMBOL_FILL_TOKEN = 106,               /* FILL_TOKEN  */
  YYSYMBOL_107_ = 107,                     /* '('  */
  YYSYMBOL_108_ = 108,                     /* ')'  */
  YYSYMBOL_109_ = 109,                     /* '{'  */
  YYSYMBOL_110_ = 110,                     /* '}'  */
  YYSYMBOL_111_ = 111,                     /* ','  */
  YYSYMBOL_112_ = 112,                     /* '['  */
  YYSYMBOL_113_ = 113,                     /* ']'  */
  YYSYMBOL_114_ = 114,                     /* '&'  */
  YYSYMBOL_115_ = 115,                     /* '|'  */
  YYSYMBOL_116_ = 116,                     /* '^'  */
  YYSYMBOL_117_ = 117,                     /* '~'  */
  YYSYMBOL_YYACCEPT = 118,                 /* $accept  */
  YYSYMBOL_translation_unit = 119,         /* translation_unit  */
  YYSYMBOL_declaration_statement = 120,    /* declaration_statement  */
  YYSYMBOL_input_statement = 121,          /* input_statement  */
  YYSYMBOL_assignment_statement = 122,     /* assignment_statement  */
  YYSYMBOL_123_1 = 123,                    /* $@1  */
  YYSYMBOL_dataframe = 124,                /* dataframe  */
  YYSYMBOL_expressions = 125,              /* expressions  */
  YYSYMBOL_Function_Declaration = 126,     /* Function_Declaration  */
  YYSYMBOL_argument_list = 127,            /* argument_list  */
  YYSYMBOL_function_body = 128,            /* function_body  */
  YYSYMBOL_return_statement = 129,         /* return_statement  */
  YYSYMBOL_Function_Print_Statement = 130, /* Function_Print_Statement  */
  YYSYMBOL_print_expressions = 131,        /* print_expressions  */
  YYSYMBOL_strings_list = 132,             /* strings_list  */
  YYSYMBOL_Function_Loop_Statement = 133,  /* Function_Loop_Statement  */
  YYSYMBOL_Print_Statement = 134,          /* Print_Statement  */
  YYSYMBOL_aggregate_function_calls = 135, /* aggregate_function_calls  */
  YYSYMBOL_function_call_statement = 136,  /* function_call_statement  */
  YYSYMBOL_concat_body = 137,              /* concat_body  */
  YYSYMBOL_dataframe_list = 138,           /* dataframe_list  */
  YYSYMBOL_to_exchange = 139,              /* to_exchange  */
  YYSYMBOL_exchange_value = 140,           /* exchange_value  */
  YYSYMBOL_exchange_body_optional = 141,   /* exchange_body_optional  */
  YYSYMBOL_missing_value_body_confirm = 142, /* missing_value_body_confirm  */
  YYSYMBOL_missing_value_body = 143,       /* missing_value_body  */
  YYSYMBOL_mean_body = 144,                /* mean_body  */
  YYSYMBOL_axis_bit = 145,                 /* axis_bit  */
  YYSYMBOL_mean_numerical = 146,           /* mean_numerical  */
  YYSYMBOL_reset_index_body_drop = 147,    /* reset_index_body_drop  */
  YYSYMBOL_BOOL = 148,                     /* BOOL  */
  YYSYMBOL_reset_index_body_implace = 149, /* reset_index_body_implace  */
  YYSYMBOL_head_tail_body = 150,           /* head_tail_body  */
  YYSYMBOL_readcsv_body = 151,             /* readcsv_body  */
  YYSYMBOL_single_quoted_string_list = 152, /* single_quoted_string_list  */
  YYSYMBOL_actual_parameters = 153,        /* actual_parameters  */
  YYSYMBOL_grouping = 154,                 /* grouping  */
  YYSYMBOL_operators = 155,                /* operators  */
  YYSYMBOL_Loop_Statement = 156,           /* Loop_Statement  */
  YYSYMBOL_Sub_Loop_Statement = 157,       /* Sub_Loop_Statement  */
  YYSYMBOL_initializtion = 158,            /* initializtion  */
  YYSYMBOL_Identifier_List = 159,          /* Identifier_List  */
  YYSYMBOL_update = 160,                   /* update  */
  YYSYMBOL_loop_body = 161,                /* loop_body  */
  YYSYMBOL_statment_list = 162,            /* statment_list  */
  YYSYMBOL_statement = 163,                /* statement  */
  YYSYMBOL_Function_Assignment_Statement = 164, /* Function_Assignment_Statement  */
  YYSYMBOL_predicate_list = 165,           /* predicate_list  */
  YYSYMBOL_predicate = 166,                /* predicate  */
  YYSYMBOL_logical_operators = 167,        /* logical_operators  */
  YYSYMBOL_comparison_operators = 168,     /* comparison_operators  */
  YYSYMBOL_how_clause = 169,               /* how_clause  */
  YYSYMBOL_how_list = 170,                 /* how_list  */
  YYSYMBOL_on_clause = 171,                /* on_clause  */
  YYSYMBOL_suffixes_clause = 172,          /* suffixes_clause  */
  YYSYMBOL_Conditional_Statements = 173,   /* Conditional_Statements  */
  YYSYMBOL_Conditional_Statements_1 = 174, /* Conditional_Statements_1  */
  YYSYMBOL_Conditional_Statements_2 = 175, /* Conditional_Statements_2  */
  YYSYMBOL_Conditional_Statements_3 = 176, /* Conditional_Statements_3  */
  YYSYMBOL_Conditional_Statements_4 = 177, /* Conditional_Statements_4  */
  YYSYMBOL_else_if_loop = 178,             /* else_if_loop  */
  YYSYMBOL_conditional_body = 179          /* conditional_body  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  38
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   546

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  118
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  174
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  426

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   351


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     9,   114,     2,
     107,   108,     7,     3,   111,     4,     6,     8,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      11,    10,    12,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   112,     5,   113,   116,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   109,   115,   110,   117,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    81,    81,    82,    86,    87,    88,    89,    90,    91,
      92,    96,   115,   117,   116,   136,   144,   149,   155,   161,
     166,   172,   178,   179,   185,   191,   197,   203,   212,   220,
     223,   229,   233,   237,   240,   244,   247,   253,   257,   263,
     264,   265,   268,   274,   278,   282,   290,   323,   357,   391,
     425,   459,   493,   527,   561,   595,   629,   663,   700,   705,
     737,   768,   824,   855,   885,   918,   949,   953,  1011,  1018,
    1027,  1057,  1091,  1100,  1106,  1112,  1117,  1122,  1130,  1136,
    1142,  1150,  1156,  1162,  1168,  1174,  1180,  1189,  1195,  1202,
    1210,  1217,  1225,  1239,  1245,  1250,  1257,  1265,  1271,  1280,
    1281,  1285,  1291,  1299,  1305,  1313,  1319,  1325,  1331,  1337,
    1344,  1352,  1353,  1363,  1369,  1378,  1387,  1388,  1389,  1390,
    1391,  1392,  1393,  1394,  1395,  1399,  1409,  1419,  1423,  1428,
    1436,  1440,  1444,  1449,  1457,  1462,  1467,  1468,  1469,  1474,
    1479,  1480,  1485,  1490,  1498,  1499,  1504,  1512,  1517,  1522,
    1530,  1531,  1535,  1536,  1537,  1538,  1539,  1540,  1544,  1553,
    1558,  1563,  1571,  1579,  1587,  1588,  1589,  1590,  1594,  1605,
    1615,  1625,  1634,  1641,  1650
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "'+'", "'-'", "'\\\\'",
  "'.'", "'*'", "'/'", "'%'", "'='", "'<'", "'>'", "LOWER_THAN_ELSE",
  "INTNUM", "IDENTIFIER", "DATAFRAME", "CSVFILE", "EXPONENTIAL",
  "PERCENTAGE", "INNER", "LEFT", "RIGHT", "OUTER", "INT_TYPE",
  "FLOAT_TYPE", "STRING_TYPE", "SKIPNA", "FILL", "FFILL", "BFILL",
  "INTERPOLATE", "METHOD", "REGX", "SEP", "HEADER", "INDEX_COL", "USECOLS",
  "INDEX", "DROP", "INPLACE", "AXIS", "NUMERIC", "LOOP", "IF", "ELSE",
  "ELSEIF", "BREAK", "CONTINUE", "RTRN", "FUNC", "FLOATNUM", "STRING",
  "SINGLE_QUOTED_STRING", "TRUE", "FALSE", "NOT_OPERATOR", "INPUT",
  "OUTPUT", "ADD_ASSIGN_OPERATOR", "SUB_ASSIGN_OPERATOR",
  "MUL_ASSIGN_OPERATOR", "DIV_ASSIGN_OPERATOR", "MOD_ASSIGN_OPERATOR",
  "LE_OPERATOR", "GE_OPERATOR", "DEQ_OPERATOR", "NE_OPERATOR", "INTEGER",
  "SEMICOLON", "AND_OPERATOR", "OR_OPERATOR", "INC_OPERATOR",
  "DEC_OPERATOR", "RIGHTSHIFT_OPERATOR", "LEFTSHIFT_OPERATOR", "ELLIPSIS",
  "DUST", "FUNCTIONCALL", "PRINT", "CONSTANT", "READCSVFUNC", "HEADFUNC",
  "TAILFUNC", "RESETINDEXFUNC", "TOCSVFUNC", "DESCRIBEFUNC", "MEANFUNC",
  "MODEFUNC", "MEDIANFUNC", "SUMFUNC", "MINFUNC", "MAXFUNC",
  "MISSVALUEFUNC", "EXCHANGEVALUEFUNC", "GROUPBYFUNC", "CONCATFUNC",
  "MERGEFUNC", "JOINFUNC", "AXIS_TOKEN", "DROP_TOKEN", "INPLACE_TOKEN",
  "METHOD_TOKEN", "HOW_TOKEN", "ON_TOKEN", "SUFFIXES_TOKEN", "FILL_TOKEN",
  "'('", "')'", "'{'", "'}'", "','", "'['", "']'", "'&'", "'|'", "'^'",
  "'~'", "$accept", "translation_unit", "declaration_statement",
  "input_statement", "assignment_statement", "$@1", "dataframe",
  "expressions", "Function_Declaration", "argument_list", "function_body",
  "return_statement", "Function_Print_Statement", "print_expressions",
  "strings_list", "Function_Loop_Statement", "Print_Statement",
  "aggregate_function_calls", "function_call_statement", "concat_body",
  "dataframe_list", "to_exchange", "exchange_value",
  "exchange_body_optional", "missing_value_body_confirm",
  "missing_value_body", "mean_body", "axis_bit", "mean_numerical",
  "reset_index_body_drop", "BOOL", "reset_index_body_implace",
  "head_tail_body", "readcsv_body", "single_quoted_string_list",
  "actual_parameters", "grouping", "operators", "Loop_Statement",
  "Sub_Loop_Statement", "initializtion", "Identifier_List", "update",
  "loop_body", "statment_list", "statement",
  "Function_Assignment_Statement", "predicate_list", "predicate",
  "logical_operators", "comparison_operators", "how_clause", "how_list",
  "on_clause", "suffixes_clause", "Conditional_Statements",
  "Conditional_Statements_1", "Conditional_Statements_2",
  "Conditional_Statements_3", "Conditional_Statements_4", "else_if_loop",
  "conditional_body", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-300)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     280,    -1,   -90,   -56,   -35,    88,    43,    36,    56,    77,
      85,   129,  -300,  -300,    68,   107,  -300,  -300,    83,     6,
    -300,  -300,  -300,  -300,  -300,  -300,  -300,   224,   224,   142,
     174,   207,    96,   140,   221,   232,   147,   246,  -300,  -300,
    -300,   269,  -300,   117,   246,  -300,   167,  -300,   224,     7,
      32,  -300,  -300,  -300,    32,   -17,   185,   272,   217,  -300,
     224,    45,   111,  -300,   282,  -300,  -300,    32,    31,  -300,
     195,   246,   202,   194,   215,   222,   236,   238,   249,   251,
     167,   107,  -300,  -300,    79,   340,   266,  -300,  -300,  -300,
    -300,  -300,  -300,  -300,  -300,  -300,   229,  -300,   224,  -300,
      41,   207,    32,  -300,  -300,  -300,  -300,  -300,  -300,  -300,
    -300,   224,   224,   218,   207,   207,  -300,    63,   270,   221,
     193,   252,  -300,   -47,   246,   358,   358,   334,   357,   267,
      39,   345,  -300,  -300,   273,   274,   275,   277,   278,   291,
    -300,    42,  -300,   167,  -300,  -300,  -300,  -300,    32,  -300,
    -300,   330,    32,    32,   268,  -300,  -300,   293,   364,  -300,
      32,  -300,   376,   393,   394,   395,   396,  -300,   296,   298,
    -300,   302,   303,   403,   304,   195,  -300,   305,  -300,   307,
     361,   308,   379,   379,   379,   379,   379,   379,   382,   430,
      30,    23,   368,   369,   332,   371,  -300,    24,  -300,  -300,
     268,  -300,   372,  -300,   333,    59,  -300,   389,   431,   432,
     335,   162,   407,   341,  -300,  -300,   179,   409,   342,   343,
      82,   212,   344,  -300,    44,   443,   346,   346,   346,   346,
     346,   346,  -300,   279,   444,   347,  -300,   224,  -300,  -300,
     221,  -300,   117,  -300,  -300,   223,   224,   268,   348,   387,
      59,  -300,   390,   195,   195,   195,   266,  -300,  -300,   195,
     450,   353,   452,   352,  -300,   354,   454,  -300,  -300,  -300,
     456,     8,  -300,   457,   307,  -300,  -300,  -300,  -300,  -300,
    -300,   359,   455,   114,   360,   363,   365,   366,   367,   370,
     373,   374,   375,   377,   378,   380,   381,    32,    80,  -300,
     383,   384,   254,    32,   408,   362,  -300,    59,  -300,    59,
    -300,  -300,  -300,    86,  -300,   455,  -300,   144,   385,   439,
     162,   247,   301,   162,  -300,   292,   386,  -300,  -300,   469,
     473,   476,  -300,  -300,  -300,  -300,  -300,  -300,   388,   391,
     392,   397,   398,   399,   268,  -300,   268,   207,   400,   401,
    -300,  -300,  -300,  -300,   195,  -300,  -300,  -300,  -300,  -300,
     478,   402,   483,  -300,  -300,  -300,  -300,   307,   485,   359,
    -300,   162,   404,   162,  -300,  -300,  -300,  -300,  -300,  -300,
     405,   410,   190,   268,   207,  -300,   445,   406,   411,  -300,
     162,  -300,   346,   266,   346,  -300,  -300,   412,   414,   200,
    -300,   487,   417,   266,   359,  -300,   168,  -300,   268,  -300,
     413,   415,  -300,   178,  -300,   346,   416,   268,   266,  -300,
    -300,  -300,   418,   181,  -300,  -300
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     6,     0,    70,     5,     7,     0,     0,
       8,   125,    10,   164,   165,   166,   167,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     3,
       4,     0,     9,     0,     0,    23,    22,    24,     0,     0,
      12,    27,    26,    25,   113,     0,     0,     0,     0,   127,
       0,     0,     0,   144,    31,    11,    43,    39,     0,    40,
     110,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    13,    71,     0,     0,     0,   116,   117,   118,
     119,   120,   121,   122,   123,   124,     0,    68,     0,    15,
       0,     0,   149,   152,   153,   154,   155,   157,   156,   150,
     151,     0,     0,     0,     0,     0,    29,     0,     0,     0,
       0,     0,    70,     0,     0,   104,   104,     0,     0,     0,
       0,     0,    14,   115,     0,     0,     0,     0,     0,     0,
     111,     0,    17,    16,    18,    21,    20,    19,   114,   128,
     129,     0,   148,   147,     0,   145,   146,     0,     0,    45,
      42,    41,     0,     0,     0,     0,     0,    58,     0,     0,
     103,     0,     0,     0,   102,   110,    63,     0,    86,    89,
       0,     0,    91,    91,    91,    91,    91,    91,     0,     0,
       0,     0,     0,     0,     0,     0,   140,     0,   137,   174,
     131,   132,   141,   136,     0,     0,    30,     0,     0,     0,
       0,     0,     0,     0,    59,    60,     0,     0,     0,     0,
       0,    91,     0,    72,     0,     0,    96,    96,    96,    96,
      96,    96,   112,     0,     0,     0,   130,     0,   138,   139,
       0,   135,     0,   133,   134,   171,     0,     0,     0,     0,
       0,    44,     0,   110,   110,   110,     0,    99,   100,   110,
       0,     0,     0,     0,    97,     0,     0,    61,    62,    81,
       0,     0,    82,     0,    89,    64,    73,    77,    75,    76,
      74,    80,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   142,     0,   143,
       0,     0,   169,    37,     0,     0,    28,     0,    34,     0,
     105,   106,   107,     0,   108,     0,    66,     0,     0,     0,
       0,     0,     0,     0,    88,    91,     0,    92,    90,     0,
       0,     0,    52,    53,    54,    55,    56,    57,     0,     0,
       0,     0,     0,     0,     0,    38,     0,     0,     0,     0,
      36,    32,    35,    33,   110,    69,   159,   160,   161,   158,
       0,     0,     0,   101,    83,    84,    85,    89,     0,    80,
      65,     0,     0,     0,    46,    47,    48,    49,    50,    51,
       0,     0,     0,     0,     0,   109,     0,     0,     0,    87,
       0,    79,    96,     0,    96,   126,   170,     0,     0,     0,
     162,     0,     0,     0,    80,    94,     0,    93,     0,   168,
       0,     0,    67,     0,    78,    96,     0,     0,     0,    98,
      95,   172,     0,     0,   173,   163
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -300,  -300,   490,  -300,  -300,  -300,     0,   -22,  -300,  -300,
    -208,  -300,  -181,   262,   419,  -300,  -300,   -89,     4,  -300,
      50,  -300,  -300,  -299,  -300,  -249,  -156,   188,  -209,  -300,
     -33,  -300,   420,  -174,  -253,  -300,   421,  -300,    73,  -173,
    -300,  -300,  -300,  -237,  -300,   310,  -182,   -99,   220,   451,
     453,  -300,  -300,  -300,  -300,    93,  -300,  -300,  -300,  -300,
    -300,  -176
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    11,    12,    13,    14,   132,    49,    61,    16,   117,
     248,   304,   195,    68,    69,   250,    17,    51,    52,   261,
     197,   181,   281,   326,   179,   222,   226,   328,   284,   174,
     259,   218,   171,   121,   141,    55,    53,    96,   198,    21,
      58,    59,   235,   199,   200,   201,   202,    62,    63,   114,
     115,   263,   359,   361,   402,   203,    23,    24,    25,    26,
     302,   204
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      15,   219,   151,   313,    18,    50,    54,   145,   236,    27,
     305,    15,    67,    85,   322,    18,    43,    29,   285,   286,
     287,   288,   289,   252,   249,   324,    84,   227,   228,   229,
     230,   231,   251,   237,   242,    87,    88,    72,   102,    89,
      90,    91,   308,    81,    83,   234,     2,    82,    87,    88,
      19,    30,    89,    90,    91,   149,   103,   104,   276,   277,
      33,    19,   278,   279,    44,   274,   168,   177,   252,   249,
     391,   122,    31,    20,   234,     2,   148,   251,   178,   310,
     311,   312,    87,    88,    20,   314,    89,    90,    91,   152,
     153,    97,   150,    22,    98,   280,   269,   160,     2,   352,
     146,   353,     3,    32,    22,   414,    28,   380,   246,   105,
     106,   107,   108,    41,   270,   109,   110,    44,   389,    86,
      86,   123,   103,   104,   169,   252,   249,   252,   249,    38,
      28,   272,    80,     2,   251,    44,   251,    40,   194,   118,
     406,   329,   119,    34,     1,     2,    92,    93,    94,    95,
     413,   330,    42,   188,    15,   189,   331,    56,   196,    92,
      93,    94,    95,    35,   356,   423,   357,   358,   247,   369,
     381,   157,     3,     4,   158,   105,   106,   107,   108,     5,
     385,   109,   110,   405,    36,   407,     6,   133,   345,    57,
     122,   119,    37,    92,    93,    94,    95,   188,     8,   354,
      15,   103,   104,    64,   196,   122,   420,   398,     7,    65,
       8,   103,   104,     9,    10,   297,   257,   258,    67,   113,
     271,    45,    46,     2,   303,     9,    10,   162,   163,   164,
     165,   166,   416,   264,   265,    45,    46,     2,    45,    46,
       2,   422,    81,   142,   143,     2,   299,    15,   382,    70,
     122,   196,   273,   225,   105,   106,   107,   108,    47,    71,
     109,   110,     2,    60,   105,   106,   107,   108,   300,   301,
     109,   110,    47,    66,    28,    47,   364,   365,   366,   188,
     144,   415,   100,   191,     2,   399,   101,   363,     8,   188,
     367,   419,   188,    99,   425,     1,     2,   116,   397,   348,
     349,   125,     8,     9,    10,     8,   120,   122,   410,   122,
       8,     3,     4,   124,    48,   192,   193,     9,    10,   140,
       9,    10,   126,     3,     4,     9,    10,   154,    48,   127,
       5,    48,   368,   225,   155,   156,    48,     6,   392,   159,
     394,   103,   104,   128,    15,   129,    15,   194,   196,     8,
     196,    73,    74,    75,    76,    77,   130,   404,   131,     7,
     167,     8,    78,    79,     9,    10,   290,   291,   292,   293,
     294,   295,   170,   173,   175,   176,     9,    10,   180,   206,
     182,   183,   184,    15,   185,   186,   207,   196,   134,   135,
     136,   137,   138,   139,   105,   106,   107,   108,   187,   190,
     109,   110,   205,   208,   209,   210,   211,   212,    15,   213,
     214,   215,   196,   216,   223,   217,   220,    15,   221,   224,
     225,   196,    73,    74,    75,    76,    77,   134,   135,   136,
     137,   138,   139,    78,    79,   232,   233,   238,   239,   240,
     241,   244,   253,   245,   262,   254,   255,   256,   260,   266,
     267,   268,   275,   282,   237,   296,   307,   283,   306,   309,
     315,   316,   317,   318,   320,   319,   321,   323,   332,   327,
     325,   333,   351,   334,   335,   336,   362,   350,   337,   371,
     338,   339,   340,   372,   341,   342,   373,   343,   386,   360,
     344,   347,   346,   388,   370,   390,   374,   411,   400,   375,
     376,    39,   298,   355,     0,   377,   378,   379,   384,   383,
     243,   401,   111,   387,   112,   395,   393,   147,     0,     0,
     396,   408,   417,   403,   409,   412,   421,   418,   424,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   161,     0,
       0,     0,     0,     0,     0,     0,   172
};

static const yytype_int16 yycheck[] =
{
       0,   175,   101,   256,     0,    27,    28,    96,   190,    10,
     247,    11,    34,     6,     6,    11,    10,   107,   227,   228,
     229,   230,   231,   205,   205,   274,    48,   183,   184,   185,
     186,   187,   205,    10,    10,     3,     4,    37,    60,     7,
       8,     9,   250,    43,    44,    15,    16,    43,     3,     4,
       0,   107,     7,     8,     9,    14,    11,    12,    14,    15,
      17,    11,    18,    19,   111,   221,   113,    28,   250,   250,
     369,    71,   107,     0,    15,    16,    98,   250,    39,   253,
     254,   255,     3,     4,    11,   259,     7,     8,     9,   111,
     112,   108,    51,     0,   111,    51,    14,   119,    16,   307,
      96,   309,    43,    15,    11,   404,   107,   344,    49,    64,
      65,    66,    67,     6,    32,    70,    71,   111,   367,   112,
     112,    71,    11,    12,   124,   307,   307,   309,   309,     0,
     107,   220,    15,    16,   307,   111,   309,    69,    79,   108,
     393,    27,   111,   107,    15,    16,   114,   115,   116,   117,
     403,    37,    69,   111,   154,   113,    42,    15,   154,   114,
     115,   116,   117,   107,    20,   418,    22,    23,   109,   325,
     346,   108,    43,    44,   111,    64,    65,    66,    67,    50,
     354,    70,    71,   392,   107,   394,    57,   108,   108,    15,
     190,   111,   107,   114,   115,   116,   117,   111,    81,   113,
     200,    11,    12,   107,   200,   205,   415,   383,    79,    69,
      81,    11,    12,    96,    97,   237,    54,    55,   240,   108,
     220,    14,    15,    16,   246,    96,    97,    34,    35,    36,
      37,    38,   408,    54,    55,    14,    15,    16,    14,    15,
      16,   417,   242,    14,    15,    16,   242,   247,   347,    17,
     250,   247,    40,    41,    64,    65,    66,    67,    51,   112,
      70,    71,    16,    56,    64,    65,    66,    67,    45,    46,
      70,    71,    51,    52,   107,    51,    29,    30,    31,   111,
      51,   113,    10,    15,    16,   384,    69,   320,    81,   111,
     323,   113,   111,   108,   113,    15,    16,    15,   108,    45,
      46,   107,    81,    96,    97,    81,   111,   307,   108,   309,
      81,    43,    44,   111,   107,    47,    48,    96,    97,    53,
      96,    97,   107,    43,    44,    96,    97,   109,   107,   107,
      50,   107,    40,    41,   114,   115,   107,    57,   371,    69,
     373,    11,    12,   107,   344,   107,   346,    79,   344,    81,
     346,    82,    83,    84,    85,    86,   107,   390,   107,    79,
     108,    81,    93,    94,    96,    97,    87,    88,    89,    90,
      91,    92,    14,    39,    17,   108,    96,    97,    33,    15,
     107,   107,   107,   383,   107,   107,    10,   383,    87,    88,
      89,    90,    91,    92,    64,    65,    66,    67,   107,    69,
      70,    71,   109,    10,    10,    10,    10,   111,   408,   111,
     108,   108,   408,    10,    53,   111,   111,   417,   111,   111,
      41,   417,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    53,     6,    69,    69,   107,
      69,    69,    53,   110,   103,    14,    14,   112,    41,    40,
     108,   108,   108,    10,    10,   108,    69,   111,   110,    69,
      10,   108,    10,   111,    10,   111,    10,    10,   108,    14,
     111,   108,   110,   108,   108,   108,    37,    69,   108,    10,
     107,   107,   107,    10,   107,   107,    10,   107,    10,   104,
     109,   107,   109,    10,   108,    10,   108,    10,    53,   108,
     108,    11,   240,   315,    -1,   108,   108,   108,   107,   109,
     200,   105,    61,   111,    61,   110,   112,    96,    -1,    -1,
     110,   109,   109,   112,   110,   108,   110,   112,   110,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   126
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    16,    43,    44,    50,    57,    79,    81,    96,
      97,   119,   120,   121,   122,   124,   126,   134,   136,   138,
     156,   157,   173,   174,   175,   176,   177,    10,   107,   107,
     107,   107,    15,    17,   107,   107,   107,   107,     0,   120,
      69,     6,    69,    10,   111,    14,    15,    51,   107,   124,
     125,   135,   136,   154,   125,   153,    15,    15,   158,   159,
      56,   125,   165,   166,   107,    69,    52,   125,   131,   132,
      17,   112,   124,    82,    83,    84,    85,    86,    93,    94,
      15,   124,   136,   124,   125,     6,   112,     3,     4,     7,
       8,     9,   114,   115,   116,   117,   155,   108,   111,   108,
      10,    69,   125,    11,    12,    64,    65,    66,    67,    70,
      71,   167,   168,   108,   167,   168,    15,   127,   108,   111,
     111,   151,   124,   138,   111,   107,   107,   107,   107,   107,
     107,   107,   123,   108,    87,    88,    89,    90,    91,    92,
      53,   152,    14,    15,    51,   135,   136,   154,   125,    14,
      51,   165,   125,   125,   109,   166,   166,   108,   111,    69,
     125,   132,    34,    35,    36,    37,    38,   108,   113,   124,
      14,   150,   150,    39,   147,    17,   108,    28,    39,   142,
      33,   139,   107,   107,   107,   107,   107,   107,   111,   113,
      69,    15,    47,    48,    79,   130,   136,   138,   156,   161,
     162,   163,   164,   173,   179,   109,    15,    10,    10,    10,
      10,    10,   111,   111,   108,   108,    10,   111,   149,   151,
     111,   111,   143,    53,   111,    41,   144,   144,   144,   144,
     144,   144,    53,     6,    15,   160,   164,    10,    69,    69,
     107,    69,    10,   163,    69,   110,    49,   109,   128,   130,
     133,   157,   164,    53,    14,    14,   112,    54,    55,   148,
      41,   137,   103,   169,    54,    55,    40,   108,   108,    14,
      32,   124,   135,    40,   144,   108,    14,    15,    18,    19,
      51,   140,    10,   111,   146,   146,   146,   146,   146,   146,
      87,    88,    89,    90,    91,    92,   108,   125,   131,   136,
      45,    46,   178,   125,   129,   161,   110,    69,   128,    69,
     151,   151,   151,   152,   151,    10,   108,    10,   111,   111,
      10,    10,     6,    10,   143,   111,   141,    14,   145,    27,
      37,    42,   108,   108,   108,   108,   108,   108,   107,   107,
     107,   107,   107,   107,   109,   108,   109,   107,    45,    46,
      69,   110,   128,   128,   113,   145,    20,    22,    23,   170,
     104,   171,    37,   148,    29,    30,    31,   148,    40,   144,
     108,    10,    10,    10,   108,   108,   108,   108,   108,   108,
     161,   179,   165,   109,   107,   151,    10,   111,    10,   143,
      10,   141,   148,   112,   148,   110,   110,   108,   179,   165,
      53,   105,   172,   112,   148,   146,   152,   146,   109,   110,
     108,    10,   108,   152,   141,   113,   179,   109,   112,   113,
     146,   110,   179,   152,   110,   113
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   118,   119,   119,   120,   120,   120,   120,   120,   120,
     120,   121,   122,   123,   122,   124,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   126,   127,
     127,   127,   128,   128,   128,   128,   128,   129,   130,   131,
     131,   131,   131,   132,   133,   134,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   137,
     138,   138,   139,   140,   140,   140,   140,   140,   141,   141,
     141,   142,   142,   142,   142,   142,   142,   143,   143,   143,
     144,   144,   145,   146,   146,   146,   146,   147,   147,   148,
     148,   149,   149,   150,   150,   151,   151,   151,   151,   151,
     151,   152,   152,   153,   153,   154,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   156,   157,   158,   159,   159,
     160,   161,   162,   162,   163,   163,   163,   163,   163,   163,
     163,   163,   164,   164,   165,   165,   165,   166,   166,   166,
     167,   167,   168,   168,   168,   168,   168,   168,   169,   170,
     170,   170,   171,   172,   173,   173,   173,   173,   174,   175,
     176,   177,   178,   178,   179
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     1,     1,     1,     2,
       1,     3,     3,     0,     4,     4,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     8,     1,
       3,     0,     3,     3,     2,     3,     3,     1,     4,     1,
       1,     3,     3,     1,     1,     5,     8,     8,     8,     8,
       8,     8,     7,     7,     7,     7,     7,     7,     5,     6,
       6,     7,     7,     5,     7,     9,     8,    12,     4,     3,
       1,     3,     2,     1,     1,     1,     1,     1,     5,     3,
       0,     3,     3,     5,     5,     5,     1,     5,     3,     0,
       3,     0,     1,     5,     5,     7,     0,     3,     9,     1,
       1,     4,     0,     1,     0,     5,     5,     5,     5,     7,
       0,     1,     3,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,    11,     1,     3,     3,
       1,     1,     1,     2,     2,     2,     1,     1,     2,     2,
       1,     1,     3,     3,     1,     3,     3,     3,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     3,     5,     1,     1,     1,     1,    12,     8,
      11,     7,     7,     8,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 4: /* declaration_statement: assignment_statement SEMICOLON  */
#line 86 "../src/rc_parser.y"
                                   {fprintf(yacc_output,"\n");}
#line 1845 "y.tab.c"
    break;

  case 5: /* declaration_statement: Function_Declaration  */
#line 87 "../src/rc_parser.y"
                           {fprintf(yacc_output,"\n");}
#line 1851 "y.tab.c"
    break;

  case 6: /* declaration_statement: input_statement  */
#line 88 "../src/rc_parser.y"
                      {fprintf(yacc_output,"\n");}
#line 1857 "y.tab.c"
    break;

  case 7: /* declaration_statement: Print_Statement  */
#line 89 "../src/rc_parser.y"
                      {fprintf(yacc_output,"\n");}
#line 1863 "y.tab.c"
    break;

  case 8: /* declaration_statement: Loop_Statement  */
#line 90 "../src/rc_parser.y"
                     {fprintf(yacc_output,"%s\n", (yyvsp[0].str));}
#line 1869 "y.tab.c"
    break;

  case 9: /* declaration_statement: function_call_statement SEMICOLON  */
#line 91 "../src/rc_parser.y"
                                        {fprintf(yacc_output,"\n");}
#line 1875 "y.tab.c"
    break;

  case 10: /* declaration_statement: Conditional_Statements  */
#line 92 "../src/rc_parser.y"
                             {fprintf(yacc_output,"\n");}
#line 1881 "y.tab.c"
    break;

  case 11: /* input_statement: INPUT CSVFILE SEMICOLON  */
#line 97 "../src/rc_parser.y"
    {
        char *cleaned_filename = double_quote_remover((yyvsp[-1].str));  // remove quotes from filename
        FILE *file = fopen(cleaned_filename, "r");

        if (file == NULL)
        {
            fprintf(stderr, "Failed to open file: %s\n", cleaned_filename);
        }
        /* else
        {
            fclose(file);
        }

        free(cleaned_filename); */
    }
#line 1901 "y.tab.c"
    break;

  case 13: /* $@1: %empty  */
#line 117 "../src/rc_parser.y"
                                                            {
                                                                int count = 0;
                                                                for(int i = 0; i < strlen((yyvsp[-2].str)); i++){
                                                                    if((yyvsp[-2].str)[i] == ','){
                                                                        count ++;
                                                                    }
                                                                }
                                                                if(count != 0)
                                                                {
                                                                    perror("Syntax Error: Expected single dataframe");
                                                                    return 0;
                                                                }
                                                            }
#line 1919 "y.tab.c"
    break;

  case 14: /* assignment_statement: dataframe_list '=' function_call_statement $@1  */
#line 130 "../src/rc_parser.y"
                                                            {
                                                                fprintf(yacc_output, "%s = %s", (yyvsp[-3].str), (yyvsp[-1].str));
                                                            }
#line 1927 "y.tab.c"
    break;

  case 15: /* dataframe: DATAFRAME '(' IDENTIFIER ')'  */
#line 136 "../src/rc_parser.y"
                                                            {
                                                                char buffer[256];
                                                                snprintf(buffer, sizeof(buffer), "%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 1937 "y.tab.c"
    break;

  case 16: /* expressions: expressions operators IDENTIFIER  */
#line 144 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s%s%s", (yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 1947 "y.tab.c"
    break;

  case 17: /* expressions: expressions operators INTNUM  */
#line 150 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s%s%d", (yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].in));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 1957 "y.tab.c"
    break;

  case 18: /* expressions: expressions operators FLOATNUM  */
#line 156 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s%s%f", (yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].flt));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 1967 "y.tab.c"
    break;

  case 19: /* expressions: expressions operators grouping  */
#line 161 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s%s%s", (yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 1977 "y.tab.c"
    break;

  case 20: /* expressions: expressions operators function_call_statement  */
#line 167 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s%s%s", (yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 1987 "y.tab.c"
    break;

  case 21: /* expressions: expressions operators aggregate_function_calls  */
#line 173 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s%s%s", (yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 1997 "y.tab.c"
    break;

  case 22: /* expressions: IDENTIFIER  */
#line 178 "../src/rc_parser.y"
                                                                            {(yyval.str)=(yyvsp[0].str);}
#line 2003 "y.tab.c"
    break;

  case 23: /* expressions: INTNUM  */
#line 180 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%d",(yyvsp[0].in));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 2013 "y.tab.c"
    break;

  case 24: /* expressions: FLOATNUM  */
#line 186 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%f",(yyvsp[0].flt));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 2023 "y.tab.c"
    break;

  case 25: /* expressions: grouping  */
#line 192 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s",(yyvsp[0].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 2033 "y.tab.c"
    break;

  case 26: /* expressions: function_call_statement  */
#line 198 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s",(yyvsp[0].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 2043 "y.tab.c"
    break;

  case 27: /* expressions: aggregate_function_calls  */
#line 204 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s",(yyvsp[0].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 2053 "y.tab.c"
    break;

  case 28: /* Function_Declaration: FUNC IDENTIFIER '(' argument_list ')' '{' function_body '}'  */
#line 214 "../src/rc_parser.y"
    {
        fprintf(yacc_output,"def %s(%s):\n\t%s",(yyvsp[-6].str),(yyvsp[-4].str),(yyvsp[-1].str));
    }
#line 2061 "y.tab.c"
    break;

  case 29: /* argument_list: IDENTIFIER  */
#line 220 "../src/rc_parser.y"
                                                    {
                                                        (yyval.str) = (yyvsp[0].str);
                                                    }
#line 2069 "y.tab.c"
    break;

  case 30: /* argument_list: argument_list ',' IDENTIFIER  */
#line 224 "../src/rc_parser.y"
                                                    { 
                                                        char buffer[256]; 
                                                        snprintf(buffer, sizeof(buffer), "%s,%s",(yyvsp[-2].str),(yyvsp[0].str));
                                                        (yyval.str) = strdup(buffer);
                                                    }
#line 2079 "y.tab.c"
    break;

  case 31: /* argument_list: %empty  */
#line 229 "../src/rc_parser.y"
      {(yyval.str) = strdup("");}
#line 2085 "y.tab.c"
    break;

  case 32: /* function_body: '{' loop_body '}'  */
#line 234 "../src/rc_parser.y"
                                                    {
                                                        (yyval.str) = (yyvsp[-1].str);
                                                    }
#line 2093 "y.tab.c"
    break;

  case 33: /* function_body: Function_Assignment_Statement SEMICOLON function_body  */
#line 237 "../src/rc_parser.y"
                                                             {char buffer[256]; 
                                        snprintf(buffer, sizeof(buffer), "%s\n%s", (yyvsp[-2].str),(yyvsp[0].str));
                                        (yyval.str) = strdup(buffer);}
#line 2101 "y.tab.c"
    break;

  case 34: /* function_body: Function_Loop_Statement function_body  */
#line 240 "../src/rc_parser.y"
                                            {char buffer[256]; 
                                        snprintf(buffer, sizeof(buffer), "%s\n%s", (yyvsp[-1].str),(yyvsp[0].str));
                                        (yyval.str) = strdup(buffer);}
#line 2109 "y.tab.c"
    break;

  case 35: /* function_body: Function_Print_Statement SEMICOLON function_body  */
#line 244 "../src/rc_parser.y"
                                                        {char buffer[256]; 
                                        snprintf(buffer, sizeof(buffer), "%s\n%s", (yyvsp[-2].str),(yyvsp[0].str));
                                        (yyval.str) = strdup(buffer);}
#line 2117 "y.tab.c"
    break;

  case 36: /* function_body: RTRN return_statement SEMICOLON  */
#line 247 "../src/rc_parser.y"
                                       {char buffer[256]; 
                                        snprintf(buffer, sizeof(buffer), "return %s\n", (yyvsp[-1].str));
                                        (yyval.str) = strdup(buffer);}
#line 2125 "y.tab.c"
    break;

  case 37: /* return_statement: expressions  */
#line 253 "../src/rc_parser.y"
                {(yyval.str) = (yyvsp[0].str);}
#line 2131 "y.tab.c"
    break;

  case 38: /* Function_Print_Statement: PRINT '(' print_expressions ')'  */
#line 257 "../src/rc_parser.y"
                                    {char buffer[256]; 
                                        snprintf(buffer, sizeof(buffer), "print(%s)\n", (yyvsp[-1].str));
                                        (yyval.str) = strdup(buffer);}
#line 2139 "y.tab.c"
    break;

  case 39: /* print_expressions: expressions  */
#line 263 "../src/rc_parser.y"
                {(yyval.str) = (yyvsp[0].str);}
#line 2145 "y.tab.c"
    break;

  case 40: /* print_expressions: strings_list  */
#line 264 "../src/rc_parser.y"
                   {(yyval.str) = (yyvsp[0].str);}
#line 2151 "y.tab.c"
    break;

  case 41: /* print_expressions: print_expressions ',' strings_list  */
#line 265 "../src/rc_parser.y"
                                         {char buffer[256]; 
                                        snprintf(buffer, sizeof(buffer), "%s, %s", (yyvsp[-2].str),(yyvsp[0].str));
                                        (yyval.str) = strdup(buffer);}
#line 2159 "y.tab.c"
    break;

  case 42: /* print_expressions: print_expressions ',' expressions  */
#line 268 "../src/rc_parser.y"
                                        {char buffer[256]; 
                                        snprintf(buffer, sizeof(buffer), "%s, %s", (yyvsp[-2].str),(yyvsp[0].str));
                                        (yyval.str) = strdup(buffer);}
#line 2167 "y.tab.c"
    break;

  case 43: /* strings_list: STRING  */
#line 274 "../src/rc_parser.y"
            {(yyval.str) = (yyvsp[0].str);}
#line 2173 "y.tab.c"
    break;

  case 44: /* Function_Loop_Statement: Sub_Loop_Statement  */
#line 278 "../src/rc_parser.y"
                       {(yyval.str) = (yyvsp[0].str);}
#line 2179 "y.tab.c"
    break;

  case 45: /* Print_Statement: PRINT '(' print_expressions ')' SEMICOLON  */
#line 282 "../src/rc_parser.y"
                                              { fprintf(yacc_output, "print(%s)", (yyvsp[-2].str));}
#line 2185 "y.tab.c"
    break;

  case 46: /* aggregate_function_calls: dataframe '[' single_quoted_string_list ']' '.' MEANFUNC '(' ')'  */
#line 291 "../src/rc_parser.y"
                                                                        { 
                                                                                    char *input = (yyvsp[-7].str); // $1 is the string passed from the 'dataframe' rule
                                                                                    char identifier[100]; // Buffer to store the extracted identifier

                                                                                    // Find the opening parenthesis
                                                                                    char *start = strchr(input, '(');
                                                                                    if (start == NULL) {
                                                                                        yyerror("Invalid format: no opening parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Find the closing parenthesis
                                                                                    char *end = strchr(start, ')');
                                                                                    if (end == NULL) {
                                                                                        yyerror("Invalid format: no closing parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Copy the content between parentheses into the identifier buffer
                                                                                    size_t length = end - start - 1;
                                                                                    if (length <= 0 || length >= sizeof(identifier)) {
                                                                                        yyerror("Invalid identifier length");
                                                                                        YYABORT;
                                                                                    }
                                                                                    strncpy(identifier, start + 1, length);
                                                                                    identifier[length] = '\0'; // Null-terminate the string

                                                                                    char buffer[256]; 
                                                                                    snprintf(buffer, sizeof(buffer), "%s[%s].mean()", identifier,(yyvsp[-5].str));
                                                                                    (yyval.str) = strdup(buffer);
                                                                                    
                                                                        }
#line 2222 "y.tab.c"
    break;

  case 47: /* aggregate_function_calls: dataframe '[' single_quoted_string_list ']' '.' MODEFUNC '(' ')'  */
#line 324 "../src/rc_parser.y"
                                                                        { 
                                                                                    
                                                                                    char *input = (yyvsp[-7].str); // $1 is the string passed from the 'dataframe' rule
                                                                                    char identifier[100]; // Buffer to store the extracted identifier

                                                                                    // Find the opening parenthesis
                                                                                    char *start = strchr(input, '(');
                                                                                    if (start == NULL) {
                                                                                        yyerror("Invalid format: no opening parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Find the closing parenthesis
                                                                                    char *end = strchr(start, ')');
                                                                                    if (end == NULL) {
                                                                                        yyerror("Invalid format: no closing parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Copy the content between parentheses into the identifier buffer
                                                                                    size_t length = end - start - 1;
                                                                                    if (length <= 0 || length >= sizeof(identifier)) {
                                                                                        yyerror("Invalid identifier length");
                                                                                        YYABORT;
                                                                                    }
                                                                                    strncpy(identifier, start + 1, length);
                                                                                    identifier[length] = '\0'; // Null-terminate the string

                                                                                    char buffer[256]; 
                                                                                    snprintf(buffer, sizeof(buffer), "%s[%s].mode()", identifier,(yyvsp[-5].str));
                                                                                    (yyval.str) = strdup(buffer);
                                                                                    
                                                                        }
#line 2260 "y.tab.c"
    break;

  case 48: /* aggregate_function_calls: dataframe '[' single_quoted_string_list ']' '.' MEDIANFUNC '(' ')'  */
#line 358 "../src/rc_parser.y"
                                                                        { 
                                                                                    
                                                                                    char *input = (yyvsp[-7].str); // $1 is the string passed from the 'dataframe' rule
                                                                                    char identifier[100]; // Buffer to store the extracted identifier

                                                                                    // Find the opening parenthesis
                                                                                    char *start = strchr(input, '(');
                                                                                    if (start == NULL) {
                                                                                        yyerror("Invalid format: no opening parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Find the closing parenthesis
                                                                                    char *end = strchr(start, ')');
                                                                                    if (end == NULL) {
                                                                                        yyerror("Invalid format: no closing parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Copy the content between parentheses into the identifier buffer
                                                                                    size_t length = end - start - 1;
                                                                                    if (length <= 0 || length >= sizeof(identifier)) {
                                                                                        yyerror("Invalid identifier length");
                                                                                        YYABORT;
                                                                                    }
                                                                                    strncpy(identifier, start + 1, length);
                                                                                    identifier[length] = '\0'; // Null-terminate the string

                                                                                    char buffer[256]; 
                                                                                    snprintf(buffer, sizeof(buffer), "%s[%s].median()", identifier,(yyvsp[-5].str));
                                                                                    (yyval.str) = strdup(buffer);
                                                                                    
                                                                        }
#line 2298 "y.tab.c"
    break;

  case 49: /* aggregate_function_calls: dataframe '[' single_quoted_string_list ']' '.' SUMFUNC '(' ')'  */
#line 392 "../src/rc_parser.y"
                                                                        { 
                                                                                    
                                                                                    char *input = (yyvsp[-7].str); // $1 is the string passed from the 'dataframe' rule
                                                                                    char identifier[100]; // Buffer to store the extracted identifier

                                                                                    // Find the opening parenthesis
                                                                                    char *start = strchr(input, '(');
                                                                                    if (start == NULL) {
                                                                                        yyerror("Invalid format: no opening parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Find the closing parenthesis
                                                                                    char *end = strchr(start, ')');
                                                                                    if (end == NULL) {
                                                                                        yyerror("Invalid format: no closing parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Copy the content between parentheses into the identifier buffer
                                                                                    size_t length = end - start - 1;
                                                                                    if (length <= 0 || length >= sizeof(identifier)) {
                                                                                        yyerror("Invalid identifier length");
                                                                                        YYABORT;
                                                                                    }
                                                                                    strncpy(identifier, start + 1, length);
                                                                                    identifier[length] = '\0'; // Null-terminate the string

                                                                                    char buffer[256]; 
                                                                                    snprintf(buffer, sizeof(buffer), "%s[%s].sum()", identifier,(yyvsp[-5].str));
                                                                                    (yyval.str) = strdup(buffer);
                                                                                    
                                                                        }
#line 2336 "y.tab.c"
    break;

  case 50: /* aggregate_function_calls: dataframe '[' single_quoted_string_list ']' '.' MINFUNC '(' ')'  */
#line 426 "../src/rc_parser.y"
                                                                        { 
                                                                                    
                                                                                    char *input = (yyvsp[-7].str); // $1 is the string passed from the 'dataframe' rule
                                                                                    char identifier[100]; // Buffer to store the extracted identifier

                                                                                    // Find the opening parenthesis
                                                                                    char *start = strchr(input, '(');
                                                                                    if (start == NULL) {
                                                                                        yyerror("Invalid format: no opening parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Find the closing parenthesis
                                                                                    char *end = strchr(start, ')');
                                                                                    if (end == NULL) {
                                                                                        yyerror("Invalid format: no closing parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Copy the content between parentheses into the identifier buffer
                                                                                    size_t length = end - start - 1;
                                                                                    if (length <= 0 || length >= sizeof(identifier)) {
                                                                                        yyerror("Invalid identifier length");
                                                                                        YYABORT;
                                                                                    }
                                                                                    strncpy(identifier, start + 1, length);
                                                                                    identifier[length] = '\0'; // Null-terminate the string

                                                                                    char buffer[256]; 
                                                                                    snprintf(buffer, sizeof(buffer), "%s[%s].min()", identifier,(yyvsp[-5].str));
                                                                                    (yyval.str) = strdup(buffer);
                                                                                    
                                                                        }
#line 2374 "y.tab.c"
    break;

  case 51: /* aggregate_function_calls: dataframe '[' single_quoted_string_list ']' '.' MAXFUNC '(' ')'  */
#line 460 "../src/rc_parser.y"
                                                                        { 
                                                                                    
                                                                                    char *input = (yyvsp[-7].str); // $1 is the string passed from the 'dataframe' rule
                                                                                    char identifier[100]; // Buffer to store the extracted identifier

                                                                                    // Find the opening parenthesis
                                                                                    char *start = strchr(input, '(');
                                                                                    if (start == NULL) {
                                                                                        yyerror("Invalid format: no opening parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Find the closing parenthesis
                                                                                    char *end = strchr(start, ')');
                                                                                    if (end == NULL) {
                                                                                        yyerror("Invalid format: no closing parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Copy the content between parentheses into the identifier buffer
                                                                                    size_t length = end - start - 1;
                                                                                    if (length <= 0 || length >= sizeof(identifier)) {
                                                                                        yyerror("Invalid identifier length");
                                                                                        YYABORT;
                                                                                    }
                                                                                    strncpy(identifier, start + 1, length);
                                                                                    identifier[length] = '\0'; // Null-terminate the string

                                                                                    char buffer[256]; 
                                                                                    snprintf(buffer, sizeof(buffer), "%s[%s].max()", identifier,(yyvsp[-5].str));
                                                                                    (yyval.str) = strdup(buffer);
                                                                                    
                                                                        }
#line 2412 "y.tab.c"
    break;

  case 52: /* aggregate_function_calls: dataframe '.' MEANFUNC '(' mean_body mean_numerical ')'  */
#line 494 "../src/rc_parser.y"
                                                                        { 
                                                                                    
                                                                                    char *input = (yyvsp[-6].str); // $1 is the string passed from the 'dataframe' rule
                                                                                    char identifier[100]; // Buffer to store the extracted identifier

                                                                                    // Find the opening parenthesis
                                                                                    char *start = strchr(input, '(');
                                                                                    if (start == NULL) {
                                                                                        yyerror("Invalid format: no opening parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Find the closing parenthesis
                                                                                    char *end = strchr(start, ')');
                                                                                    if (end == NULL) {
                                                                                        yyerror("Invalid format: no closing parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Copy the content between parentheses into the identifier buffer
                                                                                    size_t length = end - start - 1;
                                                                                    if (length <= 0 || length >= sizeof(identifier)) {
                                                                                        yyerror("Invalid identifier length");
                                                                                        YYABORT;
                                                                                    }
                                                                                    strncpy(identifier, start + 1, length);
                                                                                    identifier[length] = '\0'; // Null-terminate the string

                                                                                    char buffer[256]; 
                                                                                    snprintf(buffer, sizeof(buffer), "%s.mean(%s%s)", identifier,(yyvsp[-2].str),(yyvsp[-1].str));
                                                                                    (yyval.str) = strdup(buffer);
                                                                                    
                                                                        }
#line 2450 "y.tab.c"
    break;

  case 53: /* aggregate_function_calls: dataframe '.' MODEFUNC '(' mean_body mean_numerical ')'  */
#line 528 "../src/rc_parser.y"
                                                                        { 
                                                                                    
                                                                                    char *input = (yyvsp[-6].str); // $1 is the string passed from the 'dataframe' rule
                                                                                    char identifier[100]; // Buffer to store the extracted identifier

                                                                                    // Find the opening parenthesis
                                                                                    char *start = strchr(input, '(');
                                                                                    if (start == NULL) {
                                                                                        yyerror("Invalid format: no opening parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Find the closing parenthesis
                                                                                    char *end = strchr(start, ')');
                                                                                    if (end == NULL) {
                                                                                        yyerror("Invalid format: no closing parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Copy the content between parentheses into the identifier buffer
                                                                                    size_t length = end - start - 1;
                                                                                    if (length <= 0 || length >= sizeof(identifier)) {
                                                                                        yyerror("Invalid identifier length");
                                                                                        YYABORT;
                                                                                    }
                                                                                    strncpy(identifier, start + 1, length);
                                                                                    identifier[length] = '\0'; // Null-terminate the string

                                                                                    char buffer[256]; 
                                                                                    snprintf(buffer, sizeof(buffer), "%s.mean(%s%s)", identifier, (yyvsp[-2].str),(yyvsp[-1].str));
                                                                                    (yyval.str) = strdup(buffer);
                                                                                    
                                                                        }
#line 2488 "y.tab.c"
    break;

  case 54: /* aggregate_function_calls: dataframe '.' MEDIANFUNC '(' mean_body mean_numerical ')'  */
#line 562 "../src/rc_parser.y"
                                                                        { 
                                                                                    
                                                                                    char *input = (yyvsp[-6].str); // $1 is the string passed from the 'dataframe' rule
                                                                                    char identifier[100]; // Buffer to store the extracted identifier

                                                                                    // Find the opening parenthesis
                                                                                    char *start = strchr(input, '(');
                                                                                    if (start == NULL) {
                                                                                        yyerror("Invalid format: no opening parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Find the closing parenthesis
                                                                                    char *end = strchr(start, ')');
                                                                                    if (end == NULL) {
                                                                                        yyerror("Invalid format: no closing parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Copy the content between parentheses into the identifier buffer
                                                                                    size_t length = end - start - 1;
                                                                                    if (length <= 0 || length >= sizeof(identifier)) {
                                                                                        yyerror("Invalid identifier length");
                                                                                        YYABORT;
                                                                                    }
                                                                                    strncpy(identifier, start + 1, length);
                                                                                    identifier[length] = '\0'; // Null-terminate the string

                                                                                    char buffer[256]; 
                                                                                    snprintf(buffer, sizeof(buffer), "%s.mean(%s%s)", identifier, (yyvsp[-2].str),(yyvsp[-1].str));
                                                                                    (yyval.str) = strdup(buffer);
                                                                                    
                                                                        }
#line 2526 "y.tab.c"
    break;

  case 55: /* aggregate_function_calls: dataframe '.' SUMFUNC '(' mean_body mean_numerical ')'  */
#line 596 "../src/rc_parser.y"
                                                                        { 
                                                                                    
                                                                                    char *input = (yyvsp[-6].str); // $1 is the string passed from the 'dataframe' rule
                                                                                    char identifier[100]; // Buffer to store the extracted identifier

                                                                                    // Find the opening parenthesis
                                                                                    char *start = strchr(input, '(');
                                                                                    if (start == NULL) {
                                                                                        yyerror("Invalid format: no opening parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Find the closing parenthesis
                                                                                    char *end = strchr(start, ')');
                                                                                    if (end == NULL) {
                                                                                        yyerror("Invalid format: no closing parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Copy the content between parentheses into the identifier buffer
                                                                                    size_t length = end - start - 1;
                                                                                    if (length <= 0 || length >= sizeof(identifier)) {
                                                                                        yyerror("Invalid identifier length");
                                                                                        YYABORT;
                                                                                    }
                                                                                    strncpy(identifier, start + 1, length);
                                                                                    identifier[length] = '\0'; // Null-terminate the string

                                                                                    char buffer[256]; 
                                                                                    snprintf(buffer, sizeof(buffer), "%s.mean(%s%s)", identifier, (yyvsp[-2].str),(yyvsp[-1].str));
                                                                                    (yyval.str) = strdup(buffer);
                                                                                    
                                                                        }
#line 2564 "y.tab.c"
    break;

  case 56: /* aggregate_function_calls: dataframe '.' MINFUNC '(' mean_body mean_numerical ')'  */
#line 630 "../src/rc_parser.y"
                                                                        { 
                                                                                    
                                                                                    char *input = (yyvsp[-6].str); // $1 is the string passed from the 'dataframe' rule
                                                                                    char identifier[100]; // Buffer to store the extracted identifier

                                                                                    // Find the opening parenthesis
                                                                                    char *start = strchr(input, '(');
                                                                                    if (start == NULL) {
                                                                                        yyerror("Invalid format: no opening parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Find the closing parenthesis
                                                                                    char *end = strchr(start, ')');
                                                                                    if (end == NULL) {
                                                                                        yyerror("Invalid format: no closing parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Copy the content between parentheses into the identifier buffer
                                                                                    size_t length = end - start - 1;
                                                                                    if (length <= 0 || length >= sizeof(identifier)) {
                                                                                        yyerror("Invalid identifier length");
                                                                                        YYABORT;
                                                                                    }
                                                                                    strncpy(identifier, start + 1, length);
                                                                                    identifier[length] = '\0'; // Null-terminate the string

                                                                                    char buffer[256]; 
                                                                                    snprintf(buffer, sizeof(buffer), "%s.mean(%s%s)", identifier, (yyvsp[-2].str),(yyvsp[-1].str));
                                                                                    (yyval.str) = strdup(buffer);
                                                                                    
                                                                        }
#line 2602 "y.tab.c"
    break;

  case 57: /* aggregate_function_calls: dataframe '.' MAXFUNC '(' mean_body mean_numerical ')'  */
#line 664 "../src/rc_parser.y"
                                                                        { 
                                                                                    
                                                                                    char *input = (yyvsp[-6].str); // $1 is the string passed from the 'dataframe' rule
                                                                                    char identifier[100]; // Buffer to store the extracted identifier

                                                                                    // Find the opening parenthesis
                                                                                    char *start = strchr(input, '(');
                                                                                    if (start == NULL) {
                                                                                        yyerror("Invalid format: no opening parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Find the closing parenthesis
                                                                                    char *end = strchr(start, ')');
                                                                                    if (end == NULL) {
                                                                                        yyerror("Invalid format: no closing parenthesis found");
                                                                                        YYABORT;
                                                                                    }

                                                                                    // Copy the content between parentheses into the identifier buffer
                                                                                    size_t length = end - start - 1;
                                                                                    if (length <= 0 || length >= sizeof(identifier)) {
                                                                                        yyerror("Invalid identifier length");
                                                                                        YYABORT;
                                                                                    }
                                                                                    strncpy(identifier, start + 1, length);
                                                                                    identifier[length] = '\0'; // Null-terminate the string

                                                                                    char buffer[256]; 
                                                                                    snprintf(buffer, sizeof(buffer), "%s.mean(%s%s)", identifier, (yyvsp[-2].str),(yyvsp[-1].str));
                                                                                    (yyval.str) = strdup(buffer);
                                                                                    
                                                                        }
#line 2640 "y.tab.c"
    break;

  case 58: /* function_call_statement: READCSVFUNC '(' CSVFILE readcsv_body ')'  */
#line 700 "../src/rc_parser.y"
                                                    { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "pd.read_csv(%s)\n", (yyvsp[-2].str));
                                                                (yyval.str) = strdup(buffer);
                                                    }
#line 2650 "y.tab.c"
    break;

  case 59: /* function_call_statement: dataframe '.' HEADFUNC '(' head_tail_body ')'  */
#line 706 "../src/rc_parser.y"
                                                    { 
                                                                
                                                                char *input = (yyvsp[-5].str); // $1 is the string passed from the 'dataframe' rule
                                                                char identifier[100]; // Buffer to store the extracted identifier

                                                                // Find the opening parenthesis
                                                                char *start = strchr(input, '(');
                                                                if (start == NULL) {
                                                                    yyerror("Invalid format: no opening parenthesis found");
                                                                    YYABORT;
                                                                }

                                                                // Find the closing parenthesis
                                                                char *end = strchr(start, ')');
                                                                if (end == NULL) {
                                                                    yyerror("Invalid format: no closing parenthesis found");
                                                                    YYABORT;
                                                                }

                                                                // Copy the content between parentheses into the identifier buffer
                                                                size_t length = end - start - 1;
                                                                if (length <= 0 || length >= sizeof(identifier)) {
                                                                    yyerror("Invalid identifier length");
                                                                    YYABORT;
                                                                }
                                                                strncpy(identifier, start + 1, length);
                                                                identifier[length] = '\0'; // Null-terminate the string

    
                                                                fprintf(yacc_output,"%s.head(%s)\n", identifier, (yyvsp[-1].str));
                                                    }
#line 2686 "y.tab.c"
    break;

  case 60: /* function_call_statement: dataframe '.' TAILFUNC '(' head_tail_body ')'  */
#line 738 "../src/rc_parser.y"
                                                    { 
                                                                char *input = (yyvsp[-5].str); // $1 is the string passed from the 'dataframe' rule
                                                                char identifier[100]; // Buffer to store the extracted identifier

                                                                // Find the opening parenthesis
                                                                char *start = strchr(input, '(');
                                                                if (start == NULL) {
                                                                    yyerror("Invalid format: no opening parenthesis found");
                                                                    YYABORT;
                                                                }

                                                                // Find the closing parenthesis
                                                                char *end = strchr(start, ')');
                                                                if (end == NULL) {
                                                                    yyerror("Invalid format: no closing parenthesis found");
                                                                    YYABORT;
                                                                }

                                                                // Copy the content between parentheses into the identifier buffer
                                                                size_t length = end - start - 1;
                                                                if (length <= 0 || length >= sizeof(identifier)) {
                                                                    yyerror("Invalid identifier length");
                                                                    YYABORT;
                                                                }
                                                                strncpy(identifier, start + 1, length);
                                                                identifier[length] = '\0'; // Null-terminate the string

    
                                                                fprintf(yacc_output,"%s.tail(%s)\n", identifier, (yyvsp[-1].str));
                                                    }
#line 2721 "y.tab.c"
    break;

  case 61: /* function_call_statement: dataframe '.' RESETINDEXFUNC '(' reset_index_body_drop reset_index_body_implace ')'  */
#line 769 "../src/rc_parser.y"
                                                                    { 
                                                                        char *input = (yyvsp[-6].str); // $1 is the string passed from the 'dataframe' rule
                                                                        char identifier[100]; // Buffer to store the extracted identifier

                                                                        // Find the opening parenthesis
                                                                        char *start = strchr(input, '(');
                                                                        if (start == NULL) {
                                                                            yyerror("Invalid format: no opening parenthesis found");
                                                                            YYABORT;
                                                                        }

                                                                        // Find the closing parenthesis
                                                                        char *end = strchr(start, ')');
                                                                        if (end == NULL) {
                                                                            yyerror("Invalid format: no closing parenthesis found");
                                                                            YYABORT;
                                                                        }

                                                                        // Copy the content between parentheses into the identifier buffer
                                                                        size_t length = end - start - 1;
                                                                        if (length <= 0 || length >= sizeof(identifier)) {
                                                                            yyerror("Invalid identifier length");
                                                                            YYABORT;
                                                                        }
                                                                        strncpy(identifier, start + 1, length);
                                                                        identifier[length] = '\0'; // Null-terminate the string

                                                                        if(!strcmp((yyvsp[-1].str), "inplace = False"))
                                                                        {
                                                                            if(!strcmp((yyvsp[-2].str),"drop = True"))
                                                                            {
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s.reset_index(%s %s)\n",identifier,(yyvsp[-2].str),(yyvsp[-1].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
                                                                            else
                                                                            {
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s.set_index(%s)\n",identifier,(yyvsp[-2].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
                                                                        }
                                                                        else
                                                                        {
                                                                            if(!strcmp((yyvsp[-2].str),"drop = True"))
                                                                            {
                                                                                fprintf(yacc_output, "%s.reset_index(%s %s)\n",identifier,(yyvsp[-2].str),(yyvsp[-1].str));
                                                                            }
                                                                            else
                                                                            {
                                                                                
                                                                                fprintf(yacc_output, "%s.set_index(%s, inplace = True)\n",identifier,(yyvsp[-2].str));
                                                                            }
                                                                        }
                                                                    }
#line 2781 "y.tab.c"
    break;

  case 62: /* function_call_statement: dataframe '.' TOCSVFUNC '(' CSVFILE readcsv_body ')'  */
#line 825 "../src/rc_parser.y"
                                                    { 
                                                                char *input = (yyvsp[-6].str); // $1 is the string passed from the 'dataframe' rule
                                                                char identifier[100]; // Buffer to store the extracted identifier

                                                                // Find the opening parenthesis
                                                                char *start = strchr(input, '(');
                                                                if (start == NULL) {
                                                                    yyerror("Invalid format: no opening parenthesis found");
                                                                    YYABORT;
                                                                }

                                                                // Find the closing parenthesis
                                                                char *end = strchr(start, ')');
                                                                if (end == NULL) {
                                                                    yyerror("Invalid format: no closing parenthesis found");
                                                                    YYABORT;
                                                                }

                                                                // Copy the content between parentheses into the identifier buffer
                                                                size_t length = end - start - 1;
                                                                if (length <= 0 || length >= sizeof(identifier)) {
                                                                    yyerror("Invalid identifier length");
                                                                    YYABORT;
                                                                }
                                                                strncpy(identifier, start + 1, length);
                                                                identifier[length] = '\0'; // Null-terminate the string

                                                                char buffer[256]; 
                                                                fprintf(yacc_output, "identifier.to_csv(%s)\n", (yyvsp[-1].str));
                                                    }
#line 2816 "y.tab.c"
    break;

  case 63: /* function_call_statement: dataframe '.' DESCRIBEFUNC '(' ')'  */
#line 856 "../src/rc_parser.y"
                                                    {
                                                                char *input = (yyvsp[-4].str); // $1 is the string passed from the 'dataframe' rule
                                                                char identifier[100]; // Buffer to store the extracted identifier

                                                                // Find the opening parenthesis
                                                                char *start = strchr(input, '(');
                                                                if (start == NULL) {
                                                                    yyerror("Invalid format: no opening parenthesis found");
                                                                    YYABORT;
                                                                }

                                                                // Find the closing parenthesis
                                                                char *end = strchr(start, ')');
                                                                if (end == NULL) {
                                                                    yyerror("Invalid format: no closing parenthesis found");
                                                                    YYABORT;
                                                                }

                                                                // Copy the content between parentheses into the identifier buffer
                                                                size_t length = end - start - 1;
                                                                if (length <= 0 || length >= sizeof(identifier)) {
                                                                    yyerror("Invalid identifier length");
                                                                    YYABORT;
                                                                }
                                                                strncpy(identifier, start + 1, length);
                                                                identifier[length] = '\0'; // Null-terminate the string

                                                                fprintf(yacc_output,"%s.describe()\n",identifier);
                                                    }
#line 2850 "y.tab.c"
    break;

  case 64: /* function_call_statement: dataframe '.' MISSVALUEFUNC '(' missing_value_body_confirm missing_value_body ')'  */
#line 886 "../src/rc_parser.y"
                                                    { 
                                                                
                                                                char *input = (yyvsp[-6].str); // $1 is the string passed from the 'dataframe' rule
                                                                char identifier[100]; // Buffer to store the extracted identifier

                                                                // Find the opening parenthesis
                                                                char *start = strchr(input, '(');
                                                                if (start == NULL) {
                                                                    yyerror("Invalid format: no opening parenthesis found");
                                                                    YYABORT;
                                                                }

                                                                // Find the closing parenthesis
                                                                char *end = strchr(start, ')');
                                                                if (end == NULL) {
                                                                    yyerror("Invalid format: no closing parenthesis found");
                                                                    YYABORT;
                                                                }

                                                                // Copy the content between parentheses into the identifier buffer
                                                                size_t length = end - start - 1;
                                                                if (length <= 0 || length >= sizeof(identifier)) {
                                                                    yyerror("Invalid identifier length");
                                                                    YYABORT;
                                                                }
                                                                strncpy(identifier, start + 1, length);
                                                                identifier[length] = '\0'; // Null-terminate the string

                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s.%s%s)\n", identifier, (yyvsp[-2].str), (yyvsp[-1].str));
                                                                (yyval.str) = strdup(buffer);
                                                    }
#line 2887 "y.tab.c"
    break;

  case 65: /* function_call_statement: dataframe '.' EXCHANGEVALUEFUNC '(' to_exchange ',' exchange_value exchange_body_optional ')'  */
#line 919 "../src/rc_parser.y"
                                                            { 
                                                                char *input = (yyvsp[-8].str); // $1 is the string passed from the 'dataframe' rule
                                                                char identifier[100]; // Buffer to store the extracted identifier

                                                                // Find the opening parenthesis
                                                                char *start = strchr(input, '(');
                                                                if (start == NULL) {
                                                                    yyerror("Invalid format: no opening parenthesis found");
                                                                    YYABORT;
                                                                }

                                                                // Find the closing parenthesis
                                                                char *end = strchr(start, ')');
                                                                if (end == NULL) {
                                                                    yyerror("Invalid format: no closing parenthesis found");
                                                                    YYABORT;
                                                                }

                                                                // Copy the content between parentheses into the identifier buffer
                                                                size_t length = end - start - 1;
                                                                if (length <= 0 || length >= sizeof(identifier)) {
                                                                    yyerror("Invalid identifier length");
                                                                    YYABORT;
                                                                }
                                                                strncpy(identifier, start + 1, length);
                                                                identifier[length] = '\0'; // Null-terminate the string

                                                                char buffer[256]; 
                                                                fprintf(yacc_output, "%s.replace(%s,%s%s)", identifier,(yyvsp[-4].str),(yyvsp[-2].str),(yyvsp[-1].str));
                                                            }
#line 2922 "y.tab.c"
    break;

  case 66: /* function_call_statement: CONCATFUNC '(' '[' dataframe_list ']' ',' concat_body ')'  */
#line 950 "../src/rc_parser.y"
                                                                            { 
                                                                                fprintf(yacc_output,"pd.concat([%s],%s)", (yyvsp[-4].str),(yyvsp[-1].str));
                                                                            }
#line 2930 "y.tab.c"
    break;

  case 67: /* function_call_statement: MERGEFUNC '(' dataframe ',' dataframe ',' how_clause ',' on_clause ',' suffixes_clause ')'  */
#line 954 "../src/rc_parser.y"
                                                                            { 
                                                                                char *input = (yyvsp[-9].str); // $1 is the string passed from the 'dataframe' rule
                                                                                char identifier[100]; // Buffer to store the extracted identifier

                                                                                // Find the opening parenthesis
                                                                                char *start = strchr(input, '(');
                                                                                if (start == NULL) {
                                                                                    yyerror("Invalid format: no opening parenthesis found");
                                                                                    YYABORT;
                                                                                }

                                                                                // Find the closing parenthesis
                                                                                char *end = strchr(start, ')');
                                                                                if (end == NULL) {
                                                                                    yyerror("Invalid format: no closing parenthesis found");
                                                                                    YYABORT;
                                                                                }

                                                                                // Copy the content between parentheses into the identifier buffer
                                                                                size_t length = end - start - 1;
                                                                                if (length <= 0 || length >= sizeof(identifier)) {
                                                                                    yyerror("Invalid identifier length");
                                                                                    YYABORT;
                                                                                }
                                                                                strncpy(identifier, start + 1, length);
                                                                                identifier[length] = '\0'; // Null-terminate the string

                                                                                char *input2 = (yyvsp[-7].str); // $1 is the string passed from the 'dataframe' rule
                                                                                char identifier2[100]; // Buffer to store the extracted identifier

                                                                                // Find the opening parenthesis
                                                                                char *start2 = strchr(input2, '(');
                                                                                if (start == NULL) {
                                                                                    yyerror("Invalid format: no opening parenthesis found");
                                                                                    YYABORT;
                                                                                }

                                                                                // Find the closing parenthesis
                                                                                char *end2 = strchr(start2, ')');
                                                                                if (end == NULL) {
                                                                                    yyerror("Invalid format: no closing parenthesis found");
                                                                                    YYABORT;
                                                                                }

                                                                                // Copy the content between parentheses into the identifier buffer
                                                                                size_t length2 = end2 - start2 - 1;
                                                                                if (length2 <= 0 || length2 >= sizeof(identifier2)) {
                                                                                    yyerror("Invalid identifier length");
                                                                                    YYABORT;
                                                                                }
                                                                                strncpy(identifier2, start2 + 1, length2);
                                                                                identifier2[length2] = '\0'; // Null-terminate the string

                                                                            
                                                                                fprintf(yacc_output,"pd.merge(%s,%s,%s,%s,%s)",identifier, identifier2, (yyvsp[-5].str),(yyvsp[-3].str),(yyvsp[-1].str));
                                                                            }
#line 2991 "y.tab.c"
    break;

  case 68: /* function_call_statement: IDENTIFIER '(' actual_parameters ')'  */
#line 1012 "../src/rc_parser.y"
                                                                            { 
                                                                                fprintf(yacc_output, "%s(%s)",(yyvsp[-3].str), (yyvsp[-1].str));
                                                                            }
#line 2999 "y.tab.c"
    break;

  case 69: /* concat_body: AXIS '=' axis_bit  */
#line 1019 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "axis = %d", (yyvsp[0].in));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3009 "y.tab.c"
    break;

  case 70: /* dataframe_list: dataframe  */
#line 1027 "../src/rc_parser.y"
              {
        char *input = (yyvsp[0].str); // $1 is the string passed from the 'dataframe' rule
        char identifier[100]; // Buffer to store the extracted identifier

        // Find the opening parenthesis
        char *start = strchr(input, '(');
        if (start == NULL) {
            yyerror("Invalid format: no opening parenthesis found");
            YYABORT;
        }

        // Find the closing parenthesis
        char *end = strchr(start, ')');
        if (end == NULL) {
            yyerror("Invalid format: no closing parenthesis found");
            YYABORT;
        }

        // Copy the content between parentheses into the identifier buffer
        size_t length = end - start - 1;
        if (length <= 0 || length >= sizeof(identifier)) {
            yyerror("Invalid identifier length");
            YYABORT;
        }
        strncpy(identifier, start + 1, length);
        identifier[length] = '\0'; // Null-terminate the string

        (yyval.str) = strdup(identifier); // Store the extracted identifier in $$
    }
#line 3043 "y.tab.c"
    break;

  case 71: /* dataframe_list: dataframe_list ',' dataframe  */
#line 1057 "../src/rc_parser.y"
                                     {
            char *input = (yyvsp[0].str); // $1 is the string passed from the 'dataframe' rule
        char identifier[100]; // Buffer to store the extracted identifier

        // Find the opening parenthesis
        char *start = strchr(input, '(');
        if (start == NULL) {
            yyerror("Invalid format: no opening parenthesis found");
            YYABORT;
        }

        // Find the closing parenthesis
        char *end = strchr(start, ')');
        if (end == NULL) {
            yyerror("Invalid format: no closing parenthesis found");
            YYABORT;
        }

        // Copy the content between parentheses into the identifier buffer
        size_t length = end - start - 1;
        if (length <= 0 || length >= sizeof(identifier)) {
            yyerror("Invalid identifier length");
            YYABORT;
        }
        strncpy(identifier, start + 1, length);
        identifier[length] = '\0'; // Null-terminate the string
        char buffer[256]; // Buffer to combine identifiers with a comma
        snprintf(buffer, sizeof(buffer), "%s,%s", (yyvsp[-2].str), identifier);
        (yyval.str) = strdup(buffer); // Store the concatenated string in $$
    }
#line 3078 "y.tab.c"
    break;

  case 72: /* to_exchange: REGX SINGLE_QUOTED_STRING  */
#line 1092 "../src/rc_parser.y"
                                                                    { 
                                                                        char buffer[256]; 
                                                                        snprintf(buffer, sizeof(buffer), "to_replace=r%s", (yyvsp[0].str));
                                                                        (yyval.str) = strdup(buffer);
                                                                    }
#line 3088 "y.tab.c"
    break;

  case 73: /* exchange_value: INTNUM  */
#line 1101 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "value = %d", (yyvsp[0].in));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3098 "y.tab.c"
    break;

  case 74: /* exchange_value: FLOATNUM  */
#line 1107 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "value = %f", (yyvsp[0].flt));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3108 "y.tab.c"
    break;

  case 75: /* exchange_value: EXPONENTIAL  */
#line 1112 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "value = %s", (yyvsp[0].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3118 "y.tab.c"
    break;

  case 76: /* exchange_value: PERCENTAGE  */
#line 1117 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "value = %s", (yyvsp[0].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3128 "y.tab.c"
    break;

  case 77: /* exchange_value: IDENTIFIER  */
#line 1122 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "value = '%s'", (yyvsp[0].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3138 "y.tab.c"
    break;

  case 78: /* exchange_body_optional: ',' INPLACE '=' BOOL exchange_body_optional  */
#line 1131 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), ",inplace = %s", (yyvsp[-1].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3148 "y.tab.c"
    break;

  case 79: /* exchange_body_optional: ',' mean_body exchange_body_optional  */
#line 1137 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), ",%s", (yyvsp[-1].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3158 "y.tab.c"
    break;

  case 80: /* exchange_body_optional: %empty  */
#line 1142 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                buffer[0] = '\0';
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3168 "y.tab.c"
    break;

  case 81: /* missing_value_body_confirm: FILL ',' INTNUM  */
#line 1151 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "fillna(value = %d", (yyvsp[0].in));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3178 "y.tab.c"
    break;

  case 82: /* missing_value_body_confirm: FILL ',' aggregate_function_calls  */
#line 1157 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "fillna(value = %s", (yyvsp[0].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3188 "y.tab.c"
    break;

  case 83: /* missing_value_body_confirm: FILL ',' METHOD '=' FFILL  */
#line 1163 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "fillna(method = 'ffill'");
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3198 "y.tab.c"
    break;

  case 84: /* missing_value_body_confirm: FILL ',' METHOD '=' BFILL  */
#line 1169 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "fillna(method = 'bfill'");
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3208 "y.tab.c"
    break;

  case 85: /* missing_value_body_confirm: FILL ',' METHOD '=' INTERPOLATE  */
#line 1175 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "fillna(method = 'interpolate'");
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3218 "y.tab.c"
    break;

  case 86: /* missing_value_body_confirm: DROP  */
#line 1181 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "dropna(");
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3228 "y.tab.c"
    break;

  case 87: /* missing_value_body: ',' INPLACE '=' BOOL missing_value_body  */
#line 1190 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), ",inplace = %s", (yyvsp[-1].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3238 "y.tab.c"
    break;

  case 88: /* missing_value_body: ',' mean_body missing_value_body  */
#line 1196 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), ",%s", (yyvsp[-1].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3248 "y.tab.c"
    break;

  case 89: /* missing_value_body: %empty  */
#line 1202 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                buffer[0] = '\0';
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3258 "y.tab.c"
    break;

  case 90: /* mean_body: AXIS '=' axis_bit  */
#line 1211 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "axis = %d",(yyvsp[0].in));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3268 "y.tab.c"
    break;

  case 91: /* mean_body: %empty  */
#line 1217 "../src/rc_parser.y"
                                                                           { 
                                                                                char buffer[256]; 
                                                                                buffer[0] = '\0';
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3278 "y.tab.c"
    break;

  case 92: /* axis_bit: INTNUM  */
#line 1226 "../src/rc_parser.y"
    {
        if((yyvsp[0].in) == 0)
        {
            (yyval.in) = 0;
        }
        else if((yyvsp[0].in) == 1)
        {
            (yyval.in) = 1;
        }
    }
#line 3293 "y.tab.c"
    break;

  case 93: /* mean_numerical: ',' NUMERIC '=' BOOL mean_numerical  */
#line 1240 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), ", numeric_only = %s",(yyvsp[-1].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3303 "y.tab.c"
    break;

  case 94: /* mean_numerical: ',' SKIPNA '=' BOOL mean_numerical  */
#line 1245 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), ", skip_na = %s",(yyvsp[-1].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3313 "y.tab.c"
    break;

  case 95: /* mean_numerical: ',' USECOLS '=' '[' single_quoted_string_list ']' mean_numerical  */
#line 1251 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                buffer[0] = '\0';
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3323 "y.tab.c"
    break;

  case 96: /* mean_numerical: %empty  */
#line 1257 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                buffer[0] = '\0';
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3333 "y.tab.c"
    break;

  case 97: /* reset_index_body_drop: DROP '=' TRUE  */
#line 1266 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "drop = True");
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3343 "y.tab.c"
    break;

  case 98: /* reset_index_body_drop: DROP '=' FALSE ',' USECOLS '=' '[' single_quoted_string_list ']'  */
#line 1272 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "[%s]",(yyvsp[-1].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3353 "y.tab.c"
    break;

  case 99: /* BOOL: TRUE  */
#line 1280 "../src/rc_parser.y"
                { (yyval.str) = (yyvsp[0].str); }
#line 3359 "y.tab.c"
    break;

  case 100: /* BOOL: FALSE  */
#line 1281 "../src/rc_parser.y"
                { (yyval.str) = (yyvsp[0].str); }
#line 3365 "y.tab.c"
    break;

  case 101: /* reset_index_body_implace: ',' INPLACE '=' BOOL  */
#line 1285 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), ",inplace = %s",(yyvsp[0].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3375 "y.tab.c"
    break;

  case 102: /* reset_index_body_implace: %empty  */
#line 1291 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                buffer[0] = '\0';
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3385 "y.tab.c"
    break;

  case 103: /* head_tail_body: INTNUM  */
#line 1299 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%d", (yyvsp[0].in));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3395 "y.tab.c"
    break;

  case 104: /* head_tail_body: %empty  */
#line 1305 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                buffer[0] = '\0';
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3405 "y.tab.c"
    break;

  case 105: /* readcsv_body: ',' SEP '=' SINGLE_QUOTED_STRING readcsv_body  */
#line 1314 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), ", sep = %s\n", (yyvsp[-1].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3415 "y.tab.c"
    break;

  case 106: /* readcsv_body: ',' HEADER '=' INTNUM readcsv_body  */
#line 1320 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), ", header = %d\n", (yyvsp[-1].in));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3425 "y.tab.c"
    break;

  case 107: /* readcsv_body: ',' INDEX_COL '=' INTNUM readcsv_body  */
#line 1326 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), ", index_col = %d\n", (yyvsp[-1].in));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3435 "y.tab.c"
    break;

  case 108: /* readcsv_body: ',' INDEX '=' BOOL readcsv_body  */
#line 1332 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), ", index = %s\n", (yyvsp[-1].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3445 "y.tab.c"
    break;

  case 109: /* readcsv_body: ',' USECOLS '=' '[' single_quoted_string_list ']' readcsv_body  */
#line 1338 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), ", usecols = [%s]\n", (yyvsp[-2].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3455 "y.tab.c"
    break;

  case 110: /* readcsv_body: %empty  */
#line 1344 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                buffer[0] = '\0';
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3465 "y.tab.c"
    break;

  case 111: /* single_quoted_string_list: SINGLE_QUOTED_STRING  */
#line 1352 "../src/rc_parser.y"
                                                           { (yyval.str) = (yyvsp[0].str); }
#line 3471 "y.tab.c"
    break;

  case 112: /* single_quoted_string_list: single_quoted_string_list ',' SINGLE_QUOTED_STRING  */
#line 1354 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s , %s", (yyvsp[-2].str),(yyvsp[0].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3481 "y.tab.c"
    break;

  case 113: /* actual_parameters: expressions  */
#line 1364 "../src/rc_parser.y"
                                                { 
                                                    char buffer[256]; 
                                                    snprintf(buffer, sizeof(buffer), "%s", (yyvsp[0].str));
                                                    (yyval.str) = strdup(buffer);
                                                }
#line 3491 "y.tab.c"
    break;

  case 114: /* actual_parameters: actual_parameters ',' expressions  */
#line 1370 "../src/rc_parser.y"
                                                { 
                                                    char buffer[256]; 
                                                    snprintf(buffer, sizeof(buffer), "%s,%s", (yyvsp[-2].str),(yyvsp[0].str));
                                                    (yyval.str) = strdup(buffer);
                                                }
#line 3501 "y.tab.c"
    break;

  case 115: /* grouping: '(' expressions ')'  */
#line 1379 "../src/rc_parser.y"
                                                { 
                                                    char buffer[256]; 
                                                    snprintf(buffer, sizeof(buffer), "(%s)", (yyvsp[-1].str));
                                                    (yyval.str) = strdup(buffer);
                                                }
#line 3511 "y.tab.c"
    break;

  case 116: /* operators: '+'  */
#line 1387 "../src/rc_parser.y"
          { (yyval.str) = strdup("+"); }
#line 3517 "y.tab.c"
    break;

  case 117: /* operators: '-'  */
#line 1388 "../src/rc_parser.y"
          { (yyval.str) = strdup("-"); }
#line 3523 "y.tab.c"
    break;

  case 118: /* operators: '*'  */
#line 1389 "../src/rc_parser.y"
          { (yyval.str) = strdup("*"); }
#line 3529 "y.tab.c"
    break;

  case 119: /* operators: '/'  */
#line 1390 "../src/rc_parser.y"
          { (yyval.str) = strdup("/"); }
#line 3535 "y.tab.c"
    break;

  case 120: /* operators: '%'  */
#line 1391 "../src/rc_parser.y"
          { (yyval.str) = strdup("%"); }
#line 3541 "y.tab.c"
    break;

  case 121: /* operators: '&'  */
#line 1392 "../src/rc_parser.y"
          { (yyval.str) = strdup("&"); }
#line 3547 "y.tab.c"
    break;

  case 122: /* operators: '|'  */
#line 1393 "../src/rc_parser.y"
          { (yyval.str) = strdup("|"); }
#line 3553 "y.tab.c"
    break;

  case 123: /* operators: '^'  */
#line 1394 "../src/rc_parser.y"
          { (yyval.str) = strdup("^"); }
#line 3559 "y.tab.c"
    break;

  case 124: /* operators: '~'  */
#line 1395 "../src/rc_parser.y"
          { (yyval.str) = strdup("~"); }
#line 3565 "y.tab.c"
    break;

  case 125: /* Loop_Statement: Sub_Loop_Statement  */
#line 1399 "../src/rc_parser.y"
                                        { 
                                            indent += 1;
                                            char buffer[256]; 
                                            snprintf(buffer, sizeof(buffer), "%s", (yyvsp[0].str));
                                            (yyval.str) = strdup(buffer);
                                           // indent -= 1;
                                        }
#line 3577 "y.tab.c"
    break;

  case 126: /* Sub_Loop_Statement: LOOP '(' initializtion SEMICOLON predicate_list SEMICOLON update ')' '{' loop_body '}'  */
#line 1411 "../src/rc_parser.y"
                    {
                        char buffer[256]; 
                        snprintf(buffer, sizeof(buffer), "%s\nwhile(%s):\n%s\n\t%s", (yyvsp[-8].str), (yyvsp[-6].str), (yyvsp[-1].str), (yyvsp[-4].str));
                        (yyval.str) = strdup(buffer);
                    }
#line 3587 "y.tab.c"
    break;

  case 127: /* initializtion: Identifier_List  */
#line 1419 "../src/rc_parser.y"
                                    { (yyval.str) = strdup((yyvsp[0].str)); }
#line 3593 "y.tab.c"
    break;

  case 128: /* Identifier_List: IDENTIFIER '=' INTNUM  */
#line 1423 "../src/rc_parser.y"
                                    { 
                                        char buffer[256]; 
                                        snprintf(buffer, sizeof(buffer), "%s = %d", (yyvsp[-2].str),(yyvsp[0].in));
                                        (yyval.str) = strdup(buffer);
                                    }
#line 3603 "y.tab.c"
    break;

  case 129: /* Identifier_List: IDENTIFIER '=' FLOATNUM  */
#line 1428 "../src/rc_parser.y"
                                    { 
                                        char buffer[256]; 
                                        snprintf(buffer, sizeof(buffer), "%s = %f", (yyvsp[-2].str),(yyvsp[0].flt));
                                        (yyval.str) = strdup(buffer);
                                    }
#line 3613 "y.tab.c"
    break;

  case 130: /* update: Function_Assignment_Statement  */
#line 1436 "../src/rc_parser.y"
                                  { (yyval.str) = strdup((yyvsp[0].str)); }
#line 3619 "y.tab.c"
    break;

  case 131: /* loop_body: statment_list  */
#line 1440 "../src/rc_parser.y"
                    { (yyval.str) = strdup((yyvsp[0].str)); }
#line 3625 "y.tab.c"
    break;

  case 132: /* statment_list: statement  */
#line 1444 "../src/rc_parser.y"
                                        {  
                                            char buffer[256] ;
                                            snprintf(buffer, sizeof(buffer), "\t%s\n", (yyvsp[0].str)); 
                                            (yyval.str) = strdup(buffer);
                                        }
#line 3635 "y.tab.c"
    break;

  case 133: /* statment_list: statment_list statement  */
#line 1449 "../src/rc_parser.y"
                                        { 
                                            char buffer[256]; 
                                            snprintf(buffer, sizeof(buffer), "%s\t%s", (yyvsp[-1].str), (yyvsp[0].str));
                                            (yyval.str) = strdup(buffer);
                                        }
#line 3645 "y.tab.c"
    break;

  case 134: /* statement: Function_Assignment_Statement SEMICOLON  */
#line 1457 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s", (yyvsp[-1].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3655 "y.tab.c"
    break;

  case 135: /* statement: Function_Print_Statement SEMICOLON  */
#line 1462 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s", (yyvsp[-1].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3665 "y.tab.c"
    break;

  case 136: /* statement: Conditional_Statements  */
#line 1467 "../src/rc_parser.y"
                                        {(yyval.str) = (yyvsp[0].str);}
#line 3671 "y.tab.c"
    break;

  case 137: /* statement: Loop_Statement  */
#line 1468 "../src/rc_parser.y"
                                        {(yyval.str) = (yyvsp[0].str);}
#line 3677 "y.tab.c"
    break;

  case 138: /* statement: BREAK SEMICOLON  */
#line 1469 "../src/rc_parser.y"
                                        { 
                                            char buffer[256]; 
                                            snprintf(buffer, sizeof(buffer), "break");
                                            (yyval.str) = strdup(buffer);
                                        }
#line 3687 "y.tab.c"
    break;

  case 139: /* statement: CONTINUE SEMICOLON  */
#line 1474 "../src/rc_parser.y"
                                        { 
                                            char buffer[256]; 
                                            snprintf(buffer, sizeof(buffer), "continue");
                                            (yyval.str) = strdup(buffer);
                                        }
#line 3697 "y.tab.c"
    break;

  case 140: /* statement: function_call_statement  */
#line 1479 "../src/rc_parser.y"
                                        {(yyval.str) = (yyvsp[0].str);}
#line 3703 "y.tab.c"
    break;

  case 141: /* statement: Function_Assignment_Statement  */
#line 1480 "../src/rc_parser.y"
                                        {(yyval.str) = (yyvsp[0].str);}
#line 3709 "y.tab.c"
    break;

  case 142: /* Function_Assignment_Statement: IDENTIFIER '=' expressions  */
#line 1485 "../src/rc_parser.y"
                                                { 
                                                    char buffer[256]; 
                                                    snprintf(buffer, sizeof(buffer), "%s = %s", (yyvsp[-2].str) ,(yyvsp[0].str));
                                                    (yyval.str) = strdup(buffer);
                                                }
#line 3719 "y.tab.c"
    break;

  case 143: /* Function_Assignment_Statement: dataframe_list '=' function_call_statement  */
#line 1490 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s = %s", (yyvsp[-2].str),(yyvsp[0].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3729 "y.tab.c"
    break;

  case 144: /* predicate_list: predicate  */
#line 1498 "../src/rc_parser.y"
              { (yyval.str) = strdup((yyvsp[0].str));}
#line 3735 "y.tab.c"
    break;

  case 145: /* predicate_list: predicate_list logical_operators predicate  */
#line 1499 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s %s %s", (yyvsp[-2].str),(yyvsp[-1].str), (yyvsp[0].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3745 "y.tab.c"
    break;

  case 146: /* predicate_list: predicate_list comparison_operators predicate  */
#line 1504 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s %s %s", (yyvsp[-2].str),(yyvsp[-1].str), (yyvsp[0].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3755 "y.tab.c"
    break;

  case 147: /* predicate: expressions comparison_operators expressions  */
#line 1512 "../src/rc_parser.y"
                                                 { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s %s %s", (yyvsp[-2].str),(yyvsp[-1].str), (yyvsp[0].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3765 "y.tab.c"
    break;

  case 148: /* predicate: expressions logical_operators expressions  */
#line 1517 "../src/rc_parser.y"
                                                { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s %s %s", (yyvsp[-2].str),(yyvsp[-1].str), (yyvsp[0].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3775 "y.tab.c"
    break;

  case 149: /* predicate: NOT_OPERATOR expressions  */
#line 1522 "../src/rc_parser.y"
                               { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s %s", (yyvsp[-1].str),(yyvsp[0].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3785 "y.tab.c"
    break;

  case 150: /* logical_operators: AND_OPERATOR  */
#line 1530 "../src/rc_parser.y"
                    { (yyval.str) = strdup(" and ");}
#line 3791 "y.tab.c"
    break;

  case 151: /* logical_operators: OR_OPERATOR  */
#line 1531 "../src/rc_parser.y"
                  { (yyval.str) = strdup(" or ");}
#line 3797 "y.tab.c"
    break;

  case 152: /* comparison_operators: '<'  */
#line 1535 "../src/rc_parser.y"
        {(yyval.str) = strdup("<");}
#line 3803 "y.tab.c"
    break;

  case 153: /* comparison_operators: '>'  */
#line 1536 "../src/rc_parser.y"
            {(yyval.str) = strdup(">");}
#line 3809 "y.tab.c"
    break;

  case 154: /* comparison_operators: LE_OPERATOR  */
#line 1537 "../src/rc_parser.y"
                    {(yyval.str) = strdup(" <= ");}
#line 3815 "y.tab.c"
    break;

  case 155: /* comparison_operators: GE_OPERATOR  */
#line 1538 "../src/rc_parser.y"
                    {(yyval.str) = strdup(" >= ");}
#line 3821 "y.tab.c"
    break;

  case 156: /* comparison_operators: NE_OPERATOR  */
#line 1539 "../src/rc_parser.y"
                    {(yyval.str) = strdup(" != ");}
#line 3827 "y.tab.c"
    break;

  case 157: /* comparison_operators: DEQ_OPERATOR  */
#line 1540 "../src/rc_parser.y"
                    {(yyval.str) = strdup(" == ");}
#line 3833 "y.tab.c"
    break;

  case 158: /* how_clause: HOW_TOKEN '=' how_list  */
#line 1545 "../src/rc_parser.y"
                                { 
                                    char buffer[256]; 
                                    snprintf(buffer, sizeof(buffer), "how = %s", (yyvsp[0].str));
                                    (yyval.str) = strdup(buffer);
                                }
#line 3843 "y.tab.c"
    break;

  case 159: /* how_list: INNER  */
#line 1553 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "'%s'", (yyvsp[0].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3853 "y.tab.c"
    break;

  case 160: /* how_list: RIGHT  */
#line 1558 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "'%s'", (yyvsp[0].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3863 "y.tab.c"
    break;

  case 161: /* how_list: OUTER  */
#line 1563 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "'%s'", (yyvsp[0].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3873 "y.tab.c"
    break;

  case 162: /* on_clause: ON_TOKEN '=' SINGLE_QUOTED_STRING  */
#line 1571 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "on = %s", (yyvsp[0].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3883 "y.tab.c"
    break;

  case 163: /* suffixes_clause: SUFFIXES_TOKEN '=' '[' single_quoted_string_list ']'  */
#line 1579 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "suffixes = [%s]", (yyvsp[-1].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3893 "y.tab.c"
    break;

  case 164: /* Conditional_Statements: Conditional_Statements_1  */
#line 1587 "../src/rc_parser.y"
                             { (yyval.str) = strdup((yyvsp[0].str));}
#line 3899 "y.tab.c"
    break;

  case 165: /* Conditional_Statements: Conditional_Statements_2  */
#line 1588 "../src/rc_parser.y"
                               { (yyval.str) = strdup((yyvsp[0].str));}
#line 3905 "y.tab.c"
    break;

  case 166: /* Conditional_Statements: Conditional_Statements_3  */
#line 1589 "../src/rc_parser.y"
                               { (yyval.str) = strdup((yyvsp[0].str));}
#line 3911 "y.tab.c"
    break;

  case 167: /* Conditional_Statements: Conditional_Statements_4  */
#line 1590 "../src/rc_parser.y"
                               { (yyval.str) = strdup((yyvsp[0].str));}
#line 3917 "y.tab.c"
    break;

  case 168: /* Conditional_Statements_1: IF '(' predicate_list ')' '{' conditional_body '}' else_if_loop ELSE '{' conditional_body '}'  */
#line 1597 "../src/rc_parser.y"
    {
        indent += 1;
        fprintf(yacc_output, "if(%s):\n%s\n%selse:\n%s", (yyvsp[-9].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-1].str));
        indent -= 1;
    }
#line 3927 "y.tab.c"
    break;

  case 169: /* Conditional_Statements_2: IF '(' predicate_list ')' '{' conditional_body '}' else_if_loop  */
#line 1607 "../src/rc_parser.y"
    {
        indent += 1;
        fprintf(yacc_output, "if(%s):\n%s\n%s", (yyvsp[-5].str), (yyvsp[-2].str), (yyvsp[0].str));
        indent -= 1;
    }
#line 3937 "y.tab.c"
    break;

  case 170: /* Conditional_Statements_3: IF '(' predicate_list ')' '{' conditional_body '}' ELSE '{' conditional_body '}'  */
#line 1617 "../src/rc_parser.y"
    {
        indent += 1;
        fprintf(yacc_output, "if(%s):\n%s\nelse:\n%s", (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-1].str));
        indent -= 1;
    }
#line 3947 "y.tab.c"
    break;

  case 171: /* Conditional_Statements_4: IF '(' predicate_list ')' '{' conditional_body '}'  */
#line 1626 "../src/rc_parser.y"
    {
        indent += 1;
        fprintf(yacc_output, "if(%s):\n%s\n", (yyvsp[-4].str), (yyvsp[-1].str));
        indent -= 1;
    }
#line 3957 "y.tab.c"
    break;

  case 172: /* else_if_loop: ELSEIF '(' predicate_list ')' '{' conditional_body '}'  */
#line 1634 "../src/rc_parser.y"
                                                           {
        indent += 1;
        char buffer[256];
        snprintf(buffer, sizeof(buffer), "elif(%s):\n%s\n", (yyvsp[-4].str), (yyvsp[-1].str));
        (yyval.str) = strdup(buffer);
        indent -= 1;
    }
#line 3969 "y.tab.c"
    break;

  case 173: /* else_if_loop: else_if_loop ELSEIF '(' predicate_list ')' '{' conditional_body '}'  */
#line 1642 "../src/rc_parser.y"
    { 
        char buffer[256]; 
        snprintf(buffer, sizeof(buffer), "%s\nelif(%s):\n%s\n", (yyvsp[-7].str), (yyvsp[-4].str), (yyvsp[-1].str));
        (yyval.str) = strdup(buffer);
    }
#line 3979 "y.tab.c"
    break;


#line 3983 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1653 "../src/rc_parser.y"


void yyerror(const char *s) {
    fprintf(stderr, "Error at line %d: %s\n", yylineno, s);
}

int yywrap() {
    return 1;
}

int main(int argc, char **argv) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return EXIT_FAILURE;
    }

    yyin = fopen(argv[1], "r");
    if (!yyin) {
        fprintf(stderr, "Error: Unable to open input file: %s\n", argv[1]);
        return EXIT_FAILURE;
    }

    yacc_output = fopen("../outputs/yacc_output.py", "w");
    fprintf(yacc_output, "import pandas as pd \nimport numpy as np \n \n");
    if(!yacc_output){
        perror("Error: Unable to open yacc_output.txt");
        fprintf(stderr, "Error: Unable to open yacc_output.txt");
    }
    lex_output = fopen("../outputs/lex_output.txt", "w");
    if(!lex_output){
        perror("Error: Unable to open lex_output.txt");
        fprintf(stderr, "Error: Unable to open lex_output.txt");
    }

    // Call yyparse to parse the input until EOF
    yyparse();
    // Clean up
    fclose(yyin);

    int runStatus = system("python3 ../outputs/yacc_output.py > ../outputs/printed1.cpp");

    // Check if the script executed successfully
    if (runStatus != 0) {
        fprintf(stderr, "Error running the Python script\n");
        return 1; // Exit with an error code
    }

    return 0;
}
