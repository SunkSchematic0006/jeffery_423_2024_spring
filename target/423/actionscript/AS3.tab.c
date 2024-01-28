
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 25 "AS3.y"

#include "tree.h"


/* Line 189 of yacc.c  */
#line 78 "AS3.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PACKAGE = 258,
     PUBLIC = 259,
     PRIVATE = 260,
     PROTECTED = 261,
     INTERNAL = 262,
     OVERRIDE = 263,
     FUNCTION = 264,
     EXTENDS = 265,
     IMPLEMENTS = 266,
     VAR = 267,
     STATIC = 268,
     IF = 269,
     IMPORT = 270,
     FOR = 271,
     EACH = 272,
     IN = 273,
     WHILE = 274,
     DO = 275,
     SWITCH = 276,
     CASE = 277,
     DEFAULT = 278,
     ELSE = 279,
     CONST = 280,
     CLASS = 281,
     INTERFACE = 282,
     TRUE = 283,
     FALSE = 284,
     DYNAMIC = 285,
     USE = 286,
     XML = 287,
     NAMESPACE = 288,
     IS = 289,
     AS = 290,
     GET = 291,
     SET = 292,
     WITH = 293,
     RETURN = 294,
     CONTINUE = 295,
     BREAK = 296,
     NULL = 297,
     NEW = 298,
     SUPER = 299,
     INSTANCEOF = 300,
     DELETE = 301,
     VOID = 302,
     TYPEOF = 303,
     TRY = 304,
     CATCH = 305,
     FINALLY = 306,
     UNDEFINED = 307,
     THROW = 308,
     FINAL = 309,
     QUESTION = 310,
     LPAREN = 311,
     RPAREN = 312,
     LBRACK = 313,
     RBRACK = 314,
     LCURLY = 315,
     RCURLY = 316,
     COLON = 317,
     DBL_COLON = 318,
     COMMA = 319,
     ASSIGN = 320,
     EQUAL = 321,
     STRICT_EQUAL = 322,
     LNOT = 323,
     BNOT = 324,
     NOT_EQUAL = 325,
     STRICT_NOT_EQUAL = 326,
     DIV = 327,
     DIV_ASSIGN = 328,
     PLUS = 329,
     PLUS_ASSIGN = 330,
     INC = 331,
     MINUS = 332,
     MINUS_ASSIGN = 333,
     DEC = 334,
     STAR = 335,
     STAR_ASSIGN = 336,
     MOD = 337,
     MOD_ASSIGN = 338,
     SR = 339,
     SR_ASSIGN = 340,
     BSR = 341,
     BSR_ASSIGN = 342,
     GE = 343,
     GT = 344,
     SL = 345,
     SL_ASSIGN = 346,
     LE = 347,
     LT = 348,
     BXOR = 349,
     BXOR_ASSIGN = 350,
     BOR = 351,
     BOR_ASSIGN = 352,
     LOR = 353,
     BAND = 354,
     BAND_ASSIGN = 355,
     LAND = 356,
     LAND_ASSIGN = 357,
     LOR_ASSIGN = 358,
     E4X_ATTRI = 359,
     SEMI = 360,
     DOT = 361,
     E4X_DESC = 362,
     REST = 363,
     AND = 364,
     INTRINSIC = 365,
     OR = 366,
     IDENT = 367,
     EOFX = 368,
     ENUMERABLE = 369,
     EXPLICIT = 370,
     FLOAT_LITERAL = 371,
     DECIMAL_LITERAL = 372,
     OCTAL_LITERAL = 373,
     STRING_LITERAL = 374,
     HEX_LITERAL = 375,
     INCLUDE = 376,
     INCLUDE_DIRECTIVE = 377
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 29 "AS3.y"

   struct tree *t;



/* Line 214 of yacc.c  */
#line 242 "AS3.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 254 "AS3.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  27
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1269

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  123
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  155
/* YYNRULES -- Number of rules.  */
#define YYNRULES  347
/* YYNRULES -- Number of states.  */
#define YYNSTATES  542

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   377

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    13,    14,    18,    22,
      26,    29,    30,    34,    37,    41,    43,    47,    51,    55,
      59,    63,    67,    69,    73,    75,    81,    87,    92,    97,
     100,   101,   105,   106,   110,   111,   115,   116,   120,   123,
     124,   128,   132,   134,   136,   139,   143,   145,   147,   149,
     150,   157,   159,   160,   162,   164,   167,   172,   176,   177,
     182,   184,   186,   188,   189,   193,   197,   199,   202,   206,
     207,   210,   215,   217,   219,   223,   228,   231,   235,   238,
     241,   243,   246,   247,   251,   253,   257,   259,   261,   263,
     265,   267,   269,   271,   273,   275,   277,   279,   281,   283,
     285,   287,   289,   291,   293,   297,   300,   303,   308,   312,
     315,   319,   323,   328,   332,   335,   336,   343,   346,   350,
     353,   356,   359,   363,   367,   370,   371,   376,   378,   379,
     383,   386,   389,   390,   397,   403,   409,   415,   419,   421,
     423,   425,   427,   428,   430,   431,   433,   434,   438,   444,
     448,   455,   458,   461,   464,   466,   468,   470,   472,   474,
     476,   480,   484,   488,   492,   494,   496,   498,   500,   504,
     506,   508,   510,   512,   514,   516,   518,   522,   523,   528,
     531,   534,   537,   538,   543,   547,   551,   552,   557,   560,
     564,   566,   568,   571,   572,   574,   576,   578,   580,   582,
     584,   586,   588,   592,   595,   599,   602,   604,   606,   610,
     611,   614,   616,   620,   623,   627,   629,   630,   633,   637,
     639,   641,   643,   646,   650,   652,   654,   656,   658,   660,
     662,   664,   666,   668,   670,   672,   674,   676,   678,   680,
     682,   686,   690,   692,   696,   698,   700,   702,   706,   708,
     710,   712,   716,   718,   722,   724,   728,   730,   734,   736,
     738,   740,   742,   744,   748,   750,   752,   754,   756,   758,
     760,   762,   764,   766,   770,   772,   774,   776,   778,   782,
     784,   786,   788,   792,   794,   796,   798,   801,   804,   807,
     810,   812,   815,   818,   821,   824,   827,   829,   831,   834,
     837,   839,   844,   848,   854,   858,   862,   865,   868,   871,
     876,   878,   880,   882,   884,   886,   888,   890,   892,   894,
     896,   898,   900,   902,   904,   906,   908,   910,   912,   916,
     919,   921,   925,   928,   932,   936,   939,   942,   946,   949,
     951,   953,   955,   957,   959,   961,   963,   965
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     124,     0,    -1,   125,    -1,   128,    -1,   126,   127,    -1,
     126,   133,    -1,    -1,   221,   226,   136,    -1,   221,   226,
     138,    -1,   130,   129,   113,    -1,   129,   132,    -1,    -1,
       3,   209,   131,    -1,     3,   131,    -1,    60,   129,    61,
      -1,   133,    -1,   221,   226,   135,    -1,   221,   226,   137,
      -1,   221,   226,   156,    -1,   221,   226,   150,    -1,   221,
     226,   153,    -1,   221,   226,   154,    -1,   105,    -1,    15,
     220,   134,    -1,   105,    -1,    26,   277,   139,   142,   143,
      -1,    26,   209,   139,   142,   143,    -1,    27,   277,   140,
     143,    -1,    27,   209,   140,   143,    -1,    10,   209,    -1,
      -1,    10,   209,   141,    -1,    -1,    64,   209,   141,    -1,
      -1,    11,   209,   141,    -1,    -1,    60,   144,    61,    -1,
     145,   144,    -1,    -1,   221,   226,   156,    -1,   221,   226,
     150,    -1,   133,    -1,   146,    -1,   122,   119,    -1,   121,
     119,   134,    -1,   170,    -1,   134,    -1,   208,    -1,    -1,
       9,   151,   277,   164,   149,   148,    -1,   152,    -1,    -1,
      36,    -1,    37,    -1,    33,   277,    -1,    31,    33,   277,
     134,    -1,    64,   159,   155,    -1,    -1,   157,   159,   155,
     134,    -1,    12,    -1,    25,    -1,   162,    -1,    -1,   277,
     149,   158,    -1,   157,   159,   161,    -1,   155,    -1,    65,
     241,    -1,    64,   165,   163,    -1,    -1,    56,    57,    -1,
      56,   165,   163,    57,    -1,   166,    -1,   168,    -1,   277,
     149,   167,    -1,    25,   277,   149,   167,    -1,   277,   149,
      -1,    25,   277,   149,    -1,    65,   241,    -1,   108,   277,
      -1,   108,    -1,   171,   169,    -1,    -1,    60,   169,    61,
      -1,   173,    -1,    56,   239,    57,    -1,   174,    -1,   170,
      -1,   175,    -1,   176,    -1,   177,    -1,   195,    -1,   196,
      -1,   204,    -1,   205,    -1,   206,    -1,   187,    -1,   186,
      -1,   185,    -1,   184,    -1,   179,    -1,   180,    -1,   207,
      -1,   105,    -1,    44,   228,   134,    -1,   160,   134,    -1,
     240,   134,    -1,    14,   172,   173,   178,    -1,    14,   172,
     173,    -1,    24,   173,    -1,    53,   239,   134,    -1,    49,
     170,   183,    -1,    49,   170,   181,   183,    -1,    49,   170,
     181,    -1,   182,   181,    -1,    -1,    50,    56,   277,   149,
      57,   170,    -1,    51,   170,    -1,    39,   239,   134,    -1,
      39,   134,    -1,    40,   134,    -1,    41,   134,    -1,    21,
     172,   188,    -1,    60,   189,    61,    -1,   189,   190,    -1,
      -1,    22,   239,    62,   193,    -1,   192,    -1,    -1,    23,
      62,   193,    -1,   194,   191,    -1,   173,   194,    -1,    -1,
      16,    17,    56,   198,    57,   173,    -1,    16,    56,   198,
      57,   173,    -1,    16,    56,   197,    57,   173,    -1,   201,
     105,   202,   105,   203,    -1,   199,    18,   200,    -1,   160,
      -1,   240,    -1,   160,    -1,   240,    -1,    -1,   240,    -1,
      -1,   240,    -1,    -1,    19,   172,   173,    -1,    20,   173,
      19,   172,   134,    -1,    38,   172,   173,    -1,    23,    32,
      33,    65,   239,   134,    -1,    62,   209,    -1,    62,    47,
      -1,    62,    80,    -1,   216,    -1,    80,    -1,   277,    -1,
     210,    -1,   218,    -1,   210,    -1,   211,    63,   210,    -1,
     211,    63,   272,    -1,   273,    63,   210,    -1,   273,    63,
     272,    -1,   212,    -1,   213,    -1,   266,    -1,   214,    -1,
     217,    63,   277,    -1,   277,    -1,   112,    -1,   218,    -1,
       4,    -1,     5,    -1,     6,    -1,     7,    -1,   106,   277,
     219,    -1,    -1,   277,   219,   106,    80,    -1,   277,   219,
      -1,   222,   221,    -1,   147,   221,    -1,    -1,    58,   277,
     224,    59,    -1,    58,   277,    59,    -1,    64,   225,   223,
      -1,    -1,    56,   225,   223,    57,    -1,    56,    57,    -1,
     277,    65,   268,    -1,   268,    -1,   277,    -1,   227,   226,
      -1,    -1,   217,    -1,    13,    -1,    54,    -1,   114,    -1,
     115,    -1,     8,    -1,    30,    -1,   110,    -1,    56,   240,
      57,    -1,    56,    57,    -1,    58,   230,    59,    -1,    58,
      59,    -1,    64,    -1,   232,    -1,    64,   241,   231,    -1,
      -1,   241,   231,    -1,   241,    -1,    60,   236,    61,    -1,
      60,    61,    -1,    64,   237,   235,    -1,    64,    -1,    -1,
     237,   235,    -1,   238,    62,   233,    -1,   277,    -1,   269,
      -1,   241,    -1,   241,   231,    -1,   243,   242,   241,    -1,
     243,    -1,    65,    -1,    81,    -1,    73,    -1,    83,    -1,
      75,    -1,    78,    -1,    91,    -1,    85,    -1,    87,    -1,
     100,    -1,    95,    -1,    97,    -1,   102,    -1,   103,    -1,
     245,    -1,   245,    55,   244,    -1,   241,    62,   241,    -1,
     247,    -1,   247,   246,   245,    -1,    98,    -1,   111,    -1,
     249,    -1,   249,   248,   247,    -1,   101,    -1,   109,    -1,
     250,    -1,   250,    96,   249,    -1,   251,    -1,   251,    94,
     250,    -1,   252,    -1,   252,    99,   251,    -1,   254,    -1,
     254,   253,   252,    -1,    67,    -1,    71,    -1,    70,    -1,
      66,    -1,   256,    -1,   256,   255,   254,    -1,    18,    -1,
      93,    -1,    89,    -1,    92,    -1,    88,    -1,    34,    -1,
      35,    -1,    45,    -1,   258,    -1,   258,   257,   256,    -1,
      90,    -1,    84,    -1,    86,    -1,   260,    -1,   260,   259,
     258,    -1,    74,    -1,    77,    -1,   262,    -1,   262,   261,
     260,    -1,    80,    -1,    72,    -1,    82,    -1,    76,   262,
      -1,    79,   262,    -1,    77,   262,    -1,    74,   262,    -1,
     263,    -1,    46,   264,    -1,    47,   262,    -1,    48,   262,
      -1,    68,   262,    -1,    69,   262,    -1,   264,    -1,   265,
      -1,   265,    76,    -1,   265,    79,    -1,   267,    -1,   264,
      58,   239,    59,    -1,   264,   107,   215,    -1,   264,   106,
      56,   239,    57,    -1,   264,   106,   266,    -1,   264,   106,
      80,    -1,   264,   228,    -1,   104,   216,    -1,   104,    80,
      -1,   104,    58,   239,    59,    -1,    52,    -1,   268,    -1,
     229,    -1,   234,    -1,   276,    -1,   270,    -1,   273,    -1,
     266,    -1,   216,    -1,   269,    -1,   119,    -1,    28,    -1,
      29,    -1,    42,    -1,   120,    -1,   117,    -1,   118,    -1,
     116,    -1,    43,   271,   228,    -1,    43,   271,    -1,   267,
      -1,   271,   106,   216,    -1,   271,   272,    -1,    58,   240,
      59,    -1,    56,   241,    57,    -1,   164,   149,    -1,   274,
     170,    -1,     9,   112,   275,    -1,     9,   275,    -1,   112,
      -1,    31,    -1,    32,    -1,    30,    -1,    33,    -1,    34,
      -1,    35,    -1,    36,    -1,    37,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   305,   305,   306,   308,   310,   311,   313,   314,   316,
     318,   319,   321,   322,   325,   327,   328,   329,   330,   331,
     332,   333,   334,   338,   341,   344,   348,   355,   361,   366,
     367,   370,   371,   373,   374,   377,   378,   380,   383,   384,
     386,   387,   388,   389,   392,   396,   399,   399,   400,   401,
     404,   408,   409,   412,   412,   415,   418,   421,   422,   425,
     428,   428,   431,   432,   434,   436,   438,   440,   442,   443,
     445,   446,   449,   449,   453,   454,   455,   456,   459,   462,
     463,   466,   467,   470,   473,   476,   480,   481,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   500,   503,   506,   510,   511,   514,
     517,   521,   522,   523,   526,   526,   528,   531,   534,   535,
     538,   541,   544,   547,   550,   550,   553,   556,   556,   559,
     562,   565,   565,   567,   570,   571,   574,   577,   580,   585,
     588,   589,   590,   593,   594,   597,   598,   602,   606,   610,
     614,   618,   619,   620,   623,   626,   627,   630,   630,   634,
     635,   636,   640,   641,   645,   646,   650,   651,   655,   656,
     659,   659,   663,   664,   665,   666,   669,   669,   672,   673,
     676,   677,   678,   681,   682,   685,   686,   689,   690,   694,
     695,   696,   699,   700,   704,   705,   706,   707,   708,   709,
     710,   711,   714,   715,   718,   719,   722,   723,   727,   728,
     732,   735,   739,   740,   743,   744,   745,   747,   750,   753,
     754,   757,   760,   764,   765,   769,   770,   771,   772,   773,
     774,   775,   776,   777,   778,   779,   780,   781,   782,   786,
     787,   791,   795,   796,   799,   799,   803,   804,   808,   808,
     812,   813,   817,   818,   822,   823,   827,   828,   832,   832,
     832,   832,   836,   837,   841,   842,   842,   842,   842,   842,
     842,   842,   846,   847,   850,   850,   850,   854,   855,   859,
     859,   863,   864,   867,   868,   869,   873,   874,   875,   876,
     877,   881,   882,   883,   884,   885,   886,   889,   890,   891,
     894,   895,   896,   897,   898,   899,   900,   904,   905,   906,
     910,   911,   912,   913,   914,   915,   916,   917,   918,   929,
     930,   931,   932,   933,   936,   937,   938,   939,   943,   944,
     947,   948,   949,   953,   956,   960,   964,   968,   969,   974,
     975,   976,   977,   978,   979,   980,   981,   982
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PACKAGE", "PUBLIC", "PRIVATE",
  "PROTECTED", "INTERNAL", "OVERRIDE", "FUNCTION", "EXTENDS", "IMPLEMENTS",
  "VAR", "STATIC", "IF", "IMPORT", "FOR", "EACH", "IN", "WHILE", "DO",
  "SWITCH", "CASE", "DEFAULT", "ELSE", "CONST", "CLASS", "INTERFACE",
  "TRUE", "FALSE", "DYNAMIC", "USE", "XML", "NAMESPACE", "IS", "AS", "GET",
  "SET", "WITH", "RETURN", "CONTINUE", "BREAK", "NULL", "NEW", "SUPER",
  "INSTANCEOF", "DELETE", "VOID", "TYPEOF", "TRY", "CATCH", "FINALLY",
  "UNDEFINED", "THROW", "FINAL", "QUESTION", "LPAREN", "RPAREN", "LBRACK",
  "RBRACK", "LCURLY", "RCURLY", "COLON", "DBL_COLON", "COMMA", "ASSIGN",
  "EQUAL", "STRICT_EQUAL", "LNOT", "BNOT", "NOT_EQUAL", "STRICT_NOT_EQUAL",
  "DIV", "DIV_ASSIGN", "PLUS", "PLUS_ASSIGN", "INC", "MINUS",
  "MINUS_ASSIGN", "DEC", "STAR", "STAR_ASSIGN", "MOD", "MOD_ASSIGN", "SR",
  "SR_ASSIGN", "BSR", "BSR_ASSIGN", "GE", "GT", "SL", "SL_ASSIGN", "LE",
  "LT", "BXOR", "BXOR_ASSIGN", "BOR", "BOR_ASSIGN", "LOR", "BAND",
  "BAND_ASSIGN", "LAND", "LAND_ASSIGN", "LOR_ASSIGN", "E4X_ATTRI", "SEMI",
  "DOT", "E4X_DESC", "REST", "AND", "INTRINSIC", "OR", "IDENT", "EOFX",
  "ENUMERABLE", "EXPLICIT", "FLOAT_LITERAL", "DECIMAL_LITERAL",
  "OCTAL_LITERAL", "STRING_LITERAL", "HEX_LITERAL", "INCLUDE",
  "INCLUDE_DIRECTIVE", "$accept", "compilationUnit", "as2CompilationUnit",
  "importDefinitions", "as2Type", "as3CompilationUnit",
  "packageBlockEntries", "packageDecl", "packageBlock",
  "packageBlockEntry", "importDefinition", "semi", "classDefinition",
  "as2ClassDefinition", "interfaceDefinition", "as2InterfaceDefinition",
  "classExtendsClause", "interfaceExtendsClause", "commaIdentifiers",
  "implementsClause", "typeBlock", "typeBlockEntries", "typeBlockEntry",
  "as2IncludeDirective", "includeDirective", "blockOrSemi",
  "optionalTypeExpression", "methodDefinition", "optionalAccessorRole",
  "accessorRole", "namespaceDefinition", "useNamespaceDirective",
  "commaVariableDeclarators", "variableDefinition", "varOrConst",
  "optionalVariableInitializer", "variableDeclarator", "declaration",
  "declarationTail", "variableInitializer", "commaParameterDeclaration",
  "parameterDeclarationList", "parameterDeclaration",
  "basicParameterDeclaration", "parameterDefault",
  "parameterRestDeclaration", "blockEntries", "block", "blockEntry",
  "condition", "statement", "superStatement", "declarationStatement",
  "expressionStatement", "ifStatement", "elseClause", "throwStatement",
  "tryStatement", "catchBlocks", "catchBlock", "finallyBlock",
  "returnStatement", "continueStatement", "breakStatement",
  "switchStatement", "switchBlock", "caseStatements", "caseStatement",
  "optionalDefaultStatement", "defaultStatement", "switchStatementList",
  "statements", "forEachStatement", "forStatement", "traditionalForClause",
  "forInClause", "forInClauseDecl", "forInClauseTail", "forInit",
  "forCond", "forIter", "whileStatement", "doWhileStatement",
  "withStatement", "defaultXMLNamespaceStatement", "typeExpression",
  "identifier", "propertyIdentifier", "qualifier",
  "simpleQualifiedIdentifier", "expressionQualifiedIdentifier",
  "nonAttributeQualifiedIdentifier", "qualifiedIdentifier",
  "qualifiedIdent", "namespaceName", "reservedNamespace", "dotIdents",
  "identifierStar", "annotations", "annotation", "moreAnnotationParams",
  "annotationParamList", "annotationParam", "modifiers", "modifier",
  "arguments", "arrayLiteral", "elementList", "moreAssignmentExpressions",
  "nonemptyElementList", "element", "objectLiteral", "moreLiteralFields",
  "fieldList", "literalField", "fieldName", "expression", "expressionList",
  "assignmentExpression", "assignmentOperator", "conditionalExpression",
  "conditionalSubExpression", "logicalOrExpression", "logicalOrOperator",
  "logicalAndExpression", "logicalAndOperator", "bitwiseOrExpression",
  "bitwiseXorExpression", "bitwiseAndExpression", "equalityExpression",
  "equalityOperator", "relationalExpression", "relationalOperator",
  "shiftExpression", "shiftOperator", "additiveExpression",
  "additiveOperator", "multiplicativeExpression", "multiplicativeOperator",
  "unaryExpression", "unaryExpressionNotPlusMinus", "postfixExpression",
  "postfixExpression2", "e4xAttributeIdentifier", "primaryExpression",
  "constant", "number", "newExpression", "fullNewSubexpression",
  "brackets", "encapsulatedExpression", "functionSignature",
  "functionCommon", "functionExpression", "ident", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   123,   124,   124,   125,   126,   126,   127,   127,   128,
     129,   129,   130,   130,   131,   132,   132,   132,   132,   132,
     132,   132,   132,   133,   134,   135,   136,   137,   138,   139,
     139,   140,   140,   141,   141,   142,   142,   143,   144,   144,
     145,   145,   145,   145,   146,   147,   148,   148,   149,   149,
     150,   151,   151,   152,   152,   153,   154,   155,   155,   156,
     157,   157,   158,   158,   159,   160,   161,   162,   163,   163,
     164,   164,   165,   165,   166,   166,   166,   166,   167,   168,
     168,   169,   169,   170,   171,   172,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   174,   175,   176,   177,   177,   178,
     179,   180,   180,   180,   181,   181,   182,   183,   184,   184,
     185,   186,   187,   188,   189,   189,   190,   191,   191,   192,
     193,   194,   194,   195,   196,   196,   197,   198,   199,   200,
     201,   201,   201,   202,   202,   203,   203,   204,   205,   206,
     207,   208,   208,   208,   209,   210,   210,   211,   211,   212,
     212,   212,   213,   213,   214,   214,   215,   215,   216,   216,
     217,   217,   218,   218,   218,   218,   219,   219,   220,   220,
     221,   221,   221,   222,   222,   223,   223,   224,   224,   225,
     225,   225,   226,   226,   227,   227,   227,   227,   227,   227,
     227,   227,   228,   228,   229,   229,   230,   230,   231,   231,
     232,   233,   234,   234,   235,   235,   235,   236,   237,   238,
     238,   239,   240,   241,   241,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   243,
     243,   244,   245,   245,   246,   246,   247,   247,   248,   248,
     249,   249,   250,   250,   251,   251,   252,   252,   253,   253,
     253,   253,   254,   254,   255,   255,   255,   255,   255,   255,
     255,   255,   256,   256,   257,   257,   257,   258,   258,   259,
     259,   260,   260,   261,   261,   261,   262,   262,   262,   262,
     262,   263,   263,   263,   263,   263,   263,   264,   264,   264,
     265,   265,   265,   265,   265,   265,   265,   266,   266,   266,
     267,   267,   267,   267,   267,   267,   267,   267,   267,   268,
     268,   268,   268,   268,   269,   269,   269,   269,   270,   270,
     271,   271,   271,   272,   273,   274,   275,   276,   276,   277,
     277,   277,   277,   277,   277,   277,   277,   277
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     0,     3,     3,     3,
       2,     0,     3,     2,     3,     1,     3,     3,     3,     3,
       3,     3,     1,     3,     1,     5,     5,     4,     4,     2,
       0,     3,     0,     3,     0,     3,     0,     3,     2,     0,
       3,     3,     1,     1,     2,     3,     1,     1,     1,     0,
       6,     1,     0,     1,     1,     2,     4,     3,     0,     4,
       1,     1,     1,     0,     3,     3,     1,     2,     3,     0,
       2,     4,     1,     1,     3,     4,     2,     3,     2,     2,
       1,     2,     0,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     2,     4,     3,     2,
       3,     3,     4,     3,     2,     0,     6,     2,     3,     2,
       2,     2,     3,     3,     2,     0,     4,     1,     0,     3,
       2,     2,     0,     6,     5,     5,     5,     3,     1,     1,
       1,     1,     0,     1,     0,     1,     0,     3,     5,     3,
       6,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     3,     0,     4,     2,
       2,     2,     0,     4,     3,     3,     0,     4,     2,     3,
       1,     1,     2,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     3,     2,     1,     1,     3,     0,
       2,     1,     3,     2,     3,     1,     0,     2,     3,     1,
       1,     1,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     3,     1,     1,     1,     3,     1,     1,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     3,     1,
       1,     1,     3,     1,     1,     1,     2,     2,     2,     2,
       1,     2,     2,     2,     2,     2,     1,     1,     2,     2,
       1,     4,     3,     5,     3,     3,     2,     2,     2,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       1,     3,     2,     3,     3,     2,     2,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       6,     0,     0,     2,   182,     3,    11,   172,   173,   174,
     175,   342,   340,   341,   343,   344,   345,   346,   347,    11,
     339,    13,     0,   154,     0,   171,   169,     1,     0,     0,
       0,     4,     5,   182,   193,   182,   182,   182,    12,     0,
     339,     0,   177,     0,     0,   181,   199,   195,   200,   196,
     201,   170,   197,   198,   194,     0,   193,   180,    22,     9,
      10,    15,   193,    14,   168,    24,    23,     0,   179,     0,
     184,     0,    45,     0,     0,     7,     8,   192,     0,   177,
       0,   321,   322,   323,   188,   327,   325,   326,   320,   324,
     186,   190,   319,   191,   183,    30,    32,    52,    60,    61,
       0,     0,     0,     0,    16,    17,    19,    20,    21,    18,
       0,   176,   178,     0,     0,     0,     0,    36,     0,     0,
      53,    54,     0,    51,    30,    32,     0,    55,    58,    49,
     186,   187,   189,    29,     0,     0,    34,   182,    28,     0,
      36,     0,     0,     0,     0,     0,    63,    48,   185,    34,
      26,     0,    31,     0,    42,     0,   182,    43,   193,     0,
      49,     0,    27,    56,    58,    59,   152,   153,   151,     0,
      64,    62,    35,    34,    44,    37,    38,     0,     0,    70,
      80,    69,    72,    73,    49,     0,    25,    57,     0,     0,
       0,     0,     0,   310,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   318,   312,   313,    67,   224,   239,
     242,   246,   250,   252,   254,   256,   262,   272,   277,   281,
     290,   296,   297,   317,   300,   311,   315,   316,   314,    33,
      41,    40,    49,    79,     0,     0,    76,    82,    47,    50,
      46,     0,    49,     0,   338,   330,   329,   291,   292,   293,
       0,   205,   206,     0,   207,   209,   213,     0,   216,     0,
     220,   219,   294,   295,   289,   286,   288,   287,     0,   308,
     307,   225,   227,   229,   230,   226,   228,   232,   233,   231,
     235,   236,   234,   237,   238,     0,     0,   244,   245,     0,
     248,   249,     0,     0,     0,     0,   261,   258,   260,   259,
       0,   264,   269,   270,   271,   268,   266,   267,   265,     0,
     275,   276,   274,     0,   279,   280,     0,   284,   283,   285,
       0,     0,     0,     0,     0,   306,   298,   299,    77,    69,
      71,     0,    74,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   103,     0,     0,
       0,    87,    82,    84,    86,    88,    89,    90,   100,   101,
      99,    98,    97,    96,    91,    92,    93,    94,    95,   102,
       0,   209,   337,   335,   336,     0,     0,   328,   332,   334,
     204,     0,   210,   212,   215,   217,     0,     0,   221,   223,
       0,   240,   243,   247,   251,   253,   255,   257,   263,   273,
     278,   282,   203,     0,     0,     0,   305,   304,   155,   159,
       0,   164,   165,   167,   302,   158,   166,     0,   156,    75,
      68,    78,     0,     0,     0,   142,     0,     0,     0,     0,
       0,   119,     0,   120,   121,     0,   115,     0,   319,   169,
      58,   105,    83,    81,   106,   222,     0,   331,   209,   216,
     218,   211,   309,     0,   202,   301,     0,     0,     0,     0,
     108,     0,   138,     0,     0,     0,     0,   141,   147,     0,
     125,   122,     0,   149,   118,   104,     0,     0,   113,   115,
     111,   110,    66,    65,   333,   208,   214,   241,   303,   160,
     161,   162,   163,    85,     0,   107,   138,     0,     0,     0,
       0,   144,     0,     0,     0,     0,   117,   112,   114,   109,
       0,   135,   134,   137,   139,     0,   143,   148,     0,   123,
     124,     0,    49,   133,   146,     0,   150,     0,   136,   145,
     132,     0,   132,   126,   128,   116,   131,     0,   130,   127,
     132,   129
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    31,     5,    36,     6,    21,    60,
      61,    66,   104,    75,   105,    76,   117,   119,   152,   135,
     138,   155,   156,   157,    33,   239,   146,   106,   122,   123,
     107,   108,   144,   109,   348,   170,   128,   349,   483,   171,
     235,   242,   181,   182,   332,   183,   350,   351,   352,   423,
     353,   354,   355,   356,   357,   495,   358,   359,   478,   479,
     480,   360,   361,   362,   363,   471,   503,   520,   538,   539,
     533,   534,   364,   365,   463,   464,   465,   513,   466,   515,
     528,   366,   367,   368,   369,   147,    22,   409,   410,   411,
     412,   413,   414,   204,    24,    25,    68,    41,    62,    35,
     114,    71,    90,    55,    56,   325,   205,   253,   382,   254,
     450,   206,   385,   257,   258,   259,   387,   370,   371,   285,
     208,   391,   209,   289,   210,   292,   211,   212,   213,   214,
     300,   215,   309,   216,   313,   217,   316,   218,   320,   219,
     220,   221,   222,   223,   224,   225,    92,   226,   246,   378,
     227,   243,   244,   228,    26
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -399
static const yytype_int16 yypact[] =
{
      27,  1113,    36,  -399,     2,  -399,  -399,  -399,  -399,  -399,
    -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,
       5,  -399,    14,  -399,    43,  -399,  -399,  -399,    18,    18,
      22,  -399,  -399,   -38,   104,   -38,     0,    30,  -399,    18,
    -399,    52,    26,    77,    52,  -399,  -399,  -399,  -399,  -399,
    -399,  -399,  -399,  -399,  -399,   154,   104,  -399,  -399,  -399,
    -399,  -399,   104,  -399,  -399,  -399,  -399,    18,    53,  1099,
    -399,   115,  -399,   521,   521,  -399,  -399,  -399,   231,    26,
     108,  -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,
     126,  -399,  -399,   128,  -399,   187,   191,   163,  -399,  -399,
      18,    18,   176,    18,  -399,  -399,  -399,  -399,  -399,  -399,
      18,  -399,  -399,   638,   160,   111,   521,   200,   521,   174,
    -399,  -399,    18,  -399,   187,   191,    18,  -399,   199,   203,
     126,  -399,  -399,  -399,   521,   174,   206,    23,  -399,   182,
     200,   174,    52,    18,    52,   279,   209,  -399,  -399,   206,
    -399,   521,  -399,   159,  -399,   210,    23,  -399,   104,  1144,
     203,   174,  -399,  -399,   199,  -399,  -399,  -399,  -399,  1047,
    -399,  -399,  -399,   206,  -399,  -399,  -399,   157,    18,  -399,
      18,   212,  -399,  -399,   203,   -13,  -399,  -399,   -33,   217,
     217,  1047,  1047,  -399,  1047,   672,   734,  1047,  1047,  1047,
    1047,  1047,  1047,   377,  -399,  -399,  -399,  -399,  1148,   224,
      65,    28,   184,   193,   189,   223,   344,   118,   101,   -15,
    -399,   129,   110,  -399,  -399,  -399,  -399,  -399,  -399,  -399,
    -399,  -399,   203,  -399,  1157,   234,   216,   579,  -399,  -399,
    -399,   182,   203,   237,  -399,  -399,    13,   129,  -399,  -399,
     244,  -399,  -399,   243,  -399,   239,  -399,   245,   240,   246,
    -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,  1047,  -399,
    -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,
    -399,  -399,  -399,  -399,  -399,  1047,  1047,  -399,  -399,  1047,
    -399,  -399,  1047,  1047,  1047,  1047,  -399,  -399,  -399,  -399,
    1047,  -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,  1047,
    -399,  -399,  -399,  1047,  -399,  -399,  1047,  -399,  -399,  -399,
    1047,   861,  1047,    24,   340,  -399,  -399,  -399,   216,   212,
    -399,  1047,  -399,   249,    39,   249,   579,   249,   285,   249,
     954,    52,    52,   263,   237,  1047,   462,  -399,    18,    52,
     261,  -399,   579,  -399,  -399,  -399,  -399,  -399,  -399,  -399,
    -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,
      52,   239,  -399,  -399,  -399,  1047,   521,  -399,  -399,  -399,
    -399,  1047,  -399,  -399,   827,  -399,  1047,   264,  -399,  -399,
     262,  -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,
    -399,  -399,  -399,   268,   271,  1047,  -399,  -399,  -399,   269,
     275,  -399,  -399,  -399,  -399,  -399,  -399,   276,  -399,  -399,
    -399,  -399,  1047,   579,   284,   768,   579,   308,   281,   298,
     579,  -399,    52,  -399,  -399,    52,    97,    52,   280,   286,
     199,  -399,  -399,  -399,  -399,  -399,   291,  -399,   239,   240,
    -399,  -399,  -399,  1047,  -399,  -399,   294,   368,   368,   295,
     329,   152,   250,   297,   301,   342,   256,  -399,  -399,   249,
    -399,  -399,   299,  -399,  -399,  -399,   307,   237,   314,   317,
    -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,
    -399,  -399,  -399,  -399,   579,  -399,  -399,   311,   579,   579,
    1047,  1047,    52,    40,  1047,    18,  -399,  -399,  -399,  -399,
     579,  -399,  -399,  -399,  -399,   282,  -399,  -399,  1047,  -399,
    -399,    52,   203,  -399,  1047,   323,  -399,   312,  -399,  -399,
     579,   237,   579,  -399,   363,  -399,  -399,   326,  -399,  -399,
     579,  -399
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -399,  -399,  -399,  -399,  -399,  -399,   373,  -399,   372,  -399,
      17,   -42,  -399,  -399,  -399,  -399,   273,   290,  -114,   266,
     -71,   260,  -399,  -399,  -399,  -399,  -156,   241,  -399,  -399,
    -399,  -399,  -158,   242,   -59,  -399,  -136,  -398,  -399,  -399,
      88,   283,   190,  -399,    93,  -399,    71,  -182,  -399,  -313,
    -327,  -399,  -399,  -399,  -399,  -399,  -399,  -399,   -54,  -399,
     -51,  -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,
    -112,  -101,  -399,  -399,  -399,   -27,  -399,  -399,  -399,  -399,
    -399,  -399,  -399,  -399,  -399,  -399,   121,  -225,  -399,  -399,
    -399,  -399,  -399,     4,   -16,   114,   360,  -399,     9,  -399,
     310,  -399,   328,   -31,  -399,  -217,  -399,  -399,  -355,  -399,
    -399,  -399,    -7,  -399,    59,  -399,  -308,  -309,  -161,  -399,
    -399,  -399,   156,  -399,   155,  -399,   153,   161,   158,   149,
    -399,   141,  -399,   138,  -399,   140,  -399,   134,  -399,   371,
    -399,   272,  -399,   -82,   270,   -26,  -186,  -399,  -399,  -190,
     137,  -399,   222,  -399,   -28
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -221
static const yytype_int16 yytable[] =
{
      42,    43,    72,   240,   185,    23,   187,   164,   207,   427,
     260,    64,   403,    34,   404,    28,   445,    28,    54,   110,
      29,    32,   426,   159,   428,    77,   430,   462,   236,   377,
       1,    78,   432,   250,   255,   172,    27,   437,    28,    79,
      54,    93,    45,    91,    57,    28,    54,   237,    11,    12,
      13,    14,    15,    16,    17,    18,   424,   317,    29,   229,
      29,   374,   518,   496,   150,   318,   446,   319,  -170,   321,
     162,   375,   124,   125,    19,   127,   328,    23,    23,   241,
     405,    29,   129,    30,   -39,    93,   373,    91,    29,   132,
     186,    63,    65,   485,   139,   425,   460,   456,   142,   468,
     163,   519,   165,   473,   406,    58,    39,   388,     7,     8,
       9,    10,    46,    59,   459,   129,   467,    47,   110,   376,
      23,    30,    23,    30,   389,   390,   435,   177,   203,   290,
      40,   184,    67,    69,    48,    58,    70,   291,    23,    81,
      82,    44,    54,   238,    30,   153,   158,   476,   477,    23,
     232,    30,   233,    83,   154,    23,   502,    65,    49,    80,
     438,   388,   436,   287,    98,   158,    97,   509,   261,    98,
     421,   511,   512,   154,    94,   314,   288,    99,   315,   388,
      73,    74,    99,   523,   388,   321,   326,   322,   112,   327,
     113,   514,   516,   115,    95,    96,   521,   116,   260,   120,
     121,   118,   310,   532,   311,   532,   184,   270,   312,   126,
     525,   134,   440,   532,    50,   529,    51,   131,    52,    53,
     448,     7,     8,     9,    10,   451,   188,    85,    86,    87,
      88,    89,   489,   491,   137,   323,   324,   133,   159,   136,
      97,   407,   416,    98,   388,    81,    82,    11,    12,    13,
      14,    15,    16,    17,    18,   149,    99,   100,   101,    83,
     189,   388,   102,   143,   103,   145,   168,   490,   492,   193,
     151,   175,   173,   194,   169,   195,   234,   196,   174,   286,
     293,   331,   482,     7,     8,     9,    10,   294,   295,   296,
     297,   330,   487,   298,   299,   506,   418,   237,   431,   433,
     434,   379,   380,   381,   384,   422,   383,   441,   386,    11,
      12,    13,    14,    15,    16,    17,    18,   429,   439,   321,
     129,   203,   442,   452,   453,   454,   166,   469,   444,    20,
     455,   472,  -157,    85,    86,    87,    88,    89,   457,   458,
     461,   470,  -220,   388,     7,     8,     9,    10,  -219,   535,
     484,   488,   493,   494,   498,  -140,   261,   388,   499,   167,
     500,   501,   301,   505,   504,   477,   527,   476,   510,   531,
      11,    12,    13,    14,    15,    16,    17,    18,   302,   303,
     447,     7,     8,     9,    10,   530,   537,   524,   540,   304,
     474,    20,    37,   475,    38,   481,   194,   140,    11,    12,
      13,    14,    15,    16,    17,    18,   161,    11,    12,    13,
      14,    15,    16,    17,    18,   141,   176,   420,   230,   231,
     408,   419,   160,   443,   329,   508,   375,   507,   541,   418,
     418,   536,   305,   306,   497,   268,   307,   308,   415,   111,
     148,   130,   486,   449,   203,   392,   394,   393,   408,   397,
     398,   399,    40,   396,   401,   395,   400,   269,     0,   245,
     517,   417,   247,   372,     0,     0,     7,     8,     9,    10,
       0,   188,     0,     0,    98,     0,   333,   522,   334,   526,
      40,   335,   336,   337,     0,   338,     0,    99,     0,    20,
      81,    82,    11,    12,    13,    14,    15,    16,    17,    18,
     339,   340,   341,   342,    83,   189,   343,     0,   190,   191,
     192,   344,     0,     0,   193,   345,     0,     0,   194,     0,
     195,     0,   346,   256,     0,     7,     8,     9,    10,     0,
     197,   198,     0,     0,     0,     0,   199,     0,   200,   201,
       0,   202,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,    13,    14,    15,    16,    17,    18,     0,
       0,     0,   248,   249,     0,     0,   203,   347,   262,   263,
     264,   265,   266,   267,    20,     0,     0,     0,    85,    86,
      87,    88,    89,     7,     8,     9,    10,     0,   188,     0,
       0,    98,     0,   333,     0,   334,     0,     0,   335,   336,
     337,     0,   338,     0,    99,     0,     0,    81,    82,    11,
      12,    13,    14,    15,    16,    17,    18,   339,   340,   341,
     342,    83,   189,   343,     0,   190,   191,   192,   344,     0,
       0,   193,   345,    20,     0,   194,     0,   195,     0,   346,
       0,     0,     0,     0,     0,     0,     0,   197,   198,     0,
       0,     0,     0,   199,     0,   200,   201,     0,   202,     0,
       0,     0,     0,     0,     0,     0,    81,    82,    11,    12,
      13,    14,    15,    16,    17,    18,     7,     8,     9,    10,
      83,   188,     0,   203,   347,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,    85,    86,    87,    88,    89,
      81,    82,    11,    12,    13,    14,    15,    16,    17,    18,
       0,     0,     0,     0,    83,   189,     0,     0,   190,   191,
     192,     0,     0,     0,   193,     0,     0,     0,   194,     0,
     195,   251,   196,     0,     0,     0,   252,     0,     0,     0,
     197,   198,     0,     0,     0,     0,   199,     0,   200,   201,
      40,   202,     0,     0,    85,    86,    87,    88,    89,     0,
       0,     0,     0,     0,    11,    12,    13,    14,    15,    16,
      17,    18,     7,     8,     9,    10,   203,   188,     0,     0,
      98,     0,     0,     0,    20,     0,     0,     0,    85,    86,
      87,    88,    89,    99,     0,   256,    81,    82,    11,    12,
      13,    14,    15,    16,    17,    18,     0,     0,     0,     0,
      83,   189,     0,     0,   190,   191,   192,     0,     0,     0,
     193,     0,     0,     0,   194,     0,   195,     0,   196,     0,
       0,     0,     0,     0,     0,     0,   197,   198,     0,     0,
       0,     0,   199,     0,   200,   201,    40,   202,     0,     0,
      85,    86,    87,     0,    89,     0,     0,    11,    12,    13,
      14,    15,    16,    17,    18,     7,     8,     9,    10,     0,
     188,     0,   203,     0,     0,     0,     0,     0,     0,     0,
      20,     0,     0,     0,    85,    86,    87,    88,    89,    81,
      82,    11,    12,    13,    14,    15,    16,    17,    18,     0,
       0,     0,     0,    83,   189,     0,     0,   190,   191,   192,
       0,     0,     0,   193,     0,     0,     0,   194,   402,   195,
       0,   196,     0,     0,     0,     0,     0,     0,     0,   197,
     198,     0,     0,     0,     0,   199,     0,   200,   201,    40,
     202,     0,     0,    85,    86,    87,     0,    89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       9,    10,     0,   188,     0,   203,     0,     0,     0,     0,
       0,     0,     0,    20,     0,     0,     0,    85,    86,    87,
      88,    89,    81,    82,    11,    12,    13,    14,    15,    16,
      17,    18,     0,     0,     0,     0,    83,   189,     0,     0,
     190,   191,   192,     0,     0,     0,   193,     0,     0,     0,
     194,     0,   195,     0,   196,     0,     0,     0,     0,     0,
       0,     0,   197,   198,     0,     0,     0,     0,   199,     0,
     200,   201,     0,   202,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     8,     9,    10,     0,   188,     0,   203,    65,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
      85,    86,    87,    88,    89,    81,    82,    11,    12,    13,
      14,    15,    16,    17,    18,     0,     0,     0,     0,    83,
     189,     0,     0,   190,   191,   192,     0,     0,     0,   193,
       0,     0,     0,   194,     0,   195,     0,   196,     0,     0,
       0,     0,     0,     0,     0,   197,   198,     7,     8,     9,
      10,   199,     0,   200,   201,     0,   202,    81,    82,    11,
      12,    13,    14,    15,    16,    17,    18,     0,     0,     0,
       0,    83,     0,    11,    12,    13,    14,    15,    16,    17,
      18,   203,     0,     0,     0,     0,    84,     0,     0,    20,
       0,     0,     0,    85,    86,    87,    88,    89,     0,   178,
       0,     0,     0,    19,    11,    12,    13,    14,    15,    16,
      17,    18,   178,     0,     0,     0,     0,    11,    12,    13,
      14,    15,    16,    17,    18,     0,     0,     0,     0,     0,
       0,   179,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    40,     0,   271,     0,    85,    86,    87,    88,    89,
       0,   272,     0,   273,     0,    20,   274,     0,     0,   275,
       0,   276,     0,   277,     0,   278,     0,     0,     0,   279,
       0,     0,     0,   280,     0,   281,     0,     0,   282,     0,
     283,   284,   180,     0,     0,     0,    40,     0,     0,     0,
       0,     0,     0,     0,     0,   180,     0,     0,     0,    40
};

static const yytype_int16 yycheck[] =
{
      28,    29,    44,   185,   160,     1,   164,   143,   169,   336,
     196,    39,   321,     4,   322,    15,   371,    15,    34,    78,
      58,     4,   335,    56,   337,    56,   339,   425,   184,   246,
       3,    62,   340,   194,   195,   149,     0,   345,    15,    67,
      56,    69,    33,    69,    35,    15,    62,    60,    30,    31,
      32,    33,    34,    35,    36,    37,    17,    72,    58,   173,
      58,   243,    22,   461,   135,    80,   375,    82,    63,    56,
     141,    58,   100,   101,    60,   103,   232,    73,    74,   112,
      56,    58,   110,   121,    61,   113,   242,   113,    58,   115,
     161,    61,   105,   448,   122,    56,   423,   405,   126,   426,
     142,    61,   144,   430,    80,   105,    63,   268,     4,     5,
       6,     7,     8,   113,   422,   143,   425,    13,   177,   106,
     116,   121,   118,   121,   285,   286,   343,   158,   104,   101,
     112,   159,   106,    56,    30,   105,    59,   109,   134,    28,
      29,   119,   158,   185,   121,   122,   137,    50,    51,   145,
     178,   121,   180,    42,   137,   151,   469,   105,    54,   106,
     346,   322,   344,    98,    12,   156,     9,   494,   196,    12,
     331,   498,   499,   156,    59,    74,   111,    25,    77,   340,
      26,    27,    25,   510,   345,    56,    76,    58,    80,    79,
      64,   500,   501,    65,    73,    74,   504,    10,   384,    36,
      37,    10,    84,   530,    86,   532,   234,   203,    90,    33,
     518,    11,   348,   540,   110,   524,   112,    57,   114,   115,
     381,     4,     5,     6,     7,   386,     9,   116,   117,   118,
     119,   120,   457,   458,    60,   106,   107,   116,    56,   118,
       9,   323,   324,    12,   405,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,   134,    25,    26,    27,    42,
      43,   422,    31,    64,    33,    62,   145,   457,   458,    52,
      64,    61,   151,    56,    65,    58,    64,    60,   119,    55,
      96,    65,   440,     4,     5,     6,     7,    94,    99,    66,
      67,    57,   453,    70,    71,   477,   324,    60,   340,   341,
     342,    57,    59,    64,    64,    56,    61,   349,    62,    30,
      31,    32,    33,    34,    35,    36,    37,    32,   346,    56,
     348,   104,    61,    59,    62,    57,    47,    19,   370,   112,
      59,    33,    63,   116,   117,   118,   119,   120,    63,    63,
      56,    60,    62,   504,     4,     5,     6,     7,    62,   531,
      59,    57,    57,    24,    57,   105,   384,   518,    57,    80,
      18,   105,    18,    56,    65,    51,   522,    50,    57,    57,
      30,    31,    32,    33,    34,    35,    36,    37,    34,    35,
     376,     4,     5,     6,     7,    62,    23,   105,    62,    45,
     432,   112,    19,   435,    22,   437,    56,   124,    30,    31,
      32,    33,    34,    35,    36,    37,   140,    30,    31,    32,
      33,    34,    35,    36,    37,   125,   156,   329,   177,   177,
      80,   328,   139,   352,   234,   479,    58,   478,   540,   457,
     458,   532,    88,    89,   461,    58,    92,    93,   324,    79,
     130,   113,   449,   384,   104,   289,   293,   292,    80,   300,
     309,   313,   112,   295,   320,   294,   316,    80,    -1,   189,
     502,   324,   190,   241,    -1,    -1,     4,     5,     6,     7,
      -1,     9,    -1,    -1,    12,    -1,    14,   505,    16,   521,
     112,    19,    20,    21,    -1,    23,    -1,    25,    -1,   112,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    46,    47,
      48,    49,    -1,    -1,    52,    53,    -1,    -1,    56,    -1,
      58,    -1,    60,    61,    -1,     4,     5,     6,     7,    -1,
      68,    69,    -1,    -1,    -1,    -1,    74,    -1,    76,    77,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,   191,   192,    -1,    -1,   104,   105,   197,   198,
     199,   200,   201,   202,   112,    -1,    -1,    -1,   116,   117,
     118,   119,   120,     4,     5,     6,     7,    -1,     9,    -1,
      -1,    12,    -1,    14,    -1,    16,    -1,    -1,    19,    20,
      21,    -1,    23,    -1,    25,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    -1,    46,    47,    48,    49,    -1,
      -1,    52,    53,   112,    -1,    56,    -1,    58,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    -1,
      -1,    -1,    -1,    74,    -1,    76,    77,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,     4,     5,     6,     7,
      42,     9,    -1,   104,   105,    -1,    -1,    -1,    -1,    -1,
      -1,   112,    -1,    -1,    -1,   116,   117,   118,   119,   120,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,    47,
      48,    -1,    -1,    -1,    52,    -1,    -1,    -1,    56,    -1,
      58,    59,    60,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      68,    69,    -1,    -1,    -1,    -1,    74,    -1,    76,    77,
     112,    79,    -1,    -1,   116,   117,   118,   119,   120,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,     4,     5,     6,     7,   104,     9,    -1,    -1,
      12,    -1,    -1,    -1,   112,    -1,    -1,    -1,   116,   117,
     118,   119,   120,    25,    -1,    61,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    46,    47,    48,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    56,    -1,    58,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    -1,    -1,
      -1,    -1,    74,    -1,    76,    77,   112,    79,    -1,    -1,
     116,   117,   118,    -1,   120,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,     4,     5,     6,     7,    -1,
       9,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,    -1,    -1,    -1,   116,   117,   118,   119,   120,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    46,    47,    48,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    56,    57,    58,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      69,    -1,    -1,    -1,    -1,    74,    -1,    76,    77,   112,
      79,    -1,    -1,   116,   117,   118,    -1,   120,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,     5,
       6,     7,    -1,     9,    -1,   104,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,    -1,    -1,    -1,   116,   117,   118,
     119,   120,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      46,    47,    48,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      56,    -1,    58,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    74,    -1,
      76,    77,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     4,     5,     6,     7,    -1,     9,    -1,   104,   105,
      -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,
     116,   117,   118,   119,   120,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    46,    47,    48,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    56,    -1,    58,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    69,     4,     5,     6,
       7,    74,    -1,    76,    77,    -1,    79,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    42,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,   104,    -1,    -1,    -1,    -1,    57,    -1,    -1,   112,
      -1,    -1,    -1,   116,   117,   118,   119,   120,    -1,    25,
      -1,    -1,    -1,    60,    30,    31,    32,    33,    34,    35,
      36,    37,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,    -1,    65,    -1,   116,   117,   118,   119,   120,
      -1,    73,    -1,    75,    -1,   112,    78,    -1,    -1,    81,
      -1,    83,    -1,    85,    -1,    87,    -1,    -1,    -1,    91,
      -1,    -1,    -1,    95,    -1,    97,    -1,    -1,   100,    -1,
     102,   103,   108,    -1,    -1,    -1,   112,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   108,    -1,    -1,    -1,   112
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,   124,   125,   126,   128,   130,     4,     5,     6,
       7,    30,    31,    32,    33,    34,    35,    36,    37,    60,
     112,   131,   209,   216,   217,   218,   277,     0,    15,    58,
     121,   127,   133,   147,   221,   222,   129,   129,   131,    63,
     112,   220,   277,   277,   119,   221,     8,    13,    30,    54,
     110,   112,   114,   115,   217,   226,   227,   221,   105,   113,
     132,   133,   221,    61,   277,   105,   134,   106,   219,    56,
      59,   224,   134,    26,    27,   136,   138,   226,   226,   277,
     106,    28,    29,    42,    57,   116,   117,   118,   119,   120,
     225,   268,   269,   277,    59,   209,   209,     9,    12,    25,
      26,    27,    31,    33,   135,   137,   150,   153,   154,   156,
     157,   219,    80,    64,   223,    65,    10,   139,    10,   140,
      36,    37,   151,   152,   277,   277,    33,   277,   159,   277,
     225,    57,   268,   209,    11,   142,   209,    60,   143,   277,
     139,   140,   277,    64,   155,    62,   149,   208,   223,   209,
     143,    64,   141,   122,   133,   144,   145,   146,   221,    56,
     164,   142,   143,   134,   159,   134,    47,    80,   209,    65,
     158,   162,   141,   209,   119,    61,   144,   226,    25,    57,
     108,   165,   166,   168,   277,   149,   143,   155,     9,    43,
      46,    47,    48,    52,    56,    58,    60,    68,    69,    74,
      76,    77,    79,   104,   216,   229,   234,   241,   243,   245,
     247,   249,   250,   251,   252,   254,   256,   258,   260,   262,
     263,   264,   265,   266,   267,   268,   270,   273,   276,   141,
     150,   156,   277,   277,    64,   163,   149,    60,   134,   148,
     170,   112,   164,   274,   275,   267,   271,   264,   262,   262,
     241,    59,    64,   230,   232,   241,    61,   236,   237,   238,
     269,   277,   262,   262,   262,   262,   262,   262,    58,    80,
     216,    65,    73,    75,    78,    81,    83,    85,    87,    91,
      95,    97,   100,   102,   103,   242,    55,    98,   111,   246,
     101,   109,   248,    96,    94,    99,    66,    67,    70,    71,
     253,    18,    34,    35,    45,    88,    89,    92,    93,   255,
      84,    86,    90,   257,    74,    77,   259,    72,    80,    82,
     261,    56,    58,   106,   107,   228,    76,    79,   149,   165,
      57,    65,   167,    14,    16,    19,    20,    21,    23,    38,
      39,    40,    41,    44,    49,    53,    60,   105,   157,   160,
     169,   170,   171,   173,   174,   175,   176,   177,   179,   180,
     184,   185,   186,   187,   195,   196,   204,   205,   206,   207,
     240,   241,   275,   149,   170,    58,   106,   228,   272,    57,
      59,    64,   231,    61,    64,   235,    62,   239,   241,   241,
     241,   244,   245,   247,   249,   250,   251,   252,   254,   256,
     258,   260,    57,   240,   239,    56,    80,   266,    80,   210,
     211,   212,   213,   214,   215,   218,   266,   273,   277,   167,
     163,   241,    56,   172,    17,    56,   172,   173,   172,    32,
     172,   134,   239,   134,   134,   228,   170,   239,   269,   277,
     159,   134,    61,   169,   134,   231,   240,   216,   241,   237,
     233,   241,    59,    62,    57,    59,   239,    63,    63,   239,
     173,    56,   160,   197,   198,   199,   201,   240,   173,    19,
      60,   188,    33,   173,   134,   134,    50,    51,   181,   182,
     183,   134,   155,   161,    59,   231,   235,   241,    57,   210,
     272,   210,   272,    57,    24,   178,   160,   198,    57,    57,
      18,   105,   172,   189,    65,    56,   170,   183,   181,   173,
      57,   173,   173,   200,   240,   202,   240,   134,    22,    61,
     190,   239,   277,   173,   105,   239,   134,   149,   203,   240,
      62,    57,   173,   193,   194,   170,   194,    23,   191,   192,
      62,   193
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 6:

/* Line 1455 of yacc.c  */
#line 311 "AS3.y"
    { (yyval.t) = NULL; ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 367 "AS3.y"
    { (yyval.t) = NULL; ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 371 "AS3.y"
    { (yyval.t) = NULL; ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 374 "AS3.y"
    { (yyval.t) = NULL; ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 378 "AS3.y"
    { (yyval.t) = NULL; ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 401 "AS3.y"
    { (yyval.t) = NULL; ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 409 "AS3.y"
    { (yyval.t) = NULL; ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 422 "AS3.y"
    { (yyval.t) = NULL; ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 432 "AS3.y"
    { (yyval.t) = NULL; ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 443 "AS3.y"
    { (yyval.t) = NULL; ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 467 "AS3.y"
    { (yyval.t) = NULL; ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 526 "AS3.y"
    { (yyval.t) = NULL; ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 550 "AS3.y"
    { (yyval.t) = NULL; ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 556 "AS3.y"
    {(yyval.t) = NULL; ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 565 "AS3.y"
    { (yyval.t) = NULL ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 590 "AS3.y"
    { (yyval.t) = NULL; ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 594 "AS3.y"
    { (yyval.t) = NULL; ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 598 "AS3.y"
    { (yyval.t) = NULL; ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 669 "AS3.y"
    { (yyval.t) = NULL; ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 678 "AS3.y"
    { (yyval.t) = NULL; ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 686 "AS3.y"
    { (yyval.t) = NULL; ;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 700 "AS3.y"
    { (yyval.t) = NULL; ;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 728 "AS3.y"
    { (yyval.t) = NULL; ;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 745 "AS3.y"
    { (yyval.t) = NULL; ;}
    break;



/* Line 1455 of yacc.c  */
#line 2362 "AS3.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



