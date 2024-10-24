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

#line 333 "y.tab.c"

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
  YYSYMBOL_INT_TYPE = 17,                  /* INT_TYPE  */
  YYSYMBOL_FLOAT_TYPE = 18,                /* FLOAT_TYPE  */
  YYSYMBOL_STRING_TYPE = 19,               /* STRING_TYPE  */
  YYSYMBOL_SKIPNA = 20,                    /* SKIPNA  */
  YYSYMBOL_FILL = 21,                      /* FILL  */
  YYSYMBOL_FFILL = 22,                     /* FFILL  */
  YYSYMBOL_BFILL = 23,                     /* BFILL  */
  YYSYMBOL_INTERPOLATE = 24,               /* INTERPOLATE  */
  YYSYMBOL_METHOD = 25,                    /* METHOD  */
  YYSYMBOL_REGX = 26,                      /* REGX  */
  YYSYMBOL_INNER = 27,                     /* INNER  */
  YYSYMBOL_LEFT = 28,                      /* LEFT  */
  YYSYMBOL_RIGHT = 29,                     /* RIGHT  */
  YYSYMBOL_OUTER = 30,                     /* OUTER  */
  YYSYMBOL_SEP = 31,                       /* SEP  */
  YYSYMBOL_HEADER = 32,                    /* HEADER  */
  YYSYMBOL_INDEX_COL = 33,                 /* INDEX_COL  */
  YYSYMBOL_USECOLS = 34,                   /* USECOLS  */
  YYSYMBOL_INDEX = 35,                     /* INDEX  */
  YYSYMBOL_DROP = 36,                      /* DROP  */
  YYSYMBOL_INPLACE = 37,                   /* INPLACE  */
  YYSYMBOL_AXIS = 38,                      /* AXIS  */
  YYSYMBOL_NUMERIC = 39,                   /* NUMERIC  */
  YYSYMBOL_LOOP = 40,                      /* LOOP  */
  YYSYMBOL_IF = 41,                        /* IF  */
  YYSYMBOL_ELSE = 42,                      /* ELSE  */
  YYSYMBOL_ELSEIF = 43,                    /* ELSEIF  */
  YYSYMBOL_BREAK = 44,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 45,                  /* CONTINUE  */
  YYSYMBOL_RTRN = 46,                      /* RTRN  */
  YYSYMBOL_FUNC = 47,                      /* FUNC  */
  YYSYMBOL_FLOATNUM = 48,                  /* FLOATNUM  */
  YYSYMBOL_STRING = 49,                    /* STRING  */
  YYSYMBOL_TRUE = 50,                      /* TRUE  */
  YYSYMBOL_FALSE = 51,                     /* FALSE  */
  YYSYMBOL_SINGLE_QUOTED_STRING = 52,      /* SINGLE_QUOTED_STRING  */
  YYSYMBOL_INPUT = 53,                     /* INPUT  */
  YYSYMBOL_OUTPUT = 54,                    /* OUTPUT  */
  YYSYMBOL_ADD_ASSIGN_OPERATOR = 55,       /* ADD_ASSIGN_OPERATOR  */
  YYSYMBOL_SUB_ASSIGN_OPERATOR = 56,       /* SUB_ASSIGN_OPERATOR  */
  YYSYMBOL_MUL_ASSIGN_OPERATOR = 57,       /* MUL_ASSIGN_OPERATOR  */
  YYSYMBOL_DIV_ASSIGN_OPERATOR = 58,       /* DIV_ASSIGN_OPERATOR  */
  YYSYMBOL_MOD_ASSIGN_OPERATOR = 59,       /* MOD_ASSIGN_OPERATOR  */
  YYSYMBOL_LE_OPERATOR = 60,               /* LE_OPERATOR  */
  YYSYMBOL_GE_OPERATOR = 61,               /* GE_OPERATOR  */
  YYSYMBOL_DEQ_OPERATOR = 62,              /* DEQ_OPERATOR  */
  YYSYMBOL_NE_OPERATOR = 63,               /* NE_OPERATOR  */
  YYSYMBOL_PERCENTAGE = 64,                /* PERCENTAGE  */
  YYSYMBOL_INTEGER = 65,                   /* INTEGER  */
  YYSYMBOL_SEMICOLON = 66,                 /* SEMICOLON  */
  YYSYMBOL_AND_OPERATOR = 67,              /* AND_OPERATOR  */
  YYSYMBOL_OR_OPERATOR = 68,               /* OR_OPERATOR  */
  YYSYMBOL_NOT_OPERATOR = 69,              /* NOT_OPERATOR  */
  YYSYMBOL_INC_OPERATOR = 70,              /* INC_OPERATOR  */
  YYSYMBOL_DEC_OPERATOR = 71,              /* DEC_OPERATOR  */
  YYSYMBOL_RIGHTSHIFT_OPERATOR = 72,       /* RIGHTSHIFT_OPERATOR  */
  YYSYMBOL_LEFTSHIFT_OPERATOR = 73,        /* LEFTSHIFT_OPERATOR  */
  YYSYMBOL_ELLIPSIS = 74,                  /* ELLIPSIS  */
  YYSYMBOL_EXPONENTIAL = 75,               /* EXPONENTIAL  */
  YYSYMBOL_DUST = 76,                      /* DUST  */
  YYSYMBOL_CSVFILE = 77,                   /* CSVFILE  */
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
  YYSYMBOL_conditional_body = 177          /* conditional_body  */
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
#define YYLAST   576

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  118
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  180
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  446

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
       0,    50,    50,    51,    55,    56,    57,    58,    59,    60,
      61,    65,    69,    70,    85,    89,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   108,   113,
     114,   115,   119,   120,   121,   123,   124,   128,   132,   136,
     137,   138,   139,   143,   147,   151,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   188,
     192,   193,   197,   201,   202,   203,   204,   205,   209,   210,
     211,   212,   216,   217,   218,   219,   220,   221,   225,   226,
     227,   228,   232,   233,   237,   251,   252,   253,   254,   258,
     259,   263,   264,   268,   269,   273,   274,   278,   279,   280,
     281,   282,   283,   287,   288,   293,   294,   298,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   314,   318,   323,
     327,   328,   329,   330,   331,   332,   336,   340,   344,   345,
     349,   350,   351,   352,   353,   354,   355,   356,   361,   362,
     363,   367,   368,   369,   373,   374,   375,   379,   380,   384,
     385,   386,   387,   388,   389,   393,   397,   398,   399,   400,
     404,   408,   412,   413,   414,   415,   419,   425,   430,   435,
     439
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
  "INTNUM", "IDENTIFIER", "DATAFRAME", "INT_TYPE", "FLOAT_TYPE",
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
  "head_tail_body", "readcsv_body", "single_quoted_string_list",
  "actual_parameters", "grouping", "operators", "Loop_Statement",
  "Sub_Loop_Statement", "initializtion", "Identifier_List", "update",
  "loop_body", "statment_list", "statement",
  "Function_Assignment_Statement", "predicate_list", "predicate",
  "logical_operators", "comparison_operators", "how_clause", "how_list",
  "on_clause", "suffixes_clause", "Conditional_Statements",
  "Conditional_Statements_1", "Conditional_Statements_2",
  "Conditional_Statements_3", "Conditional_Statements_4",
  "conditional_body", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-342)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     250,    57,   -74,   -52,   -45,    62,    72,    84,   114,   132,
     151,    69,  -342,  -342,    91,   157,  -342,  -342,   103,    18,
    -342,  -342,  -342,  -342,  -342,  -342,  -342,   226,   226,   166,
     249,   202,   163,   215,   182,   195,   170,   276,  -342,  -342,
    -342,   321,  -342,   199,   276,  -342,   194,  -342,   226,     6,
      56,  -342,  -342,  -342,    56,    -9,   197,   298,   245,   209,
     226,    45,   140,  -342,   306,  -342,  -342,    56,    -7,  -342,
     213,   276,   224,   232,   233,   237,   252,   254,   255,   260,
     194,   339,  -342,  -342,    23,   345,   304,  -342,  -342,  -342,
    -342,  -342,  -342,  -342,  -342,  -342,   229,  -342,   226,  -342,
      32,   202,   353,    56,  -342,  -342,  -342,  -342,  -342,  -342,
    -342,  -342,   226,   226,   263,   202,   202,  -342,     3,   307,
     182,   253,   266,  -342,    74,   276,   361,   361,   341,   312,
     275,    30,   364,   302,  -342,   284,   285,   301,   305,   315,
     318,  -342,   123,  -342,   194,  -342,  -342,  -342,  -342,    56,
    -342,  -342,   303,   403,    56,    56,   297,  -342,  -342,   314,
     425,  -342,    56,  -342,   431,   432,   434,   436,   437,  -342,
     337,   338,  -342,   342,   343,   442,   344,   213,  -342,   346,
    -342,   347,   401,   348,   349,   416,   416,   416,   416,   416,
     416,   408,   455,   112,    33,    60,   396,   397,   357,   399,
    -342,    19,  -342,  -342,   297,  -342,   400,  -342,   358,   159,
    -342,   415,   456,   457,   360,   161,   435,   366,  -342,  -342,
     196,   438,   368,   369,   101,    38,   370,  -342,   279,   304,
     464,   371,   371,   371,   371,   371,   371,  -342,   261,   469,
     372,  -342,  -342,  -342,   226,  -342,  -342,   182,  -342,   199,
    -342,  -342,   210,   226,   297,   373,   418,   159,  -342,   419,
     213,   213,   213,   304,  -342,  -342,   213,   471,   378,   477,
     377,  -342,   379,   479,  -342,  -342,  -342,   481,    34,  -342,
     482,   483,   347,  -342,  -342,  -342,  -342,  -342,  -342,   383,
      25,   484,    48,   387,   388,   389,   391,   392,   393,   395,
     398,   402,   404,   405,   406,   394,    56,    71,   498,  -342,
     407,   410,    56,   440,   409,  -342,   159,  -342,   159,  -342,
    -342,  -342,   156,  -342,   484,  -342,   352,   411,   473,   161,
     238,   329,   412,   161,  -342,    86,   413,  -342,  -342,  -342,
     500,   504,   508,  -342,  -342,  -342,  -342,  -342,  -342,   414,
     417,   420,   421,   422,   423,   297,  -342,   316,   297,   202,
    -342,  -342,  -342,  -342,   213,  -342,  -342,  -342,  -342,  -342,
    -342,   510,   424,   513,  -342,  -342,  -342,  -342,   304,   347,
     516,   517,   383,  -342,   161,   426,   161,  -342,  -342,  -342,
    -342,  -342,  -342,   427,   429,   430,   165,  -342,   480,   428,
     433,   189,  -342,   439,   161,  -342,   371,   304,   371,  -342,
     304,  -342,   441,  -342,   524,   444,   304,   347,   304,   383,
    -342,   193,  -342,   111,   297,   443,  -342,   206,  -342,   217,
    -342,   371,  -342,   446,   304,  -342,   383,  -342,   466,   221,
    -342,   445,  -342,   297,   447,  -342
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
     146,     0,   143,   180,   137,   138,   147,   142,     0,     0,
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
       0,     0,    37,     0,     0,    28,     0,    34,     0,   107,
     108,   109,     0,   110,     0,    66,     0,     0,     0,     0,
       0,     0,     0,     0,    90,    93,     0,    14,    94,    92,
       0,     0,     0,    52,    53,    54,    55,    56,    57,     0,
       0,     0,     0,     0,     0,     0,    38,     0,     0,     0,
      36,    32,    35,    33,   112,    69,   166,   167,   168,   169,
     165,     0,     0,     0,   103,    84,    85,    86,     0,    91,
       0,     0,    81,    65,     0,     0,     0,    46,    47,    48,
      49,    50,    51,     0,     0,     0,     0,   111,     0,     0,
       0,     0,    88,     0,     0,    80,    98,     0,    98,   128,
       0,   178,     0,   170,     0,     0,     0,    91,     0,    81,
      96,     0,    95,     0,     0,     0,    67,     0,    89,     0,
      78,    98,   150,     0,     0,   100,    81,    97,   177,     0,
      79,     0,   171,     0,     0,   176
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -342,  -342,   528,  -342,  -342,     0,   -24,  -342,  -342,  -163,
    -342,  -174,   294,   448,  -342,  -342,   -89,     2,  -342,    50,
    -342,  -342,  -341,  -342,  -276,  -167,   218,  -218,  -342,  -149,
    -342,   449,  -169,  -224,  -342,   450,  -342,    79,  -171,  -342,
    -342,  -342,  -212,  -342,   340,  -184,  -100,   160,   486,   487,
    -342,  -342,  -342,  -342,   178,  -342,  -342,  -342,  -342,  -324
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    11,    12,    13,    14,    49,    61,    16,   118,   255,
     313,   199,    68,    69,   257,    17,    51,    52,   268,   201,
     183,   289,   336,   181,   226,   231,   339,   293,   176,   266,
     222,   173,   122,   142,    55,    53,    96,   202,    21,    58,
      59,   240,   203,   204,   205,   206,    62,    63,   115,   116,
     270,   370,   372,   415,   207,    23,    24,    25,    26,   208
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      15,   152,    18,    50,    54,   290,   334,   146,   223,   241,
      67,    15,    85,    18,   294,   295,   296,   297,   298,   232,
     233,   234,   235,   236,    84,   259,    87,    88,    43,   249,
      89,    90,    91,    29,   395,   256,   103,    72,   258,   322,
     331,   405,   314,    81,    83,    82,   150,   242,    87,    88,
      19,   179,    89,    90,    91,    30,   104,   105,   282,    87,
      88,    19,    31,    89,    90,    91,   180,    27,   340,    38,
     244,   123,   280,   259,   149,   281,   230,    32,   430,    20,
     151,   243,   341,   256,     1,     2,   258,   342,   154,   155,
      20,   319,   320,   321,   317,   440,   162,   323,   147,    97,
     433,   119,    98,   402,   120,   106,   107,   108,   109,     3,
       4,   159,   110,   111,   160,   276,     5,     2,    86,   444,
     380,   124,     6,   381,   230,   171,   277,   239,     2,    44,
      44,   134,   259,   337,   259,   279,   191,    92,    93,    94,
      95,   428,   256,   393,   256,   258,    86,   258,     7,    33,
       8,   104,   105,   362,   401,   363,    15,    40,   200,    92,
      93,    94,    95,    41,    28,     9,    10,    28,   382,    42,
      92,    93,    94,    95,   239,     2,   104,   105,    22,   356,
     374,    56,   120,   421,   379,    44,   423,   170,   420,    22,
     422,    34,   427,   123,   429,   397,    45,    46,     2,     3,
     106,   107,   108,   109,    15,   253,   200,   110,   111,   123,
     439,   264,   265,   437,    80,     2,    45,    46,     2,   432,
     306,    35,   191,    67,   278,   106,   107,   108,   109,   312,
      47,    66,   110,   111,   191,   406,   192,   408,   198,    36,
      45,    46,     2,   143,   144,     2,   271,   272,   114,   308,
      47,   309,   310,   311,    15,   419,   200,   123,    37,   396,
     375,   376,   377,     8,    57,     1,     2,   191,   254,   364,
      64,    60,    70,   412,    47,   157,   158,   145,     9,    10,
       8,    65,    71,     8,   164,   165,   166,   167,   168,    48,
       3,     4,     2,   284,   285,     9,    10,     5,     9,    10,
     191,    28,   417,     6,   191,    99,   431,     8,   100,    48,
       8,   101,   195,     2,   104,   105,   123,   191,   123,   435,
     102,   117,     9,    10,   121,     9,    10,   286,   191,     7,
     436,     8,   191,    48,   442,   125,    48,     3,     4,   126,
     127,   196,   197,   287,   128,   133,     9,    10,   299,   300,
     301,   302,   303,   304,   288,    15,   141,   200,    15,   129,
     200,   130,   131,   106,   107,   108,   109,   132,   153,   193,
     110,   111,   156,   161,   169,   172,   198,   175,     8,   366,
     367,   368,   369,   178,    73,    74,    75,    76,    77,   177,
     182,   185,   186,     9,    10,    78,    79,   184,    73,    74,
      75,    76,    77,    73,    74,    75,    76,    77,   187,    78,
      79,   394,   188,   194,    78,    79,   135,   136,   137,   138,
     139,   140,   189,   209,    15,   190,   200,    73,    74,    75,
      76,    77,   135,   136,   137,   138,   139,   140,    78,    79,
     210,   211,   212,    15,   213,   200,   214,   215,   216,   217,
     218,   219,   220,   227,   230,   221,   229,   224,   225,   228,
     237,   238,   245,   246,   247,   248,   251,   260,   252,   269,
     261,   262,   263,   267,   291,   273,   274,   275,   283,   244,
     305,   324,   292,   315,   316,   318,   325,   326,   327,   329,
     328,   330,   332,   333,   335,   343,   344,   345,   338,   346,
     347,   348,   349,   355,   357,   350,   360,   373,   441,   351,
     384,   352,   353,   354,   385,   371,   358,   359,   386,   361,
     398,   383,   387,   400,   378,   388,   403,   404,   389,   390,
     391,   392,   413,   414,   425,   399,   410,   409,   407,    39,
     411,   307,   365,     0,   250,   416,   148,   112,   113,     0,
     424,   418,   426,     0,   443,   434,   438,   445,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   163,     0,
       0,     0,     0,     0,     0,     0,   174
};

static const yytype_int16 yycheck[] =
{
       0,   101,     0,    27,    28,   229,   282,    96,   177,   193,
      34,    11,     6,    11,   232,   233,   234,   235,   236,   186,
     187,   188,   189,   190,    48,   209,     3,     4,    10,    10,
       7,     8,     9,   107,   358,   209,    60,    37,   209,   263,
       6,   382,   254,    43,    44,    43,    14,    14,     3,     4,
       0,    21,     7,     8,     9,   107,    11,    12,   225,     3,
       4,    11,   107,     7,     8,     9,    36,    10,    20,     0,
      10,    71,    34,   257,    98,    37,    38,    15,   419,     0,
      48,    48,    34,   257,    15,    16,   257,    39,   112,   113,
      11,   260,   261,   262,   257,   436,   120,   266,    96,   108,
     424,   108,   111,   379,   111,    60,    61,    62,    63,    40,
      41,   108,    67,    68,   111,    14,    47,    16,   112,   443,
      34,    71,    53,    37,    38,   125,    25,    15,    16,   111,
     111,   108,   316,   108,   318,   224,   111,   114,   115,   116,
     117,   417,   316,   355,   318,   316,   112,   318,    79,    77,
      81,    11,    12,   316,   378,   318,   156,    66,   156,   114,
     115,   116,   117,     6,   107,    96,    97,   107,   335,    66,
     114,   115,   116,   117,    15,    16,    11,    12,     0,   108,
     329,    15,   111,   407,   333,   111,   410,   113,   406,    11,
     408,   107,   416,   193,   418,   364,    14,    15,    16,    40,
      60,    61,    62,    63,   204,    46,   204,    67,    68,   209,
     434,    50,    51,   431,    15,    16,    14,    15,    16,   108,
     244,   107,   111,   247,   224,    60,    61,    62,    63,   253,
      48,    49,    67,    68,   111,   384,   113,   386,    79,   107,
      14,    15,    16,    14,    15,    16,    50,    51,   108,   249,
      48,   249,    42,    43,   254,   404,   254,   257,   107,   359,
      22,    23,    24,    81,    15,    15,    16,   111,   109,   113,
     107,    69,    77,   108,    48,   115,   116,    48,    96,    97,
      81,    66,   112,    81,    31,    32,    33,    34,    35,   107,
      40,    41,    16,    14,    15,    96,    97,    47,    96,    97,
     111,   107,   113,    53,   111,   108,   113,    81,    10,   107,
      81,    66,    15,    16,    11,    12,   316,   111,   318,   113,
     111,    15,    96,    97,   111,    96,    97,    48,   111,    79,
     113,    81,   111,   107,   113,   111,   107,    40,    41,   107,
     107,    44,    45,    64,   107,     6,    96,    97,    87,    88,
      89,    90,    91,    92,    75,   355,    52,   355,   358,   107,
     358,   107,   107,    60,    61,    62,    63,   107,    15,    66,
      67,    68,   109,    66,   108,    14,    79,    36,    81,    27,
      28,    29,    30,   108,    82,    83,    84,    85,    86,    77,
      26,   107,   107,    96,    97,    93,    94,    95,    82,    83,
      84,    85,    86,    82,    83,    84,    85,    86,   107,    93,
      94,    95,   107,    10,    93,    94,    87,    88,    89,    90,
      91,    92,   107,   109,   424,   107,   424,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      15,    10,    10,   443,    10,   443,    10,    10,   111,   111,
     108,   108,    10,    52,    38,   111,   107,   111,   111,   111,
      52,     6,    66,    66,   107,    66,    66,    52,   110,   103,
      14,    14,   112,    38,    10,    37,   108,   108,   108,    10,
     108,    10,   111,   110,    66,    66,   108,    10,   111,    10,
     111,    10,    10,    10,   111,   108,   108,   108,    14,   108,
     108,   108,   107,   109,     6,   107,    66,    34,    42,   107,
      10,   107,   107,   107,    10,   104,   109,   107,    10,   110,
      10,   108,   108,    10,   112,   108,    10,    10,   108,   108,
     108,   108,    52,   105,    10,   111,   107,   110,   112,    11,
     110,   247,   324,    -1,   204,   112,    96,    61,    61,    -1,
     109,   112,   108,    -1,   109,   112,   110,   110,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   127
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    16,    40,    41,    47,    53,    79,    81,    96,
      97,   119,   120,   121,   122,   123,   125,   133,   135,   137,
     155,   156,   172,   173,   174,   175,   176,    10,   107,   107,
     107,   107,    15,    77,   107,   107,   107,   107,     0,   120,
      66,     6,    66,    10,   111,    14,    15,    48,   107,   123,
     124,   134,   135,   153,   124,   152,    15,    15,   157,   158,
      69,   124,   164,   165,   107,    66,    49,   124,   130,   131,
      77,   112,   123,    82,    83,    84,    85,    86,    93,    94,
      15,   123,   135,   123,   124,     6,   112,     3,     4,     7,
       8,     9,   114,   115,   116,   117,   154,   108,   111,   108,
      10,    66,   111,   124,    11,    12,    60,    61,    62,    63,
      67,    68,   166,   167,   108,   166,   167,    15,   126,   108,
     111,   111,   150,   123,   137,   111,   107,   107,   107,   107,
     107,   107,   107,     6,   108,    87,    88,    89,    90,    91,
      92,    52,   151,    14,    15,    48,   134,   135,   153,   124,
      14,    48,   164,    15,   124,   124,   109,   165,   165,   108,
     111,    66,   124,   131,    31,    32,    33,    34,    35,   108,
     113,   123,    14,   149,   149,    36,   146,    77,   108,    21,
      36,   141,    26,   138,    95,   107,   107,   107,   107,   107,
     107,   111,   113,    66,    10,    15,    44,    45,    79,   129,
     135,   137,   155,   160,   161,   162,   163,   172,   177,   109,
      15,    10,    10,    10,    10,    10,   111,   111,   108,   108,
      10,   111,   148,   150,   111,   111,   142,    52,   111,   107,
      38,   143,   143,   143,   143,   143,   143,    52,     6,    15,
     159,   163,    14,    48,    10,    66,    66,   107,    66,    10,
     162,    66,   110,    46,   109,   127,   129,   132,   156,   163,
      52,    14,    14,   112,    50,    51,   147,    38,   136,   103,
     168,    50,    51,    37,   108,   108,    14,    25,   123,   134,
      34,    37,   143,   108,    14,    15,    48,    64,    75,   139,
     151,    10,   111,   145,   145,   145,   145,   145,   145,    87,
      88,    89,    90,    91,    92,   108,   124,   130,   123,   135,
      42,    43,   124,   128,   160,   110,    66,   127,    66,   150,
     150,   150,   151,   150,    10,   108,    10,   111,   111,    10,
      10,     6,    10,    10,   142,   111,   140,   108,    14,   144,
      20,    34,    39,   108,   108,   108,   108,   108,   108,   107,
     107,   107,   107,   107,   107,   109,   108,     6,   109,   107,
      66,   110,   127,   127,   113,   144,    27,    28,    29,    30,
     169,   104,   170,    34,   147,    22,    23,    24,   112,   147,
      34,    37,   143,   108,    10,    10,    10,   108,   108,   108,
     108,   108,   108,   160,    95,   177,   164,   150,    10,   111,
      10,   151,   142,    10,    10,   140,   147,   112,   147,   110,
     107,   110,   108,    52,   105,   171,   112,   113,   112,   147,
     145,   151,   145,   151,   109,    10,   108,   151,   142,   151,
     140,   113,   108,   177,   112,   113,   113,   145,   110,   151,
     140,    42,   113,   109,   177,   110
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
     177
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
       3,     5,     1,     1,     1,     1,    18,    14,    11,     7,
       1
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
  case 13: /* assignment_statement: dataframe_list '=' function_call_statement  */
#line 71 "rc_parser.y"
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
#line 1846 "y.tab.c"
    break;

  case 94: /* axis_bit: INTNUM  */
#line 238 "rc_parser.y"
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
#line 1861 "y.tab.c"
    break;


#line 1865 "y.tab.c"

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

#line 442 "rc_parser.y"


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
