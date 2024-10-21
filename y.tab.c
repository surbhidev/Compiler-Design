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
  YYSYMBOL_INT_TYPE = 14,                  /* INT_TYPE  */
  YYSYMBOL_FLOAT_TYPE = 15,                /* FLOAT_TYPE  */
  YYSYMBOL_STRING_TYPE = 16,               /* STRING_TYPE  */
  YYSYMBOL_DATAFRAME = 17,                 /* DATAFRAME  */
  YYSYMBOL_LOOP = 18,                      /* LOOP  */
  YYSYMBOL_IF = 19,                        /* IF  */
  YYSYMBOL_ELSE = 20,                      /* ELSE  */
  YYSYMBOL_BREAK = 21,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 22,                  /* CONTINUE  */
  YYSYMBOL_RTRN = 23,                      /* RTRN  */
  YYSYMBOL_FUNC = 24,                      /* FUNC  */
  YYSYMBOL_INTNUM = 25,                    /* INTNUM  */
  YYSYMBOL_FLOATNUM = 26,                  /* FLOATNUM  */
  YYSYMBOL_STRING = 27,                    /* STRING  */
  YYSYMBOL_BOOL = 28,                      /* BOOL  */
  YYSYMBOL_TRUE = 29,                      /* TRUE  */
  YYSYMBOL_FALSE = 30,                     /* FALSE  */
  YYSYMBOL_SINGLE_QUOTED_STRING = 31,      /* SINGLE_QUOTED_STRING  */
  YYSYMBOL_INPUT = 32,                     /* INPUT  */
  YYSYMBOL_OUTPUT = 33,                    /* OUTPUT  */
  YYSYMBOL_ADD_ASSIGN_OPERATOR = 34,       /* ADD_ASSIGN_OPERATOR  */
  YYSYMBOL_SUB_ASSIGN_OPERATOR = 35,       /* SUB_ASSIGN_OPERATOR  */
  YYSYMBOL_MUL_ASSIGN_OPERATOR = 36,       /* MUL_ASSIGN_OPERATOR  */
  YYSYMBOL_DIV_ASSIGN_OPERATOR = 37,       /* DIV_ASSIGN_OPERATOR  */
  YYSYMBOL_MOD_ASSIGN_OPERATOR = 38,       /* MOD_ASSIGN_OPERATOR  */
  YYSYMBOL_LE_OPERATOR = 39,               /* LE_OPERATOR  */
  YYSYMBOL_GE_OPERATOR = 40,               /* GE_OPERATOR  */
  YYSYMBOL_DEQ_OPERATOR = 41,              /* DEQ_OPERATOR  */
  YYSYMBOL_NE_OPERATOR = 42,               /* NE_OPERATOR  */
  YYSYMBOL_PERCENTAGE = 43,                /* PERCENTAGE  */
  YYSYMBOL_INTEGER = 44,                   /* INTEGER  */
  YYSYMBOL_IDENTIFIER = 45,                /* IDENTIFIER  */
  YYSYMBOL_SEMICOLON = 46,                 /* SEMICOLON  */
  YYSYMBOL_AND_OPERATOR = 47,              /* AND_OPERATOR  */
  YYSYMBOL_OR_OPERATOR = 48,               /* OR_OPERATOR  */
  YYSYMBOL_NOT_OPERATOR = 49,              /* NOT_OPERATOR  */
  YYSYMBOL_INC_OPERATOR = 50,              /* INC_OPERATOR  */
  YYSYMBOL_DEC_OPERATOR = 51,              /* DEC_OPERATOR  */
  YYSYMBOL_RIGHTSHIFT_OPERATOR = 52,       /* RIGHTSHIFT_OPERATOR  */
  YYSYMBOL_LEFTSHIFT_OPERATOR = 53,        /* LEFTSHIFT_OPERATOR  */
  YYSYMBOL_ELLIPSIS = 54,                  /* ELLIPSIS  */
  YYSYMBOL_EXPONENTIAL = 55,               /* EXPONENTIAL  */
  YYSYMBOL_DUST = 56,                      /* DUST  */
  YYSYMBOL_CSVFILE = 57,                   /* CSVFILE  */
  YYSYMBOL_FUNCTIONCALL = 58,              /* FUNCTIONCALL  */
  YYSYMBOL_PRINT = 59,                     /* PRINT  */
  YYSYMBOL_CONSTANT = 60,                  /* CONSTANT  */
  YYSYMBOL_READCSVFUNC = 61,               /* READCSVFUNC  */
  YYSYMBOL_HEADFUNC = 62,                  /* HEADFUNC  */
  YYSYMBOL_TAILFUNC = 63,                  /* TAILFUNC  */
  YYSYMBOL_RESETINDEXFUNC = 64,            /* RESETINDEXFUNC  */
  YYSYMBOL_TOCSVFUNC = 65,                 /* TOCSVFUNC  */
  YYSYMBOL_DESCRIBEFUNC = 66,              /* DESCRIBEFUNC  */
  YYSYMBOL_MEANFUNC = 67,                  /* MEANFUNC  */
  YYSYMBOL_MODEFUNC = 68,                  /* MODEFUNC  */
  YYSYMBOL_MEDIANFUNC = 69,                /* MEDIANFUNC  */
  YYSYMBOL_SUMFUNC = 70,                   /* SUMFUNC  */
  YYSYMBOL_MINFUNC = 71,                   /* MINFUNC  */
  YYSYMBOL_MAXFUNC = 72,                   /* MAXFUNC  */
  YYSYMBOL_MISSVALUEFUNC = 73,             /* MISSVALUEFUNC  */
  YYSYMBOL_EXCHANGEFUNC = 74,              /* EXCHANGEFUNC  */
  YYSYMBOL_GROUPBYFUNC = 75,               /* GROUPBYFUNC  */
  YYSYMBOL_CONCATFUNC = 76,                /* CONCATFUNC  */
  YYSYMBOL_MERGEFUNC = 77,                 /* MERGEFUNC  */
  YYSYMBOL_JOINFUNC = 78,                  /* JOINFUNC  */
  YYSYMBOL_AXIS_TOKEN = 79,                /* AXIS_TOKEN  */
  YYSYMBOL_DROP_TOKEN = 80,                /* DROP_TOKEN  */
  YYSYMBOL_INPLACE_TOKEN = 81,             /* INPLACE_TOKEN  */
  YYSYMBOL_METHOD_TOKEN = 82,              /* METHOD_TOKEN  */
  YYSYMBOL_HOW_TOKEN = 83,                 /* HOW_TOKEN  */
  YYSYMBOL_ON_TOKEN = 84,                  /* ON_TOKEN  */
  YYSYMBOL_SUFFIXES_TOKEN = 85,            /* SUFFIXES_TOKEN  */
  YYSYMBOL_FILL_TOKEN = 86,                /* FILL_TOKEN  */
  YYSYMBOL_87_ = 87,                       /* '('  */
  YYSYMBOL_88_ = 88,                       /* ')'  */
  YYSYMBOL_89_ = 89,                       /* '{'  */
  YYSYMBOL_90_ = 90,                       /* '}'  */
  YYSYMBOL_91_ = 91,                       /* ','  */
  YYSYMBOL_92_ = 92,                       /* '['  */
  YYSYMBOL_93_ = 93,                       /* ']'  */
  YYSYMBOL_94_ = 94,                       /* '&'  */
  YYSYMBOL_95_ = 95,                       /* '|'  */
  YYSYMBOL_96_ = 96,                       /* '^'  */
  YYSYMBOL_97_ = 97,                       /* '~'  */
  YYSYMBOL_YYACCEPT = 98,                  /* $accept  */
  YYSYMBOL_translation_unit = 99,          /* translation_unit  */
  YYSYMBOL_declaration_statement = 100,    /* declaration_statement  */
  YYSYMBOL_input_statement = 101,          /* input_statement  */
  YYSYMBOL_assignment_statement = 102,     /* assignment_statement  */
  YYSYMBOL_dataframe = 103,                /* dataframe  */
  YYSYMBOL_expressions = 104,              /* expressions  */
  YYSYMBOL_Function_Declaration = 105,     /* Function_Declaration  */
  YYSYMBOL_argument_list = 106,            /* argument_list  */
  YYSYMBOL_function_body = 107,            /* function_body  */
  YYSYMBOL_return_statement = 108,         /* return_statement  */
  YYSYMBOL_Function_Print_Statement = 109, /* Function_Print_Statement  */
  YYSYMBOL_print_expressions = 110,        /* print_expressions  */
  YYSYMBOL_strings_list = 111,             /* strings_list  */
  YYSYMBOL_Function_Loop_Statement = 112,  /* Function_Loop_Statement  */
  YYSYMBOL_Print_Statement = 113,          /* Print_Statement  */
  YYSYMBOL_function_call_statement = 114,  /* function_call_statement  */
  YYSYMBOL_actual_parameters = 115,        /* actual_parameters  */
  YYSYMBOL_grouping = 116,                 /* grouping  */
  YYSYMBOL_operators = 117,                /* operators  */
  YYSYMBOL_Loop_Statement = 118,           /* Loop_Statement  */
  YYSYMBOL_Sub_Loop_Statement = 119,       /* Sub_Loop_Statement  */
  YYSYMBOL_initializtion = 120,            /* initializtion  */
  YYSYMBOL_Identifier_List = 121,          /* Identifier_List  */
  YYSYMBOL_update = 122,                   /* update  */
  YYSYMBOL_loop_body = 123,                /* loop_body  */
  YYSYMBOL_statment_list = 124,            /* statment_list  */
  YYSYMBOL_statement = 125,                /* statement  */
  YYSYMBOL_Function_Assignment_Statement = 126, /* Function_Assignment_Statement  */
  YYSYMBOL_predicate_list = 127,           /* predicate_list  */
  YYSYMBOL_predicate = 128,                /* predicate  */
  YYSYMBOL_logical_operators = 129,        /* logical_operators  */
  YYSYMBOL_comparison_operators = 130,     /* comparison_operators  */
  YYSYMBOL_parameter_list = 131,           /* parameter_list  */
  YYSYMBOL_parameter = 132,                /* parameter  */
  YYSYMBOL_how_clause = 133,               /* how_clause  */
  YYSYMBOL_on_clause = 134,                /* on_clause  */
  YYSYMBOL_suffixes_clause = 135,          /* suffixes_clause  */
  YYSYMBOL_fill_action = 136               /* fill_action  */
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
#define YYFINAL  26
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   305

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  98
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  115
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  265

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   331


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
       2,     2,     2,     2,     2,     2,     2,     9,    94,     2,
      87,    88,     7,     3,    91,     4,     6,     8,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      11,    10,    12,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    92,     5,    93,    96,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    89,    95,    90,    97,     2,     2,     2,
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
      85,    86
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    37,    37,    38,    42,    43,    44,    45,    46,    47,
      51,    55,    56,    60,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    77,    82,    83,    84,    88,    89,
      90,    92,    93,    97,   101,   105,   106,   107,   108,   112,
     116,   120,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     149,   150,   154,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   170,   174,   179,   183,   184,   185,   186,   187,
     188,   192,   196,   200,   201,   205,   206,   207,   208,   213,
     217,   218,   219,   223,   224,   225,   229,   230,   234,   235,
     236,   237,   238,   239,   244,   245,   246,   251,   252,   253,
     254,   258,   261,   264,   267,   268
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
  "INT_TYPE", "FLOAT_TYPE", "STRING_TYPE", "DATAFRAME", "LOOP", "IF",
  "ELSE", "BREAK", "CONTINUE", "RTRN", "FUNC", "INTNUM", "FLOATNUM",
  "STRING", "BOOL", "TRUE", "FALSE", "SINGLE_QUOTED_STRING", "INPUT",
  "OUTPUT", "ADD_ASSIGN_OPERATOR", "SUB_ASSIGN_OPERATOR",
  "MUL_ASSIGN_OPERATOR", "DIV_ASSIGN_OPERATOR", "MOD_ASSIGN_OPERATOR",
  "LE_OPERATOR", "GE_OPERATOR", "DEQ_OPERATOR", "NE_OPERATOR",
  "PERCENTAGE", "INTEGER", "IDENTIFIER", "SEMICOLON", "AND_OPERATOR",
  "OR_OPERATOR", "NOT_OPERATOR", "INC_OPERATOR", "DEC_OPERATOR",
  "RIGHTSHIFT_OPERATOR", "LEFTSHIFT_OPERATOR", "ELLIPSIS", "EXPONENTIAL",
  "DUST", "CSVFILE", "FUNCTIONCALL", "PRINT", "CONSTANT", "READCSVFUNC",
  "HEADFUNC", "TAILFUNC", "RESETINDEXFUNC", "TOCSVFUNC", "DESCRIBEFUNC",
  "MEANFUNC", "MODEFUNC", "MEDIANFUNC", "SUMFUNC", "MINFUNC", "MAXFUNC",
  "MISSVALUEFUNC", "EXCHANGEFUNC", "GROUPBYFUNC", "CONCATFUNC",
  "MERGEFUNC", "JOINFUNC", "AXIS_TOKEN", "DROP_TOKEN", "INPLACE_TOKEN",
  "METHOD_TOKEN", "HOW_TOKEN", "ON_TOKEN", "SUFFIXES_TOKEN", "FILL_TOKEN",
  "'('", "')'", "'{'", "'}'", "','", "'['", "']'", "'&'", "'|'", "'^'",
  "'~'", "$accept", "translation_unit", "declaration_statement",
  "input_statement", "assignment_statement", "dataframe", "expressions",
  "Function_Declaration", "argument_list", "function_body",
  "return_statement", "Function_Print_Statement", "print_expressions",
  "strings_list", "Function_Loop_Statement", "Print_Statement",
  "function_call_statement", "actual_parameters", "grouping", "operators",
  "Loop_Statement", "Sub_Loop_Statement", "initializtion",
  "Identifier_List", "update", "loop_body", "statment_list", "statement",
  "Function_Assignment_Statement", "predicate_list", "predicate",
  "logical_operators", "comparison_operators", "parameter_list",
  "parameter", "how_clause", "on_clause", "suffixes_clause", "fill_action", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-140)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      41,   -73,   -55,    12,    35,    -4,   -23,    54,   127,  -140,
    -140,    59,   130,  -140,  -140,    96,  -140,  -140,   105,   111,
      73,   115,   103,   103,    45,    68,  -140,  -140,  -140,   146,
      -6,  -140,    74,   156,   122,    83,   136,  -140,  -140,  -140,
      95,   103,   177,    27,  -140,  -140,    27,   -25,  -140,    27,
      -7,  -140,    99,    97,   104,   106,   107,   109,   110,   116,
     117,   133,   138,   139,   140,   141,   142,   143,   144,    95,
    -140,  -140,    21,    86,   147,  -140,    55,    13,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,   108,  -140,   103,
     186,    45,  -140,   114,   145,     6,   203,   148,     6,   149,
     150,   151,   152,   153,   -30,   204,   154,   197,   198,  -140,
    -140,   103,     1,   159,  -140,   234,   158,   200,  -140,  -140,
    -140,    95,  -140,  -140,    27,  -140,    27,  -140,  -140,  -140,
    -140,   238,   239,   240,    61,  -140,   160,  -140,    66,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,   161,   165,   103,   163,
     164,    27,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
     103,   103,   211,    86,    86,    50,    15,  -140,   213,   230,
     228,  -140,     6,     6,  -140,     6,  -140,    20,   215,   178,
      27,    27,   252,   175,  -140,  -140,  -140,  -140,  -140,   103,
     179,    23,   174,   219,    15,  -140,   221,  -140,  -140,  -140,
    -140,    67,    87,   180,   181,   258,   182,   103,   185,    27,
     223,    45,   224,   229,   231,   188,    23,  -140,   233,  -140,
      15,  -140,    15,  -140,  -140,     6,   178,   245,   196,    27,
      23,  -140,    88,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,    89,   190,  -140,   272,   195,   194,  -140,  -140,   196,
     254,  -140,  -140,   199,  -140,   201,   277,   205,   202,  -140,
     257,   206,   260,   207,  -140
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       6,     0,     0,     5,     7,     0,     8,    72,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     3,     4,     0,
       0,     9,     0,    77,     0,    74,    27,    10,    20,    21,
      19,     0,     0,    11,    23,    22,    60,     0,    39,    35,
       0,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,    25,     0,     0,    63,    64,
      65,    66,    67,    68,    69,    70,    71,     0,    59,     0,
       0,     0,    42,     0,     0,   104,     0,     0,   104,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    75,
      76,     0,     0,     0,    90,    78,     0,     0,    62,    15,
      16,    14,    18,    17,    61,    41,    38,    37,    43,    44,
     107,     0,     0,     0,     0,   105,     0,    47,     0,    49,
      50,    51,    52,    53,   115,   114,     0,     0,     0,     0,
       0,    95,    98,    99,   100,   101,   103,   102,    96,    97,
       0,     0,     0,     0,     0,     0,     0,    26,     0,     0,
       0,    45,     0,   104,    48,   104,    55,     0,     0,     0,
      94,    93,     0,     0,    81,    91,    92,    79,    80,     0,
       0,     0,     0,     0,     0,    40,     0,   108,   109,   110,
     106,     0,     0,     0,     0,     0,     0,     0,     0,    33,
       0,     0,     0,     0,     0,     0,    82,    83,     0,    24,
       0,    30,     0,    46,    54,   104,     0,     0,     0,    89,
       0,    32,     0,    87,    88,    86,    28,    84,    85,    31,
      29,     0,     0,   111,     0,     0,     0,    34,    56,     0,
       0,    58,    73,     0,   112,     0,     0,     0,     0,    57,
       0,     0,     0,     0,   113
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -140,  -140,   281,  -140,  -140,    18,   -22,  -140,  -140,   -57,
    -140,  -139,    81,   208,  -140,  -140,     7,  -140,   209,  -140,
    -140,    53,  -140,  -140,  -140,    65,  -140,    82,  -137,  -140,
     -45,   189,   191,   -95,   129,    77,    56,  -140,  -140
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     8,     9,    10,    11,    42,   112,    13,    76,   192,
     210,   193,    50,    51,   194,    14,    44,    47,    45,    87,
      16,   195,    34,    35,   183,   215,   216,   217,   196,   113,
     114,   160,   161,   134,   135,   206,   245,   257,   146
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      43,    46,    49,   138,    78,    79,    22,    15,    80,    81,
      82,     1,   152,   153,    18,    15,    78,    79,    12,    77,
      80,    81,    82,    78,    79,   184,    12,    80,    81,    82,
      78,    79,    19,     2,    80,    81,    82,    70,   189,    69,
     154,   155,   156,   157,   212,   213,   109,   110,   158,   159,
     144,   130,   214,    17,   218,     7,   145,    20,     1,     2,
     182,    17,     1,    88,    24,     3,    89,   124,   182,   126,
      38,    39,    48,     4,   190,   187,   188,   214,   201,   218,
     202,    90,   190,    23,    91,   131,     5,   132,   133,   151,
      40,   214,    21,   218,   122,    83,    84,    85,    86,    52,
       6,   118,     7,     1,   191,    28,     7,    83,    84,    85,
      86,    38,    39,   203,    83,    84,    85,    86,   185,   186,
       1,    83,    84,    85,    86,     1,   177,    26,    38,    39,
     241,    40,    41,   119,   120,   111,    29,   221,   180,   181,
      30,    25,    31,   116,     1,     2,   117,     7,    40,   171,
      32,     3,   172,   121,   174,   223,    33,   172,   172,     4,
      36,    37,    71,   239,     7,   240,    72,   209,    73,     7,
     152,   153,     5,    41,    74,   224,   247,   248,   172,    91,
     172,    75,    23,    29,    93,   229,     6,    92,     7,    49,
      41,    94,   115,    95,    96,    41,    97,    98,   154,   155,
     156,   157,   128,    99,   100,   162,   158,   159,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
     101,    65,    66,    67,    68,   102,   103,   104,   105,   106,
     107,   108,   125,   129,   136,   147,   137,   139,   140,   141,
     142,   143,   149,   150,   165,   167,   148,   166,   168,   169,
     170,   173,   175,   176,   178,   179,   182,   197,   198,   199,
     204,   205,   207,   208,   219,   220,   211,   222,   227,   231,
     233,   225,   226,   228,   230,   234,   243,   235,   236,   238,
     244,   249,   250,   251,   252,   254,   256,   258,   261,    27,
     255,   263,   232,   259,   260,   246,   123,   262,   237,   127,
     264,   200,   163,   242,   164,   253
};

static const yytype_uint8 yycheck[] =
{
      22,    23,    24,    98,     3,     4,    10,     0,     7,     8,
       9,    17,    11,    12,    87,     8,     3,     4,     0,    41,
       7,     8,     9,     3,     4,   162,     8,     7,     8,     9,
       3,     4,    87,    18,     7,     8,     9,    30,    23,    45,
      39,    40,    41,    42,    21,    22,    25,    26,    47,    48,
      80,    45,   191,     0,   191,    61,    86,    45,    17,    18,
      45,     8,    17,    88,    87,    24,    91,    89,    45,    91,
      25,    26,    27,    32,    59,    25,    26,   216,   173,   216,
     175,    88,    59,    87,    91,    79,    45,    81,    82,   111,
      45,   230,    57,   230,    87,    94,    95,    96,    97,    31,
      59,    88,    61,    17,    89,    46,    61,    94,    95,    96,
      97,    25,    26,    93,    94,    95,    96,    97,   163,   164,
      17,    94,    95,    96,    97,    17,   148,     0,    25,    26,
     225,    45,    87,    25,    26,    49,     6,   194,   160,   161,
      10,    87,    46,    88,    17,    18,    91,    61,    45,    88,
      45,    24,    91,    45,    88,    88,    45,    91,    91,    32,
      87,    46,    88,   220,    61,   222,    10,   189,    46,    61,
      11,    12,    45,    87,    91,    88,    88,    88,    91,    91,
      91,    45,    87,     6,    87,   207,    59,    88,    61,   211,
      87,    87,    45,    87,    87,    87,    87,    87,    39,    40,
      41,    42,    88,    87,    87,    46,    47,    48,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      87,    75,    76,    77,    78,    87,    87,    87,    87,    87,
      87,    87,    46,    88,    31,    31,    88,    88,    88,    88,
      88,    88,    45,    45,    10,    45,    92,    89,    10,    10,
      10,    91,    91,    88,    91,    91,    45,    44,    28,    31,
      45,    83,    10,    88,    90,    46,    87,    46,    10,    46,
      46,    91,    91,    91,    89,    46,    31,    46,    90,    46,
      84,    91,    10,    88,    90,    31,    85,    10,    31,     8,
      91,    31,   211,    88,    92,   230,    87,    91,   216,    91,
      93,   172,   113,   226,   113,   249
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    17,    18,    24,    32,    45,    59,    61,    99,   100,
     101,   102,   103,   105,   113,   114,   118,   119,    87,    87,
      45,    57,    10,    87,    87,    87,     0,   100,    46,     6,
      10,    46,    45,    45,   120,   121,    87,    46,    25,    26,
      45,    87,   103,   104,   114,   116,   104,   115,    27,   104,
     110,   111,    31,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    75,    76,    77,    78,    45,
     114,    88,    10,    46,    91,    45,   106,   104,     3,     4,
       7,     8,     9,    94,    95,    96,    97,   117,    88,    91,
      88,    91,    88,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    25,
      26,    49,   104,   127,   128,    45,    88,    91,    88,    25,
      26,    45,   114,   116,   104,    46,   104,   111,    88,    88,
      45,    79,    81,    82,   131,   132,    31,    88,   131,    88,
      88,    88,    88,    88,    80,    86,   136,    31,    92,    45,
      45,   104,    11,    12,    39,    40,    41,    42,    47,    48,
     129,   130,    46,   129,   130,    10,    89,    45,    10,    10,
      10,    88,    91,    91,    88,    91,    88,   104,    91,    91,
     104,   104,    45,   122,   126,   128,   128,    25,    26,    23,
      59,    89,   107,   109,   112,   119,   126,    44,    28,    31,
     132,   131,   131,    93,    45,    83,   133,    10,    88,   104,
     108,    87,    21,    22,   109,   123,   124,   125,   126,    90,
      46,   107,    46,    88,    88,    91,    91,    10,    91,   104,
      89,    46,   110,    46,    46,    46,    90,   125,    46,   107,
     107,   131,   133,    31,    84,   134,   123,    88,    88,    91,
      10,    88,    90,   134,    31,    91,    85,   135,    10,    88,
      92,    31,    91,    31,    93
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    98,    99,    99,   100,   100,   100,   100,   100,   100,
     101,   102,   102,   103,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   105,   106,   106,   106,   107,   107,
     107,   107,   107,   108,   109,   110,   110,   110,   110,   111,
     112,   113,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     115,   115,   116,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   118,   119,   120,   121,   121,   121,   121,   121,
     121,   122,   123,   124,   124,   125,   125,   125,   125,   126,
     127,   127,   127,   128,   128,   128,   129,   129,   130,   130,
     130,   130,   130,   130,   131,   131,   131,   132,   132,   132,
     132,   133,   134,   135,   136,   136
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     1,     1,     1,     2,
       3,     3,     3,     4,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     8,     1,     3,     0,     3,     3,
       2,     3,     3,     1,     4,     1,     1,     3,     3,     1,
       1,     5,     4,     5,     5,     6,     8,     5,     6,     5,
       5,     5,     5,     5,     8,     6,    10,    14,    10,     4,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,    11,     1,     3,     3,     1,     3,     5,
       5,     1,     1,     1,     2,     2,     2,     2,     2,     3,
       1,     3,     3,     3,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     3,     1,     3,     3,
       3,     3,     3,     7,     1,     1
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

#line 1593 "y.tab.c"

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

#line 272 "rc_parser.y"


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
