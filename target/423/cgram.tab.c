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
#line 1 "cgram.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>

/* include lots of your include files here */

# define YYDEBUG 1
#include "nonterm.h"

extern int yyerror(char *);
extern int yylex(void);

/* declare externs for global variables and helper function prototypes */
#include "tree.h"
extern struct tree *root;

#line 83 "cgram.tab.c" /* yacc.c:339  */

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
   by #include "cgram.tab.h".  */
#ifndef YY_YY_CGRAM_TAB_H_INCLUDED
# define YY_YY_CGRAM_TAB_H_INCLUDED
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
    BAD_TOKEN = 258,
    ICON = 259,
    CCON = 260,
    FCON = 261,
    ENUMERATION_CONSTANT = 262,
    IDENTIFIER = 263,
    STRING = 264,
    SIZEOF = 265,
    INCOP = 266,
    DECOP = 267,
    SHL = 268,
    SHR = 269,
    LE = 270,
    GE = 271,
    EQ = 272,
    NE = 273,
    ANDAND = 274,
    OROR = 275,
    MUASN = 276,
    DIASN = 277,
    MOASN = 278,
    PLASN = 279,
    ASN = 280,
    MIASN = 281,
    SLASN = 282,
    SRASN = 283,
    ANASN = 284,
    ERASN = 285,
    ORASN = 286,
    TYPEDEF_NAME = 287,
    CM = 288,
    SM = 289,
    LT = 290,
    GT = 291,
    PLUS = 292,
    MINUS = 293,
    MUL = 294,
    DIV = 295,
    MOD = 296,
    LP = 297,
    RP = 298,
    LB = 299,
    RB = 300,
    LC = 301,
    RC = 302,
    COLON = 303,
    QUEST = 304,
    AND = 305,
    OR = 306,
    ER = 307,
    NOT = 308,
    FOLLOW = 309,
    BANG = 310,
    DOT = 311,
    TYPEDEF = 312,
    EXTERN = 313,
    STATIC = 314,
    AUTO = 315,
    REGISTER = 316,
    CHAR = 317,
    SHORT = 318,
    INT = 319,
    LONG = 320,
    SIGNED = 321,
    UNSIGNED = 322,
    FLOAT = 323,
    DOUBLE = 324,
    CONST = 325,
    VOLATILE = 326,
    VOID = 327,
    STRUCT = 328,
    UNION = 329,
    ENUM = 330,
    ELIPSIS = 331,
    CASE = 332,
    DEFAULT = 333,
    IF = 334,
    SWITCH = 335,
    WHILE = 336,
    DO = 337,
    FOR = 338,
    GOTO = 339,
    CONTINUE = 340,
    BREAK = 341,
    RETURN = 342,
    THEN = 343,
    ELSE = 344
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 17 "cgram.y" /* yacc.c:355  */

   struct tree *treeptr;

#line 217 "cgram.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CGRAM_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 234 "cgram.tab.c" /* yacc.c:358  */

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
#define YYFINAL  56
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1395

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  239
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  386

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   344

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      85,    86,    87,    88,    89
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   138,   138,   141,   147,   153,   154,   160,   161,   162,
     166,   171,   176,   183,   182,   191,   194,   201,   207,   208,
     214,   216,   219,   220,   224,   225,   234,   237,   240,   243,
     246,   252,   253,   257,   260,   263,   266,   269,   272,   275,
     276,   280,   283,   286,   289,   295,   298,   304,   308,   311,
     317,   319,   324,   326,   332,   336,   342,   343,   348,   351,
     357,   358,   361,   362,   368,   369,   376,   377,   380,   386,
     389,   392,   398,   399,   405,   409,   408,   417,   420,   426,
     429,   432,   435,   438,   441,   444,   450,   451,   457,   460,
     463,   469,   472,   476,   479,   485,   486,   492,   493,   499,
     500,   506,   508,   510,   515,   517,   522,   523,   525,   530,
     531,   536,   537,   542,   543,   544,   550,   553,   556,   559,
     562,   565,   568,   571,   574,   580,   581,   582,   583,   584,
     585,   589,   592,   595,   601,   604,   610,   613,   619,   623,
     627,   635,   636,   643,   647,   652,   658,   662,   666,   672,
     675,   678,   681,   684,   687,   690,   693,   701,   704,   707,
     710,   714,   721,   724,   731,   732,   739,   740,   741,   742,
     743,   744,   745,   746,   747,   748,   749,   754,   755,   762,
     767,   768,   775,   776,   783,   784,   790,   791,   797,   798,
     804,   805,   809,   815,   816,   820,   823,   826,   832,   833,
     836,   842,   843,   847,   854,   855,   859,   862,   869,   870,
     877,   878,   881,   884,   887,   890,   896,   899,   902,   905,
     908,   911,   918,   919,   922,   925,   928,   931,   934,   937,
     943,   946,   947,   950,   956,   959,   965,   968,   971,   974
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BAD_TOKEN", "ICON", "CCON", "FCON",
  "ENUMERATION_CONSTANT", "IDENTIFIER", "STRING", "SIZEOF", "INCOP",
  "DECOP", "SHL", "SHR", "LE", "GE", "EQ", "NE", "ANDAND", "OROR", "MUASN",
  "DIASN", "MOASN", "PLASN", "ASN", "MIASN", "SLASN", "SRASN", "ANASN",
  "ERASN", "ORASN", "TYPEDEF_NAME", "CM", "SM", "LT", "GT", "PLUS",
  "MINUS", "MUL", "DIV", "MOD", "LP", "RP", "LB", "RB", "LC", "RC",
  "COLON", "QUEST", "AND", "OR", "ER", "NOT", "FOLLOW", "BANG", "DOT",
  "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "CHAR", "SHORT",
  "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST",
  "VOLATILE", "VOID", "STRUCT", "UNION", "ENUM", "ELIPSIS", "CASE",
  "DEFAULT", "IF", "SWITCH", "WHILE", "DO", "FOR", "GOTO", "CONTINUE",
  "BREAK", "RETURN", "THEN", "ELSE", "$accept", "identifier", "file",
  "translation_unit", "external_declaration", "function_definition", "$@1",
  "declaration", "untyped_declaration", "declaration_list",
  "declaration_specifiers", "storage_class_specifier", "type_specifier",
  "actual_type_specifier", "type_adjective", "type_qualifier",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "init_declarator_list", "init_declarator",
  "struct_declaration", "specifier_qualifier_list",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "enumerator_list", "enumerator", "$@2", "declarator",
  "direct_declarator", "function_declarator", "direct_function_declarator",
  "pointer", "type_qualifier_list", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "initializer", "initializer_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "statement", "labeled_statement",
  "expression_statement", "compound_statement", "compound_statement_opt",
  "statement_list", "selection_statement", "iteration_statement",
  "forcntrl", "jump_statement", "expression", "assignment_expression",
  "assignment_operator", "conditional_expression", "constant_expression",
  "logical_or_expression", "logical_and_expression",
  "inclusive_or_expression", "exclusive_or_expression", "and_expression",
  "equality_expression", "relational_expression", "shift_expression",
  "additive_expression", "multiplicative_expression", "cast_expression",
  "unary_expression", "unary_operator", "postfix_expression",
  "primary_expression", "argument_expression_list", "constant", YY_NULLPTR
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
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344
};
# endif

#define YYPACT_NINF -226

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-226)))

#define YYTABLE_NINF -86

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     668,  -226,  -226,  -226,    30,    77,  -226,  -226,  -226,  -226,
    -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,  -226,  -226,    19,  -226,    50,   668,  -226,  -226,
    -226,  -226,   157,  1262,  1262,  -226,  -226,  1262,  -226,    25,
     198,  -226,  -226,    -9,     9,  1199,  -226,    41,  -226,  -226,
      30,   -18,    61,    41,    64,    32,  -226,  -226,  -226,   241,
    1199,  -226,  -226,  -226,   808,    72,    77,  -226,   796,   712,
     848,   356,  -226,  1199,   157,  -226,     9,  -226,  -226,  -226,
    -226,   756,    61,    71,    66,  -226,    64,  -226,  1262,  -226,
     808,   808,  1306,  -226,    73,   808,  -226,  -226,  -226,  -226,
    -226,  -226,  -226,  1050,  1102,  1102,  -226,  -226,  -226,   580,
     796,  -226,  -226,  -226,  -226,  -226,  -226,    10,   116,    24,
      75,    88,   277,   211,   283,   262,   226,  -226,   432,  1111,
     276,  -226,  -226,  -226,   191,   153,   119,   148,  -226,    97,
    -226,  -226,   155,  -226,   139,   163,  -226,  -226,  1111,   181,
     164,   208,   213,   524,   229,   295,   242,   246,   857,   245,
     440,  -226,  -226,  -226,  -226,   259,   524,  -226,  -226,  -226,
     289,  -226,  -226,  -226,  -226,   286,   133,   301,    64,  -226,
      87,   285,  -226,  -226,  -226,  -226,  -226,  1111,   291,  -226,
     307,  1320,   580,  -226,  1111,  -226,  -226,   219,   316,   135,
    -226,    90,  1111,  1111,  1111,  1111,  1111,  1111,  1111,  1111,
    1111,  1111,  1111,  1111,  1111,  1111,  1111,  1111,  1111,  1111,
    1111,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,  1111,  -226,  -226,  -226,   909,  1111,   295,   295,
     624,   918,  -226,    16,  -226,   146,   209,  1110,   329,   294,
    -226,   309,   524,  1111,  1111,  1111,   290,   970,   340,  -226,
    -226,  -226,   310,   524,   524,  -226,  -226,  1111,  -226,  -226,
    -226,  1111,  -226,  -226,  -226,  -226,    56,  -226,  1111,  -226,
     337,  1155,   194,  -226,  1111,  -226,   303,  -226,   116,   -11,
      24,    75,    88,   277,   211,   211,   283,   283,   283,   283,
     262,   262,   226,   226,  -226,  -226,  -226,  -226,  -226,  -226,
     136,    43,  -226,  -226,  -226,   338,   339,  -226,   341,   146,
    1243,   979,  -226,  -226,  -226,   524,  -226,   142,   187,   216,
     342,  1031,   344,   314,  -226,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,  -226,  -226,  -226,  1111,  1111,  -226,  -226,  -226,
    -226,  -226,  -226,   349,  -226,   351,  -226,   524,   524,   524,
    1111,  1111,   318,   524,  1040,  -226,  -226,  -226,  -226,   296,
    -226,  -226,   221,   350,  1111,  -226,  1111,   336,   524,   365,
     350,   350,  1111,  -226,  -226,   350
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     2,    38,    91,     0,    26,    27,    28,    29,
      30,    34,    41,    35,    42,    43,    44,    36,    37,    45,
      46,    33,    50,    51,     0,    79,     0,     4,     5,     7,
       8,     9,     0,    20,    22,    31,    32,    24,    39,     0,
       0,    54,    40,    56,    77,     0,    86,     0,    95,    93,
      92,     0,    77,     0,     0,    71,     1,     6,    15,     0,
       0,    21,    23,    25,     0,    49,     0,    17,     0,     0,
       0,     0,    18,     0,     0,    10,    78,    87,    96,    94,
      80,     0,    78,    74,     0,    72,     0,    16,    13,    12,
      60,    62,     0,    52,     0,     0,    55,   236,   237,   238,
     239,   230,   232,     0,     0,     0,   218,   219,   217,     0,
       0,   216,   220,   221,    57,   106,   164,   177,   180,   182,
     184,   186,   188,   190,   193,   198,   201,   204,   208,     0,
     210,   222,   231,   104,    89,   102,     0,    97,    99,     0,
      81,   179,     0,   208,   239,   230,   134,   136,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     139,   141,   125,   127,   126,     0,   138,   128,   129,   130,
       0,   162,    19,    11,    84,     0,     0,     0,     0,    69,
       0,     0,    61,    63,    47,    53,    58,     0,     0,    64,
      66,     0,     0,   214,     0,   211,   212,   111,     0,     0,
     109,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   167,   168,   169,   170,   166,   171,   172,   173,   174,
     175,   176,     0,   213,   228,   229,     0,     0,     0,     0,
       0,     0,   101,   113,   103,   114,    88,     0,     0,    90,
      82,     0,     0,     0,     0,     0,     0,     0,     0,   158,
     159,   160,     0,     0,   140,   137,   142,     0,   135,    83,
      85,     0,    73,    70,    14,    67,     0,    59,     0,    48,
       0,     0,   113,   112,     0,   233,     0,   107,   181,     0,
     183,   185,   187,   189,   191,   192,   196,   197,   194,   195,
     199,   200,   202,   203,   205,   206,   207,   165,   224,   234,
       0,     0,   227,   226,   121,     0,     0,   117,     0,   115,
       0,     0,    98,   100,   105,     0,   133,     0,     0,     0,
       0,     0,     0,     0,   157,   161,   131,   163,    76,    65,
      68,   215,   209,   108,   110,     0,     0,   225,   223,   122,
     116,   118,   123,     0,   119,     0,   132,     0,     0,     0,
       0,   149,     0,     0,     0,   178,   235,   124,   120,   143,
     145,   146,     0,   150,   151,   148,   153,     0,     0,     0,
     152,   154,   155,   144,   147,   156
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -226,   -24,  -226,  -226,   373,  -226,  -226,    29,  -226,    54,
       1,  -226,   113,  -226,  -226,     2,  -226,  -226,   306,   -19,
     346,   -85,   -70,  -226,   128,  -226,   319,   230,  -226,    -3,
      14,   375,   363,     4,  -226,   -64,  -226,   185,   383,  -100,
    -226,   273,  -123,  -225,   -80,  -226,  -226,    17,  -226,   308,
    -226,  -226,  -226,  -226,    15,   -65,  -226,   -59,  -108,  -226,
     264,   263,   265,   267,   268,   108,    79,   158,   161,  -110,
     -61,  -226,  -226,  -226,  -226,  -226
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    25,    26,    27,    28,    29,   181,    72,    31,    73,
      74,    33,    34,    35,    36,    37,    38,    39,    92,    40,
      41,    93,    94,   188,   189,    42,    84,    85,   177,    43,
      52,    45,    46,    53,    50,   315,   137,   138,   139,   114,
     201,   198,   316,   245,   161,   162,   163,   164,   165,   166,
     167,   168,   332,   169,   170,   171,   232,   116,   142,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   310,   132
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      55,    32,    51,   115,    47,   136,    48,   185,    49,   143,
     200,   141,   244,    59,    44,    65,    68,   175,   319,   233,
     182,   183,   267,     1,     2,    80,     1,     2,    32,    30,
     202,    47,     1,     2,    61,    62,    47,   345,    63,   197,
     251,    44,   193,   195,   196,   115,    44,   159,     1,     2,
      56,    69,    78,    70,    79,    59,    30,   319,   240,   203,
     241,    76,    75,     1,     2,    54,    91,    82,   143,     4,
     135,    64,    83,   256,   283,   205,   267,    89,    86,   275,
       1,     2,   135,     5,     1,     2,   266,   143,   348,   141,
     173,   190,    91,    91,    91,     4,   -75,    91,     5,   178,
      19,    20,   172,    81,   187,    70,   185,   186,   304,   305,
     306,    91,     4,   179,    88,     5,     4,   172,    95,     5,
     178,   187,   197,   286,   199,   160,   143,   206,   141,   159,
     248,   258,   242,   318,   273,   204,   159,   287,   207,   243,
     249,   143,   159,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
       1,     2,   246,   338,     1,     2,   248,   307,   267,   346,
     340,   309,   326,   262,   342,   267,   270,    90,   285,   347,
     143,   247,   141,   336,   266,   357,   344,    -3,   320,   172,
     321,    58,     4,    91,    91,   240,     4,   241,   274,     5,
     250,   282,   337,    90,    90,    90,   253,   199,    90,   199,
     143,    -2,   141,   355,   312,   313,   -84,   143,   289,   141,
     267,   115,    90,   143,   -84,   -84,   210,   211,   159,   252,
     358,    66,    67,   -84,   -83,   -84,   281,    51,   241,   159,
     159,   135,   -83,   -83,   243,   356,   212,   213,   135,   267,
     254,   -83,   311,   -83,   267,   255,   353,    82,     4,   359,
     143,   281,   141,   241,   379,   218,   219,   220,   327,   328,
     329,   257,   333,   190,    66,    87,   259,   369,   370,   371,
     260,   366,   135,   375,   143,   282,   365,   234,   235,   296,
     297,   298,   299,   263,   208,   209,   214,   215,   383,   216,
     217,   159,     1,     2,    90,    90,   265,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   294,   295,   236,   -85,
     237,   135,   267,   268,   276,   277,   271,   -85,   -85,   269,
     238,    71,   239,   159,   159,   159,   -85,   324,   -85,   159,
     106,   107,   108,   267,   335,   109,   362,   267,   364,   110,
     343,   267,   374,   111,   159,   278,   112,   325,   113,   284,
      97,    98,    99,   144,   145,   102,   103,   104,   105,   267,
     382,   330,   300,   301,   334,   372,   373,   302,   303,   377,
     341,   349,   350,   267,   360,   378,   351,   363,     3,   380,
     146,   381,   367,   106,   107,   108,   368,   385,   109,   384,
      57,   191,    71,   147,   339,   180,   111,    60,   272,   112,
      77,   113,    96,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   323,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,    97,    98,    99,   144,   145,   102,
     103,   104,   105,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   176,   280,   288,   290,   264,     0,
     291,     0,     3,   292,   146,   293,     0,   106,   107,   108,
       0,     0,   109,     0,     0,     0,    71,     0,     0,     0,
     111,     0,     0,   112,     0,   113,     0,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,    97,    98,
      99,   144,   145,   102,   103,   104,   105,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   146,     0,
       0,   106,   107,   108,     0,     0,   109,     0,     0,     0,
      71,     0,     0,     0,   111,     0,     0,   112,     0,   113,
       0,     0,     0,     0,    97,    98,    99,   100,   101,   102,
     103,   104,   105,     0,     0,     0,     0,     0,     0,     0,
       0,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,     3,     0,     0,     0,     0,   106,   107,   108,
       0,     0,   109,     0,     0,     0,     0,     0,     0,     0,
     111,     1,     2,   112,     0,   113,     0,     0,     0,     0,
       0,     0,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     3,     0,     0,     0,
       0,     0,     0,     4,     0,     0,   240,   314,   241,     0,
       0,     0,     0,     0,     0,     1,     2,     0,     0,     0,
       0,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       3,     0,     0,     0,     0,     0,     0,     4,     0,     0,
       5,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     133,     0,     0,     0,     0,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     3,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   134,     0,     0,     0,     0,
       0,     0,     0,     0,   133,     0,     0,     0,     0,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   174,
      97,    98,    99,   100,   101,   102,   103,   104,   105,     0,
       0,     0,     0,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,   106,   107,   108,     0,     0,   109,     0,
       3,     0,   110,     0,     0,     0,   111,     0,     0,   112,
       0,   113,    97,    98,    99,   100,   101,   102,   103,   104,
     105,    97,    98,    99,   100,   101,   102,   103,   104,   105,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,   106,   107,   108,     0,     0,
     109,   261,     0,   140,   106,   107,   108,     0,   111,   109,
       0,   112,     0,   113,     0,     0,     0,   111,     0,     0,
     112,     0,   113,    97,    98,    99,   100,   101,   102,   103,
     104,   105,    97,    98,    99,   100,   101,   102,   103,   104,
     105,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   106,   107,   108,     0,
       0,   109,   308,     0,     0,   106,   107,   108,     0,   111,
     109,     0,   112,   317,   113,     0,     0,     0,   111,     0,
       0,   112,     0,   113,    97,    98,    99,   100,   101,   102,
     103,   104,   105,    97,    98,    99,   100,   101,   102,   103,
     104,   105,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   331,     0,     0,   106,   107,   108,
       0,     0,   109,     0,     0,     0,   106,   107,   108,     0,
     111,   109,     0,   112,   354,   113,     0,     0,     0,   111,
       0,     0,   112,     0,   113,    97,    98,    99,   100,   101,
     102,   103,   104,   105,    97,    98,    99,   100,   101,   102,
     103,   104,   105,     0,    97,    98,    99,   100,   101,   102,
     103,   104,   105,     0,     0,   361,     0,     0,   106,   107,
     108,     0,     0,   109,   376,     0,     0,   106,   107,   108,
       0,   111,   109,     0,   112,     0,   113,   106,   107,   108,
     111,     0,   192,   112,     0,   113,     0,     0,     0,     0,
     111,     0,     0,   112,     0,   113,    97,    98,    99,   100,
     101,   102,   103,   104,   105,    97,    98,    99,   100,   101,
     102,   103,   104,   105,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   106,
     107,   108,     3,     0,   194,     0,     0,     0,   106,   107,
     108,     0,   111,   109,     0,   112,     0,   113,     0,     0,
       0,   111,     0,     0,   112,     0,   113,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,   322,     3,     0,     0,
       0,     0,     0,     0,     4,     0,     0,   281,   314,   241,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     3,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   352,     0,     0,     0,
       0,     0,     0,     0,     3,     0,     0,     0,     0,     0,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,   184,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   279,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24
};

static const yytype_int16 yycheck[] =
{
      24,     0,     5,    68,     0,    69,     4,    92,     4,    70,
     110,    70,   135,    32,     0,    39,    25,    81,   243,   129,
      90,    91,    33,     7,     8,    43,     7,     8,    27,     0,
      20,    27,     7,     8,    33,    34,    32,    48,    37,   109,
     148,    27,   103,   104,   105,   110,    32,    71,     7,     8,
       0,    42,    50,    44,    50,    74,    27,   282,    42,    49,
      44,    47,    45,     7,     8,    46,    64,    53,   129,    39,
      69,    46,     8,   153,   197,    51,    33,    60,    46,   187,
       7,     8,    81,    42,     7,     8,   166,   148,    45,   148,
      73,    94,    90,    91,    92,    39,    25,    95,    42,    33,
      70,    71,    73,    42,    48,    44,   191,    34,   218,   219,
     220,   109,    39,    47,    60,    42,    39,    88,    46,    42,
      33,    48,   192,    33,   109,    71,   187,    52,   187,   153,
      33,   155,   135,   241,    47,    19,   160,    47,    50,   135,
      43,   202,   166,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
       7,     8,    43,   271,     7,     8,    33,   232,    33,    33,
     278,   236,   252,   158,   284,    33,    43,    64,    43,    43,
     241,    33,   241,   263,   264,    43,   286,    48,    42,   160,
      44,    34,    39,   191,   192,    42,    39,    44,   181,    42,
      45,   197,   267,    90,    91,    92,    42,   192,    95,   194,
     271,    48,   271,   321,   238,   239,    25,   278,   203,   278,
      33,   286,   109,   284,    33,    34,    15,    16,   252,    48,
      43,    33,    34,    42,    25,    44,    42,   240,    44,   263,
     264,   240,    33,    34,   240,   325,    35,    36,   247,    33,
      42,    42,   237,    44,    33,    42,   320,   243,    39,    43,
     321,    42,   321,    44,    43,    39,    40,    41,   253,   254,
     255,    42,   257,   276,    33,    34,    34,   357,   358,   359,
      34,   346,   281,   363,   345,   281,   345,    11,    12,   210,
     211,   212,   213,    48,    17,    18,    13,    14,   378,    37,
      38,   325,     7,     8,   191,   192,    47,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   208,   209,    42,    25,
      44,   320,    33,    34,    33,    34,    25,    33,    34,    43,
      54,    46,    56,   357,   358,   359,    42,     8,    44,   363,
      37,    38,    39,    33,    34,    42,   331,    33,    34,    46,
      47,    33,    34,    50,   378,    48,    53,    48,    55,    43,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    33,
      34,    81,   214,   215,    34,   360,   361,   216,   217,   364,
      43,    43,    43,    33,    42,    89,    45,    43,    32,   374,
      34,   376,    43,    37,    38,    39,    45,   382,    42,    34,
      27,    95,    46,    47,   276,    86,    50,    32,   178,    53,
      47,    55,    66,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,   247,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    81,   192,   202,   204,   160,    -1,
     205,    -1,    32,   206,    34,   207,    -1,    37,    38,    39,
      -1,    -1,    42,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      50,    -1,    -1,    53,    -1,    55,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    -1,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    37,    38,    39,    -1,    -1,    42,    -1,    -1,    -1,
      46,    -1,    -1,    -1,    50,    -1,    -1,    53,    -1,    55,
      -1,    -1,    -1,    -1,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    32,    -1,    -1,    -1,    -1,    37,    38,    39,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,     7,     8,    53,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,     7,     8,    -1,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       8,    -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    -1,    37,    38,    39,    -1,    -1,    42,    -1,
      32,    -1,    46,    -1,    -1,    -1,    50,    -1,    -1,    53,
      -1,    55,     4,     5,     6,     7,     8,     9,    10,    11,
      12,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    37,    38,    39,    -1,    -1,
      42,    34,    -1,    45,    37,    38,    39,    -1,    50,    42,
      -1,    53,    -1,    55,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,     4,     5,     6,     7,     8,     9,    10,
      11,    12,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,    -1,
      -1,    42,    43,    -1,    -1,    37,    38,    39,    -1,    50,
      42,    -1,    53,    45,    55,    -1,    -1,    -1,    50,    -1,
      -1,    53,    -1,    55,     4,     5,     6,     7,     8,     9,
      10,    11,    12,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    37,    38,    39,
      -1,    -1,    42,    -1,    -1,    -1,    37,    38,    39,    -1,
      50,    42,    -1,    53,    45,    55,    -1,    -1,    -1,    50,
      -1,    -1,    53,    -1,    55,     4,     5,     6,     7,     8,
       9,    10,    11,    12,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    -1,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    -1,    -1,    34,    -1,    -1,    37,    38,
      39,    -1,    -1,    42,    34,    -1,    -1,    37,    38,    39,
      -1,    50,    42,    -1,    53,    -1,    55,    37,    38,    39,
      50,    -1,    42,    53,    -1,    55,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    53,    -1,    55,     4,     5,     6,     7,
       8,     9,    10,    11,    12,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      38,    39,    32,    -1,    42,    -1,    -1,    -1,    37,    38,
      39,    -1,    50,    42,    -1,    53,    -1,    55,    -1,    -1,
      -1,    50,    -1,    -1,    53,    -1,    55,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    42,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,     8,    32,    39,    42,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    91,    92,    93,    94,    95,
      97,    98,   100,   101,   102,   103,   104,   105,   106,   107,
     109,   110,   115,   119,   120,   121,   122,   123,   105,   123,
     124,   119,   120,   123,    46,    91,     0,    94,    34,   109,
     121,   100,   100,   100,    46,    91,    33,    34,    25,    42,
      44,    46,    97,    99,   100,   137,   120,   122,   105,   123,
      43,    42,   120,     8,   116,   117,    46,    34,    99,   137,
     102,   105,   108,   111,   112,    46,   110,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    37,    38,    39,    42,
      46,    50,    53,    55,   129,   145,   147,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   165,     8,    43,   100,   125,   126,   127,   128,
      45,   147,   148,   160,     7,     8,    34,    47,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    91,
      99,   134,   135,   136,   137,   138,   139,   140,   141,   143,
     144,   145,    97,   137,    43,   125,   128,   118,    33,    47,
     116,    96,   112,   112,    47,   111,    34,    48,   113,   114,
     119,   108,    42,   160,    42,   160,   160,   112,   131,   144,
     129,   130,    20,    49,    19,    51,    52,    50,    17,    18,
      15,    16,    35,    36,    13,    14,    37,    38,    39,    40,
      41,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,   146,   159,    11,    12,    42,    44,    54,    56,
      42,    44,   119,   123,   132,   133,    43,    33,    33,    43,
      45,   148,    48,    42,    42,    42,   134,    42,    91,    34,
      34,    34,   144,    48,   139,    47,   134,    33,    34,    43,
      43,    25,   117,    47,   137,   148,    33,    34,    48,    47,
     131,    42,   123,   132,    43,    43,    33,    47,   150,   144,
     151,   152,   153,   154,   155,   155,   156,   156,   156,   156,
     157,   157,   158,   158,   159,   159,   159,   145,    43,   145,
     164,   144,    91,    91,    43,   125,   132,    45,   148,   133,
      42,    44,    76,   127,     8,    48,   134,   144,   144,   144,
      81,    34,   142,   144,    34,    34,   134,   145,   148,   114,
     148,    43,   159,    47,   129,    48,    33,    43,    45,    43,
      43,    45,    43,   125,    45,   148,   134,    43,    43,    43,
      42,    34,   144,    43,    34,   147,   145,    43,    45,   134,
     134,   134,   144,   144,    34,   134,    34,   144,    89,    43,
     144,   144,    34,   134,    34,   144
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    91,    92,    93,    93,    94,    94,    94,
      95,    95,    95,    96,    95,    97,    97,    98,    99,    99,
     100,   100,   100,   100,   100,   100,   101,   101,   101,   101,
     101,   102,   102,   103,   103,   103,   103,   103,   103,   103,
     103,   104,   104,   104,   104,   105,   105,   106,   106,   106,
     107,   107,   108,   108,   109,   109,   110,   110,   111,   111,
     112,   112,   112,   112,   113,   113,   114,   114,   114,   115,
     115,   115,   116,   116,   117,   118,   117,   119,   119,   120,
     120,   120,   120,   120,   120,   120,   121,   121,   122,   122,
     122,   123,   123,   123,   123,   124,   124,   125,   125,   126,
     126,   127,   127,   127,   128,   128,   129,   129,   129,   130,
     130,   131,   131,   132,   132,   132,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   134,   134,   134,   134,   134,
     134,   135,   135,   135,   136,   136,   137,   137,   138,   138,
     138,   139,   139,   140,   140,   140,   141,   141,   141,   142,
     142,   142,   142,   142,   142,   142,   142,   143,   143,   143,
     143,   143,   144,   144,   145,   145,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   147,   147,   148,
     149,   149,   150,   150,   151,   151,   152,   152,   153,   153,
     154,   154,   154,   155,   155,   155,   155,   155,   156,   156,
     156,   157,   157,   157,   158,   158,   158,   158,   159,   159,
     160,   160,   160,   160,   160,   160,   161,   161,   161,   161,
     161,   161,   162,   162,   162,   162,   162,   162,   162,   162,
     163,   163,   163,   163,   164,   164,   165,   165,   165,   165
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     2,     1,     1,     1,
       2,     3,     3,     0,     5,     2,     3,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     5,     2,
       1,     1,     1,     2,     1,     3,     1,     3,     2,     3,
       1,     2,     1,     2,     1,     3,     1,     2,     3,     4,
       5,     2,     1,     3,     1,     0,     4,     1,     2,     1,
       3,     3,     4,     4,     3,     4,     1,     2,     4,     3,
       4,     1,     2,     2,     3,     1,     2,     1,     3,     1,
       3,     2,     1,     2,     1,     3,     1,     3,     4,     1,
       3,     1,     2,     1,     1,     2,     3,     2,     3,     3,
       4,     2,     3,     3,     4,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     1,     2,     2,     3,     1,     1,
       2,     1,     2,     5,     7,     5,     5,     7,     5,     2,
       3,     3,     4,     3,     4,     4,     5,     3,     2,     2,
       2,     3,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     1,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     4,
       1,     2,     2,     2,     2,     4,     1,     1,     1,     1,
       1,     1,     1,     4,     3,     4,     3,     3,     2,     2,
       1,     1,     1,     3,     1,     3,     1,     1,     1,     1
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
#line 139 "cgram.y" /* yacc.c:1646  */
    { 
      }
#line 1826 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 142 "cgram.y" /* yacc.c:1646  */
    {
      }
#line 1833 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 148 "cgram.y" /* yacc.c:1646  */
    { root = (yyvsp[0].treeptr);
      }
#line 1840 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 153 "cgram.y" /* yacc.c:1646  */
    { }
#line 1846 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 155 "cgram.y" /* yacc.c:1646  */
    { (yyval.treeptr) = alctree(TU_TU_ED, "translation_unit", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 1852 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 168 "cgram.y" /* yacc.c:1646  */
    { /* old school pre-ANSI, no return type */
      }
#line 1859 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 173 "cgram.y" /* yacc.c:1646  */
    { /* old school pre ANSI */
      }
#line 1866 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 178 "cgram.y" /* yacc.c:1646  */
    { /* proper ANSI C function definition */
      (yyval.treeptr) = alctree(FD_DS_FDE_CS, "function_definition", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));
      }
#line 1874 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 183 "cgram.y" /* yacc.c:1646  */
    { /* declaration_list! This must be pre-ANSI  */
      }
#line 1881 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 186 "cgram.y" /* yacc.c:1646  */
    {
      }
#line 1888 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 192 "cgram.y" /* yacc.c:1646  */
    {
	  }
#line 1895 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 196 "cgram.y" /* yacc.c:1646  */
    { (yyval.treeptr) = alctree(DE_DS_IDL, "declaration", 2, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr));
	  }
#line 1902 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 202 "cgram.y" /* yacc.c:1646  */
    {
            }
#line 1909 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 207 "cgram.y" /* yacc.c:1646  */
    { }
#line 1915 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 209 "cgram.y" /* yacc.c:1646  */
    { (yyval.treeptr)=alctree(DECL_LIST, "declaration_list", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr));
	  }
#line 1922 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 217 "cgram.y" /* yacc.c:1646  */
    {
          }
#line 1929 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 222 "cgram.y" /* yacc.c:1646  */
    { 
          }
#line 1936 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 226 "cgram.y" /* yacc.c:1646  */
    {  
          }
#line 1943 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 235 "cgram.y" /* yacc.c:1646  */
    {
           }
#line 1950 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 238 "cgram.y" /* yacc.c:1646  */
    {
           }
#line 1957 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 241 "cgram.y" /* yacc.c:1646  */
    {
           }
#line 1964 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 244 "cgram.y" /* yacc.c:1646  */
    {
           }
#line 1971 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 247 "cgram.y" /* yacc.c:1646  */
    {
           }
#line 1978 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 258 "cgram.y" /* yacc.c:1646  */
    {
        }
#line 1985 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 261 "cgram.y" /* yacc.c:1646  */
    {
        }
#line 1992 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 264 "cgram.y" /* yacc.c:1646  */
    {
        }
#line 1999 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 267 "cgram.y" /* yacc.c:1646  */
    {
        }
#line 2006 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 270 "cgram.y" /* yacc.c:1646  */
    {
        }
#line 2013 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 273 "cgram.y" /* yacc.c:1646  */
    {
        }
#line 2020 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 281 "cgram.y" /* yacc.c:1646  */
    {
           }
#line 2027 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 284 "cgram.y" /* yacc.c:1646  */
    {
           }
#line 2034 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 287 "cgram.y" /* yacc.c:1646  */
    {
           }
#line 2041 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 290 "cgram.y" /* yacc.c:1646  */
    {
           }
#line 2048 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 296 "cgram.y" /* yacc.c:1646  */
    {
          }
#line 2055 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 299 "cgram.y" /* yacc.c:1646  */
    {
          }
#line 2062 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 305 "cgram.y" /* yacc.c:1646  */
    {
    }
#line 2069 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 309 "cgram.y" /* yacc.c:1646  */
    {
    }
#line 2076 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 312 "cgram.y" /* yacc.c:1646  */
    {
    }
#line 2083 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 318 "cgram.y" /* yacc.c:1646  */
    {  }
#line 2089 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 320 "cgram.y" /* yacc.c:1646  */
    {  }
#line 2095 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 325 "cgram.y" /* yacc.c:1646  */
    {  }
#line 2101 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 327 "cgram.y" /* yacc.c:1646  */
    {  }
#line 2107 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 337 "cgram.y" /* yacc.c:1646  */
    { 
        }
#line 2114 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 342 "cgram.y" /* yacc.c:1646  */
    { }
#line 2120 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 344 "cgram.y" /* yacc.c:1646  */
    { }
#line 2126 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 349 "cgram.y" /* yacc.c:1646  */
    {
	  }
#line 2133 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 352 "cgram.y" /* yacc.c:1646  */
    {
          }
#line 2140 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 359 "cgram.y" /* yacc.c:1646  */
    {
		}
#line 2147 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 363 "cgram.y" /* yacc.c:1646  */
    {
		}
#line 2154 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 371 "cgram.y" /* yacc.c:1646  */
    {
		}
#line 2161 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 378 "cgram.y" /* yacc.c:1646  */
    {
		}
#line 2168 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 381 "cgram.y" /* yacc.c:1646  */
    {
		}
#line 2175 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 387 "cgram.y" /* yacc.c:1646  */
    {
		}
#line 2182 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 390 "cgram.y" /* yacc.c:1646  */
    {
		}
#line 2189 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 393 "cgram.y" /* yacc.c:1646  */
    {
		}
#line 2196 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 400 "cgram.y" /* yacc.c:1646  */
    {
		}
#line 2203 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 406 "cgram.y" /* yacc.c:1646  */
    {
		}
#line 2210 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 409 "cgram.y" /* yacc.c:1646  */
    {
		}
#line 2217 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 412 "cgram.y" /* yacc.c:1646  */
    {
		}
#line 2224 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 418 "cgram.y" /* yacc.c:1646  */
    {
	}
#line 2231 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 421 "cgram.y" /* yacc.c:1646  */
    { (yyval.treeptr) = alctree(D_P_DD, "declarator", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr));
	}
#line 2238 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 427 "cgram.y" /* yacc.c:1646  */
    {
        }
#line 2245 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 430 "cgram.y" /* yacc.c:1646  */
    {
	}
#line 2252 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 433 "cgram.y" /* yacc.c:1646  */
    {
        }
#line 2259 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 436 "cgram.y" /* yacc.c:1646  */
    { (yyval.treeptr) = alctree(DD_DD_ARRAY, "array declarator", 2, (yyvsp[-3].treeptr), (yyvsp[-1].treeptr));
        }
#line 2266 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 439 "cgram.y" /* yacc.c:1646  */
    { (yyval.treeptr) = alctree(DD_DD_FUNC, "function declarator", 2, (yyvsp[-3].treeptr), (yyvsp[-1].treeptr));
	}
#line 2273 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 442 "cgram.y" /* yacc.c:1646  */
    {
	}
#line 2280 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 445 "cgram.y" /* yacc.c:1646  */
    {
	}
#line 2287 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 452 "cgram.y" /* yacc.c:1646  */
    {
    }
#line 2294 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 458 "cgram.y" /* yacc.c:1646  */
    { (yyval.treeptr) = alctree(DFD_PTL, "dir_func_decl", 2, (yyvsp[-3].treeptr), (yyvsp[-1].treeptr));
      }
#line 2301 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 461 "cgram.y" /* yacc.c:1646  */
    { (yyval.treeptr) = alctree(DFD_0, "dir_func_decl",1, (yyvsp[-2].treeptr));
      }
#line 2308 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 464 "cgram.y" /* yacc.c:1646  */
    { /* pre-ANSI, error case */
      }
#line 2315 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 470 "cgram.y" /* yacc.c:1646  */
    {
      }
#line 2322 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 474 "cgram.y" /* yacc.c:1646  */
    {
      }
#line 2329 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 477 "cgram.y" /* yacc.c:1646  */
    {
      }
#line 2336 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 480 "cgram.y" /* yacc.c:1646  */
    {
      }
#line 2343 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 487 "cgram.y" /* yacc.c:1646  */
    {
    }
#line 2350 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 492 "cgram.y" /* yacc.c:1646  */
    { }
#line 2356 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 494 "cgram.y" /* yacc.c:1646  */
    {
    }
#line 2363 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 499 "cgram.y" /* yacc.c:1646  */
    { }
#line 2369 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 501 "cgram.y" /* yacc.c:1646  */
    { (yyval.treeptr) = alctree(PL, "parameter_list", 2, (yyvsp[-2].treeptr), (yyvsp[0].treeptr)); printf("parameter_list\n");
      }
#line 2376 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 507 "cgram.y" /* yacc.c:1646  */
    { (yyval.treeptr) = alctree(PD, "parameter_declaration1", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); printf("parmdecl1\n"); }
#line 2382 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 509 "cgram.y" /* yacc.c:1646  */
    { }
#line 2388 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 511 "cgram.y" /* yacc.c:1646  */
    { (yyval.treeptr) = alctree(PDA, "parameter_declaration2", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2394 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 516 "cgram.y" /* yacc.c:1646  */
    { }
#line 2400 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 518 "cgram.y" /* yacc.c:1646  */
    { }
#line 2406 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 524 "cgram.y" /* yacc.c:1646  */
    { }
#line 2412 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 526 "cgram.y" /* yacc.c:1646  */
    { }
#line 2418 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 532 "cgram.y" /* yacc.c:1646  */
    { }
#line 2424 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 538 "cgram.y" /* yacc.c:1646  */
    { }
#line 2430 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 545 "cgram.y" /* yacc.c:1646  */
    { (yyval.treeptr)=alctree(AD, "abstract_declarator", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr));
		}
#line 2437 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 551 "cgram.y" /* yacc.c:1646  */
    {
		}
#line 2444 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 554 "cgram.y" /* yacc.c:1646  */
    {
		}
#line 2451 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 557 "cgram.y" /* yacc.c:1646  */
    {
		}
#line 2458 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 560 "cgram.y" /* yacc.c:1646  */
    {
		}
#line 2465 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 563 "cgram.y" /* yacc.c:1646  */
    {
		}
#line 2472 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 566 "cgram.y" /* yacc.c:1646  */
    {
		}
#line 2479 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 569 "cgram.y" /* yacc.c:1646  */
    {
		}
#line 2486 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 572 "cgram.y" /* yacc.c:1646  */
    {
		}
#line 2493 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 575 "cgram.y" /* yacc.c:1646  */
    {
		}
#line 2500 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 590 "cgram.y" /* yacc.c:1646  */
    {
    }
#line 2507 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 593 "cgram.y" /* yacc.c:1646  */
    { 
      }
#line 2514 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 596 "cgram.y" /* yacc.c:1646  */
    {
      }
#line 2521 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 602 "cgram.y" /* yacc.c:1646  */
    {
		}
#line 2528 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 605 "cgram.y" /* yacc.c:1646  */
    {
		}
#line 2535 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 611 "cgram.y" /* yacc.c:1646  */
    {
    }
#line 2542 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 614 "cgram.y" /* yacc.c:1646  */
    { (yyval.treeptr) = alctree(CSTMT, "compound_statement", 1, (yyvsp[-1].treeptr));
      }
#line 2549 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 620 "cgram.y" /* yacc.c:1646  */
    {
    }
#line 2556 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 624 "cgram.y" /* yacc.c:1646  */
    {
    }
#line 2563 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 628 "cgram.y" /* yacc.c:1646  */
    { 
     (yyval.treeptr) = alctree(CSO, "compound_statement_opt", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr));
    }
#line 2571 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 637 "cgram.y" /* yacc.c:1646  */
    {
		(yyval.treeptr) = alctree(SL_SL_S, "statment_list", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr));
		}
#line 2579 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 644 "cgram.y" /* yacc.c:1646  */
    {   
      (yyval.treeptr) = alctree(SS_IT, "if", 2, (yyvsp[-2].treeptr), (yyvsp[0].treeptr));
      }
#line 2587 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 648 "cgram.y" /* yacc.c:1646  */
    {
      (yyval.treeptr) = alctree(SS_ITE, "if_else", 3, (yyvsp[-4].treeptr), (yyvsp[-2].treeptr), (yyvsp[0].treeptr));
     }
#line 2595 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 653 "cgram.y" /* yacc.c:1646  */
    {
     }
#line 2602 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 659 "cgram.y" /* yacc.c:1646  */
    {
    (yyval.treeptr) = alctree(IS_WHILE, "while", 2, (yyvsp[-2].treeptr), (yyvsp[0].treeptr));
    }
#line 2610 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 663 "cgram.y" /* yacc.c:1646  */
    {
    }
#line 2617 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 667 "cgram.y" /* yacc.c:1646  */
    { 
      }
#line 2624 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 673 "cgram.y" /* yacc.c:1646  */
    {
     }
#line 2631 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 676 "cgram.y" /* yacc.c:1646  */
    {
     }
#line 2638 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 679 "cgram.y" /* yacc.c:1646  */
    {
     }
#line 2645 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 682 "cgram.y" /* yacc.c:1646  */
    {
     }
#line 2652 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 685 "cgram.y" /* yacc.c:1646  */
    {
     }
#line 2659 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 688 "cgram.y" /* yacc.c:1646  */
    {
     }
#line 2666 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 691 "cgram.y" /* yacc.c:1646  */
    {
     }
#line 2673 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 694 "cgram.y" /* yacc.c:1646  */
    {
     }
#line 2680 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 702 "cgram.y" /* yacc.c:1646  */
    {
  }
#line 2687 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 705 "cgram.y" /* yacc.c:1646  */
    {
  }
#line 2694 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 708 "cgram.y" /* yacc.c:1646  */
    {
  }
#line 2701 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 711 "cgram.y" /* yacc.c:1646  */
    {
      (yyval.treeptr) = alctree(JS_RET, "return", 1, (yyvsp[-1].treeptr));
  }
#line 2709 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 715 "cgram.y" /* yacc.c:1646  */
    { 
      (yyval.treeptr) = alctree(JS_RET_EX, "return_expr", 1, (yyvsp[-1].treeptr));
  }
#line 2717 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 722 "cgram.y" /* yacc.c:1646  */
    {
		}
#line 2724 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 725 "cgram.y" /* yacc.c:1646  */
    {
		}
#line 2731 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 733 "cgram.y" /* yacc.c:1646  */
    {
	  (yyval.treeptr) = alctree(ASN_EX, "asn", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));
          }
#line 2739 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 739 "cgram.y" /* yacc.c:1646  */
    { }
#line 2745 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 740 "cgram.y" /* yacc.c:1646  */
    { }
#line 2751 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 741 "cgram.y" /* yacc.c:1646  */
    { }
#line 2757 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 742 "cgram.y" /* yacc.c:1646  */
    { }
#line 2763 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 743 "cgram.y" /* yacc.c:1646  */
    { }
#line 2769 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 744 "cgram.y" /* yacc.c:1646  */
    { }
#line 2775 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 745 "cgram.y" /* yacc.c:1646  */
    { }
#line 2781 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 746 "cgram.y" /* yacc.c:1646  */
    { }
#line 2787 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 747 "cgram.y" /* yacc.c:1646  */
    { }
#line 2793 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 748 "cgram.y" /* yacc.c:1646  */
    { }
#line 2799 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 749 "cgram.y" /* yacc.c:1646  */
    { }
#line 2805 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 756 "cgram.y" /* yacc.c:1646  */
    {
		}
#line 2812 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 769 "cgram.y" /* yacc.c:1646  */
    {
	        (yyval.treeptr) = alctree(LOG_OR, "or", 2, (yyvsp[-2].treeptr), (yyvsp[0].treeptr));
                }
#line 2820 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 777 "cgram.y" /* yacc.c:1646  */
    {
	        (yyval.treeptr) = alctree(LOG_AND, "and", 2, (yyvsp[-2].treeptr), (yyvsp[0].treeptr));
		}
#line 2828 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 785 "cgram.y" /* yacc.c:1646  */
    {
		}
#line 2835 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 792 "cgram.y" /* yacc.c:1646  */
    {
		}
#line 2842 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 799 "cgram.y" /* yacc.c:1646  */
    {
		}
#line 2849 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 806 "cgram.y" /* yacc.c:1646  */
    {
	        (yyval.treeptr) = alctree(LOG_EQ, "equal", 2, (yyvsp[-2].treeptr), (yyvsp[0].treeptr));
	        }
#line 2857 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 810 "cgram.y" /* yacc.c:1646  */
    {
                }
#line 2864 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 817 "cgram.y" /* yacc.c:1646  */
    {
     (yyval.treeptr) = alctree(RE_LT, "less", 2, (yyvsp[-2].treeptr), (yyvsp[0].treeptr));
     }
#line 2872 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 821 "cgram.y" /* yacc.c:1646  */
    {
     }
#line 2879 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 824 "cgram.y" /* yacc.c:1646  */
    {
     }
#line 2886 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 827 "cgram.y" /* yacc.c:1646  */
    {
     }
#line 2893 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 834 "cgram.y" /* yacc.c:1646  */
    {
     }
#line 2900 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 837 "cgram.y" /* yacc.c:1646  */
    {
     }
#line 2907 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 844 "cgram.y" /* yacc.c:1646  */
    {
      (yyval.treeptr) = alctree(ADDITIVE, "plus", 2, (yyvsp[-2].treeptr), (yyvsp[0].treeptr));
     }
#line 2915 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 848 "cgram.y" /* yacc.c:1646  */
    {
      (yyval.treeptr) = alctree(ADDITIVE_MINUS, "minus", 2, (yyvsp[-2].treeptr), (yyvsp[0].treeptr));
     }
#line 2923 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 856 "cgram.y" /* yacc.c:1646  */
    {
      (yyval.treeptr) = alctree(MULTIPLY, "times", 2, (yyvsp[-2].treeptr), (yyvsp[0].treeptr));
     }
#line 2931 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 860 "cgram.y" /* yacc.c:1646  */
    {
     }
#line 2938 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 863 "cgram.y" /* yacc.c:1646  */
    {
      (yyval.treeptr) = alctree(MODULO, "mod", 2, (yyvsp[-2].treeptr), (yyvsp[0].treeptr));
     }
#line 2946 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 871 "cgram.y" /* yacc.c:1646  */
    {
   }
#line 2953 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 879 "cgram.y" /* yacc.c:1646  */
    {
   }
#line 2960 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 882 "cgram.y" /* yacc.c:1646  */
    {
   }
#line 2967 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 885 "cgram.y" /* yacc.c:1646  */
    {
   }
#line 2974 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 888 "cgram.y" /* yacc.c:1646  */
    {
   }
#line 2981 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 891 "cgram.y" /* yacc.c:1646  */
    {  
   }
#line 2988 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 897 "cgram.y" /* yacc.c:1646  */
    {
   }
#line 2995 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 900 "cgram.y" /* yacc.c:1646  */
    {
   }
#line 3002 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 903 "cgram.y" /* yacc.c:1646  */
    {
   }
#line 3009 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 906 "cgram.y" /* yacc.c:1646  */
    {
   }
#line 3016 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 909 "cgram.y" /* yacc.c:1646  */
    {
   }
#line 3023 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 912 "cgram.y" /* yacc.c:1646  */
    {
   }
#line 3030 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 920 "cgram.y" /* yacc.c:1646  */
    {
     }
#line 3037 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 923 "cgram.y" /* yacc.c:1646  */
    {
     }
#line 3044 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 926 "cgram.y" /* yacc.c:1646  */
    { (yyval.treeptr) = alctree(PE_FCALL, "postfix_expression",2, (yyvsp[-3].treeptr), (yyvsp[-1].treeptr));
     }
#line 3051 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 929 "cgram.y" /* yacc.c:1646  */
    {
     }
#line 3058 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 932 "cgram.y" /* yacc.c:1646  */
    {
     }
#line 3065 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 935 "cgram.y" /* yacc.c:1646  */
    {
     }
#line 3072 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 938 "cgram.y" /* yacc.c:1646  */
    {
     }
#line 3079 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 944 "cgram.y" /* yacc.c:1646  */
    { 
   }
#line 3086 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 948 "cgram.y" /* yacc.c:1646  */
    {
     }
#line 3093 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 951 "cgram.y" /* yacc.c:1646  */
    { 
   }
#line 3100 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 957 "cgram.y" /* yacc.c:1646  */
    {
   }
#line 3107 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 960 "cgram.y" /* yacc.c:1646  */
    {
   }
#line 3114 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 966 "cgram.y" /* yacc.c:1646  */
    {
   }
#line 3121 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 969 "cgram.y" /* yacc.c:1646  */
    {
   }
#line 3128 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 972 "cgram.y" /* yacc.c:1646  */
    {
   }
#line 3135 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 975 "cgram.y" /* yacc.c:1646  */
    {
   }
#line 3142 "cgram.tab.c" /* yacc.c:1646  */
    break;


#line 3146 "cgram.tab.c" /* yacc.c:1646  */
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
#line 979 "cgram.y" /* yacc.c:1906  */


const char *yyname(int sym)
{
   return yytname[sym-BAD_TOKEN+3];
}
