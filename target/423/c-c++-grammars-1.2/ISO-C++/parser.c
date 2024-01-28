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
#line 48 "parser.y" /* yacc.c:339  */

#include <stdio.h>

extern int lineno;

static void yyerror(char *s);

#line 74 "y.tab.c" /* yacc.c:339  */

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

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    INTEGER = 259,
    FLOATING = 260,
    CHARACTER = 261,
    STRING = 262,
    TYPEDEF_NAME = 263,
    NAMESPACE_NAME = 264,
    CLASS_NAME = 265,
    ENUM_NAME = 266,
    TEMPLATE_NAME = 267,
    ELLIPSIS = 268,
    COLONCOLON = 269,
    DOTSTAR = 270,
    ADDEQ = 271,
    SUBEQ = 272,
    MULEQ = 273,
    DIVEQ = 274,
    MODEQ = 275,
    XOREQ = 276,
    ANDEQ = 277,
    OREQ = 278,
    SL = 279,
    SR = 280,
    SREQ = 281,
    SLEQ = 282,
    EQ = 283,
    NOTEQ = 284,
    LTEQ = 285,
    GTEQ = 286,
    ANDAND = 287,
    OROR = 288,
    PLUSPLUS = 289,
    MINUSMINUS = 290,
    ARROWSTAR = 291,
    ARROW = 292,
    ASM = 293,
    AUTO = 294,
    BOOL = 295,
    BREAK = 296,
    CASE = 297,
    CATCH = 298,
    CHAR = 299,
    CLASS = 300,
    CONST = 301,
    CONST_CAST = 302,
    CONTINUE = 303,
    DEFAULT = 304,
    DELETE = 305,
    DO = 306,
    DOUBLE = 307,
    DYNAMIC_CAST = 308,
    ELSE = 309,
    ENUM = 310,
    EXPLICIT = 311,
    EXPORT = 312,
    EXTERN = 313,
    FALSE = 314,
    FLOAT = 315,
    FOR = 316,
    FRIEND = 317,
    GOTO = 318,
    IF = 319,
    INLINE = 320,
    INT = 321,
    LONG = 322,
    MUTABLE = 323,
    NAMESPACE = 324,
    NEW = 325,
    OPERATOR = 326,
    PRIVATE = 327,
    PROTECTED = 328,
    PUBLIC = 329,
    REGISTER = 330,
    REINTERPRET_CAST = 331,
    RETURN = 332,
    SHORT = 333,
    SIGNED = 334,
    SIZEOF = 335,
    STATIC = 336,
    STATIC_CAST = 337,
    STRUCT = 338,
    SWITCH = 339,
    TEMPLATE = 340,
    THIS = 341,
    THROW = 342,
    TRUE = 343,
    TRY = 344,
    TYPEDEF = 345,
    TYPEID = 346,
    TYPENAME = 347,
    UNION = 348,
    UNSIGNED = 349,
    USING = 350,
    VIRTUAL = 351,
    VOID = 352,
    VOLATILE = 353,
    WCHAR_T = 354,
    WHILE = 355
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define INTEGER 259
#define FLOATING 260
#define CHARACTER 261
#define STRING 262
#define TYPEDEF_NAME 263
#define NAMESPACE_NAME 264
#define CLASS_NAME 265
#define ENUM_NAME 266
#define TEMPLATE_NAME 267
#define ELLIPSIS 268
#define COLONCOLON 269
#define DOTSTAR 270
#define ADDEQ 271
#define SUBEQ 272
#define MULEQ 273
#define DIVEQ 274
#define MODEQ 275
#define XOREQ 276
#define ANDEQ 277
#define OREQ 278
#define SL 279
#define SR 280
#define SREQ 281
#define SLEQ 282
#define EQ 283
#define NOTEQ 284
#define LTEQ 285
#define GTEQ 286
#define ANDAND 287
#define OROR 288
#define PLUSPLUS 289
#define MINUSMINUS 290
#define ARROWSTAR 291
#define ARROW 292
#define ASM 293
#define AUTO 294
#define BOOL 295
#define BREAK 296
#define CASE 297
#define CATCH 298
#define CHAR 299
#define CLASS 300
#define CONST 301
#define CONST_CAST 302
#define CONTINUE 303
#define DEFAULT 304
#define DELETE 305
#define DO 306
#define DOUBLE 307
#define DYNAMIC_CAST 308
#define ELSE 309
#define ENUM 310
#define EXPLICIT 311
#define EXPORT 312
#define EXTERN 313
#define FALSE 314
#define FLOAT 315
#define FOR 316
#define FRIEND 317
#define GOTO 318
#define IF 319
#define INLINE 320
#define INT 321
#define LONG 322
#define MUTABLE 323
#define NAMESPACE 324
#define NEW 325
#define OPERATOR 326
#define PRIVATE 327
#define PROTECTED 328
#define PUBLIC 329
#define REGISTER 330
#define REINTERPRET_CAST 331
#define RETURN 332
#define SHORT 333
#define SIGNED 334
#define SIZEOF 335
#define STATIC 336
#define STATIC_CAST 337
#define STRUCT 338
#define SWITCH 339
#define TEMPLATE 340
#define THIS 341
#define THROW 342
#define TRUE 343
#define TRY 344
#define TYPEDEF 345
#define TYPEID 346
#define TYPENAME 347
#define UNION 348
#define UNSIGNED 349
#define USING 350
#define VIRTUAL 351
#define VOID 352
#define VOLATILE 353
#define WCHAR_T 354
#define WHILE 355

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 325 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  88
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4514

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  127
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  189
/* YYNRULES -- Number of rules.  */
#define YYNRULES  487
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  802

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   355

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   114,     2,     2,     2,   116,   111,     2,
     101,   102,   110,   112,   109,   113,   106,   115,   125,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   120,   122,
     107,   121,   108,   119,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   104,     2,   105,   117,   126,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   123,   118,   124,   103,     2,     2,     2,
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
      95,    96,    97,    98,    99,   100
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    81,    81,    85,    86,    91,    96,   101,   102,   107,
     112,   120,   124,   125,   126,   127,   128,   132,   136,   140,
     144,   148,   149,   157,   165,   166,   167,   168,   169,   170,
     171,   175,   176,   180,   181,   182,   183,   184,   188,   192,
     196,   197,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   226,   227,   231,   232,   233,   234,
     235,   239,   240,   241,   242,   243,   244,   245,   246,   250,
     251,   252,   253,   254,   255,   259,   260,   264,   268,   272,
     273,   277,   278,   282,   286,   287,   291,   292,   296,   297,
     298,   302,   303,   304,   305,   309,   310,   311,   315,   316,
     317,   321,   322,   323,   324,   325,   329,   330,   331,   335,
     336,   340,   341,   345,   346,   350,   351,   355,   356,   360,
     361,   365,   366,   367,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   385,   386,   390,   398,   399,
     400,   401,   402,   403,   404,   405,   409,   410,   411,   415,
     419,   423,   424,   428,   429,   430,   434,   435,   439,   440,
     441,   445,   446,   450,   451,   452,   453,   457,   465,   466,
     470,   471,   472,   473,   474,   475,   476,   480,   481,   482,
     483,   484,   488,   492,   493,   494,   495,   496,   500,   501,
     505,   506,   507,   508,   509,   513,   514,   515,   525,   526,
     527,   528,   529,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,   548,   549,   550,   554,   555,
     556,   557,   567,   571,   572,   576,   577,   581,   596,   597,
     601,   602,   606,   610,   614,   618,   628,   632,   636,   637,
     641,   645,   649,   650,   658,   659,   663,   667,   668,   672,
     673,   674,   675,   679,   680,   681,   685,   689,   690,   694,
     695,   699,   703,   707,   708,   712,   713,   714,   718,   719,
     723,   724,   728,   729,   730,   731,   735,   736,   740,   744,
     745,   749,   750,   751,   755,   756,   771,   775,   776,   780,
     781,   782,   786,   787,   791,   792,   793,   794,   795,   799,
     800,   804,   805,   806,   815,   819,   827,   831,   832,   836,
     837,   838,   842,   843,   844,   852,   856,   860,   864,   868,
     869,   873,   877,   878,   886,   890,   891,   892,   893,   894,
     895,   896,   897,   898,   899,   900,   901,   902,   903,   904,
     905,   906,   907,   908,   909,   910,   911,   912,   913,   914,
     915,   916,   917,   918,   919,   920,   921,   922,   923,   924,
     925,   926,   927,   928,   929,   930,   931,   939,   943,   944,
     948,   949,   953,   954,   955,   956,   957,   958,   962,   972,
     973,   977,   978,   979,   983,   987,   995,   999,  1003,  1007,
    1011,  1012,  1013,  1014,  1018,  1022,  1026,  1027,  1034,  1036,
    1039,  1041,  1044,  1046,  1049,  1051,  1054,  1056,  1059,  1061,
    1064,  1066,  1069,  1071,  1074,  1076,  1079,  1081,  1084,  1086,
    1089,  1091,  1094,  1096,  1099,  1101,  1104,  1106,  1109,  1111,
    1114,  1116,  1119,  1121,  1124,  1126,  1129,  1131,  1134,  1136,
    1139,  1141,  1144,  1146,  1149,  1151,  1154,  1156,  1159,  1161,
    1164,  1166,  1169,  1171,  1174,  1176,  1179,  1181,  1184,  1186,
    1189,  1191,  1194,  1196,  1199,  1201,  1204,  1206,  1209,  1211,
    1214,  1216,  1219,  1221,  1224,  1226,  1229,  1231
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "INTEGER", "FLOATING",
  "CHARACTER", "STRING", "TYPEDEF_NAME", "NAMESPACE_NAME", "CLASS_NAME",
  "ENUM_NAME", "TEMPLATE_NAME", "ELLIPSIS", "COLONCOLON", "DOTSTAR",
  "ADDEQ", "SUBEQ", "MULEQ", "DIVEQ", "MODEQ", "XOREQ", "ANDEQ", "OREQ",
  "SL", "SR", "SREQ", "SLEQ", "EQ", "NOTEQ", "LTEQ", "GTEQ", "ANDAND",
  "OROR", "PLUSPLUS", "MINUSMINUS", "ARROWSTAR", "ARROW", "ASM", "AUTO",
  "BOOL", "BREAK", "CASE", "CATCH", "CHAR", "CLASS", "CONST", "CONST_CAST",
  "CONTINUE", "DEFAULT", "DELETE", "DO", "DOUBLE", "DYNAMIC_CAST", "ELSE",
  "ENUM", "EXPLICIT", "EXPORT", "EXTERN", "FALSE", "FLOAT", "FOR",
  "FRIEND", "GOTO", "IF", "INLINE", "INT", "LONG", "MUTABLE", "NAMESPACE",
  "NEW", "OPERATOR", "PRIVATE", "PROTECTED", "PUBLIC", "REGISTER",
  "REINTERPRET_CAST", "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC",
  "STATIC_CAST", "STRUCT", "SWITCH", "TEMPLATE", "THIS", "THROW", "TRUE",
  "TRY", "TYPEDEF", "TYPEID", "TYPENAME", "UNION", "UNSIGNED", "USING",
  "VIRTUAL", "VOID", "VOLATILE", "WCHAR_T", "WHILE", "'('", "')'", "'~'",
  "'['", "']'", "'.'", "'<'", "'>'", "','", "'*'", "'&'", "'+'", "'-'",
  "'!'", "'/'", "'%'", "'^'", "'|'", "'?'", "':'", "'='", "';'", "'{'",
  "'}'", "'0'", "'_'", "$accept", "typedef_name", "namespace_name",
  "original_namespace_name", "namespace_alias", "class_name", "enum_name",
  "template_name", "identifier", "literal", "integer_literal",
  "character_literal", "floating_literal", "string_literal",
  "boolean_literal", "translation_unit", "primary_expression",
  "id_expression", "unqualified_id", "qualified_id",
  "nested_name_specifier", "class_or_namespace_name", "postfix_expression",
  "expression_list", "pseudo_destructor_name", "unary_expression",
  "unary_operator", "new_expression", "new_placement", "new_type_id",
  "new_declarator", "direct_new_declarator", "new_initializer",
  "delete_expression", "cast_expression", "pm_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "statement", "labeled_statement",
  "expression_statement", "compound_statement", "statement_seq",
  "selection_statement", "condition", "iteration_statement",
  "for_init_statement", "jump_statement", "declaration_statement",
  "declaration_seq", "declaration", "block_declaration",
  "simple_declaration", "decl_specifier", "decl_specifier_seq",
  "storage_class_specifier", "function_specifier", "type_specifier",
  "simple_type_specifier", "type_name", "elaborated_type_specifier",
  "enum_specifier", "enumerator_list", "enumerator_definition",
  "enumerator", "namespace_definition", "named_namespace_definition",
  "original_namespace_definition", "extension_namespace_definition",
  "unnamed_namespace_definition", "namespace_body",
  "namespace_alias_definition", "qualified_namespace_specifier",
  "using_declaration", "using_directive", "asm_definition",
  "linkage_specification", "init_declarator_list", "init_declarator",
  "declarator", "direct_declarator", "ptr_operator", "cv_qualifier_seq",
  "cv_qualifier", "declarator_id", "type_id", "type_specifier_seq",
  "abstract_declarator", "direct_abstract_declarator",
  "parameter_declaration_clause", "parameter_declaration_list",
  "parameter_declaration", "function_definition", "function_body",
  "initializer", "initializer_clause", "initializer_list",
  "class_specifier", "class_head", "class_key", "member_specification",
  "member_declaration", "member_declarator_list", "member_declarator",
  "pure_specifier", "constant_initializer", "base_clause",
  "base_specifier_list", "base_specifier", "access_specifier",
  "conversion_function_id", "conversion_type_id", "conversion_declarator",
  "ctor_initializer", "mem_initializer_list", "mem_initializer",
  "mem_initializer_id", "operator_function_id", "operator",
  "template_declaration", "template_parameter_list", "template_parameter",
  "type_parameter", "template_id", "template_argument_list",
  "template_argument", "explicit_instantiation", "explicit_specialization",
  "try_block", "function_try_block", "handler_seq", "handler",
  "exception_declaration", "throw_expression", "exception_specification",
  "type_id_list", "declaration_seq_opt", "TEMPLATE_opt",
  "nested_name_specifier_opt", "expression_list_opt", "COLONCOLON_opt",
  "new_placement_opt", "new_initializer_opt", "new_declarator_opt",
  "expression_opt", "statement_seq_opt", "condition_opt",
  "decl_specifier_seq_opt", "init_declarator_list_opt", "identifier_opt",
  "enumerator_list_opt", "TYPENAME_opt", "initializer_opt",
  "cv_qualifier_seq_opt", "exception_specification_opt",
  "constant_expression_opt", "abstract_declarator_opt",
  "type_specifier_seq_opt", "direct_abstract_declarator_opt",
  "parameter_declaration_list_opt", "ELLIPSIS_opt", "ctor_initializer_opt",
  "COMMA_opt", "member_specification_opt", "base_clause_opt",
  "member_declarator_list_opt", "SEMICOLON_opt", "pure_specifier_opt",
  "constant_initializer_opt", "access_specifier_opt", "VIRTUAL_opt",
  "conversion_declarator_opt", "EXPORT_opt", "handler_seq_opt",
  "assignment_expression_opt", "type_id_list_opt", YY_NULL
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,    40,    41,   126,    91,    93,    46,    60,    62,    44,
      42,    38,    43,    45,    33,    47,    37,    94,   124,    63,
      58,    61,    59,   123,   125,    48,    95
};
# endif

#define YYPACT_NINF -520

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-520)))

#define YYTABLE_NINF -487

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    3888,  -520,   -30,  -520,  -520,  -520,  -520,  -520,  -520,    55,
    -520,  -520,    70,  -520,  -520,  -520,  -520,  -520,  -520,    52,
    -520,  -520,  -520,  -520,  -520,  3950,  -520,    90,  -520,  -520,
     192,  -520,  -520,  -520,  -520,   142,  1012,  -520,  -520,  -520,
    -520,  4104,  -520,  -520,  -520,  -520,  -520,  -520,  -520,  -520,
    -520,  -520,  -520,  -520,  -520,  -520,  -520,  -520,  -520,  -520,
    -520,    33,   710,  -520,  -520,  -520,  -520,   358,   264,    89,
      70,  -520,  -520,   358,    47,  -520,  2473,  -520,  2381,    57,
       5,    77,  -520,   358,    60,    90,  -520,    90,  -520,  -520,
    -520,  -520,  2289,  -520,  -520,  -520,  -520,  -520,  -520,  -520,
     115,   239,   183,  -520,   358,   111,  -520,   486,   108,    37,
    -520,   161,  -520,   194,   200,   108,  -520,   849,   129,   175,
     171,   239,   239,  2381,  -520,   236,  -520,  2381,    90,  2381,
    4042,   239,  2581,   322,  -520,   244,  -520,  -520,  -520,   358,
     358,  -520,  -520,  -520,    28,   250,   265,  -520,   255,  -520,
    2289,   260,  -520,   709,   258,  2705,   111,   358,   239,   226,
    -520,  -520,  -520,  -520,  -520,  -520,  -520,  -520,   287,  -520,
      37,  -520,   108,   273,  3153,   138,  1842,  -520,  -520,  -520,
    -520,   261,  4222,  3265,  -520,  -520,  -520,  -520,   228,   385,
     486,  -520,  4355,   280,  -520,  -520,   295,  -520,   299,   303,
     312,  -520,   314,   302,   358,   335,  -520,   355,  -520,  -520,
    -520,  -520,  -520,  -520,  -520,  -520,  -520,  -520,  -520,  -520,
    -520,  -520,  -520,  -520,  -520,  -520,  -520,  -520,  -520,  -520,
     362,   367,   379,  -520,   390,  -520,  -520,  -520,  -520,  -520,
    -520,  -520,  -520,  -520,  -520,  -520,  -520,  -520,  4166,   378,
    -520,  -520,  -520,  -520,   496,    60,  -520,  -520,    60,  -520,
    -520,  -520,  2289,   320,   404,  -520,   395,   397,  -520,  -520,
    -520,  -520,   413,  3489,  3489,   421,   429,  -520,   434,  3601,
     441,  -520,  2817,  -520,   423,  2705,   322,  -520,  -520,  -520,
    -520,  -520,   115,  -520,  -520,  -520,  -520,  -520,  -520,  -520,
    -520,   131,  -520,  3489,  -520,  -520,  -520,    71,   176,     1,
     371,   401,   417,   440,   443,   444,   538,   860,  -520,  -520,
     464,  -520,   787,   298,  -520,  -520,   904,  -520,  -520,  -520,
     268,   468,  -520,   482,   358,  -520,  -520,  -520,   -53,   261,
     114,  -520,   464,  -520,  -520,   474,   484,   358,  1477,  -520,
    -520,  1233,  -520,  -520,  3783,   491,   477,  -520,   575,     2,
    -520,  -520,   492,    37,  -520,    87,   493,    79,  -520,   340,
    -520,  -520,  -520,   239,  3489,  -520,  -520,  -520,  -520,   496,
    -520,  2705,   500,   504,  -520,  -520,  -520,  -520,   378,  -520,
     358,  -520,   479,   490,  -520,  -520,  1110,  -520,  -520,  -520,
    -520,   144,  3489,  -520,  3700,  -520,  -520,  -520,  -520,  -520,
    4415,  4415,  4415,  2705,  -520,  4415,  -520,  -520,  2705,  -520,
     124,   511,  -520,  -520,   647,  2929,  3153,   672,  -520,  3489,
    3489,  3489,  3489,  3489,  3489,  3489,  3489,  3489,  3489,  3489,
    3489,  3489,  3489,  3489,  3489,  3489,  3489,  3489,  -520,  -520,
    -520,  -520,  -520,  -520,  -520,  -520,  -520,  -520,  3489,  3153,
    -520,  3153,  2929,   357,   787,  -520,   224,  -520,   272,  -520,
    2705,  3377,   513,  -520,    90,   226,  -520,    90,   322,   576,
    -520,  3153,   138,  2929,   322,  -520,  -520,   509,   501,  3489,
     503,   514,  1721,   530,   239,   534,   239,  2182,   535,   261,
     544,   519,   540,  -520,  -520,  -520,  -520,  1355,  -520,  -520,
    -520,  -520,  -520,  -520,   525,   529,   264,   416,   537,   726,
     849,   539,    37,  4293,  -520,  -520,  -520,  -520,   543,  4355,
     545,  4042,  4355,  -520,  -520,  -520,   343,  -520,  -520,  -520,
     566,  -520,  -520,  -520,  -520,   556,  -520,  -520,   546,   572,
     579,   581,   580,   151,   588,  -520,  3153,  3489,   859,   771,
    -520,   -18,  -520,   358,   590,   599,   -35,   859,   841,  -520,
    -520,  -520,  -520,    71,    71,    71,   176,   176,     1,     1,
     371,   371,   371,   371,   401,   401,   417,   440,   443,   444,
     538,    64,  -520,   600,   603,  -520,  4222,  3265,  -520,   602,
    -520,  3153,  -520,  1570,   358,  -520,   358,  -520,   607,  -520,
     576,  -520,  -520,   608,  -520,  1599,   587,  -520,   594,  -520,
    1721,   616,  1954,   604,  2705,   606,   611,  2705,   576,  2705,
    1721,  -520,  -520,  -520,  3153,   486,  3153,   634,  -520,  -520,
    4415,   347,  4415,  -520,  -520,  -520,   624,   627,   628,  -520,
     633,  -520,  -520,  -520,  -520,   486,  -520,    -4,   849,  -520,
     486,   300,  -520,  -520,  -520,   849,  -520,  3153,  -520,  -520,
     636,   631,  3489,   166,  4415,   644,   533,   322,   322,  1813,
    -520,  -520,  -520,  -520,  -520,  1721,  -520,   652,  -520,  2068,
    -520,  -520,   540,   653,   108,  -520,   654,  -520,   656,  -520,
    -520,  -520,  -520,   658,  -520,  -520,  -520,   715,  -520,  3153,
    3153,  3153,  3153,  -520,  -520,   486,  -520,  -520,   486,   749,
    -520,  -520,    37,  -520,  -520,  -520,   666,  2929,  -520,  -520,
    3153,  -520,   669,   533,  -520,  -520,  -520,  -520,   242,   668,
    -520,  3153,  -520,   670,  1721,   655,  1721,  1721,  1448,   239,
     167,   170,   207,   217,  -520,  -520,   685,   634,   644,   688,
      29,  3489,  -520,  -520,  -520,   261,   218,  3041,   739,  3153,
    -520,  -520,  -520,   686,   692,   675,  -520,  -520,  -520,  -520,
     486,  -520,  -520,  -520,  -520,   694,  -520,   682,   703,  1721,
    -520,  4415,  -520,   794,  -520,  -520,  -520,  1721,  -520,  -520,
    -520,  -520
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     430,   417,     0,   200,   216,   214,   299,   267,   223,   416,
     207,   481,   203,   222,   196,   205,   218,   219,   204,     0,
     201,   217,   220,   202,   300,   430,   197,   416,   301,   221,
     438,   206,   224,   268,   215,     0,   430,   178,   180,   187,
     198,   431,   193,   195,   194,   208,   211,   210,   186,   238,
     240,   241,   239,   189,   190,   191,   188,   185,   212,   181,
     209,     0,   434,   182,   183,   184,    23,   412,   416,     0,
       0,    11,   435,   412,     0,    20,   430,     5,   430,     0,
       0,     0,   394,     0,     0,   416,   439,   416,     1,   179,
     203,   199,   430,     5,     7,    10,    41,     3,     4,    40,
       0,     0,     0,     8,   412,   464,   413,     0,   416,   442,
     264,   433,   254,   440,   257,   416,   259,   412,     0,     0,
       0,     0,   436,   430,   253,     0,   245,   430,   416,   430,
     430,     0,   416,     0,    33,     0,    35,    34,    37,     0,
       0,   322,   323,   324,   438,     0,   410,   307,   468,   463,
     430,     0,   308,   416,     0,   416,   464,   412,     0,   416,
     465,   297,     2,     9,   227,   225,   226,   213,     0,   443,
     442,   263,   416,   458,   416,   416,   416,   441,   459,   287,
     256,     0,   416,   416,   258,   269,    31,    32,   410,    37,
       0,   192,   416,     0,   229,   237,   437,   233,   235,     0,
       0,   244,     0,     0,     0,     0,   395,   230,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   373,   374,
     336,   335,     0,   347,     0,   350,   351,   372,   341,   345,
     339,   348,   342,   343,   344,   346,   349,   340,   450,   478,
     325,   334,    36,   249,     0,     0,   306,   411,     0,   469,
     305,   302,   430,   470,   467,   309,     0,     0,   296,    17,
      19,    18,   417,   416,   416,     0,     0,    22,     0,   416,
       0,    25,   484,    21,     0,   416,    84,    79,    80,    81,
      82,    83,   393,    24,    12,    13,    14,    15,    16,    42,
      30,    71,    96,   416,    77,    78,    98,   101,   105,   108,
     111,   116,   119,   121,   123,   125,   127,   129,   131,   391,
     208,   392,   416,     0,   389,   133,   412,   298,    39,   228,
     474,   316,   317,   476,     0,   262,   266,   255,   440,     0,
       0,    64,     0,   333,   328,   329,     0,     0,   416,   291,
     289,   416,   288,   286,   416,     0,   455,   280,   456,   129,
     147,   447,     0,   442,   270,   299,     0,   416,   381,     0,
     378,   380,   251,     0,   416,   232,   252,   243,   246,     0,
     242,   416,     0,     0,   375,   376,   451,   272,   478,   479,
       0,   326,     0,     0,    38,   303,   416,   471,   473,   311,
     312,   416,   416,   304,     0,    26,    28,    27,    72,    73,
     416,   416,   416,   416,    75,   416,   485,   404,   416,   145,
       0,     0,    56,    57,   416,   416,   416,   416,    74,   416,
     416,   416,   416,   416,   416,   416,   416,   416,   416,   416,
     416,   416,   416,   416,   416,   416,   416,   416,   138,   139,
     135,   136,   137,   143,   142,   144,   140,   141,   416,   416,
     134,   416,   416,   416,   416,   449,   274,   271,     0,   388,
     416,   416,   418,   475,   416,   416,   477,   416,     0,     0,
     290,   416,   416,   416,     0,   293,   294,   460,     0,   416,
       0,     0,   416,     0,     0,     0,     0,   416,     0,     0,
       0,    33,   425,   161,   148,   149,   150,   416,   151,   152,
     153,   154,   177,   155,     0,     0,   416,   416,   282,   416,
     412,   284,   442,   416,   457,   278,   261,   265,   382,   416,
     384,   430,   416,   234,   236,   247,     0,   338,   337,   327,
       0,   250,   248,   314,   315,   470,   310,   313,     0,     0,
       0,     0,     0,     0,     0,    29,   416,   416,   417,     0,
      53,   410,    55,   412,   415,     0,     0,   417,     0,    49,
      54,    99,   100,   102,   103,   104,   106,   107,   109,   110,
     114,   115,   112,   113,   117,   118,   120,   122,   124,   126,
     128,     0,   132,     0,     0,   273,   416,   416,   390,     0,
      94,   416,   419,   416,     0,   318,     0,   319,     0,   397,
     482,    65,   330,     0,   332,   416,     0,   173,     0,   174,
     416,     0,   416,     0,   416,     0,     0,   416,     0,   416,
     416,   162,   159,   160,   416,     0,   416,   444,   279,   281,
     416,     0,   416,   377,   379,   231,     0,     0,     0,    76,
       0,    62,    63,   146,    97,     0,    52,   410,     0,    51,
       0,     0,    44,    43,    48,     0,    47,   416,    45,   277,
       0,     0,   416,     0,   416,   420,   422,     0,     0,   416,
     483,   398,   331,   295,   292,   416,   158,     0,   171,   416,
     172,   176,   166,     0,   416,   175,     0,   396,     0,   156,
     283,   213,   285,     0,   445,   260,   383,     0,   385,   416,
     416,   416,   416,    36,    68,     0,    50,    69,     0,     0,
      46,   130,   442,   276,    95,    87,     0,   416,   421,    85,
     416,   423,    90,   422,    88,   320,   321,   403,   416,     0,
     157,   416,   429,     0,   416,     0,   416,   416,   416,   434,
       0,     0,     0,     0,    67,    70,     0,   444,   420,     0,
       0,   416,    89,   400,   401,     0,     0,   416,   163,   416,
     165,   168,   406,   487,     0,   386,    61,    58,    60,    59,
       0,   275,    86,    93,    91,     0,   399,     0,     0,   416,
     167,   416,   405,     0,    66,    92,   169,   416,   164,   407,
     387,   170
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -520,  -520,  -225,   793,  -520,    -9,  -520,  -152,    18,  -520,
    -520,  -520,  -520,    31,  -520,  -520,  -520,   -94,   -64,   -61,
     699,  -520,  -520,  -167,   387,   542,  -520,  -520,  -520,  -520,
    -520,  -520,  -520,  -520,   105,   122,    44,    85,   134,   126,
     373,   377,   372,   386,   366,  -153,  -150,   317,  -520,   278,
    -356,  -441,  -520,   203,  -170,  -520,  -520,  -512,  -520,  -520,
    -520,  -520,  -520,   -20,   136,   204,   -33,  -168,  -520,  -520,
     282,     0,  -178,  -520,  -520,  -520,   459,  -520,  -520,  -520,
    -520,  -520,  -520,    19,  -520,  -520,   -47,  -520,  -520,  -520,
    -520,   673,   -66,  -520,   267,  -520,  -105,  -520,   169,  -123,
    -444,  -520,   245,  -520,  -161,   -42,   507,  -520,  -322,  -520,
    -520,  -520,  -520,  -520,  -520,  -520,   439,  -520,  -520,  -520,
    -520,   374,  -144,  -520,  -520,  -520,  -520,   375,  -520,  -520,
     582,  -520,   -32,   319,   328,  -520,   -45,   483,   393,  -520,
    -520,  -520,  -520,  -519,  -520,  -520,  -520,  -520,  -520,    34,
    -520,   -60,  -430,    75,  -520,   107,   137,  -487,  -520,  -520,
     271,  -520,    -8,  -520,  -520,  -520,  -164,   110,   275,  -258,
    -520,  -520,  -520,  -520,   702,  -520,   -98,   728,  -520,  -520,
    -520,  -520,  -520,  -520,   502,  -520,  -520,  -520,  -520
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   164,    96,    97,    98,    99,   166,   100,   134,   293,
     294,   295,   296,   297,   298,    35,   299,   300,   186,   187,
     146,   102,   301,   564,   562,   302,   303,   304,   602,   675,
     731,   732,   728,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   419,   461,   502,
     361,   503,   504,   505,   506,   507,   508,   693,   509,   689,
     510,   511,    36,    37,   512,    39,    40,    41,    42,    43,
      44,   342,   167,    46,    47,   196,   197,   198,    48,    49,
      50,    51,    52,   125,    53,   203,    54,    55,    56,    57,
     111,   112,   168,   114,   115,   169,    58,   116,   321,   322,
     465,   466,   355,   356,   368,    59,   353,   177,   350,   487,
      60,    61,    62,   149,   150,   264,   265,   397,   398,   160,
     331,   332,   151,   136,   250,   389,   178,   344,   345,   346,
     137,   251,    63,   369,   370,   371,   189,   323,   324,    64,
      65,   513,   179,   609,   610,   739,   325,   704,   773,   126,
     258,   107,   565,   326,   603,   729,   734,   514,   515,   743,
     516,   118,   266,   199,    87,   180,   171,   705,   362,   595,
     387,   468,   358,   525,   181,   616,   154,   161,   267,   260,
     399,   400,   474,   477,   391,    69,   681,   417,   774
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      45,    74,   113,   292,   170,    82,   336,   340,    91,   249,
     626,   352,   364,   121,   354,   333,    89,   103,   534,   594,
     135,   357,   103,   185,   354,    45,   486,    72,   103,   392,
     359,   145,   593,   360,    66,   458,    45,    80,   103,   138,
     544,    45,    84,    76,   158,   147,   547,   103,   174,   184,
     148,   621,   261,   613,   105,    71,   124,   190,    71,   103,
     152,    77,   103,    71,   467,   170,   631,   257,   176,     1,
     663,    70,    95,   594,   556,    67,    45,    75,    45,   254,
      72,   257,    71,     7,    73,   660,   429,   263,   103,   145,
      71,   680,    45,     1,   103,   103,   521,   328,   165,   715,
      67,   120,    83,   147,     1,   103,   338,   430,   148,   697,
     206,    67,   103,   434,   435,   696,    67,   698,   152,   156,
      86,   459,     1,    45,   252,   386,   128,    45,   129,    45,
      45,   132,    45,   618,   784,    33,    38,   104,   556,   194,
     195,    71,    88,   117,   379,   103,   202,    71,   205,   207,
      45,    67,     1,    67,   535,   320,    92,   200,     1,   103,
     139,    38,   140,   133,   395,   422,   423,    67,   424,   352,
     122,    72,    38,   556,   119,    78,   329,   742,  -434,   686,
     127,   165,    45,   117,   667,   130,   473,  -434,  -434,   699,
     117,   393,    45,   343,   394,  -434,  -434,   157,    67,   527,
    -434,   145,    67,   204,    67,    67,    84,    67,  -434,   108,
     138,   406,    38,   138,    38,   147,   480,   103,   109,   110,
     148,   359,   155,   481,   360,    67,   555,   103,   117,   292,
     152,   159,   425,   556,   334,   426,  -413,   427,  -413,  -413,
       1,   103,    71,   359,   740,   108,   360,   117,    45,   359,
     347,   191,   360,   651,   109,   110,     1,    67,   170,    38,
     556,    85,    45,    38,  -434,    38,    38,    67,   725,   776,
     172,    68,   777,   193,   478,   481,   556,   252,     1,   556,
     788,   103,   192,   173,    86,   320,   431,   484,   518,   103,
     405,   432,   433,   683,   764,   174,    68,   759,   141,   142,
     143,   182,   103,   768,   183,   770,   771,    68,   162,   778,
      94,   163,    95,   257,   175,   176,   556,  -458,   292,   779,
     787,    91,   330,    67,   390,  -453,   556,   556,  -453,   628,
     560,   333,    94,   569,    95,   545,   359,    67,   363,   360,
     141,   142,   143,   517,  -402,   103,  -452,    68,   798,    68,
     257,   320,   109,   110,    45,   354,   801,   528,   637,   530,
     201,   354,   639,   153,   354,   108,   253,    93,    94,   501,
      95,     1,   256,   596,   109,   110,   597,   259,   408,   409,
     262,   320,   268,    72,   351,    72,  -432,  -416,  -416,   335,
    -416,   195,     1,   175,    68,   436,   437,   390,    68,    -8,
      68,    68,   372,   718,   373,   785,   469,   470,   428,   173,
      45,    45,    45,   320,   248,    45,    71,   170,   320,    72,
     374,   153,    93,    94,   378,    95,   185,   375,   354,   520,
       1,   438,   439,   103,   673,   357,   376,   248,   377,   103,
     175,   396,    83,  -458,   359,   442,   443,   360,   531,   532,
     338,   645,   470,   184,   421,   707,   532,   701,   463,   380,
     635,  -452,   381,   390,   656,   659,   382,   109,   110,   607,
     320,   383,   319,   664,   666,   614,   117,   714,   576,   577,
     676,   384,   717,   719,   404,    67,    67,    67,   109,   110,
      67,   341,   320,   349,   162,   385,    94,   163,    95,   563,
     343,   694,   563,   661,   694,    93,   694,   320,   440,   441,
     501,   643,   623,   401,   625,   402,   388,   517,   103,   403,
    -452,   578,   579,    45,   418,   501,   109,   110,   410,    45,
     248,    45,    45,   153,   571,   572,   411,   754,   390,   390,
     755,   412,  -416,  -416,   677,  -416,   678,     1,   415,   604,
     334,   444,   606,   573,   574,   575,   738,   347,   757,   103,
     445,   103,   446,   420,   716,   462,   694,   248,   584,   585,
     447,   720,   580,   581,   582,   583,   600,   475,   476,   548,
     549,   550,   551,   482,   552,   483,   523,   554,   524,   464,
     103,   117,   117,   522,   117,   786,    45,   526,    67,   416,
     529,   541,   794,    45,    67,   537,    67,    67,   359,   538,
     103,   360,   542,   557,   601,   103,   103,   170,   615,   608,
     320,   519,   320,   617,   320,   619,   165,   320,   745,   320,
     320,   622,   103,   103,   620,   624,   627,   730,   501,   630,
      45,   800,    45,   109,   110,   629,   713,   632,   501,   556,
      71,   165,   165,   633,   646,   388,    93,    94,   634,    95,
     636,   558,   654,   248,   640,   349,   642,    38,   735,   736,
     103,    67,   763,   103,    45,    71,   363,   396,    67,    45,
     647,    93,    94,   649,    95,   320,   567,   648,   650,   320,
     652,   420,   248,   248,   248,   248,   553,   248,   319,   481,
     248,   662,   668,   501,   566,   669,   165,   672,   679,   165,
     682,   684,    71,    71,   685,    67,   687,    67,   132,    93,
      94,   703,    95,     1,     1,   709,   691,   128,   710,   711,
     464,   464,   559,   695,   712,   103,   723,   591,   722,  -448,
       1,   775,   341,   132,   320,   727,   320,   320,    45,    67,
     133,   390,   248,   741,    67,   744,   746,   568,   747,   748,
     749,   101,   501,   756,   501,   501,   106,    72,   758,   117,
     765,   165,   106,   761,    71,   133,   769,   724,   592,   341,
      93,    94,   131,    95,   519,   658,   519,   319,   780,   320,
     783,    45,   767,   789,   792,   791,   793,   320,   611,   795,
     341,     1,    68,   106,   796,   797,    95,   501,   390,   706,
     108,   708,    79,   117,   570,   501,   188,   586,   588,   109,
     110,   414,   587,    67,   590,   688,   690,   517,  -448,  -434,
    -452,  -466,   533,   589,  -448,  -448,   109,   110,   106,   255,
     546,   670,   132,   726,    71,   337,   479,  -448,   641,   605,
      93,    94,    71,    95,   407,   665,   106,   612,    93,    94,
     644,    95,    71,   598,   536,   782,    67,   781,    93,    94,
     762,    95,   671,   653,   133,   339,   448,   449,   450,   451,
     452,   453,   454,   455,   327,   248,   456,   457,   463,  -448,
     539,  -452,     0,   458,     0,  -448,  -448,   109,   110,     0,
       0,     0,   692,   106,     0,   692,   248,   692,     0,   248,
       0,   248,   132,    93,    94,     0,    95,   772,   341,     0,
     132,     0,   248,     0,   248,     0,     0,     0,     0,     0,
     132,     0,   349,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   733,   133,     0,     0,     0,     0,     0,
       0,   700,   133,   702,   471,     0,   248,     0,     0,     0,
     799,   248,   655,     0,     0,     0,     0,   692,     0,     0,
       0,   248,     0,     0,   472,     0,     0,     0,     0,   459,
       0,   460,     0,     0,   721,     0,     0,   750,   751,   752,
     753,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     733,     0,     0,     0,     0,   519,     0,     0,   760,     0,
       0,     0,  -409,     0,     0,     0,     0,     0,     0,   766,
    -416,  -416,  -416,  -416,  -416,   106,     1,     0,     0,     0,
     248,     0,     0,   106,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   341,     0,   106,     0,     0,     0,
       2,     3,     4,     0,     0,     0,     5,     6,     7,     0,
       0,     0,     0,     0,     8,     0,     0,     9,    10,    11,
      12,     0,    13,   248,    14,     0,     0,    15,    16,    17,
      18,    19,     0,     0,     0,     0,   790,    20,     0,   540,
      21,    22,     0,    23,     0,    24,     0,    25,     0,     0,
       0,     0,    26,     0,    27,    28,    29,    30,    31,    32,
      33,    34,     0,    71,   269,   270,   271,    75,     0,    93,
      94,     0,    95,   561,   272,     0,   561,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -409,     0,     0,     0,
       0,     0,     0,     0,   273,   274,     0,     0,     0,     0,
       4,     0,     0,     0,     5,     0,     0,   275,     0,     0,
       0,     0,     8,   276,     0,     0,     0,     0,     0,   277,
      13,     0,     0,     0,     0,     0,    16,    17,     0,     0,
       0,   132,     0,     0,     0,     0,   278,     0,    21,    22,
     279,     0,   280,     0,     0,     0,   281,     0,   283,     0,
       0,   284,     0,     0,    29,     0,     0,    32,     0,    34,
       0,   285,     0,   286,     0,     0,     0,     0,     0,   188,
     287,   288,   289,   290,   291,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   543,    71,   269,   270,   271,
      75,     0,    93,    94,     0,    95,     0,   272,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   657,     0,     0,
       0,     0,   106,     0,     0,     0,   657,   273,   274,     0,
       0,     2,     3,     4,   488,   489,     0,     5,     6,     7,
     275,   490,   491,     0,   492,     8,   276,     0,     9,    10,
       0,    90,   277,    13,   493,    14,   494,   495,    15,    16,
      17,    18,   496,   106,   132,   106,     0,     0,    20,   278,
     497,    21,    22,   279,    23,   280,    24,   498,     0,   281,
     282,   283,   499,    26,   284,    27,    28,    29,    30,    31,
      32,    33,    34,   500,   285,     0,   286,     0,     0,     0,
       0,     0,     0,   287,   288,   289,   290,   291,     0,     0,
       0,     0,     0,     0,     0,  -424,   351,  -426,    71,   269,
     270,   271,    75,     0,    93,    94,     0,    95,     0,   272,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   273,
     274,     0,     0,     2,     3,     4,   488,   489,     0,     5,
       6,     7,   275,   490,   491,     0,   492,     8,   276,     0,
       9,    10,     0,    90,   277,    13,   493,    14,   494,   495,
      15,    16,    17,    18,   496,     0,   132,     0,     0,     0,
      20,   278,   497,    21,    22,   279,    23,   280,    24,   498,
       0,   281,   282,   283,   499,    26,   284,    27,    28,    29,
      30,    31,    32,    33,    34,   500,   285,     0,   286,     0,
       0,     0,     1,     0,     0,   287,   288,   289,   290,   291,
       0,     0,     0,     0,     0,     0,     0,  -424,   351,  -427,
      71,   269,   270,   271,    75,     0,    93,    94,     4,    95,
       0,   272,     5,     6,     7,     0,     0,     0,     0,     0,
       8,     0,     0,     9,     0,     0,     0,     0,    13,     0,
       0,   273,   274,     0,    16,    17,     0,     4,     0,     0,
       0,     5,     0,     0,   275,     0,    21,    22,     0,     8,
     276,    24,     0,     0,     0,     0,   277,    13,     0,     0,
      27,    28,    29,    16,    17,    32,    33,    34,   132,     0,
    -486,     0,     0,   278,     0,    21,    22,   279,     0,   280,
       0,     0,     0,   281,   282,   283,     0,     0,   284,     0,
       0,    29,     0,     0,    32,     0,    34,     0,   285,     0,
     286,     0,     0,     0,     1,     0,     0,   287,   288,   289,
     290,   291,     0,     0,     0,     0,     0,     0,     0,     0,
     348,   485,    71,   269,   270,   271,    75,     0,    93,    94,
       4,    95,     0,   272,     5,     6,     7,     0,     0,     0,
       0,     0,     8,     0,     0,     9,     0,     0,     0,     0,
      13,     0,     0,   273,   274,     0,    16,    17,     0,     4,
       0,     0,     0,     5,     0,     0,   275,     0,    21,    22,
       0,     8,   276,    24,     0,     0,     0,     0,   277,    13,
       0,     0,    27,    28,    29,    16,    17,    32,    33,    34,
     132,   674,     0,     0,     0,   278,     0,    21,    22,   279,
       0,   280,     0,     0,     0,   281,   282,   283,     0,     0,
     284,     0,     0,    29,     0,     0,    32,     0,    34,     0,
     285,     0,   286,     0,     0,     0,     0,     0,     0,   287,
     288,   289,   290,   291,     0,     0,     0,     0,     0,     0,
       0,     0,   348,  -461,    71,   269,   270,   271,    75,     0,
      93,    94,     0,    95,     0,   272,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   273,   274,     0,     0,     2,
       3,     4,   488,   489,     0,     5,     6,     7,   275,   490,
     491,     0,   492,     8,   276,     0,     9,    10,     0,    90,
     277,    13,   493,    14,   494,   495,    15,    16,    17,    18,
     496,     0,   132,     0,     0,     0,    20,   278,   497,    21,
      22,   279,    23,   280,    24,   498,     0,   281,   282,   283,
     499,    26,   284,    27,    28,    29,    30,    31,    32,    33,
      34,   500,   285,     0,   286,     0,   737,     1,     0,     0,
       0,   287,   288,   289,   290,   291,     0,     0,     0,     0,
       0,     0,     0,  -424,   351,    71,   269,   270,   271,    75,
       0,    93,    94,     4,    95,     0,   272,     5,     6,     7,
       0,     0,     0,     0,     0,     8,     0,     0,     9,     0,
       0,     0,     0,    13,     0,     0,   273,   274,     0,    16,
      17,     0,     4,     0,     0,     0,     5,     0,     0,   275,
       0,    21,    22,     0,     8,   276,    24,     0,     0,     0,
       0,   277,    13,     0,     0,    27,    28,    29,    16,    17,
      32,    33,    34,   132,     0,     0,     0,     0,   278,     0,
      21,    22,   279,     0,   280,     0,     0,     0,   281,   282,
     283,     0,     0,   284,     0,     0,    29,     0,     0,    32,
       0,    34,     0,   285,     0,   286,     0,     0,     0,     0,
       0,     0,   287,   288,   289,   290,   291,    71,   269,   270,
     271,    75,     0,    93,    94,   348,    95,     0,   272,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   273,   274,
       0,     0,     0,     3,     4,     0,     0,     0,     5,     6,
       7,   275,     0,     0,     0,     0,     8,   276,     0,     9,
      10,     0,    90,   277,    13,     0,    14,     0,     0,    15,
      16,    17,    18,     0,     0,   132,     0,     0,     0,    20,
     278,     0,    21,    22,   279,    23,   280,    24,     0,     0,
     281,   282,   283,     0,    26,   284,    27,    28,    29,     0,
      31,    32,    33,    34,     0,   285,     0,   286,     0,     0,
       0,     0,     0,     0,   287,   288,   289,   290,   291,     0,
       0,    71,   269,   270,   271,    75,  -424,    93,    94,     0,
      95,     0,   272,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   273,   274,     0,     0,     0,     0,     4,     0,
       0,     0,     5,     6,     7,   275,     0,     0,     0,     0,
       8,   276,     0,     9,     0,     0,     0,   277,    13,     0,
       0,     0,     0,     0,    16,    17,     0,     0,     0,   132,
       0,     0,     0,     0,   278,     0,    21,    22,   279,     0,
     280,    24,     0,     0,   281,   282,   283,     0,     0,   284,
      27,    28,    29,     0,     0,    32,    33,    34,     0,   285,
       0,   286,     0,     0,     0,     0,     0,     0,   287,   288,
     289,   290,   291,     0,     0,    71,   269,   270,   271,    75,
    -428,    93,    94,     0,    95,     0,   272,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   273,   274,     0,     0,
       0,     0,     4,     0,     0,     0,     5,     0,     0,   275,
       0,     0,     0,     0,     8,   276,     0,     0,     0,     0,
       0,   277,    13,     0,     0,     0,     0,     0,    16,    17,
       0,     0,     0,   132,     0,     0,     0,     0,   278,     0,
      21,    22,   279,     0,   280,     0,     0,     0,   281,   282,
     283,     0,     0,   284,     0,     0,    29,     0,     0,    32,
       0,    34,     0,   285,     0,   286,     0,     0,     0,     0,
       0,     0,   287,   288,   289,   290,   291,  -416,    93,    94,
    -416,    95,     0,     1,  -424,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     3,     4,
       0,     0,     0,     5,     6,     7,     0,     0,     0,     0,
       0,     8,     0,     0,     9,    10,    11,    90,     0,    13,
       0,    14,     0,     0,    15,    16,    17,    18,     0,     0,
       0,   141,   142,   143,    20,     0,     0,    21,    22,     0,
      23,     0,    24,     0,  -480,     0,     0,     0,     0,    26,
       0,    27,    28,    29,   144,    31,    32,    33,    34,  -416,
    -416,  -416,  -416,  -416,     0,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -462,     0,     0,     0,     0,     0,     2,
       3,     4,     0,     0,     0,     5,     6,     7,     0,     0,
       0,     0,     0,     8,     0,     0,     9,    10,    11,    12,
       0,    13,     0,    14,     0,     0,    15,    16,    17,    18,
      19,     0,     0,     0,     0,     0,    20,     0,     0,    21,
      22,     0,    23,     0,    24,     0,    25,     0,     0,     0,
       0,    26,     0,    27,    28,    29,    30,    31,    32,    33,
      34,  -416,  -416,  -416,  -416,  -416,     0,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -408,     0,     0,     0,     0,
       0,     2,     3,     4,     0,     0,     0,     5,     6,     7,
       0,     0,     0,     0,     0,     8,     0,     0,     9,    10,
      11,    12,     0,    13,     0,    14,     0,     0,    15,    16,
      17,    18,    19,     0,     0,     0,     0,     0,    20,     0,
       0,    21,    22,     0,    23,     0,    24,     0,    25,     0,
       0,     0,     0,    26,     0,    27,    28,    29,    30,    31,
      32,    33,    34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,   123,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,     0,
       0,     4,     0,     0,     0,     5,     6,     7,     0,     0,
       0,   230,     0,     8,     0,     0,     9,     0,     0,     0,
       0,    13,     0,     0,     0,     0,     0,    16,    17,     0,
       0,   231,     0,     0,     0,     0,     0,     0,     0,    21,
      22,     0,     0,     0,    24,     0,     0,     0,     0,     0,
       0,     0,     0,    27,    28,    29,     0,     0,    32,    33,
      34,     0,   232,     0,   233,   234,     0,     0,   235,   236,
     237,   238,   239,   240,     0,   241,   242,   243,   244,   245,
       0,     0,   246,     0,     0,     0,     0,   247,    71,   269,
     270,   271,    75,     0,    93,    94,     0,    95,     0,   272,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   273,
     274,     0,     0,     0,     0,     4,     0,     0,     0,     5,
       6,     7,   275,     0,     0,     0,     0,     8,   276,     0,
       9,     0,     0,     0,   277,    13,     0,     0,     0,     0,
       0,    16,    17,     0,     0,     0,   132,     0,     0,     0,
       0,   278,     0,    21,    22,   279,     0,   280,    24,     0,
       0,   281,   282,   283,     0,     0,   284,    27,    28,    29,
       0,     0,    32,    33,    34,     0,   285,     0,   286,     0,
       0,     0,     0,     0,     0,   287,   288,   289,   290,   291,
      71,   269,   270,   271,    75,  -416,    93,    94,  -416,    95,
       0,   272,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   273,   274,     0,     0,     0,     0,     4,     0,     0,
       0,     5,     0,     0,   275,     0,     0,  -416,     0,     8,
     276,     0,     0,     0,     0,     0,   277,    13,     0,     0,
       0,     0,     0,    16,    17,     0,     0,  -416,   132,     0,
       0,     0,     0,   278,     0,    21,    22,   279,     0,   280,
       0,     0,     0,   281,   282,   283,     0,     0,   284,     0,
       0,    29,     0,     0,    32,     0,    34,     0,   285,     0,
     286,     0,     0,     0,     0,     0,     0,   287,   288,   289,
     290,   291,    71,   269,   270,   271,    75,     0,    93,    94,
       0,    95,     0,   272,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   273,   274,     0,     0,     0,     0,     4,
       0,     0,     0,     5,     0,     0,   275,     0,     0,     0,
       0,     8,   276,     0,     0,     0,     0,     0,   277,    13,
       0,     0,     0,     0,     0,    16,    17,     0,     0,     0,
     132,     0,     0,     0,     0,   278,     0,    21,    22,   279,
       0,   280,     0,     0,     0,   281,   282,   283,     0,     0,
     284,     0,     0,    29,     0,     0,    32,     0,    34,     0,
     285,  -414,   286,     0,     0,     0,     0,     0,     0,   287,
     288,   289,   290,   291,    71,   269,   270,   271,    75,     0,
      93,    94,     0,    95,     0,   272,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   273,   274,     0,     0,     0,
       0,     4,     0,     0,     0,     5,     0,     0,   275,     0,
       0,     0,     0,     8,   276,     0,     0,     0,     0,     0,
     277,    13,     0,     0,     0,     0,     0,    16,    17,     0,
       0,     0,   132,     0,     0,     0,     0,   278,     0,    21,
      22,   279,     0,   280,     0,     0,     0,   281,   282,   283,
       0,     0,   284,     0,     0,    29,     0,     0,    32,     0,
      34,     0,   285,  -424,   286,     0,     0,     0,     0,     0,
       0,   287,   288,   289,   290,   291,    71,   269,   270,   271,
      75,     0,    93,    94,     0,    95,     0,   272,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   273,   274,     0,
       0,     0,     0,     4,     0,     0,     0,     5,     0,     0,
     275,     0,     0,     0,     0,     8,   276,     0,     0,     0,
       0,     0,   277,    13,     0,     0,     0,     0,     0,    16,
      17,     0,     0,     0,   132,     0,     0,     0,     0,   278,
       0,    21,    22,   279,     0,   280,     0,     0,     0,   281,
     282,   283,     0,     0,   284,     0,     0,    29,     0,     0,
      32,     0,    34,     0,   285,     0,   286,     0,     0,     0,
       0,     0,     0,   287,   288,   289,   290,   291,    71,   269,
     270,   271,    75,     0,    93,    94,     0,    95,     0,   272,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   273,
     274,     0,     0,     0,     0,     4,     0,     0,     0,     5,
       0,     0,   275,     0,     0,     0,     0,     8,   276,     0,
       0,     0,     0,     0,   277,    13,     0,     0,     0,     0,
       0,    16,    17,     0,     0,     0,   132,     0,     0,     0,
       0,   278,     0,    21,    22,   279,     0,   280,     0,     0,
       0,   281,     0,   283,     0,     0,   284,     0,     0,    29,
       0,     0,    32,     0,    34,     0,   285,     0,   286,     0,
    -446,     0,     0,     0,     0,   287,   288,   289,   290,   291,
      71,   269,   270,   271,    75,     0,    93,    94,     0,    95,
       0,   272,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   273,   274,     0,     0,     0,     0,     4,     0,     0,
       0,     5,     0,     0,   275,     0,     0,     0,     0,     8,
     276,     0,     0,     0,     0,     0,   277,    13,     0,     0,
       0,     0,     0,    16,    17,     0,     0,     0,   132,     0,
       0,     0,     0,   278,     0,    21,    22,   279,     0,   280,
       0,     0,     0,   281,     0,   283,     0,     0,   284,     0,
       0,    29,     0,     0,    32,     0,    34,     0,   285,     0,
     286,   599,     0,     0,     0,     0,     0,   287,   288,   289,
     290,   291,    71,   269,   270,   271,    75,     0,    93,    94,
       0,    95,     0,   272,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   273,   274,     0,     0,     0,     0,     4,
       0,     0,     0,     5,     0,     0,   275,     0,     0,     0,
       0,     8,   276,     0,     0,     0,     0,     0,   277,    13,
       0,     0,     0,     0,     0,    16,    17,     0,     0,     0,
     132,     0,     0,     0,     0,   278,     0,    21,    22,   279,
       0,   280,     0,     0,     0,   281,     0,   283,     0,     0,
     284,     0,     0,    29,     0,     0,    32,     0,    34,     0,
     285,     0,   286,     0,     0,     0,     0,     0,     0,   287,
     288,   289,   290,   291,    71,   269,   270,   271,    75,     0,
      93,    94,     0,    95,     0,   272,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   273,   274,     0,     0,     0,
       0,     4,     0,     0,     0,     5,     0,     0,   275,     0,
       0,     0,     0,     8,   276,     0,     0,     0,     0,     0,
     277,    13,     0,     0,     0,     0,     0,    16,    17,     0,
       0,     0,   132,     0,     0,     0,     0,   278,     0,    21,
      22,   279,     0,   280,     0,     0,     0,   281,     0,   283,
       0,     0,   284,     0,     0,    29,     0,     0,    32,     0,
      34,     0,   413,     0,   286,     0,     0,     0,     0,     0,
       0,   287,   288,   289,   290,   291,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     230,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     231,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -448,     1,     0,     0,
       0,   232,     0,   233,   234,     0,     0,   235,   236,   237,
     238,   239,   240,     0,   241,   242,   243,   244,   245,     0,
       0,   246,     3,     4,     0,     0,   247,     5,     6,     7,
       0,     0,     0,     0,     0,     8,     0,     0,     9,    10,
       0,    90,     0,    13,     0,    14,     0,     0,    15,    16,
      17,    18,     0,     0,     0,     0,     0,     0,    20,     0,
       0,    21,    22,     0,    23,     0,    24,     0,     0,     0,
       0,     0,     0,    26,     0,    27,    28,    29,     0,    31,
      32,    33,    34,     0,   517,  -448,     0,  -452,  -408,     0,
       0,  -448,  -448,   109,   110,     0,  -416,  -416,  -416,  -416,
    -416,     0,     1,     0,  -448,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     3,     4,     0,
       0,     0,     5,     6,     7,     0,     0,     0,     0,     0,
       8,     0,     0,     9,    10,    11,    12,     0,    13,     0,
      14,     0,     0,    15,    16,    17,    18,    19,  -416,  -416,
    -416,  -416,  -416,    20,     1,     0,    21,    22,     0,    23,
       0,    24,     0,    25,     0,     0,     0,     0,    26,     0,
      27,    28,    29,    30,    31,    32,    33,    34,     2,     3,
       4,     0,     0,     0,     5,     6,     7,     0,     0,     0,
       0,     0,     8,     0,     0,     9,    10,    11,    12,     0,
      13,     0,    14,     0,     0,    15,    16,    17,    18,    19,
       0,     0,     0,     0,     0,    20,     0,     0,    21,    22,
       0,    23,     0,    24,     0,    25,     0,     0,     0,     0,
      26,     0,    27,    28,    29,    30,    31,    32,    33,    34,
    -416,  -416,  -416,  -416,  -416,     0,     1,    81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     3,     4,     0,     0,     0,     5,     6,     7,     0,
       0,     0,     0,     0,     8,     0,     0,     9,    10,    11,
      12,     0,    13,     0,    14,     0,     0,    15,    16,    17,
      18,    19,  -416,  -416,  -416,  -416,  -416,    20,     1,     0,
      21,    22,     0,    23,     0,    24,     0,    25,     0,     0,
       0,     0,    26,     0,    27,    28,    29,    30,    31,    32,
      33,    34,     0,     3,     4,     0,     0,     0,     5,     6,
       7,     0,     0,     0,     0,     0,     8,     0,     0,     9,
      10,     0,    90,     0,    13,     0,    14,     0,     0,    15,
      16,    17,    18,     0,  -416,  -416,  -416,  -416,  -416,    20,
       1,     0,    21,    22,     0,    23,     0,    24,     0,     0,
       0,     0,     0,     0,    26,     0,    27,    28,    29,     0,
      31,    32,    33,    34,     0,     0,     4,     0,     0,     0,
       5,     6,     7,     0,     0,     0,     0,     0,     8,     0,
       0,     9,     0,     0,     0,     0,    13,     0,     0,     0,
       0,     0,    16,    17,     0,  -454,     1,     0,     0,     0,
       0,     0,     0,     0,    21,    22,     0,     0,     0,    24,
       0,     0,     0,     0,     0,     0,     0,     0,    27,    28,
      29,     3,     4,    32,    33,    34,     5,     6,     7,     0,
       0,     0,     0,     0,     8,     0,     0,     9,    10,     0,
      90,     0,    13,     0,    14,     0,     0,    15,    16,    17,
      18,     0,     0,     0,     0,     0,     0,    20,     0,     0,
      21,    22,     0,    23,     0,    24,   638,     1,     0,     0,
       0,     0,    26,     0,    27,    28,    29,     0,    31,    32,
      33,    34,     0,     0,  -454,     0,     0,     0,     0,     0,
       0,     0,     3,     4,     0,     0,     0,     5,     6,     7,
       0,     0,     0,     0,     0,     8,     0,     0,     9,    10,
       0,    90,     0,    13,     0,    14,     0,     0,    15,    16,
      17,    18,     0,     0,     0,     0,     0,     0,    20,     1,
       0,    21,    22,     0,    23,     0,    24,     0,     0,     0,
       0,     0,     0,    26,     0,    27,    28,    29,     0,    31,
      32,    33,    34,     0,     3,     4,     0,     0,     0,     5,
     365,     7,     0,     0,     0,     0,     0,     8,     0,     0,
       9,    10,     0,    90,     0,    13,     0,    14,     0,     0,
      15,    16,    17,    18,     0,     0,     0,     0,     0,     1,
      20,     0,     0,    21,    22,     0,    23,     0,    24,     0,
     366,     0,     0,     0,     0,    26,     0,   367,    28,    29,
       0,    31,    32,    33,    34,     4,     0,     0,     0,     5,
       6,     7,     0,     0,     0,     0,     0,     8,     0,     0,
       9,     0,     0,     0,     0,    13,     0,     0,     0,     0,
       0,    16,    17,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,    22,     0,     0,     0,    24,     0,
       0,     0,     0,     0,     0,     0,     0,    27,    28,    29,
       0,     0,    32,    33,    34
};

static const yytype_int16 yycheck[] =
{
       0,     9,    68,   155,   109,    25,   170,   174,    41,   132,
     497,   181,   190,    73,   182,   159,    36,    62,   374,   463,
      84,   182,    67,   117,   192,    25,   348,     9,    73,   254,
     183,    92,   462,   183,     0,    33,    36,    19,    83,    84,
     396,    41,    14,    12,   104,    92,   402,    92,   101,   115,
      92,   492,   150,   483,    62,     3,    76,   117,     3,   104,
      92,     9,   107,     3,   322,   170,   507,    85,   121,    14,
     105,   101,    12,   517,   109,     0,    76,     7,    78,   139,
      62,    85,     3,    46,     9,   103,    15,   153,   133,   150,
       3,   610,    92,    14,   139,   140,   354,   157,   107,   103,
      25,    70,    27,   150,    14,   150,   172,    36,   150,   628,
     130,    36,   157,   112,   113,   627,    41,   629,   150,   101,
      92,   119,    14,   123,   133,   248,   121,   127,   123,   129,
     130,    71,   132,   489,   105,    98,     0,    62,   109,   121,
     122,     3,     0,    68,   204,   190,   127,     3,   129,   131,
     150,    76,    14,    78,   379,   155,   123,   123,    14,   204,
      85,    25,    87,   103,   262,    34,    35,    92,    37,   339,
     123,   153,    36,   109,    85,   123,   158,   689,   123,   620,
     123,   190,   182,   108,   120,   108,   330,   108,   109,   630,
     115,   255,   192,   175,   258,   108,   109,    14,   123,   363,
     121,   262,   127,   128,   129,   130,    14,   132,   121,   101,
     255,   272,    76,   258,    78,   262,   102,   262,   110,   111,
     262,   374,   107,   109,   374,   150,   102,   272,   153,   381,
     262,   120,   101,   109,   159,   104,     8,   106,    10,    11,
      14,   286,     3,   396,   685,   101,   396,   172,   248,   402,
     175,   122,   402,   102,   110,   111,    14,   182,   363,   123,
     109,    69,   262,   127,   120,   129,   130,   192,   102,   102,
     109,     0,   102,   102,   334,   109,   109,   286,    14,   109,
     767,   326,   107,    89,    92,   285,   110,   347,   354,   334,
     272,   115,   116,   615,   738,   101,    25,   727,    72,    73,
      74,   101,   347,   744,   104,   746,   747,    36,     8,   102,
      10,    11,    12,    85,   120,   121,   109,   123,   470,   102,
     102,   354,    96,   248,   249,   101,   109,   109,   104,   499,
     424,   475,    10,   427,    12,   401,   489,   262,   110,   489,
      72,    73,    74,   101,   102,   390,   104,    76,   789,    78,
      85,   351,   110,   111,   354,   523,   797,   365,   522,   367,
     124,   529,   523,    92,   532,   101,   122,     9,    10,   351,
      12,    14,   122,   101,   110,   111,   104,   122,   273,   274,
     120,   381,   124,   365,   123,   367,   122,     9,    10,   102,
      12,   373,    14,   120,   123,    24,    25,   322,   127,    14,
     129,   130,   122,   103,   109,   761,   108,   109,   303,    89,
     410,   411,   412,   413,   132,   415,     3,   522,   418,   401,
     121,   150,     9,    10,   122,    12,   520,   124,   596,   354,
      14,    30,    31,   478,   601,   596,   124,   155,   124,   484,
     120,   121,   367,   123,   597,    28,    29,   597,   108,   109,
     516,   108,   109,   519,   285,   108,   109,   635,   101,   124,
     520,   104,   107,   388,   558,   559,   104,   110,   111,   478,
     470,   104,   155,   567,   568,   484,   401,   655,   434,   435,
     603,   102,   660,   661,    71,   410,   411,   412,   110,   111,
     415,   174,   492,   176,     8,   105,    10,    11,    12,   424,
     482,   624,   427,   563,   627,     9,   629,   507,   107,   108,
     492,   531,   494,   109,   496,   120,   249,   101,   563,   122,
     104,   436,   437,   523,   101,   507,   110,   111,   107,   529,
     248,   531,   532,   262,   429,   430,   107,   715,   463,   464,
     718,   107,     9,    10,   604,    12,   606,    14,   107,   474,
     475,   111,   477,   431,   432,   433,   679,   482,   722,   604,
     117,   606,   118,   285,   658,   101,   689,   285,   442,   443,
      32,   665,   438,   439,   440,   441,   471,   109,    96,   410,
     411,   412,   413,   109,   415,   101,   109,   418,    13,   322,
     635,   516,   517,   102,   519,   765,   596,   105,   523,   282,
     107,   122,   780,   603,   529,   105,   531,   532,   761,   105,
     655,   761,   122,   102,   101,   660,   661,   722,   109,    43,
     620,   354,   622,   122,   624,   122,   635,   627,   694,   629,
     630,   101,   677,   678,   120,   101,   101,   104,   620,   120,
     640,   793,   642,   110,   111,   101,   655,   122,   630,   109,
       3,   660,   661,   124,   108,   388,     9,    10,   121,    12,
     121,    14,   557,   381,   121,   348,   121,   531,   677,   678,
     715,   596,   738,   718,   674,     3,   110,   121,   603,   679,
     108,     9,    10,   102,    12,   685,    14,   108,   108,   689,
     102,   413,   410,   411,   412,   413,   418,   415,   381,   109,
     418,   102,   102,   685,   426,   102,   715,   105,   101,   718,
     102,   124,     3,     3,   120,   640,   100,   642,    71,     9,
      10,    87,    12,    14,    14,   101,   122,   121,   101,   101,
     463,   464,    85,   122,   101,   780,   105,   459,   102,    13,
      14,   749,   425,    71,   744,   101,   746,   747,   748,   674,
     103,   676,   470,   101,   679,   102,   102,    85,   102,   101,
      45,    62,   744,    14,   746,   747,    67,   749,   102,   694,
     102,   780,    73,   104,     3,   103,   121,   672,   461,   462,
       9,    10,    83,    12,   517,    14,   519,   470,   103,   789,
     102,   791,   122,    54,   102,   109,   121,   797,   481,   105,
     483,    14,   531,   104,   122,   102,    12,   789,   733,   640,
     101,   642,    19,   738,   427,   797,   117,   444,   446,   110,
     111,   279,   445,   748,   458,   622,   622,   101,   102,   120,
     104,   122,   373,   447,   108,   109,   110,   111,   139,   140,
     401,   596,    71,   674,     3,   172,   339,   121,   529,   475,
       9,    10,     3,    12,   272,    14,   157,   482,     9,    10,
     532,    12,     3,   470,   381,   758,   791,   757,     9,    10,
     733,    12,   597,   556,   103,   173,    16,    17,    18,    19,
      20,    21,    22,    23,   156,   603,    26,    27,   101,   102,
     388,   104,    -1,    33,    -1,   108,   109,   110,   111,    -1,
      -1,    -1,   624,   204,    -1,   627,   624,   629,    -1,   627,
      -1,   629,    71,     9,    10,    -1,    12,   748,   601,    -1,
      71,    -1,   640,    -1,   642,    -1,    -1,    -1,    -1,    -1,
      71,    -1,   615,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   676,   103,    -1,    -1,    -1,    -1,    -1,
      -1,   634,   103,   636,    50,    -1,   674,    -1,    -1,    -1,
     791,   679,   103,    -1,    -1,    -1,    -1,   689,    -1,    -1,
      -1,   689,    -1,    -1,    70,    -1,    -1,    -1,    -1,   119,
      -1,   121,    -1,    -1,   667,    -1,    -1,   709,   710,   711,
     712,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     733,    -1,    -1,    -1,    -1,   738,    -1,    -1,   730,    -1,
      -1,    -1,     0,    -1,    -1,    -1,    -1,    -1,    -1,   741,
       8,     9,    10,    11,    12,   326,    14,    -1,    -1,    -1,
     748,    -1,    -1,   334,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   727,    -1,   347,    -1,    -1,    -1,
      38,    39,    40,    -1,    -1,    -1,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    56,    57,
      58,    -1,    60,   791,    62,    -1,    -1,    65,    66,    67,
      68,    69,    -1,    -1,    -1,    -1,   769,    75,    -1,   390,
      78,    79,    -1,    81,    -1,    83,    -1,    85,    -1,    -1,
      -1,    -1,    90,    -1,    92,    93,    94,    95,    96,    97,
      98,    99,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    -1,    12,   424,    14,    -1,   427,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    44,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    52,    53,    -1,    -1,    -1,    -1,    -1,    59,
      60,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,    -1,
      -1,    71,    -1,    -1,    -1,    -1,    76,    -1,    78,    79,
      80,    -1,    82,    -1,    -1,    -1,    86,    -1,    88,    -1,
      -1,    91,    -1,    -1,    94,    -1,    -1,    97,    -1,    99,
      -1,   101,    -1,   103,    -1,    -1,    -1,    -1,    -1,   520,
     110,   111,   112,   113,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   125,     3,     4,     5,     6,
       7,    -1,     9,    10,    -1,    12,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   558,    -1,    -1,
      -1,    -1,   563,    -1,    -1,    -1,   567,    34,    35,    -1,
      -1,    38,    39,    40,    41,    42,    -1,    44,    45,    46,
      47,    48,    49,    -1,    51,    52,    53,    -1,    55,    56,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,   604,    71,   606,    -1,    -1,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    -1,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,    -1,   103,    -1,    -1,    -1,
      -1,    -1,    -1,   110,   111,   112,   113,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   122,   123,   124,     3,     4,
       5,     6,     7,    -1,     9,    10,    -1,    12,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    -1,    -1,    38,    39,    40,    41,    42,    -1,    44,
      45,    46,    47,    48,    49,    -1,    51,    52,    53,    -1,
      55,    56,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    -1,    71,    -1,    -1,    -1,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      -1,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,    -1,   103,    -1,
      -1,    -1,    14,    -1,    -1,   110,   111,   112,   113,   114,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,
       3,     4,     5,     6,     7,    -1,     9,    10,    40,    12,
      -1,    14,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    34,    35,    -1,    66,    67,    -1,    40,    -1,    -1,
      -1,    44,    -1,    -1,    47,    -1,    78,    79,    -1,    52,
      53,    83,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,
      92,    93,    94,    66,    67,    97,    98,    99,    71,    -1,
     102,    -1,    -1,    76,    -1,    78,    79,    80,    -1,    82,
      -1,    -1,    -1,    86,    87,    88,    -1,    -1,    91,    -1,
      -1,    94,    -1,    -1,    97,    -1,    99,    -1,   101,    -1,
     103,    -1,    -1,    -1,    14,    -1,    -1,   110,   111,   112,
     113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,   124,     3,     4,     5,     6,     7,    -1,     9,    10,
      40,    12,    -1,    14,    44,    45,    46,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    34,    35,    -1,    66,    67,    -1,    40,
      -1,    -1,    -1,    44,    -1,    -1,    47,    -1,    78,    79,
      -1,    52,    53,    83,    -1,    -1,    -1,    -1,    59,    60,
      -1,    -1,    92,    93,    94,    66,    67,    97,    98,    99,
      71,   101,    -1,    -1,    -1,    76,    -1,    78,    79,    80,
      -1,    82,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,
      91,    -1,    -1,    94,    -1,    -1,    97,    -1,    99,    -1,
     101,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,   110,
     111,   112,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,   124,     3,     4,     5,     6,     7,    -1,
       9,    10,    -1,    12,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    -1,    -1,    38,
      39,    40,    41,    42,    -1,    44,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    -1,    55,    56,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    -1,    71,    -1,    -1,    -1,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    -1,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,    -1,   103,    -1,    13,    14,    -1,    -1,
      -1,   110,   111,   112,   113,   114,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   122,   123,     3,     4,     5,     6,     7,
      -1,     9,    10,    40,    12,    -1,    14,    44,    45,    46,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    60,    -1,    -1,    34,    35,    -1,    66,
      67,    -1,    40,    -1,    -1,    -1,    44,    -1,    -1,    47,
      -1,    78,    79,    -1,    52,    53,    83,    -1,    -1,    -1,
      -1,    59,    60,    -1,    -1,    92,    93,    94,    66,    67,
      97,    98,    99,    71,    -1,    -1,    -1,    -1,    76,    -1,
      78,    79,    80,    -1,    82,    -1,    -1,    -1,    86,    87,
      88,    -1,    -1,    91,    -1,    -1,    94,    -1,    -1,    97,
      -1,    99,    -1,   101,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    -1,   110,   111,   112,   113,   114,     3,     4,     5,
       6,     7,    -1,     9,    10,   123,    12,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    44,    45,
      46,    47,    -1,    -1,    -1,    -1,    52,    53,    -1,    55,
      56,    -1,    58,    59,    60,    -1,    62,    -1,    -1,    65,
      66,    67,    68,    -1,    -1,    71,    -1,    -1,    -1,    75,
      76,    -1,    78,    79,    80,    81,    82,    83,    -1,    -1,
      86,    87,    88,    -1,    90,    91,    92,    93,    94,    -1,
      96,    97,    98,    99,    -1,   101,    -1,   103,    -1,    -1,
      -1,    -1,    -1,    -1,   110,   111,   112,   113,   114,    -1,
      -1,     3,     4,     5,     6,     7,   122,     9,    10,    -1,
      12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    44,    45,    46,    47,    -1,    -1,    -1,    -1,
      52,    53,    -1,    55,    -1,    -1,    -1,    59,    60,    -1,
      -1,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,    71,
      -1,    -1,    -1,    -1,    76,    -1,    78,    79,    80,    -1,
      82,    83,    -1,    -1,    86,    87,    88,    -1,    -1,    91,
      92,    93,    94,    -1,    -1,    97,    98,    99,    -1,   101,
      -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,   110,   111,
     112,   113,   114,    -1,    -1,     3,     4,     5,     6,     7,
     122,     9,    10,    -1,    12,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    44,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    52,    53,    -1,    -1,    -1,    -1,
      -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    66,    67,
      -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    76,    -1,
      78,    79,    80,    -1,    82,    -1,    -1,    -1,    86,    87,
      88,    -1,    -1,    91,    -1,    -1,    94,    -1,    -1,    97,
      -1,    99,    -1,   101,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    -1,   110,   111,   112,   113,   114,     8,     9,    10,
      11,    12,    -1,    14,   122,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      -1,    -1,    -1,    44,    45,    46,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    55,    56,    57,    58,    -1,    60,
      -1,    62,    -1,    -1,    65,    66,    67,    68,    -1,    -1,
      -1,    72,    73,    74,    75,    -1,    -1,    78,    79,    -1,
      81,    -1,    83,    -1,    85,    -1,    -1,    -1,    -1,    90,
      -1,    92,    93,    94,    95,    96,    97,    98,    99,     8,
       9,    10,    11,    12,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    38,
      39,    40,    -1,    -1,    -1,    44,    45,    46,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    55,    56,    57,    58,
      -1,    60,    -1,    62,    -1,    -1,    65,    66,    67,    68,
      69,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    78,
      79,    -1,    81,    -1,    83,    -1,    85,    -1,    -1,    -1,
      -1,    90,    -1,    92,    93,    94,    95,    96,    97,    98,
      99,     8,     9,    10,    11,    12,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    38,    39,    40,    -1,    -1,    -1,    44,    45,    46,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    56,
      57,    58,    -1,    60,    -1,    62,    -1,    -1,    65,    66,
      67,    68,    69,    -1,    -1,    -1,    -1,    -1,    75,    -1,
      -1,    78,    79,    -1,    81,    -1,    83,    -1,    85,    -1,
      -1,    -1,    -1,    90,    -1,    92,    93,    94,    95,    96,
      97,    98,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    14,   123,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    40,    -1,    -1,    -1,    44,    45,    46,    -1,    -1,
      -1,    50,    -1,    52,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,
      -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      79,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    93,    94,    -1,    -1,    97,    98,
      99,    -1,   101,    -1,   103,   104,    -1,    -1,   107,   108,
     109,   110,   111,   112,    -1,   114,   115,   116,   117,   118,
      -1,    -1,   121,    -1,    -1,    -1,    -1,   126,     3,     4,
       5,     6,     7,    -1,     9,    10,    -1,    12,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    44,
      45,    46,    47,    -1,    -1,    -1,    -1,    52,    53,    -1,
      55,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,
      -1,    66,    67,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      -1,    76,    -1,    78,    79,    80,    -1,    82,    83,    -1,
      -1,    86,    87,    88,    -1,    -1,    91,    92,    93,    94,
      -1,    -1,    97,    98,    99,    -1,   101,    -1,   103,    -1,
      -1,    -1,    -1,    -1,    -1,   110,   111,   112,   113,   114,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    44,    -1,    -1,    47,    -1,    -1,    50,    -1,    52,
      53,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,
      -1,    -1,    -1,    66,    67,    -1,    -1,    70,    71,    -1,
      -1,    -1,    -1,    76,    -1,    78,    79,    80,    -1,    82,
      -1,    -1,    -1,    86,    87,    88,    -1,    -1,    91,    -1,
      -1,    94,    -1,    -1,    97,    -1,    99,    -1,   101,    -1,
     103,    -1,    -1,    -1,    -1,    -1,    -1,   110,   111,   112,
     113,   114,     3,     4,     5,     6,     7,    -1,     9,    10,
      -1,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    44,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    52,    53,    -1,    -1,    -1,    -1,    -1,    59,    60,
      -1,    -1,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    -1,    76,    -1,    78,    79,    80,
      -1,    82,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,
      91,    -1,    -1,    94,    -1,    -1,    97,    -1,    99,    -1,
     101,   102,   103,    -1,    -1,    -1,    -1,    -1,    -1,   110,
     111,   112,   113,   114,     3,     4,     5,     6,     7,    -1,
       9,    10,    -1,    12,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    44,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    52,    53,    -1,    -1,    -1,    -1,    -1,
      59,    60,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,
      -1,    -1,    71,    -1,    -1,    -1,    -1,    76,    -1,    78,
      79,    80,    -1,    82,    -1,    -1,    -1,    86,    87,    88,
      -1,    -1,    91,    -1,    -1,    94,    -1,    -1,    97,    -1,
      99,    -1,   101,   102,   103,    -1,    -1,    -1,    -1,    -1,
      -1,   110,   111,   112,   113,   114,     3,     4,     5,     6,
       7,    -1,     9,    10,    -1,    12,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    44,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    52,    53,    -1,    -1,    -1,
      -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    66,
      67,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    76,
      -1,    78,    79,    80,    -1,    82,    -1,    -1,    -1,    86,
      87,    88,    -1,    -1,    91,    -1,    -1,    94,    -1,    -1,
      97,    -1,    99,    -1,   101,    -1,   103,    -1,    -1,    -1,
      -1,    -1,    -1,   110,   111,   112,   113,   114,     3,     4,
       5,     6,     7,    -1,     9,    10,    -1,    12,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    44,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    52,    53,    -1,
      -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,
      -1,    66,    67,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      -1,    76,    -1,    78,    79,    80,    -1,    82,    -1,    -1,
      -1,    86,    -1,    88,    -1,    -1,    91,    -1,    -1,    94,
      -1,    -1,    97,    -1,    99,    -1,   101,    -1,   103,    -1,
     105,    -1,    -1,    -1,    -1,   110,   111,   112,   113,   114,
       3,     4,     5,     6,     7,    -1,     9,    10,    -1,    12,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    52,
      53,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,
      -1,    -1,    -1,    66,    67,    -1,    -1,    -1,    71,    -1,
      -1,    -1,    -1,    76,    -1,    78,    79,    80,    -1,    82,
      -1,    -1,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,
      -1,    94,    -1,    -1,    97,    -1,    99,    -1,   101,    -1,
     103,   104,    -1,    -1,    -1,    -1,    -1,   110,   111,   112,
     113,   114,     3,     4,     5,     6,     7,    -1,     9,    10,
      -1,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    44,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    52,    53,    -1,    -1,    -1,    -1,    -1,    59,    60,
      -1,    -1,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    -1,    76,    -1,    78,    79,    80,
      -1,    82,    -1,    -1,    -1,    86,    -1,    88,    -1,    -1,
      91,    -1,    -1,    94,    -1,    -1,    97,    -1,    99,    -1,
     101,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,   110,
     111,   112,   113,   114,     3,     4,     5,     6,     7,    -1,
       9,    10,    -1,    12,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    44,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    52,    53,    -1,    -1,    -1,    -1,    -1,
      59,    60,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,
      -1,    -1,    71,    -1,    -1,    -1,    -1,    76,    -1,    78,
      79,    80,    -1,    82,    -1,    -1,    -1,    86,    -1,    88,
      -1,    -1,    91,    -1,    -1,    94,    -1,    -1,    97,    -1,
      99,    -1,   101,    -1,   103,    -1,    -1,    -1,    -1,    -1,
      -1,   110,   111,   112,   113,   114,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    -1,    -1,
      -1,   101,    -1,   103,   104,    -1,    -1,   107,   108,   109,
     110,   111,   112,    -1,   114,   115,   116,   117,   118,    -1,
      -1,   121,    39,    40,    -1,    -1,   126,    44,    45,    46,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    56,
      -1,    58,    -1,    60,    -1,    62,    -1,    -1,    65,    66,
      67,    68,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,
      -1,    78,    79,    -1,    81,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    -1,    92,    93,    94,    -1,    96,
      97,    98,    99,    -1,   101,   102,    -1,   104,     0,    -1,
      -1,   108,   109,   110,   111,    -1,     8,     9,    10,    11,
      12,    -1,    14,    -1,   121,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,    -1,
      -1,    -1,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    55,    56,    57,    58,    -1,    60,    -1,
      62,    -1,    -1,    65,    66,    67,    68,    69,     8,     9,
      10,    11,    12,    75,    14,    -1,    78,    79,    -1,    81,
      -1,    83,    -1,    85,    -1,    -1,    -1,    -1,    90,    -1,
      92,    93,    94,    95,    96,    97,    98,    99,    38,    39,
      40,    -1,    -1,    -1,    44,    45,    46,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    55,    56,    57,    58,    -1,
      60,    -1,    62,    -1,    -1,    65,    66,    67,    68,    69,
      -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    78,    79,
      -1,    81,    -1,    83,    -1,    85,    -1,    -1,    -1,    -1,
      90,    -1,    92,    93,    94,    95,    96,    97,    98,    99,
       8,     9,    10,    11,    12,    -1,    14,   107,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    40,    -1,    -1,    -1,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    56,    57,
      58,    -1,    60,    -1,    62,    -1,    -1,    65,    66,    67,
      68,    69,     8,     9,    10,    11,    12,    75,    14,    -1,
      78,    79,    -1,    81,    -1,    83,    -1,    85,    -1,    -1,
      -1,    -1,    90,    -1,    92,    93,    94,    95,    96,    97,
      98,    99,    -1,    39,    40,    -1,    -1,    -1,    44,    45,
      46,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    55,
      56,    -1,    58,    -1,    60,    -1,    62,    -1,    -1,    65,
      66,    67,    68,    -1,     8,     9,    10,    11,    12,    75,
      14,    -1,    78,    79,    -1,    81,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    -1,    92,    93,    94,    -1,
      96,    97,    98,    99,    -1,    -1,    40,    -1,    -1,    -1,
      44,    45,    46,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    66,    67,    -1,    13,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    79,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,
      94,    39,    40,    97,    98,    99,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    56,    -1,
      58,    -1,    60,    -1,    62,    -1,    -1,    65,    66,    67,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      78,    79,    -1,    81,    -1,    83,    13,    14,    -1,    -1,
      -1,    -1,    90,    -1,    92,    93,    94,    -1,    96,    97,
      98,    99,    -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    -1,    -1,    -1,    44,    45,    46,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    56,
      -1,    58,    -1,    60,    -1,    62,    -1,    -1,    65,    66,
      67,    68,    -1,    -1,    -1,    -1,    -1,    -1,    75,    14,
      -1,    78,    79,    -1,    81,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    -1,    92,    93,    94,    -1,    96,
      97,    98,    99,    -1,    39,    40,    -1,    -1,    -1,    44,
      45,    46,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      55,    56,    -1,    58,    -1,    60,    -1,    62,    -1,    -1,
      65,    66,    67,    68,    -1,    -1,    -1,    -1,    -1,    14,
      75,    -1,    -1,    78,    79,    -1,    81,    -1,    83,    -1,
      85,    -1,    -1,    -1,    -1,    90,    -1,    92,    93,    94,
      -1,    96,    97,    98,    99,    40,    -1,    -1,    -1,    44,
      45,    46,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,
      -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    79,    -1,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,
      -1,    -1,    97,    98,    99
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    14,    38,    39,    40,    44,    45,    46,    52,    55,
      56,    57,    58,    60,    62,    65,    66,    67,    68,    69,
      75,    78,    79,    81,    83,    85,    90,    92,    93,    94,
      95,    96,    97,    98,    99,   142,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   200,   201,   205,   206,
     207,   208,   209,   211,   213,   214,   215,   216,   223,   232,
     237,   238,   239,   259,   266,   267,   276,   280,   287,   312,
     101,     3,   135,   280,   289,     7,   140,     9,   123,   130,
     135,   107,   190,   280,    14,    69,    92,   291,     0,   190,
      58,   193,   123,     9,    10,    12,   129,   130,   131,   132,
     134,   147,   148,   263,   280,   289,   147,   278,   101,   110,
     111,   217,   218,   219,   220,   221,   224,   280,   288,    85,
     140,   278,   123,   123,   190,   210,   276,   123,   121,   123,
     108,   147,    71,   103,   135,   145,   250,   257,   263,   280,
     280,    72,    73,    74,    95,   146,   147,   213,   232,   240,
     241,   249,   259,   287,   303,   107,   135,    14,   278,   120,
     246,   304,     8,    11,   128,   132,   133,   199,   219,   222,
     223,   293,   109,    89,   101,   120,   121,   234,   253,   269,
     292,   301,   101,   104,   219,   144,   145,   146,   147,   263,
     278,   122,   107,   102,   135,   135,   202,   203,   204,   290,
     276,   124,   210,   212,   280,   210,   190,   135,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      50,    70,   101,   103,   104,   107,   108,   109,   110,   111,
     112,   114,   115,   116,   117,   118,   121,   126,   197,   226,
     251,   258,   132,   122,   278,   147,   122,    85,   277,   122,
     306,   303,   120,   219,   242,   243,   289,   305,   124,     4,
       5,     6,    14,    34,    35,    47,    53,    59,    76,    80,
      82,    86,    87,    88,    91,   101,   103,   110,   111,   112,
     113,   114,   134,   136,   137,   138,   139,   140,   141,   143,
     144,   149,   152,   153,   154,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     198,   225,   226,   264,   265,   273,   280,   304,   278,   135,
      96,   247,   248,   249,   280,   102,   293,   218,   219,   301,
     150,   174,   198,   135,   254,   255,   256,   280,   123,   174,
     235,   123,   181,   233,   194,   229,   230,   231,   299,   172,
     173,   177,   295,   110,   199,    45,    85,    92,   231,   260,
     261,   262,   122,   109,   121,   124,   124,   124,   122,   278,
     124,   107,   104,   104,   102,   105,   226,   297,   221,   252,
     280,   311,   129,   145,   145,   303,   121,   244,   245,   307,
     308,   109,   120,   122,    71,   135,   146,   257,   161,   161,
     107,   107,   107,   101,   152,   107,   174,   314,   101,   174,
     176,   225,    34,    35,    37,   101,   104,   106,   161,    15,
      36,   110,   115,   116,   112,   113,    24,    25,    30,    31,
     107,   108,    28,    29,   111,   117,   118,    32,    16,    17,
      18,    19,    20,    21,    22,    23,    26,    27,    33,   119,
     121,   175,   101,   101,   221,   227,   228,   296,   298,   108,
     109,    50,    70,   249,   309,   109,    96,   310,   278,   233,
     102,   109,   109,   101,   278,   124,   235,   236,    41,    42,
      48,    49,    51,    61,    63,    64,    69,    77,    84,    89,
     100,   135,   176,   178,   179,   180,   181,   182,   183,   185,
     187,   188,   191,   268,   284,   285,   287,   101,   219,   221,
     280,   296,   102,   109,    13,   300,   105,   293,   289,   107,
     289,   108,   109,   203,   177,   129,   264,   105,   105,   311,
     147,   122,   122,   125,   177,   219,   243,   177,   225,   225,
     225,   225,   225,   176,   225,   102,   109,   102,    14,    85,
     144,   147,   151,   280,   150,   279,   176,    14,    85,   144,
     151,   161,   161,   162,   162,   162,   163,   163,   164,   164,
     165,   165,   165,   165,   166,   166,   167,   168,   169,   170,
     171,   176,   174,   279,   227,   296,   101,   104,   265,   104,
     161,   101,   155,   281,   280,   248,   280,   132,    43,   270,
     271,   174,   254,   279,   132,   109,   302,   122,   177,   122,
     120,   178,   101,   135,   101,   135,   284,   101,   181,   101,
     120,   178,   122,   124,   121,   278,   121,   293,    13,   231,
     121,   260,   121,   190,   261,   108,   108,   108,   108,   102,
     108,   102,   102,   174,   161,   103,   144,   147,    14,   144,
     103,   278,   102,   105,   144,    14,   144,   120,   102,   102,
     229,   295,   105,   150,   101,   156,   226,   278,   278,   101,
     270,   313,   102,   235,   124,   120,   178,   100,   180,   186,
     192,   122,   176,   184,   226,   122,   184,   270,   184,   178,
     174,   199,   174,    87,   274,   294,   225,   108,   225,   101,
     101,   101,   101,   132,   199,   103,   144,   199,   103,   199,
     144,   174,   102,   105,   161,   102,   225,   101,   159,   282,
     104,   157,   158,   221,   283,   132,   132,    13,   226,   272,
     178,   101,   184,   286,   102,   219,   102,   102,   101,    45,
     176,   176,   176,   176,   199,   199,    14,   293,   102,   279,
     176,   104,   283,   219,   227,   102,   176,   122,   178,   121,
     178,   178,   225,   275,   315,   289,   102,   102,   102,   102,
     103,   294,   282,   102,   105,   177,   181,   102,   284,    54,
     174,   109,   102,   121,   199,   105,   122,   102,   178,   225,
     134,   178
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   127,   128,   129,   129,   130,   131,   132,   132,   133,
     134,   135,   136,   136,   136,   136,   136,   137,   138,   139,
     140,   141,   141,   142,   143,   143,   143,   143,   143,   143,
     143,   144,   144,   145,   145,   145,   145,   145,   146,   147,
     148,   148,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   150,   150,   151,   151,   151,   151,
     151,   152,   152,   152,   152,   152,   152,   152,   152,   153,
     153,   153,   153,   153,   153,   154,   154,   155,   156,   157,
     157,   158,   158,   159,   160,   160,   161,   161,   162,   162,
     162,   163,   163,   163,   163,   164,   164,   164,   165,   165,
     165,   166,   166,   166,   166,   166,   167,   167,   167,   168,
     168,   169,   169,   170,   170,   171,   171,   172,   172,   173,
     173,   174,   174,   174,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   176,   176,   177,   178,   178,
     178,   178,   178,   178,   178,   178,   179,   179,   179,   180,
     181,   182,   182,   183,   183,   183,   184,   184,   185,   185,
     185,   186,   186,   187,   187,   187,   187,   188,   189,   189,
     190,   190,   190,   190,   190,   190,   190,   191,   191,   191,
     191,   191,   192,   193,   193,   193,   193,   193,   194,   194,
     195,   195,   195,   195,   195,   196,   196,   196,   197,   197,
     197,   197,   197,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   199,   199,   199,   200,   200,
     200,   200,   201,   202,   202,   203,   203,   204,   205,   205,
     206,   206,   207,   208,   209,   210,   211,   212,   213,   213,
     214,   215,   216,   216,   217,   217,   218,   219,   219,   220,
     220,   220,   220,   221,   221,   221,   222,   223,   223,   224,
     224,   225,   226,   227,   227,   228,   228,   228,   229,   229,
     230,   230,   231,   231,   231,   231,   232,   232,   233,   234,
     234,   235,   235,   235,   236,   236,   237,   238,   238,   239,
     239,   239,   240,   240,   241,   241,   241,   241,   241,   242,
     242,   243,   243,   243,   244,   245,   246,   247,   247,   248,
     248,   248,   249,   249,   249,   250,   251,   252,   253,   254,
     254,   255,   256,   256,   257,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   259,   260,   260,
     261,   261,   262,   262,   262,   262,   262,   262,   263,   264,
     264,   265,   265,   265,   266,   267,   268,   269,   270,   271,
     272,   272,   272,   272,   273,   274,   275,   275,   276,   276,
     277,   277,   278,   278,   279,   279,   280,   280,   281,   281,
     282,   282,   283,   283,   284,   284,   285,   285,   286,   286,
     287,   287,   288,   288,   289,   289,   290,   290,   291,   291,
     292,   292,   293,   293,   294,   294,   295,   295,   296,   296,
     297,   297,   298,   298,   299,   299,   300,   300,   301,   301,
     302,   302,   303,   303,   304,   304,   305,   305,   306,   306,
     307,   307,   308,   308,   309,   309,   310,   310,   311,   311,
     312,   312,   313,   313,   314,   314,   315,   315
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     3,
       1,     1,     1,     1,     1,     1,     2,     1,     3,     3,
       1,     1,     1,     4,     4,     4,     5,     4,     4,     3,
       5,     4,     4,     3,     3,     3,     2,     2,     7,     7,
       7,     7,     4,     4,     1,     3,     6,     4,     3,     3,
       4,     1,     2,     2,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     7,     3,     2,     2,
       1,     3,     4,     3,     3,     5,     1,     4,     1,     3,
       3,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       5,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     2,
       3,     1,     2,     5,     7,     5,     1,     4,     5,     7,
       8,     1,     1,     2,     2,     3,     3,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       4,     7,     5,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     5,     5,     4,     1,     5,     3,     6,     4,
       6,     5,     5,     3,     1,     3,     2,     1,     2,     1,
       6,     4,     3,     2,     1,     4,     2,     1,     1,     2,
       3,     2,     2,     2,     1,     6,     4,     3,     2,     3,
       1,     3,     2,     4,     2,     4,     4,     3,     1,     2,
       3,     1,     4,     2,     1,     3,     4,     3,     4,     1,
       1,     1,     2,     3,     3,     2,     2,     1,     1,     1,
       3,     2,     2,     3,     2,     2,     2,     1,     3,     3,
       5,     5,     1,     1,     1,     2,     2,     2,     2,     1,
       3,     4,     3,     1,     2,     1,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     6,     1,     3,
       1,     1,     2,     4,     2,     4,     6,     8,     4,     1,
       3,     1,     1,     1,     2,     4,     3,     4,     2,     5,
       2,     2,     1,     1,     2,     4,     1,     3,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1
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
      
#line 2792 "y.tab.c" /* yacc.c:1646  */
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
#line 1234 "parser.y" /* yacc.c:1906  */


static void
yyerror(char *s)
{
	fprintf(stderr, "%d: %s\n", lineno, s);
}

int
main(void)
{
	lineno = 1;
	yyparse();

	return 0;
}
