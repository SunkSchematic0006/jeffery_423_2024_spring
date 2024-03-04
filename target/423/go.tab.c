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
int yylex();
int yyerror();
#define YYDEBUG 1

#line 74 "go.tab.c" /* yacc.c:339  */

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
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GO_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 176 "go.tab.c" /* yacc.c:358  */

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
#define YYLAST   1978

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  102
/* YYNRULES -- Number of rules.  */
#define YYNRULES  275
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  505

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
       2,     2,     2,    67,     2,     2,     2,    54,    55,     2,
      58,    59,    52,    48,    73,    49,    62,    53,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    64,    61,
       2,    63,     2,    71,    72,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    69,     2,    70,    51,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    65,    50,    66,    68,     2,     2,     2,
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
       0,   108,   108,   111,   116,   119,   120,   123,   124,   125,
     129,   130,   134,   135,   139,   140,   141,   145,   148,   149,
     156,   160,   161,   162,   167,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   187,   191,   192,   193,   197,
     198,   202,   203,   204,   208,   216,   220,   221,   222,   223,
     224,   225,   229,   230,   231,   232,   236,   242,   241,   268,
     269,   273,   278,   279,   283,   284,   285,   289,   293,   298,
     299,   304,   311,   315,   316,   319,   320,   324,   330,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   359,
     363,   364,   365,   366,   367,   368,   369,   373,   374,   382,
     383,   384,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   410,   414,   415,   419,   420,   424,
     425,   429,   430,   433,   441,   445,   448,   449,   453,   454,
     455,   459,   460,   464,   468,   481,   485,   489,   490,   491,
     492,   493,   494,   498,   499,   500,   501,   505,   506,   507,
     508,   509,   513,   514,   517,   521,   522,   523,   524,   525,
     529,   530,   534,   535,   536,   537,   538,   539,   540,   544,
     548,   552,   553,   557,   558,   566,   570,   571,   575,   578,
     579,   583,   584,   585,   589,   593,   594,   602,   603,   607,
     608,   612,   613,   617,   618,   622,   623,   627,   628,   632,
     633,   634,   635,   636,   637,   641,   642,   646,   650,   651,
     652,   656,   663,   664,   665,   666,   670,   671,   674,   675,
     681,   682,   683,   684,   685,   689,   690,   691,   692,   693,
     694,   696,   697,   698,   699,   700,   701,   702,   706,   707,
     711,   712,   716,   717,   721,   722,   726,   727,   734,   735,
     736,   737,   740,   741,   747,   748,   751,   752,   755,   756,
     759,   760,   763,   764,   767,   768
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
  "PreferToRightParen", "';'", "'.'", "'='", "':'", "'{'", "'}'", "'!'",
  "'~'", "'['", "']'", "'?'", "'@'", "','", "$accept", "file", "package",
  "imports", "import", "import_stmt", "import_stmt_list", "import_here",
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
     295,   296,   297,   298,   299,   300,   301,   302,    43,    45,
     124,    94,    42,    47,    37,    38,   303,   304,    40,    41,
     305,    59,    46,    61,    58,   123,   125,    33,   126,    91,
      93,    63,    64,    44
};
# endif

#define YYPACT_NINF -388

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-388)))

#define YYTABLE_NINF -255

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      19,    51,    61,  -388,  -388,  -388,    75,     2,  -388,  -388,
      59,    41,  -388,    82,    69,   823,    26,  -388,   112,   134,
    -388,   114,   148,  -388,  -388,  -388,    51,  1658,  -388,    51,
     399,  -388,  1411,   118,   399,    51,  1411,   113,   127,  1411,
     132,   143,  1411,   198,   201,  1411,  1411,  1411,  1411,  1411,
    1411,  1464,  1411,  1411,   610,   156,  -388,   220,  -388,  -388,
    -388,  -388,  -388,   959,  -388,  -388,  -388,    24,  -388,   162,
    -388,   164,   172,   181,   182,  -388,  -388,  -388,   190,    54,
    -388,  -388,    44,  -388,  -388,  -388,  -388,   202,  -388,   233,
    -388,  -388,  -388,  -388,  -388,   218,  1662,  1662,  1662,  -388,
     223,  -388,  -388,  -388,  -388,  -388,  -388,   117,    24,  -388,
    -388,   222,  -388,    72,   227,  1602,   232,   231,   117,  -388,
     222,   236,   196,  1662,  1878,   229,  -388,  -388,   179,   235,
     212,  1662,  -388,  -388,   326,  -388,  -388,  -388,   529,  -388,
    -388,  -388,  -388,  -388,  -388,  1517,  1464,  1878,   242,  -388,
      30,  -388,    40,  -388,  -388,   234,  1878,   239,  -388,   334,
    -388,  1570,  1411,  1411,  1411,  1411,  -388,  1411,  1411,  1411,
    -388,  1411,  1411,  1411,  1411,  1411,  1411,  1411,  1411,  1411,
    1411,  1411,  1411,  1411,  1411,  1093,   338,  1411,   910,  1411,
    1146,  -388,  1037,  1411,  1411,  1411,   144,   244,   281,  1602,
     318,  1662,  -388,  -388,  -388,  -388,  -388,  -388,  -388,   268,
      51,  1037,  -388,  1199,  1252,  1411,  1662,  -388,  1602,  -388,
    -388,  -388,   256,   274,  1602,  1037,  -388,  -388,  1411,   101,
     312,  -388,   279,   278,  -388,  -388,   273,    77,    33,    29,
    -388,  -388,   284,  -388,  -388,   351,  1592,  -388,  -388,  -388,
     294,  -388,  -388,  -388,   299,  1411,    51,   305,  1684,  -388,
    -388,  1662,  1662,  -388,   308,  1411,   314,  1878,  1923,  -388,
    1901,   265,   265,   265,   265,  -388,   265,   265,   456,  -388,
     409,   409,   409,   409,  -388,  -388,  -388,  -388,  -388,  -388,
      47,  1305,  -388,   758,   315,  -388,  1037,  -388,  -388,  -388,
    -388,  1777,  1146,  1809,  -388,  -388,   310,   322,  -388,    -2,
     229,   229,  1878,  -388,  -388,  -388,   330,   319,  1662,   333,
    -388,  -388,    13,  1411,  1411,   339,  -388,  -388,  -388,  1602,
    -388,  1715,   336,    50,   385,  -388,    51,   341,   353,  1602,
    -388,   362,   352,  1662,  1464,   355,  -388,  -388,  -388,   312,
     351,   312,   372,   208,   369,  -388,  -388,    51,   351,    80,
      51,   377,    51,   379,   229,  -388,  1411,  1737,  1662,  -388,
      66,   153,   216,   224,  -388,  -388,    51,   380,   229,  1411,
     378,  1464,   394,   395,   400,  -388,  1411,   116,  -388,   401,
     392,  1358,  1146,  -388,  -388,   910,  -388,  -388,  1715,  -388,
    -388,  1878,  1878,  1411,  -388,  1602,   418,  -388,  -388,  -388,
    -388,  -388,  -388,  -388,  1715,  -388,    31,  -388,  -388,  -388,
    -388,   408,  -388,  -388,  -388,    97,  -388,   910,   421,  -388,
     422,   351,  -388,  -388,  -388,  -388,  -388,  -388,  -388,  -388,
    -388,   229,   423,  -388,  -388,   424,  1570,  -388,   229,   427,
    -388,  -388,  -388,  -388,   129,  -388,  -388,  -388,  1146,  1878,
    -388,  -388,  -388,  -388,  -388,   432,  1602,  -388,  1411,  -388,
    1715,  1411,  1411,  -388,  1464,   431,   351,   351,  -388,   228,
      51,   437,   314,  -388,  1411,  -388,   417,  -388,   438,   222,
    -388,  1832,  1855,  -388,  -388,  -388,  -388,   442,  -388,  1715,
    -388,  -388,  -388,  -388,  -388
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     0,     5,   138,   140,     0,     0,   139,     1,
     197,     0,     4,     0,     0,     0,     0,    14,     0,     0,
       7,    11,     0,     6,    24,   112,   136,     0,    35,   136,
       0,   241,   272,     0,     0,     0,   272,     0,     0,   270,
       0,     0,   272,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   268,     0,    21,     0,   235,   236,
     239,   237,   238,    46,    79,   120,   129,   100,   144,   143,
     113,     0,     0,     0,   163,   177,   178,    22,   194,     0,
     123,    23,     0,   141,   142,     9,    12,   264,    16,     0,
      10,    15,   137,   242,   134,     0,     0,     0,     0,   143,
     170,   174,   160,   158,   159,   157,   243,   245,     0,   273,
      66,     0,    68,     0,    65,   228,     0,   189,   244,   246,
       0,    69,     0,     0,   254,   271,   247,    59,     0,     0,
       0,     0,    32,    44,     0,    25,   252,   135,     0,   108,
     103,   104,   107,   101,   102,     0,     0,   131,     0,   132,
     155,   153,   154,   105,   106,     0,   269,     0,   198,     0,
      28,     0,     0,     0,     0,     0,    51,     0,     0,     0,
      50,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   268,     0,     0,
     262,   196,     0,     0,     0,     0,   265,     0,    18,   228,
       0,     0,   175,   151,   149,   150,   147,   148,   179,     0,
       0,     0,    67,     0,     0,   272,   145,   222,   143,   225,
     133,   226,   266,     0,   228,     0,   185,    73,   272,   138,
       0,   184,     0,   264,   219,   207,     0,     0,     0,     0,
     182,   250,   264,   205,   217,   274,     0,    59,    34,   203,
     264,    45,    27,   199,   264,     0,     0,    36,     0,   156,
     130,     0,     0,    31,   264,     0,     0,    47,    81,    96,
      99,    82,    86,    87,    85,    97,    84,    83,    80,    98,
      88,    89,    90,    91,    92,    93,    94,    95,   109,   256,
     266,     0,   114,   269,     0,   234,     0,   232,   231,   240,
     233,   266,   262,   125,   258,   259,   266,     0,   248,     0,
      49,    48,   255,    13,     8,    19,     0,     0,     0,     0,
     161,   171,     0,     0,     0,     0,   146,   223,   224,   267,
     229,   191,     0,     0,    75,    70,     0,   215,     0,   228,
     218,   265,     0,     0,     0,     0,    78,    57,    60,     0,
     274,     0,     0,   265,     0,   275,   210,     0,   274,     0,
     265,     0,   265,     0,    38,   253,     0,     0,     0,   180,
     151,   149,   150,   148,   173,   172,   265,     0,    40,     0,
     266,   267,     0,     0,     0,   117,   268,     0,   267,     0,
       0,     0,   267,   263,   122,     0,   195,    17,   191,   152,
      61,    63,    62,   272,   227,   228,   143,   192,   169,   167,
     168,   165,   166,   188,   191,   190,     0,    74,    71,   216,
     220,     0,   208,   183,   176,     0,    55,     0,     0,   212,
       0,   274,   206,   181,   251,   209,    77,   204,    33,   200,
      26,    37,     0,    41,   201,   264,    43,    29,    39,     0,
     257,   110,   116,   115,     0,    56,   121,   126,   262,   127,
     124,   260,   261,   249,    64,     0,   228,   186,   272,    76,
     191,     0,     0,    52,     0,    58,   274,   274,   211,   152,
     265,     0,    42,   111,   268,   118,     0,   193,     0,     0,
     221,     0,     0,   214,   213,   202,    30,     0,   128,   191,
      72,    54,    53,   119,   187
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -388,  -388,  -388,  -388,  -388,    17,  -388,  -388,  -388,  -388,
    -388,   498,  -388,  -124,   -34,    34,  -388,  -125,   -21,  -388,
      99,  -388,  -388,   272,  -113,  -388,  -388,  -388,  -388,   -38,
    -388,  -388,  -388,  -388,  -388,  -388,   565,    20,    60,  -388,
     128,   130,  -388,   139,   -50,   303,    10,   267,   495,    -1,
    -388,   317,  -388,   307,   451,   381,  -388,  -388,  -388,  -388,
     -25,     3,   -24,   -33,  -388,  -388,  -388,  -388,   226,  -388,
    -387,  -388,  -388,  -388,  -388,  -388,  -388,  -388,  -388,   173,
    -102,  -192,   187,  -388,   200,  -388,  -191,  -166,   515,  -187,
    -388,   -51,   -13,   188,  -388,  -286,  -202,  -230,  -174,  -388,
     -23,  -321
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    10,    14,    20,    87,    21,    90,   316,
      55,   297,    57,   135,   443,   444,   131,   132,    58,   347,
     298,   348,   427,   237,   212,   110,   111,   112,    59,   120,
      60,   417,   334,   418,    61,    62,    63,    64,    65,    66,
     304,   305,   460,    67,   289,   217,    68,   136,    93,    99,
       8,    70,    71,   219,   220,   149,   101,    72,    73,   407,
     203,    74,   205,   206,    75,    76,    77,   117,    78,   226,
     413,    79,    80,    15,   254,   445,   250,   242,   233,   243,
     244,   245,   235,   340,   221,   222,   223,   308,   300,   309,
     246,   138,    82,   290,   306,   307,   197,   330,   157,   126,
     121,   356
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,   148,   102,   104,   129,   249,   161,   227,   317,   114,
     253,   109,    22,   294,    69,   109,   390,    22,   151,   113,
     234,   109,   299,   160,   322,    94,   125,   467,    94,   429,
     103,   342,   116,   332,    94,    86,    92,   435,   333,    92,
     354,  -194,   133,   137,     1,   119,   350,   352,   361,   193,
      83,   468,   363,   337,   150,   191,   137,   337,   380,   395,
     382,     9,   377,    12,   396,   139,   140,   141,   142,   143,
     144,   389,   153,   154,   395,     4,   393,   213,    11,   400,
      13,   351,   185,   490,   344,    17,   186,   344,  -163,   345,
     107,   349,   345,   187,   118,  -164,   296,    84,  -162,   204,
     204,   204,   471,    16,  -215,  -194,     4,   194,   161,   387,
     478,   395,   504,   151,   218,    17,   415,   195,   204,   192,
     381,    94,     5,     6,  -160,   264,   204,    94,   338,   133,
      23,  -160,   232,   137,   204,   214,     4,    88,   241,    89,
      18,   204,     4,   346,    19,   195,   436,    17,   421,   150,
     449,    91,   151,     5,     6,   493,   494,   428,   137,   430,
     472,   473,  -215,   336,   204,   139,   143,  -215,     4,   108,
     474,    85,   486,   108,    19,  -120,   115,   395,   122,  -120,
     310,   311,   455,     5,     6,   292,  -120,    69,   150,     5,
       6,    69,   325,   484,   109,    22,   123,   127,   218,   485,
     310,   311,   204,   229,   204,   335,    19,   109,   128,   321,
      69,  -158,   454,   313,   465,     5,     6,   158,  -158,   204,
     229,   204,     4,   218,    69,     4,  -134,   204,   188,   463,
     189,   238,   229,   370,   372,   437,     4,   239,   439,   234,
     475,   384,   364,   481,     4,   240,   190,  -164,  -162,   204,
       5,     6,   378,   105,   230,   137,   130,   198,   151,   134,
     238,   371,   231,   196,   204,   204,   239,     5,     6,     5,
       6,   248,     5,     6,  -159,   488,   199,   152,   159,     5,
       6,  -159,  -157,     5,     6,   210,  -161,   211,   215,  -157,
     224,     5,     6,  -161,   150,    69,   225,   228,   411,   164,
     247,   260,   195,   314,   261,   315,   408,   410,   172,   262,
     497,   151,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   204,   207,   207,   207,   446,   318,   320,   218,   329,
     406,   450,   204,   331,   409,   419,   337,   339,   218,   341,
      94,   207,   204,   343,   100,   353,   204,   150,   151,   207,
       4,   232,    94,   441,   355,   360,    94,   207,     4,   133,
     362,   137,     4,   241,   207,   411,   448,   434,   366,   376,
     204,   204,   152,   408,   410,   137,   500,   379,   398,   386,
     464,   411,   109,   392,   150,   252,   229,   207,   394,   408,
     410,   397,   399,   263,    69,   414,   291,     5,     6,   416,
     403,   409,    25,   336,   218,     5,     6,    27,   204,     5,
       6,   152,   420,   100,   100,   100,    95,   409,   423,   426,
     230,    37,    38,     4,   450,   207,    69,   207,    41,   446,
     489,   431,   100,     5,     6,   433,   438,   411,   440,   447,
     100,   151,   207,   164,   207,   408,   410,   109,   100,   204,
     207,   388,   172,   451,   452,   100,   176,    51,   457,   453,
     456,   181,   182,   183,   184,   218,   411,   470,    54,   204,
       5,     6,   207,   409,   408,   410,   466,   150,   100,   137,
     476,   477,   479,   498,   373,   480,   483,   207,   207,   163,
     164,   487,   395,   167,   168,   169,   496,   499,   171,   172,
     173,   174,   409,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   503,    56,   495,   469,   100,   152,   100,   359,
     461,   327,   462,   365,   106,   328,   432,   259,   422,   404,
      81,     0,   425,   100,     0,   100,     0,    27,     0,     0,
       0,   100,     0,     0,   207,     0,    95,   202,   208,   209,
       0,    37,    38,     4,     0,   207,     0,   412,    41,     0,
       0,     0,     0,   100,   200,   207,     0,     0,     0,   207,
     152,     0,     0,     0,   236,   100,     0,     0,   100,   100,
       0,    97,   251,     0,     0,     0,     0,   201,     0,   257,
       0,     0,   255,   207,   207,     0,     0,     0,    54,     0,
       5,     6,   256,     0,   124,     0,     0,   152,     0,     0,
       0,     0,   266,    25,     0,     0,   147,     0,    27,   156,
       0,   155,     0,     0,   412,     0,     0,    95,     0,     0,
       0,   207,    37,    38,     4,   100,     0,     0,     0,    41,
     412,     0,     0,     0,     0,    45,   100,     0,   100,     0,
       0,     0,   319,     0,     0,     0,   100,     0,    46,    47,
     100,    48,    49,     0,     0,    50,     0,   326,    51,     0,
       0,     0,   207,     0,     0,     0,     0,    52,    53,    54,
       0,     5,     6,     0,   100,   100,     0,     0,     0,     0,
       0,     0,   207,     0,     0,     0,   412,   358,     0,     0,
     152,     0,     0,     0,     0,     0,     0,     0,     0,   369,
       0,     0,   374,   375,     0,   100,     0,     0,     0,     0,
       0,     0,   100,     0,     0,   412,     0,   267,   268,   269,
     270,   100,   271,   272,   273,     0,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     147,     0,   293,     0,   301,   303,     0,     0,   124,   124,
     312,     0,     0,   100,     0,     0,     0,     0,     0,   369,
       0,     0,     0,     0,     0,     0,     0,     0,   124,   124,
       0,     0,     0,   100,     0,     0,     0,   100,     0,     0,
       0,   163,   164,   165,   424,   167,   168,   169,     0,     0,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,     0,     0,   100,     0,   202,   442,
     124,     0,     0,    -2,    24,     0,    25,     0,   385,    26,
     124,    27,    28,    29,     0,     0,    30,     0,    31,    32,
      33,    34,    35,    36,     0,    37,    38,     4,     0,     0,
      39,    40,    41,    42,    43,    44,   147,     0,    45,     0,
       0,     0,     0,     0,     0,     0,     0,   303,     0,     0,
       0,    46,    47,     0,    48,    49,     0,     0,    50,     0,
       0,    51,     0,     0,   -20,     0,     0,     0,   401,   402,
      52,    53,    54,     0,     5,     6,     0,   482,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   147,
       0,   295,     0,    25,     0,     0,    26,  -230,    27,    28,
      29,     0,  -230,    30,     0,    31,    32,    95,    34,    35,
      36,   124,    37,    38,     4,     0,     0,    39,    40,    41,
      42,    43,    44,     0,   124,    45,   147,     0,     0,     0,
       0,   156,     0,     0,     0,     0,   459,   303,    46,    47,
       0,    48,    49,   162,  -254,    50,     0,     0,    51,     0,
       0,  -230,     0,     0,     0,   296,  -230,    52,    53,    54,
       0,     5,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   163,   164,   165,   166,   167,   168,   169,     0,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,     0,     0,     0,     0,     0,
       0,     0,  -254,   303,     0,     0,     0,     0,     0,     0,
       0,     0,  -254,     0,     0,     0,   491,   492,   295,   147,
      25,     0,     0,    26,     0,    27,    28,    29,     0,   156,
      30,     0,    31,    32,    95,    34,    35,    36,     0,    37,
      38,     4,     0,     0,    39,    40,    41,    42,    43,    44,
       0,     0,    45,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,    47,     0,    48,    49,
       0,     0,    50,     0,     0,    51,    25,     0,  -230,     0,
       0,    27,   296,  -230,    52,    53,    54,     0,     5,     6,
      95,     0,     0,     0,     0,    37,    38,     4,     0,     0,
       0,     0,    41,     0,     0,     0,     0,     0,   145,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    46,    47,     0,    48,   146,     0,     0,    50,    25,
       0,    51,   288,     0,    27,     0,     0,     0,     0,     0,
      52,    53,    54,    95,     5,     6,     0,     0,    37,    38,
       4,     0,     0,     0,     0,    41,     0,     0,     0,     0,
       0,    45,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    46,    47,     0,    48,    49,     0,
       0,    50,    25,     0,    51,     0,     0,    27,     0,     0,
       0,   302,     0,    52,    53,    54,    95,     5,     6,     0,
       0,    37,    38,     4,     0,   323,     0,     0,    41,     0,
       0,     0,     0,     0,    45,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    46,    47,     0,
      48,    49,     0,     0,    50,    25,     0,    51,     0,     0,
      27,     0,     0,     0,     0,     0,    52,    53,    54,    95,
       5,     6,     0,     0,    37,    38,     4,     0,   324,     0,
       0,    41,     0,     0,     0,     0,     0,    45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      46,    47,     0,    48,    49,     0,     0,    50,    25,     0,
      51,     0,     0,    27,     0,     0,     0,     0,     0,    52,
      53,    54,    95,     5,     6,     0,     0,    37,    38,     4,
       0,     0,     0,     0,    41,     0,   383,     0,     0,     0,
     145,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    46,    47,     0,    48,   146,     0,     0,
      50,    25,     0,    51,     0,     0,    27,     0,     0,     0,
       0,     0,    52,    53,    54,    95,     5,     6,     0,     0,
      37,    38,     4,     0,     0,     0,     0,    41,     0,     0,
       0,     0,     0,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    46,    47,     0,    48,
      49,     0,     0,    50,    25,     0,    51,     0,     0,    27,
       0,     0,     0,   458,     0,    52,    53,    54,    95,     5,
       6,     0,     0,    37,    38,     4,     0,     0,     0,     0,
      41,     0,     0,     0,     0,     0,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    46,
      47,     0,    48,    49,     0,     0,    50,    25,     0,    51,
       0,     0,    27,     0,     0,     0,     0,     0,    52,    53,
      54,    95,     5,     6,     0,     0,    37,    38,     4,     0,
       0,     0,     0,    41,     0,     0,     0,     0,     0,   145,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    46,    47,     0,    48,   146,     0,     0,    50,
      25,     0,    51,     0,     0,   258,     0,     0,     0,     0,
       0,    52,    53,    54,    95,     5,     6,     0,     0,    37,
      38,     4,     0,     0,     0,     0,    41,     0,     0,     0,
       0,     0,    45,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,    47,     0,    48,    49,
       0,     0,    50,     0,     0,    51,     0,     0,    27,     0,
       0,     0,     0,     0,    52,    53,    54,    95,     5,     6,
       0,     0,    37,    38,     4,     0,     0,     0,     0,    41,
      27,     0,     0,     0,     0,   200,     0,     0,     0,    95,
      27,     0,     0,   216,    37,    38,     4,     0,     0,    95,
       0,    41,    97,     0,    37,    38,     4,   200,   201,     0,
       0,    41,     0,   265,     0,     0,     0,   200,     0,    54,
       0,     5,     6,   256,    97,     0,     0,     0,     0,     0,
     201,     0,     0,     0,    97,     0,     0,     0,     0,     0,
     201,    54,     0,     5,     6,   357,    27,     0,     0,     0,
      27,    54,     0,     5,     6,    95,     0,     0,     0,    95,
      37,    38,     4,     0,    37,    38,     4,    41,     0,     0,
       0,    41,    27,    96,     0,     0,     0,   200,     0,     0,
       0,    95,     0,     0,     0,     0,    37,    38,     4,     0,
      97,     0,     0,    41,    97,     0,    98,     0,     0,   367,
     201,     0,     0,    27,     0,     0,     0,    54,     0,     5,
       6,    54,    95,     5,     6,     0,    97,    37,    38,     4,
       0,     0,   368,     0,    41,   258,     0,     0,     0,     0,
     200,     0,     0,    54,    95,     5,     6,     0,     0,    37,
      38,     4,     0,     0,     0,     0,    41,    97,     0,     0,
       0,     0,   200,   405,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    54,     0,     5,     6,     0,    97,
       0,     0,     0,     0,     0,   201,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    54,     0,     5,     6,
     163,   164,   165,     0,   167,   168,   169,     0,     0,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   163,   164,   165,     0,   167,   168,   169,     0,
     388,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   163,   164,   165,     0,   167,
     168,   169,     0,   391,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   163,   164,
     165,     0,   167,   168,   169,     0,   501,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   163,   164,   165,     0,   167,   168,   169,     0,   502,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   163,   164,     0,     0,   167,   168,
     169,     0,     0,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   164,     0,     0,
     167,   168,   169,     0,     0,   171,   172,   173,   174,     0,
     176,   177,   178,   179,   180,   181,   182,   183,   184
};

static const yytype_int16 yycheck[] =
{
       1,    51,    27,    27,    42,   130,    57,   120,   199,    32,
     134,    32,    13,   187,    15,    36,   302,    18,    51,    32,
     122,    42,   188,    57,   211,    26,    39,   414,    29,   350,
      27,   233,    33,   224,    35,    18,    26,   358,   225,    29,
     242,     1,    43,    44,    25,    35,   238,   239,   250,     5,
      24,    20,   254,    24,    51,     1,    57,    24,    11,    61,
     290,     0,   264,    61,    66,    45,    46,    47,    48,    49,
      50,   301,    52,    53,    61,    24,   306,     5,     3,    66,
      21,    52,    58,   470,     7,     3,    62,     7,    58,    12,
      30,    58,    12,    69,    34,    65,    65,    71,    58,    96,
      97,    98,     5,    62,     3,    65,    24,    63,   159,   296,
     431,    61,   499,   146,   115,     3,    66,    73,   115,    65,
      73,   122,    71,    72,    58,   159,   123,   128,   230,   130,
      61,    65,   122,   134,   131,    63,    24,     3,   128,    25,
      58,   138,    24,    66,    62,    73,    66,     3,   339,   146,
     380,     3,   185,    71,    72,   476,   477,   349,   159,   351,
      63,    64,    61,    62,   161,   145,   146,    66,    24,    30,
      73,    59,   458,    34,    62,    58,    58,    61,    65,    62,
     193,   194,    66,    71,    72,   186,    69,   188,   185,    71,
      72,   192,   215,    64,   215,   196,    69,    65,   199,    70,
     213,   214,   199,    24,   201,   228,    62,   228,    65,   210,
     211,    58,   386,   196,   405,    71,    72,    61,    65,   216,
      24,   218,    24,   224,   225,    24,    64,   224,    64,   395,
      58,    52,    24,   258,   258,   360,    24,    58,   362,   341,
     427,   291,   255,   445,    24,    66,    65,    65,    58,   246,
      71,    72,   265,    27,    58,   256,    58,    24,   291,    58,
      52,   258,    66,    61,   261,   262,    58,    71,    72,    71,
      72,    59,    71,    72,    58,   466,    58,    51,    58,    71,
      72,    65,    58,    71,    72,    62,    58,    65,    61,    65,
      58,    71,    72,    65,   291,   296,    65,    61,   331,    34,
      65,    59,    73,    59,    70,    24,   331,   331,    43,    70,
     484,   344,    47,    48,    49,    50,    51,    52,    53,    54,
      55,   318,    96,    97,    98,   376,     8,    59,   329,    73,
     331,   381,   329,    59,   331,   336,    24,    58,   339,    61,
     341,   115,   339,    70,    27,    61,   343,   344,   381,   123,
      24,   341,   353,   366,     3,    61,   357,   131,    24,   360,
      61,   362,    24,   353,   138,   398,   379,   357,    63,    61,
     367,   368,   146,   398,   398,   376,   489,    63,    59,    64,
     403,   414,   403,    73,   381,    59,    24,   161,    66,   414,
     414,    61,    59,    59,   395,    59,    58,    71,    72,    14,
      61,   398,     3,    62,   405,    71,    72,     8,   405,    71,
      72,   185,    59,    96,    97,    98,    17,   414,    66,    64,
      58,    22,    23,    24,   474,   199,   427,   201,    29,   480,
     468,    59,   115,    71,    72,    66,    59,   470,    59,    59,
     123,   474,   216,    34,   218,   470,   470,   468,   131,   446,
     224,    73,    43,    59,    59,   138,    47,    58,    66,    59,
      59,    52,    53,    54,    55,   466,   499,    59,    69,   466,
      71,    72,   246,   470,   499,   499,    58,   474,   161,   480,
      59,    59,    59,    66,   258,    61,    59,   261,   262,    33,
      34,    59,    61,    37,    38,    39,    59,    59,    42,    43,
      44,    45,   499,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    70,    15,   480,   416,   199,   291,   201,   247,
     392,   218,   392,   256,    29,   218,   353,   146,   341,   329,
      15,    -1,   344,   216,    -1,   218,    -1,     8,    -1,    -1,
      -1,   224,    -1,    -1,   318,    -1,    17,    96,    97,    98,
      -1,    22,    23,    24,    -1,   329,    -1,   331,    29,    -1,
      -1,    -1,    -1,   246,    35,   339,    -1,    -1,    -1,   343,
     344,    -1,    -1,    -1,   123,   258,    -1,    -1,   261,   262,
      -1,    52,   131,    -1,    -1,    -1,    -1,    58,    -1,   138,
      -1,    -1,    63,   367,   368,    -1,    -1,    -1,    69,    -1,
      71,    72,    73,    -1,    39,    -1,    -1,   381,    -1,    -1,
      -1,    -1,   161,     3,    -1,    -1,    51,    -1,     8,    54,
      -1,    11,    -1,    -1,   398,    -1,    -1,    17,    -1,    -1,
      -1,   405,    22,    23,    24,   318,    -1,    -1,    -1,    29,
     414,    -1,    -1,    -1,    -1,    35,   329,    -1,   331,    -1,
      -1,    -1,   201,    -1,    -1,    -1,   339,    -1,    48,    49,
     343,    51,    52,    -1,    -1,    55,    -1,   216,    58,    -1,
      -1,    -1,   446,    -1,    -1,    -1,    -1,    67,    68,    69,
      -1,    71,    72,    -1,   367,   368,    -1,    -1,    -1,    -1,
      -1,    -1,   466,    -1,    -1,    -1,   470,   246,    -1,    -1,
     474,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   258,
      -1,    -1,   261,   262,    -1,   398,    -1,    -1,    -1,    -1,
      -1,    -1,   405,    -1,    -1,   499,    -1,   162,   163,   164,
     165,   414,   167,   168,   169,    -1,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    -1,   187,    -1,   189,   190,    -1,    -1,   193,   194,
     195,    -1,    -1,   446,    -1,    -1,    -1,    -1,    -1,   318,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   213,   214,
      -1,    -1,    -1,   466,    -1,    -1,    -1,   470,    -1,    -1,
      -1,    33,    34,    35,   343,    37,    38,    39,    -1,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,   499,    -1,   367,   368,
     255,    -1,    -1,     0,     1,    -1,     3,    -1,    70,     6,
     265,     8,     9,    10,    -1,    -1,    13,    -1,    15,    16,
      17,    18,    19,    20,    -1,    22,    23,    24,    -1,    -1,
      27,    28,    29,    30,    31,    32,   291,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   302,    -1,    -1,
      -1,    48,    49,    -1,    51,    52,    -1,    -1,    55,    -1,
      -1,    58,    -1,    -1,    61,    -1,    -1,    -1,   323,   324,
      67,    68,    69,    -1,    71,    72,    -1,   446,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   344,
      -1,     1,    -1,     3,    -1,    -1,     6,     7,     8,     9,
      10,    -1,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,   366,    22,    23,    24,    -1,    -1,    27,    28,    29,
      30,    31,    32,    -1,   379,    35,   381,    -1,    -1,    -1,
      -1,   386,    -1,    -1,    -1,    -1,   391,   392,    48,    49,
      -1,    51,    52,     4,     5,    55,    -1,    -1,    58,    -1,
      -1,    61,    -1,    -1,    -1,    65,    66,    67,    68,    69,
      -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    38,    39,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,   458,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    -1,    -1,    -1,   471,   472,     1,   474,
       3,    -1,    -1,     6,    -1,     8,     9,    10,    -1,   484,
      13,    -1,    15,    16,    17,    18,    19,    20,    -1,    22,
      23,    24,    -1,    -1,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    51,    52,
      -1,    -1,    55,    -1,    -1,    58,     3,    -1,    61,    -1,
      -1,     8,    65,    66,    67,    68,    69,    -1,    71,    72,
      17,    -1,    -1,    -1,    -1,    22,    23,    24,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    -1,    51,    52,    -1,    -1,    55,     3,
      -1,    58,    59,    -1,     8,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,    17,    71,    72,    -1,    -1,    22,    23,
      24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    51,    52,    -1,
      -1,    55,     3,    -1,    58,    -1,    -1,     8,    -1,    -1,
      -1,    65,    -1,    67,    68,    69,    17,    71,    72,    -1,
      -1,    22,    23,    24,    -1,    26,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,
      51,    52,    -1,    -1,    55,     3,    -1,    58,    -1,    -1,
       8,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,    17,
      71,    72,    -1,    -1,    22,    23,    24,    -1,    26,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    51,    52,    -1,    -1,    55,     3,    -1,
      58,    -1,    -1,     8,    -1,    -1,    -1,    -1,    -1,    67,
      68,    69,    17,    71,    72,    -1,    -1,    22,    23,    24,
      -1,    -1,    -1,    -1,    29,    -1,    31,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    51,    52,    -1,    -1,
      55,     3,    -1,    58,    -1,    -1,     8,    -1,    -1,    -1,
      -1,    -1,    67,    68,    69,    17,    71,    72,    -1,    -1,
      22,    23,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    51,
      52,    -1,    -1,    55,     3,    -1,    58,    -1,    -1,     8,
      -1,    -1,    -1,    65,    -1,    67,    68,    69,    17,    71,
      72,    -1,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    -1,    51,    52,    -1,    -1,    55,     3,    -1,    58,
      -1,    -1,     8,    -1,    -1,    -1,    -1,    -1,    67,    68,
      69,    17,    71,    72,    -1,    -1,    22,    23,    24,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    -1,    51,    52,    -1,    -1,    55,
       3,    -1,    58,    -1,    -1,     8,    -1,    -1,    -1,    -1,
      -1,    67,    68,    69,    17,    71,    72,    -1,    -1,    22,
      23,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    51,    52,
      -1,    -1,    55,    -1,    -1,    58,    -1,    -1,     8,    -1,
      -1,    -1,    -1,    -1,    67,    68,    69,    17,    71,    72,
      -1,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,    29,
       8,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    17,
       8,    -1,    -1,    11,    22,    23,    24,    -1,    -1,    17,
      -1,    29,    52,    -1,    22,    23,    24,    35,    58,    -1,
      -1,    29,    -1,    63,    -1,    -1,    -1,    35,    -1,    69,
      -1,    71,    72,    73,    52,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      58,    69,    -1,    71,    72,    73,     8,    -1,    -1,    -1,
       8,    69,    -1,    71,    72,    17,    -1,    -1,    -1,    17,
      22,    23,    24,    -1,    22,    23,    24,    29,    -1,    -1,
      -1,    29,     8,    35,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    17,    -1,    -1,    -1,    -1,    22,    23,    24,    -1,
      52,    -1,    -1,    29,    52,    -1,    58,    -1,    -1,    35,
      58,    -1,    -1,     8,    -1,    -1,    -1,    69,    -1,    71,
      72,    69,    17,    71,    72,    -1,    52,    22,    23,    24,
      -1,    -1,    58,    -1,    29,     8,    -1,    -1,    -1,    -1,
      35,    -1,    -1,    69,    17,    71,    72,    -1,    -1,    22,
      23,    24,    -1,    -1,    -1,    -1,    29,    52,    -1,    -1,
      -1,    -1,    35,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    72,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    72,
      33,    34,    35,    -1,    37,    38,    39,    -1,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    -1,    37,    38,    39,    -1,
      73,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    33,    34,    35,    -1,    37,
      38,    39,    -1,    64,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    33,    34,
      35,    -1,    37,    38,    39,    -1,    64,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    33,    34,    35,    -1,    37,    38,    39,    -1,    64,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    33,    34,    -1,    -1,    37,    38,
      39,    -1,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    34,    -1,    -1,
      37,    38,    39,    -1,    -1,    42,    43,    44,    45,    -1,
      47,    48,    49,    50,    51,    52,    53,    54,    55
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    25,    75,    76,    24,    71,    72,   123,   124,     0,
      77,     3,    61,    21,    78,   147,    62,     3,    58,    62,
      79,    81,   123,    61,     1,     3,     6,     8,     9,    10,
      13,    15,    16,    17,    18,    19,    20,    22,    23,    27,
      28,    29,    30,    31,    32,    35,    48,    49,    51,    52,
      55,    58,    67,    68,    69,    84,    85,    86,    92,   102,
     104,   108,   109,   110,   111,   112,   113,   117,   120,   123,
     125,   126,   131,   132,   135,   138,   139,   140,   142,   145,
     146,   162,   166,    24,    71,    59,    79,    80,     3,    25,
      82,     3,   120,   122,   123,    17,    35,    52,    58,   123,
     125,   130,   134,   135,   136,   142,   122,   112,   117,    92,
      99,   100,   101,   166,   174,    58,   123,   141,   112,   120,
     103,   174,    65,    69,   110,   166,   173,    65,    65,   103,
      58,    90,    91,   123,    58,    87,   121,   123,   165,   111,
     111,   111,   111,   111,   111,    35,    52,   110,   118,   129,
     135,   137,   142,   111,   111,    11,   110,   172,    61,    58,
      88,   165,     4,    33,    34,    35,    36,    37,    38,    39,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    58,    62,    69,    64,    58,
      65,     1,    65,     5,    63,    73,    61,   170,    24,    58,
      35,    58,   128,   134,   135,   136,   137,   142,   128,   128,
      62,    65,    98,     5,    63,    61,    11,   119,   123,   127,
     128,   158,   159,   160,    58,    65,   143,    98,    61,    24,
      58,    66,   120,   152,   154,   156,   128,    97,    52,    58,
      66,   120,   151,   153,   154,   155,   164,    65,    59,    91,
     150,   128,    59,    87,   148,    63,    73,   128,     8,   129,
      59,    70,    70,    59,    88,    63,   128,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,    59,   118,
     167,    58,   123,   110,   172,     1,    65,    85,    94,   161,
     162,   110,    65,   110,   114,   115,   168,   169,   161,   163,
     166,   166,   110,    79,    59,    24,    83,   160,     8,   128,
      59,   123,   163,    26,    26,   174,   128,   119,   127,    73,
     171,    59,   160,   163,   106,   174,    62,    24,   154,    58,
     157,    61,   170,    70,     7,    12,    66,    93,    95,    58,
     155,    52,   155,    61,   170,     3,   175,    73,   128,    97,
      61,   170,    61,   170,   166,   121,    63,    35,    58,   128,
     134,   135,   136,   142,   128,   128,    61,   170,   166,    63,
      11,    73,   171,    31,   118,    70,    64,   163,    73,   171,
     169,    64,    73,   171,    66,    61,    66,    61,    59,    59,
      66,   110,   110,    61,   158,    58,   123,   133,   134,   135,
     136,   137,   142,   144,    59,    66,    14,   105,   107,   123,
      59,   160,   156,    66,   128,   167,    64,    96,   155,   175,
     155,    59,   153,    66,   120,   175,    66,    91,    59,    87,
      59,   166,   128,    88,    89,   149,   165,    59,   166,   171,
     118,    59,    59,    59,   172,    66,    59,    66,    65,   110,
     116,   114,   115,   161,   174,   160,    58,   144,    20,    94,
      59,     5,    63,    64,    73,   163,    59,    59,   175,    59,
      61,   170,   128,    59,    64,    70,   169,    59,   160,   103,
     144,   110,   110,   175,   175,    89,    59,   172,    66,    59,
      98,    64,    64,    70,   144
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
     113,   113,   113,   113,   114,   115,   115,   116,   116,   117,
     117,   118,   118,   119,   120,   121,   122,   122,   123,   123,
     123,   124,   124,   125,   126,   127,   127,   128,   128,   128,
     128,   128,   128,   129,   129,   129,   129,   130,   130,   130,
     130,   130,   131,   131,   132,   133,   133,   133,   133,   133,
     134,   134,   135,   135,   135,   135,   135,   135,   135,   136,
     137,   138,   138,   139,   139,   140,   141,   141,   142,   143,
     143,   144,   144,   144,   145,   146,   146,   147,   147,   148,
     148,   149,   149,   150,   150,   151,   151,   152,   152,   153,
     153,   153,   153,   153,   153,   154,   154,   155,   156,   156,
     156,   157,   158,   158,   158,   158,   159,   159,   160,   160,
     161,   161,   161,   161,   161,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   163,   163,
     164,   164,   165,   165,   166,   166,   167,   167,   168,   168,
     168,   168,   169,   169,   170,   170,   171,   171,   172,   172,
     173,   173,   174,   174,   175,   175
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
       1,     5,     4,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     0,     1,     1,     1,
       1,     4,     4,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     2,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     4,     2,     3,     5,     1,     1,     2,
       3,     5,     3,     5,     3,     3,     5,     8,     5,     0,
       3,     0,     1,     3,     1,     4,     2,     0,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     3,
       2,     4,     3,     5,     5,     1,     3,     1,     2,     1,
       3,     4,     1,     2,     2,     1,     1,     3,     0,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     2,     2,     2,     2,     2,     2,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     1,
       3,     3,     0,     2,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1
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
        case 3:
#line 112 "go.y" /* yacc.c:1646  */
    {
		yyerror("package statement must be first");
		exit(1);
	}
#line 1929 "go.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 156 "go.y" /* yacc.c:1646  */
    {
		yyerror("empty top-level declaration");
		(yyval) = 0;
	}
#line 1938 "go.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 163 "go.y" /* yacc.c:1646  */
    {
		yyerror("non-declaration statement outside function body");
		(yyval) = 0;
	}
#line 1947 "go.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 168 "go.y" /* yacc.c:1646  */
    {
		(yyval) = 0;
	}
#line 1955 "go.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 209 "go.y" /* yacc.c:1646  */
    {
		// the name becomes visible right here, not at the end
		// of the declaration.
	}
#line 1964 "go.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 242 "go.y" /* yacc.c:1646  */
    {
		// If the last token read by the lexer was consumed
		// as part of the case, clear it (parser has cleared yychar).
		// If the last token read by the lexer was the lookahead
		// leave it alone (parser has it cached in yychar).
		// This is so that the stmt_list action doesn't look at
		// the case tokens if the stmt_list is empty.
		// yylast = yychar;
	}
#line 1978 "go.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 252 "go.y" /* yacc.c:1646  */
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
#line 1998 "go.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 370 "go.y" /* yacc.c:1646  */
    {
		yyerror("the bitwise complement operator is ^");
	}
#line 2006 "go.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 482 "go.y" /* yacc.c:1646  */
    {
		yyerror("final argument in variadic function missing type");
	}
#line 2014 "go.tab.c" /* yacc.c:1646  */
    break;


#line 2018 "go.tab.c" /* yacc.c:1646  */
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
#line 771 "go.y" /* yacc.c:1906  */

