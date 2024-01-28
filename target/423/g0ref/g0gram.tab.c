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
#line 1 "g0gram.y" /* yacc.c:339  */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "token.h"
#include "cntable.h"

extern char *yyfilename;
extern int yylineno;
extern int yylex(void);	/* call this function once for each token */
void yyerror(char const*);

#line 80 "g0gram.tab.c" /* yacc.c:339  */

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
   by #include "g0gram.tab.h".  */
#ifndef YY_YY_G0GRAM_TAB_H_INCLUDED
# define YY_YY_G0GRAM_TAB_H_INCLUDED
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
    BREAK = 258,
    DROLL = 259,
    DOUBLE = 260,
    ELSE = 261,
    FOR = 262,
    IF = 263,
    INT = 264,
    RETURN = 265,
    VOID = 266,
    WHILE = 267,
    IDENTIFIER = 268,
    CLASSNAME = 269,
    CLASS = 270,
    LIST = 271,
    TABLE = 272,
    PERIOD = 273,
    STRING = 274,
    BOOL = 275,
    INTLIT = 276,
    DOUBLELIT = 277,
    STRINGLIT = 278,
    BOOLFALSE = 279,
    BOOLTRUE = 280,
    NULLVAL = 281,
    LEFTPAREN = 282,
    RIGHTPAREN = 283,
    LEFTSUBSCRIPT = 284,
    RIGHTSUBSCRIPT = 285,
    LEFTBRACE = 286,
    RIGHTBRACE = 287,
    SEMICOLON = 288,
    COLON = 289,
    COMMA = 290,
    LOGICALNOT = 291,
    SIZE = 292,
    MULTIPLY = 293,
    DIVIDE = 294,
    MODULUS = 295,
    PLUS = 296,
    MINUS = 297,
    LESSTHAN = 298,
    LESSTHANOREQUAL = 299,
    GREATERTHAN = 300,
    GREATERTHANOREQUAL = 301,
    ISEQUALTO = 302,
    NOTEQUALTO = 303,
    LOGICALAND = 304,
    LOGICALOR = 305,
    EQUALS = 306,
    INCREMENT = 307,
    DECREMENT = 308,
    SWAP = 309
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "g0gram.y" /* yacc.c:355  */

struct token *tok;

#line 179 "g0gram.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_G0GRAM_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 196 "g0gram.tab.c" /* yacc.c:358  */

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
#define YYFINAL  43
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   569

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  97
/* YYNRULES -- Number of rules.  */
#define YYNRULES  203
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  324

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    33,    33,    34,    35,    36,    37,    38,    41,    42,
      45,    46,    47,    50,    51,    55,    56,    57,    58,    61,
      64,    65,    68,    69,    70,    73,    74,    75,    76,    79,
      80,    83,    86,    87,    90,    91,    94,    97,   100,   101,
     105,   106,   109,   110,   114,   118,   121,   122,   125,   126,
     129,   130,   133,   134,   137,   140,   141,   144,   147,   148,
     151,   154,   155,   158,   159,   162,   163,   166,   167,   170,
     173,   176,   179,   180,   183,   184,   187,   190,   193,   196,
     197,   200,   201,   204,   205,   208,   211,   214,   215,   216,
     217,   218,   219,   222,   223,   224,   225,   226,   229,   232,
     235,   236,   237,   240,   243,   246,   247,   250,   251,   254,
     258,   261,   261,   263,   263,   265,   265,   267,   270,   271,
     274,   277,   278,   281,   281,   283,   286,   289,   290,   291,
     292,   293,   296,   299,   300,   303,   306,   307,   308,   309,
     312,   313,   314,   317,   318,   322,   323,   324,   325,   328,
     329,   332,   333,   334,   335,   336,   339,   340,   341,   344,
     345,   346,   347,   348,   351,   352,   353,   356,   357,   360,
     361,   364,   365,   366,   367,   368,   371,   374,   375,   376,
     377,   380,   381,   382,   383,   386,   389,   392,   393,   396,
     400,   401,   404,   407,   408,   411,   412,   413,   414,   415,
     419,   420,   423,   424
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BREAK", "DROLL", "DOUBLE", "ELSE",
  "FOR", "IF", "INT", "RETURN", "VOID", "WHILE", "IDENTIFIER", "CLASSNAME",
  "CLASS", "LIST", "TABLE", "PERIOD", "STRING", "BOOL", "INTLIT",
  "DOUBLELIT", "STRINGLIT", "BOOLFALSE", "BOOLTRUE", "NULLVAL",
  "LEFTPAREN", "RIGHTPAREN", "LEFTSUBSCRIPT", "RIGHTSUBSCRIPT",
  "LEFTBRACE", "RIGHTBRACE", "SEMICOLON", "COLON", "COMMA", "LOGICALNOT",
  "SIZE", "MULTIPLY", "DIVIDE", "MODULUS", "PLUS", "MINUS", "LESSTHAN",
  "LESSTHANOREQUAL", "GREATERTHAN", "GREATERTHANOREQUAL", "ISEQUALTO",
  "NOTEQUALTO", "LOGICALAND", "LOGICALOR", "EQUALS", "INCREMENT",
  "DECREMENT", "SWAP", "$accept", "Literal", "Type", "PrimitiveType",
  "NumericType", "ReferenceType", "ClassType", "ListType", "TableType",
  "LegalElement", "TableIndex", "DefaultTableMap", "Name", "SimpleName",
  "QualifiedName", "CompilationUnit", "TypeDeclarationsOpt",
  "TypeDeclarations", "TypeDeclaration", "ClassDeclaration", "ClassBody",
  "ClassBodyDeclarationsOpt", "ClassBodyDeclarations",
  "ClassBodyDeclaration", "ClassMemberDeclaration", "FieldDeclaration",
  "VariableDeclarators", "VariableDeclarator", "VariableDeclaratorId",
  "MethodDeclaration", "MethodHeader", "FormalParameterListOpt",
  "MethodDeclarator", "FormalParameterList", "FormalParameter",
  "ConstructorDeclaration", "ConstructorDeclarator",
  "ExplicitConstructorInvocationOpt", "ArgumentListOpt", "ConstructorBody",
  "ExplicitConstructorInvocation", "Block", "BlockStatementsOpt",
  "BlockStatements", "BlockStatement", "LocalVariableDeclarationStatement",
  "LocalVariableDeclaration", "Statement",
  "StatementWithoutTrailingSubstatement", "EmptyStatement",
  "ExpressionStatement", "StatementExpression", "IfThenStatement",
  "IfThenElseStatement", "IfThenElseIfStatement", "ElseIfSequence",
  "ElseIfStatement", "WhileStatement", "ForInitOpt", "ExpressionOpt",
  "ForUpdateOpt", "ForStatement", "ForInit", "ForUpdate",
  "StatementExpressionList", "IDENTOpt", "BreakStatement",
  "ReturnStatement", "Primary", "ClassInstanceCreationExpression",
  "ArgumentList", "FieldAccess", "MethodInvocation", "ListTableAccess",
  "PostFixExpression", "UnaryExpression", "UnaryExpressionNotPlusMinus",
  "MultiplicativeExpression", "AdditiveExpression", "RelationalExpression",
  "EqualityExpression", "ConditionalAndExpression",
  "ConditionalOrExpression", "AssignmentExpression", "Assignment",
  "LeftHandSide", "AssignmentOperator", "Expression", "ListAssignment",
  "ListValues", "TableAssignment", "TableValues", "TableObject",
  "LegalIndex", "LegalValue", "concatOpt", "concat", YY_NULLPTR
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
     305,   306,   307,   308,   309
};
# endif

#define YYPACT_NINF -169

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-169)))

#define YYTABLE_NINF -204

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     508,  -169,  -169,     5,  -169,  -169,    33,   -12,    23,  -169,
    -169,    41,  -169,  -169,  -169,  -169,  -169,  -169,  -169,     4,
    -169,  -169,     8,  -169,   508,  -169,  -169,  -169,  -169,  -169,
      45,    58,    60,    67,     6,    83,    58,    -3,  -169,    82,
      60,    94,    93,  -169,  -169,   447,  -169,   534,    98,   521,
      84,  -169,  -169,  -169,  -169,    86,   124,   119,   121,   114,
     130,  -169,   161,   148,  -169,  -169,   168,   155,   156,   385,
     164,  -169,  -169,  -169,  -169,  -169,  -169,   385,  -169,  -169,
     161,   184,   182,    26,  -169,   181,   447,  -169,  -169,   199,
    -169,  -169,  -169,  -169,   204,  -169,  -169,  -169,  -169,  -169,
    -169,  -169,    38,  -169,    95,    46,    99,  -169,   228,   161,
     215,   209,  -169,  -169,   218,   216,   521,  -169,  -169,  -169,
     219,  -169,  -169,  -169,     6,  -169,  -169,  -169,  -169,   220,
     470,   385,   411,    87,    17,   411,   411,   411,  -169,   281,
     221,   485,  -169,  -169,  -169,  -169,     3,    39,   293,    78,
     203,   208,  -169,  -169,  -169,  -169,  -169,   542,   542,   385,
     231,   230,   385,   385,   355,   385,   236,  -169,  -169,  -169,
     257,   385,  -169,  -169,  -169,  -169,   385,    82,  -169,   534,
     534,  -169,  -169,   245,  -169,   232,  -169,  -169,  -169,   242,
    -169,   241,   258,    32,    38,  -169,  -169,  -169,  -169,  -169,
    -169,  -169,  -169,   -21,  -169,  -169,  -169,    70,  -169,   253,
    -169,  -169,  -169,  -169,   411,   411,   411,   411,   411,   411,
     411,   411,   411,   411,   411,   411,   411,   411,    32,    38,
    -169,  -169,   262,  -169,   268,   265,  -169,   269,    18,   277,
    -169,    47,   283,  -169,  -169,   287,   385,   447,  -169,  -169,
     385,   542,    45,   385,  -169,    87,   279,    17,    87,  -169,
    -169,  -169,  -169,     3,     3,    39,    39,    39,    39,   293,
     293,    78,   203,   163,  -169,   385,  -169,  -169,   385,  -169,
     385,   385,  -169,  -169,   288,   285,   311,   184,  -169,   354,
    -169,  -169,  -169,  -169,  -169,  -169,   331,   334,   332,   330,
     333,   542,    -5,   359,  -169,  -169,  -169,  -169,  -169,  -169,
     339,  -169,   241,   343,  -169,    -5,  -169,    45,   385,  -169,
    -169,   344,    45,  -169
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      39,    14,    13,     0,    34,    35,     0,    20,    22,    12,
      11,     0,     8,    10,     9,    15,    17,    18,    16,    19,
      32,    33,     0,    37,    38,    40,    42,    43,    52,    53,
       0,     0,    62,     0,     0,     0,    58,     0,    55,    57,
      61,     0,     0,     1,    41,    80,    60,    64,     0,    47,
       0,    26,    25,    27,    28,     0,    19,    25,    27,     0,
       0,    54,     0,     0,    36,    31,   124,     0,     0,   114,
       0,     2,     3,     6,     5,     4,     7,     0,    98,   127,
       0,    15,   180,   177,    93,     0,    79,    81,    83,     0,
      84,    87,    94,    95,     0,    88,    89,    90,    91,    92,
      96,    97,     0,   102,   129,   101,   131,   100,     0,     0,
       0,    63,    67,    66,    32,     0,    46,    48,    50,    51,
       0,    44,    21,    23,     0,    58,    56,    59,   123,     0,
     112,     0,     0,     0,     0,     0,     0,     0,   180,   144,
       0,   143,   130,   149,   151,   146,   156,   159,   164,   167,
     169,   171,   185,   172,   113,   174,   175,   173,     0,     0,
       0,    86,    75,    75,     0,    75,     0,    82,    85,    99,
       0,     0,   181,   182,   183,   184,     0,    69,    65,     0,
      64,    45,    49,    73,    70,     0,   125,   119,   121,     0,
     111,   118,     0,   144,   143,   129,   131,   147,   198,   199,
     195,   196,   197,     0,   187,   193,   194,     0,   190,     0,
     150,   148,   145,   126,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   202,   203,
     201,   200,     0,   128,     0,    74,   133,     0,     0,     0,
      78,   135,     0,   176,    68,     0,    75,    80,    72,    24,
     114,     0,     0,     0,   186,     0,     0,     0,     0,   155,
     152,   153,   154,   157,   158,   160,   162,   161,   163,   165,
     166,   168,   170,     0,   132,     0,   136,   140,     0,   138,
      75,    75,   141,    71,     0,     0,     0,     0,   122,   103,
     188,   189,   191,   192,   110,   134,     0,     0,     0,     0,
       0,   116,     0,   105,   107,   142,   137,   139,    77,    76,
       0,   115,   120,     0,   104,     0,   108,     0,     0,   106,
     117,     0,     0,   109
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -169,  -169,   -35,  -169,  -169,  -169,   -18,  -169,  -169,   -33,
    -169,    13,     0,   -45,  -169,  -169,  -169,  -169,   347,  -169,
    -169,  -169,  -169,   259,   -44,  -169,   294,   321,   264,  -169,
    -169,   207,   377,  -169,   211,  -169,  -169,  -169,  -142,  -169,
    -169,   -24,   146,  -169,   308,  -169,   266,   122,  -169,  -169,
    -169,  -129,  -169,  -169,  -169,  -169,    97,  -169,  -169,   151,
    -169,  -169,  -169,  -169,   101,  -169,  -169,  -169,   -17,  -169,
    -169,   104,   -16,   131,  -169,   -53,  -169,  -125,   120,   -91,
     177,   178,  -169,   237,    -9,  -169,  -169,    -4,  -169,  -169,
    -169,  -169,   147,  -169,  -168,  -169,    11
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    79,    11,    12,    13,    14,    15,    16,    17,    55,
      60,   138,   139,    20,    21,    22,    23,    24,    25,    26,
      50,   115,   116,   117,    27,    28,    37,    38,    39,    29,
      30,   110,    32,   111,   112,   119,   120,   247,   234,   184,
     248,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,   303,   304,    98,   189,   140,
     310,    99,   190,   311,   191,   129,   100,   101,   141,   103,
     235,   104,   142,   106,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   108,   176,   236,   155,   203,
     156,   207,   208,   209,   204,   157,   158
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      19,   188,    59,   313,   114,   118,    46,   214,    43,   254,
      80,    51,   109,    18,   255,    52,    54,    54,    31,     4,
       5,   237,    41,   239,    19,    53,    45,    81,   102,   105,
      61,    34,    62,    42,    56,    56,   107,    18,   205,   -19,
     206,   215,   216,   217,    41,    83,    33,    19,   277,    19,
      41,    80,   278,   163,    36,   164,   170,   165,    82,   163,
      18,   253,    18,   165,  -130,   154,    35,   171,    81,   102,
     105,   114,   118,   160,   280,  -130,    45,   107,   281,   197,
     218,   219,   210,   211,   212,    47,    83,   290,    51,    48,
     293,   185,    57,   263,   264,    80,     4,     5,    49,    82,
     198,   199,    58,   256,   284,   257,    54,    64,   200,   201,
     202,    63,    81,   102,   105,   194,    19,   121,   194,   194,
     194,   107,   288,    65,    56,   224,   225,   192,   113,    18,
      83,   122,   193,   269,   270,   193,   193,   193,   297,   298,
     229,   229,    41,    82,   109,   109,  -178,  -178,  -178,  -178,
    -179,  -179,  -179,  -179,   -29,   232,   -30,   228,   228,   123,
     238,   259,   260,   261,   262,   124,    66,   242,   230,   231,
      67,    68,   188,    69,   125,    70,     4,     5,   127,    19,
      19,   128,   130,   131,    71,    72,    73,    74,    75,    76,
      77,   159,    18,    18,    45,   -16,    78,   194,   194,   194,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   194,
     194,   162,    80,   166,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   289,    81,
     102,   105,   168,   287,   102,   105,   195,   169,   107,   195,
     195,   195,   107,   178,   179,   180,   154,    83,   181,   238,
     183,    83,   226,   186,   213,   287,   102,   105,   227,   233,
      82,   195,   195,   196,   107,    62,   196,   196,   196,   240,
     241,   295,   246,    83,   296,   250,   251,   249,   314,   172,
     173,   174,   175,   287,   102,   105,   252,   258,   196,   196,
     273,   319,   107,   320,  -202,  -202,   274,   276,   323,    41,
     275,    83,  -202,  -202,  -202,  -202,  -202,  -202,   163,   279,
     164,   291,   165,   282,   321,   283,   299,   300,   195,   195,
     195,   195,   195,   195,   195,   195,   195,   195,   195,   195,
     195,   195,  -177,  -177,  -177,  -177,   220,   221,   222,   223,
     265,   266,   267,   268,   301,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   196,   196,   196,   132,
     302,   305,   306,   308,   307,   315,   309,   317,     4,     5,
     318,    44,   322,   177,   161,   182,    71,    72,    73,    74,
      75,    76,    77,   126,   133,    65,   134,   245,    40,   132,
     244,   135,   136,   285,   167,   294,   187,   137,     4,     5,
     316,   286,   312,   271,   292,   272,    71,    72,    73,    74,
      75,    76,    77,   243,   133,   132,   134,     0,     0,     0,
       0,   135,   136,     0,     4,     5,     0,   137,     0,     0,
       0,     0,    71,    72,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,     0,     0,     0,   135,   136,     0,
      66,     0,     1,   137,    67,    68,     2,    69,     0,    70,
       4,     5,     0,     7,     8,     0,     9,    10,    71,    72,
      73,    74,    75,    76,    77,     1,     0,     0,    45,     2,
      78,     0,     0,     4,     5,     0,     7,     8,     0,     9,
      10,    71,    72,    73,    74,    75,    76,    77,  -203,  -203,
       0,     0,     0,   170,     0,     0,  -203,  -203,  -203,  -203,
    -203,  -203,  -203,     1,   171,     0,     0,     2,     0,     3,
       0,     4,     5,     6,     7,     8,     1,     9,    10,     0,
       2,     0,     3,     0,     4,     5,     0,     7,     8,     1,
       9,    10,     0,     2,     0,     0,     0,     4,     5,     0,
       7,     8,     0,     9,    10,     4,     5,     0,     0,     0,
       0,     0,     0,    71,    72,    73,    74,    75,    76,    77
};

static const yytype_int16 yycheck[] =
{
       0,   130,    35,     8,    49,    49,    30,     4,     0,    30,
      45,     5,    47,     0,    35,     9,    34,    35,    13,    13,
      14,   163,    18,   165,    24,    19,    31,    45,    45,    45,
      33,    43,    35,    29,    34,    35,    45,    24,    21,    13,
      23,    38,    39,    40,    18,    45,    13,    47,    30,    49,
      18,    86,    34,    27,    13,    29,    18,    31,    45,    27,
      47,    29,    49,    31,    18,    69,    43,    29,    86,    86,
      86,   116,   116,    77,    27,    29,    31,    86,    31,   132,
      41,    42,   135,   136,   137,    27,    86,   255,     5,    29,
     258,   124,     9,   218,   219,   130,    13,    14,    31,    86,
      13,    14,    19,    33,   246,    35,   124,    13,    21,    22,
      23,    29,   130,   130,   130,   132,   116,    33,   135,   136,
     137,   130,   251,    30,   124,    47,    48,   131,    30,   116,
     130,    45,   132,   224,   225,   135,   136,   137,   280,   281,
     157,   158,    18,   130,   179,   180,    51,    52,    53,    54,
      51,    52,    53,    54,    35,   159,    35,   157,   158,    45,
     164,   214,   215,   216,   217,    35,     3,   171,   157,   158,
       7,     8,   301,    10,    13,    12,    13,    14,    30,   179,
     180,    13,    27,    27,    21,    22,    23,    24,    25,    26,
      27,    27,   179,   180,    31,    13,    33,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,    27,   247,    32,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   252,   247,
     247,   247,    33,   251,   251,   251,   132,    33,   247,   135,
     136,   137,   251,    28,    35,    27,   250,   247,    32,   253,
      31,   251,    49,    33,    33,   273,   273,   273,    50,    28,
     247,   157,   158,   132,   273,    35,   135,   136,   137,    33,
      13,   275,    27,   273,   278,    33,    35,    45,   302,    51,
      52,    53,    54,   301,   301,   301,    28,    34,   157,   158,
      28,   315,   301,   317,    13,    14,    28,    28,   322,    18,
      35,   301,    21,    22,    23,    24,    25,    26,    27,    32,
      29,    32,    31,    30,   318,    28,    28,    32,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,    51,    52,    53,    54,    43,    44,    45,    46,
     220,   221,   222,   223,    33,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,     4,
       6,    30,    28,    33,    32,     6,    33,    28,    13,    14,
      27,    24,    28,   109,    80,   116,    21,    22,    23,    24,
      25,    26,    27,    62,    29,    30,    31,   180,    11,     4,
     179,    36,    37,   247,    86,   273,   130,    42,    13,    14,
     303,   250,   301,   226,   257,   227,    21,    22,    23,    24,
      25,    26,    27,   176,    29,     4,    31,    -1,    -1,    -1,
      -1,    36,    37,    -1,    13,    14,    -1,    42,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    -1,
       3,    -1,     5,    42,     7,     8,     9,    10,    -1,    12,
      13,    14,    -1,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     5,    -1,    -1,    31,     9,
      33,    -1,    -1,    13,    14,    -1,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    13,    14,
      -1,    -1,    -1,    18,    -1,    -1,    21,    22,    23,    24,
      25,    26,    27,     5,    29,    -1,    -1,     9,    -1,    11,
      -1,    13,    14,    15,    16,    17,     5,    19,    20,    -1,
       9,    -1,    11,    -1,    13,    14,    -1,    16,    17,     5,
      19,    20,    -1,     9,    -1,    -1,    -1,    13,    14,    -1,
      16,    17,    -1,    19,    20,    13,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    26,    27
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     9,    11,    13,    14,    15,    16,    17,    19,
      20,    57,    58,    59,    60,    61,    62,    63,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    79,    80,    84,
      85,    13,    87,    13,    43,    43,    13,    81,    82,    83,
      87,    18,    29,     0,    73,    31,    96,    27,    29,    31,
      75,     5,     9,    19,    61,    64,    67,     9,    19,    64,
      65,    33,    35,    29,    13,    30,     3,     7,     8,    10,
      12,    21,    22,    23,    24,    25,    26,    27,    33,    56,
      57,    61,    66,    67,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   112,   116,
     121,   122,   123,   124,   126,   127,   128,   139,   140,    57,
      86,    88,    89,    30,    68,    76,    77,    78,    79,    90,
      91,    33,    45,    45,    35,    13,    82,    30,    13,   120,
      27,    27,     4,    29,    31,    36,    37,    42,    66,    67,
     114,   123,   127,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   142,   143,   145,   150,   151,    27,
     142,    81,    27,    27,    29,    31,    32,    99,    33,    33,
      18,    29,    51,    52,    53,    54,   141,    83,    28,    35,
      27,    32,    78,    31,    94,    64,    33,   101,   106,   113,
     117,   119,   142,    67,   123,   126,   128,   130,    13,    14,
      21,    22,    23,   144,   149,    21,    23,   146,   147,   148,
     130,   130,   130,    33,     4,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    67,   123,
     151,   151,   142,    28,    93,   125,   142,    93,   142,    93,
      33,    13,   142,   138,    89,    86,    27,    92,    95,    45,
      33,    35,    28,    29,    30,    35,    33,    35,    34,   130,
     130,   130,   130,   132,   132,   133,   133,   133,   133,   134,
     134,   135,   136,    28,    28,    35,    28,    30,    34,    32,
      27,    31,    30,    28,    93,    97,   114,    61,   106,    96,
     149,    32,   147,   149,   102,   142,   142,    93,    93,    28,
      32,    33,     6,   110,   111,    30,    28,    32,    33,    33,
     115,   118,   119,     8,    96,     6,   111,    28,    27,    96,
      96,   142,    28,    96
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    56,    56,    56,    56,    56,    57,    57,
      58,    58,    58,    59,    59,    60,    60,    60,    60,    61,
      62,    62,    63,    63,    63,    64,    64,    64,    64,    65,
      65,    66,    67,    67,    68,    68,    69,    70,    71,    71,
      72,    72,    73,    73,    74,    75,    76,    76,    77,    77,
      78,    78,    79,    79,    80,    81,    81,    82,    83,    83,
      84,    85,    85,    86,    86,    87,    87,    88,    88,    89,
      90,    91,    92,    92,    93,    93,    94,    95,    96,    97,
      97,    98,    98,    99,    99,   100,   101,   102,   102,   102,
     102,   102,   102,   103,   103,   103,   103,   103,   104,   105,
     106,   106,   106,   107,   108,   109,   109,   110,   110,   111,
     112,   113,   113,   114,   114,   115,   115,   116,   117,   117,
     118,   119,   119,   120,   120,   121,   122,   123,   123,   123,
     123,   123,   124,   125,   125,   126,   127,   127,   127,   127,
     128,   128,   128,   129,   129,   130,   130,   130,   130,   131,
     131,   132,   132,   132,   132,   132,   133,   133,   133,   134,
     134,   134,   134,   134,   135,   135,   135,   136,   136,   137,
     137,   138,   138,   138,   138,   138,   139,   140,   140,   140,
     140,   141,   141,   141,   141,   142,   143,   144,   144,   145,
     146,   146,   147,   148,   148,   149,   149,   149,   149,   149,
     150,   150,   151,   151
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     4,     6,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     3,     1,     1,     0,
       1,     2,     1,     1,     4,     3,     1,     0,     1,     2,
       1,     1,     1,     1,     3,     1,     3,     1,     1,     3,
       2,     2,     2,     1,     0,     4,     3,     1,     3,     2,
       2,     4,     1,     0,     1,     0,     5,     4,     4,     1,
       0,     1,     2,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     5,     7,     6,     8,     1,     2,     6,
       5,     1,     0,     1,     0,     1,     0,     9,     1,     1,
       1,     1,     3,     1,     0,     3,     3,     1,     3,     1,
       1,     1,     4,     1,     3,     3,     4,     6,     4,     6,
       4,     4,     6,     1,     1,     2,     1,     2,     2,     1,
       2,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     3,     4,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     1,     1
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
        case 44:
#line 115 "g0gram.y" /* yacc.c:1646  */
    { insert_cnt(cnt, (yyvsp[-2].tok)->text); }
#line 1594 "g0gram.tab.c" /* yacc.c:1646  */
    break;


#line 1598 "g0gram.tab.c" /* yacc.c:1646  */
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
#line 427 "g0gram.y" /* yacc.c:1906  */


void yyerror(char const *s)
{
   printf("\n%s, file:%s, line: %d\n", s, yyfilename, yylineno);
   exit(2);	
}
