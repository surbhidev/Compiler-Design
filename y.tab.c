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
  YYSYMBOL_6_ = 6,                         /* '*'  */
  YYSYMBOL_7_ = 7,                         /* '/'  */
  YYSYMBOL_8_ = 8,                         /* '%'  */
  YYSYMBOL_9_ = 9,                         /* '='  */
  YYSYMBOL_10_ = 10,                       /* '<'  */
  YYSYMBOL_11_ = 11,                       /* '>'  */
  YYSYMBOL_LOWER_THAN_ELSE = 12,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_INT_TYPE = 13,                  /* INT_TYPE  */
  YYSYMBOL_FLOAT_TYPE = 14,                /* FLOAT_TYPE  */
  YYSYMBOL_STRING_TYPE = 15,               /* STRING_TYPE  */
  YYSYMBOL_LOOP = 16,                      /* LOOP  */
  YYSYMBOL_IF = 17,                        /* IF  */
  YYSYMBOL_ELSE = 18,                      /* ELSE  */
  YYSYMBOL_BREAK = 19,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 20,                  /* CONTINUE  */
  YYSYMBOL_RTRN = 21,                      /* RTRN  */
  YYSYMBOL_FUNC = 22,                      /* FUNC  */
  YYSYMBOL_INTNUM = 23,                    /* INTNUM  */
  YYSYMBOL_FLOATNUM = 24,                  /* FLOATNUM  */
  YYSYMBOL_STRING = 25,                    /* STRING  */
  YYSYMBOL_BOOL = 26,                      /* BOOL  */
  YYSYMBOL_TRUE = 27,                      /* TRUE  */
  YYSYMBOL_FALSE = 28,                     /* FALSE  */
  YYSYMBOL_SINGLE_QUOTED_STRING = 29,      /* SINGLE_QUOTED_STRING  */
  YYSYMBOL_INPUT = 30,                     /* INPUT  */
  YYSYMBOL_OUTPUT = 31,                    /* OUTPUT  */
  YYSYMBOL_ADD_ASSIGN_OPERATOR = 32,       /* ADD_ASSIGN_OPERATOR  */
  YYSYMBOL_SUB_ASSIGN_OPERATOR = 33,       /* SUB_ASSIGN_OPERATOR  */
  YYSYMBOL_MUL_ASSIGN_OPERATOR = 34,       /* MUL_ASSIGN_OPERATOR  */
  YYSYMBOL_DIV_ASSIGN_OPERATOR = 35,       /* DIV_ASSIGN_OPERATOR  */
  YYSYMBOL_MOD_ASSIGN_OPERATOR = 36,       /* MOD_ASSIGN_OPERATOR  */
  YYSYMBOL_LE_OPERATOR = 37,               /* LE_OPERATOR  */
  YYSYMBOL_GE_OPERATOR = 38,               /* GE_OPERATOR  */
  YYSYMBOL_DEQ_OPERATOR = 39,              /* DEQ_OPERATOR  */
  YYSYMBOL_NE_OPERATOR = 40,               /* NE_OPERATOR  */
  YYSYMBOL_PERCENTAGE = 41,                /* PERCENTAGE  */
  YYSYMBOL_INTEGER = 42,                   /* INTEGER  */
  YYSYMBOL_IDENTIFIER = 43,                /* IDENTIFIER  */
  YYSYMBOL_SEMICOLON = 44,                 /* SEMICOLON  */
  YYSYMBOL_AND_OPERATOR = 45,              /* AND_OPERATOR  */
  YYSYMBOL_OR_OPERATOR = 46,               /* OR_OPERATOR  */
  YYSYMBOL_NOT_OPERATOR = 47,              /* NOT_OPERATOR  */
  YYSYMBOL_INC_OPERATOR = 48,              /* INC_OPERATOR  */
  YYSYMBOL_DEC_OPERATOR = 49,              /* DEC_OPERATOR  */
  YYSYMBOL_RIGHTSHIFT_OPERATOR = 50,       /* RIGHTSHIFT_OPERATOR  */
  YYSYMBOL_LEFTSHIFT_OPERATOR = 51,        /* LEFTSHIFT_OPERATOR  */
  YYSYMBOL_ELLIPSIS = 52,                  /* ELLIPSIS  */
  YYSYMBOL_EXPONENTIAL = 53,               /* EXPONENTIAL  */
  YYSYMBOL_DUST = 54,                      /* DUST  */
  YYSYMBOL_CSVFILE = 55,                   /* CSVFILE  */
  YYSYMBOL_FUNCTIONCALL = 56,              /* FUNCTIONCALL  */
  YYSYMBOL_PRINT = 57,                     /* PRINT  */
  YYSYMBOL_CONSTANT = 58,                  /* CONSTANT  */
  YYSYMBOL_READCSVFUNC = 59,               /* READCSVFUNC  */
  YYSYMBOL_HEADFUNC = 60,                  /* HEADFUNC  */
  YYSYMBOL_TAILFUNC = 61,                  /* TAILFUNC  */
  YYSYMBOL_RESETINDEXFUNC = 62,            /* RESETINDEXFUNC  */
  YYSYMBOL_TOCSVFUNC = 63,                 /* TOCSVFUNC  */
  YYSYMBOL_DESCRIBEFUNC = 64,              /* DESCRIBEFUNC  */
  YYSYMBOL_MEANFUNC = 65,                  /* MEANFUNC  */
  YYSYMBOL_MODEFUNC = 66,                  /* MODEFUNC  */
  YYSYMBOL_MEDIANFUNC = 67,                /* MEDIANFUNC  */
  YYSYMBOL_SUMFUNC = 68,                   /* SUMFUNC  */
  YYSYMBOL_MINFUNC = 69,                   /* MINFUNC  */
  YYSYMBOL_MAXFUNC = 70,                   /* MAXFUNC  */
  YYSYMBOL_MISSVALUEFUNC = 71,             /* MISSVALUEFUNC  */
  YYSYMBOL_EXCHANGEFUNC = 72,              /* EXCHANGEFUNC  */
  YYSYMBOL_GROUPBYFUNC = 73,               /* GROUPBYFUNC  */
  YYSYMBOL_CONCATFUNC = 74,                /* CONCATFUNC  */
  YYSYMBOL_MERGEFUNC = 75,                 /* MERGEFUNC  */
  YYSYMBOL_JOINFUNC = 76,                  /* JOINFUNC  */
  YYSYMBOL_AXIS_TOKEN = 77,                /* AXIS_TOKEN  */
  YYSYMBOL_DROP_TOKEN = 78,                /* DROP_TOKEN  */
  YYSYMBOL_INPLACE_TOKEN = 79,             /* INPLACE_TOKEN  */
  YYSYMBOL_METHOD_TOKEN = 80,              /* METHOD_TOKEN  */
  YYSYMBOL_HOW_TOKEN = 81,                 /* HOW_TOKEN  */
  YYSYMBOL_ON_TOKEN = 82,                  /* ON_TOKEN  */
  YYSYMBOL_SUFFIXES_TOKEN = 83,            /* SUFFIXES_TOKEN  */
  YYSYMBOL_FILL_TOKEN = 84,                /* FILL_TOKEN  */
  YYSYMBOL_85_ = 85,                       /* '('  */
  YYSYMBOL_86_ = 86,                       /* ')'  */
  YYSYMBOL_87_ = 87,                       /* '{'  */
  YYSYMBOL_88_ = 88,                       /* '}'  */
  YYSYMBOL_89_ = 89,                       /* ','  */
  YYSYMBOL_90_ = 90,                       /* '['  */
  YYSYMBOL_91_ = 91,                       /* ']'  */
  YYSYMBOL_92_ = 92,                       /* '&'  */
  YYSYMBOL_93_ = 93,                       /* '|'  */
  YYSYMBOL_94_ = 94,                       /* '^'  */
  YYSYMBOL_95_ = 95,                       /* '~'  */
  YYSYMBOL_YYACCEPT = 96,                  /* $accept  */
  YYSYMBOL_translation_unit = 97,          /* translation_unit  */
  YYSYMBOL_declaration_statement = 98,     /* declaration_statement  */
  YYSYMBOL_input_statement = 99,           /* input_statement  */
  YYSYMBOL_assignment_statement = 100,     /* assignment_statement  */
  YYSYMBOL_expressions = 101,              /* expressions  */
  YYSYMBOL_Function_Declaration = 102,     /* Function_Declaration  */
  YYSYMBOL_argument_list = 103,            /* argument_list  */
  YYSYMBOL_function_body = 104,            /* function_body  */
  YYSYMBOL_return_statement = 105,         /* return_statement  */
  YYSYMBOL_Function_Print_Statement = 106, /* Function_Print_Statement  */
  YYSYMBOL_print_expressions = 107,        /* print_expressions  */
  YYSYMBOL_strings_list = 108,             /* strings_list  */
  YYSYMBOL_Function_Loop_Statement = 109,  /* Function_Loop_Statement  */
  YYSYMBOL_Print_Statement = 110,          /* Print_Statement  */
  YYSYMBOL_function_call_statement = 111,  /* function_call_statement  */
  YYSYMBOL_actual_parameters = 112,        /* actual_parameters  */
  YYSYMBOL_grouping = 113,                 /* grouping  */
  YYSYMBOL_operators = 114,                /* operators  */
  YYSYMBOL_Loop_Statement = 115,           /* Loop_Statement  */
  YYSYMBOL_Sub_Loop_Statement = 116,       /* Sub_Loop_Statement  */
  YYSYMBOL_initializtion = 117,            /* initializtion  */
  YYSYMBOL_Identifier_List = 118,          /* Identifier_List  */
  YYSYMBOL_update = 119,                   /* update  */
  YYSYMBOL_loop_body = 120,                /* loop_body  */
  YYSYMBOL_statment_list = 121,            /* statment_list  */
  YYSYMBOL_statement = 122,                /* statement  */
  YYSYMBOL_Function_Assignment_Statement = 123, /* Function_Assignment_Statement  */
  YYSYMBOL_predicate_list = 124,           /* predicate_list  */
  YYSYMBOL_predicate = 125,                /* predicate  */
  YYSYMBOL_logical_operators = 126,        /* logical_operators  */
  YYSYMBOL_comparison_operators = 127,     /* comparison_operators  */
  YYSYMBOL_parameter_list = 128,           /* parameter_list  */
  YYSYMBOL_parameter = 129,                /* parameter  */
  YYSYMBOL_how_clause = 130,               /* how_clause  */
  YYSYMBOL_on_clause = 131,                /* on_clause  */
  YYSYMBOL_suffixes_clause = 132,          /* suffixes_clause  */
  YYSYMBOL_fill_action = 133               /* fill_action  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  19
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   330

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  96
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  109
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  251

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   330


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
       2,     2,     2,     2,     2,     2,     2,     8,    92,     2,
      85,    86,     6,     3,    89,     4,     2,     7,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      10,     9,    11,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    90,     5,    91,    94,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    87,    93,    88,    95,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    37,    37,    38,    42,    43,    44,    45,    46,    50,
      54,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    71,    76,    77,    78,    82,    83,    84,    86,    87,
      91,    95,    99,   100,   101,   105,   109,   113,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   142,   143,   147,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   163,   167,
     172,   176,   177,   180,   181,   185,   189,   193,   194,   198,
     199,   200,   201,   206,   210,   211,   212,   216,   217,   218,
     222,   223,   227,   228,   229,   230,   231,   232,   237,   238,
     239,   244,   245,   246,   247,   251,   254,   257,   260,   261
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
  "'*'", "'/'", "'%'", "'='", "'<'", "'>'", "LOWER_THAN_ELSE", "INT_TYPE",
  "FLOAT_TYPE", "STRING_TYPE", "LOOP", "IF", "ELSE", "BREAK", "CONTINUE",
  "RTRN", "FUNC", "INTNUM", "FLOATNUM", "STRING", "BOOL", "TRUE", "FALSE",
  "SINGLE_QUOTED_STRING", "INPUT", "OUTPUT", "ADD_ASSIGN_OPERATOR",
  "SUB_ASSIGN_OPERATOR", "MUL_ASSIGN_OPERATOR", "DIV_ASSIGN_OPERATOR",
  "MOD_ASSIGN_OPERATOR", "LE_OPERATOR", "GE_OPERATOR", "DEQ_OPERATOR",
  "NE_OPERATOR", "PERCENTAGE", "INTEGER", "IDENTIFIER", "SEMICOLON",
  "AND_OPERATOR", "OR_OPERATOR", "NOT_OPERATOR", "INC_OPERATOR",
  "DEC_OPERATOR", "RIGHTSHIFT_OPERATOR", "LEFTSHIFT_OPERATOR", "ELLIPSIS",
  "EXPONENTIAL", "DUST", "CSVFILE", "FUNCTIONCALL", "PRINT", "CONSTANT",
  "READCSVFUNC", "HEADFUNC", "TAILFUNC", "RESETINDEXFUNC", "TOCSVFUNC",
  "DESCRIBEFUNC", "MEANFUNC", "MODEFUNC", "MEDIANFUNC", "SUMFUNC",
  "MINFUNC", "MAXFUNC", "MISSVALUEFUNC", "EXCHANGEFUNC", "GROUPBYFUNC",
  "CONCATFUNC", "MERGEFUNC", "JOINFUNC", "AXIS_TOKEN", "DROP_TOKEN",
  "INPLACE_TOKEN", "METHOD_TOKEN", "HOW_TOKEN", "ON_TOKEN",
  "SUFFIXES_TOKEN", "FILL_TOKEN", "'('", "')'", "'{'", "'}'", "','", "'['",
  "']'", "'&'", "'|'", "'^'", "'~'", "$accept", "translation_unit",
  "declaration_statement", "input_statement", "assignment_statement",
  "expressions", "Function_Declaration", "argument_list", "function_body",
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

#define YYPACT_NINF (-168)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      51,   -78,   -31,   -36,    18,   -44,    26,  -168,  -168,    13,
    -168,  -168,  -168,  -168,     8,   -11,    36,   183,    99,  -168,
    -168,  -168,    79,    48,    16,    53,  -168,  -168,  -168,    22,
      29,    30,    45,    52,    56,    58,    59,    60,    66,    67,
      68,    69,    71,    86,    94,    96,    97,   183,    55,  -168,
    -168,  -168,    55,    -2,  -168,    42,   154,    85,  -168,   -81,
     183,   107,   100,   101,    -9,   110,   102,    -9,   103,   104,
     105,   106,   108,   -62,   111,    65,   140,   142,    17,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,   212,   168,
    -168,  -168,  -168,   183,     7,   254,  -168,   186,   109,   155,
      55,   -50,   113,  -168,  -168,  -168,   191,   193,   194,   -49,
    -168,   115,  -168,   -14,  -168,  -168,  -168,  -168,  -168,  -168,
    -168,   116,   122,   183,   120,   121,  -168,  -168,  -168,    22,
    -168,  -168,  -168,    55,  -168,  -168,  -168,  -168,  -168,  -168,
    -168,  -168,   183,   183,   169,   154,   154,    63,    34,  -168,
    -168,   183,  -168,   189,   185,   203,  -168,    -9,    -9,  -168,
      -9,  -168,    25,   190,   153,    55,    55,   228,   152,  -168,
    -168,  -168,  -168,  -168,   183,   156,    70,   172,   196,    34,
    -168,   217,    55,  -168,  -168,  -168,  -168,    -7,    43,   173,
     174,   257,   178,   183,   182,    55,   226,    99,   240,   245,
     246,   207,    70,  -168,   252,  -168,    34,  -168,    34,  -168,
    -168,    -9,   153,   272,   220,    55,    70,  -168,    -1,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,    49,   214,  -168,
     295,   219,   218,  -168,  -168,   220,   278,  -168,  -168,   221,
    -168,   225,   300,   227,   222,  -168,   282,   229,   285,   224,
    -168
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     2,     6,     0,
       5,     7,     8,    68,     0,     0,     0,     0,     0,     1,
       3,     4,     0,     0,    70,    24,     9,    17,    18,    16,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    20,
      19,    35,    32,     0,    33,     0,     0,     0,    22,     0,
       0,     0,     0,     0,    98,     0,     0,    98,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    59,
      60,    61,    62,    63,    64,    65,    66,    67,     0,     0,
      37,    71,    72,     0,     0,     0,    84,     0,     0,     0,
      56,     0,     0,    39,    40,   101,     0,     0,     0,     0,
      99,     0,    43,     0,    45,    46,    47,    48,    49,   109,
     108,     0,     0,     0,     0,     0,    58,    12,    13,    11,
      15,    14,    34,    89,    92,    93,    94,    95,    97,    96,
      90,    91,     0,     0,     0,     0,     0,     0,     0,    23,
      55,     0,    38,     0,     0,     0,    41,     0,    98,    44,
      98,    51,     0,     0,     0,    88,    87,     0,     0,    75,
      85,    86,    73,    74,     0,     0,     0,     0,     0,     0,
      36,     0,    57,   102,   103,   104,   100,     0,     0,     0,
       0,     0,     0,     0,     0,    30,     0,     0,     0,     0,
       0,     0,    76,    77,     0,    21,     0,    27,     0,    42,
      50,    98,     0,     0,     0,    83,     0,    29,     0,    81,
      82,    80,    25,    78,    79,    28,    26,     0,     0,   105,
       0,     0,     0,    31,    52,     0,     0,    54,    69,     0,
     106,     0,     0,     0,     0,    53,     0,     0,     0,     0,
     107
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -168,  -168,   310,  -168,  -168,   -17,  -168,  -168,   -75,  -168,
    -167,   123,   230,  -168,  -168,   233,  -168,   234,  -168,  -168,
      54,  -168,  -168,  -168,   112,  -168,   124,  -138,  -168,   -48,
     232,   235,   -65,   160,   117,    88,  -168,  -168
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     6,     7,     8,     9,    94,    10,    59,   177,   196,
     178,    53,    54,   179,    11,    49,   101,    50,    88,    12,
     180,    23,    24,   168,   201,   202,   203,   181,    95,    96,
     142,   143,   109,   110,   192,   231,   243,   121
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      48,    52,   113,    89,    89,    98,   169,    14,    99,   200,
      79,    80,    15,    81,    82,    83,   119,   134,   135,    16,
      79,    80,   120,    81,    82,    83,    19,    17,    79,    80,
      78,    81,    82,    83,   105,   200,   150,   156,   204,   151,
     157,    18,     1,   100,   136,   137,   138,   139,     2,   200,
       1,    22,   140,   141,    13,   174,     3,    21,    79,    80,
      13,    81,    82,    83,   204,    91,    92,     1,   106,     4,
     107,   108,   159,     2,    25,   157,   133,   167,   204,   209,
      26,     3,   157,     5,    90,   233,   172,   173,    55,   198,
     199,   175,    56,   187,     4,   188,    58,   170,   171,    84,
      85,    86,    87,   126,   207,    57,   162,    60,     5,    84,
      85,    86,    87,   167,    61,    62,   189,    84,    85,    86,
      87,   176,    27,    28,    51,   165,   166,   175,    97,   210,
      63,   225,   157,   226,   182,   234,   102,    64,   157,   111,
     122,    65,    29,    66,    67,    68,   227,    84,    85,    86,
      87,    69,    70,    71,    72,   123,    73,   195,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    74,    43,    44,    45,    46,   215,    27,    28,    75,
      52,    76,    77,   124,    47,   125,   103,   104,   112,   114,
     115,   116,   117,    51,   118,   147,   148,    29,   149,   152,
     153,    93,   154,   155,   158,   160,    27,    28,   161,   163,
     164,   184,   167,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    29,    43,    44,    45,
      46,   183,   185,   190,   191,   127,   128,   193,   194,    47,
     206,   197,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,   129,    43,    44,    45,    46,
     205,   208,   211,   212,   134,   135,   213,   214,    47,   216,
     217,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,   219,    43,    44,    45,    46,   220,
     221,   136,   137,   138,   139,   222,   224,    47,   144,   140,
     141,   229,   230,   235,   236,   237,   238,   240,   242,   244,
     241,   247,   246,   245,   249,   250,    20,   186,   248,   132,
     218,   130,   131,   239,     0,     0,   223,   145,   232,   228,
     146
};

static const yytype_int16 yycheck[] =
{
      17,    18,    67,     5,     5,    86,   144,    85,    89,   176,
       3,     4,    43,     6,     7,     8,    78,    10,    11,    55,
       3,     4,    84,     6,     7,     8,     0,     9,     3,     4,
      47,     6,     7,     8,    43,   202,    86,    86,   176,    89,
      89,    85,    16,    60,    37,    38,    39,    40,    22,   216,
      16,    43,    45,    46,     0,    21,    30,    44,     3,     4,
       6,     6,     7,     8,   202,    23,    24,    16,    77,    43,
      79,    80,    86,    22,    85,    89,    93,    43,   216,    86,
      44,    30,    89,    57,    86,    86,    23,    24,     9,    19,
      20,    57,    44,   158,    43,   160,    43,   145,   146,    92,
      93,    94,    95,    86,   179,    89,   123,    85,    57,    92,
      93,    94,    95,    43,    85,    85,    91,    92,    93,    94,
      95,    87,    23,    24,    25,   142,   143,    57,    43,    86,
      85,   206,    89,   208,   151,    86,    29,    85,    89,    29,
      29,    85,    43,    85,    85,    85,   211,    92,    93,    94,
      95,    85,    85,    85,    85,    90,    85,   174,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    85,    73,    74,    75,    76,   193,    23,    24,    85,
     197,    85,    85,    43,    85,    43,    86,    86,    86,    86,
      86,    86,    86,    25,    86,     9,    87,    43,    43,    86,
       9,    47,     9,     9,    89,    89,    23,    24,    86,    89,
      89,    26,    43,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    43,    73,    74,    75,
      76,    42,    29,    43,    81,    23,    24,     9,    86,    85,
      44,    85,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    43,    73,    74,    75,    76,
      88,    44,    89,    89,    10,    11,     9,    89,    85,    87,
      44,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    44,    73,    74,    75,    76,    44,
      44,    37,    38,    39,    40,    88,    44,    85,    44,    45,
      46,    29,    82,    89,     9,    86,    88,    29,    83,     9,
      89,    29,    90,    86,    29,    91,     6,   157,    89,    89,
     197,    88,    88,   235,    -1,    -1,   202,    95,   216,   212,
      95
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    16,    22,    30,    43,    57,    97,    98,    99,   100,
     102,   110,   115,   116,    85,    43,    55,     9,    85,     0,
      98,    44,    43,   117,   118,    85,    44,    23,    24,    43,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    73,    74,    75,    76,    85,   101,   111,
     113,    25,   101,   107,   108,     9,    44,    89,    43,   103,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,   101,     3,
       4,     6,     7,     8,    92,    93,    94,    95,   114,     5,
      86,    23,    24,    47,   101,   124,   125,    43,    86,    89,
     101,   112,    29,    86,    86,    43,    77,    79,    80,   128,
     129,    29,    86,   128,    86,    86,    86,    86,    86,    78,
      84,   133,    29,    90,    43,    43,    86,    23,    24,    43,
     111,   113,   108,   101,    10,    11,    37,    38,    39,    40,
      45,    46,   126,   127,    44,   126,   127,     9,    87,    43,
      86,    89,    86,     9,     9,     9,    86,    89,    89,    86,
      89,    86,   101,    89,    89,   101,   101,    43,   119,   123,
     125,   125,    23,    24,    21,    57,    87,   104,   106,   109,
     116,   123,   101,    42,    26,    29,   129,   128,   128,    91,
      43,    81,   130,     9,    86,   101,   105,    85,    19,    20,
     106,   120,   121,   122,   123,    88,    44,   104,    44,    86,
      86,    89,    89,     9,    89,   101,    87,    44,   107,    44,
      44,    44,    88,   122,    44,   104,   104,   128,   130,    29,
      82,   131,   120,    86,    86,    89,     9,    86,    88,   131,
      29,    89,    83,   132,     9,    86,    90,    29,    89,    29,
      91
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    96,    97,    97,    98,    98,    98,    98,    98,    99,
     100,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   102,   103,   103,   103,   104,   104,   104,   104,   104,
     105,   106,   107,   107,   107,   108,   109,   110,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   112,   112,   113,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   115,   116,
     117,   118,   118,   118,   118,   119,   120,   121,   121,   122,
     122,   122,   122,   123,   124,   124,   124,   125,   125,   125,
     126,   126,   127,   127,   127,   127,   127,   127,   128,   128,
     128,   129,   129,   129,   129,   130,   131,   132,   133,   133
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     8,     1,     3,     0,     3,     3,     2,     3,     3,
       1,     4,     1,     1,     3,     1,     1,     4,     4,     3,
       3,     4,     6,     3,     4,     3,     3,     3,     3,     3,
       6,     4,     8,    12,     8,     4,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,    11,
       1,     3,     3,     5,     5,     1,     1,     1,     2,     2,
       2,     2,     2,     3,     1,     3,     3,     3,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       3,     1,     3,     3,     3,     3,     3,     7,     1,     1
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

#line 1587 "y.tab.c"

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

#line 265 "rc_parser.y"


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
    while (yyparse() == 0) {
        // Parsing successful
    }

    // Clean up
    fclose(yyin);
    return EXIT_SUCCESS;
}
