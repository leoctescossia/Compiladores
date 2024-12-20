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
#line 1 "syntax.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "syntax.tab.h"

extern FILE *yyin;
extern int yylex(void);
void yyerror(const char *s);

#line 82 "syntax.tab.c"

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

#include "syntax.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_PHP_OPEN = 3,                   /* PHP_OPEN  */
  YYSYMBOL_PHP_CLOSE = 4,                  /* PHP_CLOSE  */
  YYSYMBOL_VARIAVEIS = 5,                  /* VARIAVEIS  */
  YYSYMBOL_PONTOVIRGULA = 6,               /* PONTOVIRGULA  */
  YYSYMBOL_RECEBE = 7,                     /* RECEBE  */
  YYSYMBOL_MAIORQUE = 8,                   /* MAIORQUE  */
  YYSYMBOL_MENORQUE = 9,                   /* MENORQUE  */
  YYSYMBOL_IGUAL = 10,                     /* IGUAL  */
  YYSYMBOL_DIFERENTE = 11,                 /* DIFERENTE  */
  YYSYMBOL_SENAOSE = 12,                   /* SENAOSE  */
  YYSYMBOL_MAIORIGUAL = 13,                /* MAIORIGUAL  */
  YYSYMBOL_MENORIGUAL = 14,                /* MENORIGUAL  */
  YYSYMBOL_PRINT = 15,                     /* PRINT  */
  YYSYMBOL_FOR = 16,                       /* FOR  */
  YYSYMBOL_MAISMAIS = 17,                  /* MAISMAIS  */
  YYSYMBOL_MENOSMENOS = 18,                /* MENOSMENOS  */
  YYSYMBOL_SE = 19,                        /* SE  */
  YYSYMBOL_SENAO = 20,                     /* SENAO  */
  YYSYMBOL_ABREP = 21,                     /* ABREP  */
  YYSYMBOL_FECHAP = 22,                    /* FECHAP  */
  YYSYMBOL_ABREC = 23,                     /* ABREC  */
  YYSYMBOL_FECHAC = 24,                    /* FECHAC  */
  YYSYMBOL_E = 25,                         /* E  */
  YYSYMBOL_OU = 26,                        /* OU  */
  YYSYMBOL_ENQUANTO = 27,                  /* ENQUANTO  */
  YYSYMBOL_FUNC = 28,                      /* FUNC  */
  YYSYMBOL_RETURN = 29,                    /* RETURN  */
  YYSYMBOL_VIRGULA = 30,                   /* VIRGULA  */
  YYSYMBOL_BREAK = 31,                     /* BREAK  */
  YYSYMBOL_NUM = 32,                       /* NUM  */
  YYSYMBOL_STR = 33,                       /* STR  */
  YYSYMBOL_PALAVRAS = 34,                  /* PALAVRAS  */
  YYSYMBOL_MAIS = 35,                      /* MAIS  */
  YYSYMBOL_MENOS = 36,                     /* MENOS  */
  YYSYMBOL_MULTIPLICA = 37,                /* MULTIPLICA  */
  YYSYMBOL_DIVIDE = 38,                    /* DIVIDE  */
  YYSYMBOL_YYACCEPT = 39,                  /* $accept  */
  YYSYMBOL_PROGRAMA = 40,                  /* PROGRAMA  */
  YYSYMBOL_CODIGOS = 41,                   /* CODIGOS  */
  YYSYMBOL_CODIGO = 42,                    /* CODIGO  */
  YYSYMBOL_DECLARACAO = 43,                /* DECLARACAO  */
  YYSYMBOL_COMANDO = 44,                   /* COMANDO  */
  YYSYMBOL_INCREMENTO = 45,                /* INCREMENTO  */
  YYSYMBOL_ATRIBUICAO = 46,                /* ATRIBUICAO  */
  YYSYMBOL_EXPRESSAO = 47,                 /* EXPRESSAO  */
  YYSYMBOL_LOOP = 48,                      /* LOOP  */
  YYSYMBOL_CONDICAO = 49,                  /* CONDICAO  */
  YYSYMBOL_CONDICOES = 50,                 /* CONDICOES  */
  YYSYMBOL_CONDICIONAL = 51,               /* CONDICIONAL  */
  YYSYMBOL_FUNCAO = 52                     /* FUNCAO  */
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
typedef yytype_int8 yy_state_t;

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
#define YYLAST   119

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  46
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  108

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   293


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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    28,    28,    30,    30,    32,    32,    32,    32,    32,
      32,    32,    36,    42,    45,    48,    53,    57,    63,    68,
      74,    80,    87,    92,    97,   102,   107,   111,   113,   118,
     121,   126,   131,   136,   141,   146,   151,   156,   161,   169,
     169,   172,   175,   177,   182,   187,   191
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
  "\"end of file\"", "error", "\"invalid token\"", "PHP_OPEN",
  "PHP_CLOSE", "VARIAVEIS", "PONTOVIRGULA", "RECEBE", "MAIORQUE",
  "MENORQUE", "IGUAL", "DIFERENTE", "SENAOSE", "MAIORIGUAL", "MENORIGUAL",
  "PRINT", "FOR", "MAISMAIS", "MENOSMENOS", "SE", "SENAO", "ABREP",
  "FECHAP", "ABREC", "FECHAC", "E", "OU", "ENQUANTO", "FUNC", "RETURN",
  "VIRGULA", "BREAK", "NUM", "STR", "PALAVRAS", "MAIS", "MENOS",
  "MULTIPLICA", "DIVIDE", "$accept", "PROGRAMA", "CODIGOS", "CODIGO",
  "DECLARACAO", "COMANDO", "INCREMENTO", "ATRIBUICAO", "EXPRESSAO", "LOOP",
  "CONDICAO", "CONDICOES", "CONDICIONAL", "FUNCAO", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-30)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       5,    -2,    10,    81,     4,    -6,    -8,     0,   -29,    23,
      38,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,     2,    18,    45,    46,    14,    -3,    29,    31,    -3,
      34,    50,   -30,    -8,    44,   -30,   -30,    -3,   -30,    52,
      39,    -5,   -30,   -30,   -30,   -30,    56,    58,    42,    66,
      -3,   -30,    59,    73,   -30,    48,   -30,    77,   -30,    -3,
      -3,    -3,    -3,    83,    67,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    75,    85,   -16,   -30,   -11,     9,     9,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,    86,   -30,    87,   106,   107,   109,   -30,
     -30,    90,   -30,    93,    94,   110,   -30,   -30
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,     5,     8,     9,     6,     7,    10,    11,     1,
      12,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,    30,     0,     3,    28,     0,    27,     0,
       0,     0,    16,    17,    14,    13,     0,    40,    39,     0,
       0,    42,    39,     0,    45,     0,    21,     0,    18,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,     0,     0,    26,     0,    22,    23,
      24,    25,    15,    41,    39,    33,    34,    37,    38,    35,
      36,    31,    32,     0,    29,     0,     0,     0,     0,    43,
      44,     0,    19,     0,     0,     0,    46,    20
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -30,   -30,   117,   118,   -30,   -30,   -30,   -30,   -21,   -30,
      19,    35,   -30,   -30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,    34,    35,    12,    13,    14,    15,    47,    16,
      84,    49,    17,    18
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      41,    58,    36,     3,    27,    30,    95,    36,     1,    24,
      19,    97,    28,     4,    96,    26,    55,     5,    37,    98,
      45,    29,     6,    37,    42,     7,     8,     9,    31,    38,
      59,    60,    61,    62,    38,    39,    40,    25,    78,    79,
      80,    81,    32,     3,    46,    48,    61,    62,    52,     3,
      50,    43,    44,     4,    51,    53,    54,     5,    56,     4,
      57,    63,    33,     5,    64,     7,     8,     9,    33,    73,
      76,     7,     8,     9,    65,    66,    67,    68,    75,    69,
      70,    74,    77,    59,    60,    61,    62,    20,    21,    82,
      83,    71,    72,    59,    60,    61,    62,    93,    22,    23,
      85,    86,    87,    88,    89,    90,    91,    92,    94,    99,
     100,   101,   104,   102,   103,   105,   107,   106,    10,    11
};

static const yytype_int8 yycheck[] =
{
      21,     6,     5,     5,    12,    34,    22,     5,     3,     5,
       0,    22,    20,    15,    30,    21,    37,    19,    21,    30,
       6,    21,    24,    21,     6,    27,    28,    29,     5,    32,
      35,    36,    37,    38,    32,    33,    34,    33,    59,    60,
      61,    62,     4,     5,    30,    26,    37,    38,    29,     5,
      21,     6,     6,    15,    23,    21,     6,    19,     6,    15,
      21,     5,    24,    19,    22,    27,    28,    29,    24,    50,
      22,    27,    28,    29,     8,     9,    10,    11,     5,    13,
      14,    22,     5,    35,    36,    37,    38,     6,     7,     6,
      23,    25,    26,    35,    36,    37,    38,    22,    17,    18,
      65,    66,    67,    68,    69,    70,    71,    72,    23,    23,
      23,     5,    22,     6,     5,    22,     6,    23,     1,     1
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    40,     5,    15,    19,    24,    27,    28,    29,
      41,    42,    43,    44,    45,    46,    48,    51,    52,     0,
       6,     7,    17,    18,     5,    33,    21,    12,    20,    21,
      34,     5,     4,    24,    41,    42,     5,    21,    32,    33,
      34,    47,     6,     6,     6,     6,    30,    47,    49,    50,
      21,    23,    49,    21,     6,    47,     6,    21,     6,    35,
      36,    37,    38,     5,    22,     8,     9,    10,    11,    13,
      14,    25,    26,    49,    22,     5,    22,     5,    47,    47,
      47,    47,     6,    23,    49,    50,    50,    50,    50,    50,
      50,    50,    50,    22,    23,    22,    30,    22,    30,    23,
      23,     5,     6,     5,    22,    22,    23,     6
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    39,    40,    41,    41,    42,    42,    42,    42,    42,
      42,    42,    43,    44,    44,    44,    45,    45,    46,    46,
      46,    46,    47,    47,    47,    47,    47,    47,    47,    48,
      48,    49,    49,    49,    49,    49,    49,    49,    49,    50,
      50,    51,    51,    51,    52,    52,    52
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     3,     3,     5,     3,     3,     4,     7,
       9,     4,     3,     3,     3,     3,     3,     1,     1,     5,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     5,     3,     6,     6,     3,     8
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
  case 12: /* DECLARACAO: VARIAVEIS PONTOVIRGULA  */
#line 36 "syntax.y"
                           {
        printf("local %s\n", (yyvsp[-1].str));
        free((yyvsp[-1].str));
    }
#line 1187 "syntax.tab.c"
    break;

  case 13: /* COMANDO: PRINT STR PONTOVIRGULA  */
#line 42 "syntax.y"
                           {
        printf("print(%s)\n", (yyvsp[0].str)); // Traduz 'echo "texto";' para 'print("texto")'
    }
#line 1195 "syntax.tab.c"
    break;

  case 14: /* COMANDO: PRINT VARIAVEIS PONTOVIRGULA  */
#line 45 "syntax.y"
                                   {
        printf("print(%s)\n    ", (yyvsp[0].str)); // Traduz 'echo $var;' para 'print(var)'
    }
#line 1203 "syntax.tab.c"
    break;

  case 15: /* COMANDO: PRINT STR VIRGULA VARIAVEIS PONTOVIRGULA  */
#line 48 "syntax.y"
                                               {
        printf("print(f\"%s { %s }\")\n    ", (yyvsp[-2].str), (yyvsp[0].str)); // Traduz 'echo "Texto", $var;' para 'print(f"Texto {var}")'
    }
#line 1211 "syntax.tab.c"
    break;

  case 16: /* INCREMENTO: VARIAVEIS MAISMAIS PONTOVIRGULA  */
#line 53 "syntax.y"
                                    {
        printf("    %s += 1\n    ", (yyvsp[-2].str)); // Traduz '$i++;' para 'i += 1'
        free((yyvsp[-2].str));
    }
#line 1220 "syntax.tab.c"
    break;

  case 17: /* INCREMENTO: VARIAVEIS MENOSMENOS PONTOVIRGULA  */
#line 57 "syntax.y"
                                        {
        printf("    %s -= 1\n    ", (yyvsp[-2].str)); // Traduz '$i--;' para 'i -= 1'
        free((yyvsp[-2].str));
    }
#line 1229 "syntax.tab.c"
    break;

  case 18: /* ATRIBUICAO: VARIAVEIS RECEBE EXPRESSAO PONTOVIRGULA  */
#line 63 "syntax.y"
                                            {
        printf("%s = %s\n", (yyvsp[-3].str), (yyvsp[-1].str)); // Adicionada indentação para Python
        free((yyvsp[-3].str));
        free((yyvsp[-1].str));
    }
#line 1239 "syntax.tab.c"
    break;

  case 19: /* ATRIBUICAO: VARIAVEIS RECEBE PALAVRAS ABREP VARIAVEIS FECHAP PONTOVIRGULA  */
#line 68 "syntax.y"
                                                                    {
        printf("%s = %s(%s)\n", (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-2].str)); // Adicionada indentação para Python
        free((yyvsp[-6].str));
        free((yyvsp[-4].str));
        free((yyvsp[-2].str));
    }
#line 1250 "syntax.tab.c"
    break;

  case 20: /* ATRIBUICAO: VARIAVEIS RECEBE PALAVRAS ABREP VARIAVEIS VIRGULA VARIAVEIS FECHAP PONTOVIRGULA  */
#line 74 "syntax.y"
                                                                                      {
        printf("%s = %s(%s, %s)\n", (yyvsp[-8].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-2].str)); // Adicionada indentação para Python
        free((yyvsp[-8].str));
        free((yyvsp[-6].str));
        free((yyvsp[-4].str));
    }
#line 1261 "syntax.tab.c"
    break;

  case 21: /* ATRIBUICAO: VARIAVEIS RECEBE STR PONTOVIRGULA  */
#line 80 "syntax.y"
                                        {
        printf("%s = %s\n", (yyvsp[-3].str), (yyvsp[-1].str)); // Adicionada indentação para Python
        free((yyvsp[-3].str));
    }
#line 1270 "syntax.tab.c"
    break;

  case 22: /* EXPRESSAO: EXPRESSAO MAIS EXPRESSAO  */
#line 87 "syntax.y"
                               {
          (yyval.str) = malloc(100);
          snprintf((yyval.str), 100, "%s + %s", (yyvsp[-2].str), (yyvsp[0].str));
          free((yyvsp[-2].str));
          free((yyvsp[0].str));
      }
#line 1281 "syntax.tab.c"
    break;

  case 23: /* EXPRESSAO: EXPRESSAO MENOS EXPRESSAO  */
#line 92 "syntax.y"
                                   {
          (yyval.str) = malloc(100);
          snprintf((yyval.str), 100, "%s - %s", (yyvsp[-2].str), (yyvsp[0].str));
          free((yyvsp[-2].str));
          free((yyvsp[0].str));
      }
#line 1292 "syntax.tab.c"
    break;

  case 24: /* EXPRESSAO: EXPRESSAO MULTIPLICA EXPRESSAO  */
#line 97 "syntax.y"
                                        {
          (yyval.str) = malloc(100);
          snprintf((yyval.str), 100, "%s * %s", (yyvsp[-2].str), (yyvsp[0].str));
          free((yyvsp[-2].str));
          free((yyvsp[0].str));
      }
#line 1303 "syntax.tab.c"
    break;

  case 25: /* EXPRESSAO: EXPRESSAO DIVIDE EXPRESSAO  */
#line 102 "syntax.y"
                                    {
          (yyval.str) = malloc(100);
          snprintf((yyval.str), 100, "%s / %s", (yyvsp[-2].str), (yyvsp[0].str));
          free((yyvsp[-2].str));
          free((yyvsp[0].str));
      }
#line 1314 "syntax.tab.c"
    break;

  case 26: /* EXPRESSAO: ABREP EXPRESSAO FECHAP  */
#line 107 "syntax.y"
                                {
          (yyval.str) = malloc(strlen((yyvsp[-1].str)) + 3);
          snprintf((yyval.str), 100, "(%s)", (yyvsp[-1].str));
          free((yyvsp[-1].str));
      }
#line 1324 "syntax.tab.c"
    break;

  case 27: /* EXPRESSAO: NUM  */
#line 111 "syntax.y"
             {
          (yyval.str) = strdup((yyvsp[0].str));
      }
#line 1332 "syntax.tab.c"
    break;

  case 28: /* EXPRESSAO: VARIAVEIS  */
#line 113 "syntax.y"
                   {
          (yyval.str) = strdup((yyvsp[0].str));
      }
#line 1340 "syntax.tab.c"
    break;

  case 29: /* LOOP: ENQUANTO ABREP CONDICAO FECHAP ABREC  */
#line 118 "syntax.y"
                                         {
        printf("while %s:\n    ", (yyvsp[-2].str)); // Para Python, use ':' no final e indentação clara.        
        free((yyvsp[-2].str));
    }
#line 1349 "syntax.tab.c"
    break;

  case 30: /* LOOP: CODIGOS FECHAC  */
#line 121 "syntax.y"
                      {
        printf("    \n"); // Indente o bloco corretamente
    }
#line 1357 "syntax.tab.c"
    break;

  case 31: /* CONDICAO: CONDICOES E CONDICOES  */
#line 126 "syntax.y"
                            {
          (yyval.str) = malloc(100);
          snprintf((yyval.str), 100, "%s and %s", (yyvsp[-2].str), (yyvsp[0].str));
          free((yyvsp[-2].str));
          free((yyvsp[0].str));
      }
#line 1368 "syntax.tab.c"
    break;

  case 32: /* CONDICAO: CONDICOES OU CONDICOES  */
#line 131 "syntax.y"
                                {
          (yyval.str) = malloc(100);
          snprintf((yyval.str), 100, "%s or %s", (yyvsp[-2].str), (yyvsp[0].str));
          free((yyvsp[-2].str));
          free((yyvsp[0].str));
      }
#line 1379 "syntax.tab.c"
    break;

  case 33: /* CONDICAO: CONDICOES MAIORQUE CONDICOES  */
#line 136 "syntax.y"
                                      {
          (yyval.str) = malloc(100);
          snprintf((yyval.str), 100, "%s > %s", (yyvsp[-2].str), (yyvsp[0].str));
          free((yyvsp[-2].str));
          free((yyvsp[0].str));
      }
#line 1390 "syntax.tab.c"
    break;

  case 34: /* CONDICAO: CONDICOES MENORQUE CONDICOES  */
#line 141 "syntax.y"
                                      {
          (yyval.str) = malloc(100);
          snprintf((yyval.str), 100, "%s < %s", (yyvsp[-2].str), (yyvsp[0].str));
          free((yyvsp[-2].str));
          free((yyvsp[0].str));
      }
#line 1401 "syntax.tab.c"
    break;

  case 35: /* CONDICAO: CONDICOES MAIORIGUAL CONDICOES  */
#line 146 "syntax.y"
                                         {
          (yyval.str) = malloc(100);
          snprintf((yyval.str), 100, "%s >= %s", (yyvsp[-2].str), (yyvsp[0].str));
          free((yyvsp[-2].str));
          free((yyvsp[0].str));
      }
#line 1412 "syntax.tab.c"
    break;

  case 36: /* CONDICAO: CONDICOES MENORIGUAL CONDICOES  */
#line 151 "syntax.y"
                                        {
          (yyval.str) = malloc(100);
          snprintf((yyval.str), 100, "%s <= %s", (yyvsp[-2].str), (yyvsp[0].str));
          free((yyvsp[-2].str));
          free((yyvsp[0].str));
      }
#line 1423 "syntax.tab.c"
    break;

  case 37: /* CONDICAO: CONDICOES IGUAL CONDICOES  */
#line 156 "syntax.y"
                                   {
          (yyval.str) = malloc(100);
          snprintf((yyval.str), 100, "%s == %s", (yyvsp[-2].str), (yyvsp[0].str));
          free((yyvsp[-2].str));
          free((yyvsp[0].str));
      }
#line 1434 "syntax.tab.c"
    break;

  case 38: /* CONDICAO: CONDICOES DIFERENTE CONDICOES  */
#line 161 "syntax.y"
                                       {
          (yyval.str) = malloc(100);
          snprintf((yyval.str), 100, "%s != %s", (yyvsp[-2].str), (yyvsp[0].str));
          free((yyvsp[-2].str));
          free((yyvsp[0].str));
      }
#line 1445 "syntax.tab.c"
    break;

  case 41: /* CONDICIONAL: SE ABREP CONDICAO FECHAP ABREC  */
#line 172 "syntax.y"
                                   {
        printf("if %s:\n    ", (yyvsp[-2].str)); // Adiciona ':' e indentação para Python
        free((yyvsp[-2].str));
    }
#line 1454 "syntax.tab.c"
    break;

  case 42: /* CONDICIONAL: FECHAC SENAO ABREC  */
#line 175 "syntax.y"
                         {
        printf("else:\n    "); // ':' para Python
    }
#line 1462 "syntax.tab.c"
    break;

  case 43: /* CONDICIONAL: FECHAC SENAOSE ABREP CONDICAO FECHAP ABREC  */
#line 177 "syntax.y"
                                                  {
        printf("elif %s:\n    ", (yyvsp[-2].str)); // Corrigido para Python com 'elif' e ':'
    }
#line 1470 "syntax.tab.c"
    break;

  case 44: /* FUNCAO: FUNC PALAVRAS ABREP VARIAVEIS FECHAP ABREC  */
#line 182 "syntax.y"
                                               {
        printf("def %s(%s):\n", (yyvsp[-4].str), (yyvsp[-2].str)); // Adicionado ':' ao final
        free((yyvsp[-4].str));
        free((yyvsp[-2].str));
    }
#line 1480 "syntax.tab.c"
    break;

  case 45: /* FUNCAO: RETURN VARIAVEIS PONTOVIRGULA  */
#line 187 "syntax.y"
                                    {
        printf("    return %s\n", (yyvsp[-1].str)); // Ajuste na indentação para Python
        free((yyvsp[-1].str));
    }
#line 1489 "syntax.tab.c"
    break;

  case 46: /* FUNCAO: FUNC PALAVRAS ABREP VARIAVEIS VIRGULA VARIAVEIS FECHAP ABREC  */
#line 191 "syntax.y"
                                                                   {
        printf("def %s(%s, %s):\n    ", (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-2].str)); // Adicionado ':' ao final
        free((yyvsp[-6].str));
        free((yyvsp[-4].str));
        free((yyvsp[-2].str));
    }
#line 1500 "syntax.tab.c"
    break;


#line 1504 "syntax.tab.c"

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

#line 198 "syntax.y"


int main(int argc, char **argv) {
    if (argc != 2) {
        printf("Modo de uso: ./transpilador arquivo.php\n");
        return 1;
    }

    FILE *arquivo = fopen(argv[1], "r");
    if (!arquivo) {
        printf("Arquivo %s não encontrado!\n", argv[1]);
        return 1;
    }

    yyin = arquivo;
    yyparse();

    fclose(arquivo);
    return 0;
}

void yyerror(const char *s) {
    fprintf(stderr, "Erro de sintaxe: %s\n", s);
}
