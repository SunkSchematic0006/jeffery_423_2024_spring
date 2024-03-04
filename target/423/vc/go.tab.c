/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 21 "go.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int yylex();
int yyerror();
#define YYDEBUG 1
#include "tree.h"
#define UNKNOWN -1000

#line 77 "go.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "go.tab.h".  */
#ifndef YY_YY_GO_TAB_H_INCLUDED
# define YY_YY_GO_TAB_H_INCLUDED
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
    LLITERAL = 258,
    LASOP = 259,
    LCOLAS = 260,
    LBREAK = 261,
    LCASE = 262,
    LCHAN = 263,
    LCONST = 264,
    LCONTINUE = 265,
    LDDD = 266,
    LDEFAULT = 267,
    LDEFER = 268,
    LELSE = 269,
    LFALL = 270,
    LFOR = 271,
    LFUNC = 272,
    LGO = 273,
    LGOTO = 274,
    LIF = 275,
    LIMPORT = 276,
    LINTERFACE = 277,
    LMAP = 278,
    LNAME = 279,
    LPACKAGE = 280,
    LRANGE = 281,
    LRETURN = 282,
    LSELECT = 283,
    LSTRUCT = 284,
    LSWITCH = 285,
    LTYPE = 286,
    LVAR = 287,
    LANDAND = 288,
    LANDNOT = 289,
    LCOMM = 290,
    LDEC = 291,
    LEQ = 292,
    LGE = 293,
    LGT = 294,
    LIGNORE = 295,
    LINC = 296,
    LLE = 297,
    LLSH = 298,
    LLT = 299,
    LNE = 300,
    LOROR = 301,
    LRSH = 302,
    NotPackage = 303,
    NotParen = 304,
    PreferToRightParen = 305
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 32 "go.y" /* yacc.c:355  */

 struct tree *n;

#line 172 "go.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GO_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 189 "go.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2015

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  102
/* YYNRULES -- Number of rules.  */
#define YYNRULES  276
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  508

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,     2,     2,     2,    64,    59,     2,
      49,    67,    50,    58,    60,    57,    48,    63,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    70,    61,
       2,    69,     2,    54,    53,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    52,     2,    73,    55,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,    62,    71,    72,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    65,    66,    68
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   109,   109,   113,   118,   121,   122,   126,   127,   128,
     132,   133,   137,   138,   142,   143,   144,   148,   151,   152,
     159,   163,   164,   165,   170,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   190,   194,   195,   196,   200,
     201,   205,   206,   207,   211,   219,   223,   224,   225,   226,
     227,   228,   232,   233,   234,   235,   239,   244,   243,   272,
     273,   277,   281,   282,   286,   287,   288,   292,   296,   301,
     302,   307,   314,   318,   319,   322,   323,   327,   333,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   362,
     366,   367,   368,   369,   370,   371,   372,   376,   377,   385,
     386,   387,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   413,   417,   418,   422,   423,
     427,   428,   432,   433,   437,   445,   449,   452,   453,   457,
     458,   459,   463,   464,   468,   472,   485,   489,   493,   494,
     495,   496,   497,   498,   502,   503,   504,   505,   509,   510,
     511,   512,   513,   517,   518,   521,   525,   526,   527,   528,
     529,   533,   534,   538,   539,   540,   541,   542,   543,   544,
     548,   552,   556,   557,   561,   562,   570,   574,   575,   579,
     582,   583,   586,   588,   589,   593,   597,   598,   606,   607,
     611,   612,   616,   617,   621,   622,   626,   627,   631,   632,
     636,   637,   638,   639,   640,   641,   645,   646,   650,   654,
     655,   656,   660,   667,   668,   669,   670,   674,   675,   678,
     679,   685,   686,   687,   688,   689,   693,   694,   695,   696,
     697,   698,   699,   700,   701,   702,   703,   704,   705,   709,
     710,   714,   715,   719,   720,   724,   725,   729,   730,   737,
     738,   739,   740,   743,   744,   750,   751,   754,   755,   758,
     759,   762,   763,   766,   767,   770,   771
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LLITERAL", "LASOP", "LCOLAS", "LBREAK",
  "LCASE", "LCHAN", "LCONST", "LCONTINUE", "LDDD", "LDEFAULT", "LDEFER",
  "LELSE", "LFALL", "LFOR", "LFUNC", "LGO", "LGOTO", "LIF", "LIMPORT",
  "LINTERFACE", "LMAP", "LNAME", "LPACKAGE", "LRANGE", "LRETURN",
  "LSELECT", "LSTRUCT", "LSWITCH", "LTYPE", "LVAR", "LANDAND", "LANDNOT",
  "LCOMM", "LDEC", "LEQ", "LGE", "LGT", "LIGNORE", "LINC", "LLE", "LLSH",
  "LLT", "LNE", "LOROR", "LRSH", "'.'", "'('", "'*'", "'{'", "'['", "'@'",
  "'?'", "'^'", "'!'", "'-'", "'+'", "'&'", "','", "';'", "'|'", "'/'",
  "'%'", "NotPackage", "NotParen", "')'", "PreferToRightParen", "'='",
  "':'", "'}'", "'~'", "']'", "$accept", "file", "package", "imports",
  "import", "import_stmt", "import_stmt_list", "import_here",
  "import_package", "import_safety", "xdcl", "common_dcl", "lconst",
  "vardcl", "constdcl", "constdcl1", "typedclname", "typedcl",
  "simple_stmt", "case", "compound_stmt", "caseblock", "$@1",
  "caseblock_list", "loop_body", "range_stmt", "for_header", "for_body",
  "for_stmt", "if_header", "if_stmt", "elseif", "elseif_list", "else",
  "switch_stmt", "select_stmt", "expr", "uexpr", "pseudocall",
  "pexpr_no_paren", "keyval", "bare_complitexpr", "complitexpr", "pexpr",
  "expr_or_type", "name_or_type", "new_name", "dcl_name", "onew_name",
  "sym", "hidden_importsym", "name", "labelname", "dotdotdot", "ntype",
  "non_expr_type", "non_recvchantype", "convtype", "comptype",
  "fnret_type", "dotname", "othertype", "ptrtype", "recvchantype",
  "structtype", "interfacetype", "xfndcl", "fndcl", "fntype", "fnbody",
  "fnres", "fnlitdcl", "fnliteral", "xdcl_list", "vardcl_list",
  "constdcl_list", "typedcl_list", "structdcl_list", "interfacedcl_list",
  "structdcl", "packname", "embed", "interfacedcl", "indcl", "arg_type",
  "arg_type_list", "oarg_type_list_ocomma", "stmt", "non_dcl_stmt",
  "stmt_list", "new_name_list", "dcl_name_list", "expr_list",
  "expr_or_type_list", "keyval_list", "braced_keyval_list", "osemi",
  "ocomma", "oexpr", "oexpr_list", "osimple_stmt", "oliteral", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,    46,    40,
      42,   123,    91,    64,    63,    94,    33,    45,    43,    38,
      44,    59,   124,    47,    37,   303,   304,    41,   305,    61,
      58,   125,   126,    93
};
# endif

#define YYPACT_NINF -398

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-398)))

#define YYTABLE_NINF -256

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       8,   312,    68,  -398,  -398,    71,  -398,    30,  -398,  -398,
      54,    70,  -398,   224,    67,   874,    93,  -398,   137,    16,
    -398,   120,   148,  -398,  -398,  -398,   312,   771,  -398,   312,
     364,  -398,  1408,   370,   364,   312,  1408,   103,   112,  1408,
     119,   128,  1408,   410,   437,  1408,  1465,  1408,   637,  1408,
    1408,  1408,  1408,  1408,  1408,   121,  -398,   456,  -398,  -398,
    -398,  -398,  -398,  1554,  -398,  -398,   135,   111,  -398,   117,
    -398,   125,   141,   157,   163,  -398,  -398,  -398,   170,    57,
    -398,  -398,    26,  -398,  -398,  -398,  -398,  -398,   161,   199,
    -398,  -398,  -398,  -398,  -398,   177,  1654,  1654,  1654,  -398,
     181,  -398,  -398,  -398,  -398,  -398,  -398,    75,   111,  -398,
    -398,   190,  -398,    32,   184,  1620,   197,   198,    78,  -398,
     190,   191,   214,  1654,  1856,   196,  -398,  -398,   448,   243,
     207,  1654,  -398,  -398,   229,  -398,  -398,  -398,   471,  -398,
    1522,  1465,  1856,   217,  -398,   154,  -398,    99,  -398,   185,
    1856,   225,  -398,  -398,  -398,  -398,  -398,  -398,  -398,   233,
    -398,   534,  1408,  1408,  1408,  1408,  -398,  1408,  1408,  1408,
    -398,  1408,  1408,  1408,  1408,  1408,  1408,  1408,  1408,  1408,
    1408,  1408,  1408,  1408,  1408,   779,   483,  1123,  1408,   969,
    1408,   779,  -398,  1066,  1408,  1408,  1408,   227,   230,   279,
    1620,   302,  1654,  -398,  -398,  -398,  -398,  -398,  -398,   248,
    -398,   312,  1066,  -398,  1180,  1237,  1408,  1654,  -398,  1620,
    -398,  -398,  -398,   257,   251,  1620,  1066,  -398,  -398,  1408,
      36,   297,  -398,   284,   273,  -398,  -398,   265,    82,    85,
      89,  -398,  -398,   274,  -398,  -398,   338,  1598,  -398,  -398,
    -398,   282,  -398,  -398,  -398,   287,   312,  1408,   276,  1676,
    -398,  -398,  1654,  1654,  -398,   292,  1408,   286,  1856,  1951,
    -398,  1888,   805,   805,   805,   805,  -398,   805,   805,  1920,
    -398,  -398,   532,   532,   532,  -398,   532,  -398,  -398,   779,
    1754,  -398,  -398,   296,   288,  1294,  -398,  -398,  -398,    39,
     683,   303,  -398,  1066,  -398,  -398,  -398,  -398,   905,   291,
    -398,    -9,   196,  1856,   196,  -398,  -398,  -398,   313,   316,
    1654,   318,  -398,  -398,    49,  1408,  1408,   319,  -398,  -398,
    -398,  1620,  -398,  1710,   329,    95,   386,  -398,   312,   353,
     335,  1620,  -398,   561,   334,  1654,  1465,   336,  -398,  -398,
    -398,   297,   342,   297,   338,   275,   340,  -398,  -398,   312,
     338,    86,   312,   345,   312,   347,  -398,   196,  1408,  1732,
    1654,  -398,   166,   220,   240,   241,  -398,  -398,   312,   354,
     196,  1408,   349,  1351,   779,  -398,  -398,   355,   359,   368,
    1465,   369,  -398,  1408,   101,  -398,   371,  -398,   969,  -398,
    -398,  1710,  -398,  -398,  1856,  1856,  1408,  -398,  1620,   388,
    -398,  -398,  -398,  -398,  -398,  -398,  -398,  1710,  -398,    83,
    -398,  -398,  -398,  -398,   376,  -398,  -398,  -398,    46,  -398,
     969,   378,   338,   379,  -398,  -398,  -398,  -398,  -398,  -398,
    -398,  -398,  -398,  -398,   196,   384,  -398,  -398,   374,   534,
    -398,   196,  -398,   779,  1856,  -398,  -398,  -398,  -398,  -398,
     385,  -398,  -398,    53,  -398,  -398,  -398,  -398,   390,  1620,
    -398,  1408,  -398,  1710,  1408,  1465,  1408,  -398,   392,   338,
    -398,   338,   262,   312,   393,   286,   391,  -398,  1408,  -398,
    -398,   398,   190,  -398,  1788,  1822,  -398,  -398,  -398,  -398,
    -398,   396,  1710,  -398,  -398,  -398,  -398,  -398
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     0,     5,   139,     0,   141,     0,   140,     1,
     198,     0,     4,     0,     0,     0,     0,    14,     0,     0,
       7,    11,     0,     6,    24,   112,   137,     0,    35,   137,
       0,   242,   273,     0,     0,     0,   273,     0,     0,   271,
       0,     0,   273,     0,     0,     0,     0,     0,   269,     0,
       0,     0,     0,     0,     0,     0,    21,     0,   236,   237,
     240,   238,   239,    46,    79,   120,   130,   100,   145,   144,
     113,     0,     0,     0,   164,   178,   179,    22,   195,     0,
     124,    23,     0,   142,   143,    16,     9,    12,   265,     0,
      10,    15,   138,   243,   135,     0,     0,     0,     0,   144,
     171,   175,   161,   159,   160,   158,   244,   120,     0,   274,
      66,     0,    68,     0,    65,   229,     0,   190,   120,   247,
       0,    69,     0,     0,   255,   272,   248,    59,     0,     0,
       0,     0,    32,    44,     0,    25,   253,   136,     0,   108,
       0,     0,   132,     0,   133,   156,   154,   155,   101,     0,
     270,     0,   107,   105,   104,   103,   102,   106,   199,     0,
      28,     0,     0,     0,     0,     0,    51,     0,     0,     0,
      50,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   263,     0,     0,   269,     0,
       0,   263,   197,     0,     0,     0,     0,   266,     0,    18,
     229,     0,     0,   176,   152,   150,   151,   148,   149,     0,
     180,     0,     0,    67,     0,     0,   273,   146,   223,   144,
     226,   134,   227,   267,     0,   229,     0,   186,    73,   273,
     139,     0,   185,     0,   265,   220,   208,     0,     0,     0,
       0,   183,   251,   265,   206,   218,   275,     0,    59,    34,
     204,   265,    45,    27,   200,   265,     0,     0,    36,     0,
     157,   131,     0,     0,    31,   265,     0,     0,    47,    81,
      96,    99,    82,    86,    87,    85,    97,    84,    83,    80,
      98,    92,    91,    89,    88,    95,    90,    93,    94,   263,
     126,   259,   260,   267,     0,     0,   114,   109,   257,   267,
     270,     0,   235,     0,   233,   232,   241,   234,   267,     0,
     249,     0,    49,   256,    48,    13,     8,    19,     0,     0,
       0,     0,   162,   172,     0,     0,     0,     0,   147,   224,
     225,   268,   230,   192,     0,     0,    75,    70,     0,   216,
       0,   229,   219,   266,     0,     0,     0,     0,    78,    57,
      60,     0,     0,     0,   275,   266,     0,   276,   211,     0,
     275,     0,   266,     0,   266,     0,   254,    38,     0,     0,
       0,   181,   152,   150,   151,   149,   174,   173,   266,     0,
      40,     0,     0,     0,   268,   264,   121,     0,     0,   267,
     268,     0,   117,   269,     0,   268,     0,   123,     0,   196,
      17,   192,   153,    61,    63,    62,   273,   228,   229,   144,
     193,   170,   168,   169,   166,   167,   189,   192,   191,     0,
      74,    71,   217,   221,     0,   209,   184,   177,     0,    55,
       0,     0,   275,     0,   213,   207,   182,   252,   210,    77,
     205,    33,   201,    26,    37,     0,    41,   202,   265,    43,
      29,    39,   127,   263,   128,   125,   261,   262,   116,   115,
       0,   258,   110,     0,    56,   122,   250,    64,     0,   229,
     187,   273,    76,   192,     0,     0,     0,    52,    58,   275,
     212,   275,   153,   266,     0,    42,     0,   111,   269,   118,
     194,     0,     0,   222,     0,     0,   214,   215,   203,    30,
     129,     0,   192,    72,    54,    53,   119,   188
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -398,  -398,  -398,  -398,  -398,     7,  -398,  -398,  -398,  -398,
    -398,   458,  -398,  -117,   -35,    -8,  -398,  -123,   -27,  -398,
      59,  -398,  -398,   236,  -114,  -398,  -398,  -398,  -398,   -39,
    -398,  -398,  -398,  -398,  -398,  -398,   590,   124,    29,  -398,
     108,   115,  -398,   150,   -33,   266,     9,   252,   467,    -1,
    -398,   343,  -398,   293,   -50,   372,  -398,  -398,  -398,  -398,
     -26,   -19,   -25,    14,  -398,  -398,  -398,  -398,   208,  -398,
    -397,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,   156,
    -101,  -210,   171,  -398,   186,  -398,  -176,  -178,   500,  -171,
    -398,   -34,    22,   172,  -398,  -187,  -198,  -228,  -172,  -398,
     -22,  -288
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    10,    14,    20,    88,    21,    90,   318,
      55,   304,    57,   135,   446,   447,   131,   132,    58,   349,
     305,   350,   430,   238,   213,   110,   111,   112,    59,   120,
      60,   420,   336,   421,    61,    62,    63,    64,    65,    66,
     291,   292,   455,    67,   298,   218,    68,   136,    93,    99,
       8,    70,    71,   220,   221,   144,   101,    72,    73,   410,
     204,    74,   206,   207,    75,    76,    77,   117,    78,   227,
     416,    79,    80,    15,   255,   448,   251,   243,   234,   244,
     245,   246,   236,   342,   222,   223,   224,   310,   307,   311,
     247,   138,    82,   299,   293,   294,   198,   332,   151,   126,
     121,   358
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,   102,   104,   129,   309,   109,   228,   250,   103,   109,
     114,   306,    22,   143,    69,   109,   301,   254,    22,    17,
     470,   235,   160,   161,   319,    94,    87,   145,    94,   352,
     354,   194,   116,     1,    94,    92,   344,   214,    92,  -216,
       4,   324,   133,   137,   119,   356,   203,   209,   210,   334,
     389,   474,   398,   363,   113,   335,   137,   365,   192,   107,
     146,   125,   399,   118,    18,   385,   434,   379,     9,     5,
       6,   391,   438,   237,    11,    13,   493,   205,   205,   205,
     396,   252,  -246,    86,   338,  -245,   195,  -246,   258,   346,
    -245,    12,   195,   346,   347,   196,   205,  -216,   347,   390,
    -195,   215,   382,   471,   205,   507,   475,  -216,   193,   339,
     398,   267,   205,   339,   219,   476,   477,    83,    16,   205,
     403,    94,   145,   488,   265,   161,   489,    94,    23,   133,
     340,   233,   394,   137,   303,   351,  -246,   242,   353,  -245,
      85,   431,   205,   433,   480,    89,  -246,    84,  -163,  -245,
    -195,    91,   321,   348,   122,   146,   398,   439,   137,   186,
     187,   460,   398,   188,   123,   424,   418,   328,   145,   139,
     127,   148,   464,   152,   153,   154,   155,   156,   157,   128,
     108,   205,   158,   205,   108,   296,   185,  -135,    69,   109,
     190,   496,    69,   497,   327,   189,    22,   360,   205,   219,
     205,   146,   109,  -164,   315,  -165,   205,   337,   191,   371,
     323,    69,   376,   377,  -165,  -161,   312,  -161,   314,  -163,
     466,   463,   197,   199,   219,    69,   200,    17,   205,   211,
      17,     4,   468,   372,   374,   105,   312,   314,   230,   440,
     373,   212,   235,   205,   205,   216,   225,   442,     4,   226,
     484,     4,   229,     4,   147,   137,   195,     4,   262,   478,
       5,     6,   388,   231,   139,   148,   486,     5,     6,  -159,
     371,  -159,    18,    19,   249,    18,   145,     5,     6,   367,
       5,     6,     5,     6,   261,   232,     5,     6,   380,  -160,
    -158,  -160,  -158,   491,   248,   427,   253,   316,   263,   230,
     264,   205,    69,   317,   208,   208,   208,   411,   413,   146,
     320,  -162,   205,  -162,   412,   322,   501,   331,   333,   203,
     445,   339,   205,   208,   239,   240,   205,   145,     5,     6,
     219,   208,   409,   341,   343,   355,     4,   422,   345,   208,
     219,   357,    94,   362,   449,   368,   208,   414,   364,   147,
     205,   205,   233,   378,    94,   381,   384,   461,    94,   386,
     146,   133,   397,   137,   242,     5,     6,    25,   437,   208,
     100,   145,    27,   393,   400,   411,   413,   137,   503,   109,
     406,    95,   412,   401,   467,   402,    37,    38,     4,   205,
     444,   411,   413,    41,     4,   147,   417,    69,   412,   485,
     419,   338,   423,   451,   146,   426,   429,   219,   208,   432,
     208,   436,   441,    46,   443,   414,    48,     5,     6,   115,
     452,   450,   458,     5,     6,   208,   459,   208,   395,    69,
     205,   414,   492,   208,     4,   483,   462,   469,   465,   100,
     100,   100,   461,   473,   109,   479,   481,   411,   413,   449,
     205,   482,   487,   398,   412,   208,   145,   490,   100,   130,
     499,     4,   500,     5,     6,   502,   100,   375,   219,   506,
     208,   208,   230,    56,   100,   498,   411,   413,   472,    27,
       4,   100,   137,   412,   361,   329,   134,   414,    95,   146,
       5,     6,   456,    37,    38,     4,   106,   239,   240,   457,
      41,     5,     6,   147,   100,   159,   201,     4,   366,     5,
       6,   435,   330,   260,   425,    81,   414,   407,   428,   241,
     202,    98,     0,    48,     5,     6,     0,     0,   208,     0,
       0,   256,   295,     0,     0,     0,     5,     6,     0,   208,
     257,   415,    27,   100,     0,   100,     0,     0,     0,   208,
       0,    95,     0,   208,   147,     0,    37,    38,     4,     0,
     100,     0,   100,    41,     0,     0,   164,     0,   100,   201,
       0,     0,     0,     0,     0,   172,     0,   208,   208,   176,
       0,     0,   177,   202,    98,   230,    48,     5,     6,     0,
     100,   181,     0,     0,   256,   183,   184,     0,   147,     0,
       0,     0,   100,   266,     0,   100,   100,     0,     0,   415,
     231,     0,     0,     0,     5,     6,   208,     0,     0,     0,
       0,     0,     0,     0,     0,   415,     0,     0,     0,   124,
       0,     0,     0,     0,     0,     0,   142,     0,   150,     0,
      25,     0,     0,     0,     0,    27,     0,     0,   149,     0,
       0,     0,     0,     0,    95,     0,     0,   208,     0,    37,
      38,     4,     0,   100,     0,     0,    41,     0,     0,     0,
       0,     0,    45,     0,   100,     0,   100,   208,     0,     0,
       0,   415,     0,   147,   100,     0,    46,    47,   100,    48,
       5,     6,    49,    50,    51,    52,    53,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    54,
     415,     0,   100,   100,     0,     0,   163,   164,   165,     0,
     167,   168,   169,     0,     0,   171,   172,   173,   174,   175,
     176,     0,     0,   177,     0,     0,     0,     0,   178,     0,
     179,   180,   181,     0,   100,   182,   183,   184,     0,     0,
       0,   100,   268,   269,   270,   271,   392,   272,   273,   274,
     100,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   290,     0,   142,   300,    27,
     308,   290,    25,     0,   124,   313,   124,    27,    95,     0,
       0,     0,   100,    37,    38,     4,    95,     0,     0,     0,
      41,    37,    38,     4,   124,   124,    96,     0,    41,     0,
       0,     0,   100,     0,    45,     0,   100,     0,     0,     0,
      97,    98,     0,    48,     5,     6,     0,     0,    46,    47,
     289,    48,     5,     6,    49,    50,    51,    52,    53,   164,
       0,     0,     0,     0,     0,   100,     0,   124,   172,     0,
       0,    54,   176,     0,     0,   177,   124,     0,     0,     0,
     178,     0,   179,   180,   181,     0,     0,   182,   183,   184,
       0,     0,     0,     0,    -2,    24,     0,    25,     0,   290,
      26,     0,    27,    28,    29,   142,     0,    30,     0,    31,
      32,    33,    34,    35,    36,     0,    37,    38,     4,     0,
       0,    39,    40,    41,    42,    43,    44,     0,     0,    45,
       0,     0,     0,     0,     0,   404,   405,     0,     0,     0,
       0,     0,     0,    46,    47,     0,    48,     5,     6,    49,
      50,    51,    52,    53,     0,   -20,   142,     0,   163,   164,
     165,     0,   167,   168,   169,     0,    54,   171,   172,   173,
     174,   175,   176,     0,     0,   177,     0,     0,   124,     0,
     178,     0,   179,   180,   181,   395,     0,   182,   183,   184,
     302,   124,    25,   454,   290,    26,  -231,    27,    28,    29,
     142,  -231,    30,   150,    31,    32,    95,    34,    35,    36,
       0,    37,    38,     4,     0,     0,    39,    40,    41,    42,
      43,    44,     0,     0,    45,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    46,    47,
     303,    48,     5,     6,    49,    50,    51,    52,    53,     0,
    -231,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -231,    54,     0,   290,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   494,   142,   495,   302,     0,    25,
       0,     0,    26,     0,    27,    28,    29,     0,   150,    30,
       0,    31,    32,    95,    34,    35,    36,     0,    37,    38,
       4,     0,     0,    39,    40,    41,    42,    43,    44,     0,
       0,    45,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,    47,   303,    48,     5,
       6,    49,    50,    51,    52,    53,    25,  -231,     0,     0,
       0,    27,     0,     0,     0,     0,     0,  -231,    54,     0,
      95,     0,     0,     0,     0,    37,    38,     4,     0,     0,
       0,     0,    41,     0,     0,     0,     0,     0,   140,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    46,   141,     0,    48,     5,     6,    49,    50,
      51,    52,    53,    25,     0,     0,     0,     0,    27,     0,
     297,     0,     0,     0,     0,    54,     0,    95,     0,     0,
       0,     0,    37,    38,     4,     0,   325,     0,     0,    41,
       0,     0,     0,     0,     0,    45,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    46,
      47,     0,    48,     5,     6,    49,    50,    51,    52,    53,
      25,     0,     0,     0,     0,    27,     0,     0,     0,     0,
       0,     0,    54,     0,    95,     0,     0,     0,     0,    37,
      38,     4,     0,   326,     0,     0,    41,     0,     0,     0,
       0,     0,    45,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    46,    47,     0,    48,
       5,     6,    49,    50,    51,    52,    53,    25,     0,     0,
       0,     0,    27,     0,     0,     0,     0,     0,     0,    54,
       0,    95,     0,     0,     0,     0,    37,    38,     4,     0,
       0,     0,     0,    41,     0,   387,     0,     0,     0,   140,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    46,   141,     0,    48,     5,     6,    49,
      50,    51,    52,    53,    25,     0,     0,     0,     0,    27,
       0,     0,     0,     0,     0,     0,    54,     0,    95,     0,
       0,     0,     0,    37,    38,     4,     0,     0,     0,     0,
      41,     0,     0,     0,     0,     0,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      46,    47,   453,    48,     5,     6,    49,    50,    51,    52,
      53,    25,     0,     0,     0,     0,    27,     0,     0,     0,
       0,     0,     0,    54,     0,    95,     0,     0,     0,     0,
      37,    38,     4,     0,     0,     0,     0,    41,     0,     0,
       0,     0,     0,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    46,    47,     0,
      48,     5,     6,    49,    50,    51,    52,    53,    25,     0,
       0,     0,     0,    27,     0,     0,     0,     0,     0,     0,
      54,     0,    95,     0,     0,     0,     0,    37,    38,     4,
       0,     0,     0,     0,    41,     0,     0,     0,     0,     0,
     140,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    46,   141,     0,    48,     5,     6,
      49,    50,    51,    52,    53,    25,     0,     0,     0,     0,
     259,     0,     0,     0,     0,     0,     0,    54,     0,    95,
       0,     0,     0,     0,    37,    38,     4,     0,     0,     0,
       0,    41,     0,     0,     0,     0,     0,    45,   162,  -255,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    46,    47,     0,    48,     5,     6,    49,    50,    51,
      52,    53,     0,     0,     0,     0,     0,   163,   164,   165,
     166,   167,   168,   169,    54,   170,   171,   172,   173,   174,
     175,   176,     0,     0,   177,     0,    27,     0,     0,   178,
       0,   179,   180,   181,  -255,    95,   182,   183,   184,     0,
      37,    38,     4,  -255,     0,     0,     0,    41,    27,     0,
       0,   217,     0,   201,     0,     0,     0,    95,     0,     0,
       0,     0,    37,    38,     4,     0,     0,   202,    98,    41,
      48,     5,     6,     0,     0,   201,     0,     0,   359,     0,
       0,     0,    27,     0,     0,     0,     0,     0,     0,   202,
      98,    95,    48,     5,     6,     0,    37,    38,     4,     0,
       0,     0,     0,    41,    27,     0,     0,     0,     0,   201,
       0,     0,     0,    95,     0,     0,     0,     0,    37,    38,
       4,     0,     0,   202,    98,    41,    48,     5,     6,     0,
       0,   369,     0,     0,     0,     0,     0,     0,    27,     0,
       0,     0,     0,     0,     0,   370,    98,    95,    48,     5,
       6,     0,    37,    38,     4,     0,     0,     0,     0,    41,
     259,     0,     0,     0,     0,   201,     0,     0,     0,    95,
       0,     0,     0,     0,    37,    38,     4,     0,     0,   408,
      98,    41,    48,     5,     6,     0,     0,   201,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   202,    98,     0,    48,     5,     6,   163,   164,   165,
       0,   167,   168,   169,     0,     0,   171,   172,   173,   174,
     175,   176,     0,     0,   177,     0,     0,     0,     0,   178,
       0,   179,   180,   181,     0,     0,   182,   183,   184,     0,
       0,   163,   164,   165,   383,   167,   168,   169,     0,     0,
     171,   172,   173,   174,   175,   176,     0,     0,   177,     0,
       0,     0,     0,   178,     0,   179,   180,   181,     0,     0,
     182,   183,   184,     0,     0,   163,   164,   165,   504,   167,
     168,   169,     0,     0,   171,   172,   173,   174,   175,   176,
       0,     0,   177,     0,     0,     0,     0,   178,     0,   179,
     180,   181,     0,     0,   182,   183,   184,     0,     0,   163,
     164,   165,   505,   167,   168,   169,     0,     0,   171,   172,
     173,   174,   175,   176,     0,     0,   177,     0,     0,     0,
       0,   178,     0,   179,   180,   181,     0,     0,   182,   183,
     184,   163,   164,     0,     0,   167,   168,   169,     0,     0,
     171,   172,   173,   174,   175,   176,     0,     0,   177,     0,
       0,     0,     0,   178,     0,   179,   180,   181,     0,     0,
     182,   183,   184,   163,   164,     0,     0,   167,   168,   169,
       0,     0,   171,   172,   173,   174,     0,   176,     0,     0,
     177,     0,     0,     0,     0,   178,     0,   179,   180,   181,
       0,     0,   182,   183,   184,   164,     0,     0,   167,   168,
     169,     0,     0,   171,   172,   173,   174,     0,   176,     0,
       0,   177,     0,     0,     0,     0,   178,     0,   179,   180,
     181,     0,     0,   182,   183,   184
};

static const yytype_int16 yycheck[] =
{
       1,    27,    27,    42,   191,    32,   120,   130,    27,    36,
      32,   189,    13,    46,    15,    42,   188,   134,    19,     3,
     417,   122,    57,    57,   200,    26,    19,    46,    29,   239,
     240,     5,    33,    25,    35,    26,   234,     5,    29,     3,
      24,   212,    43,    44,    35,   243,    96,    97,    98,   225,
      11,     5,    61,   251,    32,   226,    57,   255,     1,    30,
      46,    39,    71,    34,    48,   293,   354,   265,     0,    53,
      54,   299,   360,   123,     3,    21,   473,    96,    97,    98,
     308,   131,     7,    67,    48,     7,    60,    12,   138,     7,
      12,    61,    60,     7,    12,    69,   115,    61,    12,    60,
       1,    69,   289,    20,   123,   502,    60,    71,    51,    24,
      61,   161,   131,    24,   115,    69,    70,    24,    48,   138,
      71,   122,   141,    70,   159,   159,    73,   128,    61,   130,
     231,   122,   303,   134,    51,    50,    61,   128,    49,    61,
       3,   351,   161,   353,   432,    25,    71,    54,    49,    71,
      51,     3,   202,    71,    51,   141,    61,    71,   159,    48,
      49,   389,    61,    52,    52,   341,    71,   217,   187,    45,
      51,    47,    71,    49,    50,    51,    52,    53,    54,    51,
      30,   200,    61,   202,    34,   186,    51,    70,   189,   216,
      49,   479,   193,   481,   216,    70,   197,   247,   217,   200,
     219,   187,   229,    49,   197,    51,   225,   229,    51,   259,
     211,   212,   262,   263,    51,    49,   194,    51,   196,    49,
     398,   393,    61,    24,   225,   226,    49,     3,   247,    48,
       3,    24,   408,   259,   259,    27,   214,   215,    24,   362,
     259,    51,   343,   262,   263,    61,    49,   364,    24,    51,
     448,    24,    61,    24,    46,   256,    60,    24,    73,   430,
      53,    54,   295,    49,   140,   141,   453,    53,    54,    49,
     320,    51,    48,    49,    67,    48,   295,    53,    54,   257,
      53,    54,    53,    54,    67,    71,    53,    54,   266,    49,
      49,    51,    51,   469,    51,   345,    67,    67,    73,    24,
      67,   320,   303,    24,    96,    97,    98,   333,   333,   295,
       8,    49,   331,    51,   333,    67,   488,    60,    67,   369,
     370,    24,   341,   115,    49,    50,   345,   346,    53,    54,
     331,   123,   333,    49,    61,    61,    24,   338,    73,   131,
     341,     3,   343,    61,   378,    69,   138,   333,    61,   141,
     369,   370,   343,    61,   355,    69,    60,   390,   359,    71,
     346,   362,    71,   364,   355,    53,    54,     3,   359,   161,
      27,   390,     8,    70,    61,   401,   401,   378,   492,   406,
      61,    17,   401,    67,   406,    67,    22,    23,    24,   408,
     368,   417,   417,    29,    24,   187,    67,   398,   417,   449,
      14,    48,    67,   381,   390,    71,    70,   408,   200,    67,
     202,    71,    67,    49,    67,   401,    52,    53,    54,    49,
      71,    67,    67,    53,    54,   217,    67,   219,    60,   430,
     449,   417,   471,   225,    24,    61,    67,    49,    67,    96,
      97,    98,   475,    67,   471,    67,    67,   473,   473,   483,
     469,    67,    67,    61,   473,   247,   475,    67,   115,    49,
      67,    24,    71,    53,    54,    67,   123,   259,   469,    73,
     262,   263,    24,    15,   131,   483,   502,   502,   419,     8,
      24,   138,   483,   502,   248,   219,    49,   473,    17,   475,
      53,    54,   384,    22,    23,    24,    29,    49,    50,   384,
      29,    53,    54,   295,   161,    49,    35,    24,   256,    53,
      54,   355,   219,   141,   343,    15,   502,   331,   346,    71,
      49,    50,    -1,    52,    53,    54,    -1,    -1,   320,    -1,
      -1,    60,    49,    -1,    -1,    -1,    53,    54,    -1,   331,
      69,   333,     8,   200,    -1,   202,    -1,    -1,    -1,   341,
      -1,    17,    -1,   345,   346,    -1,    22,    23,    24,    -1,
     217,    -1,   219,    29,    -1,    -1,    34,    -1,   225,    35,
      -1,    -1,    -1,    -1,    -1,    43,    -1,   369,   370,    47,
      -1,    -1,    50,    49,    50,    24,    52,    53,    54,    -1,
     247,    59,    -1,    -1,    60,    63,    64,    -1,   390,    -1,
      -1,    -1,   259,    69,    -1,   262,   263,    -1,    -1,   401,
      49,    -1,    -1,    -1,    53,    54,   408,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   417,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    48,    -1,
       3,    -1,    -1,    -1,    -1,     8,    -1,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    17,    -1,    -1,   449,    -1,    22,
      23,    24,    -1,   320,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    35,    -1,   331,    -1,   333,   469,    -1,    -1,
      -1,   473,    -1,   475,   341,    -1,    49,    50,   345,    52,
      53,    54,    55,    56,    57,    58,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
     502,    -1,   369,   370,    -1,    -1,    33,    34,    35,    -1,
      37,    38,    39,    -1,    -1,    42,    43,    44,    45,    46,
      47,    -1,    -1,    50,    -1,    -1,    -1,    -1,    55,    -1,
      57,    58,    59,    -1,   401,    62,    63,    64,    -1,    -1,
      -1,   408,   162,   163,   164,   165,    73,   167,   168,   169,
     417,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,    -1,   187,   188,     8,
     190,   191,     3,    -1,   194,   195,   196,     8,    17,    -1,
      -1,    -1,   449,    22,    23,    24,    17,    -1,    -1,    -1,
      29,    22,    23,    24,   214,   215,    35,    -1,    29,    -1,
      -1,    -1,   469,    -1,    35,    -1,   473,    -1,    -1,    -1,
      49,    50,    -1,    52,    53,    54,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    34,
      -1,    -1,    -1,    -1,    -1,   502,    -1,   257,    43,    -1,
      -1,    72,    47,    -1,    -1,    50,   266,    -1,    -1,    -1,
      55,    -1,    57,    58,    59,    -1,    -1,    62,    63,    64,
      -1,    -1,    -1,    -1,     0,     1,    -1,     3,    -1,   289,
       6,    -1,     8,     9,    10,   295,    -1,    13,    -1,    15,
      16,    17,    18,    19,    20,    -1,    22,    23,    24,    -1,
      -1,    27,    28,    29,    30,    31,    32,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    -1,   325,   326,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    61,   346,    -1,    33,    34,
      35,    -1,    37,    38,    39,    -1,    72,    42,    43,    44,
      45,    46,    47,    -1,    -1,    50,    -1,    -1,   368,    -1,
      55,    -1,    57,    58,    59,    60,    -1,    62,    63,    64,
       1,   381,     3,   383,   384,     6,     7,     8,     9,    10,
     390,    12,    13,   393,    15,    16,    17,    18,    19,    20,
      -1,    22,    23,    24,    -1,    -1,    27,    28,    29,    30,
      31,    32,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    -1,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    72,    -1,   453,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   474,   475,   476,     1,    -1,     3,
      -1,    -1,     6,    -1,     8,     9,    10,    -1,   488,    13,
      -1,    15,    16,    17,    18,    19,    20,    -1,    22,    23,
      24,    -1,    -1,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,     3,    61,    -1,    -1,
      -1,     8,    -1,    -1,    -1,    -1,    -1,    71,    72,    -1,
      17,    -1,    -1,    -1,    -1,    22,    23,    24,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,     3,    -1,    -1,    -1,    -1,     8,    -1,
      67,    -1,    -1,    -1,    -1,    72,    -1,    17,    -1,    -1,
      -1,    -1,    22,    23,    24,    -1,    26,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
       3,    -1,    -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    17,    -1,    -1,    -1,    -1,    22,
      23,    24,    -1,    26,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    52,
      53,    54,    55,    56,    57,    58,    59,     3,    -1,    -1,
      -1,    -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    17,    -1,    -1,    -1,    -1,    22,    23,    24,    -1,
      -1,    -1,    -1,    29,    -1,    31,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,     3,    -1,    -1,    -1,    -1,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    17,    -1,
      -1,    -1,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,     3,    -1,    -1,    -1,    -1,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    17,    -1,    -1,    -1,    -1,
      22,    23,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,     3,    -1,
      -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    17,    -1,    -1,    -1,    -1,    22,    23,    24,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    -1,    52,    53,    54,
      55,    56,    57,    58,    59,     3,    -1,    -1,    -1,    -1,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    17,
      -1,    -1,    -1,    -1,    22,    23,    24,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    35,     4,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    72,    41,    42,    43,    44,    45,
      46,    47,    -1,    -1,    50,    -1,     8,    -1,    -1,    55,
      -1,    57,    58,    59,    60,    17,    62,    63,    64,    -1,
      22,    23,    24,    69,    -1,    -1,    -1,    29,     8,    -1,
      -1,    11,    -1,    35,    -1,    -1,    -1,    17,    -1,    -1,
      -1,    -1,    22,    23,    24,    -1,    -1,    49,    50,    29,
      52,    53,    54,    -1,    -1,    35,    -1,    -1,    60,    -1,
      -1,    -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    17,    52,    53,    54,    -1,    22,    23,    24,    -1,
      -1,    -1,    -1,    29,     8,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,    22,    23,
      24,    -1,    -1,    49,    50,    29,    52,    53,    54,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    17,    52,    53,
      54,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,    29,
       8,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    17,
      -1,    -1,    -1,    -1,    22,    23,    24,    -1,    -1,    49,
      50,    29,    52,    53,    54,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    -1,    52,    53,    54,    33,    34,    35,
      -1,    37,    38,    39,    -1,    -1,    42,    43,    44,    45,
      46,    47,    -1,    -1,    50,    -1,    -1,    -1,    -1,    55,
      -1,    57,    58,    59,    -1,    -1,    62,    63,    64,    -1,
      -1,    33,    34,    35,    70,    37,    38,    39,    -1,    -1,
      42,    43,    44,    45,    46,    47,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    55,    -1,    57,    58,    59,    -1,    -1,
      62,    63,    64,    -1,    -1,    33,    34,    35,    70,    37,
      38,    39,    -1,    -1,    42,    43,    44,    45,    46,    47,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    55,    -1,    57,
      58,    59,    -1,    -1,    62,    63,    64,    -1,    -1,    33,
      34,    35,    70,    37,    38,    39,    -1,    -1,    42,    43,
      44,    45,    46,    47,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    55,    -1,    57,    58,    59,    -1,    -1,    62,    63,
      64,    33,    34,    -1,    -1,    37,    38,    39,    -1,    -1,
      42,    43,    44,    45,    46,    47,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    55,    -1,    57,    58,    59,    -1,    -1,
      62,    63,    64,    33,    34,    -1,    -1,    37,    38,    39,
      -1,    -1,    42,    43,    44,    45,    -1,    47,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    55,    -1,    57,    58,    59,
      -1,    -1,    62,    63,    64,    34,    -1,    -1,    37,    38,
      39,    -1,    -1,    42,    43,    44,    45,    -1,    47,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    55,    -1,    57,    58,
      59,    -1,    -1,    62,    63,    64
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    25,    75,    76,    24,    53,    54,   123,   124,     0,
      77,     3,    61,    21,    78,   147,    48,     3,    48,    49,
      79,    81,   123,    61,     1,     3,     6,     8,     9,    10,
      13,    15,    16,    17,    18,    19,    20,    22,    23,    27,
      28,    29,    30,    31,    32,    35,    49,    50,    52,    55,
      56,    57,    58,    59,    72,    84,    85,    86,    92,   102,
     104,   108,   109,   110,   111,   112,   113,   117,   120,   123,
     125,   126,   131,   132,   135,   138,   139,   140,   142,   145,
     146,   162,   166,    24,    54,     3,    67,    79,    80,    25,
      82,     3,   120,   122,   123,    17,    35,    49,    50,   123,
     125,   130,   134,   135,   136,   142,   122,   112,   117,    92,
      99,   100,   101,   166,   174,    49,   123,   141,   112,   120,
     103,   174,    51,    52,   110,   166,   173,    51,    51,   103,
      49,    90,    91,   123,    49,    87,   121,   123,   165,   111,
      35,    50,   110,   118,   129,   135,   137,   142,   111,    11,
     110,   172,   111,   111,   111,   111,   111,   111,    61,    49,
      88,   165,     4,    33,    34,    35,    36,    37,    38,    39,
      41,    42,    43,    44,    45,    46,    47,    50,    55,    57,
      58,    59,    62,    63,    64,    51,    48,    49,    52,    70,
      49,    51,     1,    51,     5,    60,    69,    61,   170,    24,
      49,    35,    49,   128,   134,   135,   136,   137,   142,   128,
     128,    48,    51,    98,     5,    69,    61,    11,   119,   123,
     127,   128,   158,   159,   160,    49,    51,   143,    98,    61,
      24,    49,    71,   120,   152,   154,   156,   128,    97,    49,
      50,    71,   120,   151,   153,   154,   155,   164,    51,    67,
      91,   150,   128,    67,    87,   148,    60,    69,   128,     8,
     129,    67,    73,    73,    67,    88,    69,   128,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,    51,
     110,   114,   115,   168,   169,    49,   123,    67,   118,   167,
     110,   172,     1,    51,    85,    94,   161,   162,   110,   169,
     161,   163,   166,   110,   166,    79,    67,    24,    83,   160,
       8,   128,    67,   123,   163,    26,    26,   174,   128,   119,
     127,    60,   171,    67,   160,   163,   106,   174,    48,    24,
     154,    49,   157,    61,   170,    73,     7,    12,    71,    93,
      95,    50,   155,    49,   155,    61,   170,     3,   175,    60,
     128,    97,    61,   170,    61,   170,   121,   166,    69,    35,
      49,   128,   134,   135,   136,   142,   128,   128,    61,   170,
     166,    69,   169,    70,    60,   171,    71,    31,   118,    11,
      60,   171,    73,    70,   163,    60,   171,    71,    61,    71,
      61,    67,    67,    71,   110,   110,    61,   158,    49,   123,
     133,   134,   135,   136,   137,   142,   144,    67,    71,    14,
     105,   107,   123,    67,   160,   156,    71,   128,   167,    70,
      96,   155,    67,   155,   175,   153,    71,   120,   175,    71,
      91,    67,    87,    67,   166,   128,    88,    89,   149,   165,
      67,   166,    71,    51,   110,   116,   114,   115,    67,    67,
     171,   118,    67,   172,    71,    67,   161,   174,   160,    49,
     144,    20,    94,    67,     5,    60,    69,    70,   163,    67,
     175,    67,    67,    61,   170,   128,   169,    67,    70,    73,
      67,   160,   103,   144,   110,   110,   175,   175,    89,    67,
      71,   172,    67,    98,    70,    70,    73,   144
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    74,    75,    76,    76,    77,    77,    78,    78,    78,
      79,    79,    80,    80,    81,    81,    81,    82,    83,    83,
      84,    84,    84,    84,    84,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    86,    87,    87,    87,    88,
      88,    89,    89,    89,    90,    91,    92,    92,    92,    92,
      92,    92,    93,    93,    93,    93,    94,    96,    95,    97,
      97,    98,    99,    99,   100,   100,   100,   101,   102,   103,
     103,   104,   105,   106,   106,   107,   107,   108,   109,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   112,
     112,   112,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   114,   115,   115,   116,   116,
     117,   117,   118,   118,   119,   120,   121,   122,   122,   123,
     123,   123,   124,   124,   125,   126,   127,   127,   128,   128,
     128,   128,   128,   128,   129,   129,   129,   129,   130,   130,
     130,   130,   130,   131,   131,   132,   133,   133,   133,   133,
     133,   134,   134,   135,   135,   135,   135,   135,   135,   135,
     136,   137,   138,   138,   139,   139,   140,   141,   141,   142,
     143,   143,   144,   144,   144,   145,   146,   146,   147,   147,
     148,   148,   149,   149,   150,   150,   151,   151,   152,   152,
     153,   153,   153,   153,   153,   153,   154,   154,   155,   156,
     156,   156,   157,   158,   158,   158,   158,   159,   159,   160,
     160,   161,   161,   161,   161,   161,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   163,
     163,   164,   164,   165,   165,   166,   166,   167,   167,   168,
     168,   168,   168,   169,   169,   170,   170,   171,   171,   172,
     172,   173,   173,   174,   174,   175,   175
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     3,     0,     3,     2,     5,     3,
       2,     1,     1,     3,     1,     2,     2,     4,     0,     1,
       0,     1,     1,     1,     1,     2,     5,     3,     2,     5,
       7,     3,     2,     5,     3,     1,     2,     4,     3,     4,
       3,     1,     2,     1,     1,     2,     1,     3,     3,     3,
       2,     2,     3,     5,     5,     2,     3,     0,     3,     0,
       2,     3,     4,     4,     5,     1,     1,     2,     2,     1,
       3,     5,     4,     0,     2,     0,     2,     5,     4,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     3,
       5,     6,     1,     1,     3,     5,     5,     4,     6,     8,
       1,     4,     5,     4,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     0,     1,     1,
       1,     1,     4,     4,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     2,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     4,     4,     2,     3,     5,     1,     1,
       2,     3,     5,     3,     5,     3,     3,     5,     8,     5,
       0,     3,     0,     1,     3,     1,     4,     2,     0,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       3,     2,     4,     3,     5,     5,     1,     3,     1,     2,
       1,     3,     4,     1,     2,     2,     1,     1,     3,     0,
       2,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     2,     2,     2,     2,     2,     2,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       1,     3,     3,     0,     2,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 109 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 1947 "go.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 114 "go.y" /* yacc.c:1646  */
    {
		yyerror("package statement must be first");
		exit(1);
	}
#line 1956 "go.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 118 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 1962 "go.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 121 "go.y" /* yacc.c:1646  */
    { (yyval.n) = NULL; }
#line 1968 "go.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 122 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 1974 "go.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 126 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 1980 "go.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 127 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 1986 "go.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 128 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 1992 "go.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 132 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 1998 "go.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 138 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2004 "go.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 143 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2010 "go.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 144 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2016 "go.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 148 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2022 "go.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 151 "go.y" /* yacc.c:1646  */
    { (yyval.n) = NULL; }
#line 2028 "go.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 159 "go.y" /* yacc.c:1646  */
    {
		yyerror("empty top-level declaration");
		(yyval.n) = 0;
	}
#line 2037 "go.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 166 "go.y" /* yacc.c:1646  */
    {
		yyerror("non-declaration statement outside function body");
		(yyval.n) = 0;
	}
#line 2046 "go.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 171 "go.y" /* yacc.c:1646  */
    {
		(yyval.n) = 0;
	}
#line 2054 "go.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 177 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2060 "go.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 178 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2066 "go.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 179 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2072 "go.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 180 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2078 "go.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 181 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2084 "go.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 182 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2090 "go.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 183 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2096 "go.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 184 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2102 "go.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 185 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2108 "go.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 186 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2114 "go.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 194 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2120 "go.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 195 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2126 "go.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 196 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2132 "go.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 200 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2138 "go.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 201 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2144 "go.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 206 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2150 "go.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 212 "go.y" /* yacc.c:1646  */
    {
		// the name becomes visible right here, not at the end
		// of the declaration.
	}
#line 2159 "go.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 219 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2165 "go.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 224 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2171 "go.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 225 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2177 "go.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 226 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2183 "go.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 227 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2189 "go.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 228 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2195 "go.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 232 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2201 "go.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 233 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2207 "go.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 234 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2213 "go.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 235 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2219 "go.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 239 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2225 "go.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 244 "go.y" /* yacc.c:1646  */
    {
		// If the last token read by the lexer was consumed
		// as part of the case, clear it (parser has cleared yychar).
		// If the last token read by the lexer was the lookahead
		// leave it alone (parser has it cached in yychar).
		// This is so that the stmt_list action doesn't look at
		// the case tokens if the stmt_list is empty.
		// yylast = yychar;
	}
#line 2239 "go.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 254 "go.y" /* yacc.c:1646  */
    {
//		int last;

		// This is the only place in the language where a statement
		// list is not allowed to drop the final semicolon, because
		// it's the only place where a statement list is not followed 
		// by a closing brace.  Handle the error for pedantry.

		// Find the final token of the statement list.
		// yylast is lookahead; yyprev is last of stmt_list
		// last = yyprev;

		// if(last > 0 && last != ';' && yychar != '}')
		//	yyerror("missing statement after label");

	(yyval.n) = tree(UNKNOWN, "?", 0);
	}
#line 2261 "go.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 272 "go.y" /* yacc.c:1646  */
    { (yyval.n) = NULL; }
#line 2267 "go.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 273 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2273 "go.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 277 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2279 "go.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 281 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2285 "go.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 282 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2291 "go.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 286 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2297 "go.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 292 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2303 "go.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 297 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2309 "go.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 302 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2315 "go.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 310 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2321 "go.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 315 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2327 "go.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 318 "go.y" /* yacc.c:1646  */
    { (yyval.n) = NULL; }
#line 2333 "go.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 319 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2339 "go.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 322 "go.y" /* yacc.c:1646  */
    { (yyval.n) = NULL; }
#line 2345 "go.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 323 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2351 "go.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 329 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2357 "go.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 334 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2363 "go.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 342 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2369 "go.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 343 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2375 "go.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 344 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2381 "go.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 345 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2387 "go.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 346 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2393 "go.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 347 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2399 "go.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 348 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2405 "go.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 349 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2411 "go.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 350 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2417 "go.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 351 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2423 "go.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 352 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2429 "go.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 353 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2435 "go.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 354 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2441 "go.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 355 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2447 "go.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 356 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2453 "go.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 357 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2459 "go.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 358 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2465 "go.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 359 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2471 "go.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 360 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2477 "go.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 362 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2483 "go.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 367 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2489 "go.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 368 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2495 "go.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 369 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2501 "go.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 370 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2507 "go.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 371 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2513 "go.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 373 "go.y" /* yacc.c:1646  */
    {
		yyerror("the bitwise complement operator is ^");
	}
#line 2521 "go.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 376 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2527 "go.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 377 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2533 "go.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 385 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2539 "go.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 386 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2545 "go.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 387 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2551 "go.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 400 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2557 "go.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 401 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2563 "go.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 402 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2569 "go.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 403 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2575 "go.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 404 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2581 "go.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 405 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2587 "go.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 407 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN,"?",0); }
#line 2593 "go.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 408 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2599 "go.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 409 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2605 "go.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 413 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2611 "go.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 418 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2617 "go.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 423 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2623 "go.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 428 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2629 "go.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 452 "go.y" /* yacc.c:1646  */
    { (yyval.n) = NULL; }
#line 2635 "go.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 463 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2641 "go.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 464 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2647 "go.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 486 "go.y" /* yacc.c:1646  */
    {
		yyerror("final argument in variadic function missing type");
	}
#line 2655 "go.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 489 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2661 "go.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 498 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2667 "go.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 505 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2673 "go.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 513 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2679 "go.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 534 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2685 "go.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 538 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2691 "go.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 539 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2697 "go.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 540 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2703 "go.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 541 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2709 "go.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 542 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2715 "go.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 548 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2721 "go.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 552 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2727 "go.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 556 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2733 "go.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 557 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2739 "go.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 561 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2745 "go.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 562 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2751 "go.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 570 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2757 "go.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 574 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2763 "go.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 575 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2769 "go.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 579 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2775 "go.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 582 "go.y" /* yacc.c:1646  */
    { (yyval.n) = NULL; }
#line 2781 "go.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 583 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2787 "go.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 586 "go.y" /* yacc.c:1646  */
    { (yyval.n) = NULL; }
#line 2793 "go.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 589 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2799 "go.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 597 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2805 "go.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 606 "go.y" /* yacc.c:1646  */
    { (yyval.n) = NULL; }
#line 2811 "go.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 607 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2817 "go.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 612 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2823 "go.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 617 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2829 "go.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 622 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2835 "go.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 627 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2841 "go.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 632 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2847 "go.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 636 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2853 "go.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 637 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2859 "go.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 638 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2865 "go.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 639 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2871 "go.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 640 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2877 "go.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 641 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2883 "go.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 646 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2889 "go.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 654 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2895 "go.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 656 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2901 "go.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 660 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2907 "go.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 668 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2913 "go.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 669 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2919 "go.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 675 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2925 "go.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 678 "go.y" /* yacc.c:1646  */
    { (yyval.n) = NULL; }
#line 2931 "go.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 679 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2937 "go.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 685 "go.y" /* yacc.c:1646  */
    { (yyval.n) = NULL; }
#line 2943 "go.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 689 "go.y" /* yacc.c:1646  */
    { (yyval.n) = NULL; }
#line 2949 "go.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 698 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2955 "go.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 700 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2961 "go.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 701 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2967 "go.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 702 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2973 "go.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 703 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2979 "go.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 704 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2985 "go.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 705 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2991 "go.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 710 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 2997 "go.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 715 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 3003 "go.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 720 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 3009 "go.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 725 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 3015 "go.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 730 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 3021 "go.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 739 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 3027 "go.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 740 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 3033 "go.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 743 "go.y" /* yacc.c:1646  */
    { (yyval.n) = NULL; }
#line 3039 "go.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 744 "go.y" /* yacc.c:1646  */
    { (yyval.n) = tree(UNKNOWN, "?", 0); }
#line 3045 "go.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 750 "go.y" /* yacc.c:1646  */
    { (yyval.n) = NULL; }
#line 3051 "go.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 754 "go.y" /* yacc.c:1646  */
    { (yyval.n) = NULL; }
#line 3057 "go.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 758 "go.y" /* yacc.c:1646  */
    { (yyval.n) = NULL; }
#line 3063 "go.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 762 "go.y" /* yacc.c:1646  */
    { (yyval.n) = NULL; }
#line 3069 "go.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 766 "go.y" /* yacc.c:1646  */
    { (yyval.n) = NULL; }
#line 3075 "go.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 770 "go.y" /* yacc.c:1646  */
    { (yyval.n) = NULL; }
#line 3081 "go.tab.c" /* yacc.c:1646  */
    break;


#line 3085 "go.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
                  yystos[*yyssp], yyvsp);
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
#line 774 "go.y" /* yacc.c:1906  */

