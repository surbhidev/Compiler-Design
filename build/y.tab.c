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
#include "read_sym_chk.h"
void yyerror(const char *s);

#ifdef __cplusplus
extern "C" {
#endif

int yylex();
int yyparse();
int yywrap();
int header_present=0,header=-1;

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

#line 104 "y.tab.c"

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
#line 34 "../src/rc_parser.y"

    int in;
    float flt;
    char *str;
    bool bl;


#line 357 "y.tab.c"

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
  YYSYMBOL_attr_value = 150,               /* attr_value  */
  YYSYMBOL_head_tail_body = 151,           /* head_tail_body  */
  YYSYMBOL_readcsv_body = 152,             /* readcsv_body  */
  YYSYMBOL_single_quoted_string_list = 153, /* single_quoted_string_list  */
  YYSYMBOL_actual_parameters = 154,        /* actual_parameters  */
  YYSYMBOL_grouping = 155,                 /* grouping  */
  YYSYMBOL_operators = 156,                /* operators  */
  YYSYMBOL_Loop_Statement = 157,           /* Loop_Statement  */
  YYSYMBOL_Sub_Loop_Statement = 158,       /* Sub_Loop_Statement  */
  YYSYMBOL_initializtion = 159,            /* initializtion  */
  YYSYMBOL_Identifier_List = 160,          /* Identifier_List  */
  YYSYMBOL_update = 161,                   /* update  */
  YYSYMBOL_loop_body = 162,                /* loop_body  */
  YYSYMBOL_statment_list = 163,            /* statment_list  */
  YYSYMBOL_statement = 164,                /* statement  */
  YYSYMBOL_Function_Assignment_Statement = 165, /* Function_Assignment_Statement  */
  YYSYMBOL_predicate_list = 166,           /* predicate_list  */
  YYSYMBOL_predicate = 167,                /* predicate  */
  YYSYMBOL_logical_operators = 168,        /* logical_operators  */
  YYSYMBOL_comparison_operators = 169,     /* comparison_operators  */
  YYSYMBOL_how_clause = 170,               /* how_clause  */
  YYSYMBOL_how_list = 171,                 /* how_list  */
  YYSYMBOL_on_clause = 172,                /* on_clause  */
  YYSYMBOL_suffixes_clause = 173,          /* suffixes_clause  */
  YYSYMBOL_Conditional_Statements = 174,   /* Conditional_Statements  */
  YYSYMBOL_Conditional_Statements_1 = 175, /* Conditional_Statements_1  */
  YYSYMBOL_Conditional_Statements_2 = 176, /* Conditional_Statements_2  */
  YYSYMBOL_Conditional_Statements_3 = 177, /* Conditional_Statements_3  */
  YYSYMBOL_Conditional_Statements_4 = 178, /* Conditional_Statements_4  */
  YYSYMBOL_else_if_loop = 179,             /* else_if_loop  */
  YYSYMBOL_conditional_body = 180          /* conditional_body  */
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
#define YYLAST   555

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  118
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  179
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  431

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
       0,    84,    84,    85,    89,    90,    91,    92,    93,    94,
      95,    99,   118,   122,   121,   141,   149,   154,   160,   166,
     171,   177,   183,   184,   190,   196,   202,   208,   217,   225,
     228,   234,   238,   242,   245,   249,   252,   258,   262,   268,
     269,   270,   273,   276,   312,   316,   320,   328,   361,   395,
     429,   463,   497,   531,   565,   599,   633,   667,   701,   738,
     748,   784,   819,   875,   906,   936,   969,  1000,  1004,  1062,
    1069,  1078,  1108,  1142,  1151,  1157,  1163,  1168,  1173,  1181,
    1187,  1193,  1201,  1207,  1213,  1219,  1225,  1231,  1240,  1246,
    1253,  1261,  1268,  1276,  1290,  1296,  1301,  1308,  1316,  1322,
    1331,  1332,  1336,  1348,  1355,  1356,  1359,  1362,  1369,  1375,
    1383,  1389,  1397,  1403,  1409,  1416,  1424,  1425,  1435,  1441,
    1450,  1459,  1460,  1461,  1462,  1463,  1464,  1465,  1466,  1467,
    1471,  1481,  1491,  1495,  1500,  1508,  1512,  1516,  1521,  1529,
    1534,  1539,  1540,  1541,  1546,  1551,  1552,  1557,  1562,  1570,
    1571,  1576,  1584,  1589,  1594,  1602,  1603,  1607,  1608,  1609,
    1610,  1611,  1612,  1616,  1625,  1630,  1635,  1643,  1651,  1659,
    1660,  1661,  1662,  1666,  1677,  1687,  1697,  1706,  1713,  1722
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
  "attr_value", "head_tail_body", "readcsv_body",
  "single_quoted_string_list", "actual_parameters", "grouping",
  "operators", "Loop_Statement", "Sub_Loop_Statement", "initializtion",
  "Identifier_List", "update", "loop_body", "statment_list", "statement",
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

#define YYPACT_NINF (-361)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     286,    19,   -80,   -76,   -61,    52,    75,   -11,    50,    71,
     100,   179,  -361,  -361,   148,   226,  -361,  -361,   181,    22,
    -361,  -361,  -361,  -361,  -361,  -361,  -361,   277,   277,   240,
     242,   256,   146,   190,   273,   244,   154,   258,  -361,  -361,
    -361,   233,  -361,    79,   258,  -361,   202,  -361,   277,     2,
      67,  -361,  -361,  -361,    67,    -3,   214,   295,   264,  -361,
     277,    57,    46,  -361,   317,  -361,  -361,     2,    67,    -2,
    -361,   223,   258,   224,   231,   235,   237,   239,   241,   243,
     248,   202,   226,  -361,  -361,    32,   345,   303,  -361,  -361,
    -361,  -361,  -361,  -361,  -361,  -361,  -361,   280,  -361,   277,
    -361,    68,   256,    67,  -361,  -361,  -361,  -361,  -361,  -361,
    -361,  -361,   277,   277,   230,   256,   256,  -361,    33,   288,
     273,   177,   251,  -361,    77,   258,   346,   346,   323,   347,
     260,   106,   333,  -361,  -361,   265,   268,   271,   272,   274,
     278,  -361,    87,  -361,   202,  -361,  -361,  -361,  -361,    67,
    -361,  -361,   329,    67,    67,   149,  -361,  -361,   262,   371,
    -361,    67,  -361,   379,   380,   381,   387,   404,  -361,   304,
     305,  -361,   310,   311,   410,   312,   223,  -361,   313,  -361,
     330,   368,   331,   384,   384,   384,   384,   384,   384,   390,
     434,    38,    35,   375,   376,   339,   378,  -361,    40,  -361,
    -361,   149,  -361,   382,  -361,   338,   188,  -361,   396,   436,
     438,   341,    29,   413,   352,  -361,  -361,   115,   416,   349,
     350,   104,   121,   351,  -361,    37,   450,   353,   353,   353,
     353,   353,   353,  -361,   314,   451,   354,  -361,   277,  -361,
    -361,   273,  -361,    79,  -361,  -361,   232,   277,   149,   355,
     394,   188,  -361,   397,   223,   223,   223,   303,  -361,  -361,
     223,   457,   360,   459,   359,  -361,   361,   461,  -361,  -361,
    -361,   463,     3,  -361,   464,   330,  -361,  -361,  -361,  -361,
    -361,  -361,   364,   462,   197,   369,   370,   372,   373,   374,
     377,   383,   385,   386,   388,   389,   391,   392,    67,    78,
    -361,   393,   398,   238,    67,   414,   399,  -361,   188,  -361,
     188,  -361,  -361,  -361,   107,  -361,   462,  -361,   291,   395,
     442,    48,   269,   320,    29,  -361,   263,   400,  -361,  -361,
     474,   476,   477,  -361,  -361,  -361,  -361,  -361,  -361,   402,
     403,   405,   406,   407,   408,   149,  -361,   149,   256,   409,
     412,  -361,  -361,  -361,  -361,   223,  -361,  -361,  -361,  -361,
    -361,   478,   401,   479,  -361,  -361,  -361,  -361,  -361,  -361,
    -361,  -361,   330,   481,   364,  -361,    29,   411,    29,  -361,
    -361,  -361,  -361,  -361,  -361,   415,   417,   198,   149,   256,
    -361,   441,   419,   418,  -361,    29,  -361,   353,   303,   353,
    -361,  -361,   420,   421,   215,  -361,   487,   424,   303,   364,
    -361,   122,  -361,   149,  -361,   425,   423,  -361,   127,  -361,
     353,   426,   149,   303,  -361,  -361,  -361,   427,   131,  -361,
    -361
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     6,     0,    71,     5,     7,     0,     0,
       8,   130,    10,   169,   170,   171,   172,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     3,
       4,     0,     9,     0,     0,    23,    22,    24,     0,     0,
      12,    27,    26,    25,   118,     0,     0,     0,     0,   132,
       0,     0,     0,   149,    31,    11,    44,    43,    39,     0,
      40,   115,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    13,    72,     0,     0,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,     0,    69,     0,
      15,     0,     0,   154,   157,   158,   159,   160,   162,   161,
     155,   156,     0,     0,     0,     0,     0,    29,     0,     0,
       0,     0,     0,    71,     0,     0,   109,   109,     0,     0,
       0,     0,     0,    14,   120,     0,     0,     0,     0,     0,
       0,   116,     0,    17,    16,    18,    21,    20,    19,   119,
     133,   134,     0,   153,   152,     0,   150,   151,     0,     0,
      46,    42,    41,     0,     0,     0,     0,     0,    59,     0,
       0,   108,     0,     0,     0,   103,   115,    64,     0,    87,
      90,     0,     0,    92,    92,    92,    92,    92,    92,     0,
       0,     0,     0,     0,     0,     0,     0,   145,     0,   142,
     179,   136,   137,   146,   141,     0,     0,    30,     0,     0,
       0,     0,     0,     0,     0,    60,    61,     0,     0,     0,
       0,     0,    92,     0,    73,     0,     0,    97,    97,    97,
      97,    97,    97,   117,     0,     0,     0,   135,     0,   143,
     144,     0,   140,     0,   138,   139,   176,     0,     0,     0,
       0,     0,    45,     0,   115,   115,   115,     0,   100,   101,
     115,     0,     0,     0,     0,    98,     0,     0,    62,    63,
      82,     0,     0,    83,     0,    90,    65,    74,    78,    76,
      77,    75,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   147,     0,
     148,     0,     0,   174,    37,     0,     0,    28,     0,    34,
       0,   110,   111,   112,     0,   113,     0,    67,     0,     0,
       0,     0,     0,     0,     0,    89,    92,     0,    93,    91,
       0,     0,     0,    53,    54,    55,    56,    57,    58,     0,
       0,     0,     0,     0,     0,     0,    38,     0,     0,     0,
       0,    36,    32,    35,    33,   115,    70,   164,   165,   166,
     163,     0,     0,     0,   105,   106,   107,   104,   102,    84,
      85,    86,    90,     0,    81,    66,     0,     0,     0,    47,
      48,    49,    50,    51,    52,     0,     0,     0,     0,     0,
     114,     0,     0,     0,    88,     0,    80,    97,     0,    97,
     131,   175,     0,     0,     0,   167,     0,     0,     0,    81,
      95,     0,    94,     0,   173,     0,     0,    68,     0,    79,
      97,     0,     0,     0,    99,    96,   177,     0,     0,   178,
     168
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -361,  -361,   489,  -361,  -361,  -361,     0,   -22,  -361,  -361,
    -221,  -361,  -173,   266,   422,  -361,  -361,   -90,     4,  -361,
      86,  -361,  -361,  -360,  -361,  -265,  -163,   187,  -212,  -361,
    -122,  -361,  -361,   428,  -175,  -255,  -361,   429,  -361,   156,
    -158,  -361,  -361,  -361,  -206,  -361,   316,  -178,   -99,   205,
     443,   445,  -361,  -361,  -361,  -361,   166,  -361,  -361,  -361,
    -361,  -361,  -284
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    11,    12,    13,    14,   133,    49,    61,    16,   118,
     249,   305,   196,    69,    70,   251,    17,    51,    52,   262,
     198,   182,   282,   327,   180,   223,   227,   329,   285,   175,
     260,   219,   368,   172,   122,   142,    55,    53,    97,   199,
      21,    58,    59,   236,   200,   201,   202,   203,    62,    63,
     115,   116,   264,   360,   362,   407,   204,    23,    24,    25,
      26,   303,   205
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      15,   220,   314,   152,    18,    50,    54,   146,    86,   323,
     325,    15,    68,   237,   396,    18,   286,   287,   288,   289,
     290,   228,   229,   230,   231,   232,    85,    29,   253,    27,
     309,    30,    43,   250,    67,    88,    89,    73,   103,    90,
      91,    92,   306,    82,    84,   238,    31,    83,   252,   419,
     243,   277,   278,   235,     2,   279,   280,   104,   105,   275,
      88,    89,   364,   386,    90,    91,    92,    32,   104,   105,
      88,    89,   123,   253,    90,    91,    92,   149,   250,   311,
     312,   313,   150,   258,   259,   315,    19,   353,   281,   354,
     153,   154,    33,   252,    81,     2,    34,    19,   161,   365,
     366,   147,   258,   259,   403,    98,   119,   394,    99,   120,
     106,   107,   108,   109,    87,    87,   110,   111,   270,   151,
       2,   106,   107,   108,   109,   170,    28,   110,   111,   421,
     253,   273,   253,    44,   178,   250,   271,   250,   427,   385,
     134,   158,    28,   411,   159,   179,    93,    94,    95,    96,
     252,    44,   252,   418,   114,    15,    20,    35,   124,   197,
       8,   274,   226,   374,   192,     2,    22,    20,   428,   265,
     266,    93,    94,    95,    96,     9,    10,    22,    36,    38,
     390,    93,    94,    95,    96,   410,   346,   412,    44,   120,
     169,   123,     3,     4,     1,     2,   193,   194,   189,   367,
     190,    15,   372,   235,     2,   197,   123,    37,   425,   104,
     105,   163,   164,   165,   166,   167,   298,    40,   189,    68,
     355,   272,     3,     4,   330,   304,   104,   105,   195,     5,
       8,     3,    41,   189,   331,   420,     6,   247,   189,   332,
     424,    67,   189,    82,   430,     9,    10,   300,    15,   387,
      42,   123,   197,    64,   397,    56,   399,    57,     7,    65,
       8,    71,   106,   107,   108,   109,    72,   195,   110,   111,
      45,    46,     2,   409,     2,     9,    10,   301,   302,   106,
     107,   108,   109,   349,   350,   110,   111,    45,    46,     2,
     404,    45,    46,     2,   143,   144,     2,   248,   369,   370,
     371,     1,     2,   373,   226,   101,   402,    47,   123,    28,
     123,   357,    60,   358,   359,    74,    75,    76,    77,    78,
     156,   157,   100,   415,    47,    66,    79,    80,    47,     3,
       4,   145,   117,   102,   121,   125,     5,     8,   126,   155,
     104,   105,   127,     6,   128,    15,   129,    15,   130,   197,
     131,   197,     9,    10,     8,   132,   141,   160,     8,   168,
     171,     8,   174,    48,   176,     7,   181,     8,   177,     9,
      10,   206,   183,     9,    10,   184,     9,    10,   185,   186,
      48,   187,     9,    10,    48,   188,   207,    48,    15,   208,
     209,   210,   197,   106,   107,   108,   109,   211,   191,   110,
     111,   291,   292,   293,   294,   295,   296,   135,   136,   137,
     138,   139,   140,    15,   212,   213,   214,   197,   215,   216,
     217,   224,    15,   218,   221,   226,   197,    74,    75,    76,
      77,    78,   135,   136,   137,   138,   139,   140,    79,    80,
     234,   222,   225,   233,   239,   240,   241,   242,   246,   254,
     255,   245,   256,   257,   261,   263,   267,   268,   269,   276,
     283,   238,   297,   308,   284,   307,   310,   316,   317,   318,
     319,   321,   320,   322,   324,   326,   328,   333,   334,   363,
     335,   336,   337,   351,   376,   338,   377,   378,   391,   393,
     339,   395,   340,   341,   405,   342,   343,   416,   344,   361,
      39,   345,   347,   356,   112,   348,   113,   299,   375,   352,
     379,   380,   392,   381,   382,   383,   384,   244,   388,   389,
       0,     0,     0,   398,   406,   400,   148,   401,     0,   413,
     408,   414,   417,     0,   422,   423,   426,   429,     0,     0,
       0,     0,   162,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   173
};

static const yytype_int16 yycheck[] =
{
       0,   176,   257,   102,     0,    27,    28,    97,     6,     6,
     275,    11,    34,   191,   374,    11,   228,   229,   230,   231,
     232,   184,   185,   186,   187,   188,    48,   107,   206,    10,
     251,   107,    10,   206,    34,     3,     4,    37,    60,     7,
       8,     9,   248,    43,    44,    10,   107,    43,   206,   409,
      10,    14,    15,    15,    16,    18,    19,    11,    12,   222,
       3,     4,    14,   347,     7,     8,     9,    15,    11,    12,
       3,     4,    72,   251,     7,     8,     9,    99,   251,   254,
     255,   256,    14,    54,    55,   260,     0,   308,    51,   310,
     112,   113,    17,   251,    15,    16,   107,    11,   120,    51,
      52,    97,    54,    55,   388,   108,   108,   372,   111,   111,
      64,    65,    66,    67,   112,   112,    70,    71,    14,    51,
      16,    64,    65,    66,    67,   125,   107,    70,    71,   413,
     308,   221,   310,   111,    28,   308,    32,   310,   422,   345,
     108,   108,   107,   398,   111,    39,   114,   115,   116,   117,
     308,   111,   310,   408,   108,   155,     0,   107,    72,   155,
      81,    40,    41,   326,    15,    16,     0,    11,   423,    54,
      55,   114,   115,   116,   117,    96,    97,    11,   107,     0,
     355,   114,   115,   116,   117,   397,   108,   399,   111,   111,
     113,   191,    43,    44,    15,    16,    47,    48,   111,   321,
     113,   201,   324,    15,    16,   201,   206,   107,   420,    11,
      12,    34,    35,    36,    37,    38,   238,    69,   111,   241,
     113,   221,    43,    44,    27,   247,    11,    12,    79,    50,
      81,    43,     6,   111,    37,   113,    57,    49,   111,    42,
     113,   241,   111,   243,   113,    96,    97,   243,   248,   348,
      69,   251,   248,   107,   376,    15,   378,    15,    79,    69,
      81,    17,    64,    65,    66,    67,   112,    79,    70,    71,
      14,    15,    16,   395,    16,    96,    97,    45,    46,    64,
      65,    66,    67,    45,    46,    70,    71,    14,    15,    16,
     389,    14,    15,    16,    14,    15,    16,   109,    29,    30,
      31,    15,    16,    40,    41,    10,   108,    51,   308,   107,
     310,    20,    56,    22,    23,    82,    83,    84,    85,    86,
     115,   116,   108,   108,    51,    52,    93,    94,    51,    43,
      44,    51,    15,    69,   111,   111,    50,    81,   107,   109,
      11,    12,   107,    57,   107,   345,   107,   347,   107,   345,
     107,   347,    96,    97,    81,   107,    53,    69,    81,   108,
      14,    81,    39,   107,    17,    79,    33,    81,   108,    96,
      97,   109,   107,    96,    97,   107,    96,    97,   107,   107,
     107,   107,    96,    97,   107,   107,    15,   107,   388,    10,
      10,    10,   388,    64,    65,    66,    67,    10,    69,    70,
      71,    87,    88,    89,    90,    91,    92,    87,    88,    89,
      90,    91,    92,   413,    10,   111,   111,   413,   108,   108,
      10,    53,   422,   111,   111,    41,   422,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
       6,   111,   111,    53,    69,    69,   107,    69,   110,    53,
      14,    69,    14,   112,    41,   103,    40,   108,   108,   108,
      10,    10,   108,    69,   111,   110,    69,    10,   108,    10,
     111,    10,   111,    10,    10,   111,    14,   108,   108,    37,
     108,   108,   108,    69,    10,   108,    10,    10,    10,    10,
     107,    10,   107,   107,    53,   107,   107,    10,   107,   104,
      11,   109,   109,   316,    61,   107,    61,   241,   108,   110,
     108,   108,   111,   108,   108,   108,   108,   201,   109,   107,
      -1,    -1,    -1,   112,   105,   110,    97,   110,    -1,   109,
     112,   110,   108,    -1,   109,   112,   110,   110,    -1,    -1,
      -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   127
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    16,    43,    44,    50,    57,    79,    81,    96,
      97,   119,   120,   121,   122,   124,   126,   134,   136,   138,
     157,   158,   174,   175,   176,   177,   178,    10,   107,   107,
     107,   107,    15,    17,   107,   107,   107,   107,     0,   120,
      69,     6,    69,    10,   111,    14,    15,    51,   107,   124,
     125,   135,   136,   155,   125,   154,    15,    15,   159,   160,
      56,   125,   166,   167,   107,    69,    52,   124,   125,   131,
     132,    17,   112,   124,    82,    83,    84,    85,    86,    93,
      94,    15,   124,   136,   124,   125,     6,   112,     3,     4,
       7,     8,     9,   114,   115,   116,   117,   156,   108,   111,
     108,    10,    69,   125,    11,    12,    64,    65,    66,    67,
      70,    71,   168,   169,   108,   168,   169,    15,   127,   108,
     111,   111,   152,   124,   138,   111,   107,   107,   107,   107,
     107,   107,   107,   123,   108,    87,    88,    89,    90,    91,
      92,    53,   153,    14,    15,    51,   135,   136,   155,   125,
      14,    51,   166,   125,   125,   109,   167,   167,   108,   111,
      69,   125,   132,    34,    35,    36,    37,    38,   108,   113,
     124,    14,   151,   151,    39,   147,    17,   108,    28,    39,
     142,    33,   139,   107,   107,   107,   107,   107,   107,   111,
     113,    69,    15,    47,    48,    79,   130,   136,   138,   157,
     162,   163,   164,   165,   174,   180,   109,    15,    10,    10,
      10,    10,    10,   111,   111,   108,   108,    10,   111,   149,
     152,   111,   111,   143,    53,   111,    41,   144,   144,   144,
     144,   144,   144,    53,     6,    15,   161,   165,    10,    69,
      69,   107,    69,    10,   164,    69,   110,    49,   109,   128,
     130,   133,   158,   165,    53,    14,    14,   112,    54,    55,
     148,    41,   137,   103,   170,    54,    55,    40,   108,   108,
      14,    32,   124,   135,    40,   144,   108,    14,    15,    18,
      19,    51,   140,    10,   111,   146,   146,   146,   146,   146,
     146,    87,    88,    89,    90,    91,    92,   108,   125,   131,
     136,    45,    46,   179,   125,   129,   162,   110,    69,   128,
      69,   152,   152,   152,   153,   152,    10,   108,    10,   111,
     111,    10,    10,     6,    10,   143,   111,   141,    14,   145,
      27,    37,    42,   108,   108,   108,   108,   108,   108,   107,
     107,   107,   107,   107,   107,   109,   108,   109,   107,    45,
      46,    69,   110,   128,   128,   113,   145,    20,    22,    23,
     171,   104,   172,    37,    14,    51,    52,   148,   150,    29,
      30,    31,   148,    40,   144,   108,    10,    10,    10,   108,
     108,   108,   108,   108,   108,   162,   180,   166,   109,   107,
     152,    10,   111,    10,   143,    10,   141,   148,   112,   148,
     110,   110,   108,   180,   166,    53,   105,   173,   112,   148,
     146,   153,   146,   109,   110,   108,    10,   108,   153,   141,
     113,   180,   109,   112,   113,   146,   110,   180,   153,   110,
     113
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   118,   119,   119,   120,   120,   120,   120,   120,   120,
     120,   121,   122,   123,   122,   124,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   126,   127,
     127,   127,   128,   128,   128,   128,   128,   129,   130,   131,
     131,   131,   131,   131,   132,   133,   134,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     137,   138,   138,   139,   140,   140,   140,   140,   140,   141,
     141,   141,   142,   142,   142,   142,   142,   142,   143,   143,
     143,   144,   144,   145,   146,   146,   146,   146,   147,   147,
     148,   148,   149,   149,   150,   150,   150,   150,   151,   151,
     152,   152,   152,   152,   152,   152,   153,   153,   154,   154,
     155,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     157,   158,   159,   160,   160,   161,   162,   163,   163,   164,
     164,   164,   164,   164,   164,   164,   164,   165,   165,   166,
     166,   166,   167,   167,   167,   168,   168,   169,   169,   169,
     169,   169,   169,   170,   171,   171,   171,   172,   173,   174,
     174,   174,   174,   175,   176,   177,   178,   179,   179,   180
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     1,     1,     1,     2,
       1,     3,     3,     0,     4,     4,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     8,     1,
       3,     0,     3,     3,     2,     3,     3,     1,     4,     1,
       1,     3,     3,     1,     1,     1,     5,     8,     8,     8,
       8,     8,     8,     7,     7,     7,     7,     7,     7,     5,
       6,     6,     7,     7,     5,     7,     9,     8,    12,     4,
       3,     1,     3,     2,     1,     1,     1,     1,     1,     5,
       3,     0,     3,     3,     5,     5,     5,     1,     5,     3,
       0,     3,     0,     1,     5,     5,     7,     0,     3,     9,
       1,     1,     4,     0,     1,     1,     1,     1,     1,     0,
       5,     5,     5,     5,     7,     0,     1,     3,     1,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,    11,     1,     3,     3,     1,     1,     1,     2,     2,
       2,     1,     1,     2,     2,     1,     1,     3,     3,     1,
       3,     3,     3,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     3,     5,     1,
       1,     1,     1,    12,     8,    11,     7,     7,     8,     1
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
#line 89 "../src/rc_parser.y"
                                   {fprintf(yacc_output,"\n");}
#line 1853 "y.tab.c"
    break;

  case 5: /* declaration_statement: Function_Declaration  */
#line 90 "../src/rc_parser.y"
                           {fprintf(yacc_output,"\n");}
#line 1859 "y.tab.c"
    break;

  case 6: /* declaration_statement: input_statement  */
#line 91 "../src/rc_parser.y"
                      {fprintf(yacc_output,"\n");}
#line 1865 "y.tab.c"
    break;

  case 7: /* declaration_statement: Print_Statement  */
#line 92 "../src/rc_parser.y"
                      {fprintf(yacc_output,"\n");}
#line 1871 "y.tab.c"
    break;

  case 8: /* declaration_statement: Loop_Statement  */
#line 93 "../src/rc_parser.y"
                     {fprintf(yacc_output,"%s\n", (yyvsp[0].str));}
#line 1877 "y.tab.c"
    break;

  case 9: /* declaration_statement: function_call_statement SEMICOLON  */
#line 94 "../src/rc_parser.y"
                                        {fprintf(yacc_output,"\n");}
#line 1883 "y.tab.c"
    break;

  case 10: /* declaration_statement: Conditional_Statements  */
#line 95 "../src/rc_parser.y"
                             {fprintf(yacc_output,"\n");}
#line 1889 "y.tab.c"
    break;

  case 11: /* input_statement: INPUT CSVFILE SEMICOLON  */
#line 100 "../src/rc_parser.y"
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
#line 1909 "y.tab.c"
    break;

  case 12: /* assignment_statement: IDENTIFIER '=' expressions  */
#line 118 "../src/rc_parser.y"
                              {
        fprintf(yacc_output,"%s = %s",(yyvsp[-2].str),(yyvsp[0].str));
    }
#line 1917 "y.tab.c"
    break;

  case 13: /* $@1: %empty  */
#line 122 "../src/rc_parser.y"
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
#line 1935 "y.tab.c"
    break;

  case 14: /* assignment_statement: dataframe_list '=' function_call_statement $@1  */
#line 135 "../src/rc_parser.y"
                                                            {
                                                                fprintf(yacc_output, "%s = %s", (yyvsp[-3].str), (yyvsp[-1].str));
                                                            }
#line 1943 "y.tab.c"
    break;

  case 15: /* dataframe: DATAFRAME '(' IDENTIFIER ')'  */
#line 141 "../src/rc_parser.y"
                                                            {
                                                                char buffer[256];
                                                                snprintf(buffer, sizeof(buffer), "%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 1953 "y.tab.c"
    break;

  case 16: /* expressions: expressions operators IDENTIFIER  */
#line 149 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s%s%s", (yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 1963 "y.tab.c"
    break;

  case 17: /* expressions: expressions operators INTNUM  */
#line 155 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s%s%d", (yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].in));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 1973 "y.tab.c"
    break;

  case 18: /* expressions: expressions operators FLOATNUM  */
#line 161 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s%s%f", (yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].flt));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 1983 "y.tab.c"
    break;

  case 19: /* expressions: expressions operators grouping  */
#line 166 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s%s%s", (yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 1993 "y.tab.c"
    break;

  case 20: /* expressions: expressions operators function_call_statement  */
#line 172 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s%s%s", (yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 2003 "y.tab.c"
    break;

  case 21: /* expressions: expressions operators aggregate_function_calls  */
#line 178 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s%s%s", (yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 2013 "y.tab.c"
    break;

  case 22: /* expressions: IDENTIFIER  */
#line 183 "../src/rc_parser.y"
                                                                            {(yyval.str)=(yyvsp[0].str);}
#line 2019 "y.tab.c"
    break;

  case 23: /* expressions: INTNUM  */
#line 185 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%d",(yyvsp[0].in));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 2029 "y.tab.c"
    break;

  case 24: /* expressions: FLOATNUM  */
#line 191 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%f",(yyvsp[0].flt));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 2039 "y.tab.c"
    break;

  case 25: /* expressions: grouping  */
#line 197 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s",(yyvsp[0].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 2049 "y.tab.c"
    break;

  case 26: /* expressions: function_call_statement  */
#line 203 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s",(yyvsp[0].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 2059 "y.tab.c"
    break;

  case 27: /* expressions: aggregate_function_calls  */
#line 209 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s",(yyvsp[0].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 2069 "y.tab.c"
    break;

  case 28: /* Function_Declaration: FUNC IDENTIFIER '(' argument_list ')' '{' function_body '}'  */
#line 219 "../src/rc_parser.y"
    {
        fprintf(yacc_output,"def %s(%s):\n\t%s",(yyvsp[-6].str),(yyvsp[-4].str),(yyvsp[-1].str));
    }
#line 2077 "y.tab.c"
    break;

  case 29: /* argument_list: IDENTIFIER  */
#line 225 "../src/rc_parser.y"
                                                    {
                                                        (yyval.str) = (yyvsp[0].str);
                                                    }
#line 2085 "y.tab.c"
    break;

  case 30: /* argument_list: argument_list ',' IDENTIFIER  */
#line 229 "../src/rc_parser.y"
                                                    { 
                                                        char buffer[256]; 
                                                        snprintf(buffer, sizeof(buffer), "%s,%s",(yyvsp[-2].str),(yyvsp[0].str));
                                                        (yyval.str) = strdup(buffer);
                                                    }
#line 2095 "y.tab.c"
    break;

  case 31: /* argument_list: %empty  */
#line 234 "../src/rc_parser.y"
      {(yyval.str) = strdup("");}
#line 2101 "y.tab.c"
    break;

  case 32: /* function_body: '{' loop_body '}'  */
#line 239 "../src/rc_parser.y"
                                                    {
                                                        (yyval.str) = (yyvsp[-1].str);
                                                    }
#line 2109 "y.tab.c"
    break;

  case 33: /* function_body: Function_Assignment_Statement SEMICOLON function_body  */
#line 242 "../src/rc_parser.y"
                                                             {char buffer[256]; 
                                        snprintf(buffer, sizeof(buffer), "%s\n%s", (yyvsp[-2].str),(yyvsp[0].str));
                                        (yyval.str) = strdup(buffer);}
#line 2117 "y.tab.c"
    break;

  case 34: /* function_body: Function_Loop_Statement function_body  */
#line 245 "../src/rc_parser.y"
                                            {char buffer[256]; 
                                        snprintf(buffer, sizeof(buffer), "%s\n%s", (yyvsp[-1].str),(yyvsp[0].str));
                                        (yyval.str) = strdup(buffer);}
#line 2125 "y.tab.c"
    break;

  case 35: /* function_body: Function_Print_Statement SEMICOLON function_body  */
#line 249 "../src/rc_parser.y"
                                                        {char buffer[256]; 
                                        snprintf(buffer, sizeof(buffer), "%s\n%s", (yyvsp[-2].str),(yyvsp[0].str));
                                        (yyval.str) = strdup(buffer);}
#line 2133 "y.tab.c"
    break;

  case 36: /* function_body: RTRN return_statement SEMICOLON  */
#line 252 "../src/rc_parser.y"
                                       {char buffer[256]; 
                                        snprintf(buffer, sizeof(buffer), "return %s\n", (yyvsp[-1].str));
                                        (yyval.str) = strdup(buffer);}
#line 2141 "y.tab.c"
    break;

  case 37: /* return_statement: expressions  */
#line 258 "../src/rc_parser.y"
                {(yyval.str) = (yyvsp[0].str);}
#line 2147 "y.tab.c"
    break;

  case 38: /* Function_Print_Statement: PRINT '(' print_expressions ')'  */
#line 262 "../src/rc_parser.y"
                                    {char buffer[256]; 
                                        snprintf(buffer, sizeof(buffer), "print(%s)\n", (yyvsp[-1].str));
                                        (yyval.str) = strdup(buffer);}
#line 2155 "y.tab.c"
    break;

  case 39: /* print_expressions: expressions  */
#line 268 "../src/rc_parser.y"
                {(yyval.str) = (yyvsp[0].str);}
#line 2161 "y.tab.c"
    break;

  case 40: /* print_expressions: strings_list  */
#line 269 "../src/rc_parser.y"
                   {(yyval.str) = (yyvsp[0].str);}
#line 2167 "y.tab.c"
    break;

  case 41: /* print_expressions: print_expressions ',' strings_list  */
#line 270 "../src/rc_parser.y"
                                         {char buffer[256]; 
                                        snprintf(buffer, sizeof(buffer), "%s,%s", (yyvsp[-2].str),(yyvsp[0].str));
                                        (yyval.str) = strdup(buffer);}
#line 2175 "y.tab.c"
    break;

  case 42: /* print_expressions: print_expressions ',' expressions  */
#line 273 "../src/rc_parser.y"
                                        {char buffer[256]; 
                                        snprintf(buffer, sizeof(buffer), "%s,%s", (yyvsp[-2].str),(yyvsp[0].str));
                                        (yyval.str) = strdup(buffer);}
#line 2183 "y.tab.c"
    break;

  case 43: /* print_expressions: dataframe  */
#line 277 "../src/rc_parser.y"
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

                                                                                    char buffer[256]; 
                                                                                    snprintf(buffer, sizeof(buffer), "%s", identifier);
                                                                                    (yyval.str) = strdup(buffer);
                                                                                    
                                                                        }
#line 2220 "y.tab.c"
    break;

  case 44: /* strings_list: STRING  */
#line 312 "../src/rc_parser.y"
            {(yyval.str) = (yyvsp[0].str);}
#line 2226 "y.tab.c"
    break;

  case 45: /* Function_Loop_Statement: Sub_Loop_Statement  */
#line 316 "../src/rc_parser.y"
                       {(yyval.str) = (yyvsp[0].str);}
#line 2232 "y.tab.c"
    break;

  case 46: /* Print_Statement: PRINT '(' print_expressions ')' SEMICOLON  */
#line 320 "../src/rc_parser.y"
                                              { fprintf(yacc_output, "print(%s)", (yyvsp[-2].str));}
#line 2238 "y.tab.c"
    break;

  case 47: /* aggregate_function_calls: dataframe '[' single_quoted_string_list ']' '.' MEANFUNC '(' ')'  */
#line 329 "../src/rc_parser.y"
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
#line 2275 "y.tab.c"
    break;

  case 48: /* aggregate_function_calls: dataframe '[' single_quoted_string_list ']' '.' MODEFUNC '(' ')'  */
#line 362 "../src/rc_parser.y"
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
#line 2313 "y.tab.c"
    break;

  case 49: /* aggregate_function_calls: dataframe '[' single_quoted_string_list ']' '.' MEDIANFUNC '(' ')'  */
#line 396 "../src/rc_parser.y"
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
#line 2351 "y.tab.c"
    break;

  case 50: /* aggregate_function_calls: dataframe '[' single_quoted_string_list ']' '.' SUMFUNC '(' ')'  */
#line 430 "../src/rc_parser.y"
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
#line 2389 "y.tab.c"
    break;

  case 51: /* aggregate_function_calls: dataframe '[' single_quoted_string_list ']' '.' MINFUNC '(' ')'  */
#line 464 "../src/rc_parser.y"
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
#line 2427 "y.tab.c"
    break;

  case 52: /* aggregate_function_calls: dataframe '[' single_quoted_string_list ']' '.' MAXFUNC '(' ')'  */
#line 498 "../src/rc_parser.y"
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
#line 2465 "y.tab.c"
    break;

  case 53: /* aggregate_function_calls: dataframe '.' MEANFUNC '(' mean_body mean_numerical ')'  */
#line 532 "../src/rc_parser.y"
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
#line 2503 "y.tab.c"
    break;

  case 54: /* aggregate_function_calls: dataframe '.' MODEFUNC '(' mean_body mean_numerical ')'  */
#line 566 "../src/rc_parser.y"
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
#line 2541 "y.tab.c"
    break;

  case 55: /* aggregate_function_calls: dataframe '.' MEDIANFUNC '(' mean_body mean_numerical ')'  */
#line 600 "../src/rc_parser.y"
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
#line 2579 "y.tab.c"
    break;

  case 56: /* aggregate_function_calls: dataframe '.' SUMFUNC '(' mean_body mean_numerical ')'  */
#line 634 "../src/rc_parser.y"
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
#line 2617 "y.tab.c"
    break;

  case 57: /* aggregate_function_calls: dataframe '.' MINFUNC '(' mean_body mean_numerical ')'  */
#line 668 "../src/rc_parser.y"
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
#line 2655 "y.tab.c"
    break;

  case 58: /* aggregate_function_calls: dataframe '.' MAXFUNC '(' mean_body mean_numerical ')'  */
#line 702 "../src/rc_parser.y"
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
#line 2693 "y.tab.c"
    break;

  case 59: /* function_call_statement: READCSVFUNC '(' CSVFILE readcsv_body ')'  */
#line 738 "../src/rc_parser.y"
                                                    {           if(header_present == 1){
                                                                   
                                                                   is_valid_header_row((yyvsp[-2].str),header);
                                               
                                                                 }
                                                                process_csvfile((yyvsp[-2].str));
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "pd.read_csv(%s)\n", (yyvsp[-2].str));
                                                                (yyval.str) = strdup(buffer);
                                                    }
#line 2708 "y.tab.c"
    break;

  case 60: /* function_call_statement: dataframe '.' HEADFUNC '(' head_tail_body ')'  */
#line 749 "../src/rc_parser.y"
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
                                                                                    char buffer[256]; 
                                                                                    snprintf(buffer, sizeof(buffer), "%s.head(%s)", identifier, (yyvsp[-1].str));
                                                                                    (yyval.str) = strdup(buffer);

                                                    }
#line 2748 "y.tab.c"
    break;

  case 61: /* function_call_statement: dataframe '.' TAILFUNC '(' head_tail_body ')'  */
#line 785 "../src/rc_parser.y"
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
                                                                char buffer[256]; 
                                                                                    snprintf(buffer, sizeof(buffer), "%s.tail(%s)", identifier, (yyvsp[-1].str));
                                                                                    (yyval.str) = strdup(buffer);

                                                    }
#line 2787 "y.tab.c"
    break;

  case 62: /* function_call_statement: dataframe '.' RESETINDEXFUNC '(' reset_index_body_drop reset_index_body_implace ')'  */
#line 820 "../src/rc_parser.y"
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
#line 2847 "y.tab.c"
    break;

  case 63: /* function_call_statement: dataframe '.' TOCSVFUNC '(' CSVFILE readcsv_body ')'  */
#line 876 "../src/rc_parser.y"
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
                                                                fprintf(yacc_output, "%s.to_csv(%s %s)\n",identifier, (yyvsp[-2].str),(yyvsp[-1].str));
                                                    }
#line 2882 "y.tab.c"
    break;

  case 64: /* function_call_statement: dataframe '.' DESCRIBEFUNC '(' ')'  */
#line 907 "../src/rc_parser.y"
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
#line 2916 "y.tab.c"
    break;

  case 65: /* function_call_statement: dataframe '.' MISSVALUEFUNC '(' missing_value_body_confirm missing_value_body ')'  */
#line 937 "../src/rc_parser.y"
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
#line 2953 "y.tab.c"
    break;

  case 66: /* function_call_statement: dataframe '.' EXCHANGEVALUEFUNC '(' to_exchange ',' exchange_value exchange_body_optional ')'  */
#line 970 "../src/rc_parser.y"
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
#line 2988 "y.tab.c"
    break;

  case 67: /* function_call_statement: CONCATFUNC '(' '[' dataframe_list ']' ',' concat_body ')'  */
#line 1001 "../src/rc_parser.y"
                                                                            { 
                                                                                fprintf(yacc_output,"pd.concat([%s],%s)", (yyvsp[-4].str),(yyvsp[-1].str));
                                                                            }
#line 2996 "y.tab.c"
    break;

  case 68: /* function_call_statement: MERGEFUNC '(' dataframe ',' dataframe ',' how_clause ',' on_clause ',' suffixes_clause ')'  */
#line 1005 "../src/rc_parser.y"
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
#line 3057 "y.tab.c"
    break;

  case 69: /* function_call_statement: IDENTIFIER '(' actual_parameters ')'  */
#line 1063 "../src/rc_parser.y"
                                                                            { 
                                                                                fprintf(yacc_output, "%s(%s)",(yyvsp[-3].str), (yyvsp[-1].str));
                                                                            }
#line 3065 "y.tab.c"
    break;

  case 70: /* concat_body: AXIS '=' axis_bit  */
#line 1070 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "axis = %d", (yyvsp[0].in));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3075 "y.tab.c"
    break;

  case 71: /* dataframe_list: dataframe  */
#line 1078 "../src/rc_parser.y"
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
#line 3109 "y.tab.c"
    break;

  case 72: /* dataframe_list: dataframe_list ',' dataframe  */
#line 1108 "../src/rc_parser.y"
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
#line 3144 "y.tab.c"
    break;

  case 73: /* to_exchange: REGX SINGLE_QUOTED_STRING  */
#line 1143 "../src/rc_parser.y"
                                                                    { 
                                                                        char buffer[256]; 
                                                                        snprintf(buffer, sizeof(buffer), "to_replace=r%s", (yyvsp[0].str));
                                                                        (yyval.str) = strdup(buffer);
                                                                    }
#line 3154 "y.tab.c"
    break;

  case 74: /* exchange_value: INTNUM  */
#line 1152 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "value = %d", (yyvsp[0].in));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3164 "y.tab.c"
    break;

  case 75: /* exchange_value: FLOATNUM  */
#line 1158 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "value = %f", (yyvsp[0].flt));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3174 "y.tab.c"
    break;

  case 76: /* exchange_value: EXPONENTIAL  */
#line 1163 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "value = %s", (yyvsp[0].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3184 "y.tab.c"
    break;

  case 77: /* exchange_value: PERCENTAGE  */
#line 1168 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "value = %s", (yyvsp[0].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3194 "y.tab.c"
    break;

  case 78: /* exchange_value: IDENTIFIER  */
#line 1173 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "value = '%s'", (yyvsp[0].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3204 "y.tab.c"
    break;

  case 79: /* exchange_body_optional: ',' INPLACE '=' BOOL exchange_body_optional  */
#line 1182 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), ",inplace = %s", (yyvsp[-1].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3214 "y.tab.c"
    break;

  case 80: /* exchange_body_optional: ',' mean_body exchange_body_optional  */
#line 1188 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), ",%s", (yyvsp[-1].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3224 "y.tab.c"
    break;

  case 81: /* exchange_body_optional: %empty  */
#line 1193 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                buffer[0] = '\0';
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3234 "y.tab.c"
    break;

  case 82: /* missing_value_body_confirm: FILL ',' INTNUM  */
#line 1202 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "fillna(value = %d", (yyvsp[0].in));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3244 "y.tab.c"
    break;

  case 83: /* missing_value_body_confirm: FILL ',' aggregate_function_calls  */
#line 1208 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "fillna(value = %s", (yyvsp[0].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3254 "y.tab.c"
    break;

  case 84: /* missing_value_body_confirm: FILL ',' METHOD '=' FFILL  */
#line 1214 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "fillna(method = 'ffill'");
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3264 "y.tab.c"
    break;

  case 85: /* missing_value_body_confirm: FILL ',' METHOD '=' BFILL  */
#line 1220 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "fillna(method = 'bfill'");
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3274 "y.tab.c"
    break;

  case 86: /* missing_value_body_confirm: FILL ',' METHOD '=' INTERPOLATE  */
#line 1226 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "fillna(method = 'interpolate'");
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3284 "y.tab.c"
    break;

  case 87: /* missing_value_body_confirm: DROP  */
#line 1232 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "dropna(");
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3294 "y.tab.c"
    break;

  case 88: /* missing_value_body: ',' INPLACE '=' BOOL missing_value_body  */
#line 1241 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), ",inplace = %s", (yyvsp[-1].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3304 "y.tab.c"
    break;

  case 89: /* missing_value_body: ',' mean_body missing_value_body  */
#line 1247 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), ",%s", (yyvsp[-1].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3314 "y.tab.c"
    break;

  case 90: /* missing_value_body: %empty  */
#line 1253 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                buffer[0] = '\0';
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3324 "y.tab.c"
    break;

  case 91: /* mean_body: AXIS '=' axis_bit  */
#line 1262 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "axis = %d",(yyvsp[0].in));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3334 "y.tab.c"
    break;

  case 92: /* mean_body: %empty  */
#line 1268 "../src/rc_parser.y"
                                                                           { 
                                                                                char buffer[256]; 
                                                                                buffer[0] = '\0';
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3344 "y.tab.c"
    break;

  case 93: /* axis_bit: INTNUM  */
#line 1277 "../src/rc_parser.y"
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
#line 3359 "y.tab.c"
    break;

  case 94: /* mean_numerical: ',' NUMERIC '=' BOOL mean_numerical  */
#line 1291 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), ", numeric_only = %s",(yyvsp[-1].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3369 "y.tab.c"
    break;

  case 95: /* mean_numerical: ',' SKIPNA '=' BOOL mean_numerical  */
#line 1296 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), ", skip_na = %s",(yyvsp[-1].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3379 "y.tab.c"
    break;

  case 96: /* mean_numerical: ',' USECOLS '=' '[' single_quoted_string_list ']' mean_numerical  */
#line 1302 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                buffer[0] = '\0';
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3389 "y.tab.c"
    break;

  case 97: /* mean_numerical: %empty  */
#line 1308 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                buffer[0] = '\0';
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3399 "y.tab.c"
    break;

  case 98: /* reset_index_body_drop: DROP '=' TRUE  */
#line 1317 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "drop = True");
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3409 "y.tab.c"
    break;

  case 99: /* reset_index_body_drop: DROP '=' FALSE ',' USECOLS '=' '[' single_quoted_string_list ']'  */
#line 1323 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "[%s]",(yyvsp[-1].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3419 "y.tab.c"
    break;

  case 100: /* BOOL: TRUE  */
#line 1331 "../src/rc_parser.y"
                { (yyval.str) = (yyvsp[0].str); }
#line 3425 "y.tab.c"
    break;

  case 101: /* BOOL: FALSE  */
#line 1332 "../src/rc_parser.y"
                { (yyval.str) = (yyvsp[0].str); }
#line 3431 "y.tab.c"
    break;

  case 102: /* reset_index_body_implace: ',' INPLACE '=' attr_value  */
#line 1336 "../src/rc_parser.y"
                                                                            {
                                                                                if((strcmp((yyvsp[0].str), "True") == 0) || (strcmp((yyvsp[0].str), "False") == 0)){
                                                                                    char buffer[256]; 
                                                                                    snprintf(buffer, sizeof(buffer), ",inplace = %s",(yyvsp[0].str));
                                                                                    (yyval.str) = strdup(buffer);
                                                                                }
                                                                                else{
                                                                                    printf("TypeError: Inplace argument expects integer value");
                                                                                    exit(EXIT_FAILURE);
                                                                                } 
                                                                            }
#line 3447 "y.tab.c"
    break;

  case 103: /* reset_index_body_implace: %empty  */
#line 1348 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                buffer[0] = '\0';
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3457 "y.tab.c"
    break;

  case 104: /* attr_value: BOOL  */
#line 1355 "../src/rc_parser.y"
                       { (yyval.str) = strdup((yyvsp[0].str) ? "true" : "false"); }
#line 3463 "y.tab.c"
    break;

  case 105: /* attr_value: INTNUM  */
#line 1356 "../src/rc_parser.y"
                       { char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%d", (yyvsp[0].in));
                                                                (yyval.str) = strdup(buffer); }
#line 3471 "y.tab.c"
    break;

  case 106: /* attr_value: FLOATNUM  */
#line 1359 "../src/rc_parser.y"
                       { char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%f", (yyvsp[0].flt));
                                                                (yyval.str) = strdup(buffer);}
#line 3479 "y.tab.c"
    break;

  case 107: /* attr_value: STRING  */
#line 1362 "../src/rc_parser.y"
                       { (yyval.str) = strdup((yyvsp[0].str)); }
#line 3485 "y.tab.c"
    break;

  case 108: /* head_tail_body: INTNUM  */
#line 1369 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%d", (yyvsp[0].in));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3495 "y.tab.c"
    break;

  case 109: /* head_tail_body: %empty  */
#line 1375 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                buffer[0] = '\0';
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3505 "y.tab.c"
    break;

  case 110: /* readcsv_body: ',' SEP '=' SINGLE_QUOTED_STRING readcsv_body  */
#line 1384 "../src/rc_parser.y"
                                                            {   is_valid_delimiter((yyvsp[-1].str));
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), ", sep = %s\n", (yyvsp[-1].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3515 "y.tab.c"
    break;

  case 111: /* readcsv_body: ',' HEADER '=' INTNUM readcsv_body  */
#line 1390 "../src/rc_parser.y"
                                                            {   header_present=1;
                                                                header=(yyvsp[-1].in);
                                                                
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), ", header = %d\n", (yyvsp[-1].in));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3527 "y.tab.c"
    break;

  case 112: /* readcsv_body: ',' INDEX_COL '=' INTNUM readcsv_body  */
#line 1398 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), ", index_col = %d\n", (yyvsp[-1].in));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3537 "y.tab.c"
    break;

  case 113: /* readcsv_body: ',' INDEX '=' BOOL readcsv_body  */
#line 1404 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), ", index = %s\n", (yyvsp[-1].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3547 "y.tab.c"
    break;

  case 114: /* readcsv_body: ',' USECOLS '=' '[' single_quoted_string_list ']' readcsv_body  */
#line 1410 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), ", usecols = [%s]\n", (yyvsp[-2].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3557 "y.tab.c"
    break;

  case 115: /* readcsv_body: %empty  */
#line 1416 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                buffer[0] = '\0';
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3567 "y.tab.c"
    break;

  case 116: /* single_quoted_string_list: SINGLE_QUOTED_STRING  */
#line 1424 "../src/rc_parser.y"
                                                           { (yyval.str) = (yyvsp[0].str); }
#line 3573 "y.tab.c"
    break;

  case 117: /* single_quoted_string_list: single_quoted_string_list ',' SINGLE_QUOTED_STRING  */
#line 1426 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s , %s", (yyvsp[-2].str),(yyvsp[0].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3583 "y.tab.c"
    break;

  case 118: /* actual_parameters: expressions  */
#line 1436 "../src/rc_parser.y"
                                                { 
                                                    char buffer[256]; 
                                                    snprintf(buffer, sizeof(buffer), "%s", (yyvsp[0].str));
                                                    (yyval.str) = strdup(buffer);
                                                }
#line 3593 "y.tab.c"
    break;

  case 119: /* actual_parameters: actual_parameters ',' expressions  */
#line 1442 "../src/rc_parser.y"
                                                { 
                                                    char buffer[256]; 
                                                    snprintf(buffer, sizeof(buffer), "%s,%s", (yyvsp[-2].str),(yyvsp[0].str));
                                                    (yyval.str) = strdup(buffer);
                                                }
#line 3603 "y.tab.c"
    break;

  case 120: /* grouping: '(' expressions ')'  */
#line 1451 "../src/rc_parser.y"
                                                { 
                                                    char buffer[256]; 
                                                    snprintf(buffer, sizeof(buffer), "(%s)", (yyvsp[-1].str));
                                                    (yyval.str) = strdup(buffer);
                                                }
#line 3613 "y.tab.c"
    break;

  case 121: /* operators: '+'  */
#line 1459 "../src/rc_parser.y"
          { (yyval.str) = strdup("+"); }
#line 3619 "y.tab.c"
    break;

  case 122: /* operators: '-'  */
#line 1460 "../src/rc_parser.y"
          { (yyval.str) = strdup("-"); }
#line 3625 "y.tab.c"
    break;

  case 123: /* operators: '*'  */
#line 1461 "../src/rc_parser.y"
          { (yyval.str) = strdup("*"); }
#line 3631 "y.tab.c"
    break;

  case 124: /* operators: '/'  */
#line 1462 "../src/rc_parser.y"
          { (yyval.str) = strdup("/"); }
#line 3637 "y.tab.c"
    break;

  case 125: /* operators: '%'  */
#line 1463 "../src/rc_parser.y"
          { (yyval.str) = strdup("%"); }
#line 3643 "y.tab.c"
    break;

  case 126: /* operators: '&'  */
#line 1464 "../src/rc_parser.y"
          { (yyval.str) = strdup("&"); }
#line 3649 "y.tab.c"
    break;

  case 127: /* operators: '|'  */
#line 1465 "../src/rc_parser.y"
          { (yyval.str) = strdup("|"); }
#line 3655 "y.tab.c"
    break;

  case 128: /* operators: '^'  */
#line 1466 "../src/rc_parser.y"
          { (yyval.str) = strdup("^"); }
#line 3661 "y.tab.c"
    break;

  case 129: /* operators: '~'  */
#line 1467 "../src/rc_parser.y"
          { (yyval.str) = strdup("~"); }
#line 3667 "y.tab.c"
    break;

  case 130: /* Loop_Statement: Sub_Loop_Statement  */
#line 1471 "../src/rc_parser.y"
                                        { 
                                            indent += 1;
                                            char buffer[256]; 
                                            snprintf(buffer, sizeof(buffer), "%s", (yyvsp[0].str));
                                            (yyval.str) = strdup(buffer);
                                           // indent -= 1;
                                        }
#line 3679 "y.tab.c"
    break;

  case 131: /* Sub_Loop_Statement: LOOP '(' initializtion SEMICOLON predicate_list SEMICOLON update ')' '{' loop_body '}'  */
#line 1483 "../src/rc_parser.y"
                    {
                        char buffer[256]; 
                        snprintf(buffer, sizeof(buffer), "%s\nwhile(%s):\n%s\n\t%s", (yyvsp[-8].str), (yyvsp[-6].str), (yyvsp[-1].str), (yyvsp[-4].str));
                        (yyval.str) = strdup(buffer);
                    }
#line 3689 "y.tab.c"
    break;

  case 132: /* initializtion: Identifier_List  */
#line 1491 "../src/rc_parser.y"
                                    { (yyval.str) = strdup((yyvsp[0].str)); }
#line 3695 "y.tab.c"
    break;

  case 133: /* Identifier_List: IDENTIFIER '=' INTNUM  */
#line 1495 "../src/rc_parser.y"
                                    { 
                                        char buffer[256]; 
                                        snprintf(buffer, sizeof(buffer), "%s = %d", (yyvsp[-2].str),(yyvsp[0].in));
                                        (yyval.str) = strdup(buffer);
                                    }
#line 3705 "y.tab.c"
    break;

  case 134: /* Identifier_List: IDENTIFIER '=' FLOATNUM  */
#line 1500 "../src/rc_parser.y"
                                    { 
                                        char buffer[256]; 
                                        snprintf(buffer, sizeof(buffer), "%s = %f", (yyvsp[-2].str),(yyvsp[0].flt));
                                        (yyval.str) = strdup(buffer);
                                    }
#line 3715 "y.tab.c"
    break;

  case 135: /* update: Function_Assignment_Statement  */
#line 1508 "../src/rc_parser.y"
                                  { (yyval.str) = strdup((yyvsp[0].str)); }
#line 3721 "y.tab.c"
    break;

  case 136: /* loop_body: statment_list  */
#line 1512 "../src/rc_parser.y"
                    { (yyval.str) = strdup((yyvsp[0].str)); }
#line 3727 "y.tab.c"
    break;

  case 137: /* statment_list: statement  */
#line 1516 "../src/rc_parser.y"
                                        {  
                                            char buffer[256] ;
                                            snprintf(buffer, sizeof(buffer), "\t%s\n", (yyvsp[0].str)); 
                                            (yyval.str) = strdup(buffer);
                                        }
#line 3737 "y.tab.c"
    break;

  case 138: /* statment_list: statment_list statement  */
#line 1521 "../src/rc_parser.y"
                                        { 
                                            char buffer[256]; 
                                            snprintf(buffer, sizeof(buffer), "%s\t%s", (yyvsp[-1].str), (yyvsp[0].str));
                                            (yyval.str) = strdup(buffer);
                                        }
#line 3747 "y.tab.c"
    break;

  case 139: /* statement: Function_Assignment_Statement SEMICOLON  */
#line 1529 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s", (yyvsp[-1].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3757 "y.tab.c"
    break;

  case 140: /* statement: Function_Print_Statement SEMICOLON  */
#line 1534 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s", (yyvsp[-1].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3767 "y.tab.c"
    break;

  case 141: /* statement: Conditional_Statements  */
#line 1539 "../src/rc_parser.y"
                                        {(yyval.str) = (yyvsp[0].str);}
#line 3773 "y.tab.c"
    break;

  case 142: /* statement: Loop_Statement  */
#line 1540 "../src/rc_parser.y"
                                        {(yyval.str) = (yyvsp[0].str);}
#line 3779 "y.tab.c"
    break;

  case 143: /* statement: BREAK SEMICOLON  */
#line 1541 "../src/rc_parser.y"
                                        { 
                                            char buffer[256]; 
                                            snprintf(buffer, sizeof(buffer), "break");
                                            (yyval.str) = strdup(buffer);
                                        }
#line 3789 "y.tab.c"
    break;

  case 144: /* statement: CONTINUE SEMICOLON  */
#line 1546 "../src/rc_parser.y"
                                        { 
                                            char buffer[256]; 
                                            snprintf(buffer, sizeof(buffer), "continue");
                                            (yyval.str) = strdup(buffer);
                                        }
#line 3799 "y.tab.c"
    break;

  case 145: /* statement: function_call_statement  */
#line 1551 "../src/rc_parser.y"
                                        {(yyval.str) = (yyvsp[0].str);}
#line 3805 "y.tab.c"
    break;

  case 146: /* statement: Function_Assignment_Statement  */
#line 1552 "../src/rc_parser.y"
                                        {(yyval.str) = (yyvsp[0].str);}
#line 3811 "y.tab.c"
    break;

  case 147: /* Function_Assignment_Statement: IDENTIFIER '=' expressions  */
#line 1557 "../src/rc_parser.y"
                                                { 
                                                    char buffer[256]; 
                                                    snprintf(buffer, sizeof(buffer), "%s = %s", (yyvsp[-2].str) ,(yyvsp[0].str));
                                                    (yyval.str) = strdup(buffer);
                                                }
#line 3821 "y.tab.c"
    break;

  case 148: /* Function_Assignment_Statement: dataframe_list '=' function_call_statement  */
#line 1562 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s = %s", (yyvsp[-2].str),(yyvsp[0].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3831 "y.tab.c"
    break;

  case 149: /* predicate_list: predicate  */
#line 1570 "../src/rc_parser.y"
              { (yyval.str) = strdup((yyvsp[0].str));}
#line 3837 "y.tab.c"
    break;

  case 150: /* predicate_list: predicate_list logical_operators predicate  */
#line 1571 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s %s %s", (yyvsp[-2].str),(yyvsp[-1].str), (yyvsp[0].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3847 "y.tab.c"
    break;

  case 151: /* predicate_list: predicate_list comparison_operators predicate  */
#line 1576 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s %s %s", (yyvsp[-2].str),(yyvsp[-1].str), (yyvsp[0].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3857 "y.tab.c"
    break;

  case 152: /* predicate: expressions comparison_operators expressions  */
#line 1584 "../src/rc_parser.y"
                                                 { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s %s %s", (yyvsp[-2].str),(yyvsp[-1].str), (yyvsp[0].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3867 "y.tab.c"
    break;

  case 153: /* predicate: expressions logical_operators expressions  */
#line 1589 "../src/rc_parser.y"
                                                { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s %s %s", (yyvsp[-2].str),(yyvsp[-1].str), (yyvsp[0].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3877 "y.tab.c"
    break;

  case 154: /* predicate: NOT_OPERATOR expressions  */
#line 1594 "../src/rc_parser.y"
                               { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s %s", (yyvsp[-1].str),(yyvsp[0].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3887 "y.tab.c"
    break;

  case 155: /* logical_operators: AND_OPERATOR  */
#line 1602 "../src/rc_parser.y"
                    { (yyval.str) = strdup(" and ");}
#line 3893 "y.tab.c"
    break;

  case 156: /* logical_operators: OR_OPERATOR  */
#line 1603 "../src/rc_parser.y"
                  { (yyval.str) = strdup(" or ");}
#line 3899 "y.tab.c"
    break;

  case 157: /* comparison_operators: '<'  */
#line 1607 "../src/rc_parser.y"
        {(yyval.str) = strdup("<");}
#line 3905 "y.tab.c"
    break;

  case 158: /* comparison_operators: '>'  */
#line 1608 "../src/rc_parser.y"
            {(yyval.str) = strdup(">");}
#line 3911 "y.tab.c"
    break;

  case 159: /* comparison_operators: LE_OPERATOR  */
#line 1609 "../src/rc_parser.y"
                    {(yyval.str) = strdup(" <= ");}
#line 3917 "y.tab.c"
    break;

  case 160: /* comparison_operators: GE_OPERATOR  */
#line 1610 "../src/rc_parser.y"
                    {(yyval.str) = strdup(" >= ");}
#line 3923 "y.tab.c"
    break;

  case 161: /* comparison_operators: NE_OPERATOR  */
#line 1611 "../src/rc_parser.y"
                    {(yyval.str) = strdup(" != ");}
#line 3929 "y.tab.c"
    break;

  case 162: /* comparison_operators: DEQ_OPERATOR  */
#line 1612 "../src/rc_parser.y"
                    {(yyval.str) = strdup(" == ");}
#line 3935 "y.tab.c"
    break;

  case 163: /* how_clause: HOW_TOKEN '=' how_list  */
#line 1617 "../src/rc_parser.y"
                                { 
                                    char buffer[256]; 
                                    snprintf(buffer, sizeof(buffer), "how = %s", (yyvsp[0].str));
                                    (yyval.str) = strdup(buffer);
                                }
#line 3945 "y.tab.c"
    break;

  case 164: /* how_list: INNER  */
#line 1625 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "'%s'", (yyvsp[0].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3955 "y.tab.c"
    break;

  case 165: /* how_list: RIGHT  */
#line 1630 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "'%s'", (yyvsp[0].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3965 "y.tab.c"
    break;

  case 166: /* how_list: OUTER  */
#line 1635 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "'%s'", (yyvsp[0].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3975 "y.tab.c"
    break;

  case 167: /* on_clause: ON_TOKEN '=' SINGLE_QUOTED_STRING  */
#line 1643 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "on = %s", (yyvsp[0].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3985 "y.tab.c"
    break;

  case 168: /* suffixes_clause: SUFFIXES_TOKEN '=' '[' single_quoted_string_list ']'  */
#line 1651 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "suffixes = [%s]", (yyvsp[-1].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3995 "y.tab.c"
    break;

  case 169: /* Conditional_Statements: Conditional_Statements_1  */
#line 1659 "../src/rc_parser.y"
                             { (yyval.str) = strdup((yyvsp[0].str));}
#line 4001 "y.tab.c"
    break;

  case 170: /* Conditional_Statements: Conditional_Statements_2  */
#line 1660 "../src/rc_parser.y"
                               { (yyval.str) = strdup((yyvsp[0].str));}
#line 4007 "y.tab.c"
    break;

  case 171: /* Conditional_Statements: Conditional_Statements_3  */
#line 1661 "../src/rc_parser.y"
                               { (yyval.str) = strdup((yyvsp[0].str));}
#line 4013 "y.tab.c"
    break;

  case 172: /* Conditional_Statements: Conditional_Statements_4  */
#line 1662 "../src/rc_parser.y"
                               { (yyval.str) = strdup((yyvsp[0].str));}
#line 4019 "y.tab.c"
    break;

  case 173: /* Conditional_Statements_1: IF '(' predicate_list ')' '{' conditional_body '}' else_if_loop ELSE '{' conditional_body '}'  */
#line 1669 "../src/rc_parser.y"
    {
        indent += 1;
        fprintf(yacc_output, "if(%s):\n%s\n%selse:\n%s", (yyvsp[-9].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-1].str));
        indent -= 1;
    }
#line 4029 "y.tab.c"
    break;

  case 174: /* Conditional_Statements_2: IF '(' predicate_list ')' '{' conditional_body '}' else_if_loop  */
#line 1679 "../src/rc_parser.y"
    {
        indent += 1;
        fprintf(yacc_output, "if(%s):\n%s\n%s", (yyvsp[-5].str), (yyvsp[-2].str), (yyvsp[0].str));
        indent -= 1;
    }
#line 4039 "y.tab.c"
    break;

  case 175: /* Conditional_Statements_3: IF '(' predicate_list ')' '{' conditional_body '}' ELSE '{' conditional_body '}'  */
#line 1689 "../src/rc_parser.y"
    {
        indent += 1;
        fprintf(yacc_output, "if(%s):\n%s\nelse:\n%s", (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-1].str));
        indent -= 1;
    }
#line 4049 "y.tab.c"
    break;

  case 176: /* Conditional_Statements_4: IF '(' predicate_list ')' '{' conditional_body '}'  */
#line 1698 "../src/rc_parser.y"
    {
        indent += 1;
        fprintf(yacc_output, "if(%s):\n%s\n", (yyvsp[-4].str), (yyvsp[-1].str));
        indent -= 1;
    }
#line 4059 "y.tab.c"
    break;

  case 177: /* else_if_loop: ELSEIF '(' predicate_list ')' '{' conditional_body '}'  */
#line 1706 "../src/rc_parser.y"
                                                           {
        indent += 1;
        char buffer[256];
        snprintf(buffer, sizeof(buffer), "elif(%s):\n%s\n", (yyvsp[-4].str), (yyvsp[-1].str));
        (yyval.str) = strdup(buffer);
        indent -= 1;
    }
#line 4071 "y.tab.c"
    break;

  case 178: /* else_if_loop: else_if_loop ELSEIF '(' predicate_list ')' '{' conditional_body '}'  */
#line 1714 "../src/rc_parser.y"
    { 
        char buffer[256]; 
        snprintf(buffer, sizeof(buffer), "%s\nelif(%s):\n%s\n", (yyvsp[-7].str), (yyvsp[-4].str), (yyvsp[-1].str));
        (yyval.str) = strdup(buffer);
    }
#line 4081 "y.tab.c"
    break;


#line 4085 "y.tab.c"

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

#line 1725 "../src/rc_parser.y"


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

    yacc_output = fopen("yacc_output.py", "w");
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

    int runStatus = system("python3 yacc_output.py");

    // Check if the script executed successfully
    if (runStatus != 0) {
        fprintf(stderr, "Error running the Python script\n");
        return 1; // Exit with an error code
    }

    return 0;
}
