/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

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

#ifdef __cplusplus
}
#endif

extern int yylineno;
extern FILE *yyin;
extern FILE *yyout;

FILE* yacc_output;
extern FILE* lex_output;

#line 100 "y.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

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

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    LOWER_THAN_ELSE = 258,
    ELSE = 259,
    INTNUM = 260,
    IDENTIFIER = 261,
    DATAFRAME = 262,
    CSVFILE = 263,
    EXPONENTIAL = 264,
    PERCENTAGE = 265,
    INNER = 266,
    LEFT = 267,
    RIGHT = 268,
    OUTER = 269,
    INT_TYPE = 270,
    FLOAT_TYPE = 271,
    STRING_TYPE = 272,
    SKIPNA = 273,
    FILL = 274,
    FFILL = 275,
    BFILL = 276,
    INTERPOLATE = 277,
    METHOD = 278,
    REGX = 279,
    SEP = 280,
    HEADER = 281,
    INDEX_COL = 282,
    USECOLS = 283,
    INDEX = 284,
    DROP = 285,
    INPLACE = 286,
    AXIS = 287,
    NUMERIC = 288,
    LOOP = 289,
    IF = 290,
    ELSEIF = 291,
    BREAK = 292,
    CONTINUE = 293,
    RTRN = 294,
    FUNC = 295,
    FLOATNUM = 296,
    STRING = 297,
    SINGLE_QUOTED_STRING = 298,
    TRUE = 299,
    FALSE = 300,
    NOT_OPERATOR = 301,
    INPUT = 302,
    OUTPUT = 303,
    ADD_ASSIGN_OPERATOR = 304,
    SUB_ASSIGN_OPERATOR = 305,
    MUL_ASSIGN_OPERATOR = 306,
    DIV_ASSIGN_OPERATOR = 307,
    MOD_ASSIGN_OPERATOR = 308,
    LE_OPERATOR = 309,
    GE_OPERATOR = 310,
    DEQ_OPERATOR = 311,
    NE_OPERATOR = 312,
    INTEGER = 313,
    SEMICOLON = 314,
    AND_OPERATOR = 315,
    OR_OPERATOR = 316,
    INC_OPERATOR = 317,
    DEC_OPERATOR = 318,
    RIGHTSHIFT_OPERATOR = 319,
    LEFTSHIFT_OPERATOR = 320,
    ELLIPSIS = 321,
    DUST = 322,
    FUNCTIONCALL = 323,
    PRINT = 324,
    CONSTANT = 325,
    READCSVFUNC = 326,
    HEADFUNC = 327,
    TAILFUNC = 328,
    RESETINDEXFUNC = 329,
    TOCSVFUNC = 330,
    DESCRIBEFUNC = 331,
    MEANFUNC = 332,
    MODEFUNC = 333,
    MEDIANFUNC = 334,
    SUMFUNC = 335,
    MINFUNC = 336,
    MAXFUNC = 337,
    MISSVALUEFUNC = 338,
    EXCHANGEVALUEFUNC = 339,
    GROUPBYFUNC = 340,
    CONCATFUNC = 341,
    MERGEFUNC = 342,
    JOINFUNC = 343,
    AXIS_TOKEN = 344,
    DROP_TOKEN = 345,
    INPLACE_TOKEN = 346,
    METHOD_TOKEN = 347,
    HOW_TOKEN = 348,
    ON_TOKEN = 349,
    SUFFIXES_TOKEN = 350,
    FILL_TOKEN = 351
  };
#endif
/* Tokens.  */
#define LOWER_THAN_ELSE 258
#define ELSE 259
#define INTNUM 260
#define IDENTIFIER 261
#define DATAFRAME 262
#define CSVFILE 263
#define EXPONENTIAL 264
#define PERCENTAGE 265
#define INNER 266
#define LEFT 267
#define RIGHT 268
#define OUTER 269
#define INT_TYPE 270
#define FLOAT_TYPE 271
#define STRING_TYPE 272
#define SKIPNA 273
#define FILL 274
#define FFILL 275
#define BFILL 276
#define INTERPOLATE 277
#define METHOD 278
#define REGX 279
#define SEP 280
#define HEADER 281
#define INDEX_COL 282
#define USECOLS 283
#define INDEX 284
#define DROP 285
#define INPLACE 286
#define AXIS 287
#define NUMERIC 288
#define LOOP 289
#define IF 290
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
#line 31 "../src/rc_parser.y"

    int in;
    float flt;
    char *str;
    bool bl;


#line 352 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYLAST   545

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  118
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  179
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  431

#define YYUNDEFTOK  2
#define YYMAXUTOK   351


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
      92,    96,   115,   119,   118,   138,   146,   151,   157,   163,
     168,   174,   180,   181,   187,   193,   199,   205,   214,   222,
     225,   231,   235,   239,   242,   246,   249,   255,   259,   265,
     266,   267,   270,   273,   309,   313,   317,   325,   358,   392,
     426,   460,   494,   528,   562,   596,   630,   664,   698,   735,
     745,   781,   816,   872,   903,   933,   966,   997,  1001,  1059,
    1066,  1075,  1105,  1139,  1148,  1154,  1160,  1165,  1170,  1178,
    1190,  1196,  1204,  1210,  1216,  1222,  1228,  1234,  1243,  1257,
    1264,  1272,  1279,  1287,  1301,  1313,  1324,  1331,  1339,  1351,
    1366,  1367,  1371,  1383,  1390,  1400,  1403,  1406,  1413,  1419,
    1427,  1433,  1441,  1447,  1461,  1468,  1476,  1477,  1487,  1493,
    1502,  1511,  1512,  1513,  1514,  1515,  1516,  1517,  1518,  1519,
    1523,  1531,  1541,  1545,  1550,  1558,  1562,  1566,  1571,  1579,
    1584,  1589,  1590,  1591,  1596,  1601,  1602,  1607,  1612,  1620,
    1621,  1626,  1634,  1639,  1644,  1652,  1653,  1657,  1658,  1659,
    1660,  1661,  1662,  1666,  1675,  1680,  1685,  1693,  1701,  1709,
    1710,  1711,  1712,  1716,  1725,  1733,  1741,  1748,  1753,  1762
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "'+'", "'-'", "'\\\\'", "'.'", "'*'",
  "'/'", "'%'", "'='", "'<'", "'>'", "LOWER_THAN_ELSE", "ELSE", "INTNUM",
  "IDENTIFIER", "DATAFRAME", "CSVFILE", "EXPONENTIAL", "PERCENTAGE",
  "INNER", "LEFT", "RIGHT", "OUTER", "INT_TYPE", "FLOAT_TYPE",
  "STRING_TYPE", "SKIPNA", "FILL", "FFILL", "BFILL", "INTERPOLATE",
  "METHOD", "REGX", "SEP", "HEADER", "INDEX_COL", "USECOLS", "INDEX",
  "DROP", "INPLACE", "AXIS", "NUMERIC", "LOOP", "IF", "ELSEIF", "BREAK",
  "CONTINUE", "RTRN", "FUNC", "FLOATNUM", "STRING", "SINGLE_QUOTED_STRING",
  "TRUE", "FALSE", "NOT_OPERATOR", "INPUT", "OUTPUT",
  "ADD_ASSIGN_OPERATOR", "SUB_ASSIGN_OPERATOR", "MUL_ASSIGN_OPERATOR",
  "DIV_ASSIGN_OPERATOR", "MOD_ASSIGN_OPERATOR", "LE_OPERATOR",
  "GE_OPERATOR", "DEQ_OPERATOR", "NE_OPERATOR", "INTEGER", "SEMICOLON",
  "AND_OPERATOR", "OR_OPERATOR", "INC_OPERATOR", "DEC_OPERATOR",
  "RIGHTSHIFT_OPERATOR", "LEFTSHIFT_OPERATOR", "ELLIPSIS", "DUST",
  "FUNCTIONCALL", "PRINT", "CONSTANT", "READCSVFUNC", "HEADFUNC",
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
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,    43,    45,    92,    46,    42,    47,    37,
      61,    60,    62,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,    40,    41,   123,
     125,    44,    91,    93,    38,   124,    94,   126
};
# endif

#define YYPACT_NINF (-313)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     263,    20,   -93,   -65,   -61,    84,   104,    71,    76,    87,
      95,   107,  -313,  -313,    61,   201,  -313,  -313,   145,    17,
    -313,  -313,  -313,  -313,  -313,  -313,  -313,   271,   271,   204,
     221,   240,   120,   177,   243,   227,   137,   233,  -313,  -313,
    -313,   321,  -313,    69,   233,  -313,   147,  -313,   271,     2,
      57,  -313,  -313,  -313,    57,   -60,   153,   256,   215,  -313,
     271,    46,   164,  -313,   251,  -313,  -313,     2,    57,   -40,
    -313,   159,   233,   178,   185,   186,   190,   194,   196,   202,
     203,   147,   201,  -313,  -313,    32,   350,   249,  -313,  -313,
    -313,  -313,  -313,  -313,  -313,  -313,  -313,   283,  -313,   271,
    -313,    41,   240,    57,  -313,  -313,  -313,  -313,  -313,  -313,
    -313,  -313,   271,   271,   206,   240,   240,  -313,   -12,   236,
     243,   290,   210,  -313,   102,   233,   296,   296,   291,   314,
     230,    23,   289,  -313,  -313,   228,   234,   238,   239,   241,
     247,  -313,   113,  -313,   147,  -313,  -313,  -313,  -313,    57,
    -313,  -313,   305,    57,    57,   349,  -313,  -313,   248,   327,
    -313,    57,  -313,   346,   348,   351,   352,   353,  -313,   262,
     266,  -313,   274,   276,   375,   275,   159,  -313,   278,  -313,
     280,   334,   284,   356,   356,   356,   356,   356,   356,   355,
     393,    59,    35,   332,   333,   302,   341,  -313,    21,  -313,
    -313,   349,  -313,   342,  -313,   306,   195,  -313,   359,   403,
     404,   308,    54,   379,   320,  -313,  -313,    90,   383,   317,
     319,   162,   148,   323,  -313,    68,   419,   354,   354,   354,
     354,   354,   354,  -313,   360,   449,   358,  -313,   271,  -313,
    -313,   243,  -313,    69,  -313,  -313,    56,   271,   349,   357,
     391,   195,  -313,   392,   159,   159,   159,   249,  -313,  -313,
    -313,  -313,  -313,  -313,   159,   452,   361,   453,   362,  -313,
     363,   454,  -313,  -313,  -313,   458,     3,  -313,   460,   280,
    -313,  -313,  -313,  -313,  -313,  -313,   364,   456,   154,   368,
     369,   370,   371,   372,   373,   365,   376,   377,   378,   380,
     381,   382,    57,    85,  -313,   384,   385,    80,    57,   413,
     386,  -313,   195,  -313,   195,  -313,  -313,  -313,   125,  -313,
     456,  -313,    97,   390,   448,    54,   168,   366,    54,  -313,
     176,   387,  -313,  -313,   479,   480,   487,  -313,  -313,  -313,
    -313,  -313,  -313,   394,   395,   396,   397,   398,   399,   349,
    -313,   349,   240,   389,   401,  -313,  -313,  -313,  -313,   159,
    -313,  -313,  -313,  -313,  -313,   489,   400,   490,  -313,  -313,
    -313,  -313,   280,   491,   364,  -313,    54,   402,    54,  -313,
    -313,  -313,  -313,  -313,  -313,   405,   406,   198,   349,   240,
    -313,   457,   407,   408,  -313,    54,  -313,   354,   249,   354,
    -313,  -313,   409,   411,   211,  -313,   499,   414,   249,   364,
    -313,   129,  -313,   349,  -313,   410,   412,  -313,   160,  -313,
     354,   415,   349,   249,  -313,  -313,  -313,   416,   172,  -313,
    -313
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
       0,     0,    45,     0,   115,   115,   115,     0,   105,   106,
     107,   100,   101,   104,   115,     0,     0,     0,     0,    98,
       0,     0,    62,    63,    82,     0,     0,    83,     0,    90,
      65,    74,    78,    76,    77,    75,    81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   147,     0,   148,     0,     0,   174,    37,     0,
       0,    28,     0,    34,     0,   110,   111,   112,     0,   113,
       0,    67,     0,     0,     0,     0,     0,     0,     0,    89,
      92,     0,    93,    91,     0,     0,     0,    53,    54,    55,
      56,    57,    58,     0,     0,     0,     0,     0,     0,     0,
      38,     0,     0,     0,     0,    36,    32,    35,    33,   115,
      70,   164,   165,   166,   163,     0,     0,     0,   102,    84,
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
    -313,  -313,   502,  -313,  -313,  -313,     0,   -22,  -313,  -313,
    -156,  -313,  -177,   282,   417,  -313,  -313,   -90,     4,  -313,
      82,  -313,  -313,  -312,  -313,  -269,  -163,   197,  -212,  -313,
    -313,  -313,     5,   418,  -175,  -255,  -313,   430,  -313,   169,
    -173,  -313,  -313,  -313,  -216,  -313,   328,  -178,   -99,   117,
     467,   469,  -313,  -313,  -313,  -313,   170,  -313,  -313,  -313,
    -313,  -313,  -284
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,   133,    49,    61,    16,   118,
     249,   309,   196,    69,    70,   251,    17,    51,    52,   266,
     198,   182,   286,   331,   180,   223,   227,   333,   289,   175,
     263,   219,   264,   172,   122,   142,    55,    53,    97,   199,
      21,    58,    59,   236,   200,   201,   202,   203,    62,    63,
     115,   116,   268,   364,   366,   407,   204,    23,    24,    25,
      26,   307,   205
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      15,   220,   318,   152,    18,    50,    54,   146,    86,   327,
     329,    15,    68,   237,    29,    18,   290,   291,   292,   293,
     294,   228,   229,   230,   231,   232,    85,    43,   253,   250,
      27,   243,   310,   252,    67,    88,    89,    73,   103,    90,
      91,    92,    30,    82,    84,   238,    31,    83,    98,    88,
      89,    99,   178,    90,    91,    92,   150,   104,   105,   279,
      88,    89,   396,   179,    90,    91,    92,   386,   119,   258,
     305,   120,   123,   253,   250,   235,     2,   149,   252,   315,
     316,   317,    19,   281,   282,    81,     2,   283,   284,   319,
     153,   154,   151,    19,   353,   313,   158,   419,   161,   159,
      32,   147,   306,   394,   403,   259,   260,    38,   261,   262,
     106,   107,   108,   109,    87,    87,   110,   111,   361,   285,
     362,   363,    33,     1,     2,   170,   354,    28,    44,   421,
      40,   277,    44,   385,   253,   250,   253,   250,   427,   252,
     134,   252,    28,   411,   269,   270,    93,    94,    95,    96,
       8,     3,     4,   418,   124,    15,   357,     5,   358,   197,
      93,    94,    95,    96,     6,     9,    10,   374,   428,    20,
      22,    93,    94,    95,    96,   104,   105,   274,    34,     2,
      20,    22,   334,    35,   390,   410,     7,   412,     8,   278,
     226,   123,   335,   350,    36,   275,   120,   336,   369,   370,
     371,    15,    37,     9,    10,   197,   123,    41,   425,   104,
     105,   235,     2,    44,    42,   169,   302,   373,   226,    68,
      56,   276,   104,   105,   189,   308,   190,    64,   106,   107,
     108,   109,   156,   157,   110,   111,   189,    57,   359,     3,
     189,    67,   420,    82,   247,    71,    65,   304,    15,    72,
       2,   123,   197,   387,    28,    45,    46,     2,    45,    46,
       2,   100,   106,   107,   108,   109,   101,   117,   110,   111,
     121,   189,   114,   424,   195,   106,   107,   108,   109,     1,
       2,   110,   111,   189,   102,   430,    45,    46,     2,   125,
     404,    47,   126,   127,    47,    66,    60,   128,   143,   144,
       2,   129,   141,   130,   248,   160,   402,     3,     4,   131,
     132,   171,   123,     5,   123,   155,   104,   105,   168,   415,
       6,     8,    47,   181,     8,   163,   164,   165,   166,   167,
     368,   174,   176,   372,   145,   183,     9,    10,   177,     9,
      10,   184,     7,   207,     8,   185,   186,    48,   187,    15,
      48,    15,     8,   197,   188,   197,   208,   206,   209,     9,
      10,   210,   211,   212,     8,   192,     2,     9,    10,   106,
     107,   108,   109,   213,   191,   110,   111,   214,    48,     9,
      10,   397,   215,   399,   216,   217,   218,   224,    15,   221,
      48,   222,   197,     3,     4,   225,   193,   194,   226,   234,
     409,   239,   240,    74,    75,    76,    77,    78,   233,   241,
     242,   245,   254,    15,    79,    80,   246,   197,   255,   256,
     257,   265,    15,   267,   271,   272,   197,   273,   195,   287,
       8,   280,    74,    75,    76,    77,    78,   135,   136,   137,
     138,   139,   140,    79,    80,     9,    10,   295,   296,   297,
     298,   299,   300,   135,   136,   137,   138,   139,   140,   238,
     312,   314,   320,   322,   325,   288,   301,   311,   326,   321,
     328,   332,   343,   323,   324,   330,   337,   338,   339,   340,
     341,   342,   355,   344,   345,   346,   367,   347,   348,   376,
     377,   349,   352,   351,   365,   375,   356,   378,   388,   391,
     393,   395,   379,   380,   381,   382,   383,   384,   389,   416,
     405,   392,   406,    39,   398,   400,   401,   360,   413,   422,
     408,   414,   417,   303,   423,   426,   429,   148,   112,   244,
     113,     0,     0,     0,     0,     0,     0,   162,     0,     0,
       0,     0,     0,     0,     0,   173
};

static const yytype_int16 yycheck[] =
{
       0,   176,   257,   102,     0,    27,    28,    97,     6,     6,
     279,    11,    34,   191,   107,    11,   228,   229,   230,   231,
     232,   184,   185,   186,   187,   188,    48,    10,   206,   206,
      10,    10,   248,   206,    34,     3,     4,    37,    60,     7,
       8,     9,   107,    43,    44,    10,   107,    43,   108,     3,
       4,   111,    29,     7,     8,     9,    15,    11,    12,   222,
       3,     4,   374,    40,     7,     8,     9,   351,   108,    15,
      14,   111,    72,   251,   251,    16,    17,    99,   251,   254,
     255,   256,     0,    15,    16,    16,    17,    19,    20,   264,
     112,   113,    51,    11,    14,   251,   108,   409,   120,   111,
      16,    97,    46,   372,   388,    51,    52,     0,    54,    55,
      64,    65,    66,    67,   112,   112,    70,    71,    21,    51,
      23,    24,    18,    16,    17,   125,    46,   107,   111,   413,
      69,   221,   111,   349,   312,   312,   314,   314,   422,   312,
     108,   314,   107,   398,    54,    55,   114,   115,   116,   117,
      81,    44,    45,   408,    72,   155,   312,    50,   314,   155,
     114,   115,   116,   117,    57,    96,    97,   330,   423,     0,
       0,   114,   115,   116,   117,    11,    12,    15,   107,    17,
      11,    11,    28,   107,   359,   397,    79,   399,    81,    41,
      42,   191,    38,   108,   107,    33,   111,    43,    30,    31,
      32,   201,   107,    96,    97,   201,   206,     6,   420,    11,
      12,    16,    17,   111,    69,   113,   238,    41,    42,   241,
      16,   221,    11,    12,   111,   247,   113,   107,    64,    65,
      66,    67,   115,   116,    70,    71,   111,    16,   113,    44,
     111,   241,   113,   243,    49,    18,    69,   243,   248,   112,
      17,   251,   248,   352,   107,    15,    16,    17,    15,    16,
      17,   108,    64,    65,    66,    67,    10,    16,    70,    71,
     111,   111,   108,   113,    79,    64,    65,    66,    67,    16,
      17,    70,    71,   111,    69,   113,    15,    16,    17,   111,
     389,    51,   107,   107,    51,    52,    56,   107,    15,    16,
      17,   107,    53,   107,   109,    69,   108,    44,    45,   107,
     107,    15,   312,    50,   314,   109,    11,    12,   108,   108,
      57,    81,    51,    34,    81,    35,    36,    37,    38,    39,
     325,    40,    18,   328,    51,   107,    96,    97,   108,    96,
      97,   107,    79,    16,    81,   107,   107,   107,   107,   349,
     107,   351,    81,   349,   107,   351,    10,   109,    10,    96,
      97,    10,    10,    10,    81,    16,    17,    96,    97,    64,
      65,    66,    67,   111,    69,    70,    71,   111,   107,    96,
      97,   376,   108,   378,   108,    10,   111,    53,   388,   111,
     107,   111,   388,    44,    45,   111,    47,    48,    42,     6,
     395,    69,    69,    82,    83,    84,    85,    86,    53,   107,
      69,    69,    53,   413,    93,    94,   110,   413,    15,    15,
     112,    42,   422,   103,    41,   108,   422,   108,    79,    10,
      81,   108,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    96,    97,    87,    88,    89,
      90,    91,    92,    87,    88,    89,    90,    91,    92,    10,
      69,    69,    10,    10,    10,   111,   108,   110,    10,   108,
      10,    15,   107,   111,   111,   111,   108,   108,   108,   108,
     108,   108,    69,   107,   107,   107,    38,   107,   107,    10,
      10,   109,   107,   109,   104,   108,   110,    10,   109,    10,
      10,    10,   108,   108,   108,   108,   108,   108,   107,    10,
      53,   111,   105,    11,   112,   110,   110,   320,   109,   109,
     112,   110,   108,   241,   112,   110,   110,    97,    61,   201,
      61,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   127
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    16,    17,    44,    45,    50,    57,    79,    81,    96,
      97,   119,   120,   121,   122,   124,   126,   134,   136,   138,
     157,   158,   174,   175,   176,   177,   178,    10,   107,   107,
     107,   107,    16,    18,   107,   107,   107,   107,     0,   120,
      69,     6,    69,    10,   111,    15,    16,    51,   107,   124,
     125,   135,   136,   155,   125,   154,    16,    16,   159,   160,
      56,   125,   166,   167,   107,    69,    52,   124,   125,   131,
     132,    18,   112,   124,    82,    83,    84,    85,    86,    93,
      94,    16,   124,   136,   124,   125,     6,   112,     3,     4,
       7,     8,     9,   114,   115,   116,   117,   156,   108,   111,
     108,    10,    69,   125,    11,    12,    64,    65,    66,    67,
      70,    71,   168,   169,   108,   168,   169,    16,   127,   108,
     111,   111,   152,   124,   138,   111,   107,   107,   107,   107,
     107,   107,   107,   123,   108,    87,    88,    89,    90,    91,
      92,    53,   153,    15,    16,    51,   135,   136,   155,   125,
      15,    51,   166,   125,   125,   109,   167,   167,   108,   111,
      69,   125,   132,    35,    36,    37,    38,    39,   108,   113,
     124,    15,   151,   151,    40,   147,    18,   108,    29,    40,
     142,    34,   139,   107,   107,   107,   107,   107,   107,   111,
     113,    69,    16,    47,    48,    79,   130,   136,   138,   157,
     162,   163,   164,   165,   174,   180,   109,    16,    10,    10,
      10,    10,    10,   111,   111,   108,   108,    10,   111,   149,
     152,   111,   111,   143,    53,   111,    42,   144,   144,   144,
     144,   144,   144,    53,     6,    16,   161,   165,    10,    69,
      69,   107,    69,    10,   164,    69,   110,    49,   109,   128,
     130,   133,   158,   165,    53,    15,    15,   112,    15,    51,
      52,    54,    55,   148,   150,    42,   137,   103,   170,    54,
      55,    41,   108,   108,    15,    33,   124,   135,    41,   144,
     108,    15,    16,    19,    20,    51,   140,    10,   111,   146,
     146,   146,   146,   146,   146,    87,    88,    89,    90,    91,
      92,   108,   125,   131,   136,    14,    46,   179,   125,   129,
     162,   110,    69,   128,    69,   152,   152,   152,   153,   152,
      10,   108,    10,   111,   111,    10,    10,     6,    10,   143,
     111,   141,    15,   145,    28,    38,    43,   108,   108,   108,
     108,   108,   108,   107,   107,   107,   107,   107,   107,   109,
     108,   109,   107,    14,    46,    69,   110,   128,   128,   113,
     145,    21,    23,    24,   171,   104,   172,    38,   150,    30,
      31,    32,   150,    41,   144,   108,    10,    10,    10,   108,
     108,   108,   108,   108,   108,   162,   180,   166,   109,   107,
     152,    10,   111,    10,   143,    10,   141,   150,   112,   150,
     110,   110,   108,   180,   166,    53,   105,   173,   112,   150,
     146,   153,   146,   109,   110,   108,    10,   108,   153,   141,
     113,   180,   109,   112,   113,   146,   110,   180,   153,   110,
     113
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
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

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
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


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
  case 4:
#line 86 "../src/rc_parser.y"
                                   {fprintf(yacc_output,"\n");}
#line 1874 "y.tab.c"
    break;

  case 5:
#line 87 "../src/rc_parser.y"
                           {fprintf(yacc_output,"\n");}
#line 1880 "y.tab.c"
    break;

  case 6:
#line 88 "../src/rc_parser.y"
                      {fprintf(yacc_output,"\n");}
#line 1886 "y.tab.c"
    break;

  case 7:
#line 89 "../src/rc_parser.y"
                      {fprintf(yacc_output,"\n");}
#line 1892 "y.tab.c"
    break;

  case 8:
#line 90 "../src/rc_parser.y"
                     {fprintf(yacc_output,"%s\n", (yyvsp[0].str));}
#line 1898 "y.tab.c"
    break;

  case 9:
#line 91 "../src/rc_parser.y"
                                        {fprintf(yacc_output,"\n");}
#line 1904 "y.tab.c"
    break;

  case 10:
#line 92 "../src/rc_parser.y"
                             {fprintf(yacc_output,"\n");}
#line 1910 "y.tab.c"
    break;

  case 11:
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
#line 1930 "y.tab.c"
    break;

  case 12:
#line 115 "../src/rc_parser.y"
                              {
        fprintf(yacc_output,"%s = %s",(yyvsp[-2].str),(yyvsp[0].str));
    }
#line 1938 "y.tab.c"
    break;

  case 13:
#line 119 "../src/rc_parser.y"
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
#line 1956 "y.tab.c"
    break;

  case 14:
#line 132 "../src/rc_parser.y"
                                                            {
                                                                fprintf(yacc_output, "%s = %s", (yyvsp[-3].str), (yyvsp[-1].str));
                                                            }
#line 1964 "y.tab.c"
    break;

  case 15:
#line 138 "../src/rc_parser.y"
                                                            {
                                                                char buffer[256];
                                                                snprintf(buffer, sizeof(buffer), "%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 1974 "y.tab.c"
    break;

  case 16:
#line 146 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s%s%s", (yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 1984 "y.tab.c"
    break;

  case 17:
#line 152 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s%s%d", (yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].in));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 1994 "y.tab.c"
    break;

  case 18:
#line 158 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s%s%f", (yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].flt));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 2004 "y.tab.c"
    break;

  case 19:
#line 163 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s%s%s", (yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 2014 "y.tab.c"
    break;

  case 20:
#line 169 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s%s%s", (yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 2024 "y.tab.c"
    break;

  case 21:
#line 175 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s%s%s", (yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 2034 "y.tab.c"
    break;

  case 22:
#line 180 "../src/rc_parser.y"
                                                                            {(yyval.str)=(yyvsp[0].str);}
#line 2040 "y.tab.c"
    break;

  case 23:
#line 182 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%d",(yyvsp[0].in));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 2050 "y.tab.c"
    break;

  case 24:
#line 188 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%f",(yyvsp[0].flt));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 2060 "y.tab.c"
    break;

  case 25:
#line 194 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s",(yyvsp[0].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 2070 "y.tab.c"
    break;

  case 26:
#line 200 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s",(yyvsp[0].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 2080 "y.tab.c"
    break;

  case 27:
#line 206 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "%s",(yyvsp[0].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 2090 "y.tab.c"
    break;

  case 28:
#line 216 "../src/rc_parser.y"
    {
        fprintf(yacc_output,"def %s(%s):\n\t%s",(yyvsp[-6].str),(yyvsp[-4].str),(yyvsp[-1].str));
    }
#line 2098 "y.tab.c"
    break;

  case 29:
#line 222 "../src/rc_parser.y"
                                                    {
                                                        (yyval.str) = (yyvsp[0].str);
                                                    }
#line 2106 "y.tab.c"
    break;

  case 30:
#line 226 "../src/rc_parser.y"
                                                    { 
                                                        char buffer[256]; 
                                                        snprintf(buffer, sizeof(buffer), "%s,%s",(yyvsp[-2].str),(yyvsp[0].str));
                                                        (yyval.str) = strdup(buffer);
                                                    }
#line 2116 "y.tab.c"
    break;

  case 31:
#line 231 "../src/rc_parser.y"
      {(yyval.str) = strdup("");}
#line 2122 "y.tab.c"
    break;

  case 32:
#line 236 "../src/rc_parser.y"
                                                    {
                                                        (yyval.str) = (yyvsp[-1].str);
                                                    }
#line 2130 "y.tab.c"
    break;

  case 33:
#line 239 "../src/rc_parser.y"
                                                             {char buffer[256]; 
                                        snprintf(buffer, sizeof(buffer), "%s\n%s", (yyvsp[-2].str),(yyvsp[0].str));
                                        (yyval.str) = strdup(buffer);}
#line 2138 "y.tab.c"
    break;

  case 34:
#line 242 "../src/rc_parser.y"
                                            {char buffer[256]; 
                                        snprintf(buffer, sizeof(buffer), "%s\n%s", (yyvsp[-1].str),(yyvsp[0].str));
                                        (yyval.str) = strdup(buffer);}
#line 2146 "y.tab.c"
    break;

  case 35:
#line 246 "../src/rc_parser.y"
                                                        {char buffer[256]; 
                                        snprintf(buffer, sizeof(buffer), "%s\n%s", (yyvsp[-2].str),(yyvsp[0].str));
                                        (yyval.str) = strdup(buffer);}
#line 2154 "y.tab.c"
    break;

  case 36:
#line 249 "../src/rc_parser.y"
                                       {char buffer[256]; 
                                        snprintf(buffer, sizeof(buffer), "return %s\n", (yyvsp[-1].str));
                                        (yyval.str) = strdup(buffer);}
#line 2162 "y.tab.c"
    break;

  case 37:
#line 255 "../src/rc_parser.y"
                {(yyval.str) = (yyvsp[0].str);}
#line 2168 "y.tab.c"
    break;

  case 38:
#line 259 "../src/rc_parser.y"
                                    {char buffer[256]; 
                                        snprintf(buffer, sizeof(buffer), "print(%s)\n", (yyvsp[-1].str));
                                        (yyval.str) = strdup(buffer);}
#line 2176 "y.tab.c"
    break;

  case 39:
#line 265 "../src/rc_parser.y"
                {(yyval.str) = (yyvsp[0].str);}
#line 2182 "y.tab.c"
    break;

  case 40:
#line 266 "../src/rc_parser.y"
                   {(yyval.str) = (yyvsp[0].str);}
#line 2188 "y.tab.c"
    break;

  case 41:
#line 267 "../src/rc_parser.y"
                                         {char buffer[256]; 
                                        snprintf(buffer, sizeof(buffer), "%s,%s", (yyvsp[-2].str),(yyvsp[0].str));
                                        (yyval.str) = strdup(buffer);}
#line 2196 "y.tab.c"
    break;

  case 42:
#line 270 "../src/rc_parser.y"
                                        {char buffer[256]; 
                                        snprintf(buffer, sizeof(buffer), "%s,%s", (yyvsp[-2].str),(yyvsp[0].str));
                                        (yyval.str) = strdup(buffer);}
#line 2204 "y.tab.c"
    break;

  case 43:
#line 274 "../src/rc_parser.y"
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
#line 2241 "y.tab.c"
    break;

  case 44:
#line 309 "../src/rc_parser.y"
            {(yyval.str) = (yyvsp[0].str);}
#line 2247 "y.tab.c"
    break;

  case 45:
#line 313 "../src/rc_parser.y"
                       {(yyval.str) = (yyvsp[0].str);}
#line 2253 "y.tab.c"
    break;

  case 46:
#line 317 "../src/rc_parser.y"
                                              { fprintf(yacc_output, "print(%s)", (yyvsp[-2].str));}
#line 2259 "y.tab.c"
    break;

  case 47:
#line 326 "../src/rc_parser.y"
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
#line 2296 "y.tab.c"
    break;

  case 48:
#line 359 "../src/rc_parser.y"
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
#line 2334 "y.tab.c"
    break;

  case 49:
#line 393 "../src/rc_parser.y"
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
#line 2372 "y.tab.c"
    break;

  case 50:
#line 427 "../src/rc_parser.y"
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
#line 2410 "y.tab.c"
    break;

  case 51:
#line 461 "../src/rc_parser.y"
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
#line 2448 "y.tab.c"
    break;

  case 52:
#line 495 "../src/rc_parser.y"
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
#line 2486 "y.tab.c"
    break;

  case 53:
#line 529 "../src/rc_parser.y"
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
#line 2524 "y.tab.c"
    break;

  case 54:
#line 563 "../src/rc_parser.y"
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
#line 2562 "y.tab.c"
    break;

  case 55:
#line 597 "../src/rc_parser.y"
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
#line 2600 "y.tab.c"
    break;

  case 56:
#line 631 "../src/rc_parser.y"
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
#line 2638 "y.tab.c"
    break;

  case 57:
#line 665 "../src/rc_parser.y"
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
#line 2676 "y.tab.c"
    break;

  case 58:
#line 699 "../src/rc_parser.y"
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
#line 2714 "y.tab.c"
    break;

  case 59:
#line 735 "../src/rc_parser.y"
                                                    {           if(header_present == 1){
                                                                   
                                                                   is_valid_header_row((yyvsp[-2].str),header);
                                               
                                                                 }
                                                                process_csvfile((yyvsp[-2].str));
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "pd.read_csv(%s)\n", (yyvsp[-2].str));
                                                                (yyval.str) = strdup(buffer);
                                                    }
#line 2729 "y.tab.c"
    break;

  case 60:
#line 746 "../src/rc_parser.y"
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
#line 2769 "y.tab.c"
    break;

  case 61:
#line 782 "../src/rc_parser.y"
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
#line 2808 "y.tab.c"
    break;

  case 62:
#line 817 "../src/rc_parser.y"
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
#line 2868 "y.tab.c"
    break;

  case 63:
#line 873 "../src/rc_parser.y"
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
#line 2903 "y.tab.c"
    break;

  case 64:
#line 904 "../src/rc_parser.y"
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
#line 2937 "y.tab.c"
    break;

  case 65:
#line 934 "../src/rc_parser.y"
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
#line 2974 "y.tab.c"
    break;

  case 66:
#line 967 "../src/rc_parser.y"
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
#line 3009 "y.tab.c"
    break;

  case 67:
#line 998 "../src/rc_parser.y"
                                                                            { 
                                                                                fprintf(yacc_output,"pd.concat([%s],%s)", (yyvsp[-4].str),(yyvsp[-1].str));
                                                                            }
#line 3017 "y.tab.c"
    break;

  case 68:
#line 1002 "../src/rc_parser.y"
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
#line 3078 "y.tab.c"
    break;

  case 69:
#line 1060 "../src/rc_parser.y"
                                                                            { 
                                                                                fprintf(yacc_output, "%s(%s)",(yyvsp[-3].str), (yyvsp[-1].str));
                                                                            }
#line 3086 "y.tab.c"
    break;

  case 70:
#line 1067 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "axis = %d", (yyvsp[0].in));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3096 "y.tab.c"
    break;

  case 71:
#line 1075 "../src/rc_parser.y"
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
#line 3130 "y.tab.c"
    break;

  case 72:
#line 1105 "../src/rc_parser.y"
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
#line 3165 "y.tab.c"
    break;

  case 73:
#line 1140 "../src/rc_parser.y"
                                                                    { 
                                                                        char buffer[256]; 
                                                                        snprintf(buffer, sizeof(buffer), "to_replace=r%s", (yyvsp[0].str));
                                                                        (yyval.str) = strdup(buffer);
                                                                    }
#line 3175 "y.tab.c"
    break;

  case 74:
#line 1149 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "value = %d", (yyvsp[0].in));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3185 "y.tab.c"
    break;

  case 75:
#line 1155 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "value = %f", (yyvsp[0].flt));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3195 "y.tab.c"
    break;

  case 76:
#line 1160 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "value = %s", (yyvsp[0].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3205 "y.tab.c"
    break;

  case 77:
#line 1165 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "value = %s", (yyvsp[0].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3215 "y.tab.c"
    break;

  case 78:
#line 1170 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "value = '%s'", (yyvsp[0].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3225 "y.tab.c"
    break;

  case 79:
#line 1179 "../src/rc_parser.y"
                                                                            {
                                                                                if((strcmp((yyvsp[-1].str), "True") == 0) || (strcmp((yyvsp[-1].str), "False") == 0)){
                                                                                    char buffer[256]; 
                                                                                    snprintf(buffer, sizeof(buffer), ",inplace = %s", (yyvsp[-1].str));
                                                                                    (yyval.str) = strdup(buffer);
                                                                                }
                                                                                else{
                                                                                    printf("TypeError at line %d: Inplace argument expects boolean value \n", yylineno);
                                                                                    exit(EXIT_FAILURE);
                                                                                }
                                                                            }
#line 3241 "y.tab.c"
    break;

  case 80:
#line 1191 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), ",%s", (yyvsp[-1].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3251 "y.tab.c"
    break;

  case 81:
#line 1196 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                buffer[0] = '\0';
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3261 "y.tab.c"
    break;

  case 82:
#line 1205 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "fillna(value = %d", (yyvsp[0].in));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3271 "y.tab.c"
    break;

  case 83:
#line 1211 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "fillna(value = %s", (yyvsp[0].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3281 "y.tab.c"
    break;

  case 84:
#line 1217 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "fillna(method = 'ffill'");
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3291 "y.tab.c"
    break;

  case 85:
#line 1223 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "fillna(method = 'bfill'");
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3301 "y.tab.c"
    break;

  case 86:
#line 1229 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "fillna(method = 'interpolate'");
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3311 "y.tab.c"
    break;

  case 87:
#line 1235 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "dropna(");
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3321 "y.tab.c"
    break;

  case 88:
#line 1244 "../src/rc_parser.y"
                                                                            { 
                                                                                if((strcmp((yyvsp[-1].str), "True") == 0) || (strcmp((yyvsp[-1].str), "False") == 0)){
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), ",inplace = %s", (yyvsp[-1].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                                }
                                                                                else{
                                                                                    printf("TypeError at line %d: Inplace argument expects boolean value \n", yylineno);
                                                                                    exit(EXIT_FAILURE);
                                                                                }

                                                                                
                                                                            }
#line 3339 "y.tab.c"
    break;

  case 89:
#line 1258 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), ",%s", (yyvsp[-1].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3349 "y.tab.c"
    break;

  case 90:
#line 1264 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                buffer[0] = '\0';
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3359 "y.tab.c"
    break;

  case 91:
#line 1273 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), "axis = %d",(yyvsp[0].in));
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3369 "y.tab.c"
    break;

  case 92:
#line 1279 "../src/rc_parser.y"
                                                                           { 
                                                                                char buffer[256]; 
                                                                                buffer[0] = '\0';
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3379 "y.tab.c"
    break;

  case 93:
#line 1288 "../src/rc_parser.y"
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
#line 3394 "y.tab.c"
    break;

  case 94:
#line 1302 "../src/rc_parser.y"
                                                                            { 
                                                                                if((strcmp((yyvsp[-1].str), "True") == 0) || (strcmp((yyvsp[-1].str), "False") == 0)){
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), ", numeric_only = %s",(yyvsp[-1].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                                }
                                                                                else{
                                                                                    printf("TypeError at line %d: Numeric argument expects boolean value \n", yylineno);
                                                                                    exit(EXIT_FAILURE);
                                                                                } 
                                                                            }
#line 3410 "y.tab.c"
    break;

  case 95:
#line 1313 "../src/rc_parser.y"
                                                                                  {
                                                                                if((strcmp((yyvsp[-1].str), "True") == 0) || (strcmp((yyvsp[-1].str), "False") == 0)){
                                                                                char buffer[256]; 
                                                                                snprintf(buffer, sizeof(buffer), ", skip_na = %s",(yyvsp[-1].str));
                                                                                (yyval.str) = strdup(buffer);
                                                                                }
                                                                                else{
                                                                                    printf("TypeError at line %d: SkipNA argument expects boolean value \n", yylineno);
                                                                                    exit(EXIT_FAILURE);
                                                                                }
                                                                            }
#line 3426 "y.tab.c"
    break;

  case 96:
#line 1325 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                buffer[0] = '\0';
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3436 "y.tab.c"
    break;

  case 97:
#line 1331 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                buffer[0] = '\0';
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3446 "y.tab.c"
    break;

  case 98:
#line 1340 "../src/rc_parser.y"
                                                                            { 
                                                                                if(strcmp((yyvsp[0].str), "True") == 0){
                                                                                    char buffer[256]; 
                                                                                    snprintf(buffer, sizeof(buffer), "drop = True");
                                                                                    (yyval.str) = strdup(buffer);
                                                                                }
                                                                                else{
                                                                                    printf("TypeError at line %d: Drop argument expects boolean value \n", yylineno);
                                                                                    exit(EXIT_FAILURE);
                                                                                } 
                                                                            }
#line 3462 "y.tab.c"
    break;

  case 99:
#line 1352 "../src/rc_parser.y"
                                                                            { 
                                                                                if(strcmp((yyvsp[-6].str), "False") == 0){
                                                                                    char buffer[256]; 
                                                                                    snprintf(buffer, sizeof(buffer), "[%s]",(yyvsp[-1].str));
                                                                                    (yyval.str) = strdup(buffer);
                                                                                }
                                                                                else{
                                                                                    printf("TypeError at line %d: Drop argument expects boolean value \n", yylineno);
                                                                                    exit(EXIT_FAILURE);
                                                                                }
                                                                            }
#line 3478 "y.tab.c"
    break;

  case 100:
#line 1366 "../src/rc_parser.y"
                { (yyval.str) = (yyvsp[0].str); }
#line 3484 "y.tab.c"
    break;

  case 101:
#line 1367 "../src/rc_parser.y"
                { (yyval.str) = (yyvsp[0].str); }
#line 3490 "y.tab.c"
    break;

  case 102:
#line 1371 "../src/rc_parser.y"
                                                                            {
                                                                                if((strcmp((yyvsp[0].str), "True") == 0) || (strcmp((yyvsp[0].str), "False") == 0)){
                                                                                    char buffer[256]; 
                                                                                    snprintf(buffer, sizeof(buffer), ",inplace = %s",(yyvsp[0].str));
                                                                                    (yyval.str) = strdup(buffer);
                                                                                }
                                                                                else{
                                                                                    printf("TypeError at line %d: Inplace argument expects boolean value \n", yylineno);
                                                                                    exit(EXIT_FAILURE);
                                                                                } 
                                                                            }
#line 3506 "y.tab.c"
    break;

  case 103:
#line 1383 "../src/rc_parser.y"
                                                                            { 
                                                                                char buffer[256]; 
                                                                                buffer[0] = '\0';
                                                                                (yyval.str) = strdup(buffer);
                                                                            }
#line 3516 "y.tab.c"
    break;

  case 104:
#line 1390 "../src/rc_parser.y"
                       { char buffer[256]; 
                            if((yyvsp[0].str) == "True"){
                                snprintf(buffer, sizeof(buffer), "True");
                                (yyval.str) = strdup(buffer);
                            }
                            if((yyvsp[0].str) == "False"){
                                snprintf(buffer, sizeof(buffer), "False");
                                (yyval.str) = strdup(buffer);
                            }
                         }
#line 3531 "y.tab.c"
    break;

  case 105:
#line 1400 "../src/rc_parser.y"
                       { char buffer[256]; 
                        snprintf(buffer, sizeof(buffer), "%d", (yyvsp[0].in));
                        (yyval.str) = strdup(buffer); }
#line 3539 "y.tab.c"
    break;

  case 106:
#line 1403 "../src/rc_parser.y"
                       { char buffer[256]; 
                        snprintf(buffer, sizeof(buffer), "%f", (yyvsp[0].flt));
                        (yyval.str) = strdup(buffer);}
#line 3547 "y.tab.c"
    break;

  case 107:
#line 1406 "../src/rc_parser.y"
                       { (yyval.str) = strdup((yyvsp[0].str)); }
#line 3553 "y.tab.c"
    break;

  case 108:
#line 1413 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%d", (yyvsp[0].in));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3563 "y.tab.c"
    break;

  case 109:
#line 1419 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                buffer[0] = '\0';
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3573 "y.tab.c"
    break;

  case 110:
#line 1428 "../src/rc_parser.y"
                                                            {   is_valid_delimiter((yyvsp[-1].str));
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), ", sep = %s\n", (yyvsp[-1].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3583 "y.tab.c"
    break;

  case 111:
#line 1434 "../src/rc_parser.y"
                                                            {   header_present=1;
                                                                header=(yyvsp[-1].in);
                                                                
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), ", header = %d\n", (yyvsp[-1].in));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3595 "y.tab.c"
    break;

  case 112:
#line 1442 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), ", index_col = %d\n", (yyvsp[-1].in));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3605 "y.tab.c"
    break;

  case 113:
#line 1448 "../src/rc_parser.y"
                                                            {
                                                                if((strcmp((yyvsp[-1].str), "True") == 0) || (strcmp((yyvsp[-1].str), "False") == 0)){
                                                                    char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), ", index = %s\n", (yyvsp[-1].str));
                                                                (yyval.str) = strdup(buffer);
                                                                }
                                                                else{
                                                                    printf("TypeError at line %d: Index argument expects boolean value \n", yylineno);
                                                                    exit(EXIT_FAILURE);
                                                                } 

                                                                
                                                            }
#line 3623 "y.tab.c"
    break;

  case 114:
#line 1462 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), ", usecols = [%s]\n", (yyvsp[-2].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3633 "y.tab.c"
    break;

  case 115:
#line 1468 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                buffer[0] = '\0';
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3643 "y.tab.c"
    break;

  case 116:
#line 1476 "../src/rc_parser.y"
                                                           { (yyval.str) = (yyvsp[0].str); }
#line 3649 "y.tab.c"
    break;

  case 117:
#line 1478 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s , %s", (yyvsp[-2].str),(yyvsp[0].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3659 "y.tab.c"
    break;

  case 118:
#line 1488 "../src/rc_parser.y"
                                                { 
                                                    char buffer[256]; 
                                                    snprintf(buffer, sizeof(buffer), "%s", (yyvsp[0].str));
                                                    (yyval.str) = strdup(buffer);
                                                }
#line 3669 "y.tab.c"
    break;

  case 119:
#line 1494 "../src/rc_parser.y"
                                                { 
                                                    char buffer[256]; 
                                                    snprintf(buffer, sizeof(buffer), "%s,%s", (yyvsp[-2].str),(yyvsp[0].str));
                                                    (yyval.str) = strdup(buffer);
                                                }
#line 3679 "y.tab.c"
    break;

  case 120:
#line 1503 "../src/rc_parser.y"
                                                { 
                                                    char buffer[256]; 
                                                    snprintf(buffer, sizeof(buffer), "(%s)", (yyvsp[-1].str));
                                                    (yyval.str) = strdup(buffer);
                                                }
#line 3689 "y.tab.c"
    break;

  case 121:
#line 1511 "../src/rc_parser.y"
          { (yyval.str) = strdup("+"); }
#line 3695 "y.tab.c"
    break;

  case 122:
#line 1512 "../src/rc_parser.y"
          { (yyval.str) = strdup("-"); }
#line 3701 "y.tab.c"
    break;

  case 123:
#line 1513 "../src/rc_parser.y"
          { (yyval.str) = strdup("*"); }
#line 3707 "y.tab.c"
    break;

  case 124:
#line 1514 "../src/rc_parser.y"
          { (yyval.str) = strdup("/"); }
#line 3713 "y.tab.c"
    break;

  case 125:
#line 1515 "../src/rc_parser.y"
          { (yyval.str) = strdup("%"); }
#line 3719 "y.tab.c"
    break;

  case 126:
#line 1516 "../src/rc_parser.y"
          { (yyval.str) = strdup("&"); }
#line 3725 "y.tab.c"
    break;

  case 127:
#line 1517 "../src/rc_parser.y"
          { (yyval.str) = strdup("|"); }
#line 3731 "y.tab.c"
    break;

  case 128:
#line 1518 "../src/rc_parser.y"
          { (yyval.str) = strdup("^"); }
#line 3737 "y.tab.c"
    break;

  case 129:
#line 1519 "../src/rc_parser.y"
          { (yyval.str) = strdup("~"); }
#line 3743 "y.tab.c"
    break;

  case 130:
#line 1523 "../src/rc_parser.y"
                                        { 
                                            char buffer[256]; 
                                            snprintf(buffer, sizeof(buffer), "%s", (yyvsp[0].str));
                                            (yyval.str) = strdup(buffer);
                                        }
#line 3753 "y.tab.c"
    break;

  case 131:
#line 1533 "../src/rc_parser.y"
                    {
                        char buffer[256]; 
                        snprintf(buffer, sizeof(buffer), "%s\nwhile(%s):\n%s\n\t%s", (yyvsp[-8].str), (yyvsp[-6].str), (yyvsp[-1].str), (yyvsp[-4].str));
                        (yyval.str) = strdup(buffer);
                    }
#line 3763 "y.tab.c"
    break;

  case 132:
#line 1541 "../src/rc_parser.y"
                                    { (yyval.str) = strdup((yyvsp[0].str)); }
#line 3769 "y.tab.c"
    break;

  case 133:
#line 1545 "../src/rc_parser.y"
                                    { 
                                        char buffer[256]; 
                                        snprintf(buffer, sizeof(buffer), "%s = %d", (yyvsp[-2].str),(yyvsp[0].in));
                                        (yyval.str) = strdup(buffer);
                                    }
#line 3779 "y.tab.c"
    break;

  case 134:
#line 1550 "../src/rc_parser.y"
                                    { 
                                        char buffer[256]; 
                                        snprintf(buffer, sizeof(buffer), "%s = %f", (yyvsp[-2].str),(yyvsp[0].flt));
                                        (yyval.str) = strdup(buffer);
                                    }
#line 3789 "y.tab.c"
    break;

  case 135:
#line 1558 "../src/rc_parser.y"
                                  { (yyval.str) = strdup((yyvsp[0].str)); }
#line 3795 "y.tab.c"
    break;

  case 136:
#line 1562 "../src/rc_parser.y"
                    { (yyval.str) = strdup((yyvsp[0].str)); }
#line 3801 "y.tab.c"
    break;

  case 137:
#line 1566 "../src/rc_parser.y"
                                        {  
                                            char buffer[256] ;
                                            snprintf(buffer, sizeof(buffer), "\t%s\n", (yyvsp[0].str)); 
                                            (yyval.str) = strdup(buffer);
                                        }
#line 3811 "y.tab.c"
    break;

  case 138:
#line 1571 "../src/rc_parser.y"
                                        { 
                                            char buffer[256]; 
                                            snprintf(buffer, sizeof(buffer), "%s\t%s", (yyvsp[-1].str), (yyvsp[0].str));
                                            (yyval.str) = strdup(buffer);
                                        }
#line 3821 "y.tab.c"
    break;

  case 139:
#line 1579 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s", (yyvsp[-1].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3831 "y.tab.c"
    break;

  case 140:
#line 1584 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s", (yyvsp[-1].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3841 "y.tab.c"
    break;

  case 141:
#line 1589 "../src/rc_parser.y"
                                        {(yyval.str) = (yyvsp[0].str);}
#line 3847 "y.tab.c"
    break;

  case 142:
#line 1590 "../src/rc_parser.y"
                                        {(yyval.str) = (yyvsp[0].str);}
#line 3853 "y.tab.c"
    break;

  case 143:
#line 1591 "../src/rc_parser.y"
                                        { 
                                            char buffer[256]; 
                                            snprintf(buffer, sizeof(buffer), "break");
                                            (yyval.str) = strdup(buffer);
                                        }
#line 3863 "y.tab.c"
    break;

  case 144:
#line 1596 "../src/rc_parser.y"
                                        { 
                                            char buffer[256]; 
                                            snprintf(buffer, sizeof(buffer), "continue");
                                            (yyval.str) = strdup(buffer);
                                        }
#line 3873 "y.tab.c"
    break;

  case 145:
#line 1601 "../src/rc_parser.y"
                                        {(yyval.str) = (yyvsp[0].str);}
#line 3879 "y.tab.c"
    break;

  case 146:
#line 1602 "../src/rc_parser.y"
                                        {(yyval.str) = (yyvsp[0].str);}
#line 3885 "y.tab.c"
    break;

  case 147:
#line 1607 "../src/rc_parser.y"
                                                { 
                                                    char buffer[256]; 
                                                    snprintf(buffer, sizeof(buffer), "%s = %s", (yyvsp[-2].str) ,(yyvsp[0].str));
                                                    (yyval.str) = strdup(buffer);
                                                }
#line 3895 "y.tab.c"
    break;

  case 148:
#line 1612 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s = %s", (yyvsp[-2].str),(yyvsp[0].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3905 "y.tab.c"
    break;

  case 149:
#line 1620 "../src/rc_parser.y"
              { (yyval.str) = strdup((yyvsp[0].str));}
#line 3911 "y.tab.c"
    break;

  case 150:
#line 1621 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s %s %s", (yyvsp[-2].str),(yyvsp[-1].str), (yyvsp[0].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3921 "y.tab.c"
    break;

  case 151:
#line 1626 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s %s %s", (yyvsp[-2].str),(yyvsp[-1].str), (yyvsp[0].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3931 "y.tab.c"
    break;

  case 152:
#line 1634 "../src/rc_parser.y"
                                                 { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s %s %s", (yyvsp[-2].str),(yyvsp[-1].str), (yyvsp[0].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3941 "y.tab.c"
    break;

  case 153:
#line 1639 "../src/rc_parser.y"
                                                { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s %s %s", (yyvsp[-2].str),(yyvsp[-1].str), (yyvsp[0].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3951 "y.tab.c"
    break;

  case 154:
#line 1644 "../src/rc_parser.y"
                               { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "%s %s", (yyvsp[-1].str),(yyvsp[0].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 3961 "y.tab.c"
    break;

  case 155:
#line 1652 "../src/rc_parser.y"
                    { (yyval.str) = strdup(" and ");}
#line 3967 "y.tab.c"
    break;

  case 156:
#line 1653 "../src/rc_parser.y"
                  { (yyval.str) = strdup(" or ");}
#line 3973 "y.tab.c"
    break;

  case 157:
#line 1657 "../src/rc_parser.y"
        {(yyval.str) = strdup("<");}
#line 3979 "y.tab.c"
    break;

  case 158:
#line 1658 "../src/rc_parser.y"
            {(yyval.str) = strdup(">");}
#line 3985 "y.tab.c"
    break;

  case 159:
#line 1659 "../src/rc_parser.y"
                    {(yyval.str) = strdup(" <= ");}
#line 3991 "y.tab.c"
    break;

  case 160:
#line 1660 "../src/rc_parser.y"
                    {(yyval.str) = strdup(" >= ");}
#line 3997 "y.tab.c"
    break;

  case 161:
#line 1661 "../src/rc_parser.y"
                    {(yyval.str) = strdup(" != ");}
#line 4003 "y.tab.c"
    break;

  case 162:
#line 1662 "../src/rc_parser.y"
                    {(yyval.str) = strdup(" == ");}
#line 4009 "y.tab.c"
    break;

  case 163:
#line 1667 "../src/rc_parser.y"
                                { 
                                    char buffer[256]; 
                                    snprintf(buffer, sizeof(buffer), "how = %s", (yyvsp[0].str));
                                    (yyval.str) = strdup(buffer);
                                }
#line 4019 "y.tab.c"
    break;

  case 164:
#line 1675 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "'%s'", (yyvsp[0].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 4029 "y.tab.c"
    break;

  case 165:
#line 1680 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "'%s'", (yyvsp[0].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 4039 "y.tab.c"
    break;

  case 166:
#line 1685 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "'%s'", (yyvsp[0].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 4049 "y.tab.c"
    break;

  case 167:
#line 1693 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "on = %s", (yyvsp[0].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 4059 "y.tab.c"
    break;

  case 168:
#line 1701 "../src/rc_parser.y"
                                                            { 
                                                                char buffer[256]; 
                                                                snprintf(buffer, sizeof(buffer), "suffixes = [%s]", (yyvsp[-1].str));
                                                                (yyval.str) = strdup(buffer);
                                                            }
#line 4069 "y.tab.c"
    break;

  case 169:
#line 1709 "../src/rc_parser.y"
                             { (yyval.str) = strdup((yyvsp[0].str));}
#line 4075 "y.tab.c"
    break;

  case 170:
#line 1710 "../src/rc_parser.y"
                               { (yyval.str) = strdup((yyvsp[0].str));}
#line 4081 "y.tab.c"
    break;

  case 171:
#line 1711 "../src/rc_parser.y"
                               { (yyval.str) = strdup((yyvsp[0].str));}
#line 4087 "y.tab.c"
    break;

  case 172:
#line 1712 "../src/rc_parser.y"
                               { (yyval.str) = strdup((yyvsp[0].str));}
#line 4093 "y.tab.c"
    break;

  case 173:
#line 1719 "../src/rc_parser.y"
    {
        fprintf(yacc_output, "if(%s):\n%s\n%selse:\n%s", (yyvsp[-9].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-1].str));
    }
#line 4101 "y.tab.c"
    break;

  case 174:
#line 1727 "../src/rc_parser.y"
    {
        fprintf(yacc_output, "if(%s):\n%s\n%s", (yyvsp[-5].str), (yyvsp[-2].str), (yyvsp[0].str));
    }
#line 4109 "y.tab.c"
    break;

  case 175:
#line 1735 "../src/rc_parser.y"
    {
        fprintf(yacc_output, "if(%s):\n%s\nelse:\n%s", (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-1].str));
    }
#line 4117 "y.tab.c"
    break;

  case 176:
#line 1742 "../src/rc_parser.y"
    {
        fprintf(yacc_output, "if(%s):\n%s\n", (yyvsp[-4].str), (yyvsp[-1].str));
    }
#line 4125 "y.tab.c"
    break;

  case 177:
#line 1748 "../src/rc_parser.y"
                                                           {
        char buffer[256];
        snprintf(buffer, sizeof(buffer), "elif(%s):\n%s\n", (yyvsp[-4].str), (yyvsp[-1].str));
        (yyval.str) = strdup(buffer);
    }
#line 4135 "y.tab.c"
    break;

  case 178:
#line 1754 "../src/rc_parser.y"
    { 
        char buffer[256]; 
        snprintf(buffer, sizeof(buffer), "%s\nelif(%s):\n%s\n", (yyvsp[-7].str), (yyvsp[-4].str), (yyvsp[-1].str));
        (yyval.str) = strdup(buffer);
    }
#line 4145 "y.tab.c"
    break;


#line 4149 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
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
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1765 "../src/rc_parser.y"


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

    // calling yyparse to parse the input until EOF
    yyparse();
    fclose(yyin);

    return 0;
}
