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

void yyerror(const char *s);
int yylex(); 
extern int yylineno;
extern FILE *yyin;
extern FILE *yyout;

#line 82 "y.tab.c"

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

#line 331 "y.tab.c"

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
  YYSYMBOL_INT_TYPE = 15,                  /* INT_TYPE  */
  YYSYMBOL_FLOAT_TYPE = 16,                /* FLOAT_TYPE  */
  YYSYMBOL_STRING_TYPE = 17,               /* STRING_TYPE  */
  YYSYMBOL_DATAFRAME = 18,                 /* DATAFRAME  */
  YYSYMBOL_SKIPNA = 19,                    /* SKIPNA  */
  YYSYMBOL_FILL = 20,                      /* FILL  */
  YYSYMBOL_FFILL = 21,                     /* FFILL  */
  YYSYMBOL_BFILL = 22,                     /* BFILL  */
  YYSYMBOL_INTERPOLATE = 23,               /* INTERPOLATE  */
  YYSYMBOL_METHOD = 24,                    /* METHOD  */
  YYSYMBOL_REGX = 25,                      /* REGX  */
  YYSYMBOL_INNER = 26,                     /* INNER  */
  YYSYMBOL_LEFT = 27,                      /* LEFT  */
  YYSYMBOL_RIGHT = 28,                     /* RIGHT  */
  YYSYMBOL_OUTER = 29,                     /* OUTER  */
  YYSYMBOL_SEP = 30,                       /* SEP  */
  YYSYMBOL_HEADER = 31,                    /* HEADER  */
  YYSYMBOL_INDEX_COL = 32,                 /* INDEX_COL  */
  YYSYMBOL_USECOLS = 33,                   /* USECOLS  */
  YYSYMBOL_INDEX = 34,                     /* INDEX  */
  YYSYMBOL_DROP = 35,                      /* DROP  */
  YYSYMBOL_INPLACE = 36,                   /* INPLACE  */
  YYSYMBOL_AXIS = 37,                      /* AXIS  */
  YYSYMBOL_NUMERIC = 38,                   /* NUMERIC  */
  YYSYMBOL_LOOP = 39,                      /* LOOP  */
  YYSYMBOL_IF = 40,                        /* IF  */
  YYSYMBOL_ELSE = 41,                      /* ELSE  */
  YYSYMBOL_BREAK = 42,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 43,                  /* CONTINUE  */
  YYSYMBOL_RTRN = 44,                      /* RTRN  */
  YYSYMBOL_FUNC = 45,                      /* FUNC  */
  YYSYMBOL_FLOATNUM = 46,                  /* FLOATNUM  */
  YYSYMBOL_STRING = 47,                    /* STRING  */
  YYSYMBOL_TRUE = 48,                      /* TRUE  */
  YYSYMBOL_FALSE = 49,                     /* FALSE  */
  YYSYMBOL_SINGLE_QUOTED_STRING = 50,      /* SINGLE_QUOTED_STRING  */
  YYSYMBOL_INPUT = 51,                     /* INPUT  */
  YYSYMBOL_OUTPUT = 52,                    /* OUTPUT  */
  YYSYMBOL_ADD_ASSIGN_OPERATOR = 53,       /* ADD_ASSIGN_OPERATOR  */
  YYSYMBOL_SUB_ASSIGN_OPERATOR = 54,       /* SUB_ASSIGN_OPERATOR  */
  YYSYMBOL_MUL_ASSIGN_OPERATOR = 55,       /* MUL_ASSIGN_OPERATOR  */
  YYSYMBOL_DIV_ASSIGN_OPERATOR = 56,       /* DIV_ASSIGN_OPERATOR  */
  YYSYMBOL_MOD_ASSIGN_OPERATOR = 57,       /* MOD_ASSIGN_OPERATOR  */
  YYSYMBOL_LE_OPERATOR = 58,               /* LE_OPERATOR  */
  YYSYMBOL_GE_OPERATOR = 59,               /* GE_OPERATOR  */
  YYSYMBOL_DEQ_OPERATOR = 60,              /* DEQ_OPERATOR  */
  YYSYMBOL_NE_OPERATOR = 61,               /* NE_OPERATOR  */
  YYSYMBOL_PERCENTAGE = 62,                /* PERCENTAGE  */
  YYSYMBOL_INTEGER = 63,                   /* INTEGER  */
  YYSYMBOL_IDENTIFIER = 64,                /* IDENTIFIER  */
  YYSYMBOL_SEMICOLON = 65,                 /* SEMICOLON  */
  YYSYMBOL_AND_OPERATOR = 66,              /* AND_OPERATOR  */
  YYSYMBOL_OR_OPERATOR = 67,               /* OR_OPERATOR  */
  YYSYMBOL_NOT_OPERATOR = 68,              /* NOT_OPERATOR  */
  YYSYMBOL_INC_OPERATOR = 69,              /* INC_OPERATOR  */
  YYSYMBOL_DEC_OPERATOR = 70,              /* DEC_OPERATOR  */
  YYSYMBOL_RIGHTSHIFT_OPERATOR = 71,       /* RIGHTSHIFT_OPERATOR  */
  YYSYMBOL_LEFTSHIFT_OPERATOR = 72,        /* LEFTSHIFT_OPERATOR  */
  YYSYMBOL_ELLIPSIS = 73,                  /* ELLIPSIS  */
  YYSYMBOL_EXPONENTIAL = 74,               /* EXPONENTIAL  */
  YYSYMBOL_DUST = 75,                      /* DUST  */
  YYSYMBOL_CSVFILE = 76,                   /* CSVFILE  */
  YYSYMBOL_FUNCTIONCALL = 77,              /* FUNCTIONCALL  */
  YYSYMBOL_PRINT = 78,                     /* PRINT  */
  YYSYMBOL_CONSTANT = 79,                  /* CONSTANT  */
  YYSYMBOL_READCSVFUNC = 80,               /* READCSVFUNC  */
  YYSYMBOL_HEADFUNC = 81,                  /* HEADFUNC  */
  YYSYMBOL_TAILFUNC = 82,                  /* TAILFUNC  */
  YYSYMBOL_RESETINDEXFUNC = 83,            /* RESETINDEXFUNC  */
  YYSYMBOL_TOCSVFUNC = 84,                 /* TOCSVFUNC  */
  YYSYMBOL_DESCRIBEFUNC = 85,              /* DESCRIBEFUNC  */
  YYSYMBOL_MEANFUNC = 86,                  /* MEANFUNC  */
  YYSYMBOL_MODEFUNC = 87,                  /* MODEFUNC  */
  YYSYMBOL_MEDIANFUNC = 88,                /* MEDIANFUNC  */
  YYSYMBOL_SUMFUNC = 89,                   /* SUMFUNC  */
  YYSYMBOL_MINFUNC = 90,                   /* MINFUNC  */
  YYSYMBOL_MAXFUNC = 91,                   /* MAXFUNC  */
  YYSYMBOL_MISSVALUEFUNC = 92,             /* MISSVALUEFUNC  */
  YYSYMBOL_EXCHANGEVALUEFUNC = 93,         /* EXCHANGEVALUEFUNC  */
  YYSYMBOL_GROUPBYFUNC = 94,               /* GROUPBYFUNC  */
  YYSYMBOL_CONCATFUNC = 95,                /* CONCATFUNC  */
  YYSYMBOL_MERGEFUNC = 96,                 /* MERGEFUNC  */
  YYSYMBOL_JOINFUNC = 97,                  /* JOINFUNC  */
  YYSYMBOL_AXIS_TOKEN = 98,                /* AXIS_TOKEN  */
  YYSYMBOL_DROP_TOKEN = 99,                /* DROP_TOKEN  */
  YYSYMBOL_INPLACE_TOKEN = 100,            /* INPLACE_TOKEN  */
  YYSYMBOL_METHOD_TOKEN = 101,             /* METHOD_TOKEN  */
  YYSYMBOL_HOW_TOKEN = 102,                /* HOW_TOKEN  */
  YYSYMBOL_ON_TOKEN = 103,                 /* ON_TOKEN  */
  YYSYMBOL_SUFFIXES_TOKEN = 104,           /* SUFFIXES_TOKEN  */
  YYSYMBOL_FILL_TOKEN = 105,               /* FILL_TOKEN  */
  YYSYMBOL_106_ = 106,                     /* '('  */
  YYSYMBOL_107_ = 107,                     /* ')'  */
  YYSYMBOL_108_ = 108,                     /* '{'  */
  YYSYMBOL_109_ = 109,                     /* '}'  */
  YYSYMBOL_110_ = 110,                     /* ','  */
  YYSYMBOL_111_ = 111,                     /* '['  */
  YYSYMBOL_112_ = 112,                     /* ']'  */
  YYSYMBOL_113_ = 113,                     /* '&'  */
  YYSYMBOL_114_ = 114,                     /* '|'  */
  YYSYMBOL_115_ = 115,                     /* '^'  */
  YYSYMBOL_116_ = 116,                     /* '~'  */
  YYSYMBOL_YYACCEPT = 117,                 /* $accept  */
  YYSYMBOL_translation_unit = 118,         /* translation_unit  */
  YYSYMBOL_declaration_statement = 119,    /* declaration_statement  */
  YYSYMBOL_input_statement = 120,          /* input_statement  */
  YYSYMBOL_assignment_statement = 121,     /* assignment_statement  */
  YYSYMBOL_dataframe = 122,                /* dataframe  */
  YYSYMBOL_expressions = 123,              /* expressions  */
  YYSYMBOL_Function_Declaration = 124,     /* Function_Declaration  */
  YYSYMBOL_argument_list = 125,            /* argument_list  */
  YYSYMBOL_function_body = 126,            /* function_body  */
  YYSYMBOL_return_statement = 127,         /* return_statement  */
  YYSYMBOL_Function_Print_Statement = 128, /* Function_Print_Statement  */
  YYSYMBOL_print_expressions = 129,        /* print_expressions  */
  YYSYMBOL_strings_list = 130,             /* strings_list  */
  YYSYMBOL_Function_Loop_Statement = 131,  /* Function_Loop_Statement  */
  YYSYMBOL_Print_Statement = 132,          /* Print_Statement  */
  YYSYMBOL_aggregate_function_calls = 133, /* aggregate_function_calls  */
  YYSYMBOL_function_call_statement = 134,  /* function_call_statement  */
  YYSYMBOL_concat_body = 135,              /* concat_body  */
  YYSYMBOL_dataframe_list = 136,           /* dataframe_list  */
  YYSYMBOL_to_exchange = 137,              /* to_exchange  */
  YYSYMBOL_exchange_value = 138,           /* exchange_value  */
  YYSYMBOL_exchange_body_optional = 139,   /* exchange_body_optional  */
  YYSYMBOL_missing_value_body_confirm = 140, /* missing_value_body_confirm  */
  YYSYMBOL_missing_value_body = 141,       /* missing_value_body  */
  YYSYMBOL_mean_body = 142,                /* mean_body  */
  YYSYMBOL_axis_bit = 143,                 /* axis_bit  */
  YYSYMBOL_mean_numerical = 144,           /* mean_numerical  */
  YYSYMBOL_reset_index_body_drop = 145,    /* reset_index_body_drop  */
  YYSYMBOL_BOOL = 146,                     /* BOOL  */
  YYSYMBOL_reset_index_body_implace = 147, /* reset_index_body_implace  */
  YYSYMBOL_head_tail_body = 148,           /* head_tail_body  */
  YYSYMBOL_readcsv_body = 149,             /* readcsv_body  */
  YYSYMBOL_SINGLE_QUOTED_STRING_LIST = 150, /* SINGLE_QUOTED_STRING_LIST  */
  YYSYMBOL_actual_parameters = 151,        /* actual_parameters  */
  YYSYMBOL_grouping = 152,                 /* grouping  */
  YYSYMBOL_operators = 153,                /* operators  */
  YYSYMBOL_Loop_Statement = 154,           /* Loop_Statement  */
  YYSYMBOL_Sub_Loop_Statement = 155,       /* Sub_Loop_Statement  */
  YYSYMBOL_initializtion = 156,            /* initializtion  */
  YYSYMBOL_Identifier_List = 157,          /* Identifier_List  */
  YYSYMBOL_update = 158,                   /* update  */
  YYSYMBOL_loop_body = 159,                /* loop_body  */
  YYSYMBOL_statment_list = 160,            /* statment_list  */
  YYSYMBOL_statement = 161,                /* statement  */
  YYSYMBOL_Function_Assignment_Statement = 162, /* Function_Assignment_Statement  */
  YYSYMBOL_predicate_list = 163,           /* predicate_list  */
  YYSYMBOL_predicate = 164,                /* predicate  */
  YYSYMBOL_logical_operators = 165,        /* logical_operators  */
  YYSYMBOL_comparison_operators = 166,     /* comparison_operators  */
  YYSYMBOL_how_clause = 167,               /* how_clause  */
  YYSYMBOL_how_list = 168,                 /* how_list  */
  YYSYMBOL_on_clause = 169,                /* on_clause  */
  YYSYMBOL_suffixes_clause = 170           /* suffixes_clause  */
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
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   457

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  117
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  163
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  390

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   350


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
       2,     2,     2,     2,     2,     2,     2,     9,   113,     2,
     106,   107,     7,     3,   110,     4,     6,     8,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      11,    10,    12,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   111,     5,   112,   115,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   108,   114,   109,   116,     2,     2,     2,
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
     105
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    48,    48,    49,    53,    54,    55,    56,    57,    58,
      62,    66,    67,    68,    72,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    91,    96,    97,
      98,   102,   103,   104,   106,   107,   111,   115,   119,   120,
     121,   122,   126,   130,   134,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   170,   174,
     175,   179,   183,   184,   185,   186,   187,   191,   192,   193,
     194,   198,   199,   200,   201,   202,   203,   207,   208,   209,
     210,   214,   215,   219,   232,   233,   234,   238,   239,   242,
     243,   247,   248,   252,   253,   257,   258,   259,   260,   261,
     262,   266,   267,   272,   273,   277,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   293,   297,   302,   306,   307,
     308,   309,   310,   311,   315,   319,   323,   324,   328,   329,
     330,   331,   336,   340,   341,   342,   346,   347,   348,   352,
     353,   357,   358,   359,   360,   361,   362,   366,   370,   371,
     372,   373,   377,   381
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
  "INTNUM", "INT_TYPE", "FLOAT_TYPE", "STRING_TYPE", "DATAFRAME", "SKIPNA",
  "FILL", "FFILL", "BFILL", "INTERPOLATE", "METHOD", "REGX", "INNER",
  "LEFT", "RIGHT", "OUTER", "SEP", "HEADER", "INDEX_COL", "USECOLS",
  "INDEX", "DROP", "INPLACE", "AXIS", "NUMERIC", "LOOP", "IF", "ELSE",
  "BREAK", "CONTINUE", "RTRN", "FUNC", "FLOATNUM", "STRING", "TRUE",
  "FALSE", "SINGLE_QUOTED_STRING", "INPUT", "OUTPUT",
  "ADD_ASSIGN_OPERATOR", "SUB_ASSIGN_OPERATOR", "MUL_ASSIGN_OPERATOR",
  "DIV_ASSIGN_OPERATOR", "MOD_ASSIGN_OPERATOR", "LE_OPERATOR",
  "GE_OPERATOR", "DEQ_OPERATOR", "NE_OPERATOR", "PERCENTAGE", "INTEGER",
  "IDENTIFIER", "SEMICOLON", "AND_OPERATOR", "OR_OPERATOR", "NOT_OPERATOR",
  "INC_OPERATOR", "DEC_OPERATOR", "RIGHTSHIFT_OPERATOR",
  "LEFTSHIFT_OPERATOR", "ELLIPSIS", "EXPONENTIAL", "DUST", "CSVFILE",
  "FUNCTIONCALL", "PRINT", "CONSTANT", "READCSVFUNC", "HEADFUNC",
  "TAILFUNC", "RESETINDEXFUNC", "TOCSVFUNC", "DESCRIBEFUNC", "MEANFUNC",
  "MODEFUNC", "MEDIANFUNC", "SUMFUNC", "MINFUNC", "MAXFUNC",
  "MISSVALUEFUNC", "EXCHANGEVALUEFUNC", "GROUPBYFUNC", "CONCATFUNC",
  "MERGEFUNC", "JOINFUNC", "AXIS_TOKEN", "DROP_TOKEN", "INPLACE_TOKEN",
  "METHOD_TOKEN", "HOW_TOKEN", "ON_TOKEN", "SUFFIXES_TOKEN", "FILL_TOKEN",
  "'('", "')'", "'{'", "'}'", "','", "'['", "']'", "'&'", "'|'", "'^'",
  "'~'", "$accept", "translation_unit", "declaration_statement",
  "input_statement", "assignment_statement", "dataframe", "expressions",
  "Function_Declaration", "argument_list", "function_body",
  "return_statement", "Function_Print_Statement", "print_expressions",
  "strings_list", "Function_Loop_Statement", "Print_Statement",
  "aggregate_function_calls", "function_call_statement", "concat_body",
  "dataframe_list", "to_exchange", "exchange_value",
  "exchange_body_optional", "missing_value_body_confirm",
  "missing_value_body", "mean_body", "axis_bit", "mean_numerical",
  "reset_index_body_drop", "BOOL", "reset_index_body_implace",
  "head_tail_body", "readcsv_body", "SINGLE_QUOTED_STRING_LIST",
  "actual_parameters", "grouping", "operators", "Loop_Statement",
  "Sub_Loop_Statement", "initializtion", "Identifier_List", "update",
  "loop_body", "statment_list", "statement",
  "Function_Assignment_Statement", "predicate_list", "predicate",
  "logical_operators", "comparison_operators", "how_clause", "how_list",
  "on_clause", "suffixes_clause", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-250)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     153,   -46,   -28,    32,     9,    24,    26,    38,    40,    57,
     117,  -250,  -250,    50,   101,  -250,  -250,    66,    19,  -250,
    -250,    76,   106,    58,   114,   147,   147,   120,   107,    92,
     190,  -250,  -250,  -250,   223,  -250,   164,   190,   102,   204,
     165,   108,   168,  -250,  -250,  -250,   123,   147,    10,    44,
    -250,  -250,  -250,    44,     1,  -250,    44,    70,  -250,   126,
     190,   131,   140,   151,   152,   156,   157,   158,   159,   123,
     265,  -250,  -250,  -250,    18,   155,   208,  -250,    95,    11,
     210,   264,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,
    -250,   160,  -250,   147,   222,   120,   252,   224,  -250,   -45,
     190,   259,   259,   294,   254,   225,    36,   308,   196,  -250,
    -250,   147,    34,   209,  -250,   324,   227,   272,  -250,   232,
     233,   234,   235,   236,   238,  -250,    27,  -250,  -250,   123,
    -250,  -250,  -250,    44,  -250,    44,  -250,   327,   333,   335,
     336,   337,  -250,   239,   240,  -250,   241,   244,   342,   243,
     126,  -250,   245,  -250,   246,   304,   247,   253,    44,  -250,
    -250,  -250,  -250,  -250,  -250,  -250,  -250,   147,   147,   296,
     155,   155,    30,    -9,  -250,   321,   321,   321,   321,   321,
     321,   311,   356,   313,   350,   351,   255,   -23,   330,   266,
    -250,  -250,    25,   334,   262,   267,    48,    69,   268,  -250,
      13,   264,    44,    44,   361,   269,  -250,  -250,  -250,  -250,
    -250,   147,   271,    55,   263,   314,    -9,  -250,   315,   363,
     273,   273,   273,   273,   273,   273,  -250,   231,   126,   126,
     126,   264,  -250,  -250,   126,   368,   274,   372,   275,  -250,
     276,   374,  -250,  -250,  -250,   377,    17,  -250,   378,   379,
     246,  -250,  -250,  -250,  -250,  -250,  -250,   280,   100,   147,
     283,    44,   328,   120,   329,   331,   332,   286,    55,  -250,
     338,  -250,    -9,  -250,    -9,   384,    42,   285,   292,   293,
     295,   297,   298,   300,   301,   302,   303,   305,   306,  -250,
    -250,  -250,    84,  -250,   384,  -250,   125,   307,   349,   -23,
     166,   237,   290,   -23,  -250,   139,   309,  -250,    44,    55,
    -250,   115,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,
    -250,  -250,   404,   405,  -250,  -250,  -250,  -250,  -250,  -250,
     310,   312,   316,   317,   318,   319,   126,  -250,  -250,  -250,
    -250,  -250,  -250,   408,   320,  -250,  -250,  -250,  -250,  -250,
     264,   246,   410,   411,  -250,  -250,   322,  -250,   -23,   -23,
    -250,  -250,  -250,  -250,  -250,  -250,  -250,   382,   323,   127,
    -250,   325,   -23,  -250,  -250,  -250,  -250,   412,   326,   246,
     264,  -250,   339,  -250,  -250,   135,   264,  -250,   142,  -250
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     6,     0,    69,     5,     7,     0,     0,     8,
     125,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     3,     4,     0,     9,     0,     0,     0,   130,
       0,   127,    30,    10,    22,    23,    21,     0,     0,    11,
      26,    25,    24,   113,     0,    42,    38,     0,    39,   110,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    70,    14,     0,     0,     0,    28,     0,     0,
       0,     0,   116,   117,   118,   119,   120,   121,   122,   123,
     124,     0,    67,     0,     0,     0,     0,     0,    69,     0,
       0,   104,   104,     0,     0,     0,     0,     0,     0,   128,
     129,     0,     0,     0,   143,   131,     0,     0,   115,     0,
       0,     0,     0,     0,     0,   111,     0,    16,    17,    15,
      20,    19,    18,   114,    44,    41,    40,     0,     0,     0,
       0,     0,    57,     0,     0,   103,     0,     0,     0,   102,
     110,    62,     0,    86,    90,     0,     0,     0,   148,   151,
     152,   153,   154,   156,   155,   149,   150,     0,     0,     0,
       0,     0,     0,     0,    29,    92,    92,    92,    92,    92,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      58,    59,     0,     0,     0,     0,     0,    92,     0,    71,
       0,     0,   147,   146,     0,     0,   134,   144,   145,   132,
     133,     0,     0,     0,     0,     0,     0,    43,     0,     0,
      96,    96,    96,    96,    96,    96,   112,     0,   110,   110,
     110,     0,    99,   100,   110,     0,     0,     0,     0,    97,
       0,     0,    60,    61,    81,     0,     0,    82,     0,     0,
      90,    63,    72,    73,    75,    76,    74,    80,     0,     0,
       0,    36,     0,     0,     0,     0,     0,     0,   135,   136,
       0,    27,     0,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   105,
     106,   107,     0,   108,     0,    65,     0,     0,     0,     0,
       0,     0,     0,     0,    89,    92,     0,    13,   142,     0,
      35,     0,   140,   141,   139,    31,   137,   138,    34,    32,
      93,    91,     0,     0,    51,    52,    53,    54,    55,    56,
       0,     0,     0,     0,     0,     0,   110,    68,   158,   159,
     160,   161,   157,     0,     0,    98,   101,    83,    84,    85,
       0,    90,     0,     0,    79,    64,     0,    37,     0,     0,
      45,    46,    47,    48,    49,    50,   109,     0,     0,     0,
      87,     0,     0,   126,    95,    94,   162,     0,     0,    90,
       0,    77,     0,    66,    88,     0,     0,    78,     0,   163
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -250,  -250,   418,  -250,  -250,     3,   -25,  -250,  -250,  -158,
    -250,  -189,   171,   340,  -250,  -250,   -74,    21,  -250,   369,
    -250,  -250,  -250,  -250,  -238,  -169,   143,    88,  -250,  -249,
    -250,   341,  -146,  -195,  -250,   347,  -250,  -250,    81,  -250,
    -250,  -250,   130,  -250,   172,  -164,  -250,   -81,   343,   344,
    -250,  -250,  -250,  -250
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    10,    11,    12,    13,    48,   112,    15,    78,   214,
     262,   215,    57,    58,   216,    16,    50,    51,   236,    18,
     156,   257,   306,   154,   198,   220,   321,   277,   149,   234,
     194,   146,    97,   126,    54,    52,    91,    19,   217,    40,
      41,   205,   267,   268,   269,   218,   113,   114,   167,   168,
     238,   342,   344,   378
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      49,    53,    56,    14,   195,   206,   258,   221,   222,   223,
     224,   225,   304,    14,    82,    83,    80,   130,    84,    85,
      86,    17,    79,   301,   266,   232,   233,   252,   250,    36,
       2,    17,   109,    61,    25,   211,   292,    82,    83,    70,
      72,    84,    85,    86,   209,   159,   160,    82,    83,   270,
     346,    84,    85,    86,   351,   204,   152,    71,   273,   253,
      21,   322,   244,    98,   110,    37,     1,   143,   133,   212,
     135,   153,   245,   239,   240,   254,   210,   255,    22,   266,
     323,    20,   289,   290,   291,    24,   158,   256,   293,   207,
     208,    20,   161,   162,   163,   164,    23,   264,   265,   213,
     165,   166,   248,   144,   270,   249,   219,    34,    92,   374,
     375,    93,   131,   370,   318,    33,   319,    31,   118,   204,
     266,    81,   247,   381,    87,    88,    89,    90,    81,    37,
      26,    35,    27,   212,    44,     1,   354,   181,     1,   182,
      38,   384,   202,   203,    28,   270,    29,    87,    88,    89,
      90,   338,   339,   340,   341,   369,     2,    87,    88,    89,
      90,    44,     3,    30,    42,     1,    45,    55,     4,    44,
      39,     1,   352,     1,   127,   353,   219,    94,     1,    43,
      95,     5,     1,    59,    46,   385,   261,   347,   348,   349,
     366,   388,     2,    45,   181,     6,   336,     7,     3,   246,
       7,    45,   116,    60,     4,   117,   128,   307,     1,    73,
     181,    46,     8,     9,    74,     8,     9,     5,    76,    46,
     159,   160,   357,   111,   129,    95,    47,     7,    69,    26,
      75,     6,    77,     7,   308,     7,    96,   181,    56,   379,
       7,   100,     8,     9,     7,   181,   101,   387,     8,     9,
       8,     9,   181,    47,   389,     8,     9,   102,   103,     8,
       9,    47,   104,   105,   106,   107,    47,   161,   162,   163,
     164,   108,   115,   145,   169,   165,   166,    62,    63,    64,
      65,    66,   137,   138,   139,   140,   141,   134,    67,    68,
     157,    62,    63,    64,    65,    66,   119,   120,   121,   122,
     123,   124,    67,    68,    62,    63,    64,    65,    66,   278,
     279,   280,   281,   282,   125,    67,    68,   283,   284,   285,
     286,   287,   288,   119,   120,   121,   122,   123,   124,   148,
     150,   142,   151,   155,   172,   173,   174,   183,   175,   176,
     177,   178,   179,   184,   180,   185,   186,   187,   190,   188,
     189,   191,   192,   193,   199,   196,   197,   200,   219,   201,
     204,   226,   227,   228,   229,   230,   231,   235,   237,   242,
     241,   259,   271,   275,   243,   251,   260,   263,   294,   272,
     274,   295,   296,   276,   299,   297,   298,   300,   302,   303,
     305,   309,   324,   310,   312,   315,   313,   314,   320,   325,
     326,   350,   327,   317,   328,   329,   330,   331,   332,   333,
     343,   334,   335,   345,   358,   359,   355,   360,   367,   361,
     371,   372,   382,   362,   363,   364,   365,   377,    32,    99,
     368,   373,   376,   383,   311,   136,   380,   337,   132,   356,
     316,     0,     0,   147,     0,     0,     0,     0,     0,     0,
     386,     0,     0,     0,     0,     0,   170,   171
};

static const yytype_int16 yycheck[] =
{
      25,    26,    27,     0,   150,   169,   201,   176,   177,   178,
     179,   180,   250,    10,     3,     4,     6,    91,     7,     8,
       9,     0,    47,     6,   213,    48,    49,    14,   197,    10,
      39,    10,    14,    30,    10,    44,   231,     3,     4,    36,
      37,     7,     8,     9,    14,    11,    12,     3,     4,   213,
     299,     7,     8,     9,   303,    64,    20,    36,   216,    46,
     106,    19,    14,    60,    46,   110,    18,   112,    93,    78,
      95,    35,    24,    48,    49,    62,    46,    64,   106,   268,
      38,     0,   228,   229,   230,    76,   111,    74,   234,   170,
     171,    10,    58,    59,    60,    61,    64,    42,    43,   108,
      66,    67,    33,   100,   268,    36,    37,     6,   107,   358,
     359,   110,    91,   351,   272,    65,   274,     0,   107,    64,
     309,   111,   196,   372,   113,   114,   115,   116,   111,   110,
     106,    65,   106,    78,    14,    18,   305,   110,    18,   112,
      64,   379,   167,   168,   106,   309,   106,   113,   114,   115,
     116,    26,    27,    28,    29,   350,    39,   113,   114,   115,
     116,    14,    45,   106,   106,    18,    46,    47,    51,    14,
      64,    18,    33,    18,    14,    36,    37,   107,    18,    65,
     110,    64,    18,    76,    64,   380,   211,    21,    22,    23,
     336,   386,    39,    46,   110,    78,   112,    80,    45,   196,
      80,    46,   107,   111,    51,   110,    46,   107,    18,   107,
     110,    64,    95,    96,    10,    95,    96,    64,   110,    64,
      11,    12,   107,    68,    64,   110,   106,    80,    64,   106,
      65,    78,    64,    80,   259,    80,   110,   110,   263,   112,
      80,   110,    95,    96,    80,   110,   106,   112,    95,    96,
      95,    96,   110,   106,   112,    95,    96,   106,   106,    95,
      96,   106,   106,   106,   106,   106,   106,    58,    59,    60,
      61,     6,    64,    14,    65,    66,    67,    81,    82,    83,
      84,    85,    30,    31,    32,    33,    34,    65,    92,    93,
      94,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    81,    82,    83,    84,    85,   221,
     222,   223,   224,   225,    50,    92,    93,    86,    87,    88,
      89,    90,    91,    86,    87,    88,    89,    90,    91,    35,
      76,   107,   107,    25,    10,   108,    64,    10,   106,   106,
     106,   106,   106,    10,   106,    10,    10,    10,   107,   110,
     110,   107,    10,   110,    50,   110,   110,   110,    37,   106,
      64,    50,     6,    50,    14,    14,   111,    37,   102,   107,
      36,    10,   109,    10,   107,   107,   107,   106,    10,    65,
      65,   107,    10,   110,    10,   110,   110,    10,    10,    10,
     110,   108,   107,    65,    65,   109,    65,    65,    14,   107,
     107,   111,   107,    65,   107,   107,   106,   106,   106,   106,
     103,   106,   106,    64,    10,    10,   107,   107,    10,   107,
      10,    10,    10,   107,   107,   107,   107,   104,    10,    60,
     110,   109,    50,   107,   263,    95,   111,   294,    91,   309,
     268,    -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,
     111,    -1,    -1,    -1,    -1,    -1,   113,   113
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    18,    39,    45,    51,    64,    78,    80,    95,    96,
     118,   119,   120,   121,   122,   124,   132,   134,   136,   154,
     155,   106,   106,    64,    76,    10,   106,   106,   106,   106,
     106,     0,   119,    65,     6,    65,    10,   110,    64,    64,
     156,   157,   106,    65,    14,    46,    64,   106,   122,   123,
     133,   134,   152,   123,   151,    47,   123,   129,   130,    76,
     111,   122,    81,    82,    83,    84,    85,    92,    93,    64,
     122,   134,   122,   107,    10,    65,   110,    64,   125,   123,
       6,   111,     3,     4,     7,     8,     9,   113,   114,   115,
     116,   153,   107,   110,   107,   110,   110,   149,   122,   136,
     110,   106,   106,   106,   106,   106,   106,   106,     6,    14,
      46,    68,   123,   163,   164,    64,   107,   110,   107,    86,
      87,    88,    89,    90,    91,    50,   150,    14,    46,    64,
     133,   134,   152,   123,    65,   123,   130,    30,    31,    32,
      33,    34,   107,   112,   122,    14,   148,   148,    35,   145,
      76,   107,    20,    35,   140,    25,   137,    94,   123,    11,
      12,    58,    59,    60,    61,    66,    67,   165,   166,    65,
     165,   166,    10,   108,    64,   106,   106,   106,   106,   106,
     106,   110,   112,    10,    10,    10,    10,    10,   110,   110,
     107,   107,    10,   110,   147,   149,   110,   110,   141,    50,
     110,   106,   123,   123,    64,   158,   162,   164,   164,    14,
      46,    44,    78,   108,   126,   128,   131,   155,   162,    37,
     142,   142,   142,   142,   142,   142,    50,     6,    50,    14,
      14,   111,    48,    49,   146,    37,   135,   102,   167,    48,
      49,    36,   107,   107,    14,    24,   122,   133,    33,    36,
     142,   107,    14,    46,    62,    64,    74,   138,   150,    10,
     107,   123,   127,   106,    42,    43,   128,   159,   160,   161,
     162,   109,    65,   126,    65,    10,   110,   144,   144,   144,
     144,   144,   144,    86,    87,    88,    89,    90,    91,   149,
     149,   149,   150,   149,    10,   107,    10,   110,   110,    10,
      10,     6,    10,    10,   141,   110,   139,   107,   123,   108,
      65,   129,    65,    65,    65,   109,   161,    65,   126,   126,
      14,   143,    19,    38,   107,   107,   107,   107,   107,   107,
     106,   106,   106,   106,   106,   106,   112,   143,    26,    27,
      28,    29,   168,   103,   169,    64,   146,    21,    22,    23,
     111,   146,    33,    36,   142,   107,   159,   107,    10,    10,
     107,   107,   107,   107,   107,   107,   149,    10,   110,   150,
     141,    10,    10,   109,   146,   146,    50,   104,   170,   112,
     111,   146,    10,   107,   141,   150,   111,   112,   150,   112
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   117,   118,   118,   119,   119,   119,   119,   119,   119,
     120,   121,   121,   121,   122,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   124,   125,   125,
     125,   126,   126,   126,   126,   126,   127,   128,   129,   129,
     129,   129,   130,   131,   132,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   135,   136,
     136,   137,   138,   138,   138,   138,   138,   139,   139,   139,
     139,   140,   140,   140,   140,   140,   140,   141,   141,   141,
     141,   142,   142,   143,   144,   144,   144,   145,   145,   146,
     146,   147,   147,   148,   148,   149,   149,   149,   149,   149,
     149,   150,   150,   151,   151,   152,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   154,   155,   156,   157,   157,
     157,   157,   157,   157,   158,   159,   160,   160,   161,   161,
     161,   161,   162,   163,   163,   163,   164,   164,   164,   165,
     165,   166,   166,   166,   166,   166,   166,   167,   168,   168,
     168,   168,   169,   170
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     1,     1,     1,     2,
       3,     3,     3,     8,     4,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     8,     1,     3,
       0,     3,     3,     2,     3,     3,     1,     4,     1,     1,
       3,     3,     1,     1,     5,     8,     8,     8,     8,     8,
       8,     7,     7,     7,     7,     7,     7,     5,     6,     6,
       7,     7,     5,     7,     9,     8,    12,     4,     3,     1,
       3,     2,     1,     1,     1,     1,     1,     4,     6,     2,
       0,     3,     3,     5,     5,     5,     1,     5,     7,     3,
       0,     3,     0,     1,     4,     4,     0,     3,     5,     1,
       1,     4,     0,     1,     0,     5,     5,     5,     5,     7,
       0,     1,     3,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,    11,     1,     3,     3,
       1,     3,     5,     5,     1,     1,     1,     2,     2,     2,
       2,     2,     3,     1,     3,     3,     3,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     3,     5
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
  case 93: /* axis_bit: INTNUM  */
#line 220 "rc_parser.y"
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
#line 1783 "y.tab.c"
    break;


#line 1787 "y.tab.c"

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

#line 385 "rc_parser.y"


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
    return EXIT_SUCCESS;
}
