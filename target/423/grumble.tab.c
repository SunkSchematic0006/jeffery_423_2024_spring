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
#line 1 "grumble.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>

/* include lots of your include files here */

# define YYDEBUG 1
/* #define DEBUG */

extern int yyerror(char *);
extern int yylex(void);

/* declare externs for global variables and helper function prototypes */


#line 82 "grumble.tab.c" /* yacc.c:339  */

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
    ELSE = 343
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

#line 219 "grumble.tab.c" /* yacc.c:358  */

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
#define YYLAST   1313

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  82
/* YYNRULES -- Number of rules.  */
#define YYNRULES  245
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  392

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   343

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
      85,    86,    87,    88
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   120,   120,   123,   129,   135,   136,   142,   145,   147,
     153,   152,   160,   159,   167,   166,   174,   173,   182,   185,
     192,   198,   199,   205,   207,   210,   211,   215,   216,   225,
     228,   231,   234,   237,   243,   244,   248,   251,   254,   257,
     260,   263,   266,   267,   271,   274,   277,   280,   286,   289,
     296,   295,   300,   300,   303,   309,   311,   316,   318,   324,
     328,   334,   335,   340,   343,   349,   350,   353,   354,   360,
     361,   368,   369,   372,   378,   381,   384,   390,   391,   397,
     401,   400,   409,   412,   418,   421,   424,   427,   430,   433,
     436,   442,   443,   449,   452,   455,   461,   464,   468,   471,
     477,   478,   484,   485,   491,   492,   498,   500,   502,   507,
     509,   514,   515,   517,   522,   523,   528,   529,   534,   535,
     536,   542,   545,   548,   551,   554,   557,   560,   563,   566,
     572,   573,   574,   575,   576,   577,   581,   584,   587,   593,
     596,   602,   606,   605,   614,   618,   622,   630,   631,   637,
     641,   645,   651,   655,   659,   665,   668,   671,   674,   677,
     680,   683,   686,   694,   697,   700,   703,   706,   712,   715,
     722,   723,   729,   730,   731,   732,   733,   734,   735,   736,
     737,   738,   739,   744,   745,   752,   757,   758,   764,   765,
     770,   771,   777,   778,   784,   785,   791,   792,   795,   801,
     802,   805,   808,   811,   817,   818,   821,   827,   828,   831,
     837,   838,   841,   844,   850,   851,   858,   859,   862,   865,
     868,   871,   877,   880,   883,   886,   889,   892,   899,   900,
     903,   906,   909,   912,   915,   918,   924,   927,   928,   931,
     937,   940,   946,   949,   952,   955
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
  "BREAK", "RETURN", "ELSE", "$accept", "identifier", "file",
  "translation_unit", "external_declaration", "function_definition", "$@1",
  "$@2", "$@3", "$@4", "declaration", "untyped_declaration",
  "declaration_list", "declaration_specifiers", "storage_class_specifier",
  "type_specifier", "actual_type_specifier", "type_adjective",
  "type_qualifier", "struct_or_union_specifier", "$@5", "$@6",
  "struct_or_union", "struct_declaration_list", "init_declarator_list",
  "init_declarator", "struct_declaration", "specifier_qualifier_list",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "enumerator_list", "enumerator", "$@7", "declarator",
  "direct_declarator", "function_declarator", "direct_function_declarator",
  "pointer", "type_qualifier_list", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "initializer", "initializer_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "statement", "labeled_statement",
  "expression_statement", "compound_statement", "$@8",
  "compound_statement_opt", "statement_list", "selection_statement",
  "iteration_statement", "forcntrl", "jump_statement", "expression",
  "assignment_expression", "assignment_operator", "conditional_expression",
  "constant_expression", "logical_or_expression", "logical_and_expression",
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
     335,   336,   337,   338,   339,   340,   341,   342,   343
};
# endif

#define YYPACT_NINF -245

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-245)))

#define YYTABLE_NINF -91

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     620,  -245,  -245,  -245,    57,   186,  -245,  -245,  -245,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
    -245,  -245,  -245,  -245,    90,  -245,    28,   620,  -245,  -245,
    -245,  -245,   165,  1180,  1180,  -245,  -245,  1180,  -245,   110,
     206,  -245,  -245,    43,   -17,  1180,  -245,    15,  -245,  -245,
      57,    34,    30,    15,    85,    60,  -245,  -245,  -245,   213,
    1180,  -245,  -245,  -245,  -245,    65,   186,  -245,   800,   664,
     819,    69,  -245,  1180,   165,   -17,  -245,  -245,  -245,  -245,
     708,    30,   117,    -1,  -245,    85,  -245,    69,  1180,  1024,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  1012,  1064,
    1064,  -245,  -245,  -245,   532,   800,  -245,  -245,  -245,  -245,
    -245,  -245,    42,   148,    99,   103,   126,   231,   185,   239,
     227,   204,  -245,   310,  1073,    22,  -245,  -245,  -245,   226,
     146,   140,   154,  -245,   -13,  -245,  -245,   153,  -245,   142,
    -245,    69,  -245,  -245,   167,    87,   166,    85,  -245,     3,
    -245,    69,  1024,  1024,  1224,  -245,   136,  1024,   532,  -245,
    1073,  -245,  -245,   170,   176,   108,  -245,  -245,    54,  1073,
    1073,  1073,  1073,  1073,  1073,  1073,  1073,  1073,  1073,  1073,
    1073,  1073,  1073,  1073,  1073,  1073,  1073,  1073,  -245,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  1073,
    -245,  -245,  -245,   871,  1073,   270,   270,   576,   880,  -245,
     124,  -245,    95,   251,  1072,   200,   254,  -245,  -245,   379,
    -245,  -245,  -245,  1073,  -245,  -245,  -245,  -245,  -245,  -245,
    -245,  -245,  1073,   268,  -245,   174,  1238,   184,  1117,   104,
    -245,  1073,  1073,  -245,   748,  -245,   148,    37,    99,   103,
     126,   231,   185,   185,   239,   239,   239,   239,   227,   227,
     204,   204,  -245,  -245,  -245,  -245,  -245,  -245,   128,    88,
    -245,  -245,  -245,   190,   194,  -245,   168,    95,  1161,   932,
    -245,  -245,  -245,   210,   215,  -245,  1073,   218,   212,   244,
     252,   476,   255,   270,   265,   269,   810,   225,   379,  -245,
    -245,  -245,  -245,   259,   476,  -245,  -245,  -245,   271,  -245,
    -245,    44,  -245,  1073,  -245,  -245,  -245,  -245,  -245,  -245,
    1073,  1073,  -245,  -245,  -245,  -245,  -245,  -245,   272,  -245,
     281,   273,   476,  1073,  1073,  1073,   248,   941,   308,  -245,
    -245,  -245,   276,   476,   476,  -245,  -245,  -245,  -245,  -245,
    -245,  -245,  -245,  -245,   476,  -245,   131,   159,   163,   304,
     993,   305,   278,  -245,  -245,  -245,  -245,   476,   476,   476,
    1073,  1073,   280,   476,  1002,   262,  -245,  -245,   172,   314,
    1073,  -245,  1073,   284,   476,   317,   314,   314,  1073,  -245,
    -245,   314
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     2,    41,    96,     0,    29,    30,    31,    32,
      33,    37,    44,    38,    45,    46,    47,    39,    40,    48,
      49,    36,    55,    56,     0,    84,     0,     4,     5,     7,
       8,     9,     0,    23,    25,    34,    35,    27,    42,     0,
       0,    59,    43,    61,    82,    10,    91,     0,   100,    98,
      97,     0,    82,     0,     0,    76,     1,     6,    18,     0,
      14,    24,    26,    28,    50,    54,     0,    20,     0,     0,
       0,     0,    21,    12,     0,    83,    92,   101,    99,    85,
       0,    83,    79,     0,    77,     0,    19,     0,    16,     0,
      52,    60,   242,   243,   244,   245,   236,   238,     0,     0,
       0,   224,   225,   223,     0,     0,   222,   226,   227,    62,
     111,   170,   183,   186,   188,   190,   192,   194,   196,   199,
     204,   207,   210,   214,     0,   216,   228,   237,   109,    94,
     107,     0,   102,   104,     0,    86,   185,     0,   214,   142,
      11,     0,    22,    89,     0,     0,     0,     0,    74,     0,
      15,     0,    65,    67,     0,    57,     0,     0,     0,   220,
       0,   217,   218,   116,     0,     0,   168,   114,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   173,   174,
     175,   176,   172,   177,   178,   179,   180,   181,   182,     0,
     219,   234,   235,     0,     0,     0,     0,     0,     0,   106,
     118,   108,   119,    93,     0,     0,    95,    87,   141,     0,
      13,    88,    90,     0,    78,    75,    17,    66,    68,    51,
      58,    63,     0,     0,    69,    71,     0,     0,     0,   118,
     117,     0,     0,   239,     0,   112,   187,     0,   189,   191,
     193,   195,   197,   198,   202,   203,   200,   201,   205,   206,
     208,   209,   211,   212,   213,   171,   230,   240,     0,     0,
     233,   232,   126,     0,     0,   122,     0,   120,     0,     0,
     103,   105,   110,   245,   236,   139,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   145,   147,
     130,   132,   131,     0,   144,   133,   134,   135,     0,    81,
      72,     0,    64,     0,    53,   221,   215,   169,   113,   115,
       0,     0,   231,   229,   127,   121,   123,   128,     0,   124,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   164,
     165,   166,     0,     0,   146,   143,   148,   140,    70,    73,
     184,   241,   129,   125,     0,   138,     0,     0,     0,     0,
       0,     0,     0,   163,   167,   136,   137,     0,     0,     0,
       0,   155,     0,     0,     0,   149,   151,   152,     0,   156,
     157,   154,   159,     0,     0,     0,   158,   160,   161,   150,
     153,   162
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -245,   -24,  -245,  -245,   325,  -245,  -245,  -245,  -245,  -245,
       2,  -245,   -54,     4,  -245,   -50,  -245,  -245,     5,  -245,
    -245,  -245,  -245,   196,   -18,   288,  -141,   -39,  -245,    45,
    -245,   274,   208,  -245,    -4,    16,   326,   315,    17,  -245,
     -61,  -245,   178,   277,   -95,  -245,   222,  -118,  -186,  -244,
    -245,  -245,   -29,  -245,  -245,    83,  -245,  -245,  -245,  -245,
     -99,   -65,  -245,   -63,  -197,  -245,   224,   211,   223,   221,
     228,   147,    52,   143,   144,  -106,   192,  -245,  -245,  -245,
    -245,  -245
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    25,    26,    27,    28,    29,    71,   141,    87,   151,
      72,    31,    73,    74,    33,    34,    35,    36,    37,    38,
      89,   157,    39,   154,    40,    41,   155,   156,   233,   234,
      42,    83,    84,   146,    43,    52,    45,    46,    53,    50,
     273,   132,   133,   134,   109,   168,   164,   274,   212,   299,
     300,   301,   302,   219,   303,   304,   305,   306,   361,   307,
     308,   166,   199,   111,   137,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     268,   127
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      55,    51,    30,   110,    32,   165,    88,   136,   131,    48,
     167,   276,   211,   230,    59,    65,    44,    47,   200,   144,
     215,    49,     1,     2,   277,    69,   309,    70,    56,    30,
     216,    32,   147,   201,   202,   310,   147,    61,    62,   152,
     110,    63,   140,    44,    47,   240,   148,   336,    44,    47,
     225,     1,     2,   277,   152,    77,    59,     5,   150,   165,
     346,   165,   169,    75,   203,   163,   204,    78,    68,    81,
     242,   247,    80,   130,    70,   142,   205,    79,   206,   262,
     263,   264,   330,     4,   130,   320,     5,   244,   355,   331,
     142,   170,   232,    82,   153,   230,     4,     1,     2,   365,
     346,   245,   152,   152,   152,   269,    85,   152,   152,   153,
     366,    90,   220,   227,   228,   139,   349,     1,     2,   163,
     215,   242,   226,   375,   376,   377,   209,    19,    20,   381,
     222,     1,     2,   323,   265,   316,    54,   278,   267,   279,
     389,   242,   -80,     1,     2,   136,   238,   210,   208,   319,
     172,   243,   235,     1,     2,   173,    64,   153,   153,   153,
     136,   321,   153,   153,   242,   298,   207,   171,   208,   136,
     231,   322,     1,     2,   367,     4,   174,   317,     5,   110,
     239,   270,   271,   213,   232,     4,   152,   214,   207,   218,
     208,   223,   242,     1,     2,   297,   242,   342,   217,    58,
     177,   178,   368,    51,     4,   242,   369,     5,   282,     4,
     221,   130,   238,   326,   208,   385,   136,   328,   130,   241,
     179,   180,   313,   136,   210,     4,    81,   315,     5,   254,
     255,   256,   257,   324,   356,   357,   358,   325,   362,    66,
      67,   153,   130,   185,   186,   187,    66,    86,   175,   176,
     136,   -89,   181,   182,   333,   239,   351,   350,    -3,   -89,
     -89,   372,   138,    -2,   183,   184,   332,   297,   -89,   338,
     -89,   378,   379,   343,   297,   383,   -88,     1,     2,   -90,
     297,   386,   130,   387,   -88,   -88,   334,   -90,   -90,   391,
     159,   161,   162,   -88,   335,   -88,   -90,   337,   -90,   339,
     142,   311,   312,   340,   242,   347,   345,   235,   297,   242,
     364,   242,   374,   242,   380,   352,   138,   242,   388,   297,
     297,   354,   252,   253,   258,   259,   353,   260,   261,   359,
     297,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   363,   297,   297,   297,   370,   242,   373,   297,
     384,   390,    57,   236,    91,   224,   348,   145,    60,   149,
     297,   138,    76,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     237,   344,   248,    92,    93,    94,   283,   284,    97,    98,
      99,   100,   281,   246,   250,   249,     0,     0,     0,     0,
     138,     0,   251,     0,     0,     0,     0,     0,     0,     0,
       0,     3,     0,   285,     0,   138,   101,   102,   103,     0,
       0,   104,     0,     0,   138,   139,     0,     0,     0,   106,
       0,     0,   107,   138,   108,     0,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,     0,     0,     0,
       0,   138,     0,     0,     0,     0,     0,     0,   138,     0,
      92,    93,    94,   283,   284,    97,    98,    99,   100,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   138,     0,     0,     0,     0,
     285,     0,   138,   101,   102,   103,     0,     0,   104,     0,
       0,     0,   139,     0,     0,     0,   106,     0,     0,   107,
       0,   108,     0,     0,     0,     0,    92,    93,    94,    95,
      96,    97,    98,    99,   100,     0,     0,     0,     0,     0,
       0,     0,     0,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,     3,     0,     0,     0,     0,   101,
     102,   103,     0,     0,   104,     0,     0,     0,     0,     0,
       0,     0,   106,     1,     2,   107,     0,   108,     0,     0,
       0,     0,     0,     0,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     3,     0,
       0,     0,     0,     0,     0,     4,     0,     0,   207,   272,
     208,     0,     0,     0,     0,     0,     0,     1,     2,     0,
       0,     0,     0,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     3,     0,     0,     0,     0,     0,     0,     4,
       0,     0,     5,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   128,     0,     0,     0,     0,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   129,     0,     0,
       0,     0,     0,     0,     0,     0,   128,     0,     0,     0,
       0,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   143,    92,    93,    94,    95,    96,    97,    98,    99,
     100,     0,     0,     0,     0,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,   101,   102,   103,     0,     0,
     104,     0,     0,     0,   105,   318,     0,     0,   106,     0,
       0,   107,     0,   108,    92,    93,    94,    95,    96,    97,
      98,    99,   100,     0,    92,    93,    94,    95,    96,    97,
      98,    99,   100,    92,    93,    94,    95,    96,    97,    98,
      99,   100,     0,     0,     0,     0,     0,   101,   102,   103,
       0,     0,   104,     0,   341,     0,   105,   101,   102,   103,
     106,     0,   104,   107,     0,   108,   101,   102,   103,     0,
     106,   104,     0,   107,   135,   108,     0,     0,     0,   106,
       0,     0,   107,     0,   108,    92,    93,    94,    95,    96,
      97,    98,    99,   100,    92,    93,    94,    95,    96,    97,
      98,    99,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   101,   102,
     103,     0,     0,   104,   266,     0,     0,   101,   102,   103,
       0,   106,   104,     0,   107,   275,   108,     0,     0,     0,
     106,     0,     0,   107,     0,   108,    92,    93,    94,    95,
      96,    97,    98,    99,   100,    92,    93,    94,    95,    96,
      97,    98,    99,   100,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   101,
     102,   103,     0,     0,   104,   360,     0,   329,   101,   102,
     103,     0,   106,   104,     0,   107,     0,   108,     0,     0,
       0,   106,     0,     0,   107,     0,   108,    92,    93,    94,
      95,    96,    97,    98,    99,   100,    92,    93,    94,    95,
      96,    97,    98,    99,   100,     0,    92,    93,    94,    95,
      96,    97,    98,    99,   100,     0,     0,   371,     0,     0,
     101,   102,   103,     0,     0,   104,   382,     0,     0,   101,
     102,   103,     0,   106,   104,     0,   107,     0,   108,   101,
     102,   103,   106,     0,   158,   107,     3,   108,     0,     0,
       0,     0,   106,     0,     0,   107,     0,   108,    92,    93,
      94,    95,    96,    97,    98,    99,   100,    92,    93,    94,
      95,    96,    97,    98,    99,   100,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,   101,   102,   103,     3,     0,   160,     0,     0,     0,
     101,   102,   103,     0,   106,   104,     0,   107,     0,   108,
       0,     0,     0,   106,     0,     0,   107,     0,   108,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,   280,     3,
       0,     0,     0,     0,     0,     0,     4,     0,     0,   238,
     272,   208,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   327,     0,     0,     0,     0,     0,
       0,     0,     3,     0,     0,     0,     0,     0,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   314,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24
};

static const yytype_int16 yycheck[] =
{
      24,     5,     0,    68,     0,   104,    60,    70,    69,     4,
     105,   208,   130,   154,    32,    39,     0,     0,   124,    80,
      33,     4,     7,     8,   210,    42,   223,    44,     0,    27,
      43,    27,    33,    11,    12,   232,    33,    33,    34,    89,
     105,    37,    71,    27,    27,   163,    47,   291,    32,    32,
      47,     7,     8,   239,   104,    50,    74,    42,    87,   158,
     304,   160,    20,    47,    42,   104,    44,    50,    25,    53,
      33,   170,    42,    69,    44,    73,    54,    43,    56,   185,
     186,   187,   279,    39,    80,    48,    42,    33,   332,   286,
      88,    49,    48,     8,    89,   236,    39,     7,     8,   343,
     344,    47,   152,   153,   154,   204,    46,   157,   158,   104,
     354,    46,   141,   152,   153,    46,   313,     7,     8,   158,
      33,    33,   151,   367,   368,   369,   130,    70,    71,   373,
      43,     7,     8,    45,   199,   241,    46,    42,   203,    44,
     384,    33,    25,     7,     8,   208,    42,   130,    44,   244,
      51,    43,   156,     7,     8,    52,    46,   152,   153,   154,
     223,    33,   157,   158,    33,   219,    42,    19,    44,   232,
      34,    43,     7,     8,    43,    39,    50,   242,    42,   244,
     163,   205,   206,    43,    48,    39,   236,    33,    42,    47,
      44,    25,    33,     7,     8,   219,    33,   296,    45,    34,
      15,    16,    43,   207,    39,    33,    43,    42,     8,    39,
      43,   207,    42,    45,    44,    43,   279,   278,   214,    43,
      35,    36,    48,   286,   207,    39,   210,    43,    42,   177,
     178,   179,   180,    43,   333,   334,   335,    43,   337,    33,
      34,   236,   238,    39,    40,    41,    33,    34,    17,    18,
     313,    25,    13,    14,    42,   238,   321,   320,    48,    33,
      34,   360,    70,    48,    37,    38,    48,   291,    42,   293,
      44,   370,   371,    48,   298,   374,    25,     7,     8,    25,
     304,   380,   278,   382,    33,    34,    42,    33,    34,   388,
      98,    99,   100,    42,    42,    44,    42,    42,    44,    34,
     298,    33,    34,    34,    33,    34,    47,   311,   332,    33,
      34,    33,    34,    33,    34,    43,   124,    33,    34,   343,
     344,    48,   175,   176,   181,   182,    45,   183,   184,    81,
     354,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    34,   367,   368,   369,    42,    33,    43,   373,
      88,    34,    27,   157,    66,   147,   311,    80,    32,    85,
     384,   169,    47,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     158,   298,   171,     4,     5,     6,     7,     8,     9,    10,
      11,    12,   214,   169,   173,   172,    -1,    -1,    -1,    -1,
     208,    -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    34,    -1,   223,    37,    38,    39,    -1,
      -1,    42,    -1,    -1,   232,    46,    -1,    -1,    -1,    50,
      -1,    -1,    53,   241,    55,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    -1,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    -1,    -1,    -1,
      -1,   279,    -1,    -1,    -1,    -1,    -1,    -1,   286,    -1,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   313,    -1,    -1,    -1,    -1,
      34,    -1,   320,    37,    38,    39,    -1,    -1,    42,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    50,    -1,    -1,    53,
      -1,    55,    -1,    -1,    -1,    -1,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    32,    -1,    -1,    -1,    -1,    37,
      38,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,     7,     8,    53,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    42,    43,
      44,    -1,    -1,    -1,    -1,    -1,    -1,     7,     8,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    32,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     8,    -1,    -1,    -1,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     8,    -1,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    37,    38,    39,    -1,    -1,
      42,    -1,    -1,    -1,    46,    47,    -1,    -1,    50,    -1,
      -1,    53,    -1,    55,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    -1,     4,     5,     6,     7,     8,     9,
      10,    11,    12,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,
      -1,    -1,    42,    -1,    34,    -1,    46,    37,    38,    39,
      50,    -1,    42,    53,    -1,    55,    37,    38,    39,    -1,
      50,    42,    -1,    53,    45,    55,    -1,    -1,    -1,    50,
      -1,    -1,    53,    -1,    55,     4,     5,     6,     7,     8,
       9,    10,    11,    12,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
      39,    -1,    -1,    42,    43,    -1,    -1,    37,    38,    39,
      -1,    50,    42,    -1,    53,    45,    55,    -1,    -1,    -1,
      50,    -1,    -1,    53,    -1,    55,     4,     5,     6,     7,
       8,     9,    10,    11,    12,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      38,    39,    -1,    -1,    42,    34,    -1,    45,    37,    38,
      39,    -1,    50,    42,    -1,    53,    -1,    55,    -1,    -1,
      -1,    50,    -1,    -1,    53,    -1,    55,     4,     5,     6,
       7,     8,     9,    10,    11,    12,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    -1,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    -1,    -1,    34,    -1,    -1,
      37,    38,    39,    -1,    -1,    42,    34,    -1,    -1,    37,
      38,    39,    -1,    50,    42,    -1,    53,    -1,    55,    37,
      38,    39,    50,    -1,    42,    53,    32,    55,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    53,    -1,    55,     4,     5,
       6,     7,     8,     9,    10,    11,    12,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      -1,    37,    38,    39,    32,    -1,    42,    -1,    -1,    -1,
      37,    38,    39,    -1,    50,    42,    -1,    53,    -1,    55,
      -1,    -1,    -1,    50,    -1,    -1,    53,    -1,    55,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    42,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,     8,    32,    39,    42,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    90,    91,    92,    93,    94,
      99,   100,   102,   103,   104,   105,   106,   107,   108,   111,
     113,   114,   119,   123,   124,   125,   126,   127,   107,   127,
     128,   123,   124,   127,    46,    90,     0,    93,    34,   113,
     125,   102,   102,   102,    46,    90,    33,    34,    25,    42,
      44,    95,    99,   101,   102,   124,   126,   107,   127,    43,
      42,   124,     8,   120,   121,    46,    34,    97,   101,   109,
      46,   114,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    37,    38,    39,    42,    46,    50,    53,    55,   133,
     150,   152,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   170,     8,    43,
     102,   129,   130,   131,   132,    45,   152,   153,   165,    46,
     141,    96,    99,    43,   129,   132,   122,    33,    47,   120,
     141,    98,   104,   107,   112,   115,   116,   110,    42,   165,
      42,   165,   165,   116,   135,   149,   150,   133,   134,    20,
      49,    19,    51,    52,    50,    17,    18,    15,    16,    35,
      36,    13,    14,    37,    38,    39,    40,    41,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,   151,
     164,    11,    12,    42,    44,    54,    56,    42,    44,   123,
     127,   136,   137,    43,    33,    33,    43,    45,    47,   142,
     141,    43,    43,    25,   121,    47,   141,   116,   116,    47,
     115,    34,    48,   117,   118,   123,   112,   135,    42,   127,
     136,    43,    33,    43,    33,    47,   155,   149,   156,   157,
     158,   159,   160,   160,   161,   161,   161,   161,   162,   162,
     163,   163,   164,   164,   164,   150,    43,   150,   169,   149,
      90,    90,    43,   129,   136,    45,   153,   137,    42,    44,
      76,   131,     8,     7,     8,    34,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    90,   101,   138,
     139,   140,   141,   143,   144,   145,   146,   148,   149,   153,
     153,    33,    34,    48,    47,    43,   164,   150,    47,   133,
      48,    33,    43,    45,    43,    43,    45,    43,   129,    45,
     153,   153,    48,    42,    42,    42,   138,    42,    90,    34,
      34,    34,   149,    48,   144,    47,   138,    34,   118,   153,
     152,   150,    43,    45,    48,   138,   149,   149,   149,    81,
      34,   147,   149,    34,    34,   138,   138,    43,    43,    43,
      42,    34,   149,    43,    34,   138,   138,   138,   149,   149,
      34,   138,    34,   149,    88,    43,   149,   149,    34,   138,
      34,   149
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    90,    91,    92,    92,    93,    93,    93,
      95,    94,    96,    94,    97,    94,    98,    94,    99,    99,
     100,   101,   101,   102,   102,   102,   102,   102,   102,   103,
     103,   103,   103,   103,   104,   104,   105,   105,   105,   105,
     105,   105,   105,   105,   106,   106,   106,   106,   107,   107,
     109,   108,   110,   108,   108,   111,   111,   112,   112,   113,
     113,   114,   114,   115,   115,   116,   116,   116,   116,   117,
     117,   118,   118,   118,   119,   119,   119,   120,   120,   121,
     122,   121,   123,   123,   124,   124,   124,   124,   124,   124,
     124,   125,   125,   126,   126,   126,   127,   127,   127,   127,
     128,   128,   129,   129,   130,   130,   131,   131,   131,   132,
     132,   133,   133,   133,   134,   134,   135,   135,   136,   136,
     136,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     138,   138,   138,   138,   138,   138,   139,   139,   139,   140,
     140,   141,   142,   141,   143,   143,   143,   144,   144,   145,
     145,   145,   146,   146,   146,   147,   147,   147,   147,   147,
     147,   147,   147,   148,   148,   148,   148,   148,   149,   149,
     150,   150,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   152,   152,   153,   154,   154,   155,   155,
     156,   156,   157,   157,   158,   158,   159,   159,   159,   160,
     160,   160,   160,   160,   161,   161,   161,   162,   162,   162,
     163,   163,   163,   163,   164,   164,   165,   165,   165,   165,
     165,   165,   166,   166,   166,   166,   166,   166,   167,   167,
     167,   167,   167,   167,   167,   167,   168,   168,   168,   168,
     169,   169,   170,   170,   170,   170
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     2,     1,     1,     1,
       0,     3,     0,     4,     0,     4,     0,     5,     2,     3,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     5,     0,     6,     2,     1,     1,     1,     2,     1,
       3,     1,     3,     2,     3,     1,     2,     1,     2,     1,
       3,     1,     2,     3,     4,     5,     2,     1,     3,     1,
       0,     4,     1,     2,     1,     3,     3,     4,     4,     3,
       4,     1,     2,     4,     3,     4,     1,     2,     2,     3,
       1,     2,     1,     3,     1,     3,     2,     1,     2,     1,
       3,     1,     3,     4,     1,     3,     1,     2,     1,     1,
       2,     3,     2,     3,     3,     4,     2,     3,     3,     4,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     1,
       2,     2,     0,     4,     1,     1,     2,     1,     2,     5,
       7,     5,     5,     7,     5,     2,     3,     3,     4,     3,
       4,     4,     5,     3,     2,     2,     2,     3,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     1,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     1,     4,     1,     2,     2,     2,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     4,
       3,     4,     3,     3,     2,     2,     1,     1,     1,     3,
       1,     3,     1,     1,     1,     1
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
#line 121 "grumble.y" /* yacc.c:1646  */
    {
      }
#line 1803 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 124 "grumble.y" /* yacc.c:1646  */
    {
      }
#line 1810 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 130 "grumble.y" /* yacc.c:1646  */
    {
      }
#line 1817 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 135 "grumble.y" /* yacc.c:1646  */
    { }
#line 1823 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 137 "grumble.y" /* yacc.c:1646  */
    { }
#line 1829 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 143 "grumble.y" /* yacc.c:1646  */
    { 
   }
#line 1836 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 146 "grumble.y" /* yacc.c:1646  */
    { }
#line 1842 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 148 "grumble.y" /* yacc.c:1646  */
    { }
#line 1848 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 153 "grumble.y" /* yacc.c:1646  */
    { /* old school pre-ANSI, no return type */
      }
#line 1855 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 156 "grumble.y" /* yacc.c:1646  */
    {
      }
#line 1862 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 160 "grumble.y" /* yacc.c:1646  */
    { /* old school pre ANSI */
      }
#line 1869 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 163 "grumble.y" /* yacc.c:1646  */
    {
      }
#line 1876 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 167 "grumble.y" /* yacc.c:1646  */
    { /* proper ANSI C function definition */
      }
#line 1883 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 170 "grumble.y" /* yacc.c:1646  */
    {
      }
#line 1890 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 174 "grumble.y" /* yacc.c:1646  */
    { /* declaration_list! This must be pre-ANSI  */
      }
#line 1897 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 177 "grumble.y" /* yacc.c:1646  */
    {
      }
#line 1904 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 183 "grumble.y" /* yacc.c:1646  */
    {
	  }
#line 1911 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 187 "grumble.y" /* yacc.c:1646  */
    {
	  }
#line 1918 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 193 "grumble.y" /* yacc.c:1646  */
    {
            }
#line 1925 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 198 "grumble.y" /* yacc.c:1646  */
    { }
#line 1931 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 200 "grumble.y" /* yacc.c:1646  */
    { 
	  }
#line 1938 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 208 "grumble.y" /* yacc.c:1646  */
    {
          }
#line 1945 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 213 "grumble.y" /* yacc.c:1646  */
    { 
          }
#line 1952 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 217 "grumble.y" /* yacc.c:1646  */
    {  
          }
#line 1959 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 226 "grumble.y" /* yacc.c:1646  */
    {
           }
#line 1966 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 229 "grumble.y" /* yacc.c:1646  */
    {
           }
#line 1973 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 232 "grumble.y" /* yacc.c:1646  */
    {
           }
#line 1980 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 235 "grumble.y" /* yacc.c:1646  */
    {
           }
#line 1987 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 238 "grumble.y" /* yacc.c:1646  */
    {
           }
#line 1994 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 249 "grumble.y" /* yacc.c:1646  */
    {
        }
#line 2001 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 252 "grumble.y" /* yacc.c:1646  */
    {
        }
#line 2008 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 255 "grumble.y" /* yacc.c:1646  */
    {
        }
#line 2015 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 258 "grumble.y" /* yacc.c:1646  */
    {
        }
#line 2022 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 261 "grumble.y" /* yacc.c:1646  */
    {
        }
#line 2029 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 264 "grumble.y" /* yacc.c:1646  */
    {
        }
#line 2036 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 272 "grumble.y" /* yacc.c:1646  */
    {
           }
#line 2043 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 275 "grumble.y" /* yacc.c:1646  */
    {
           }
#line 2050 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 278 "grumble.y" /* yacc.c:1646  */
    {
           }
#line 2057 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 281 "grumble.y" /* yacc.c:1646  */
    {
           }
#line 2064 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 287 "grumble.y" /* yacc.c:1646  */
    {
          }
#line 2071 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 290 "grumble.y" /* yacc.c:1646  */
    {
          }
#line 2078 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 296 "grumble.y" /* yacc.c:1646  */
    { }
#line 2084 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 297 "grumble.y" /* yacc.c:1646  */
    {
    }
#line 2091 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 300 "grumble.y" /* yacc.c:1646  */
    { }
#line 2097 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 301 "grumble.y" /* yacc.c:1646  */
    {
    }
#line 2104 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 304 "grumble.y" /* yacc.c:1646  */
    {
    }
#line 2111 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 310 "grumble.y" /* yacc.c:1646  */
    {  }
#line 2117 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 312 "grumble.y" /* yacc.c:1646  */
    {  }
#line 2123 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 317 "grumble.y" /* yacc.c:1646  */
    {  }
#line 2129 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 319 "grumble.y" /* yacc.c:1646  */
    {  }
#line 2135 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 329 "grumble.y" /* yacc.c:1646  */
    { 
        }
#line 2142 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 334 "grumble.y" /* yacc.c:1646  */
    { }
#line 2148 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 336 "grumble.y" /* yacc.c:1646  */
    { }
#line 2154 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 341 "grumble.y" /* yacc.c:1646  */
    {
	  }
#line 2161 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 344 "grumble.y" /* yacc.c:1646  */
    {
          }
#line 2168 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 351 "grumble.y" /* yacc.c:1646  */
    {
		}
#line 2175 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 355 "grumble.y" /* yacc.c:1646  */
    {
		}
#line 2182 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 363 "grumble.y" /* yacc.c:1646  */
    {
		}
#line 2189 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 370 "grumble.y" /* yacc.c:1646  */
    {
		}
#line 2196 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 373 "grumble.y" /* yacc.c:1646  */
    {
		}
#line 2203 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 379 "grumble.y" /* yacc.c:1646  */
    {
		}
#line 2210 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 382 "grumble.y" /* yacc.c:1646  */
    {
		}
#line 2217 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 385 "grumble.y" /* yacc.c:1646  */
    {
		}
#line 2224 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 392 "grumble.y" /* yacc.c:1646  */
    {
		}
#line 2231 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 398 "grumble.y" /* yacc.c:1646  */
    {
		}
#line 2238 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 401 "grumble.y" /* yacc.c:1646  */
    {
		}
#line 2245 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 404 "grumble.y" /* yacc.c:1646  */
    {
		}
#line 2252 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 410 "grumble.y" /* yacc.c:1646  */
    {
	}
#line 2259 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 413 "grumble.y" /* yacc.c:1646  */
    {
	}
#line 2266 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 419 "grumble.y" /* yacc.c:1646  */
    {
        }
#line 2273 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 422 "grumble.y" /* yacc.c:1646  */
    {
	}
#line 2280 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 425 "grumble.y" /* yacc.c:1646  */
    {
        }
#line 2287 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 428 "grumble.y" /* yacc.c:1646  */
    {
        }
#line 2294 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 431 "grumble.y" /* yacc.c:1646  */
    {
	}
#line 2301 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 434 "grumble.y" /* yacc.c:1646  */
    {
	}
#line 2308 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 437 "grumble.y" /* yacc.c:1646  */
    {
	}
#line 2315 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 444 "grumble.y" /* yacc.c:1646  */
    {
    }
#line 2322 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 450 "grumble.y" /* yacc.c:1646  */
    {
      }
#line 2329 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 453 "grumble.y" /* yacc.c:1646  */
    {
      }
#line 2336 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 456 "grumble.y" /* yacc.c:1646  */
    { /* pre-ANSI, error case */
      }
#line 2343 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 462 "grumble.y" /* yacc.c:1646  */
    {
      }
#line 2350 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 466 "grumble.y" /* yacc.c:1646  */
    {
      }
#line 2357 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 469 "grumble.y" /* yacc.c:1646  */
    {
      }
#line 2364 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 472 "grumble.y" /* yacc.c:1646  */
    {
      }
#line 2371 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 479 "grumble.y" /* yacc.c:1646  */
    {
    }
#line 2378 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 484 "grumble.y" /* yacc.c:1646  */
    { }
#line 2384 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 486 "grumble.y" /* yacc.c:1646  */
    {
    }
#line 2391 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 491 "grumble.y" /* yacc.c:1646  */
    { }
#line 2397 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 493 "grumble.y" /* yacc.c:1646  */
    {
      }
#line 2404 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 499 "grumble.y" /* yacc.c:1646  */
    { }
#line 2410 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 501 "grumble.y" /* yacc.c:1646  */
    { }
#line 2416 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 503 "grumble.y" /* yacc.c:1646  */
    { }
#line 2422 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 508 "grumble.y" /* yacc.c:1646  */
    { }
#line 2428 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 510 "grumble.y" /* yacc.c:1646  */
    { }
#line 2434 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 516 "grumble.y" /* yacc.c:1646  */
    { }
#line 2440 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 518 "grumble.y" /* yacc.c:1646  */
    { }
#line 2446 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 524 "grumble.y" /* yacc.c:1646  */
    { }
#line 2452 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 530 "grumble.y" /* yacc.c:1646  */
    { }
#line 2458 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 537 "grumble.y" /* yacc.c:1646  */
    {
		}
#line 2465 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 543 "grumble.y" /* yacc.c:1646  */
    {
		}
#line 2472 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 546 "grumble.y" /* yacc.c:1646  */
    {
		}
#line 2479 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 549 "grumble.y" /* yacc.c:1646  */
    {
		}
#line 2486 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 552 "grumble.y" /* yacc.c:1646  */
    {
		}
#line 2493 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 555 "grumble.y" /* yacc.c:1646  */
    {
		}
#line 2500 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 558 "grumble.y" /* yacc.c:1646  */
    {
		}
#line 2507 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 561 "grumble.y" /* yacc.c:1646  */
    {
		}
#line 2514 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 564 "grumble.y" /* yacc.c:1646  */
    {
		}
#line 2521 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 567 "grumble.y" /* yacc.c:1646  */
    {
		}
#line 2528 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 582 "grumble.y" /* yacc.c:1646  */
    {
    }
#line 2535 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 585 "grumble.y" /* yacc.c:1646  */
    { 
      }
#line 2542 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 588 "grumble.y" /* yacc.c:1646  */
    {
      }
#line 2549 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 594 "grumble.y" /* yacc.c:1646  */
    {
		}
#line 2556 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 597 "grumble.y" /* yacc.c:1646  */
    {
		}
#line 2563 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 603 "grumble.y" /* yacc.c:1646  */
    {
    }
#line 2570 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 606 "grumble.y" /* yacc.c:1646  */
    {
      }
#line 2577 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 609 "grumble.y" /* yacc.c:1646  */
    {
      }
#line 2584 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 615 "grumble.y" /* yacc.c:1646  */
    {
    }
#line 2591 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 619 "grumble.y" /* yacc.c:1646  */
    {
    }
#line 2598 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 623 "grumble.y" /* yacc.c:1646  */
    { 
     
    }
#line 2606 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 632 "grumble.y" /* yacc.c:1646  */
    {
		}
#line 2613 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 638 "grumble.y" /* yacc.c:1646  */
    {   

      }
#line 2621 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 642 "grumble.y" /* yacc.c:1646  */
    {
     }
#line 2628 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 646 "grumble.y" /* yacc.c:1646  */
    {
     }
#line 2635 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 652 "grumble.y" /* yacc.c:1646  */
    {

    }
#line 2643 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 656 "grumble.y" /* yacc.c:1646  */
    {
    }
#line 2650 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 660 "grumble.y" /* yacc.c:1646  */
    { 
      }
#line 2657 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 666 "grumble.y" /* yacc.c:1646  */
    {
     }
#line 2664 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 669 "grumble.y" /* yacc.c:1646  */
    {
     }
#line 2671 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 672 "grumble.y" /* yacc.c:1646  */
    {
     }
#line 2678 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 675 "grumble.y" /* yacc.c:1646  */
    {
     }
#line 2685 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 678 "grumble.y" /* yacc.c:1646  */
    {
     }
#line 2692 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 681 "grumble.y" /* yacc.c:1646  */
    {
     }
#line 2699 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 684 "grumble.y" /* yacc.c:1646  */
    {
     }
#line 2706 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 687 "grumble.y" /* yacc.c:1646  */
    {
     }
#line 2713 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 695 "grumble.y" /* yacc.c:1646  */
    {
  }
#line 2720 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 698 "grumble.y" /* yacc.c:1646  */
    {
  }
#line 2727 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 701 "grumble.y" /* yacc.c:1646  */
    {
  }
#line 2734 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 704 "grumble.y" /* yacc.c:1646  */
    {
  }
#line 2741 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 707 "grumble.y" /* yacc.c:1646  */
    {
  }
#line 2748 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 713 "grumble.y" /* yacc.c:1646  */
    {
		}
#line 2755 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 716 "grumble.y" /* yacc.c:1646  */
    {
		}
#line 2762 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 724 "grumble.y" /* yacc.c:1646  */
    {
          }
#line 2769 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 729 "grumble.y" /* yacc.c:1646  */
    { }
#line 2775 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 730 "grumble.y" /* yacc.c:1646  */
    { }
#line 2781 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 731 "grumble.y" /* yacc.c:1646  */
    { }
#line 2787 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 732 "grumble.y" /* yacc.c:1646  */
    { }
#line 2793 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 733 "grumble.y" /* yacc.c:1646  */
    { }
#line 2799 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 734 "grumble.y" /* yacc.c:1646  */
    { }
#line 2805 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 735 "grumble.y" /* yacc.c:1646  */
    { }
#line 2811 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 736 "grumble.y" /* yacc.c:1646  */
    { }
#line 2817 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 737 "grumble.y" /* yacc.c:1646  */
    { }
#line 2823 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 738 "grumble.y" /* yacc.c:1646  */
    { }
#line 2829 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 739 "grumble.y" /* yacc.c:1646  */
    { }
#line 2835 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 746 "grumble.y" /* yacc.c:1646  */
    {
		}
#line 2842 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 759 "grumble.y" /* yacc.c:1646  */
    {
                }
#line 2849 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 766 "grumble.y" /* yacc.c:1646  */
    { }
#line 2855 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 772 "grumble.y" /* yacc.c:1646  */
    {
		}
#line 2862 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 779 "grumble.y" /* yacc.c:1646  */
    {
		}
#line 2869 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 786 "grumble.y" /* yacc.c:1646  */
    {
		}
#line 2876 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 793 "grumble.y" /* yacc.c:1646  */
    {
	        }
#line 2883 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 796 "grumble.y" /* yacc.c:1646  */
    {
                }
#line 2890 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 803 "grumble.y" /* yacc.c:1646  */
    {
     }
#line 2897 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 806 "grumble.y" /* yacc.c:1646  */
    {
     }
#line 2904 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 809 "grumble.y" /* yacc.c:1646  */
    {
     }
#line 2911 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 812 "grumble.y" /* yacc.c:1646  */
    {
     }
#line 2918 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 819 "grumble.y" /* yacc.c:1646  */
    {
     }
#line 2925 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 822 "grumble.y" /* yacc.c:1646  */
    {
     }
#line 2932 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 829 "grumble.y" /* yacc.c:1646  */
    {
     }
#line 2939 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 832 "grumble.y" /* yacc.c:1646  */
    {
     }
#line 2946 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 839 "grumble.y" /* yacc.c:1646  */
    {
     }
#line 2953 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 842 "grumble.y" /* yacc.c:1646  */
    {
     }
#line 2960 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 845 "grumble.y" /* yacc.c:1646  */
    {
     }
#line 2967 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 852 "grumble.y" /* yacc.c:1646  */
    {
   }
#line 2974 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 860 "grumble.y" /* yacc.c:1646  */
    {
   }
#line 2981 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 863 "grumble.y" /* yacc.c:1646  */
    {
   }
#line 2988 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 866 "grumble.y" /* yacc.c:1646  */
    {
   }
#line 2995 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 869 "grumble.y" /* yacc.c:1646  */
    {
   }
#line 3002 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 872 "grumble.y" /* yacc.c:1646  */
    {  
   }
#line 3009 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 878 "grumble.y" /* yacc.c:1646  */
    {
   }
#line 3016 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 881 "grumble.y" /* yacc.c:1646  */
    {
   }
#line 3023 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 884 "grumble.y" /* yacc.c:1646  */
    {
   }
#line 3030 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 887 "grumble.y" /* yacc.c:1646  */
    {
   }
#line 3037 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 890 "grumble.y" /* yacc.c:1646  */
    {
   }
#line 3044 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 893 "grumble.y" /* yacc.c:1646  */
    {
   }
#line 3051 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 901 "grumble.y" /* yacc.c:1646  */
    {
     }
#line 3058 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 904 "grumble.y" /* yacc.c:1646  */
    {
     }
#line 3065 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 907 "grumble.y" /* yacc.c:1646  */
    {
     }
#line 3072 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 910 "grumble.y" /* yacc.c:1646  */
    {
     }
#line 3079 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 913 "grumble.y" /* yacc.c:1646  */
    {
     }
#line 3086 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 916 "grumble.y" /* yacc.c:1646  */
    {
     }
#line 3093 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 919 "grumble.y" /* yacc.c:1646  */
    {
     }
#line 3100 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 925 "grumble.y" /* yacc.c:1646  */
    { 
   }
#line 3107 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 929 "grumble.y" /* yacc.c:1646  */
    {
     }
#line 3114 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 932 "grumble.y" /* yacc.c:1646  */
    { 
   }
#line 3121 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 938 "grumble.y" /* yacc.c:1646  */
    {
   }
#line 3128 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 941 "grumble.y" /* yacc.c:1646  */
    {
   }
#line 3135 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 947 "grumble.y" /* yacc.c:1646  */
    {
   }
#line 3142 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 950 "grumble.y" /* yacc.c:1646  */
    {
   }
#line 3149 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 953 "grumble.y" /* yacc.c:1646  */
    {
   }
#line 3156 "grumble.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 956 "grumble.y" /* yacc.c:1646  */
    {
   }
#line 3163 "grumble.tab.c" /* yacc.c:1646  */
    break;


#line 3167 "grumble.tab.c" /* yacc.c:1646  */
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
#line 960 "grumble.y" /* yacc.c:1906  */

