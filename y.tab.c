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
#line 1 "rc_parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "typechecker.h"
void yyerror(const char *s);
int yylex(); 
extern int yylineno;
extern FILE *yyin;
extern FILE *yyout;

#line 83 "y.tab.c"

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

#line 334 "y.tab.c"

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
  YYSYMBOL_INT_TYPE = 18,                  /* INT_TYPE  */
  YYSYMBOL_FLOAT_TYPE = 19,                /* FLOAT_TYPE  */
  YYSYMBOL_STRING_TYPE = 20,               /* STRING_TYPE  */
  YYSYMBOL_SKIPNA = 21,                    /* SKIPNA  */
  YYSYMBOL_FILL = 22,                      /* FILL  */
  YYSYMBOL_FFILL = 23,                     /* FFILL  */
  YYSYMBOL_BFILL = 24,                     /* BFILL  */
  YYSYMBOL_INTERPOLATE = 25,               /* INTERPOLATE  */
  YYSYMBOL_METHOD = 26,                    /* METHOD  */
  YYSYMBOL_REGX = 27,                      /* REGX  */
  YYSYMBOL_INNER = 28,                     /* INNER  */
  YYSYMBOL_LEFT = 29,                      /* LEFT  */
  YYSYMBOL_RIGHT = 30,                     /* RIGHT  */
  YYSYMBOL_OUTER = 31,                     /* OUTER  */
  YYSYMBOL_SEP = 32,                       /* SEP  */
  YYSYMBOL_HEADER = 33,                    /* HEADER  */
  YYSYMBOL_INDEX_COL = 34,                 /* INDEX_COL  */
  YYSYMBOL_USECOLS = 35,                   /* USECOLS  */
  YYSYMBOL_INDEX = 36,                     /* INDEX  */
  YYSYMBOL_DROP = 37,                      /* DROP  */
  YYSYMBOL_INPLACE = 38,                   /* INPLACE  */
  YYSYMBOL_AXIS = 39,                      /* AXIS  */
  YYSYMBOL_NUMERIC = 40,                   /* NUMERIC  */
  YYSYMBOL_LOOP = 41,                      /* LOOP  */
  YYSYMBOL_IF = 42,                        /* IF  */
  YYSYMBOL_ELSE = 43,                      /* ELSE  */
  YYSYMBOL_ELSEIF = 44,                    /* ELSEIF  */
  YYSYMBOL_BREAK = 45,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 46,                  /* CONTINUE  */
  YYSYMBOL_RTRN = 47,                      /* RTRN  */
  YYSYMBOL_FUNC = 48,                      /* FUNC  */
  YYSYMBOL_FLOATNUM = 49,                  /* FLOATNUM  */
  YYSYMBOL_STRING = 50,                    /* STRING  */
  YYSYMBOL_TRUE = 51,                      /* TRUE  */
  YYSYMBOL_FALSE = 52,                     /* FALSE  */
  YYSYMBOL_SINGLE_QUOTED_STRING = 53,      /* SINGLE_QUOTED_STRING  */
  YYSYMBOL_INPUT = 54,                     /* INPUT  */
  YYSYMBOL_OUTPUT = 55,                    /* OUTPUT  */
  YYSYMBOL_ADD_ASSIGN_OPERATOR = 56,       /* ADD_ASSIGN_OPERATOR  */
  YYSYMBOL_SUB_ASSIGN_OPERATOR = 57,       /* SUB_ASSIGN_OPERATOR  */
  YYSYMBOL_MUL_ASSIGN_OPERATOR = 58,       /* MUL_ASSIGN_OPERATOR  */
  YYSYMBOL_DIV_ASSIGN_OPERATOR = 59,       /* DIV_ASSIGN_OPERATOR  */
  YYSYMBOL_MOD_ASSIGN_OPERATOR = 60,       /* MOD_ASSIGN_OPERATOR  */
  YYSYMBOL_LE_OPERATOR = 61,               /* LE_OPERATOR  */
  YYSYMBOL_GE_OPERATOR = 62,               /* GE_OPERATOR  */
  YYSYMBOL_DEQ_OPERATOR = 63,              /* DEQ_OPERATOR  */
  YYSYMBOL_NE_OPERATOR = 64,               /* NE_OPERATOR  */
  YYSYMBOL_PERCENTAGE = 65,                /* PERCENTAGE  */
  YYSYMBOL_INTEGER = 66,                   /* INTEGER  */
  YYSYMBOL_SEMICOLON = 67,                 /* SEMICOLON  */
  YYSYMBOL_AND_OPERATOR = 68,              /* AND_OPERATOR  */
  YYSYMBOL_OR_OPERATOR = 69,               /* OR_OPERATOR  */
  YYSYMBOL_NOT_OPERATOR = 70,              /* NOT_OPERATOR  */
  YYSYMBOL_INC_OPERATOR = 71,              /* INC_OPERATOR  */
  YYSYMBOL_DEC_OPERATOR = 72,              /* DEC_OPERATOR  */
  YYSYMBOL_RIGHTSHIFT_OPERATOR = 73,       /* RIGHTSHIFT_OPERATOR  */
  YYSYMBOL_LEFTSHIFT_OPERATOR = 74,        /* LEFTSHIFT_OPERATOR  */
  YYSYMBOL_ELLIPSIS = 75,                  /* ELLIPSIS  */
  YYSYMBOL_EXPONENTIAL = 76,               /* EXPONENTIAL  */
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
  YYSYMBOL_dataframe = 123,                /* dataframe  */
  YYSYMBOL_expressions = 124,              /* expressions  */
  YYSYMBOL_Function_Declaration = 125,     /* Function_Declaration  */
  YYSYMBOL_argument_list = 126,            /* argument_list  */
  YYSYMBOL_function_body = 127,            /* function_body  */
  YYSYMBOL_return_statement = 128,         /* return_statement  */
  YYSYMBOL_Function_Print_Statement = 129, /* Function_Print_Statement  */
  YYSYMBOL_print_expressions = 130,        /* print_expressions  */
  YYSYMBOL_strings_list = 131,             /* strings_list  */
  YYSYMBOL_Function_Loop_Statement = 132,  /* Function_Loop_Statement  */
  YYSYMBOL_Print_Statement = 133,          /* Print_Statement  */
  YYSYMBOL_aggregate_function_calls = 134, /* aggregate_function_calls  */
  YYSYMBOL_function_call_statement = 135,  /* function_call_statement  */
  YYSYMBOL_concat_body = 136,              /* concat_body  */
  YYSYMBOL_dataframe_list = 137,           /* dataframe_list  */
  YYSYMBOL_to_exchange = 138,              /* to_exchange  */
  YYSYMBOL_exchange_value = 139,           /* exchange_value  */
  YYSYMBOL_exchange_body_optional = 140,   /* exchange_body_optional  */
  YYSYMBOL_missing_value_body_confirm = 141, /* missing_value_body_confirm  */
  YYSYMBOL_missing_value_body = 142,       /* missing_value_body  */
  YYSYMBOL_mean_body = 143,                /* mean_body  */
  YYSYMBOL_axis_bit = 144,                 /* axis_bit  */
  YYSYMBOL_mean_numerical = 145,           /* mean_numerical  */
  YYSYMBOL_reset_index_body_drop = 146,    /* reset_index_body_drop  */
  YYSYMBOL_BOOL = 147,                     /* BOOL  */
  YYSYMBOL_reset_index_body_implace = 148, /* reset_index_body_implace  */
  YYSYMBOL_head_tail_body = 149,           /* head_tail_body  */
  YYSYMBOL_readcsv_body = 150,             /* readcsv_body  */
  YYSYMBOL_single_quoted_string_list = 151, /* single_quoted_string_list  */
  YYSYMBOL_actual_parameters = 152,        /* actual_parameters  */
  YYSYMBOL_grouping = 153,                 /* grouping  */
  YYSYMBOL_operators = 154,                /* operators  */
  YYSYMBOL_Loop_Statement = 155,           /* Loop_Statement  */
  YYSYMBOL_Sub_Loop_Statement = 156,       /* Sub_Loop_Statement  */
  YYSYMBOL_initializtion = 157,            /* initializtion  */
  YYSYMBOL_Identifier_List = 158,          /* Identifier_List  */
  YYSYMBOL_update = 159,                   /* update  */
  YYSYMBOL_loop_body = 160,                /* loop_body  */
  YYSYMBOL_statment_list = 161,            /* statment_list  */
  YYSYMBOL_statement = 162,                /* statement  */
  YYSYMBOL_Function_Assignment_Statement = 163, /* Function_Assignment_Statement  */
  YYSYMBOL_predicate_list = 164,           /* predicate_list  */
  YYSYMBOL_predicate = 165,                /* predicate  */
  YYSYMBOL_logical_operators = 166,        /* logical_operators  */
  YYSYMBOL_comparison_operators = 167,     /* comparison_operators  */
  YYSYMBOL_how_clause = 168,               /* how_clause  */
  YYSYMBOL_how_list = 169,                 /* how_list  */
  YYSYMBOL_on_clause = 170,                /* on_clause  */
  YYSYMBOL_suffixes_clause = 171,          /* suffixes_clause  */
  YYSYMBOL_Conditional_Statements = 172,   /* Conditional_Statements  */
  YYSYMBOL_Conditional_Statements_1 = 173, /* Conditional_Statements_1  */
  YYSYMBOL_Conditional_Statements_2 = 174, /* Conditional_Statements_2  */
  YYSYMBOL_Conditional_Statements_3 = 175, /* Conditional_Statements_3  */
  YYSYMBOL_Conditional_Statements_4 = 176, /* Conditional_Statements_4  */
  YYSYMBOL_else_if_loop = 177,             /* else_if_loop  */
  YYSYMBOL_conditional_body = 178          /* conditional_body  */
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
#define YYLAST   590

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  118
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  61
/* YYNRULES -- Number of rules.  */
#define YYNRULES  182
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  454

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
       0,    51,    51,    52,    56,    57,    58,    59,    60,    61,
      62,    66,    85,    86,   101,   105,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   128,   133,
     134,   135,   139,   140,   141,   143,   144,   148,   152,   156,
     157,   158,   159,   163,   167,   171,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   208,
     212,   215,   223,   227,   228,   229,   230,   231,   235,   236,
     237,   238,   242,   243,   244,   245,   246,   247,   251,   252,
     253,   254,   258,   259,   263,   277,   278,   279,   280,   284,
     285,   289,   290,   294,   295,   299,   300,   304,   305,   306,
     307,   308,   309,   313,   314,   319,   320,   324,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   340,   344,   349,
     353,   354,   355,   356,   357,   358,   362,   366,   370,   371,
     375,   376,   377,   378,   379,   380,   381,   382,   387,   388,
     389,   393,   394,   395,   399,   400,   401,   405,   406,   410,
     411,   412,   413,   414,   415,   419,   423,   424,   425,   426,
     430,   434,   438,   439,   440,   441,   445,   451,   456,   461,
     465,   466,   470
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
  "INTNUM", "IDENTIFIER", "DATAFRAME", "CSVFILE", "INT_TYPE", "FLOAT_TYPE",
  "STRING_TYPE", "SKIPNA", "FILL", "FFILL", "BFILL", "INTERPOLATE",
  "METHOD", "REGX", "INNER", "LEFT", "RIGHT", "OUTER", "SEP", "HEADER",
  "INDEX_COL", "USECOLS", "INDEX", "DROP", "INPLACE", "AXIS", "NUMERIC",
  "LOOP", "IF", "ELSE", "ELSEIF", "BREAK", "CONTINUE", "RTRN", "FUNC",
  "FLOATNUM", "STRING", "TRUE", "FALSE", "SINGLE_QUOTED_STRING", "INPUT",
  "OUTPUT", "ADD_ASSIGN_OPERATOR", "SUB_ASSIGN_OPERATOR",
  "MUL_ASSIGN_OPERATOR", "DIV_ASSIGN_OPERATOR", "MOD_ASSIGN_OPERATOR",
  "LE_OPERATOR", "GE_OPERATOR", "DEQ_OPERATOR", "NE_OPERATOR",
  "PERCENTAGE", "INTEGER", "SEMICOLON", "AND_OPERATOR", "OR_OPERATOR",
  "NOT_OPERATOR", "INC_OPERATOR", "DEC_OPERATOR", "RIGHTSHIFT_OPERATOR",
  "LEFTSHIFT_OPERATOR", "ELLIPSIS", "EXPONENTIAL", "DUST", "FUNCTIONCALL",
  "PRINT", "CONSTANT", "READCSVFUNC", "HEADFUNC", "TAILFUNC",
  "RESETINDEXFUNC", "TOCSVFUNC", "DESCRIBEFUNC", "MEANFUNC", "MODEFUNC",
  "MEDIANFUNC", "SUMFUNC", "MINFUNC", "MAXFUNC", "MISSVALUEFUNC",
  "EXCHANGEVALUEFUNC", "GROUPBYFUNC", "CONCATFUNC", "MERGEFUNC",
  "JOINFUNC", "AXIS_TOKEN", "DROP_TOKEN", "INPLACE_TOKEN", "METHOD_TOKEN",
  "HOW_TOKEN", "ON_TOKEN", "SUFFIXES_TOKEN", "FILL_TOKEN", "'('", "')'",
  "'{'", "'}'", "','", "'['", "']'", "'&'", "'|'", "'^'", "'~'", "$accept",
  "translation_unit", "declaration_statement", "input_statement",
  "assignment_statement", "dataframe", "expressions",
  "Function_Declaration", "argument_list", "function_body",
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

#define YYPACT_NINF (-344)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     283,    22,   -48,   -23,   -17,    82,    96,     8,    37,    43,
      50,   149,  -344,  -344,   104,   131,  -344,  -344,   127,    17,
    -344,  -344,  -344,  -344,  -344,  -344,  -344,   162,   162,   148,
     185,   271,   110,   160,   247,   225,   140,   221,  -344,  -344,
    -344,   326,  -344,    70,   221,  -344,   161,  -344,   162,    12,
      31,  -344,  -344,  -344,    31,   -30,   176,   284,   233,   159,
     162,    58,   171,  -344,   292,  -344,  -344,    31,     3,  -344,
     210,   221,   219,   229,   244,   250,   253,   256,   262,   266,
     161,   334,  -344,  -344,    45,   364,   324,  -344,  -344,  -344,
    -344,  -344,  -344,  -344,  -344,  -344,   274,  -344,   162,  -344,
      33,   271,   372,    31,  -344,  -344,  -344,  -344,  -344,  -344,
    -344,  -344,   162,   162,   279,   271,   271,  -344,    90,   325,
     247,   371,   305,  -344,    -6,   221,   377,   377,   393,   384,
     306,    35,   405,   220,  -344,   327,   328,   329,   330,   331,
     332,  -344,   125,  -344,   161,  -344,  -344,  -344,  -344,    31,
    -344,  -344,   354,   430,    31,    31,   293,  -344,  -344,   333,
     426,  -344,    31,  -344,   434,   449,   450,   451,   452,  -344,
     352,   353,  -344,   357,   358,   457,   359,   210,  -344,   360,
    -344,   361,   415,   362,   367,   436,   436,   436,   436,   436,
     436,   416,   470,    48,    46,    36,   410,   411,   373,   412,
    -344,    23,  -344,  -344,   293,  -344,   414,  -344,   374,    76,
    -344,   429,   469,   471,   375,   128,   447,   385,  -344,  -344,
     222,   453,   381,   382,    61,   157,   386,  -344,   277,   324,
     482,   387,   387,   387,   387,   387,   387,  -344,   258,   483,
     388,  -344,  -344,  -344,   162,  -344,  -344,   247,  -344,    70,
    -344,  -344,   237,   162,   293,   389,   428,    76,  -344,   433,
     210,   210,   210,   324,  -344,  -344,   210,   487,   394,   491,
     392,  -344,   395,   494,  -344,  -344,  -344,   495,    20,  -344,
     497,   498,   361,  -344,  -344,  -344,  -344,  -344,  -344,   398,
      97,   496,    59,   403,   404,   406,   407,   408,   409,   413,
     417,   418,   419,   420,   421,   422,    31,   108,   507,  -344,
     423,   427,   289,    31,   454,   425,  -344,    76,  -344,    76,
    -344,  -344,  -344,   137,  -344,   496,  -344,   368,   432,   484,
     128,   164,   337,   431,   128,  -344,   183,   437,  -344,  -344,
    -344,   508,   512,   513,  -344,  -344,  -344,  -344,  -344,  -344,
     438,   439,   440,   441,   442,   443,   293,  -344,   300,   293,
     271,   424,   435,  -344,  -344,  -344,  -344,   210,  -344,  -344,
    -344,  -344,  -344,  -344,   519,   444,   520,  -344,  -344,  -344,
    -344,   324,   361,   527,   528,   398,  -344,   128,   445,   128,
    -344,  -344,  -344,  -344,  -344,  -344,   446,   455,   448,   203,
     293,   271,  -344,   486,   456,   458,   142,  -344,   459,   128,
    -344,   387,   324,   387,  -344,   324,  -344,   460,   462,   214,
    -344,   530,   465,   324,   361,   324,   398,  -344,   182,  -344,
     136,   293,  -344,   466,   464,  -344,   199,  -344,   205,  -344,
     387,  -344,   467,   293,   324,  -344,   398,  -344,  -344,   468,
     216,  -344,  -344,  -344
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     6,     0,    70,     5,     7,     0,     0,
       8,   127,    10,   172,   173,   174,   175,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     3,
       4,     0,     9,     0,     0,    23,    22,    24,     0,     0,
      12,    27,    26,    25,   115,     0,     0,   132,     0,   129,
       0,     0,     0,   151,    31,    11,    43,    39,     0,    40,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    13,    71,     0,     0,     0,   118,   119,   120,
     121,   122,   123,   124,   125,   126,     0,    68,     0,    15,
       0,     0,     0,   156,   159,   160,   161,   162,   164,   163,
     157,   158,     0,     0,     0,     0,     0,    29,     0,     0,
       0,     0,     0,    70,     0,     0,   106,   106,     0,     0,
       0,     0,     0,     0,   117,     0,     0,     0,     0,     0,
       0,   113,     0,    17,    16,    18,    21,    20,    19,   116,
     130,   131,     0,   133,   155,   154,     0,   152,   153,     0,
       0,    45,    42,    41,     0,     0,     0,     0,     0,    58,
       0,     0,   105,     0,     0,     0,   104,   112,    63,     0,
      87,    91,     0,     0,     0,    93,    93,    93,    93,    93,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     146,     0,   143,   182,   137,   138,   147,   142,     0,     0,
      30,     0,     0,     0,     0,     0,     0,     0,    59,    60,
       0,     0,     0,     0,     0,    93,     0,    72,     0,     0,
       0,    98,    98,    98,    98,    98,    98,   114,     0,     0,
       0,   136,   134,   135,     0,   144,   145,     0,   141,     0,
     139,   140,   179,     0,     0,     0,     0,     0,    44,     0,
     112,   112,   112,     0,   101,   102,   112,     0,     0,     0,
       0,    99,     0,     0,    61,    62,    82,     0,     0,    83,
       0,     0,    91,    64,    73,    77,    74,    76,    75,    81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   148,     0,     0,   149,
       0,     0,   177,    37,     0,     0,    28,     0,    34,     0,
     107,   108,   109,     0,   110,     0,    66,     0,     0,     0,
       0,     0,     0,     0,     0,    90,    93,     0,    14,    94,
      92,     0,     0,     0,    52,    53,    54,    55,    56,    57,
       0,     0,     0,     0,     0,     0,     0,    38,     0,     0,
       0,     0,     0,    36,    32,    35,    33,   112,    69,   166,
     167,   168,   169,   165,     0,     0,     0,   103,    84,    85,
      86,     0,    91,     0,     0,    81,    65,     0,     0,     0,
      46,    47,    48,    49,    50,    51,     0,     0,     0,     0,
       0,     0,   111,     0,     0,     0,     0,    88,     0,     0,
      80,    98,     0,    98,   128,     0,   178,     0,     0,     0,
     170,     0,     0,     0,    91,     0,    81,    96,     0,    95,
       0,     0,   176,     0,     0,    67,     0,    89,     0,    78,
      98,   150,     0,     0,     0,   100,    81,    97,   180,     0,
       0,    79,   181,   171
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -344,  -344,   533,  -344,  -344,     0,   -24,  -344,  -344,  -201,
    -344,  -184,   294,   461,  -344,  -344,   -82,     2,  -344,   170,
    -344,  -344,  -343,  -344,  -270,  -167,   227,  -227,  -344,  -279,
    -344,   463,  -160,  -213,  -344,   472,  -344,    30,  -181,  -344,
    -344,  -344,  -225,  -344,   349,  -178,  -100,   260,   493,   499,
    -344,  -344,  -344,  -344,    93,  -344,  -344,  -344,  -344,  -344,
    -291
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    11,    12,    13,    14,    49,    61,    16,   118,   255,
     314,   199,    68,    69,   257,    17,    51,    52,   268,   201,
     183,   289,   337,   181,   226,   231,   340,   293,   176,   266,
     222,   173,   122,   142,    55,    53,    96,   202,    21,    58,
      59,   240,   203,   204,   205,   206,    62,    63,   115,   116,
     270,   373,   375,   422,   207,    23,    24,    25,    26,   312,
     208
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      15,   152,    18,    50,    54,   294,   295,   296,   297,   298,
      67,    15,   335,    18,   146,   241,   290,   223,    85,   232,
     233,   234,   235,   236,    84,   256,   332,    43,   258,   315,
      20,   259,    27,   249,    87,    88,   103,    72,    89,    90,
      91,    20,   410,    81,    83,    82,   244,   150,    87,    88,
     323,   377,    89,    90,    91,   382,   318,   179,   282,    29,
     242,    87,    88,   239,     2,    89,    90,    91,   398,   104,
     105,   123,   180,   256,   149,   276,   258,     2,    97,   259,
     341,    98,   151,   439,    30,    80,     2,   277,   154,   155,
      31,   239,     2,    22,   342,   243,   162,    32,   147,   343,
     320,   321,   322,   451,    22,    44,   324,   170,   411,   418,
     413,   119,   407,    33,   120,    34,   365,     3,   366,   106,
     107,   108,   109,   253,    86,   171,   110,   111,    44,    28,
     426,   396,    86,   256,    44,   256,   258,    41,   258,   259,
     442,   259,   279,    28,    35,    92,    93,    94,    95,    38,
      36,     8,   449,   134,   437,   198,    15,    37,   200,    92,
      93,    94,    95,    56,     1,     2,     9,    10,   406,   385,
      19,    40,    92,    93,    94,    95,    45,    46,     2,   264,
     265,    19,   104,   105,   427,   254,   429,   378,   379,   380,
       3,     4,   280,   123,    42,   281,   230,     5,   159,   428,
      57,   160,   430,     6,    15,   338,   200,   402,   191,   123,
     436,    47,   438,   447,   104,   105,   357,    64,   383,   120,
     306,   384,   230,    67,   278,   104,   105,    65,     7,   313,
       8,   450,   106,   107,   108,   109,   191,     2,   192,   110,
     111,   124,    70,     8,   441,     9,    10,   191,   191,   308,
     367,   309,    71,   191,    15,   424,   200,   123,     9,    10,
     399,    45,    46,     2,   106,   107,   108,   109,    28,    48,
     102,   110,   111,   271,   272,   106,   107,   108,   109,   114,
     310,   311,   110,   111,    99,    45,    46,     2,   143,   144,
       2,   284,   285,   191,   100,   440,    47,    66,     1,     2,
     101,   419,    73,    74,    75,    76,    77,   117,   195,     2,
     191,   417,   445,    78,    79,   184,   191,   123,   446,   123,
      47,   121,   433,   145,     3,     4,   286,   191,     8,   453,
     125,     5,   361,   362,     3,     4,   126,     6,   196,   197,
     133,    60,   287,     9,    10,   299,   300,   301,   302,   303,
     304,   127,     8,   288,    48,     8,    15,   128,   200,    15,
     129,   200,     7,   130,     8,   104,   105,     9,    10,   131,
       9,    10,   198,   132,     8,   157,   158,   141,    48,     9,
      10,    48,    73,    74,    75,    76,    77,   153,   156,     9,
      10,   172,   161,    78,    79,   397,   369,   370,   371,   372,
      15,   177,   200,   164,   165,   166,   167,   168,    73,    74,
      75,    76,    77,   169,   178,   106,   107,   108,   109,    78,
      79,   193,   110,   111,   135,   136,   137,   138,   139,   140,
     175,    15,   182,   200,   185,   186,   187,   188,   189,   190,
     194,   210,   209,    15,   211,   200,    73,    74,    75,    76,
      77,   135,   136,   137,   138,   139,   140,    78,    79,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   227,   237,
     221,   224,   225,   228,   229,   230,   238,   245,   246,   248,
     247,   251,   260,   261,   252,   262,   267,   263,   269,   274,
     275,   273,   291,   244,   283,   317,   305,   325,   292,   316,
     319,   327,   326,   328,   330,   331,   329,   333,   334,   336,
     339,   344,   345,   358,   346,   347,   348,   349,   387,   376,
     350,   363,   388,   389,   351,   352,   353,   354,   355,   403,
     405,   356,   359,   400,   360,   364,   374,   408,   409,   420,
     434,   307,   401,   381,    39,   386,   390,   391,   392,   393,
     394,   395,   368,   250,   112,   404,   414,   412,   416,     0,
     113,   421,   415,     0,     0,     0,     0,     0,   148,   431,
     423,   425,   432,   435,     0,   443,   444,   448,   452,     0,
       0,   163,     0,     0,     0,     0,     0,     0,     0,     0,
     174
};

static const yytype_int16 yycheck[] =
{
       0,   101,     0,    27,    28,   232,   233,   234,   235,   236,
      34,    11,   282,    11,    96,   193,   229,   177,     6,   186,
     187,   188,   189,   190,    48,   209,     6,    10,   209,   254,
       0,   209,    10,    10,     3,     4,    60,    37,     7,     8,
       9,    11,   385,    43,    44,    43,    10,    14,     3,     4,
     263,   330,     7,     8,     9,   334,   257,    22,   225,   107,
      14,     3,     4,    15,    16,     7,     8,     9,   359,    11,
      12,    71,    37,   257,    98,    14,   257,    16,   108,   257,
      21,   111,    49,   426,   107,    15,    16,    26,   112,   113,
     107,    15,    16,     0,    35,    49,   120,    15,    96,    40,
     260,   261,   262,   446,    11,   111,   266,   113,   387,   400,
     389,   108,   382,    17,   111,   107,   317,    41,   319,    61,
      62,    63,    64,    47,   112,   125,    68,    69,   111,   107,
     409,   356,   112,   317,   111,   319,   317,     6,   319,   317,
     431,   319,   224,   107,   107,   114,   115,   116,   117,     0,
     107,    81,   443,   108,   424,    79,   156,   107,   156,   114,
     115,   116,   117,    15,    15,    16,    96,    97,   381,   336,
       0,    67,   114,   115,   116,   117,    14,    15,    16,    51,
      52,    11,    11,    12,   411,   109,   413,    23,    24,    25,
      41,    42,    35,   193,    67,    38,    39,    48,   108,   412,
      15,   111,   415,    54,   204,   108,   204,   367,   111,   209,
     423,    49,   425,   440,    11,    12,   108,   107,    35,   111,
     244,    38,    39,   247,   224,    11,    12,    67,    79,   253,
      81,   444,    61,    62,    63,    64,   111,    16,   113,    68,
      69,    71,    17,    81,   108,    96,    97,   111,   111,   249,
     113,   249,   112,   111,   254,   113,   254,   257,    96,    97,
     360,    14,    15,    16,    61,    62,    63,    64,   107,   107,
     111,    68,    69,    51,    52,    61,    62,    63,    64,   108,
      43,    44,    68,    69,   108,    14,    15,    16,    14,    15,
      16,    14,    15,   111,    10,   113,    49,    50,    15,    16,
      67,   401,    82,    83,    84,    85,    86,    15,    15,    16,
     111,   108,   113,    93,    94,    95,   111,   317,   113,   319,
      49,   111,   108,    49,    41,    42,    49,   111,    81,   113,
     111,    48,    43,    44,    41,    42,   107,    54,    45,    46,
       6,    70,    65,    96,    97,    87,    88,    89,    90,    91,
      92,   107,    81,    76,   107,    81,   356,   107,   356,   359,
     107,   359,    79,   107,    81,    11,    12,    96,    97,   107,
      96,    97,    79,   107,    81,   115,   116,    53,   107,    96,
      97,   107,    82,    83,    84,    85,    86,    15,   109,    96,
      97,    14,    67,    93,    94,    95,    28,    29,    30,    31,
     400,    17,   400,    32,    33,    34,    35,    36,    82,    83,
      84,    85,    86,   108,   108,    61,    62,    63,    64,    93,
      94,    67,    68,    69,    87,    88,    89,    90,    91,    92,
      37,   431,    27,   431,   107,   107,   107,   107,   107,   107,
      10,    15,   109,   443,    10,   443,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    10,
      10,    10,    10,   111,   111,   108,   108,    10,    53,    53,
     111,   111,   111,   111,   107,    39,     6,    67,    67,    67,
     107,    67,    53,    14,   110,    14,    39,   112,   103,   108,
     108,    38,    10,    10,   108,    67,   108,    10,   111,   110,
      67,    10,   108,   111,    10,    10,   111,    10,    10,   111,
      14,   108,   108,     6,   108,   108,   108,   108,    10,    35,
     107,    67,    10,    10,   107,   107,   107,   107,   107,    10,
      10,   109,   109,   109,   107,   110,   104,    10,    10,    53,
      10,   247,   107,   112,    11,   108,   108,   108,   108,   108,
     108,   108,   325,   204,    61,   111,   110,   112,   110,    -1,
      61,   105,   107,    -1,    -1,    -1,    -1,    -1,    96,   109,
     112,   112,   110,   108,    -1,   109,   112,   110,   110,    -1,
      -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     127
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    16,    41,    42,    48,    54,    79,    81,    96,
      97,   119,   120,   121,   122,   123,   125,   133,   135,   137,
     155,   156,   172,   173,   174,   175,   176,    10,   107,   107,
     107,   107,    15,    17,   107,   107,   107,   107,     0,   120,
      67,     6,    67,    10,   111,    14,    15,    49,   107,   123,
     124,   134,   135,   153,   124,   152,    15,    15,   157,   158,
      70,   124,   164,   165,   107,    67,    50,   124,   130,   131,
      17,   112,   123,    82,    83,    84,    85,    86,    93,    94,
      15,   123,   135,   123,   124,     6,   112,     3,     4,     7,
       8,     9,   114,   115,   116,   117,   154,   108,   111,   108,
      10,    67,   111,   124,    11,    12,    61,    62,    63,    64,
      68,    69,   166,   167,   108,   166,   167,    15,   126,   108,
     111,   111,   150,   123,   137,   111,   107,   107,   107,   107,
     107,   107,   107,     6,   108,    87,    88,    89,    90,    91,
      92,    53,   151,    14,    15,    49,   134,   135,   153,   124,
      14,    49,   164,    15,   124,   124,   109,   165,   165,   108,
     111,    67,   124,   131,    32,    33,    34,    35,    36,   108,
     113,   123,    14,   149,   149,    37,   146,    17,   108,    22,
      37,   141,    27,   138,    95,   107,   107,   107,   107,   107,
     107,   111,   113,    67,    10,    15,    45,    46,    79,   129,
     135,   137,   155,   160,   161,   162,   163,   172,   178,   109,
      15,    10,    10,    10,    10,    10,   111,   111,   108,   108,
      10,   111,   148,   150,   111,   111,   142,    53,   111,   107,
      39,   143,   143,   143,   143,   143,   143,    53,     6,    15,
     159,   163,    14,    49,    10,    67,    67,   107,    67,    10,
     162,    67,   110,    47,   109,   127,   129,   132,   156,   163,
      53,    14,    14,   112,    51,    52,   147,    39,   136,   103,
     168,    51,    52,    38,   108,   108,    14,    26,   123,   134,
      35,    38,   143,   108,    14,    15,    49,    65,    76,   139,
     151,    10,   111,   145,   145,   145,   145,   145,   145,    87,
      88,    89,    90,    91,    92,   108,   124,   130,   123,   135,
      43,    44,   177,   124,   128,   160,   110,    67,   127,    67,
     150,   150,   150,   151,   150,    10,   108,    10,   111,   111,
      10,    10,     6,    10,    10,   142,   111,   140,   108,    14,
     144,    21,    35,    40,   108,   108,   108,   108,   108,   108,
     107,   107,   107,   107,   107,   107,   109,   108,     6,   109,
     107,    43,    44,    67,   110,   127,   127,   113,   144,    28,
      29,    30,    31,   169,   104,   170,    35,   147,    23,    24,
      25,   112,   147,    35,    38,   143,   108,    10,    10,    10,
     108,   108,   108,   108,   108,   108,   160,    95,   178,   164,
     109,   107,   150,    10,   111,    10,   151,   142,    10,    10,
     140,   147,   112,   147,   110,   107,   110,   108,   178,   164,
      53,   105,   171,   112,   113,   112,   147,   145,   151,   145,
     151,   109,   110,   108,    10,   108,   151,   142,   151,   140,
     113,   108,   178,   109,   112,   113,   113,   145,   110,   178,
     151,   140,   110,   113
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   118,   119,   119,   120,   120,   120,   120,   120,   120,
     120,   121,   122,   122,   122,   123,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   125,   126,
     126,   126,   127,   127,   127,   127,   127,   128,   129,   130,
     130,   130,   130,   131,   132,   133,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   136,
     137,   137,   138,   139,   139,   139,   139,   139,   140,   140,
     140,   140,   141,   141,   141,   141,   141,   141,   142,   142,
     142,   142,   143,   143,   144,   145,   145,   145,   145,   146,
     146,   147,   147,   148,   148,   149,   149,   150,   150,   150,
     150,   150,   150,   151,   151,   152,   152,   153,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   155,   156,   157,
     158,   158,   158,   158,   158,   158,   159,   160,   161,   161,
     162,   162,   162,   162,   162,   162,   162,   162,   163,   163,
     163,   164,   164,   164,   165,   165,   165,   166,   166,   167,
     167,   167,   167,   167,   167,   168,   169,   169,   169,   169,
     170,   171,   172,   172,   172,   172,   173,   174,   175,   176,
     177,   177,   178
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     1,     1,     1,     2,
       1,     3,     3,     3,     8,     4,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     8,     1,
       3,     0,     3,     3,     2,     3,     3,     1,     4,     1,
       1,     3,     3,     1,     1,     5,     8,     8,     8,     8,
       8,     8,     7,     7,     7,     7,     7,     7,     5,     6,
       6,     7,     7,     5,     7,     9,     8,    12,     4,     3,
       1,     3,     2,     1,     1,     1,     1,     1,     5,     7,
       3,     0,     3,     3,     5,     5,     5,     1,     5,     7,
       3,     0,     3,     0,     1,     5,     5,     7,     0,     3,
       9,     1,     1,     4,     0,     1,     0,     5,     5,     5,
       5,     7,     0,     1,     3,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,    11,     1,
       3,     3,     1,     3,     5,     5,     1,     1,     1,     2,
       2,     2,     1,     1,     2,     2,     1,     1,     3,     3,
       8,     1,     3,     3,     3,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       3,     5,     1,     1,     1,     1,    12,     8,    11,     7,
       7,     8,     1
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
  case 11: /* input_statement: INPUT CSVFILE SEMICOLON  */
#line 67 "rc_parser.y"
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
#line 1859 "y.tab.c"
    break;

  case 13: /* assignment_statement: dataframe_list '=' function_call_statement  */
#line 87 "rc_parser.y"
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
#line 1877 "y.tab.c"
    break;

  case 15: /* dataframe: DATAFRAME '(' IDENTIFIER ')'  */
#line 105 "rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));
                                                                (yyval.str) = strdup(buffer); 
                                                            }
#line 1887 "y.tab.c"
    break;

  case 70: /* dataframe_list: dataframe  */
#line 212 "rc_parser.y"
                                                            { 
                                                                (yyval.str) = (yyvsp[0].str);
                                                            }
#line 1895 "y.tab.c"
    break;

  case 71: /* dataframe_list: dataframe_list ',' dataframe  */
#line 215 "rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s,%s", (yyvsp[-2].str), (yyvsp[0].str));
                                                                (yyval.str) = strdup(buffer); 
                                                            }
#line 1905 "y.tab.c"
    break;

  case 94: /* axis_bit: INTNUM  */
#line 264 "rc_parser.y"
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
#line 1920 "y.tab.c"
    break;


#line 1924 "y.tab.c"

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

#line 473 "rc_parser.y"


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

    // Call yyparse to parse the input until EOF
    yyparse();
    // Clean up
    fclose(yyin);
    return 0;
}
