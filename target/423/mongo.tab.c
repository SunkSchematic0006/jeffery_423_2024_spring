/* A Bison parser, made by GNU Bison 3.0.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 21 "mongo.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
int yylex();
int yyerror();
#define YYDEBUG 1

#line 74 "mongo.tab.c" /* yacc.c:339  */

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


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
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 173 "mongo.tab.c" /* yacc.c:358  */

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

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
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
#define YYLAST   2169

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  75
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  128
/* YYNRULES -- Number of rules.  */
#define YYNRULES  333
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  641

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
       2,     2,     2,    68,     2,     2,    63,    54,    55,     2,
      58,    59,    52,    48,    74,    49,    62,    53,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    65,    61,
       2,    64,     2,    72,    73,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    70,     2,    71,    51,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    66,    50,    67,    69,     2,     2,     2,
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
      45,    46,    47,    56,    57,    60
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   113,   113,   116,   121,   124,   125,   128,   129,   130,
     134,   138,   139,   143,   144,   145,   149,   152,   153,   157,
     163,   167,   168,   169,   174,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   194,   198,   199,   200,   204,
     205,   209,   210,   211,   215,   223,   227,   228,   229,   230,
     231,   232,   236,   237,   238,   239,   243,   249,   248,   275,
     276,   280,   285,   286,   290,   291,   292,   296,   300,   305,
     306,   311,   318,   322,   323,   326,   327,   331,   337,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   366,
     370,   371,   372,   373,   374,   375,   376,   380,   381,   389,
     390,   391,   403,   404,   405,   406,   407,   408,   409,   410,
     411,   412,   413,   414,   417,   424,   428,   429,   433,   434,
     438,   439,   443,   444,   447,   450,   459,   463,   466,   467,
     471,   472,   473,   477,   478,   482,   486,   499,   503,   507,
     508,   509,   510,   511,   512,   516,   517,   518,   519,   523,
     524,   525,   526,   527,   531,   532,   535,   539,   540,   541,
     542,   543,   547,   548,   552,   553,   554,   555,   556,   557,
     558,   562,   566,   570,   571,   575,   576,   584,   588,   589,
     593,   594,   598,   601,   602,   606,   607,   608,   612,   616,
     617,   625,   626,   630,   631,   635,   636,   640,   641,   645,
     646,   650,   651,   655,   656,   657,   658,   659,   660,   664,
     665,   669,   673,   674,   675,   679,   686,   687,   688,   689,
     693,   694,   697,   698,   704,   705,   706,   707,   708,   712,
     713,   714,   715,   716,   717,   719,   720,   721,   722,   723,
     724,   725,   729,   730,   734,   735,   739,   740,   744,   745,
     749,   750,   757,   758,   759,   760,   763,   764,   770,   771,
     774,   775,   778,   779,   782,   783,   786,   787,   790,   791,
     794,   795,   798,   799,   802,   803,   810,   811,   812,   813,
     814,   815,   819,   823,   831,   832,   833,   837,   838,   842,
     843,   844,   845,   846,   847,   848,   849,   850,   851,   852,
     856,   860,   864,   865,   869,   873,   874,   877,   878,   882,
     883,   891,   892,   893,   897,   898,   901,   902,   906,   907,
     911,   912,   916,   917
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
  "LLT", "LNE", "LOROR", "LRSH", "'+'", "'-'", "'|'", "'^'", "'*'", "'/'",
  "'%'", "'&'", "NotPackage", "NotParen", "'('", "')'",
  "PreferToRightParen", "';'", "'.'", "'$'", "'='", "':'", "'{'", "'}'",
  "'!'", "'~'", "'['", "']'", "'?'", "'@'", "','", "$accept", "file",
  "package", "imports", "import", "import_stmt", "import_stmt_list",
  "import_here", "import_package", "import_safety", "import_there", "xdcl",
  "common_dcl", "lconst", "vardcl", "constdcl", "constdcl1", "typedclname",
  "typedcl", "simple_stmt", "case", "compound_stmt", "caseblock", "$@1",
  "caseblock_list", "loop_body", "range_stmt", "for_header", "for_body",
  "for_stmt", "if_header", "if_stmt", "elseif", "elseif_list", "else",
  "switch_stmt", "select_stmt", "expr", "uexpr", "pseudocall",
  "pexpr_no_paren", "start_complit", "keyval", "bare_complitexpr",
  "complitexpr", "pexpr", "expr_or_type", "name_or_type", "lbrace",
  "new_name", "dcl_name", "onew_name", "sym", "hidden_importsym", "name",
  "labelname", "dotdotdot", "ntype", "non_expr_type", "non_recvchantype",
  "convtype", "comptype", "fnret_type", "dotname", "othertype", "ptrtype",
  "recvchantype", "structtype", "interfacetype", "xfndcl", "fndcl",
  "hidden_fndcl", "fntype", "fnbody", "fnres", "fnlitdcl", "fnliteral",
  "xdcl_list", "vardcl_list", "constdcl_list", "typedcl_list",
  "structdcl_list", "interfacedcl_list", "structdcl", "packname", "embed",
  "interfacedcl", "indcl", "arg_type", "arg_type_list",
  "oarg_type_list_ocomma", "stmt", "non_dcl_stmt", "stmt_list",
  "new_name_list", "dcl_name_list", "expr_list", "expr_or_type_list",
  "keyval_list", "braced_keyval_list", "osemi", "ocomma", "oexpr",
  "oexpr_list", "osimple_stmt", "ohidden_funarg_list",
  "ohidden_structdcl_list", "ohidden_interfacedcl_list", "oliteral",
  "hidden_import", "hidden_pkg_importsym", "hidden_pkgtype", "hidden_type",
  "hidden_type_non_recv_chan", "hidden_type_misc", "hidden_type_recv_chan",
  "hidden_type_func", "hidden_funarg", "hidden_structdcl",
  "hidden_interfacedcl", "ohidden_funres", "hidden_funres",
  "hidden_literal", "hidden_constant", "hidden_import_list",
  "hidden_funarg_list", "hidden_structdcl_list",
  "hidden_interfacedcl_list", YY_NULL
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
     295,   296,   297,   298,   299,   300,   301,   302,    43,    45,
     124,    94,    42,    47,    37,    38,   303,   304,    40,    41,
     305,    59,    46,    36,    61,    58,   123,   125,    33,   126,
      91,    93,    63,    64,    44
};
# endif

#define YYPACT_NINF -513

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-513)))

#define YYTABLE_NINF -259

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      19,   109,    47,  -513,  -513,  -513,    50,    -7,  -513,  -513,
      36,    34,  -513,   280,   112,   940,    16,  -513,   212,    94,
    -513,   149,   190,  -513,  -513,  -513,   109,  1696,  -513,   109,
     437,  -513,  1546,   159,   437,   109,  1546,   134,   140,  1546,
     156,   134,  1546,   235,   302,  1546,  1546,  1546,  1546,  1546,
    1546,  1588,  1546,  1546,  1192,   162,  -513,   315,  -513,  -513,
    -513,  -513,  -513,  1138,  -513,  -513,  -513,   207,  -513,   187,
    -513,   199,   204,   134,   189,  -513,  -513,  -513,   215,    58,
    -513,  -513,    43,  -513,  -513,  -513,  -513,   214,  -513,   264,
    -513,  -513,  -513,  -513,  -513,   242,  1704,  1704,  1704,  -513,
     254,  -513,  -513,  -513,  -513,  -513,  -513,   224,   207,  -513,
    -513,   261,  -513,   115,   275,   626,   293,   288,   224,  -513,
     261,   317,  -513,   298,  1704,  2046,   289,  -513,  -513,   229,
     328,   343,  1704,  -513,  -513,   353,  -513,  -513,  -513,   819,
    -513,  -513,  -513,  -513,  -513,  -513,  1630,  1588,  2046,   351,
    -513,   118,  -513,   105,  -513,  -513,   325,  2046,   346,  -513,
     355,  -513,  1672,  1546,  1546,  1546,  1546,  -513,  1546,  1546,
    1546,  -513,  1546,  1546,  1546,  1546,  1546,  1546,  1546,  1546,
    1546,  1546,  1546,  1546,  1546,  1546,  1234,   400,  1546,  1022,
    1546,  -513,  -513,  1097,  1546,  1546,  1546,   184,   370,   406,
    -513,   197,   626,   424,  1704,  -513,  -513,  -513,  -513,  -513,
    -513,  -513,   374,   109,  1097,  -513,  1288,  1342,  1546,  1704,
    -513,   626,  -513,  -513,  -513,   361,   377,   626,  1097,  -513,
    -513,  1546,    32,   413,  -513,   381,   380,  -513,  -513,   379,
      80,    37,    87,  -513,  -513,   390,  -513,  -513,   449,   521,
    -513,  -513,  -513,   392,  -513,  -513,  -513,   394,  1546,   109,
     398,  1735,  -513,  -513,  1704,  1704,  -513,   395,  1546,   405,
    2046,  2114,  -513,  2069,   873,   873,   873,   873,  -513,   873,
     873,  2092,  -513,   459,   459,   459,   459,  -513,  -513,  -513,
    -513,  -513,  -513,    67,  1396,  -513,  1944,   399,  -513,  1097,
    -513,  -513,  -513,  -513,  1911,  1438,  -513,    70,   289,   289,
    2046,  -513,  -513,  -513,   414,   401,    28,   447,   401,   401,
     415,  -513,   428,  1704,   431,  -513,  -513,    93,  1546,  1546,
     430,  -513,  -513,  -513,   626,  -513,  1767,   433,   337,   480,
    -513,   109,   434,   439,   626,  -513,   410,   432,  1704,  1588,
     435,  -513,  -513,  -513,   413,   449,   413,   442,    17,   441,
    -513,  -513,   109,   449,   154,   109,   445,   109,   456,   289,
    -513,  1546,  1775,  1704,  -513,   119,   153,   237,   253,  -513,
    -513,   109,   460,   289,  1546,   446,  1588,   462,   463,   464,
    -513,  1546,   352,  -513,   465,  -513,  1974,  -513,  -513,   451,
     461,  1022,  -513,  -513,  -513,   815,   109,   288,   469,   529,
    -513,  1870,  1870,  -513,  1767,  -513,  -513,  2046,  2046,  1546,
    -513,   626,   475,  -513,  -513,  -513,  -513,  -513,  -513,  -513,
    1767,  -513,    61,  -513,  -513,  -513,  -513,   477,  -513,  -513,
    -513,    71,  -513,  1022,   487,  -513,   488,   449,  -513,  -513,
    -513,  -513,  -513,  -513,  -513,  -513,  -513,   289,   490,  -513,
    -513,   492,  1672,  -513,   289,   498,  -513,  -513,  -513,  -513,
     311,  -513,  -513,  1438,  1492,  1438,  -513,  -513,  -513,  1806,
     501,   494,   491,  -513,   496,   555,  1870,    95,    42,  -513,
     500,  -513,  -513,  -513,  1200,  -513,   202,   504,   109,   505,
     509,   510,  -513,   513,   626,  -513,  1546,  -513,  1767,  1546,
    1546,  -513,  1588,   517,   449,   449,  -513,   257,   109,   515,
     405,  -513,  1546,  -513,   516,  -513,  2046,  -513,  -513,  -513,
    1870,   545,  -513,  -513,  -513,   109,  1838,  1870,   109,  1870,
    -513,  -513,   581,   126,  -513,  -513,   527,   528,  1870,    95,
    1870,   449,   109,   109,  -513,   533,   524,  -513,  -513,  -513,
    -513,   542,   261,  -513,  1998,  2022,  -513,  -513,  -513,  -513,
     531,  -513,  1438,  -513,   547,   549,   552,   553,   557,   537,
    -513,  -513,   556,   550,  1870,   558,  -513,   559,  -513,  -513,
     568,  -513,  1870,  -513,   561,   449,  -513,   565,  -513,  1846,
    1767,  -513,  -513,  -513,  -513,   560,  -513,  1846,   109,  -513,
    1838,  1870,   449,  -513,   109,   126,  -513,  -513,  -513,   109,
     109,  -513,  -513,  -513,  -513,  -513,  -513,   567,  -513,  -513,
    -513,  -513,   569,   570,   573,  1846,  -513,  1846,  -513,  -513,
    -513
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     0,     5,   140,   142,     0,     0,   141,     1,
     201,     0,     4,     0,     0,     0,     0,    13,     0,     0,
       7,     0,     0,     6,    24,   112,   138,     0,    35,   138,
       0,   245,   276,     0,     0,     0,   276,     0,     0,   274,
       0,     0,   276,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   272,     0,    21,     0,   239,   240,
     243,   241,   242,    46,    79,   120,   130,   100,   146,   145,
     113,     0,     0,     0,   165,   179,   180,    22,   198,     0,
     123,    23,     0,   143,   144,     9,    11,   268,    15,     0,
     326,    14,   139,   246,   136,     0,     0,     0,     0,   145,
     172,   176,   162,   160,   161,   159,   247,   249,     0,   277,
      66,     0,    68,     0,    65,   232,     0,   193,   248,   250,
       0,    69,   135,     0,     0,   258,   275,   251,    59,     0,
       0,     0,     0,    32,    44,     0,    25,   256,   137,     0,
     108,   103,   104,   107,   101,   102,     0,     0,   132,     0,
     133,   157,   155,   156,   105,   106,     0,   273,     0,   202,
       0,    28,     0,     0,     0,     0,     0,    51,     0,     0,
       0,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   272,     0,
       0,   124,   200,     0,     0,     0,     0,   269,     0,    17,
      10,     0,   232,     0,     0,   177,   153,   151,   152,   149,
     150,   181,     0,     0,     0,    67,     0,     0,   276,   147,
     226,   145,   229,   134,   230,   270,     0,   232,     0,   187,
      73,   276,   140,     0,   186,     0,   268,   223,   211,     0,
       0,     0,     0,   184,   254,   268,   209,   221,   284,     0,
      59,    34,   207,   268,    45,    27,   203,   268,     0,     0,
      36,     0,   158,   131,     0,     0,    31,   268,     0,     0,
      47,    81,    96,    99,    82,    86,    87,    85,    97,    84,
      83,    80,    98,    88,    89,    90,    91,    92,    93,    94,
      95,   109,   260,   270,     0,   114,   273,     0,   238,     0,
     236,   235,   244,   237,   270,   266,   252,     0,    49,    48,
     259,    12,     8,    18,     0,     0,     0,     0,     0,     0,
       0,   327,     0,     0,     0,   163,   173,     0,     0,     0,
       0,   148,   227,   228,   271,   233,   195,     0,     0,    75,
      70,     0,   219,     0,   232,   222,   269,     0,     0,     0,
       0,    78,    57,    60,     0,   284,     0,     0,   269,     0,
     285,   214,     0,   284,     0,   269,     0,   269,     0,    38,
     257,     0,     0,     0,   182,   153,   151,   152,   150,   175,
     174,   269,     0,    40,     0,   270,   271,     0,     0,     0,
     117,   272,     0,   271,     0,   124,   126,   262,   263,   270,
       0,     0,   199,    16,   292,     0,     0,   193,     0,     0,
     293,     0,     0,    19,   195,   154,    61,    63,    62,   276,
     231,   232,   145,   196,   171,   169,   170,   167,   168,   192,
     195,   194,     0,    74,    71,   220,   224,     0,   212,   185,
     178,     0,    55,     0,     0,   216,     0,   284,   210,   183,
     255,   213,    77,   208,    33,   204,    26,    37,     0,    41,
     205,   268,    43,    29,    39,     0,   261,   110,   116,   115,
       0,    56,   121,   266,     0,   271,   267,   122,   253,     0,
       0,     0,     0,   300,     0,     0,     0,     0,     0,   299,
       0,   294,   295,   296,     0,   328,     0,     0,   278,     0,
       0,     0,    64,     0,   232,   188,   276,    76,   195,     0,
       0,    52,     0,    58,   284,   284,   215,   154,   269,     0,
      42,   111,   272,   118,     0,   124,   128,   125,   264,   265,
       0,     0,   307,   297,   298,   278,   282,     0,   280,     0,
     306,   321,     0,     0,   323,   324,     0,     0,     0,     0,
       0,   284,     0,     0,   291,     0,   279,   286,   290,   287,
     197,     0,     0,   225,     0,     0,   218,   217,   206,    30,
       0,   127,   266,   309,     0,     0,   300,     0,   299,     0,
     316,   332,   283,     0,     0,     0,   330,   281,   310,   322,
       0,   288,     0,   301,     0,   284,   312,     0,   329,   317,
     195,    72,    54,    53,   119,     0,   308,   317,   278,   305,
       0,     0,   284,   304,     0,     0,   302,   289,   313,   278,
     278,   320,   190,   318,   189,   129,   311,     0,   333,   303,
     314,   331,     0,     0,     0,   317,   325,   317,   319,   315,
     191
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -513,  -513,  -513,  -513,  -513,     5,  -513,  -513,  -513,  -513,
    -513,  -513,   618,  -513,  -124,   -18,   117,  -513,  -121,   -27,
    -513,   206,  -513,  -513,   386,  -113,  -513,  -513,  -513,  -513,
     -41,  -513,  -513,  -513,  -513,  -513,  -513,   546,    18,   316,
    -513,  -369,   164,   165,  -513,   388,   -49,   420,   193,    23,
     383,   617,    -1,   271,   443,  -513,   436,   -14,   506,  -513,
    -513,  -513,  -513,   -23,   -24,   -19,   -31,  -513,  -513,  -513,
    -513,  -513,   182,   244,  -406,  -513,  -513,  -513,  -513,  -513,
    -513,  -513,  -513,   294,  -107,  -205,   308,  -513,   322,  -513,
    -172,  -171,   643,  -195,  -513,   -51,    73,   310,  -513,  -451,
    -207,  -242,  -175,  -513,   -11,  -450,  -513,  -513,  -223,  -513,
    -239,  -513,   219,  -513,   181,   132,   186,   113,    53,    59,
    -214,  -513,  -512,   122,  -513,   262,  -513,  -513
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    10,    14,    20,    87,    21,    90,   314,
     200,    55,   300,    57,   136,   459,   460,   132,   133,    58,
     352,   301,   353,   443,   240,   215,   110,   111,   112,    59,
     120,    60,   433,   339,   434,    61,    62,    63,    64,    65,
      66,   305,   397,   398,   527,    67,   292,   220,   123,    68,
     137,    93,    99,     8,    70,    71,   222,   223,   150,   101,
      72,    73,   423,   206,    74,   208,   209,    75,    76,    77,
     117,   407,    78,   229,   429,    79,    80,    15,   257,   461,
     253,   245,   236,   246,   247,   248,   238,   345,   224,   225,
     226,   306,   303,   307,   249,   139,    82,   293,   399,   400,
     198,   335,   158,   127,   121,   555,   585,   579,   361,   321,
     405,   411,   621,   532,   491,   492,   493,   495,   586,   581,
     622,   623,   545,   546,   201,   556,   587,   582
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,   130,   149,   103,   102,   109,   162,   230,   104,   109,
     252,   256,    22,   297,    69,   109,   237,    22,   302,   327,
     152,   114,   524,    86,   505,    94,   473,   151,    94,   347,
     322,   590,   116,   338,    94,  -219,   355,   357,   359,   161,
      83,   232,   134,   138,     1,   547,   366,     9,   194,    92,
     368,   387,    92,    11,    12,   337,   138,    13,   119,   192,
     382,   342,   394,   140,   141,   142,   143,   144,   145,   241,
     154,   155,   207,   207,   207,   242,   509,   408,   385,   410,
     412,   506,   205,   211,   212,   575,   406,   349,    84,     5,
       6,   207,   350,  -219,   341,   354,    16,    88,   541,  -219,
     207,     6,   563,   632,   392,   113,  -198,   195,   207,   162,
     239,   342,   126,   548,   221,   207,   152,   196,   254,     4,
     216,   605,    94,   151,   122,   260,   343,   299,    94,   541,
     134,   401,   445,     4,   138,   510,   511,   402,   207,   356,
     451,   386,   267,   465,   542,   512,   235,   351,   269,   444,
       4,   446,   244,   543,   401,   152,   572,   476,   627,   138,
     416,   349,   151,  -164,   140,   144,   350,     5,     6,   633,
     634,  -198,   437,    23,    89,   542,  -165,  -162,   207,   217,
     207,     5,     6,     4,  -166,  -162,   295,    17,    69,   196,
     324,   109,    69,    91,   624,   207,    22,   207,     5,     6,
     122,   221,   311,   207,   109,   331,   315,   330,     4,   105,
     124,  -160,   326,    69,   316,    17,   470,   115,   317,  -160,
     340,   452,   128,   159,   516,   207,   221,    69,   318,   319,
     478,     5,     6,   153,   129,   363,     4,   376,   375,   237,
     207,   207,   377,   455,   453,   389,    19,   374,   513,   503,
     379,   380,  -136,   232,   519,  -166,     5,     6,   138,     4,
     320,   552,   190,   152,   189,   186,   191,   308,   309,   187,
     151,    85,   193,  -164,    19,   197,   553,   188,   210,   210,
     210,   241,  -120,    17,     5,     6,  -120,   242,   199,   308,
     309,   566,   567,   131,  -120,  -161,   243,   210,    69,   207,
     202,     5,     6,  -161,     4,   427,   210,     5,     6,   374,
     207,  -159,   425,   424,   210,  -163,   213,   426,   152,  -159,
     207,   210,   232,  -163,   207,   151,     4,   214,   596,   153,
     462,   369,   561,   221,   440,   422,   218,   466,    18,     4,
     435,   383,    19,   221,   210,    94,   107,   570,   207,   207,
     118,   227,     5,     6,   228,   152,   233,    94,   205,   458,
     135,    94,   151,   196,   134,   234,   138,     4,   153,   235,
       5,     6,   618,   160,     5,     6,   522,     4,   231,     4,
     138,   244,   523,   427,   210,   450,   210,     5,     6,   630,
     425,   424,   109,   626,   250,   426,   264,   207,   401,   427,
      69,   210,   251,   210,   431,   494,   425,   424,   502,   210,
     263,   426,   255,   401,   266,     5,     6,   265,   108,   471,
     221,   639,   108,   640,     4,     5,     6,     5,     6,   312,
     313,   210,   323,   325,   232,   334,   336,   342,   207,   344,
      25,   346,    69,   378,   457,    27,   210,   210,   520,   601,
     348,   358,   360,   365,    95,   367,   381,   464,   294,    37,
      38,     4,   371,   466,   391,   562,    41,   462,   233,   384,
     100,   409,     5,     6,     6,   403,   153,   427,   413,   109,
     207,   152,     5,     6,   425,   424,   544,   414,   151,   426,
     415,   419,   430,   165,   432,    51,   341,   494,   436,   439,
     442,   447,   173,   221,   454,   210,   177,    54,   449,     5,
       6,   182,   183,   184,   185,   456,   210,   138,   428,   463,
     393,   467,   468,   469,   472,   475,   210,   498,   477,    27,
     210,   153,   499,   504,   494,   577,   508,   584,    95,   100,
     100,   100,   544,    37,    38,     4,   514,   515,   544,   517,
      41,   597,   494,   518,   210,   210,   203,   521,   100,   535,
     536,   537,   538,   539,   549,   554,   557,   100,   153,   427,
     558,   559,   560,    97,   569,   100,   425,   424,   401,   204,
     485,   426,   100,   571,   589,   125,   404,   404,   591,   404,
     404,    54,   599,     5,     6,   362,   428,   148,   553,   592,
     157,   600,   604,   210,   609,   100,   606,   494,   607,   577,
    -140,   608,   428,   584,   544,  -141,   615,   610,   494,   494,
     614,   611,   617,   619,   490,   613,   635,   625,   636,   637,
     500,   501,   638,    56,    27,   568,   364,   219,   507,   528,
     529,   332,   370,    95,   210,   100,   106,   100,    37,    38,
       4,   497,   448,   262,   438,    41,   420,   333,    81,   441,
     533,   203,   100,   574,   100,   534,   598,   631,   496,   628,
     100,   594,     0,     0,     0,     0,   489,     0,    97,     0,
       0,     0,   489,   489,   204,     0,   210,     0,     0,     0,
     428,     0,   100,     0,   153,     0,    54,     0,     5,     6,
       0,     0,     0,     0,   100,   540,     0,   100,   100,   270,
     271,   272,   273,   551,   274,   275,   276,     0,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   148,     0,   296,     0,   304,     0,     0,     0,
     125,   125,   310,     0,     0,     0,     0,     0,     0,   573,
     489,     0,     0,     0,     0,   580,   583,   489,   588,     0,
       0,     0,   125,   125,     0,   489,   100,   593,     0,   595,
       0,     0,     0,     0,     0,     0,     0,   100,     0,   100,
       0,     0,   428,     0,     0,     0,     0,   100,     0,     0,
       0,   100,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   489,     0,   612,   125,     0,     0,   578,   489,     0,
     489,   616,     0,     0,   125,   100,   100,     0,     0,   489,
       0,   489,     0,   479,     0,     0,     0,    27,     0,   580,
     629,     0,   480,     0,     0,     0,    95,   481,   482,   483,
     148,    37,    38,     4,   484,     0,     0,     0,    41,     0,
     485,   396,     0,     0,   203,   489,     0,   100,     0,     0,
       0,     0,     0,   489,   100,     0,     0,   486,     0,     0,
     489,    97,     0,   100,   417,   418,     0,   204,   489,   487,
       0,   578,   489,   258,     0,   488,     0,     0,     6,    54,
       0,     5,     6,   259,     0,   148,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,   489,   165,   489,     0,
       0,     0,     0,     0,     0,     0,   173,   125,     0,     0,
     177,   178,   179,   180,   181,   182,   183,   184,   185,     0,
     125,     0,   148,     0,     0,     0,     0,   157,     0,     0,
      -2,    24,     0,    25,     0,     0,    26,   100,    27,    28,
      29,   100,     0,    30,     0,    31,    32,    33,    34,    35,
      36,     0,    37,    38,     4,     0,     0,    39,    40,    41,
      42,    43,    44,     0,     0,    45,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    46,    47,
       0,    48,    49,     0,     0,    50,     0,     0,    51,     0,
       0,   -20,     0,     0,     0,     0,     0,     0,    52,    53,
      54,     0,     5,     6,     0,     0,     0,     0,     0,   396,
     526,   396,     0,   298,     0,    25,     0,     0,    26,  -234,
      27,    28,    29,     0,  -234,    30,     0,    31,    32,    95,
      34,    35,    36,   100,    37,    38,     4,     0,     0,    39,
      40,    41,    42,    43,    44,   564,   565,    45,   148,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   157,     0,
      46,    47,     0,    48,    49,     0,     0,    50,     0,     0,
      51,     0,     0,  -234,     0,     0,     0,     0,   299,  -234,
      52,    53,    54,     0,     5,     6,     0,     0,   298,     0,
      25,     0,     0,    26,     0,    27,    28,    29,     0,     0,
      30,     0,    31,    32,    95,    34,    35,    36,   396,    37,
      38,     4,     0,     0,    39,    40,    41,    42,    43,    44,
       0,     0,    45,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   163,  -258,     0,    46,    47,     0,    48,    49,
       0,     0,    50,     0,     0,    51,     0,     0,  -234,     0,
       0,     0,     0,   299,  -234,    52,    53,    54,     0,     5,
       6,   164,   165,   166,   167,   168,   169,   170,     0,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,     0,    25,     0,     0,     0,     0,
      27,     0,  -258,   156,     0,     0,     0,     0,   479,    95,
       0,   550,  -258,     0,    37,    38,     4,   480,     0,     0,
       0,    41,   481,   482,   483,     0,     0,    45,     0,   484,
       0,     0,     0,     0,     0,   485,     0,    25,     0,     0,
      46,    47,    27,    48,    49,     0,     0,    50,     0,     0,
      51,    95,   486,     0,     0,     0,    37,    38,     4,     0,
      52,    53,    54,    41,     5,     6,     0,     0,     0,   146,
     488,     0,     0,     6,     0,     0,     0,     0,     0,     0,
       0,     0,    46,    47,     0,    48,   147,     0,     0,    50,
       0,    25,    51,   291,     0,     0,    27,     0,     0,     0,
       0,     0,    52,    53,    54,    95,     5,     6,     0,     0,
      37,    38,     4,     0,   328,     0,     0,    41,     0,     0,
       0,     0,     0,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    46,    47,     0,    48,
      49,     0,     0,    50,     0,    25,    51,     0,     0,     0,
      27,     0,     0,     0,     0,     0,    52,    53,    54,    95,
       5,     6,     0,     0,    37,    38,     4,     0,   329,     0,
       0,    41,     0,     0,     0,     0,     0,    45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      46,    47,     0,    48,    49,     0,     0,    50,     0,    25,
      51,     0,     0,     0,    27,     0,     0,     0,     0,     0,
      52,    53,    54,    95,     5,     6,     0,     0,    37,    38,
       4,     0,     0,     0,     0,    41,     0,   388,     0,     0,
       0,   146,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,     0,     0,    46,    47,    27,    48,   147,     0,
       0,    50,     0,     0,    51,    95,     0,     0,     0,     0,
      37,    38,     4,     0,    52,    53,    54,    41,     5,     6,
       0,     0,     0,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    46,    47,     0,    48,
      49,     0,     0,    50,     0,    25,    51,     0,     0,     0,
      27,     0,     0,     0,   395,     0,    52,    53,    54,    95,
       5,     6,     0,     0,    37,    38,     4,     0,     0,     0,
       0,    41,     0,     0,     0,     0,     0,    45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      46,    47,     0,    48,    49,     0,     0,    50,     0,    25,
      51,     0,     0,     0,    27,     0,     0,     0,   525,     0,
      52,    53,    54,    95,     5,     6,     0,     0,    37,    38,
       4,     0,     0,     0,     0,    41,     0,     0,     0,     0,
       0,    45,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,     0,     0,    46,    47,    27,    48,    49,     0,
       0,    50,     0,     0,    51,    95,     0,     0,     0,     0,
      37,    38,     4,     0,    52,    53,    54,    41,     5,     6,
       0,     0,     0,   146,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,     0,     0,    46,    47,   261,    48,
     147,     0,     0,    50,     0,     0,    51,    95,     0,     0,
       0,     0,    37,    38,     4,     0,    52,    53,    54,    41,
       5,     6,     0,     0,     0,    45,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    46,    47,
      27,    48,    49,     0,     0,    50,     0,     0,    51,    95,
       0,     0,     0,     0,    37,    38,     4,     0,    52,    53,
      54,    41,     5,     6,    27,     0,     0,   203,     0,     0,
       0,     0,    27,    95,     0,     0,     0,     0,    37,    38,
       4,    95,     0,     0,    97,    41,    37,    38,     4,     0,
     204,    96,     0,    41,     0,     0,   268,     0,     0,   203,
       0,     0,    54,    27,     5,     6,   259,     0,    97,     0,
       0,     0,    95,     0,    98,     0,    97,    37,    38,     4,
       0,     0,   204,     0,    41,     0,    54,     0,     5,     6,
     372,     0,     0,     0,    54,    27,     5,     6,     0,     0,
       0,     0,     0,   261,    95,     0,     0,    97,     0,    37,
      38,     4,    95,   373,     0,     0,    41,    37,    38,     4,
       0,     0,   203,     0,    41,    54,     0,     5,     6,     0,
     203,     0,     0,     0,   479,     0,     0,     0,     0,    97,
       0,     0,     0,   480,     0,   421,     0,    97,   481,   482,
     483,     0,     0,   204,     0,   484,     0,    54,     0,     5,
       6,   530,     0,     0,     0,    54,   479,     5,     6,     0,
       0,     0,     0,     0,   479,   480,     0,     0,   486,     0,
     481,   482,   576,   480,   531,     0,     0,   484,   481,   482,
     483,     0,     0,   485,     0,   484,   488,     0,   479,     6,
       0,   485,     0,     0,     0,     0,     0,   480,     0,     0,
     486,     0,   481,   482,   483,     0,     0,     0,   486,   484,
       0,     0,     0,     0,   620,   485,     0,     0,   488,     0,
       5,     6,     0,     0,     0,     0,   488,     0,     0,     6,
       0,     0,   486,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     488,     0,     0,     6,   164,   165,   166,     0,   168,   169,
     170,     0,     0,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   164,   165,   166,
       0,   168,   169,   170,     0,   393,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
       0,     0,     0,     0,     0,     0,     0,   164,   165,   166,
       0,   168,   169,   170,     0,   390,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
       0,   164,   165,   166,     0,   168,   169,   170,     0,   474,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,     0,   164,   165,   166,     0,   168,
     169,   170,     0,   602,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,     0,   164,
     165,   166,     0,   168,   169,   170,     0,   603,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   164,   165,     0,     0,   168,   169,   170,     0,
       0,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   164,   165,     0,     0,   168,
     169,   170,     0,     0,   172,   173,   174,   175,     0,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   165,     0,
       0,   168,   169,   170,     0,     0,   172,   173,   174,   175,
       0,   177,   178,   179,   180,   181,   182,   183,   184,   185
};

static const yytype_int16 yycheck[] =
{
       1,    42,    51,    27,    27,    32,    57,   120,    27,    36,
     131,   135,    13,   188,    15,    42,   123,    18,   189,   214,
      51,    32,   473,    18,   430,    26,   395,    51,    29,   236,
     202,   543,    33,   228,    35,     3,   241,   242,   245,    57,
      24,    24,    43,    44,    25,     3,   253,     0,     5,    26,
     257,   293,    29,     3,    61,   227,    57,    21,    35,     1,
     267,    24,   304,    45,    46,    47,    48,    49,    50,    52,
      52,    53,    96,    97,    98,    58,     5,   316,    11,   318,
     319,    20,    96,    97,    98,   535,    58,     7,    72,    72,
      73,   115,    12,    61,    62,    58,    62,     3,     3,    67,
     124,    73,   508,   615,   299,    32,     1,    64,   132,   160,
     124,    24,    39,    71,   115,   139,   147,    74,   132,    24,
       5,   572,   123,   147,    66,   139,   233,    66,   129,     3,
     131,    61,   355,    24,   135,    64,    65,    67,   162,    52,
     363,    74,   160,   385,    49,    74,   123,    67,   162,   354,
      24,   356,   129,    58,    61,   186,   525,   399,   608,   160,
      67,     7,   186,    58,   146,   147,    12,    72,    73,   619,
     620,    66,   344,    61,    25,    49,    58,    58,   202,    64,
     204,    72,    73,    24,    66,    66,   187,     3,   189,    74,
     204,   218,   193,     3,   600,   219,   197,   221,    72,    73,
      66,   202,   197,   227,   231,   219,     9,   218,    24,    27,
      70,    58,   213,   214,    17,     3,   391,    58,    21,    66,
     231,    67,    66,    61,   447,   249,   227,   228,    31,    32,
     401,    72,    73,    51,    41,   249,    24,   261,   261,   346,
     264,   265,   261,   367,   365,   294,    62,   261,   443,   421,
     264,   265,    65,    24,   461,    66,    72,    73,   259,    24,
      63,    59,    58,   294,    65,    58,    73,   194,   195,    62,
     294,    59,    79,    58,    62,    61,    74,    70,    96,    97,
      98,    52,    58,     3,    72,    73,    62,    58,    24,   216,
     217,   514,   515,    58,    70,    58,    67,   115,   299,   323,
      58,    72,    73,    66,    24,   336,   124,    72,    73,   323,
     334,    58,   336,   336,   132,    58,    62,   336,   349,    66,
     344,   139,    24,    66,   348,   349,    24,    66,   551,   147,
     381,   258,   504,   334,   348,   336,    61,   386,    58,    24,
     341,   268,    62,   344,   162,   346,    30,   522,   372,   373,
      34,    58,    72,    73,    66,   386,    58,   358,   372,   373,
      58,   362,   386,    74,   365,    67,   367,    24,   186,   346,
      72,    73,   595,    58,    72,    73,    65,    24,    61,    24,
     381,   358,    71,   414,   202,   362,   204,    72,    73,   612,
     414,   414,   419,   607,    66,   414,    71,   421,    61,   430,
     401,   219,    59,   221,    67,   406,   430,   430,   419,   227,
      59,   430,    59,    61,    59,    72,    73,    71,    30,    67,
     421,   635,    34,   637,    24,    72,    73,    72,    73,    59,
      24,   249,     8,    59,    24,    74,    59,    24,   462,    58,
       3,    61,   443,   261,   371,     8,   264,   265,   462,   562,
      71,    61,     3,    61,    17,    61,    61,   384,    58,    22,
      23,    24,    64,   512,    65,   506,    29,   518,    58,    64,
      27,    24,    72,    73,    73,    61,   294,   508,    63,   506,
     504,   512,    72,    73,   508,   508,   487,    59,   512,   508,
      59,    61,    59,    34,    14,    58,    62,   498,    59,    67,
      65,    59,    43,   504,    59,   323,    47,    70,    67,    72,
      73,    52,    53,    54,    55,    59,   334,   518,   336,    59,
      74,    59,    59,    59,    59,    74,   344,    58,    67,     8,
     348,   349,     3,    58,   535,   536,    59,   538,    17,    96,
      97,    98,   543,    22,    23,    24,    59,    59,   549,    59,
      29,   552,   553,    61,   372,   373,    35,    59,   115,    58,
      66,    70,    66,     8,    64,    61,    61,   124,   386,   600,
      61,    61,    59,    52,    59,   132,   600,   600,    61,    58,
      35,   600,   139,    67,     3,    39,   315,   316,    61,   318,
     319,    70,    59,    72,    73,    74,   414,    51,    74,    71,
      54,    59,    71,   421,    67,   162,    59,   608,    59,   610,
      58,    58,   430,   614,   615,    58,    48,    61,   619,   620,
      61,    71,    61,    58,   405,    67,    59,    67,    59,    59,
     411,   412,    59,    15,     8,   518,   250,    11,   432,   475,
     475,   221,   259,    17,   462,   202,    29,   204,    22,    23,
      24,   407,   358,   147,   346,    29,   334,   221,    15,   349,
     479,    35,   219,   531,   221,   479,   553,   614,   406,   610,
     227,   549,    -1,    -1,    -1,    -1,   405,    -1,    52,    -1,
      -1,    -1,   411,   412,    58,    -1,   504,    -1,    -1,    -1,
     508,    -1,   249,    -1,   512,    -1,    70,    -1,    72,    73,
      -1,    -1,    -1,    -1,   261,   486,    -1,   264,   265,   163,
     164,   165,   166,   494,   168,   169,   170,    -1,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,    -1,   188,    -1,   190,    -1,    -1,    -1,
     194,   195,   196,    -1,    -1,    -1,    -1,    -1,    -1,   530,
     479,    -1,    -1,    -1,    -1,   536,   537,   486,   539,    -1,
      -1,    -1,   216,   217,    -1,   494,   323,   548,    -1,   550,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   334,    -1,   336,
      -1,    -1,   600,    -1,    -1,    -1,    -1,   344,    -1,    -1,
      -1,   348,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   530,    -1,   584,   258,    -1,    -1,   536,   537,    -1,
     539,   592,    -1,    -1,   268,   372,   373,    -1,    -1,   548,
      -1,   550,    -1,     8,    -1,    -1,    -1,     8,    -1,   610,
     611,    -1,    17,    -1,    -1,    -1,    17,    22,    23,    24,
     294,    22,    23,    24,    29,    -1,    -1,    -1,    29,    -1,
      35,   305,    -1,    -1,    35,   584,    -1,   414,    -1,    -1,
      -1,    -1,    -1,   592,   421,    -1,    -1,    52,    -1,    -1,
     599,    52,    -1,   430,   328,   329,    -1,    58,   607,    64,
      -1,   610,   611,    64,    -1,    70,    -1,    -1,    73,    70,
      -1,    72,    73,    74,    -1,   349,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   462,   635,    34,   637,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,   371,    -1,    -1,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
     384,    -1,   386,    -1,    -1,    -1,    -1,   391,    -1,    -1,
       0,     1,    -1,     3,    -1,    -1,     6,   504,     8,     9,
      10,   508,    -1,    13,    -1,    15,    16,    17,    18,    19,
      20,    -1,    22,    23,    24,    -1,    -1,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    51,    52,    -1,    -1,    55,    -1,    -1,    58,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    68,    69,
      70,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,   473,
     474,   475,    -1,     1,    -1,     3,    -1,    -1,     6,     7,
       8,     9,    10,    -1,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,   600,    22,    23,    24,    -1,    -1,    27,
      28,    29,    30,    31,    32,   509,   510,    35,   512,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   522,    -1,
      48,    49,    -1,    51,    52,    -1,    -1,    55,    -1,    -1,
      58,    -1,    -1,    61,    -1,    -1,    -1,    -1,    66,    67,
      68,    69,    70,    -1,    72,    73,    -1,    -1,     1,    -1,
       3,    -1,    -1,     6,    -1,     8,     9,    10,    -1,    -1,
      13,    -1,    15,    16,    17,    18,    19,    20,   572,    22,
      23,    24,    -1,    -1,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,     5,    -1,    48,    49,    -1,    51,    52,
      -1,    -1,    55,    -1,    -1,    58,    -1,    -1,    61,    -1,
      -1,    -1,    -1,    66,    67,    68,    69,    70,    -1,    72,
      73,    33,    34,    35,    36,    37,    38,    39,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,     3,    -1,    -1,    -1,    -1,
       8,    -1,    64,    11,    -1,    -1,    -1,    -1,     8,    17,
      -1,    11,    74,    -1,    22,    23,    24,    17,    -1,    -1,
      -1,    29,    22,    23,    24,    -1,    -1,    35,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    35,    -1,     3,    -1,    -1,
      48,    49,     8,    51,    52,    -1,    -1,    55,    -1,    -1,
      58,    17,    52,    -1,    -1,    -1,    22,    23,    24,    -1,
      68,    69,    70,    29,    72,    73,    -1,    -1,    -1,    35,
      70,    -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    -1,    51,    52,    -1,    -1,    55,
      -1,     3,    58,    59,    -1,    -1,     8,    -1,    -1,    -1,
      -1,    -1,    68,    69,    70,    17,    72,    73,    -1,    -1,
      22,    23,    24,    -1,    26,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    51,
      52,    -1,    -1,    55,    -1,     3,    58,    -1,    -1,    -1,
       8,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,    17,
      72,    73,    -1,    -1,    22,    23,    24,    -1,    26,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    51,    52,    -1,    -1,    55,    -1,     3,
      58,    -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,    -1,
      68,    69,    70,    17,    72,    73,    -1,    -1,    22,    23,
      24,    -1,    -1,    -1,    -1,    29,    -1,    31,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    48,    49,     8,    51,    52,    -1,
      -1,    55,    -1,    -1,    58,    17,    -1,    -1,    -1,    -1,
      22,    23,    24,    -1,    68,    69,    70,    29,    72,    73,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    51,
      52,    -1,    -1,    55,    -1,     3,    58,    -1,    -1,    -1,
       8,    -1,    -1,    -1,    66,    -1,    68,    69,    70,    17,
      72,    73,    -1,    -1,    22,    23,    24,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    51,    52,    -1,    -1,    55,    -1,     3,
      58,    -1,    -1,    -1,     8,    -1,    -1,    -1,    66,    -1,
      68,    69,    70,    17,    72,    73,    -1,    -1,    22,    23,
      24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    48,    49,     8,    51,    52,    -1,
      -1,    55,    -1,    -1,    58,    17,    -1,    -1,    -1,    -1,
      22,    23,    24,    -1,    68,    69,    70,    29,    72,    73,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    48,    49,     8,    51,
      52,    -1,    -1,    55,    -1,    -1,    58,    17,    -1,    -1,
      -1,    -1,    22,    23,    24,    -1,    68,    69,    70,    29,
      72,    73,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
       8,    51,    52,    -1,    -1,    55,    -1,    -1,    58,    17,
      -1,    -1,    -1,    -1,    22,    23,    24,    -1,    68,    69,
      70,    29,    72,    73,     8,    -1,    -1,    35,    -1,    -1,
      -1,    -1,     8,    17,    -1,    -1,    -1,    -1,    22,    23,
      24,    17,    -1,    -1,    52,    29,    22,    23,    24,    -1,
      58,    35,    -1,    29,    -1,    -1,    64,    -1,    -1,    35,
      -1,    -1,    70,     8,    72,    73,    74,    -1,    52,    -1,
      -1,    -1,    17,    -1,    58,    -1,    52,    22,    23,    24,
      -1,    -1,    58,    -1,    29,    -1,    70,    -1,    72,    73,
      35,    -1,    -1,    -1,    70,     8,    72,    73,    -1,    -1,
      -1,    -1,    -1,     8,    17,    -1,    -1,    52,    -1,    22,
      23,    24,    17,    58,    -1,    -1,    29,    22,    23,    24,
      -1,    -1,    35,    -1,    29,    70,    -1,    72,    73,    -1,
      35,    -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    17,    -1,    58,    -1,    52,    22,    23,
      24,    -1,    -1,    58,    -1,    29,    -1,    70,    -1,    72,
      73,    35,    -1,    -1,    -1,    70,     8,    72,    73,    -1,
      -1,    -1,    -1,    -1,     8,    17,    -1,    -1,    52,    -1,
      22,    23,    24,    17,    58,    -1,    -1,    29,    22,    23,
      24,    -1,    -1,    35,    -1,    29,    70,    -1,     8,    73,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,
      52,    -1,    22,    23,    24,    -1,    -1,    -1,    52,    29,
      -1,    -1,    -1,    -1,    58,    35,    -1,    -1,    70,    -1,
      72,    73,    -1,    -1,    -1,    -1,    70,    -1,    -1,    73,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    73,    33,    34,    35,    -1,    37,    38,
      39,    -1,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      -1,    37,    38,    39,    -1,    74,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      -1,    37,    38,    39,    -1,    71,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    33,    34,    35,    -1,    37,    38,    39,    -1,    65,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    33,    34,    35,    -1,    37,
      38,    39,    -1,    65,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    33,
      34,    35,    -1,    37,    38,    39,    -1,    65,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    33,    34,    -1,    -1,    37,    38,    39,    -1,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    33,    34,    -1,    -1,    37,
      38,    39,    -1,    -1,    42,    43,    44,    45,    -1,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    34,    -1,
      -1,    37,    38,    39,    -1,    -1,    42,    43,    44,    45,
      -1,    47,    48,    49,    50,    51,    52,    53,    54,    55
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    25,    76,    77,    24,    72,    73,   127,   128,     0,
      78,     3,    61,    21,    79,   152,    62,     3,    58,    62,
      80,    82,   127,    61,     1,     3,     6,     8,     9,    10,
      13,    15,    16,    17,    18,    19,    20,    22,    23,    27,
      28,    29,    30,    31,    32,    35,    48,    49,    51,    52,
      55,    58,    68,    69,    70,    86,    87,    88,    94,   104,
     106,   110,   111,   112,   113,   114,   115,   120,   124,   127,
     129,   130,   135,   136,   139,   142,   143,   144,   147,   150,
     151,   167,   171,    24,    72,    59,    80,    81,     3,    25,
      83,     3,   124,   126,   127,    17,    35,    52,    58,   127,
     129,   134,   138,   139,   140,   147,   126,   114,   120,    94,
     101,   102,   103,   171,   179,    58,   127,   145,   114,   124,
     105,   179,    66,   123,    70,   112,   171,   178,    66,   123,
     105,    58,    92,    93,   127,    58,    89,   125,   127,   170,
     113,   113,   113,   113,   113,   113,    35,    52,   112,   121,
     133,   139,   141,   147,   113,   113,    11,   112,   177,    61,
      58,    90,   170,     4,    33,    34,    35,    36,    37,    38,
      39,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    58,    62,    70,    65,
      58,   123,     1,   123,     5,    64,    74,    61,   175,    24,
      85,   199,    58,    35,    58,   132,   138,   139,   140,   141,
     147,   132,   132,    62,    66,   100,     5,    64,    61,    11,
     122,   127,   131,   132,   163,   164,   165,    58,    66,   148,
     100,    61,    24,    58,    67,   124,   157,   159,   161,   132,
      99,    52,    58,    67,   124,   156,   158,   159,   160,   169,
      66,    59,    93,   155,   132,    59,    89,   153,    64,    74,
     132,     8,   133,    59,    71,    71,    59,    90,    64,   132,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,    59,   121,   172,    58,   127,   112,   177,     1,    66,
      87,    96,   166,   167,   112,   116,   166,   168,   171,   171,
     112,    80,    59,    24,    84,     9,    17,    21,    31,    32,
      63,   184,   165,     8,   132,    59,   127,   168,    26,    26,
     179,   132,   122,   131,    74,   176,    59,   165,   168,   108,
     179,    62,    24,   159,    58,   162,    61,   175,    71,     7,
      12,    67,    95,    97,    58,   160,    52,   160,    61,   175,
       3,   183,    74,   132,    99,    61,   175,    61,   175,   171,
     125,    64,    35,    58,   132,   138,   139,   140,   147,   132,
     132,    61,   175,   171,    64,    11,    74,   176,    31,   121,
      71,    65,   168,    74,   176,    66,   112,   117,   118,   173,
     174,    61,    67,    61,   128,   185,    58,   146,   185,    24,
     185,   186,   185,    63,    59,    59,    67,   112,   112,    61,
     163,    58,   127,   137,   138,   139,   140,   141,   147,   149,
      59,    67,    14,   107,   109,   127,    59,   165,   161,    67,
     132,   172,    65,    98,   160,   183,   160,    59,   158,    67,
     124,   183,    67,    93,    59,    89,    59,   171,   132,    90,
      91,   154,   170,    59,   171,   176,   121,    59,    59,    59,
     177,    67,    59,   116,    65,    74,   176,    67,   166,     8,
      17,    22,    23,    24,    29,    35,    52,    64,    70,   128,
     187,   189,   190,   191,   127,   192,   200,   148,    58,     3,
     187,   187,   179,   165,    58,   149,    20,    96,    59,     5,
      64,    65,    74,   168,    59,    59,   183,    59,    61,   175,
     132,    59,    65,    71,   174,    66,   112,   119,   117,   118,
      35,    58,   188,   189,   191,    58,    66,    70,    66,     8,
     187,     3,    49,    58,   127,   197,   198,     3,    71,    64,
      11,   187,    59,    74,    61,   180,   200,    61,    61,    61,
      59,   165,   105,   149,   112,   112,   183,   183,    91,    59,
     177,    67,   116,   187,   190,   180,    24,   127,   128,   182,
     187,   194,   202,   187,   127,   181,   193,   201,   187,     3,
     197,    61,    71,   187,   198,   187,   183,   127,   192,    59,
      59,   100,    65,    65,    71,   174,    59,    59,    58,    67,
      61,    71,   187,    67,    61,    48,   187,    61,   183,    58,
      58,   187,   195,   196,   149,    67,   195,   180,   194,   187,
     183,   193,   197,   180,   180,    59,    59,    59,    59,   195,
     195
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    75,    76,    77,    77,    78,    78,    79,    79,    79,
      80,    81,    81,    82,    82,    82,    83,    84,    84,    85,
      86,    86,    86,    86,    86,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    88,    89,    89,    89,    90,
      90,    91,    91,    91,    92,    93,    94,    94,    94,    94,
      94,    94,    95,    95,    95,    95,    96,    98,    97,    99,
      99,   100,   101,   101,   102,   102,   102,   103,   104,   105,
     105,   106,   107,   108,   108,   109,   109,   110,   111,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   114,
     114,   114,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   116,   117,   118,   118,   119,   119,
     120,   120,   121,   121,   122,   123,   124,   125,   126,   126,
     127,   127,   127,   128,   128,   129,   130,   131,   131,   132,
     132,   132,   132,   132,   132,   133,   133,   133,   133,   134,
     134,   134,   134,   134,   135,   135,   136,   137,   137,   137,
     137,   137,   138,   138,   139,   139,   139,   139,   139,   139,
     139,   140,   141,   142,   142,   143,   143,   144,   145,   145,
     146,   146,   147,   148,   148,   149,   149,   149,   150,   151,
     151,   152,   152,   153,   153,   154,   154,   155,   155,   156,
     156,   157,   157,   158,   158,   158,   158,   158,   158,   159,
     159,   160,   161,   161,   161,   162,   163,   163,   163,   163,
     164,   164,   165,   165,   166,   166,   166,   166,   166,   167,
     167,   167,   167,   167,   167,   167,   167,   167,   167,   167,
     167,   167,   168,   168,   169,   169,   170,   170,   171,   171,
     172,   172,   173,   173,   173,   173,   174,   174,   175,   175,
     176,   176,   177,   177,   178,   178,   179,   179,   180,   180,
     181,   181,   182,   182,   183,   183,   184,   184,   184,   184,
     184,   184,   185,   186,   187,   187,   187,   188,   188,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     190,   191,   192,   192,   193,   194,   194,   195,   195,   196,
     196,   197,   197,   197,   198,   198,   199,   199,   200,   200,
     201,   201,   202,   202
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     3,     0,     3,     2,     5,     3,
       3,     1,     3,     1,     2,     2,     4,     0,     1,     3,
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
       1,     5,     5,     1,     0,     3,     1,     4,     1,     4,
       1,     3,     1,     1,     1,     1,     1,     1,     0,     1,
       1,     1,     1,     4,     4,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     2,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     4,     2,     3,     5,     1,
       1,     2,     3,     5,     3,     5,     3,     3,     5,     8,
       5,     8,     5,     0,     3,     0,     1,     3,     1,     4,
       2,     0,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     3,     2,     4,     3,     5,     5,     1,
       3,     1,     2,     1,     3,     4,     1,     2,     2,     1,
       1,     3,     0,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     2,     2,     2,     2,
       2,     2,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     1,     3,     3,     0,     2,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     4,     4,     5,     6,
       4,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     5,     4,     4,     2,     2,     4,     3,
       3,     5,     3,     4,     3,     5,     1,     0,     1,     3,
       1,     1,     2,     1,     1,     5,     0,     2,     1,     3,
       1,     3,     1,     3
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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
        case 3:
#line 117 "mongo.y" /* yacc.c:1646  */
    {
		yyerror("package statement must be first");
		exit(1);
	}
#line 2018 "mongo.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 163 "mongo.y" /* yacc.c:1646  */
    {
		yyerror("empty top-level declaration");
		(yyval) = 0;
	}
#line 2027 "mongo.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 170 "mongo.y" /* yacc.c:1646  */
    {
		yyerror("non-declaration statement outside function body");
		(yyval) = 0;
	}
#line 2036 "mongo.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 175 "mongo.y" /* yacc.c:1646  */
    {
		(yyval) = 0;
	}
#line 2044 "mongo.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 216 "mongo.y" /* yacc.c:1646  */
    {
		// the name becomes visible right here, not at the end
		// of the declaration.
	}
#line 2053 "mongo.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 249 "mongo.y" /* yacc.c:1646  */
    {
		// If the last token read by the lexer was consumed
		// as part of the case, clear it (parser has cleared yychar).
		// If the last token read by the lexer was the lookahead
		// leave it alone (parser has it cached in yychar).
		// This is so that the stmt_list action doesn't look at
		// the case tokens if the stmt_list is empty.
		// yylast = yychar;
	}
#line 2067 "mongo.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 259 "mongo.y" /* yacc.c:1646  */
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
	}
#line 2087 "mongo.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 377 "mongo.y" /* yacc.c:1646  */
    {
		yyerror("the bitwise complement operator is ^");
	}
#line 2095 "mongo.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 417 "mongo.y" /* yacc.c:1646  */
    {
		// composite expression.
		// make node early so we get the right line number.
	}
#line 2104 "mongo.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 500 "mongo.y" /* yacc.c:1646  */
    {
		yyerror("final argument in variadic function missing type");
	}
#line 2112 "mongo.tab.c" /* yacc.c:1646  */
    break;


#line 2116 "mongo.tab.c" /* yacc.c:1646  */
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
#line 920 "mongo.y" /* yacc.c:1906  */

