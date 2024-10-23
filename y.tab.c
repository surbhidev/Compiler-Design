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
  YYSYMBOL_ELSEIF = 42,                    /* ELSEIF  */
  YYSYMBOL_BREAK = 43,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 44,                  /* CONTINUE  */
  YYSYMBOL_RTRN = 45,                      /* RTRN  */
  YYSYMBOL_FUNC = 46,                      /* FUNC  */
  YYSYMBOL_FLOATNUM = 47,                  /* FLOATNUM  */
  YYSYMBOL_STRING = 48,                    /* STRING  */
  YYSYMBOL_TRUE = 49,                      /* TRUE  */
  YYSYMBOL_FALSE = 50,                     /* FALSE  */
  YYSYMBOL_SINGLE_QUOTED_STRING = 51,      /* SINGLE_QUOTED_STRING  */
  YYSYMBOL_INPUT = 52,                     /* INPUT  */
  YYSYMBOL_OUTPUT = 53,                    /* OUTPUT  */
  YYSYMBOL_ADD_ASSIGN_OPERATOR = 54,       /* ADD_ASSIGN_OPERATOR  */
  YYSYMBOL_SUB_ASSIGN_OPERATOR = 55,       /* SUB_ASSIGN_OPERATOR  */
  YYSYMBOL_MUL_ASSIGN_OPERATOR = 56,       /* MUL_ASSIGN_OPERATOR  */
  YYSYMBOL_DIV_ASSIGN_OPERATOR = 57,       /* DIV_ASSIGN_OPERATOR  */
  YYSYMBOL_MOD_ASSIGN_OPERATOR = 58,       /* MOD_ASSIGN_OPERATOR  */
  YYSYMBOL_LE_OPERATOR = 59,               /* LE_OPERATOR  */
  YYSYMBOL_GE_OPERATOR = 60,               /* GE_OPERATOR  */
  YYSYMBOL_DEQ_OPERATOR = 61,              /* DEQ_OPERATOR  */
  YYSYMBOL_NE_OPERATOR = 62,               /* NE_OPERATOR  */
  YYSYMBOL_PERCENTAGE = 63,                /* PERCENTAGE  */
  YYSYMBOL_INTEGER = 64,                   /* INTEGER  */
  YYSYMBOL_IDENTIFIER = 65,                /* IDENTIFIER  */
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
  YYSYMBOL_SINGLE_QUOTED_STRING_LIST = 151, /* SINGLE_QUOTED_STRING_LIST  */
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
#define YYLAST   564

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  118
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  179
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  434

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
       0,    48,    48,    49,    53,    54,    55,    56,    57,    58,
      59,    63,    67,    68,    69,    73,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    92,    97,
      98,    99,   103,   104,   105,   107,   108,   112,   116,   120,
     121,   122,   123,   127,   131,   135,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   172,
     176,   177,   181,   185,   186,   187,   188,   189,   193,   194,
     195,   196,   200,   201,   202,   203,   204,   205,   209,   210,
     211,   212,   216,   217,   221,   235,   236,   237,   241,   242,
     246,   247,   251,   252,   256,   257,   261,   262,   263,   264,
     265,   266,   270,   271,   276,   277,   281,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   297,   301,   306,   310,
     311,   312,   313,   314,   315,   319,   323,   327,   328,   332,
     333,   334,   335,   336,   337,   338,   339,   344,   345,   346,
     350,   351,   352,   356,   357,   358,   362,   363,   367,   368,
     369,   370,   371,   372,   376,   380,   381,   382,   383,   387,
     391,   395,   396,   397,   398,   402,   408,   413,   418,   422
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
  "ELSEIF", "BREAK", "CONTINUE", "RTRN", "FUNC", "FLOATNUM", "STRING",
  "TRUE", "FALSE", "SINGLE_QUOTED_STRING", "INPUT", "OUTPUT",
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

#define YYPACT_NINF (-332)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     269,   -65,   -35,    -6,    96,    44,    19,    79,   101,   115,
     132,   151,  -332,  -332,    97,   164,  -332,  -332,   160,    12,
    -332,  -332,  -332,  -332,  -332,  -332,  -332,   136,   181,   203,
     145,   187,   217,   217,   215,   188,   171,   271,  -332,  -332,
    -332,   192,  -332,    87,   271,   189,   285,   239,   206,  -332,
    -332,   216,   217,   217,     3,    27,  -332,  -332,  -332,   120,
    -332,   264,  -332,    57,    57,   -61,  -332,    57,     6,  -332,
     224,   271,   228,   234,   235,   242,   244,   245,   251,   263,
     216,   362,  -332,  -332,  -332,    34,   203,   306,    57,    50,
     304,   321,  -332,  -332,  -332,  -332,  -332,  -332,  -332,  -332,
    -332,  -332,  -332,  -332,  -332,  -332,  -332,  -332,  -332,   223,
     217,   217,   268,   203,   203,  -332,    67,  -332,   217,   313,
     215,   330,   270,  -332,    43,   271,   369,   369,   382,   342,
     315,    21,   395,   208,  -332,  -332,   314,   411,  -332,   317,
     319,   320,   322,   323,   325,  -332,   123,  -332,  -332,   216,
    -332,  -332,  -332,    57,    57,   288,  -332,  -332,   316,   357,
      57,  -332,    57,  -332,   418,   424,   425,   426,   427,  -332,
     327,   328,  -332,   332,   333,   432,   334,   224,  -332,   335,
    -332,   336,   392,   337,   343,    15,    37,   407,   407,   407,
     407,   407,   407,   398,   445,   386,   387,    30,   347,   389,
    -332,    13,  -332,  -332,   288,  -332,   390,  -332,   348,    31,
    -332,   406,   446,   447,   350,    58,   422,   360,  -332,  -332,
     143,   428,   358,   359,   135,   162,   361,  -332,   180,   321,
     455,   363,  -332,  -332,  -332,   458,   364,   364,   364,   364,
     364,   364,  -332,   312,  -332,  -332,   217,   215,  -332,    87,
    -332,  -332,   172,   217,   288,   366,   404,    31,  -332,   408,
     224,   224,   224,   321,  -332,  -332,   224,   462,   365,   467,
     367,  -332,   368,   470,  -332,  -332,  -332,   471,     4,  -332,
     472,   473,   336,  -332,  -332,  -332,  -332,  -332,  -332,   373,
      94,   376,   474,    36,   378,   379,   381,   383,   384,   385,
     388,   391,   393,   394,   396,   397,    57,   104,   484,  -332,
     399,   400,    57,   430,   401,  -332,    31,  -332,    31,  -332,
    -332,  -332,   127,  -332,   474,  -332,   119,   402,   429,    58,
      56,   318,   403,    58,  -332,   300,   405,  -332,   288,  -332,
    -332,   487,   489,  -332,  -332,  -332,  -332,  -332,  -332,   409,
     410,   412,   413,   414,   415,  -332,   261,   288,   203,  -332,
    -332,  -332,  -332,   224,  -332,  -332,  -332,  -332,  -332,  -332,
     492,   416,  -332,  -332,  -332,  -332,  -332,   321,   336,   495,
     499,   373,  -332,   419,    58,    58,  -332,  -332,  -332,  -332,
    -332,  -332,   417,   420,   199,  -332,   459,   421,   131,  -332,
     423,    58,  -332,  -332,  -332,  -332,   321,  -332,   431,  -332,
     502,   433,   336,   321,   373,   112,   288,   434,  -332,  -332,
     158,  -332,  -332,   435,   321,   373,   475,   168,  -332,   438,
    -332,   288,   439,  -332
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     6,     0,    70,     5,     7,     0,     0,
       8,   126,    10,   171,   172,   173,   174,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     3,
       4,     0,     9,     0,     0,     0,   131,     0,   128,    23,
      24,    22,     0,     0,     0,     0,    27,    26,    25,     0,
     150,    31,    11,    12,   114,     0,    43,    39,     0,    40,
     111,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    13,    71,    15,     0,     0,     0,   155,     0,
       0,     0,   117,   118,   119,   120,   121,   158,   159,   160,
     161,   163,   162,   156,   157,   122,   123,   124,   125,     0,
       0,     0,     0,     0,     0,    29,     0,    68,     0,     0,
       0,     0,     0,    70,     0,     0,   105,   105,     0,     0,
       0,     0,     0,     0,   129,   130,     0,   132,   116,     0,
       0,     0,     0,     0,     0,   112,     0,    17,    18,    16,
      21,    20,    19,   154,   153,     0,   151,   152,     0,     0,
     115,    45,    42,    41,     0,     0,     0,     0,     0,    58,
       0,     0,   104,     0,     0,     0,   103,   111,    63,     0,
      87,    91,     0,     0,     0,     0,     0,    93,    93,    93,
      93,    93,    93,     0,     0,     0,     0,     0,     0,     0,
     145,     0,   142,   179,   136,   137,   146,   141,     0,     0,
      30,     0,     0,     0,     0,     0,     0,     0,    59,    60,
       0,     0,     0,     0,     0,    93,     0,    72,     0,     0,
       0,     0,   135,   133,   134,     0,    97,    97,    97,    97,
      97,    97,   113,     0,   143,   144,     0,     0,   140,     0,
     138,   139,   178,     0,     0,     0,     0,     0,    44,     0,
     111,   111,   111,     0,   100,   101,   111,     0,     0,     0,
       0,    98,     0,     0,    61,    62,    82,     0,     0,    83,
       0,     0,    91,    64,    73,    74,    76,    77,    75,    81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   147,     0,     0,   148,
       0,     0,    37,     0,     0,    28,     0,    34,     0,   106,
     107,   108,     0,   109,     0,    66,     0,     0,     0,     0,
       0,     0,     0,     0,    90,    93,     0,    14,     0,    94,
      92,     0,     0,    52,    53,    54,    55,    56,    57,     0,
       0,     0,     0,     0,     0,    38,     0,     0,     0,    36,
      32,    35,    33,   111,    69,   165,   166,   167,   168,   164,
       0,     0,    99,   102,    84,    85,    86,     0,    91,     0,
       0,    81,    65,     0,     0,     0,    46,    47,    48,    49,
      50,    51,     0,     0,     0,   110,     0,     0,     0,    88,
       0,     0,    80,   127,    96,    95,     0,   177,     0,   169,
       0,     0,    91,     0,    81,     0,     0,     0,    67,    89,
       0,    78,   149,     0,     0,    81,   176,     0,    79,     0,
     170,     0,     0,   175
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -332,  -332,   503,  -332,  -332,     0,   -28,  -332,  -332,  -225,
    -332,  -189,   272,   436,  -332,  -332,  -102,     2,  -332,    62,
    -332,  -332,  -275,  -332,  -274,  -173,   201,   174,  -332,  -266,
    -332,   437,  -163,  -217,  -332,   441,  -332,   102,  -188,  -332,
    -332,  -332,  -226,  -332,   324,  -182,   -85,    63,   476,   477,
    -332,  -332,  -332,  -332,   109,  -332,  -332,  -332,  -332,  -331
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    11,    12,    13,    14,    54,    55,    16,   116,   255,
     313,   199,    68,    69,   257,    17,    56,    57,   268,   201,
     183,   289,   336,   181,   226,   236,   340,   294,   176,   266,
     222,   173,   122,   146,    65,    58,   109,   202,    21,    47,
      48,   231,   203,   204,   205,   206,    59,    60,   113,   114,
     270,   369,   371,   411,   207,    23,    24,    25,    26,   208
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      15,   136,    18,   232,    63,    64,    67,   150,   334,    90,
     331,    15,   290,    18,   223,   237,   238,   239,   240,   241,
     256,   258,    43,   249,    88,    89,   393,   259,   314,    32,
      92,    93,   317,     1,    94,    95,    96,    72,    97,    98,
     246,   179,    27,    81,    83,    82,   322,   117,   134,     1,
     118,   233,   282,    92,    93,   341,   180,    94,    95,    96,
      92,    93,    19,   373,    94,    95,    96,   378,   256,   258,
       2,   123,    28,    19,   342,   259,   253,   374,   375,   376,
     230,   135,   153,   154,   234,   423,    99,   100,   101,   102,
     160,   361,   162,   362,   103,   104,   230,   319,   320,   321,
     432,    29,    20,   323,   399,     1,   402,   264,   265,    22,
     198,   151,   383,    20,   119,    91,    91,   120,   404,   405,
      22,    31,   279,    44,    44,   171,    33,   256,   258,   256,
     258,    97,    98,   124,   259,   414,   259,    33,   419,   421,
     254,   105,   106,   107,   108,   365,   366,   367,   368,   276,
     428,    38,    80,     1,    44,    15,   170,   200,   138,   277,
     398,    30,   381,    40,   105,   106,   107,   108,     8,     1,
      41,   105,   106,   107,   108,   158,   156,   157,   159,    99,
     100,   101,   102,     9,    10,   123,    34,   103,   104,   415,
       2,     3,   271,   272,   284,   280,   420,     4,   281,   235,
     395,    45,   337,     5,    15,   193,   200,   427,    35,   123,
      97,    98,   355,   310,   311,   120,     6,    49,   306,    67,
     422,     1,    36,   193,   278,   312,    42,   285,   112,    49,
       7,    49,     8,     1,   193,     1,   194,   147,   193,    37,
     363,     1,   193,   286,   412,   287,    46,     9,    10,   308,
      50,   309,    61,    62,    15,   288,   200,   123,    99,   100,
     101,   102,    50,    66,    50,    70,   103,   104,    51,   193,
     148,   425,    52,   394,    73,    74,    75,    76,    77,   193,
      51,   430,    51,    71,     8,    78,    79,     1,   149,     1,
      73,    74,    75,    76,    77,    85,     8,    84,     8,     9,
      10,    78,    79,   184,     8,    86,     1,   408,     2,     3,
      53,     9,    10,     9,    10,     4,   123,    87,   123,     9,
      10,     5,    53,    33,    53,    97,    98,     2,     3,   115,
      53,   195,   196,   379,     6,   121,   380,   235,    15,   125,
     200,   126,   127,    73,    74,    75,    76,    77,     7,   128,
       8,   129,   130,   197,    78,    79,   392,    15,   131,   200,
     164,   165,   166,   167,   168,     9,    10,   198,   133,     8,
     132,   137,   145,    99,   100,   101,   102,   155,   169,   161,
     185,   103,   104,   172,     9,    10,    73,    74,    75,    76,
      77,   139,   140,   141,   142,   143,   144,    78,    79,   300,
     301,   302,   303,   304,   305,   139,   140,   141,   142,   143,
     144,   295,   296,   297,   298,   299,    15,   175,   200,   177,
     182,   186,   210,   178,   187,   209,   188,   189,   211,   190,
     191,    15,   192,   200,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   227,   235,   221,   224,   225,   228,   242,
     229,   243,   244,   245,   247,   248,   251,   260,   252,   267,
     261,   262,   263,   269,   273,   246,   274,   275,   292,   283,
     316,   291,   324,   325,   318,   293,   315,   326,   327,   328,
     329,   330,   332,   333,   335,   338,   343,   344,   339,   345,
     356,   346,   347,   348,   372,   349,   359,   384,   350,   385,
     351,   352,   396,   353,   354,   400,   370,   358,   357,   401,
     409,   360,   417,   382,    39,   377,   429,   386,   387,   307,
     388,   389,   390,   391,   406,   364,   410,   397,   250,   403,
     407,   110,   111,     0,     0,   413,     0,     0,     0,     0,
     416,   418,     0,     0,     0,   426,   424,   431,     0,   433,
     152,     0,     0,     0,     0,     0,   163,     0,     0,     0,
       0,     0,     0,     0,   174
};

static const yytype_int16 yycheck[] =
{
       0,    86,     0,   185,    32,    33,    34,   109,   282,     6,
       6,    11,   229,    11,   177,   188,   189,   190,   191,   192,
     209,   209,    10,    10,    52,    53,   357,   209,   254,    10,
       3,     4,   257,    18,     7,     8,     9,    37,    11,    12,
      10,    20,   107,    43,    44,    43,   263,   108,    14,    18,
     111,    14,   225,     3,     4,    19,    35,     7,     8,     9,
       3,     4,     0,   329,     7,     8,     9,   333,   257,   257,
      39,    71,   107,    11,    38,   257,    45,    21,    22,    23,
      65,    47,   110,   111,    47,   416,    59,    60,    61,    62,
     118,   316,   120,   318,    67,    68,    65,   260,   261,   262,
     431,   107,     0,   266,   378,    18,   381,    49,    50,     0,
      79,   109,   338,    11,   108,   112,   112,   111,   384,   385,
      11,    77,   224,   111,   111,   125,   107,   316,   316,   318,
     318,    11,    12,    71,   316,   401,   318,   107,   412,   414,
     109,   114,   115,   116,   117,    26,    27,    28,    29,    14,
     425,     0,    65,    18,   111,   155,   113,   155,   108,    24,
     377,    65,   335,    66,   114,   115,   116,   117,    81,    18,
       6,   114,   115,   116,   117,   108,   113,   114,   111,    59,
      60,    61,    62,    96,    97,   185,   107,    67,    68,   406,
      39,    40,    49,    50,    14,    33,   413,    46,    36,    37,
     363,    65,   108,    52,   204,   111,   204,   424,   107,   209,
      11,    12,   108,    41,    42,   111,    65,    14,   246,   247,
     108,    18,   107,   111,   224,   253,    66,    47,   108,    14,
      79,    14,    81,    18,   111,    18,   113,    14,   111,   107,
     113,    18,   111,    63,   113,    65,    65,    96,    97,   249,
      47,   249,   107,    66,   254,    75,   254,   257,    59,    60,
      61,    62,    47,    48,    47,    77,    67,    68,    65,   111,
      47,   113,    69,   358,    82,    83,    84,    85,    86,   111,
      65,   113,    65,   112,    81,    93,    94,    18,    65,    18,
      82,    83,    84,    85,    86,    10,    81,   108,    81,    96,
      97,    93,    94,    95,    81,    66,    18,   108,    39,    40,
     107,    96,    97,    96,    97,    46,   316,   111,   318,    96,
      97,    52,   107,   107,   107,    11,    12,    39,    40,    65,
     107,    43,    44,    33,    65,   111,    36,    37,   338,   111,
     338,   107,   107,    82,    83,    84,    85,    86,    79,   107,
      81,   107,   107,    65,    93,    94,    95,   357,   107,   357,
      30,    31,    32,    33,    34,    96,    97,    79,     6,    81,
     107,    65,    51,    59,    60,    61,    62,   109,   108,    66,
      66,    67,    68,    14,    96,    97,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    87,
      88,    89,    90,    91,    92,    87,    88,    89,    90,    91,
      92,   237,   238,   239,   240,   241,   416,    35,   416,    77,
      25,    10,    65,   108,   107,   109,   107,   107,    10,   107,
     107,   431,   107,   431,    10,    10,    10,    10,   111,   111,
     108,   108,    10,    51,    37,   111,   111,   111,   111,    51,
     107,     6,    66,    66,   107,    66,    66,    51,   110,    37,
      14,    14,   112,   103,    36,    10,   108,   108,    10,   108,
      66,   108,    10,   108,    66,   111,   110,    10,   111,   111,
      10,    10,    10,    10,   111,   109,   108,   108,    14,   108,
       6,   108,   108,   108,    65,   107,    66,    10,   107,    10,
     107,   107,    10,   107,   107,    10,   104,   107,   109,    10,
      51,   110,    10,   108,    11,   112,    41,   108,   108,   247,
     108,   108,   108,   108,   107,   324,   105,   111,   204,   110,
     110,    55,    55,    -1,    -1,   112,    -1,    -1,    -1,    -1,
     109,   108,    -1,    -1,    -1,   110,   112,   109,    -1,   110,
     109,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   127
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    18,    39,    40,    46,    52,    65,    79,    81,    96,
      97,   119,   120,   121,   122,   123,   125,   133,   135,   137,
     155,   156,   172,   173,   174,   175,   176,   107,   107,   107,
      65,    77,    10,   107,   107,   107,   107,   107,     0,   120,
      66,     6,    66,    10,   111,    65,    65,   157,   158,    14,
      47,    65,    69,   107,   123,   124,   134,   135,   153,   164,
     165,   107,    66,   124,   124,   152,    48,   124,   130,   131,
      77,   112,   123,    82,    83,    84,    85,    86,    93,    94,
      65,   123,   135,   123,   108,    10,    66,   111,   124,   124,
       6,   112,     3,     4,     7,     8,     9,    11,    12,    59,
      60,    61,    62,    67,    68,   114,   115,   116,   117,   154,
     166,   167,   108,   166,   167,    65,   126,   108,   111,   108,
     111,   111,   150,   123,   137,   111,   107,   107,   107,   107,
     107,   107,   107,     6,    14,    47,   164,    65,   108,    87,
      88,    89,    90,    91,    92,    51,   151,    14,    47,    65,
     134,   135,   153,   124,   124,   109,   165,   165,   108,   111,
     124,    66,   124,   131,    30,    31,    32,    33,    34,   108,
     113,   123,    14,   149,   149,    35,   146,    77,   108,    20,
      35,   141,    25,   138,    95,    66,    10,   107,   107,   107,
     107,   107,   107,   111,   113,    43,    44,    65,    79,   129,
     135,   137,   155,   160,   161,   162,   163,   172,   177,   109,
      65,    10,    10,    10,    10,    10,   111,   111,   108,   108,
      10,   111,   148,   150,   111,   111,   142,    51,   111,   107,
      65,   159,   163,    14,    47,    37,   143,   143,   143,   143,
     143,   143,    51,     6,    66,    66,    10,   107,    66,    10,
     162,    66,   110,    45,   109,   127,   129,   132,   156,   163,
      51,    14,    14,   112,    49,    50,   147,    37,   136,   103,
     168,    49,    50,    36,   108,   108,    14,    24,   123,   134,
      33,    36,   143,   108,    14,    47,    63,    65,    75,   139,
     151,   108,    10,   111,   145,   145,   145,   145,   145,   145,
      87,    88,    89,    90,    91,    92,   124,   130,   123,   135,
      41,    42,   124,   128,   160,   110,    66,   127,    66,   150,
     150,   150,   151,   150,    10,   108,    10,   111,   111,    10,
      10,     6,    10,    10,   142,   111,   140,   108,   109,    14,
     144,    19,    38,   108,   108,   108,   108,   108,   108,   107,
     107,   107,   107,   107,   107,   108,     6,   109,   107,    66,
     110,   127,   127,   113,   144,    26,    27,    28,    29,   169,
     104,   170,    65,   147,    21,    22,    23,   112,   147,    33,
      36,   143,   108,   160,    10,    10,   108,   108,   108,   108,
     108,   108,    95,   177,   164,   150,    10,   111,   151,   142,
      10,    10,   140,   110,   147,   147,   107,   110,   108,    51,
     105,   171,   113,   112,   147,   151,   109,    10,   108,   142,
     151,   140,   108,   177,   112,   113,   110,   151,   140,    41,
     113,   109,   177,   110
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
     142,   142,   143,   143,   144,   145,   145,   145,   146,   146,
     147,   147,   148,   148,   149,   149,   150,   150,   150,   150,
     150,   150,   151,   151,   152,   152,   153,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   155,   156,   157,   158,
     158,   158,   158,   158,   158,   159,   160,   161,   161,   162,
     162,   162,   162,   162,   162,   162,   162,   163,   163,   163,
     164,   164,   164,   165,   165,   165,   166,   166,   167,   167,
     167,   167,   167,   167,   168,   169,   169,   169,   169,   170,
     171,   172,   172,   172,   172,   173,   174,   175,   176,   177
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
       3,     0,     3,     0,     1,     4,     4,     0,     3,     5,
       1,     1,     4,     0,     1,     0,     5,     5,     5,     5,
       7,     0,     1,     3,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,    11,     1,     3,
       3,     1,     3,     5,     5,     1,     1,     1,     2,     2,
       2,     1,     1,     2,     2,     1,     1,     3,     3,     8,
       1,     3,     3,     3,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     3,
       5,     1,     1,     1,     1,    18,    14,    11,     7,     1
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
  case 94: /* axis_bit: INTNUM  */
#line 222 "rc_parser.y"
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
#line 1835 "y.tab.c"
    break;


#line 1839 "y.tab.c"

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

#line 425 "rc_parser.y"


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
