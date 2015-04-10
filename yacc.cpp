/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 3 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"

	#define _CRT_SECURE_NO_WARNINGS
	#include <iostream>
	#include <FlexLexer.h>
	#include <string>
	#include <stack>
	#include "Program.h"
	#include "SyntaxError.h"
	#include <fstream>
	#include "Streams.h"
	#include "ErrorRevovery.h"
	#include <set>
	#include "compilerProject/MyParser.h"
	using namespace std;
	class ColonStack
	{
		public:
		ColonStack(int line, int col){colNum = col; lineNum = line;}
		int colNum,lineNum;
	};
	stack<ColonStack*>colonStack;
	int yylex(void);
	int yyparse();
	int strlength(char *);
	void yyerror(const char *);
	int lineno=0,colnumber=0;
	ErrorRecovery* err=new ErrorRecovery();
	FlexLexer* lexer = new yyFlexLexer();
	extern string sourceFile="";
	string dir_path="";
	string temp_id="";
	stack<string> temp_id1;
	char* i_type;
	char* t_id=new char[10];
	char* acc_mod=new char[8];
	vector<char*> sto_mod;
	bool ss=false;
	bool ff=false;
	bool pro= false;
	bool pp=true;
	bool is_list=false;
	bool is_dic=false;
	int linefunc=0;
	int colmfunc=0;

	bool v_static,v_final;
	vector<char *>inhertance_list;


	vector<char *>ID_list;
	Variable* v;
	Type* t;
	class Function * testfunction;
	vector<char *> parameters;
	class Parser
	{
		public:
		int	parse()
		{
			return yyparse();
		}
	};
	MyParser * p = new MyParser();

/* Line 371 of yacc.c  */
#line 133 "yacc.cpp"

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
   by #include "yacc.hpp".  */
#ifndef YY_YY_YACC_HPP_INCLUDED
# define YY_YY_YACC_HPP_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ENDMARKER = 258,
     IMPORT = 259,
     CLASS = 260,
     END = 261,
     PRIMARY = 262,
     OR = 263,
     AND = 264,
     NOT = 265,
     NOT_EQUAL = 266,
     FINAL = 267,
     STATIC = 268,
     DEF = 269,
     ELSE = 270,
     IF = 271,
     ELIF = 272,
     WHILE = 273,
     FOR = 274,
     IN = 275,
     TRY = 276,
     FINALLY = 277,
     ARROW = 278,
     NONLOCAL = 279,
     PLUS_EQUAL = 280,
     MINUS_EQUAL = 281,
     DIV_EQUAL = 282,
     MOD_EQUAL = 283,
     AND_EQUAL = 284,
     OR_EQUAL = 285,
     SHAPOO_EQUAL = 286,
     LESS_THAN_2_EQUAL = 287,
     MORE_THAN_2_EQUAL = 288,
     STAR_2_EQUAL = 289,
     DIV_2_EQUAL = 290,
     MORE_LESS = 291,
     FALSE = 292,
     TRUE = 293,
     STAR_2 = 294,
     NUMBER_INT = 295,
     NUMBER_LONG = 296,
     NUMBER_FLOAT = 297,
     NAME = 298,
     DOT_3 = 299,
     EXPECT = 300,
     WITH = 301,
     AS = 302,
     ASSERT = 303,
     EQUAL = 304,
     DEL = 305,
     RETURN = 306,
     PRINT = 307,
     GLOBAL = 308,
     STAR_EQUAL = 309,
     LESS_THAN_2 = 310,
     RAISE = 311,
     PRIVATE = 312,
     PUBLIC = 313,
     PROTECTED = 314,
     YIELD = 315,
     MORE_THAN_2 = 316,
     STRING = 317,
     NONE = 318,
     IS = 319,
     DIV_2 = 320,
     LESS_OR_EQUAL = 321,
     MORE_OR_EQUAL = 322,
     EXCEPT = 323,
     PASS = 324,
     CHAR_VALUE = 325,
     BREAK = 326,
     CONTINUE = 327,
     stmt_14 = 328,
     stmt_13 = 329,
     stmt_12 = 330,
     stmt_11 = 331,
     stmt_10 = 332,
     stmt_9 = 333,
     stmt_8 = 334,
     stmt_7 = 335,
     stmt_6 = 336,
     stmt_5 = 337,
     stmt_4 = 338,
     stmt_3 = 339,
     stmt_2 = 340,
     stmt_1 = 341
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 69 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"

	struct R{
		int intVal;
		float floatVal;
		char charVal;
		char* strVal;
		int lineNum;
		int colNum;
	}r;
		class YaccSimpleType * yaccSimpleType;
		class Variable * var;
		class Function * function;
		class Type * type;


/* Line 387 of yacc.c  */
#line 278 "yacc.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_YACC_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 306 "yacc.cpp"

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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  27
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1469

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  109
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  100
/* YYNRULES -- Number of rules.  */
#define YYNRULES  407
/* YYNRULES -- Number of states.  */
#define YYNSTATES  763

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   341

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    96,   104,     2,
      88,    99,    94,    92,    87,    93,   101,    95,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    98,    97,
      90,   100,    91,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    89,     2,   106,   103,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   107,   102,   108,   105,     2,     2,     2,
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
      85,    86
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    12,    15,    17,    20,    27,
      35,    40,    46,    54,    62,    68,    74,    83,    92,    99,
     106,   115,   124,   131,   138,   148,   158,   166,   174,   183,
     192,   199,   206,   216,   226,   234,   242,   252,   262,   270,
     278,   282,   285,   287,   289,   292,   294,   296,   298,   300,
     302,   304,   306,   308,   312,   314,   317,   321,   324,   326,
     329,   331,   334,   336,   340,   343,   346,   349,   352,   354,
     356,   358,   360,   362,   364,   366,   368,   370,   372,   374,
     376,   378,   380,   382,   384,   387,   390,   392,   394,   396,
     398,   400,   402,   405,   407,   409,   412,   415,   419,   421,
     424,   426,   430,   432,   435,   438,   442,   445,   449,   452,
     456,   459,   463,   465,   467,   469,   471,   473,   475,   478,
     483,   489,   494,   500,   508,   517,   522,   530,   537,   547,
     552,   560,   568,   575,   579,   584,   587,   591,   596,   602,
     604,   608,   610,   613,   618,   620,   623,   626,   628,   630,
     636,   639,   643,   645,   648,   651,   655,   657,   660,   663,
     665,   668,   672,   674,   677,   679,   681,   683,   685,   687,
     689,   691,   693,   696,   698,   701,   704,   707,   711,   713,
     716,   719,   723,   725,   728,   731,   735,   737,   740,   743,
     746,   750,   754,   756,   759,   762,   765,   769,   773,   775,
     778,   781,   784,   787,   790,   794,   798,   802,   806,   808,
     811,   814,   817,   820,   822,   824,   827,   829,   832,   837,
     841,   843,   846,   849,   853,   856,   859,   863,   867,   869,
     872,   876,   880,   884,   889,   894,   899,   904,   910,   916,
     921,   926,   932,   938,   944,   950,   952,   954,   956,   958,
     960,   962,   964,   966,   968,   971,   974,   978,   982,   985,
     987,   990,   993,   997,  1000,  1002,  1005,  1008,  1012,  1015,
    1019,  1023,  1026,  1029,  1033,  1035,  1038,  1041,  1045,  1047,
    1049,  1052,  1056,  1060,  1065,  1068,  1071,  1075,  1077,  1080,
    1083,  1086,  1090,  1094,  1096,  1099,  1101,  1104,  1107,  1111,
    1114,  1118,  1121,  1125,  1127,  1130,  1133,  1137,  1142,  1148,
    1151,  1155,  1160,  1164,  1169,  1174,  1180,  1183,  1185,  1188,
    1191,  1195,  1198,  1202,  1207,  1212,  1217,  1223,  1229,  1235,
    1241,  1248,  1255,  1261,  1267,  1274,  1281,  1288,  1295,  1301,
    1308,  1315,  1322,  1330,  1338,  1346,  1354,  1363,  1372,  1380,
    1388,  1397,  1406,  1415,  1424,  1431,  1439,  1447,  1455,  1464,
    1473,  1482,  1491,  1501,  1511,  1520,  1529,  1539,  1549,  1559,
    1569,  1572,  1576,  1579,  1583,  1585,  1587,  1590,  1593,  1599,
    1603,  1607,  1612,  1619,  1622,  1625,  1628,  1632,  1636,  1640,
    1647,  1652,  1657,  1663,  1671,  1675,  1678,  1682,  1685,  1689,
    1693,  1695,  1698,  1700,  1702,  1707,  1713,  1716
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     110,     0,    -1,   111,     3,    -1,   133,    97,   112,    -1,
     112,    -1,   197,   112,    -1,   197,    -1,   114,   155,    -1,
      14,    43,   115,    23,   156,    98,    -1,    14,   125,    43,
     115,    23,   156,    98,    -1,    14,    43,   115,    98,    -1,
      14,   125,    43,   115,    98,    -1,    14,    13,    43,   115,
      23,   156,    98,    -1,    14,    12,    43,   115,    23,   156,
      98,    -1,    14,    13,    43,   115,    98,    -1,    14,    12,
      43,   115,    98,    -1,    14,    13,    12,    43,   115,    23,
     156,    98,    -1,    14,    12,    13,    43,   115,    23,   156,
      98,    -1,    14,    13,    12,    43,   115,    98,    -1,    14,
      12,    13,    43,   115,    98,    -1,    14,    12,   125,    43,
     115,    23,   156,    98,    -1,    14,    13,   125,    43,   115,
      23,   156,    98,    -1,    14,    13,   125,    43,   115,    98,
      -1,    14,    12,   125,    43,   115,    98,    -1,    14,    13,
      12,   125,    43,   115,    23,   156,    98,    -1,    14,    12,
      13,   125,    43,   115,    23,   156,    98,    -1,    14,    13,
      12,   125,    43,   115,    98,    -1,    14,    12,    13,   125,
      43,   115,    98,    -1,    14,   125,    13,    43,   115,    23,
     156,    98,    -1,    14,   125,    12,    43,   115,    23,   156,
      98,    -1,    14,   125,    13,    43,   115,    98,    -1,    14,
     125,    12,    43,   115,    98,    -1,    14,   125,    13,    12,
      43,   115,    23,   156,    98,    -1,    14,   125,    12,    13,
      43,   115,    23,   156,    98,    -1,    14,   125,    13,    12,
      43,   115,    98,    -1,    14,   125,    12,    13,    43,   115,
      98,    -1,    14,    13,   125,    12,    43,   115,    23,   156,
      98,    -1,    14,    12,   125,    13,    43,   115,    23,   156,
      98,    -1,    14,    13,   125,    12,    43,   115,    98,    -1,
      14,    12,   125,    13,    43,   115,    98,    -1,    88,   201,
      99,    -1,    88,    99,    -1,   117,    -1,   143,    -1,   118,
      97,    -1,   119,    -1,   127,    -1,   128,    -1,   129,    -1,
     133,    -1,   141,    -1,   142,    -1,   126,    -1,   121,   124,
     193,    -1,   121,    -1,   121,   120,    -1,   100,   121,   120,
      -1,   100,   121,    -1,   123,    -1,   123,    87,    -1,    87,
      -1,   156,   123,    -1,   156,    -1,   165,   123,    87,    -1,
     165,    87,    -1,    87,   156,    -1,    87,   165,    -1,   123,
     122,    -1,   122,    -1,    25,    -1,    26,    -1,    54,    -1,
      27,    -1,    28,    -1,    29,    -1,    30,    -1,    31,    -1,
      32,    -1,    33,    -1,    34,    -1,    35,    -1,    57,    -1,
      58,    -1,    59,    -1,    52,   191,    -1,    50,   191,    -1,
      69,    -1,   130,    -1,   131,    -1,   132,    -1,    71,    -1,
      72,    -1,    51,   193,    -1,    51,    -1,   134,    -1,     4,
     136,    -1,    87,   137,    -1,   135,    87,   137,    -1,   137,
      -1,   137,   135,    -1,   138,    -1,   138,    47,    43,    -1,
      43,    -1,    43,   139,    -1,   101,    43,    -1,   139,   101,
      43,    -1,    87,    43,    -1,   140,    87,    43,    -1,    53,
      43,    -1,    53,    43,   140,    -1,    24,    43,    -1,    24,
      43,   140,    -1,   145,    -1,   146,    -1,   147,    -1,   148,
      -1,   151,    -1,   113,    -1,    14,   197,    -1,    17,   156,
      98,   155,    -1,   144,    17,   156,    98,   155,    -1,    16,
     156,    98,   155,    -1,    16,   156,    98,   155,   144,    -1,
      16,   156,    98,   155,    15,    98,   155,    -1,    16,   156,
      98,   155,   144,    15,    98,   155,    -1,    18,   156,    98,
     155,    -1,    18,   156,    98,   155,    15,    98,   155,    -1,
      19,   191,    20,   193,    98,   155,    -1,    19,   191,    20,
     193,    98,   155,    15,    98,   155,    -1,    21,    98,   155,
     149,    -1,    21,    98,   155,   149,    15,    98,   155,    -1,
      21,    98,   155,   149,    22,    98,   155,    -1,    21,    98,
     155,    22,    98,   155,    -1,   153,    98,   155,    -1,   149,
     153,    98,   155,    -1,    87,   152,    -1,   150,    87,   152,
      -1,    46,   152,    98,   155,    -1,    46,   152,   150,    98,
     155,    -1,   156,    -1,   156,    47,   167,    -1,    68,    -1,
      68,   156,    -1,    68,   156,    47,    43,    -1,   116,    -1,
     116,   154,    -1,   154,     6,    -1,     6,    -1,   158,    -1,
     158,    16,   158,    15,   156,    -1,     8,   160,    -1,   157,
       8,   160,    -1,   160,    -1,   160,   157,    -1,     9,   161,
      -1,   159,     9,   161,    -1,   161,    -1,   161,   159,    -1,
      10,   161,    -1,   163,    -1,   164,   167,    -1,   162,   164,
     167,    -1,   167,    -1,   167,   162,    -1,    90,    -1,    91,
      -1,    49,    -1,    67,    -1,    66,    -1,    36,    -1,    11,
      -1,    20,    -1,    10,    20,    -1,    64,    -1,    64,    10,
      -1,    94,   167,    -1,   102,   169,    -1,   166,   102,   169,
      -1,   169,    -1,   169,   166,    -1,   103,   171,    -1,   168,
     103,   171,    -1,   171,    -1,   171,   168,    -1,   104,   173,
      -1,   170,   104,   173,    -1,   173,    -1,   173,   170,    -1,
      55,   175,    -1,    61,   175,    -1,   172,    55,   175,    -1,
     172,    61,   175,    -1,   175,    -1,   175,   172,    -1,    92,
     177,    -1,    93,   177,    -1,   174,    92,   177,    -1,   174,
      93,   177,    -1,   177,    -1,   177,   174,    -1,    94,   178,
      -1,    95,   178,    -1,    96,   178,    -1,    65,   178,    -1,
     176,    94,   178,    -1,   176,    95,   178,    -1,   176,    96,
     178,    -1,   176,    65,   178,    -1,   178,    -1,   178,   176,
      -1,    92,   178,    -1,    93,   178,    -1,   105,   178,    -1,
     180,    -1,   185,    -1,   179,   185,    -1,   182,    -1,   182,
     179,    -1,   182,   179,    39,   178,    -1,   182,    39,   178,
      -1,    62,    -1,   181,    62,    -1,    88,    99,    -1,    88,
     184,    99,    -1,    89,   106,    -1,   107,   108,    -1,    89,
     184,   106,    -1,   107,   196,   108,    -1,    43,    -1,    14,
      43,    -1,    14,   125,    43,    -1,    14,    13,    43,    -1,
      14,    12,    43,    -1,    14,    13,    12,    43,    -1,    14,
      12,    13,    43,    -1,    14,    13,   125,    43,    -1,    14,
      12,   125,    43,    -1,    14,    13,    12,   125,    43,    -1,
      14,    12,    13,   125,    43,    -1,    14,   125,    13,    43,
      -1,    14,   125,    12,    43,    -1,    14,   125,    13,    12,
      43,    -1,    14,   125,    12,    13,    43,    -1,    14,    13,
     125,    12,    43,    -1,    14,    12,   125,    13,    43,    -1,
      40,    -1,    42,    -1,    41,    -1,    70,    -1,   181,    -1,
      44,    -1,    63,    -1,    38,    -1,    37,    -1,    87,   156,
      -1,    87,   165,    -1,   183,    87,   156,    -1,   183,    87,
     165,    -1,   156,   207,    -1,   156,    -1,   156,   183,    -1,
     156,    87,    -1,   156,   183,    87,    -1,   165,   207,    -1,
     165,    -1,   165,   183,    -1,   165,    87,    -1,   165,   183,
      87,    -1,    88,    99,    -1,    88,   201,    99,    -1,    89,
     187,   106,    -1,   101,    43,    -1,    87,   188,    -1,   186,
      87,   188,    -1,   188,    -1,   188,   186,    -1,   188,    87,
      -1,   188,   186,    87,    -1,   156,    -1,    98,    -1,   156,
      98,    -1,   156,    98,   156,    -1,   156,    98,   189,    -1,
     156,    98,   156,   189,    -1,    98,   156,    -1,    98,   189,
      -1,    98,   156,   189,    -1,    98,    -1,    98,   156,    -1,
      87,   167,    -1,    87,   165,    -1,   190,    87,   167,    -1,
     190,    87,   165,    -1,   167,    -1,   167,   190,    -1,   165,
      -1,   165,   190,    -1,   167,    87,    -1,   167,   190,    87,
      -1,   165,    87,    -1,   165,   190,    87,    -1,    87,   156,
      -1,    87,   156,   192,    -1,   156,    -1,   156,   192,    -1,
     156,    87,    -1,   156,   192,    87,    -1,    87,   156,    98,
     156,    -1,   194,    87,   156,    98,   156,    -1,    87,   156,
      -1,   195,    87,   156,    -1,   156,    98,   156,   207,    -1,
     156,    98,   156,    -1,   156,    98,   156,    87,    -1,   156,
      98,   156,   194,    -1,   156,    98,   156,   194,    87,    -1,
     156,   207,    -1,   156,    -1,   156,    87,    -1,   156,   195,
      -1,   156,   195,    87,    -1,   198,   155,    -1,     5,    43,
      98,    -1,   125,     5,    43,    98,    -1,    13,     5,    43,
      98,    -1,    12,     5,    43,    98,    -1,    13,    12,     5,
      43,    98,    -1,    12,    13,     5,    43,    98,    -1,    12,
     125,     5,    43,    98,    -1,    13,   125,     5,    43,    98,
      -1,    13,    12,   125,     5,    43,    98,    -1,    12,    13,
     125,     5,    43,    98,    -1,   125,    13,     5,    43,    98,
      -1,   125,    12,     5,    43,    98,    -1,   125,    13,    12,
       5,    43,    98,    -1,   125,    12,    13,     5,    43,    98,
      -1,    13,   125,    12,     5,    43,    98,    -1,    12,   125,
      13,     5,    43,    98,    -1,     5,    43,    88,    99,    98,
      -1,   125,     5,    43,    88,    99,    98,    -1,    13,     5,
      43,    88,    99,    98,    -1,    12,     5,    43,    88,    99,
      98,    -1,    13,    12,     5,    43,    88,    99,    98,    -1,
      12,    13,     5,    43,    88,    99,    98,    -1,    13,   125,
       5,    43,    88,    99,    98,    -1,    12,   125,     5,    43,
      88,    99,    98,    -1,    13,    12,   125,     5,    43,    88,
      99,    98,    -1,    12,    13,   125,     5,    43,    88,    99,
      98,    -1,   125,    13,     5,    43,    88,    99,    98,    -1,
     125,    12,     5,    43,    88,    99,    98,    -1,   125,    13,
      12,     5,    43,    88,    99,    98,    -1,   125,    12,    13,
       5,    43,    88,    99,    98,    -1,    13,   125,    12,     5,
      43,    88,    99,    98,    -1,    12,   125,    13,     5,    43,
      88,    99,    98,    -1,     5,    43,    88,   136,    99,    98,
      -1,   125,     5,    43,    88,   136,    99,    98,    -1,    13,
       5,    43,    88,   136,    99,    98,    -1,    12,     5,    43,
      88,   136,    99,    98,    -1,    13,    12,     5,    43,    88,
     136,    99,    98,    -1,    12,    13,     5,    43,    88,   136,
      99,    98,    -1,    13,   125,     5,    43,    88,   136,    99,
      98,    -1,    12,   125,     5,    43,    88,   136,    99,    98,
      -1,    13,    12,   125,     5,    43,    88,   136,    99,    98,
      -1,    12,    13,   125,     5,    43,    88,   136,    99,    98,
      -1,   125,    13,     5,    43,    88,   136,    99,    98,    -1,
     125,    12,     5,    43,    88,   136,    99,    98,    -1,   125,
      13,    12,     5,    43,    88,   136,    99,    98,    -1,   125,
      12,    13,     5,    43,    88,   136,    99,    98,    -1,    13,
     125,    12,     5,    43,    88,   136,    99,    98,    -1,    12,
     125,    13,     5,    43,    88,   136,    99,    98,    -1,   205,
      87,    -1,   199,   205,    87,    -1,    87,   205,    -1,   200,
      87,   205,    -1,   205,    -1,   204,    -1,   205,    87,    -1,
      94,   156,    -1,    94,   156,    87,    39,   156,    -1,    94,
     156,   200,    -1,    94,   156,   202,    -1,    94,   156,   200,
     202,    -1,    94,   156,   200,    87,    39,   156,    -1,    39,
     156,    -1,   199,   205,    -1,   199,   204,    -1,   199,   203,
     204,    -1,   199,   205,    87,    -1,   199,    94,   156,    -1,
     199,    94,   156,    87,    39,   156,    -1,   199,    94,   156,
     200,    -1,   199,    94,   156,   202,    -1,   199,    94,   156,
     200,   202,    -1,   199,    94,   156,   200,    87,    39,   156,
      -1,   199,    39,   156,    -1,    87,   204,    -1,   202,    87,
     204,    -1,   204,    87,    -1,   203,   204,    87,    -1,   156,
     100,   156,    -1,   156,    -1,   156,   207,    -1,   207,    -1,
     208,    -1,    19,   191,    20,   158,    -1,    19,   191,    20,
     158,   206,    -1,    16,   158,    -1,    16,   158,   206,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   109,   109,   118,   119,   123,   124,   138,   145,   146,
     147,   156,   164,   165,   166,   174,   182,   183,   184,   192,
     200,   208,   209,   216,   224,   225,   226,   234,   241,   242,
     243,   251,   259,   260,   261,   269,   276,   277,   278,   285,
     294,   295,   298,   299,   301,   303,   304,   305,   306,   307,
     308,   309,   310,   313,   314,   315,   318,   319,   322,   323,
     324,   325,   326,   327,   328,   331,   332,   335,   336,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   352,   353,   354,   356,   357,   360,   363,   364,   365,
     368,   371,   374,   375,   379,   382,   385,   386,   388,   395,
     405,   406,   409,   410,   413,   417,   423,   424,   427,   428,
     431,   432,   435,   436,   437,   438,   439,   440,   441,   444,
     445,   448,   449,   450,   451,   454,   455,   458,   459,   462,
     463,   464,   465,   468,   469,   472,   473,   476,   477,   480,
     481,   484,   485,   486,   489,   490,   493,   494,   497,   498,
     501,   502,   505,   506,   509,   510,   513,   514,   517,   518,
     521,   522,   525,   526,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   542,   545,   546,   548,   549,
     552,   553,   556,   557,   560,   561,   564,   565,   568,   569,
     570,   571,   574,   575,   578,   579,   580,   581,   584,   585,
     588,   589,   590,   591,   592,   593,   594,   595,   598,   599,
     602,   603,   604,   605,   608,   609,   612,   613,   614,   615,
     618,   619,   622,   623,   624,   625,   626,   627,   628,   629,
     630,   631,   632,   633,   634,   635,   636,   637,   638,   639,
     640,   641,   642,   643,   644,   645,   646,   647,   648,   649,
     650,   651,   652,   653,   656,   657,   658,   659,   662,   663,
     664,   665,   666,   667,   668,   669,   670,   671,   674,   675,
     676,   677,   680,   681,   684,   685,   686,   687,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   701,   702,   705,
     706,   707,   708,   711,   712,   713,   714,   715,   716,   717,
     718,   721,   722,   725,   726,   727,   728,   731,   732,   734,
     735,   738,   739,   740,   741,   742,   743,   744,   745,   746,
     747,   749,   754,   761,   768,   775,   782,   789,   796,   803,
     810,   817,   824,   831,   838,   845,   852,   859,   866,   874,
     881,   888,   895,   902,   909,   916,   923,   930,   937,   944,
     951,   958,   965,   972,   979,   986,   993,  1000,  1007,  1014,
    1021,  1028,  1035,  1042,  1049,  1050,  1051,  1058,  1065,  1072,
    1082,  1083,  1086,  1087,  1090,  1091,  1093,  1095,  1103,  1116,
    1125,  1134,  1142,  1154,  1161,  1162,  1163,  1164,  1166,  1174,
    1187,  1195,  1203,  1211,  1224,  1234,  1235,  1238,  1239,  1242,
    1244,  1245,  1249,  1250,  1253,  1254,  1257,  1258
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ENDMARKER", "IMPORT", "CLASS", "END",
  "PRIMARY", "OR", "AND", "NOT", "NOT_EQUAL", "FINAL", "STATIC", "DEF",
  "ELSE", "IF", "ELIF", "WHILE", "FOR", "IN", "TRY", "FINALLY", "ARROW",
  "NONLOCAL", "PLUS_EQUAL", "MINUS_EQUAL", "DIV_EQUAL", "MOD_EQUAL",
  "AND_EQUAL", "OR_EQUAL", "SHAPOO_EQUAL", "LESS_THAN_2_EQUAL",
  "MORE_THAN_2_EQUAL", "STAR_2_EQUAL", "DIV_2_EQUAL", "MORE_LESS", "FALSE",
  "TRUE", "STAR_2", "NUMBER_INT", "NUMBER_LONG", "NUMBER_FLOAT", "NAME",
  "DOT_3", "EXPECT", "WITH", "AS", "ASSERT", "EQUAL", "DEL", "RETURN",
  "PRINT", "GLOBAL", "STAR_EQUAL", "LESS_THAN_2", "RAISE", "PRIVATE",
  "PUBLIC", "PROTECTED", "YIELD", "MORE_THAN_2", "STRING", "NONE", "IS",
  "DIV_2", "LESS_OR_EQUAL", "MORE_OR_EQUAL", "EXCEPT", "PASS",
  "CHAR_VALUE", "BREAK", "CONTINUE", "stmt_14", "stmt_13", "stmt_12",
  "stmt_11", "stmt_10", "stmt_9", "stmt_8", "stmt_7", "stmt_6", "stmt_5",
  "stmt_4", "stmt_3", "stmt_2", "stmt_1", "','", "'('", "'['", "'<'",
  "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "';'", "':'", "')'", "'='",
  "'.'", "'|'", "'^'", "'&'", "'~'", "']'", "'{'", "'}'", "$accept",
  "file_input", "program", "temp2", "funcdef", "funcheader", "parameters",
  "stmt", "simple_stmt", "small_stmt", "expr_stmt", "right_testlist",
  "testlist_star_expr", "comma_test_star", "comma_test_star_seqJ",
  "augassign", "access", "print_stmt", "del_stmt", "pass_stmt",
  "flow_stmt", "break_stmt", "continue_stmt", "return_stmt", "import_stmt",
  "import_name", "comma_dotted_as_name_seq", "dotted_as_names",
  "dotted_as_name", "dotted_name", "dotted_name_seq", "comma_name_seq",
  "global_stmt", "nonlocal_stmt", "compound_stmt", "elif_seq", "if_stmt",
  "while_stmt", "for_stmt", "try_stmt", "try_except_cla_seq", "with_seq",
  "with_stmt", "with_item", "except_clause", "list_stmt", "suite", "test",
  "or_seq", "or_test", "and_seq", "and_test", "not_test", "comp_op_seq",
  "comparison", "comp_op", "star_expr", "or_xor_expr_seq", "expr",
  "sha_and_expr_seq", "xor_expr", "and_shift_expr_seq", "and_expr",
  "arith_seq", "shift_expr", "term_seq", "arith_expr", "factor_seq",
  "term", "factor", "trailer_seq", "power", "str_seq", "atom",
  "comma_test_star_seq", "testlist_comp", "trailer", "comma_subscript_seq",
  "subscriptlist", "subscript", "sliceop", "comma_expr_star_seq",
  "exprlist", "comma_test", "testlist", "comma_test_colon_test_seq",
  "comma_test_seq", "dictorsetmaker", "classdef", "classheader",
  "arg_comma_seq", "comma_arg_seq", "arglist", "comma_default_arg_seq",
  "default_arg_comma_seq", "default_arg", "argument", "comp_iter",
  "comp_for", "comp_if", YY_NULL
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
     335,   336,   337,   338,   339,   340,   341,    44,    40,    91,
      60,    62,    43,    45,    42,    47,    37,    59,    58,    41,
      61,    46,   124,    94,    38,   126,    93,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   109,   110,   111,   111,   112,   112,   113,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     115,   115,   116,   116,   117,   118,   118,   118,   118,   118,
     118,   118,   118,   119,   119,   119,   120,   120,   121,   121,
     121,   121,   121,   121,   121,   122,   122,   123,   123,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   125,   125,   125,   126,   127,   128,   129,   129,   129,
     130,   131,   132,   132,   133,   134,   135,   135,   136,   136,
     137,   137,   138,   138,   139,   139,   140,   140,   141,   141,
     142,   142,   143,   143,   143,   143,   143,   143,   143,   144,
     144,   145,   145,   145,   145,   146,   146,   147,   147,   148,
     148,   148,   148,   149,   149,   150,   150,   151,   151,   152,
     152,   153,   153,   153,   154,   154,   155,   155,   156,   156,
     157,   157,   158,   158,   159,   159,   160,   160,   161,   161,
     162,   162,   163,   163,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   165,   166,   166,   167,   167,
     168,   168,   169,   169,   170,   170,   171,   171,   172,   172,
     172,   172,   173,   173,   174,   174,   174,   174,   175,   175,
     176,   176,   176,   176,   176,   176,   176,   176,   177,   177,
     178,   178,   178,   178,   179,   179,   180,   180,   180,   180,
     181,   181,   182,   182,   182,   182,   182,   182,   182,   182,
     182,   182,   182,   182,   182,   182,   182,   182,   182,   182,
     182,   182,   182,   182,   182,   182,   182,   182,   182,   182,
     182,   182,   182,   182,   183,   183,   183,   183,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   185,   185,
     185,   185,   186,   186,   187,   187,   187,   187,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   189,   189,   190,
     190,   190,   190,   191,   191,   191,   191,   191,   191,   191,
     191,   192,   192,   193,   193,   193,   193,   194,   194,   195,
     195,   196,   196,   196,   196,   196,   196,   196,   196,   196,
     196,   197,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     199,   199,   200,   200,   201,   201,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   201,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   202,   202,   203,   203,   204,
     205,   205,   206,   206,   207,   207,   208,   208
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     2,     1,     2,     6,     7,
       4,     5,     7,     7,     5,     5,     8,     8,     6,     6,
       8,     8,     6,     6,     9,     9,     7,     7,     8,     8,
       6,     6,     9,     9,     7,     7,     9,     9,     7,     7,
       3,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     2,     3,     2,     1,     2,
       1,     2,     1,     3,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     2,     2,     3,     1,     2,
       1,     3,     1,     2,     2,     3,     2,     3,     2,     3,
       2,     3,     1,     1,     1,     1,     1,     1,     2,     4,
       5,     4,     5,     7,     8,     4,     7,     6,     9,     4,
       7,     7,     6,     3,     4,     2,     3,     4,     5,     1,
       3,     1,     2,     4,     1,     2,     2,     1,     1,     5,
       2,     3,     1,     2,     2,     3,     1,     2,     2,     1,
       2,     3,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     2,     2,     3,     1,     2,
       2,     3,     1,     2,     2,     3,     1,     2,     2,     2,
       3,     3,     1,     2,     2,     2,     3,     3,     1,     2,
       2,     2,     2,     2,     3,     3,     3,     3,     1,     2,
       2,     2,     2,     1,     1,     2,     1,     2,     4,     3,
       1,     2,     2,     3,     2,     2,     3,     3,     1,     2,
       3,     3,     3,     4,     4,     4,     4,     5,     5,     4,
       4,     5,     5,     5,     5,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     3,     3,     2,     1,
       2,     2,     3,     2,     1,     2,     2,     3,     2,     3,
       3,     2,     2,     3,     1,     2,     2,     3,     1,     1,
       2,     3,     3,     4,     2,     2,     3,     1,     2,     2,
       2,     3,     3,     1,     2,     1,     2,     2,     3,     2,
       3,     2,     3,     1,     2,     2,     3,     4,     5,     2,
       3,     4,     3,     4,     4,     5,     2,     1,     2,     2,
       3,     2,     3,     4,     4,     4,     5,     5,     5,     5,
       6,     6,     5,     5,     6,     6,     6,     6,     5,     6,
       6,     6,     7,     7,     7,     7,     8,     8,     7,     7,
       8,     8,     8,     8,     6,     7,     7,     7,     8,     8,
       8,     8,     9,     9,     8,     8,     9,     9,     9,     9,
       2,     3,     2,     3,     1,     1,     2,     2,     5,     3,
       3,     4,     6,     2,     2,     2,     3,     3,     3,     6,
       4,     4,     5,     7,     3,     2,     3,     2,     3,     3,
       1,     2,     1,     1,     4,     5,     2,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     0,    81,    82,    83,     0,     0,
       4,     0,     0,    94,     6,     0,   102,    95,    98,   100,
       0,     0,     0,     0,     0,     0,     0,     1,     2,     0,
       0,     0,     0,     5,   147,     0,     0,     0,     0,     0,
       0,     0,   253,   252,   245,   247,   246,   228,   250,     0,
       0,    93,     0,     0,   220,   251,    86,   248,    90,    91,
      60,     0,     0,     0,     0,     0,     0,     0,   117,     0,
     144,    42,     0,    45,    54,    68,    58,    52,    46,    47,
      48,    87,    88,    89,    49,    50,    51,    43,   112,   113,
     114,   115,   116,     0,   321,    62,   148,   152,   156,   159,
       0,   162,   178,   182,   186,   192,   198,   208,   213,   249,
     216,     0,   103,     0,    99,     0,     0,   322,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,     0,   158,     0,     0,   229,     0,
     118,     0,     0,   295,   293,     0,     0,   110,     0,   139,
      85,   303,    92,    84,   108,    65,    66,   222,   259,   264,
       0,   224,     0,   210,   211,   175,   212,   225,   317,     0,
       7,   145,    44,    69,    70,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    71,     0,    55,     0,    59,    67,
     146,     0,    61,     0,     0,   153,     0,   157,    64,     0,
       0,   170,   171,   169,   166,   173,   168,   167,   164,   165,
     163,     0,     0,   179,     0,   183,     0,   187,     0,     0,
     193,     0,     0,   199,     0,     0,     0,     0,   209,   221,
       0,     0,     0,     0,   217,   214,   104,     0,    96,     0,
     101,     0,     0,     0,   325,     0,     0,     0,     0,     0,
     324,     0,     0,     0,     0,     0,   323,     0,     0,     0,
       0,     0,     0,   229,     0,     0,   232,     0,     0,   231,
       0,     0,     0,     0,     0,   230,     0,     0,   299,   296,
     297,   294,     0,     0,     0,   111,     0,     0,     0,     0,
     305,   304,   109,     0,   261,   260,   258,   266,   265,   263,
     223,   226,   318,     0,   319,   316,   227,    57,    53,     0,
     150,     0,   154,     0,    63,   172,   174,     0,   160,   176,
       0,   180,     0,   184,     0,   188,   189,     0,     0,   194,
     195,     0,     0,   203,   200,   201,   202,     0,     0,     0,
       0,   219,     0,     0,   268,   400,     0,     0,   375,   374,
     279,   278,     0,   274,   271,     0,   215,   105,    97,   338,
       0,     0,     0,     0,   327,     0,     0,   328,     0,     0,
       0,     0,   326,     0,     0,   329,     0,     0,     0,     0,
     333,     0,     0,   332,     0,     0,   232,     0,     0,   231,
       0,     0,     0,   230,   234,     0,     0,     0,   236,   233,
       0,     0,     0,   235,    41,     0,     0,    10,     0,   240,
       0,   239,     0,   121,   125,   290,   289,   300,   298,     0,
       0,   141,   129,     0,   106,     0,   135,   137,     0,     0,
     140,   301,   306,     0,   254,   255,   262,   267,   309,   312,
     320,    56,     0,   151,   155,   161,   177,   181,   185,   190,
     191,   196,   197,   207,   204,   205,   206,   383,   377,     0,
     401,     0,     0,     0,   385,   384,   269,   370,   287,   284,
     285,   280,   270,   276,   275,   218,   354,   341,     0,     0,
       0,     0,   331,     0,     0,     0,   337,   340,     0,     0,
       0,     0,   330,     0,     0,     0,   336,   339,     0,     0,
       0,     0,   335,     0,     0,     0,   334,   234,     0,     0,
     236,   233,     0,     0,   235,     0,   240,     0,   239,     0,
     238,     0,    15,   244,     0,     0,   237,     0,    14,   243,
       0,    40,     0,   242,     0,   241,     0,     0,    11,     0,
       0,   122,     0,   292,   291,     0,     0,   142,     0,     0,
       0,     0,   107,   136,   138,   302,     0,   256,   257,   313,
     314,   311,   310,   149,     0,   379,   380,   399,   394,   388,
       0,   386,   397,   371,   288,   286,   281,   282,   272,   277,
     357,   343,     0,     0,     0,   345,     0,     0,     0,   356,
     342,     0,     0,     0,   344,     0,     0,     0,   355,   349,
       0,     0,     0,   348,     0,     0,     0,   238,   244,   237,
     243,   242,   241,     0,    19,     0,     0,     0,     0,    23,
       0,    18,     0,     0,     0,     0,    22,     8,     0,     0,
      31,     0,     0,    30,     0,     0,     0,     0,     0,     0,
     127,   132,     0,     0,     0,     0,   133,   404,     0,   315,
       0,   395,   372,     0,   381,     0,     0,   390,   391,   398,
     283,   273,   359,   347,     0,   361,   353,     0,   358,   346,
       0,   360,   352,     0,   365,   351,     0,   364,   350,     0,
       0,     0,    27,    13,     0,    39,     0,     0,     0,    26,
      12,     0,    38,     0,     0,    35,     0,     0,    34,     0,
       9,   123,     0,     0,     0,   126,     0,   143,   130,   131,
     134,     0,   405,   402,   403,     0,     0,   378,     0,   373,
     396,     0,     0,   392,   363,   369,   362,   368,   367,   366,
      17,     0,     0,    20,    16,     0,     0,    21,     0,    29,
       0,    28,   119,   124,     0,     0,   406,   307,     0,   382,
     389,     0,    25,    37,    24,    36,    33,    32,   120,   128,
     407,   308,   393
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    10,    68,    69,   272,    70,    71,    72,
      73,   186,    74,    75,    76,   187,    11,    77,    78,    79,
      80,    81,    82,    83,    84,    13,   114,    17,    18,    19,
     112,   285,    85,    86,    87,   541,    88,    89,    90,    91,
     422,   288,    92,   148,   423,    93,    94,    95,   195,    96,
     197,    97,    98,   210,    99,   211,   100,   213,   101,   215,
     102,   217,   103,   220,   104,   223,   105,   228,   106,   107,
     234,   108,   109,   110,   295,   160,   235,   474,   352,   353,
     470,   279,   145,   291,   152,   560,   304,   169,    14,    15,
     346,   565,   347,   566,   463,   651,   349,   712,   713,   714
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -524
static const yytype_int16 yypact[] =
{
     350,    33,    68,   321,   338,  -524,  -524,  -524,    98,   169,
    -524,   276,   164,  -524,   316,   682,   175,  -524,    86,   309,
     -26,   280,   151,   262,   334,   362,   184,  -524,  -524,   339,
     452,   250,   316,  -524,  -524,  1290,   259,  1290,  1290,  1324,
     288,   355,  -524,  -524,  -524,  -524,  -524,  -524,  -524,  1290,
    1324,  1290,  1324,   359,  -524,  -524,  -524,  -524,  -524,  -524,
    1024,   872,   910,  1362,  1362,  1362,  1362,   753,  -524,   682,
     497,  -524,   326,  -524,   266,  -524,   345,  -524,  -524,  -524,
    -524,  -524,  -524,  -524,  -524,  -524,  -524,  -524,  -524,  -524,
    -524,  -524,  -524,   444,  -524,   354,   438,   469,   447,  -524,
     404,    41,   372,   357,   393,    39,   100,   104,  -524,   436,
      14,   467,   407,    33,   432,   513,    13,  -524,    -9,   514,
     553,   521,   560,     3,   528,   567,   530,   570,   117,   534,
     577,   544,   588,  -524,   358,  -524,   405,   225,   506,   483,
    -524,   498,   499,   511,   512,   580,   682,   516,   285,   558,
    -524,   519,  -524,  -524,   516,  -524,  -524,  -524,    30,    56,
     508,  -524,   502,  -524,  -524,  -524,  -524,  -524,    22,   501,
    -524,  -524,  -524,  -524,  -524,  -524,  -524,  -524,  -524,  -524,
    -524,  -524,  -524,  -524,  -524,   948,  -524,  1290,  1024,  -524,
    -524,  1024,   354,  1290,  1290,   602,  1290,   605,  1024,   524,
     595,  -524,  -524,  -524,  -524,   607,  -524,  -524,  -524,  -524,
      41,  1362,  1362,   518,  1362,   520,  1362,   517,  1362,  1362,
     115,  1362,  1362,   244,  1362,  1362,  1362,  1362,   410,  -524,
    1362,   763,  1062,   579,   113,  -524,  -524,   581,  -524,    33,
    -524,   527,   529,    15,  -524,   340,   583,   371,   584,    17,
    -524,   373,   586,   384,   587,    50,  -524,   401,   589,   414,
     590,   474,   435,  -524,   267,   387,   506,   347,   409,   506,
     346,   834,    24,   363,   399,   506,   682,   682,  1324,   547,
    1324,   548,  1290,    45,   593,   552,  1290,   682,   353,  1362,
    1290,   554,   552,  1324,  1024,   555,  -524,  1024,   556,  -524,
    -524,  -524,  1290,  1290,   559,  -524,  -524,   531,  -524,   625,
    -524,  1290,  -524,  1290,  1024,  -524,  -524,  1362,  -524,  -524,
    1362,  -524,  1362,  -524,  1362,  -524,  -524,  1362,  1362,  -524,
    -524,  1362,  1362,  -524,  -524,  -524,  -524,  1362,  1362,  1362,
    1362,  -524,  1290,  1290,  -524,    21,   986,   546,  -524,   561,
    1100,   551,   549,   563,  -524,  1362,  -524,  -524,  -524,  -524,
     564,   565,   557,    67,  -524,   448,    76,  -524,   456,   566,
     562,   134,  -524,   457,   137,  -524,   463,   568,   569,   139,
    -524,   464,   140,  -524,   465,   466,  -524,   261,   471,  -524,
     209,   290,   235,  -524,   506,   174,    25,   215,   506,   506,
     281,    27,   302,   506,  -524,   571,  1290,  -524,   303,   506,
     342,   506,    32,    42,   637,  -524,  -524,  1324,  1324,   573,
     574,  1290,   156,   575,  -524,   610,  -524,  -524,  1290,   682,
    -524,   572,  -524,   638,  -524,  -524,  1024,  1024,  -524,    78,
    1290,  -524,  1290,  -524,  -524,  -524,  -524,  -524,  -524,  -524,
    -524,  -524,  -524,  -524,  -524,  -524,  -524,  -524,   578,  1290,
    -524,  1290,  1290,  1290,   582,   596,  -524,   576,  1290,   591,
    -524,  1100,  -524,  1062,   600,  -524,  -524,  -524,   592,   597,
     594,   141,  -524,   599,   603,   142,  -524,  -524,   601,   606,
     608,   143,  -524,   611,   609,   144,  -524,  -524,   612,   614,
     616,   145,  -524,   615,   617,   147,  -524,  -524,   624,   631,
    -524,  -524,   633,   634,  -524,   639,  -524,   648,  -524,    40,
     506,  1290,  -524,   506,    46,    47,   506,  1290,  -524,   506,
      48,  -524,   619,   506,    55,   506,    57,  1290,  -524,   620,
    1290,   420,   623,  -524,  -524,   682,   682,   647,   629,   632,
     640,   682,  -524,  -524,  -524,  -524,  1290,  -524,  -524,  1290,
     618,  -524,  -524,  -524,  1138,   642,   644,  -524,  -524,   649,
     641,   650,  -524,   643,  -524,  -524,   591,  -524,  -524,  1062,
    -524,  -524,   645,   651,   656,  -524,   652,   658,   659,  -524,
    -524,   661,   662,   663,  -524,   666,   667,   669,  -524,  -524,
     668,   674,   679,  -524,   681,   683,   684,  -524,  -524,  -524,
    -524,  -524,  -524,  1290,  -524,    59,   686,    60,  1290,  -524,
    1290,  -524,    61,   687,    62,  1290,  -524,  -524,    64,  1290,
    -524,    65,  1290,  -524,   688,   682,   690,   694,  1290,   682,
     724,  -524,   697,   682,   682,   682,  -524,    80,   700,  1290,
    1290,  -524,  -524,  1176,   644,  1290,  1214,   660,   644,  -524,
    -524,  -524,  -524,  -524,   701,  -524,  -524,   710,  -524,  -524,
     711,  -524,  -524,   712,  -524,  -524,   713,  -524,  -524,   714,
     715,  1290,  -524,  -524,  1290,  -524,   716,   719,  1290,  -524,
    -524,  1290,  -524,   720,  1290,  -524,   721,  1290,  -524,   722,
    -524,  -524,   682,   682,   723,  -524,   726,  -524,  -524,  -524,
    -524,  1290,  -524,  -524,  -524,  1290,   729,  -524,  1290,  -524,
    -524,  1290,  1252,   644,  -524,  -524,  -524,  -524,  -524,  -524,
    -524,   730,   731,  -524,  -524,   732,   733,  -524,   734,  -524,
     736,  -524,  -524,  -524,   682,   682,    80,  -524,  1290,  -524,
    -524,  1290,  -524,  -524,  -524,  -524,  -524,  -524,  -524,  -524,
    -524,  -524,  -524
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -524,  -524,  -524,    72,  -524,  -524,   -50,  -524,  -524,  -524,
    -524,   439,   653,   -63,   118,  -524,    70,  -524,  -524,  -524,
    -524,  -524,  -524,  -524,   748,  -524,  -524,   -52,  -102,  -524,
    -524,   626,  -524,  -524,  -524,  -524,  -524,  -524,  -524,  -524,
    -524,  -524,  -524,  -280,   335,   691,   -65,   -37,  -524,  -191,
    -524,  -178,   -28,  -524,  -524,   627,   -24,  -524,   -30,  -524,
    -185,  -524,  -180,  -524,  -177,  -524,  -187,  -524,  -204,     2,
    -524,  -524,  -524,  -524,   676,   760,   613,  -524,  -524,  -440,
    -450,   692,   -42,   351,  -158,  -524,  -524,  -524,   803,  -524,
    -524,   271,   598,  -523,  -524,  -228,  -341,    97,  -114,  -524
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -388
static const yytype_int16 yytable[] =
{
     141,   142,   309,   348,   170,   465,   426,   135,   150,   144,
     153,   238,   149,   189,   151,   143,   310,   329,   330,   575,
     144,   577,   144,   155,   158,   158,   143,   319,   143,   308,
     168,   325,   326,   578,   321,   165,   156,   159,   159,   323,
     293,   293,   654,   348,   296,   299,   658,   406,   521,   293,
     527,   200,   201,   230,   305,   537,    16,   539,    16,   540,
      16,   202,   116,   613,   242,   163,   164,   420,   166,   618,
     620,   625,   117,    23,    26,   293,    16,   203,   629,   243,
     632,   283,   681,   684,   688,   691,    33,   694,   697,   244,
     204,   249,   120,    16,   218,   125,   711,   293,    27,   293,
     219,   250,   231,   232,   133,   205,   139,   206,   207,   302,
      16,    20,   241,   421,   361,   233,   369,   294,   464,    16,
     303,   459,   407,   522,   419,   528,   660,   451,   452,   189,
     538,   208,   209,   443,   723,   446,   189,   358,   614,   661,
     449,   450,   447,   297,   619,   621,   626,   448,   553,   377,
     151,   155,   355,   630,   155,   633,   119,   682,   685,   689,
     692,   155,   695,   698,   156,   559,   479,   156,   312,   224,
     327,   548,    28,   113,   156,   483,   328,    16,   549,   246,
      16,   318,    16,    16,    16,    16,    16,    16,    16,   126,
      16,   362,   221,   222,   345,   351,   127,   370,   225,   226,
     227,   231,   232,   378,   264,   255,   267,   270,     5,     6,
       7,   413,   414,   192,   233,   256,   396,   520,   199,   401,
     248,   513,   427,   652,   421,   412,   333,   334,   335,   336,
      24,   460,   341,   489,   345,   571,   493,   268,   499,   503,
     583,   587,   592,   596,   601,   151,   605,   517,   416,   149,
     416,   433,   514,   431,   415,   131,   415,   434,   523,   430,
     434,    32,   132,   144,     2,   438,   439,   121,   269,   143,
     435,   136,   137,   435,   509,   122,   111,   155,   518,   391,
     392,    29,     5,     6,     7,   444,   252,   445,    30,    31,
     156,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   138,   515,   510,   457,   458,   254,   258,   345,
     393,   480,   719,   469,   484,   652,     5,     6,     7,   490,
     184,     2,   494,   118,   526,   561,    21,   500,     3,     4,
     504,   387,   390,   516,    22,   395,   331,   332,   400,   453,
     454,   455,   456,    24,   519,   529,   533,   260,   524,   525,
      25,   126,   121,   530,     1,     2,   115,   475,   402,   534,
     397,   536,     3,     4,   554,   647,   185,   124,   129,   532,
     261,   262,   286,     5,     6,     7,   408,   123,     5,     6,
       7,   719,   128,   287,   547,   535,   146,   544,   544,   403,
     398,   149,   119,   543,   543,     5,     6,     7,   147,   557,
     557,   263,   154,   562,   131,   563,   409,     5,     6,     7,
      21,   410,   558,   558,   124,     5,     6,     7,   265,     5,
       6,     7,   567,   172,   568,   569,   570,   720,   363,   584,
     394,   574,   188,   588,   576,   637,   351,   638,   364,   593,
     428,   191,   411,   597,     5,     6,     7,   388,   266,   602,
     190,   429,   399,   606,   193,   508,   196,   129,   512,   366,
     214,   371,     5,     6,     7,   130,     5,     6,     7,   367,
     615,   372,   374,   617,   212,   337,   622,   194,   389,   624,
     640,   641,   375,   628,   616,   631,   646,   385,    29,   379,
     623,   198,     5,     6,     7,   273,   274,   216,   229,   380,
     634,     1,   382,   636,   338,   339,   340,    35,   237,   507,
     236,    36,   383,    37,   511,    38,    39,   386,    40,   239,
     746,    41,   648,     5,     6,     7,   275,   345,     5,     6,
       7,     5,     6,     7,    42,    43,   481,    44,    45,    46,
      47,    48,   351,    49,   485,   491,   482,    50,    51,    52,
      53,   495,   501,   505,   486,   492,   240,   245,   246,    54,
      55,   496,   502,   506,   247,   248,    56,    57,    58,    59,
     701,   251,   252,   253,   705,   254,   680,   257,   708,   709,
     710,   686,   258,   687,    60,    61,    62,   259,   693,    63,
      64,    65,   696,   260,   271,   699,   276,   277,   278,   280,
     282,   704,    66,   284,    67,   289,   290,   300,   301,   306,
     311,   314,   716,   717,   313,   315,   345,   316,   570,   345,
     320,   324,   354,   322,   357,   359,   365,   368,   360,   373,
     376,   185,   381,   384,   417,   418,   424,   742,   743,   425,
     442,   432,   436,   437,   731,   466,   440,   732,   467,   471,
     473,   735,   542,   552,   736,   472,   478,   738,   556,  -388,
     740,   488,   476,   477,   487,   564,   497,   607,   498,   572,
     531,   545,   546,   551,   608,  -376,   609,   610,   747,   758,
     759,   749,   611,   573,   750,   345,     1,   579,    34,   468,
     580,   612,    35,   582,   642,   581,    36,   585,    37,   589,
      38,    39,   586,    40,   590,   649,    41,   591,   595,   594,
     598,   761,   599,   603,   762,   600,   604,   627,   635,    42,
      43,   639,    44,    45,    46,    47,    48,   643,    49,   653,
     644,   655,    50,    51,    52,    53,   656,   659,   645,   706,
     707,   459,  -387,   662,    54,    55,   441,   722,    12,   663,
     665,    56,    57,    58,    59,   664,   666,   550,   667,   668,
     669,   171,   670,    35,   671,   672,   674,   134,   673,    60,
      61,    62,   675,    35,    63,    64,    65,   134,   676,   677,
     292,   678,   555,   679,   683,   690,   700,    66,   702,    67,
      42,    43,   703,    44,    45,    46,    47,    48,   715,   724,
      42,    43,   342,    44,    45,    46,    47,    48,   725,   726,
     727,   728,   729,   730,   733,    54,    55,   734,   737,   739,
     741,   744,   162,    57,   745,    54,    55,   748,   752,   753,
     754,   755,   756,    57,   757,   298,   281,   317,   307,   140,
     657,    61,    62,   760,    35,    63,    64,   356,   134,     0,
       0,    61,    62,     0,     0,    63,    64,   343,    66,     0,
      67,   167,   344,     0,     0,     0,     0,     0,    66,   405,
      67,    42,    43,   342,    44,    45,    46,    47,    48,     0,
       0,     0,    35,     0,     0,     0,   134,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    54,    55,     0,     0,
       0,     0,     0,     0,    57,     0,     0,     0,     0,    42,
      43,     0,    44,    45,    46,    47,    48,     0,     0,     0,
      35,     0,    61,    62,   134,     0,    63,    64,   343,     0,
       0,     0,     0,   404,    54,    55,     0,     0,     0,    66,
       0,    67,    57,     0,     0,     0,     0,    42,    43,     0,
      44,    45,    46,    47,    48,     0,     0,     0,    35,     0,
      61,    62,   134,     0,    63,    64,    65,     0,     0,     0,
       0,   157,    54,    55,     0,     0,     0,    66,     0,    67,
      57,     0,     0,     0,     0,    42,    43,     0,    44,    45,
      46,    47,    48,     0,     0,     0,    35,     0,    61,    62,
     134,     0,    63,    64,    65,     0,     0,     0,     0,     0,
      54,    55,     0,     0,     0,    66,   161,    67,    57,     0,
       0,     0,     0,    42,    43,   461,    44,    45,    46,    47,
      48,     0,     0,     0,    35,    60,    61,    62,   134,     0,
      63,    64,    65,     0,     0,     0,     0,     0,    54,    55,
       0,     0,     0,    66,     0,    67,    57,     0,     0,     0,
       0,    42,    43,     0,    44,    45,    46,    47,    48,     0,
       0,     0,    35,     0,    61,    62,   134,     0,    63,    64,
     462,     0,     0,     0,     0,     0,    54,    55,     0,     0,
       0,    66,     0,    67,    57,     0,     0,     0,     0,    42,
      43,     0,    44,    45,    46,    47,    48,     0,     0,     0,
      35,     0,    61,    62,   134,     0,    63,    64,    65,     0,
       0,     0,     0,     0,    54,    55,     0,     0,     0,    66,
       0,    67,    57,     0,     0,     0,     0,    42,    43,     0,
      44,    45,    46,    47,    48,     0,     0,     0,    35,     0,
      61,    62,   134,     0,    63,    64,     0,     0,     0,     0,
     350,     0,    54,    55,     0,     0,     0,    66,     0,    67,
      57,     0,     0,     0,     0,    42,    43,   650,    44,    45,
      46,    47,    48,     0,     0,     0,    35,     0,    61,    62,
     134,     0,    63,    64,     0,     0,     0,     0,   468,     0,
      54,    55,     0,     0,     0,    66,     0,    67,    57,     0,
       0,     0,     0,    42,    43,   718,    44,    45,    46,    47,
      48,     0,     0,     0,    35,     0,    61,    62,   134,     0,
      63,    64,     0,     0,     0,     0,     0,     0,    54,    55,
       0,     0,     0,    66,     0,    67,    57,     0,     0,     0,
       0,    42,    43,   721,    44,    45,    46,    47,    48,     0,
       0,     0,    35,     0,    61,    62,   134,     0,    63,    64,
       0,     0,     0,     0,     0,     0,    54,    55,     0,     0,
       0,    66,     0,    67,    57,     0,     0,     0,     0,    42,
      43,   751,    44,    45,    46,    47,    48,     0,     0,     0,
      35,     0,    61,    62,   134,     0,    63,    64,     0,     0,
       0,     0,     0,     0,    54,    55,     0,     0,     0,    66,
       0,    67,    57,     0,     0,     0,     0,    42,    43,     0,
      44,    45,    46,    47,    48,     0,     0,     0,   134,     0,
      61,    62,     0,     0,    63,    64,     0,     0,     0,     0,
       0,     0,    54,    55,     0,     0,     0,    66,     0,    67,
      57,    42,    43,     0,    44,    45,    46,    47,    48,     0,
       0,     0,     0,     0,     0,     0,   134,     0,    61,    62,
       0,     0,    63,    64,     0,     0,    54,    55,     0,     0,
       0,     0,     0,     0,    57,    66,     0,    67,     0,    42,
      43,     0,    44,    45,    46,    47,    48,     0,     0,     0,
       0,     0,    61,    62,     0,     0,    63,    64,    65,     0,
       0,     0,     0,     0,    54,    55,     0,     0,     0,    66,
       0,    67,    57,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      61,    62,     0,     0,    63,    64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    66,     0,    67
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-524)))

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-388)))

static const yytype_int16 yycheck[] =
{
      37,    38,   193,   231,    69,   346,   286,    35,    50,    39,
      52,   113,    49,    76,    51,    39,   194,   221,   222,   469,
      50,   471,    52,    60,    61,    62,    50,   212,    52,   187,
      67,   218,   219,   473,   214,    65,    60,    61,    62,   216,
      19,    19,   565,   271,   158,   159,   569,    23,    23,    19,
      23,    10,    11,    39,   168,    23,    43,    15,    43,    17,
      43,    20,    88,    23,   116,    63,    64,    22,    66,    23,
      23,    23,    98,     3,     4,    19,    43,    36,    23,    88,
      23,   146,    23,    23,    23,    23,    14,    23,    23,    98,
      49,    88,    22,    43,    55,    25,    16,    19,     0,    19,
      61,    98,    88,    89,    32,    64,    36,    66,    67,    87,
      43,    43,    99,    68,    99,   101,    99,    87,   346,    43,
      98,   100,    98,    98,   282,    98,   576,   331,   332,   192,
      98,    90,    91,   311,   657,   320,   199,   239,    98,   579,
     327,   328,   322,    87,    98,    98,    98,   324,   428,    99,
     187,   188,    39,    98,   191,    98,     5,    98,    98,    98,
      98,   198,    98,    98,   188,    87,    99,   191,   196,    65,
      55,    15,     3,    87,   198,    99,    61,    43,    22,     5,
      43,   211,    43,    43,    43,    43,    43,    43,    43,     5,
      43,   243,    92,    93,   231,   232,    12,   249,    94,    95,
      96,    88,    89,   255,   134,    88,   136,   137,    57,    58,
      59,   276,   277,    95,   101,    98,   266,    43,   100,   269,
       5,    12,   287,   564,    68,   275,   224,   225,   226,   227,
       5,   345,   230,    99,   271,   463,    99,    12,    99,    99,
      99,    99,    99,    99,    99,   282,    99,    12,   278,   286,
     280,   293,    43,   290,   278,     5,   280,   294,    43,   289,
     297,    97,    12,   293,     5,   302,   303,     5,    43,   293,
     294,    12,    13,   297,    13,    13,   101,   314,    43,    12,
      13,     5,    57,    58,    59,   313,     5,   317,    12,    13,
     314,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    43,    13,    43,   342,   343,     5,     5,   346,
      43,   363,   653,   350,   366,   656,    57,    58,    59,   371,
      54,     5,   374,    43,    43,   439,     5,   379,    12,    13,
     382,   261,   262,    43,    13,   265,    92,    93,   268,   337,
     338,   339,   340,     5,   394,    43,    43,     5,   398,   399,
      12,     5,     5,   403,     4,     5,    47,   355,    12,   409,
      13,   411,    12,    13,   429,   556,   100,     5,     5,   406,
      12,    13,    87,    57,    58,    59,    13,    43,    57,    58,
      59,   722,    43,    98,   421,    43,    98,   417,   418,    43,
      43,   428,     5,   417,   418,    57,    58,    59,    43,   436,
     437,    43,    43,   440,     5,   442,    43,    57,    58,    59,
       5,    12,   436,   437,     5,    57,    58,    59,    13,    57,
      58,    59,   459,    97,   461,   462,   463,   655,    88,   481,
      43,   468,    87,   485,   471,    15,   473,    17,    98,   491,
      87,    87,    43,   495,    57,    58,    59,    12,    43,   501,
       6,    98,    43,   505,    16,   385,     9,     5,   388,    88,
     103,    88,    57,    58,    59,    13,    57,    58,    59,    98,
     520,    98,    88,   523,   102,    65,   526,     8,    43,   529,
     545,   546,    98,   533,   521,   535,   551,    13,     5,    88,
     527,    87,    57,    58,    59,    12,    13,   104,    62,    98,
     537,     4,    88,   540,    94,    95,    96,    10,   101,    43,
      43,    14,    98,    16,    43,    18,    19,    43,    21,    87,
     711,    24,   559,    57,    58,    59,    43,   564,    57,    58,
      59,    57,    58,    59,    37,    38,    88,    40,    41,    42,
      43,    44,   579,    46,    88,    88,    98,    50,    51,    52,
      53,    88,    88,    88,    98,    98,    43,    43,     5,    62,
      63,    98,    98,    98,    43,     5,    69,    70,    71,    72,
     635,    43,     5,    43,   639,     5,   613,    43,   643,   644,
     645,   618,     5,   620,    87,    88,    89,    43,   625,    92,
      93,    94,   629,     5,    88,   632,    98,    98,    87,    87,
      20,   638,   105,    87,   107,    47,    87,    99,   106,   108,
       8,    87,   649,   650,     9,    20,   653,    10,   655,   656,
     102,   104,    43,   103,    43,    98,    43,    43,    99,    43,
      43,   100,    43,    43,    87,    87,    43,   702,   703,    87,
      15,    87,    87,    87,   681,    99,    87,   684,    87,    98,
      87,   688,    15,    43,   691,   106,    99,   694,    20,    87,
     697,    99,    98,    98,    98,    87,    98,    43,    99,    87,
      99,    98,    98,    98,    43,    99,    43,    43,   715,   744,
     745,   718,    43,    87,   721,   722,     4,    87,     6,    98,
      98,    43,    10,    99,    47,    98,    14,    98,    16,    98,
      18,    19,    99,    21,    98,    87,    24,    99,    99,    98,
      98,   748,    98,    98,   751,    99,    99,    98,    98,    37,
      38,    98,    40,    41,    42,    43,    44,    98,    46,    87,
      98,    87,    50,    51,    52,    53,    87,    87,    98,    15,
      43,   100,    99,    98,    62,    63,   307,    87,     0,    98,
      98,    69,    70,    71,    72,    99,    98,   422,    99,    98,
      98,    70,    99,    10,    98,    98,    98,    14,    99,    87,
      88,    89,    98,    10,    92,    93,    94,    14,    99,    98,
     154,    98,   431,    99,    98,    98,    98,   105,    98,   107,
      37,    38,    98,    40,    41,    42,    43,    44,    98,    98,
      37,    38,    39,    40,    41,    42,    43,    44,    98,    98,
      98,    98,    98,    98,    98,    62,    63,    98,    98,    98,
      98,    98,    62,    70,    98,    62,    63,    98,    98,    98,
      98,    98,    98,    70,    98,   159,   144,   210,   185,    36,
     569,    88,    89,   746,    10,    92,    93,   234,    14,    -1,
      -1,    88,    89,    -1,    -1,    92,    93,    94,   105,    -1,
     107,   108,    99,    -1,    -1,    -1,    -1,    -1,   105,   271,
     107,    37,    38,    39,    40,    41,    42,    43,    44,    -1,
      -1,    -1,    10,    -1,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    37,
      38,    -1,    40,    41,    42,    43,    44,    -1,    -1,    -1,
      10,    -1,    88,    89,    14,    -1,    92,    93,    94,    -1,
      -1,    -1,    -1,    99,    62,    63,    -1,    -1,    -1,   105,
      -1,   107,    70,    -1,    -1,    -1,    -1,    37,    38,    -1,
      40,    41,    42,    43,    44,    -1,    -1,    -1,    10,    -1,
      88,    89,    14,    -1,    92,    93,    94,    -1,    -1,    -1,
      -1,    99,    62,    63,    -1,    -1,    -1,   105,    -1,   107,
      70,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    10,    -1,    88,    89,
      14,    -1,    92,    93,    94,    -1,    -1,    -1,    -1,    -1,
      62,    63,    -1,    -1,    -1,   105,   106,   107,    70,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    -1,    -1,    10,    87,    88,    89,    14,    -1,
      92,    93,    94,    -1,    -1,    -1,    -1,    -1,    62,    63,
      -1,    -1,    -1,   105,    -1,   107,    70,    -1,    -1,    -1,
      -1,    37,    38,    -1,    40,    41,    42,    43,    44,    -1,
      -1,    -1,    10,    -1,    88,    89,    14,    -1,    92,    93,
      94,    -1,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,
      -1,   105,    -1,   107,    70,    -1,    -1,    -1,    -1,    37,
      38,    -1,    40,    41,    42,    43,    44,    -1,    -1,    -1,
      10,    -1,    88,    89,    14,    -1,    92,    93,    94,    -1,
      -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,   105,
      -1,   107,    70,    -1,    -1,    -1,    -1,    37,    38,    -1,
      40,    41,    42,    43,    44,    -1,    -1,    -1,    10,    -1,
      88,    89,    14,    -1,    92,    93,    -1,    -1,    -1,    -1,
      98,    -1,    62,    63,    -1,    -1,    -1,   105,    -1,   107,
      70,    -1,    -1,    -1,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    10,    -1,    88,    89,
      14,    -1,    92,    93,    -1,    -1,    -1,    -1,    98,    -1,
      62,    63,    -1,    -1,    -1,   105,    -1,   107,    70,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    -1,    -1,    10,    -1,    88,    89,    14,    -1,
      92,    93,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,
      -1,    -1,    -1,   105,    -1,   107,    70,    -1,    -1,    -1,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    -1,
      -1,    -1,    10,    -1,    88,    89,    14,    -1,    92,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,
      -1,   105,    -1,   107,    70,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    -1,    -1,
      10,    -1,    88,    89,    14,    -1,    92,    93,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,   105,
      -1,   107,    70,    -1,    -1,    -1,    -1,    37,    38,    -1,
      40,    41,    42,    43,    44,    -1,    -1,    -1,    14,    -1,
      88,    89,    -1,    -1,    92,    93,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    63,    -1,    -1,    -1,   105,    -1,   107,
      70,    37,    38,    -1,    40,    41,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    14,    -1,    88,    89,
      -1,    -1,    92,    93,    -1,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,   105,    -1,   107,    -1,    37,
      38,    -1,    40,    41,    42,    43,    44,    -1,    -1,    -1,
      -1,    -1,    88,    89,    -1,    -1,    92,    93,    94,    -1,
      -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,   105,
      -1,   107,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      88,    89,    -1,    -1,    92,    93,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,   107
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,    12,    13,    57,    58,    59,   110,   111,
     112,   125,   133,   134,   197,   198,    43,   136,   137,   138,
      43,     5,    13,   125,     5,    12,   125,     0,     3,     5,
      12,    13,    97,   112,     6,    10,    14,    16,    18,    19,
      21,    24,    37,    38,    40,    41,    42,    43,    44,    46,
      50,    51,    52,    53,    62,    63,    69,    70,    71,    72,
      87,    88,    89,    92,    93,    94,   105,   107,   113,   114,
     116,   117,   118,   119,   121,   122,   123,   126,   127,   128,
     129,   130,   131,   132,   133,   141,   142,   143,   145,   146,
     147,   148,   151,   154,   155,   156,   158,   160,   161,   163,
     165,   167,   169,   171,   173,   175,   177,   178,   180,   181,
     182,   101,   139,    87,   135,    47,    88,    98,    43,     5,
     125,     5,    13,    43,     5,   125,     5,    12,    43,     5,
      13,     5,    12,   112,    14,   161,    12,    13,    43,   125,
     197,   156,   156,   165,   167,   191,    98,    43,   152,   156,
     191,   156,   193,   191,    43,   156,   165,    99,   156,   165,
     184,   106,   184,   178,   178,   167,   178,   108,   156,   196,
     155,   154,    97,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    54,   100,   120,   124,    87,   122,
       6,    87,   123,    16,     8,   157,     9,   159,    87,   123,
      10,    11,    20,    36,    49,    64,    66,    67,    90,    91,
     162,   164,   102,   166,   103,   168,   104,   170,    55,    61,
     172,    92,    93,   174,    65,    94,    95,    96,   176,    62,
      39,    88,    89,   101,   179,   185,    43,   101,   137,    87,
      43,    99,   136,    88,    98,    43,     5,    43,     5,    88,
      98,    43,     5,    43,     5,    88,    98,    43,     5,    43,
       5,    12,    13,    43,   125,    13,    43,   125,    12,    43,
     125,    88,   115,    12,    13,    43,    98,    98,    87,   190,
      87,   190,    20,   155,    87,   140,    87,    98,   150,    47,
      87,   192,   140,    19,    87,   183,   207,    87,   183,   207,
      99,   106,    87,    98,   195,   207,   108,   121,   193,   158,
     160,     8,   161,     9,    87,    20,    10,   164,   167,   169,
     102,   171,   103,   173,   104,   175,   175,    55,    61,   177,
     177,    92,    93,   178,   178,   178,   178,    65,    94,    95,
      96,   178,    39,    94,    99,   156,   199,   201,   204,   205,
      98,   156,   187,   188,    43,    39,   185,    43,   137,    98,
      99,    99,   136,    88,    98,    43,    88,    98,    43,    99,
     136,    88,    98,    43,    88,    98,    43,    99,   136,    88,
      98,    43,    88,    98,    43,    13,    43,   125,    12,    43,
     125,    12,    13,    43,    43,   125,   115,    13,    43,    43,
     125,   115,    12,    43,    99,   201,    23,    98,    13,    43,
      12,    43,   115,   155,   155,   165,   167,    87,    87,   193,
      22,    68,   149,   153,    43,    87,   152,   155,    87,    98,
     167,   156,    87,   191,   156,   165,    87,    87,   156,   156,
      87,   120,    15,   160,   161,   167,   169,   171,   173,   175,
     175,   177,   177,   178,   178,   178,   178,   156,   156,   100,
     207,    39,    94,   203,   204,   205,    99,    87,    98,   156,
     189,    98,   106,    87,   186,   178,    98,    98,    99,    99,
     136,    88,    98,    99,   136,    88,    98,    98,    99,    99,
     136,    88,    98,    99,   136,    88,    98,    98,    99,    99,
     136,    88,    98,    99,   136,    88,    98,    43,   125,    13,
      43,    43,   125,    12,    43,    13,    43,    12,    43,   115,
      43,    23,    98,    43,   115,   115,    43,    23,    98,    43,
     115,    99,   156,    43,   115,    43,   115,    23,    98,    15,
      17,   144,    15,   165,   167,    98,    98,   156,    15,    22,
     153,    98,    43,   152,   155,   192,    20,   156,   165,    87,
     194,   207,   156,   156,    87,   200,   202,   156,   156,   156,
     156,   204,    87,    87,   156,   189,   156,   189,   188,    87,
      98,    98,    99,    99,   136,    98,    99,    99,   136,    98,
      98,    99,    99,   136,    98,    99,    99,   136,    98,    98,
      99,    99,   136,    98,    99,    99,   136,    43,    43,    43,
      43,    43,    43,    23,    98,   115,   156,   115,    23,    98,
      23,    98,   115,   156,   115,    23,    98,    98,   115,    23,
      98,   115,    23,    98,   156,    98,   156,    15,    17,    98,
     155,   155,    47,    98,    98,    98,   155,   158,   156,    87,
      39,   204,   205,    87,   202,    87,    87,   200,   202,    87,
     189,   188,    98,    98,    99,    98,    98,    99,    98,    98,
      99,    98,    98,    99,    98,    98,    99,    98,    98,    99,
     156,    23,    98,    98,    23,    98,   156,   156,    23,    98,
      98,    23,    98,   156,    23,    98,   156,    23,    98,   156,
      98,   155,    98,    98,   156,   155,    15,    43,   155,   155,
     155,    16,   206,   207,   208,    98,   156,   156,    39,   205,
     204,    39,    87,   202,    98,    98,    98,    98,    98,    98,
      98,   156,   156,    98,    98,   156,   156,    98,   156,    98,
     156,    98,   155,   155,    98,    98,   158,   156,    98,   156,
     156,    39,    98,    98,    98,    98,    98,    98,   155,   155,
     206,   156,   156
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

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
        case 2:
/* Line 1792 of yacc.c  */
#line 109 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"file_input: program ENDMARKER\n";
										p->check_inhertance_list();
										if(!p->errRecovery->errQ->isEmpty())
												p->errRecovery->printErrQueue();
										p->print_symbol();
										Streams::verbose().flush();	
								}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 118 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"program : import_stmt ';' temp2 \n";}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 119 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"program : temp2 \n";}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 123 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"temp2: classdef temp2\n";}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 124 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"temp2: classdef \n";}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 138 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
							testfunction = p->finishFunctionDeclaration(testfunction,linefunc,colmfunc);
							parameters.clear();
							linefunc=0;colmfunc=0;
							Streams::verbose() <<"funcdef:	funcheader suite \n";
						  }
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 145 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"funcheader:	DEF  NAME parameters ARROW test ':'  \n";}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 146 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"funcheader:  DEF access NAME parameters ARROW test ':'  \n";}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 147 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
											testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,ff, (yyvsp[(2) - (4)].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
											Streams::verbose() <<"funcheader: DEF NAME parameters ':' \n";
											
									   }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 156 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    { 
												testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,ff, (yyvsp[(3) - (5)].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
												pp=true;ff=false;ss=false;pro=false;
												parameters.clear();
												linefunc=yylval.r.lineNum;
												colmfunc=yylval.r.colNum;
												Streams::verbose() <<"funcheader: DEF access NAME parameters ':' \n";
											  }
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 164 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"funcheader: DEF STATIC NAME parameters ARROW test ':' \n";}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 165 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"funcheader: DEF FINAL NAME parameters ARROW test ':' \n";}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 166 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
												testfunction = p->createTypeFunctionHeader(t,true,pp,pro,ff, (yyvsp[(3) - (5)].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
												pp=true;ff=false;ss=false;pro=false;
												parameters.clear();
												linefunc=yylval.r.lineNum;
												colmfunc=yylval.r.colNum;
												Streams::verbose() <<"funcheader: DEF STATIC NAME parameters ':' \n";
											 }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 174 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
												testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,true, (yyvsp[(3) - (5)].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
												pp=true;ff=false;ss=false;pro=false;
												parameters.clear();
												linefunc=yylval.r.lineNum;
												colmfunc=yylval.r.colNum;
												Streams::verbose() <<"funcheader: DEF FINAL NAME parameters ':' \n";
											 }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 182 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"funcheader: DEF STATIC FINAL NAME parameters ARROW test ':' \n";}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 183 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"funcheader: DEF FINAL STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 184 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
														testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (yyvsp[(4) - (6)].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
														pp=true;ff=false;ss=false;pro=false;
														parameters.clear();
														linefunc=yylval.r.lineNum;
														colmfunc=yylval.r.colNum;
														Streams::verbose() <<"funcheader: DEF STATIC FINAL NAME parameters ':'  \n";
												    }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 192 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
													testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (yyvsp[(4) - (6)].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
													pp=true;ff=false;ss=false;pro=false;
													parameters.clear();
													linefunc=yylval.r.lineNum;
													colmfunc=yylval.r.colNum;
													Streams::verbose() <<"funcheader: DEF FINAL STATIC NAME parameters ':'  \n";
													}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 200 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
																testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,true, (yyvsp[(4) - (8)].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
																pp=true;ff=false;ss=false;pro=false;
																parameters.clear();
																linefunc=yylval.r.lineNum;
																colmfunc=yylval.r.colNum;
																Streams::verbose() <<"funcheader: DEF FINAL access NAME parameters ARROW test ':'  \n";
															  }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 208 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"funcheader: DEF STATIC access NAME parameters ARROW test ':'  \n";}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 209 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
														testfunction = p->createTypeFunctionHeader(t,true,pp,pro,ff, (yyvsp[(4) - (6)].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
														pp=true;ff=false;ss=false;pro=false;
														parameters.clear();
														linefunc=yylval.r.lineNum;
														colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF STATIC access NAME parameters ':'  \n";
													}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 216 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
														testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,true, (yyvsp[(4) - (6)].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
														pp=true;ff=false;ss=false;pro=false;
														parameters.clear();
														linefunc=yylval.r.lineNum;
														colmfunc=yylval.r.colNum;
														Streams::verbose() <<"funcheader: DEF STATIC access NAME parameters ':' ";
													}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 224 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"funcheader: DEF STATIC FINAL access NAME parameters ARROW test ':'  \n";}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 225 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"funcheader: DEF FINAL STATIC access NAME parameters ARROW test ':'  \n";}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 226 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (yyvsp[(5) - (7)].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
															pp=true;ff=false;ss=false;pro=false;
															parameters.clear();
															linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;
															Streams::verbose() <<"funcheader: DEF STATIC FINAL access NAME parameters ':'  \n";
														  }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 234 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (yyvsp[(5) - (7)].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
															pp=true;ff=false;ss=false;pro=false;
															parameters.clear();
															linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF FINAL STATIC access NAME parameters ':'  \n";
														  }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 241 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"funcheader: DEF access STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 242 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"funcheader: DEF access FINAL NAME parameters ARROW test ':'  \n";}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 243 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
														testfunction = p->createTypeFunctionHeader(t,true,pp,pro,ff, (yyvsp[(4) - (6)].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
														pp=true;ff=false;ss=false;pro=false;
														parameters.clear();
														linefunc=yylval.r.lineNum;
														colmfunc=yylval.r.colNum;
														Streams::verbose() <<"funcheader: DEF access STATIC NAME parameters ':'  \n";
													}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 251 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
														testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,true, (yyvsp[(4) - (6)].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
														pp=true;ff=false;ss=false;pro=false;
														parameters.clear();
														linefunc=yylval.r.lineNum;
														colmfunc=yylval.r.colNum;
														Streams::verbose() <<"funcheader: DEF access FINAL NAME parameters ':'  \n";
													}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 259 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"funcheader: DEF access STATIC FINAL NAME parameters ARROW test ':'  \n";}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 260 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"funcheader: DEF access FINAL STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 261 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (yyvsp[(5) - (7)].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
															pp=true;ff=false;ss=false;pro=false;
															parameters.clear();
															linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;
															Streams::verbose() <<"funcheader: DEF access STATIC FINAL NAME parameters ':'  \n";
			   											  }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 269 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (yyvsp[(5) - (7)].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
															pp=true;ff=false;ss=false;pro=false;
															parameters.clear();
															linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF access FINAL STATIC NAME parameters ':'  \n";
			  											  }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 276 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"funcheader: DEF STATIC access FINAL NAME parameters ARROW test ':'  \n";}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 277 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"funcheader: DEF FINAL access STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 278 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (yyvsp[(5) - (7)].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
															pp=true;ff=false;ss=false;pro=false;
															parameters.clear();
															linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF STATIC access FINAL NAME parameters ':'  \n";
			  											  }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 285 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (yyvsp[(5) - (7)].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
															pp=true;ff=false;ss=false;pro=false;
															parameters.clear();
															linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF FINAL access STATIC NAME parameters ':'  \n";
														  }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 294 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"parameters:'(' arglist ')'\n";}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 295 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"parameters:'(' ')'\n";}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 298 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"stmt:	simple_stmt \n";}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 299 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"stmt: compound_stmt\n";}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 301 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"simple_stmt: small_stmt ';' \n";}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 303 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"small_stmt: expr_stmt \n";}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 304 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"small_stmt: del_stmt \n";}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 305 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"small_stmt: pass_stmt \n";}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 306 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"small_stmt: flow_stmt \n";}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 307 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"small_stmt: import_stmt \n";}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 308 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"small_stmt: global_stmt \n";}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 309 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"small_stmt: nonlocal_stmt \n";}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 310 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"small_stmt: print_stmt \n";}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 313 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"expr_stmt:	testlist_star_expr augassign testlist \n";}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 314 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"expr_stmt: testlist_star_expr \n";}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 315 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"expr_stmt: testlist_star_expr right_testlist \n";}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 318 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"right_testlist: '=' testlist_star_expr right_testlist \n";}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 319 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"right_testlist: '=' testlist_star_expr \n";}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 322 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"testlist_star_expr: comma_test_star_seqJ \n";}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 323 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"testlist_star_expr: comma_test_star_seqJ ',' \n";}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 324 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"',' \n";}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 325 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"testlist_star_expr: test comma_test_star_seqJ \n";}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 326 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"testlist_star_expr: test \n";}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 327 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"testlist_star_expr: star_expr comma_test_star_seqJ ',' \n";}
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 328 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"testlist_star_expr: star_expr ',' \n";}
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 331 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comma_test_star : ',' test \n";}
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 332 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comma_test_star : ',' star_expr \n";}
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 335 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comma_test_star_seqJ : comma_test_star_seqJ comma_test_star \n";}
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 336 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comma_test_star_seqJ : comma_test_star \n";}
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 338 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"augassign:	PLUS_EQUAL \n";}
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 339 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"augassign:	MINUS_EQUAL \n";}
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 340 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"augassign:	STAR_EQUAL \n";}
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 341 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"augassign:	DIV_EQUAL \n";}
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 342 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"augassign:	MOD_EQUAL \n";}
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 343 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"augassign:	AND_EQUAL \n";}
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 344 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"augassign:	OR_EQUAL \n";}
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 345 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"augassign:	SHAPOO_EQUAL \n";}
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 346 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"augassign:	LESS_THAN_2_EQUAL \n";}
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 347 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"augassign:	MORE_THAN_2_EQUAL \n";}
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 348 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"augassign:	STAR_2_EQUAL \n";}
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 349 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"augassign:	DIV_2_EQUAL \n";}
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 352 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose()<<"access_modef: PRIVATE\n";acc_mod="private";pp=true;}
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 353 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {pp=false;Streams::verbose()<<"access_modef:	PUBLIC\n";acc_mod="public";pp=false;}
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 354 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {pro=true;Streams::verbose()<<"access_modef:	PROTECTED\n";acc_mod="protected";}
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 356 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"print_stmt: PRINT exprlist \n";}
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 357 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"del_stmt:   DEL exprlist \n";}
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 360 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"pass_stmt:	PASS \n";}
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 363 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"flow_stmt:	break_stmt \n";}
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 364 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"flow_stmt: continue_stmt\n";}
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 365 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"flow_stmt: return_stmt\n";}
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 368 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"break_stmt: BREAK \n";}
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 371 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"continue_stmt:	CONTINUE \n";}
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 374 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"return_stmt:	RETURN testlist \n";}
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 375 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"return_stmt:	RETURN \n";}
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 379 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"import_stmt: import_name \n";}
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 382 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"import_name: IMPORT dotted_as_names \n";}
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 385 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comma_dotted_as_name_seq: ',' dotted_as_name \n";}
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 386 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comma_dotted_as_name_seq: comma_dotted_as_name_seq ',' dotted_as_name \n";}
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 388 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
									Streams::verbose() <<"comma_dotted_as_name_seq: dotted_as_names: dotted_as_name \n";
									t_id=new char[10];
									strcpy(t_id,temp_id.c_str());
									inhertance_list.push_back(t_id);
									temp_id="";
								}
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 395 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
															Streams::verbose() <<"comma_dotted_as_name_seq: dotted_as_name comma_dotted_as_name_seq \n";
															t_id=new char[10];
															strcpy(t_id,temp_id.c_str());
															inhertance_list.push_back(t_id);
															temp_id="";
														  }
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 405 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"dotted_as_name: dotted_name \n";}
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 406 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"dotted_as_name: dotted_name AS NAME\n";}
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 409 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"dotted_name: NAME \n"; temp_id=temp_id+(yyvsp[(1) - (1)].r.strVal);}
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 410 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"dotted_name: NAME dotted_name_seq \n";}
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 413 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
							Streams::verbose() <<"dotted_name_seq: '.' NAME \n";
							temp_id=temp_id+"."+(yyvsp[(2) - (2)].r.strVal);
						  }
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 417 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
												Streams::verbose() <<"dotted_name_seq: dotted_name_seq '.' NAME \n";
												temp_id=temp_id+"."+(yyvsp[(3) - (3)].r.strVal);
						   				   }
    break;

  case 106:
/* Line 1792 of yacc.c  */
#line 423 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comma_name_seq :	',' NAME \n";}
    break;

  case 107:
/* Line 1792 of yacc.c  */
#line 424 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comma_name_seq :	comma_name_seq ',' NAME \n";}
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 427 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"global_stmt: GLOBAL NAME \n";}
    break;

  case 109:
/* Line 1792 of yacc.c  */
#line 428 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"global_stmt: GLOBAL NAME comma_name_seq\n";}
    break;

  case 110:
/* Line 1792 of yacc.c  */
#line 431 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"nonlocal_stmt:	NONLOCAL NAME \n";}
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 432 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"nonlocal_stmt: NONLOCAL NAME comma_name_seq \n";}
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 435 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"compound_stmt:  if_stmt \n";}
    break;

  case 113:
/* Line 1792 of yacc.c  */
#line 436 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"compound_stmt: while_stmt\n";}
    break;

  case 114:
/* Line 1792 of yacc.c  */
#line 437 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"compound_stmt: for_stmt\n";}
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 438 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"compound_stmt: try_stmt\n";}
    break;

  case 116:
/* Line 1792 of yacc.c  */
#line 439 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"compound_stmt: with_stmt\n";}
    break;

  case 117:
/* Line 1792 of yacc.c  */
#line 440 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"compound_stmt: funcdef\n";}
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 441 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"compound_stmt: DEF classdef\n";}
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 444 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"elif_seq :  ELIF test ':' suite \n";}
    break;

  case 120:
/* Line 1792 of yacc.c  */
#line 445 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"elif_seq : elif_seq ELIF test ':' suite \n";}
    break;

  case 121:
/* Line 1792 of yacc.c  */
#line 448 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"if_stmt:	IF test ':' suite \n";}
    break;

  case 122:
/* Line 1792 of yacc.c  */
#line 449 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"if_stmt:	IF test ':' suite elif_seq \n";}
    break;

  case 123:
/* Line 1792 of yacc.c  */
#line 450 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"if_stmt:	IF test ':' suite ELSE ':' suite \n";}
    break;

  case 124:
/* Line 1792 of yacc.c  */
#line 451 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"if_stmt:	IF test ':' suite elif_seq ELSE ':' suite \n";}
    break;

  case 125:
/* Line 1792 of yacc.c  */
#line 454 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"while_stmt: WHILE test ':' suite \n";}
    break;

  case 126:
/* Line 1792 of yacc.c  */
#line 455 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"while_stmt:  WHILE test ':' suite ELSE ':' suite \n";}
    break;

  case 127:
/* Line 1792 of yacc.c  */
#line 458 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"for_stmt:   FOR exprlist IN testlist ':' suite \n";}
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 459 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"for_stmt:  FOR exprlist IN testlist ':' suite ELSE ':' suite\n";}
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 462 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<" try_stmt:   TRY ':' suite try_except_cla_seq\n";}
    break;

  case 130:
/* Line 1792 of yacc.c  */
#line 463 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<" try_stmt: TRY ':' suite try_except_cla_seq ELSE ':' suite\n";}
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 464 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"try_stmt:  TRY ':' suite try_except_cla_seq FINALLY ':' suite\n";}
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 465 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"try_stmt:  TRY ':' suite FINALLY ':' suite\n";}
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 468 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"try_except_cla_seq: except_clause ':' suite \n";}
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 469 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"try_except_cla_seq: try_except_cla_seq except_clause ':' suite\n";}
    break;

  case 135:
/* Line 1792 of yacc.c  */
#line 472 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"with_seq:	',' with_item \n";}
    break;

  case 136:
/* Line 1792 of yacc.c  */
#line 473 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"with_seq: with_seq ',' with_item\n";}
    break;

  case 137:
/* Line 1792 of yacc.c  */
#line 476 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"with_stmt:  WITH with_item ':' suite \n";}
    break;

  case 138:
/* Line 1792 of yacc.c  */
#line 477 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"with_stmt: WITH with_item with_seq ':' suite\n";}
    break;

  case 139:
/* Line 1792 of yacc.c  */
#line 480 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<" with_item:  test\n";}
    break;

  case 140:
/* Line 1792 of yacc.c  */
#line 481 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"with_item: test AS expr\n";}
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 484 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"except_clause:  EXCEPT \n";}
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 485 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"except_clause:  EXCEPT test\n";}
    break;

  case 143:
/* Line 1792 of yacc.c  */
#line 486 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"except_clause:  EXCEPT test AS NAME\n";}
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 489 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams:: verbose() <<"list_stmt : stmt\n";}
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 490 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams:: verbose() <<"list_stmt : stmt list_stmt\n";}
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 493 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"suite:	list_stmt END\n";}
    break;

  case 147:
/* Line 1792 of yacc.c  */
#line 494 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"suite:	END\n";}
    break;

  case 148:
/* Line 1792 of yacc.c  */
#line 497 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"test:	or_test\n";}
    break;

  case 149:
/* Line 1792 of yacc.c  */
#line 498 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"or_test IF or_test ELSE test\n";}
    break;

  case 150:
/* Line 1792 of yacc.c  */
#line 501 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"or_seq:	OR and_test \n";}
    break;

  case 151:
/* Line 1792 of yacc.c  */
#line 502 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"or_seq: or_seq OR and_test \n";}
    break;

  case 152:
/* Line 1792 of yacc.c  */
#line 505 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"or_test:	and_test\n";}
    break;

  case 153:
/* Line 1792 of yacc.c  */
#line 506 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"or_test:	and_test or_seq\n";}
    break;

  case 154:
/* Line 1792 of yacc.c  */
#line 509 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"and_seq: AND not_test \n";}
    break;

  case 155:
/* Line 1792 of yacc.c  */
#line 510 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"and_seq: and_seq AND not_test \n";}
    break;

  case 156:
/* Line 1792 of yacc.c  */
#line 513 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"and_test:	not_test\n";}
    break;

  case 157:
/* Line 1792 of yacc.c  */
#line 514 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"and_test: not_test and_seq \n";}
    break;

  case 158:
/* Line 1792 of yacc.c  */
#line 517 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"not_test:	NOT not_test\n";}
    break;

  case 159:
/* Line 1792 of yacc.c  */
#line 518 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"not_test:	comparison\n";}
    break;

  case 160:
/* Line 1792 of yacc.c  */
#line 521 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comp_op_seq: comp_op expr \n";}
    break;

  case 161:
/* Line 1792 of yacc.c  */
#line 522 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comp_op_seq: comp_op_seq comp_op expr \n";}
    break;

  case 162:
/* Line 1792 of yacc.c  */
#line 525 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comparison: expr\n";}
    break;

  case 163:
/* Line 1792 of yacc.c  */
#line 526 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comparison: expr comp_op_seq\n";}
    break;

  case 164:
/* Line 1792 of yacc.c  */
#line 529 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comp_op: '<' \n";}
    break;

  case 165:
/* Line 1792 of yacc.c  */
#line 530 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comp_op: '>' \n";}
    break;

  case 166:
/* Line 1792 of yacc.c  */
#line 531 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comp_op: EQUAL \n";}
    break;

  case 167:
/* Line 1792 of yacc.c  */
#line 532 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comp_op: MORE_OR_EQUAL \n";}
    break;

  case 168:
/* Line 1792 of yacc.c  */
#line 533 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comp_op: LESS_OR_EQUAL \n";}
    break;

  case 169:
/* Line 1792 of yacc.c  */
#line 534 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comp_op: MORE_LESS \n";}
    break;

  case 170:
/* Line 1792 of yacc.c  */
#line 535 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comp_op: NOT_EQUAL \n";}
    break;

  case 171:
/* Line 1792 of yacc.c  */
#line 536 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comp_op: IN \n";}
    break;

  case 172:
/* Line 1792 of yacc.c  */
#line 537 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comp_op: NOT IN \n";}
    break;

  case 173:
/* Line 1792 of yacc.c  */
#line 538 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comp_op: IS \n";}
    break;

  case 174:
/* Line 1792 of yacc.c  */
#line 539 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comp_op: IS NOT \n";}
    break;

  case 175:
/* Line 1792 of yacc.c  */
#line 542 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"star_expr: '*' expr \n";}
    break;

  case 176:
/* Line 1792 of yacc.c  */
#line 545 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"or_xor_expr_seq: '|' xor_expr \n";}
    break;

  case 177:
/* Line 1792 of yacc.c  */
#line 546 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"or_xor_expr_seq: or_xor_expr_seq '|' xor_expr\n";}
    break;

  case 178:
/* Line 1792 of yacc.c  */
#line 548 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"expr: xor_expr\n";}
    break;

  case 179:
/* Line 1792 of yacc.c  */
#line 549 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"expr: xor_expr or_xor_expr_seq\n";}
    break;

  case 180:
/* Line 1792 of yacc.c  */
#line 552 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"sha_and_expr_seq: '^' and_expr \n";}
    break;

  case 181:
/* Line 1792 of yacc.c  */
#line 553 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"sha_and_expr_seq: sha_and_expr_seq '^' and_expr\n";}
    break;

  case 182:
/* Line 1792 of yacc.c  */
#line 556 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"xor_expr: and_expr\n";}
    break;

  case 183:
/* Line 1792 of yacc.c  */
#line 557 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"xor_expr: and_expr sha_and_expr_seq\n";}
    break;

  case 184:
/* Line 1792 of yacc.c  */
#line 560 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"and_shift_expr_seq: '&' shift_expr \n";}
    break;

  case 185:
/* Line 1792 of yacc.c  */
#line 561 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"and_shift_expr_seq: and_shift_expr_seq '&' shift_expr\n";}
    break;

  case 186:
/* Line 1792 of yacc.c  */
#line 564 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"and_expr: shift_expr\n";}
    break;

  case 187:
/* Line 1792 of yacc.c  */
#line 565 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"and_expr: shift_expr and_shift_expr_seq\n";}
    break;

  case 188:
/* Line 1792 of yacc.c  */
#line 568 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"arith_seq:	LESS_THAN_2 arith_expr \n";}
    break;

  case 189:
/* Line 1792 of yacc.c  */
#line 569 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"arith_seq:	MORE_THAN_2 arith_expr \n";}
    break;

  case 190:
/* Line 1792 of yacc.c  */
#line 570 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"arith_seq:	arith_seq LESS_THAN_2 arith_expr \n";}
    break;

  case 191:
/* Line 1792 of yacc.c  */
#line 571 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"arith_seq:	arith_seq MORE_THAN_2 arith_expr \n";}
    break;

  case 192:
/* Line 1792 of yacc.c  */
#line 574 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"shift_expr: arith_expr\n";}
    break;

  case 193:
/* Line 1792 of yacc.c  */
#line 575 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"shift_expr: arith_expr arith_seq\n";}
    break;

  case 194:
/* Line 1792 of yacc.c  */
#line 578 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"term_seq : '+' term \n";}
    break;

  case 195:
/* Line 1792 of yacc.c  */
#line 579 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"term_seq : '-' term \n";}
    break;

  case 196:
/* Line 1792 of yacc.c  */
#line 580 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"term_seq : term_seq '+' term \n";}
    break;

  case 197:
/* Line 1792 of yacc.c  */
#line 581 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"term_seq : term_seq '-' term \n";}
    break;

  case 198:
/* Line 1792 of yacc.c  */
#line 584 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"arith_expr: term\n";}
    break;

  case 199:
/* Line 1792 of yacc.c  */
#line 585 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"arith_expr: term term_seq\n";}
    break;

  case 200:
/* Line 1792 of yacc.c  */
#line 588 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"factor_seq: '*' factor \n";}
    break;

  case 201:
/* Line 1792 of yacc.c  */
#line 589 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"factor_seq: '/' factor \n";}
    break;

  case 202:
/* Line 1792 of yacc.c  */
#line 590 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"factor_seq: '%' factor \n";}
    break;

  case 203:
/* Line 1792 of yacc.c  */
#line 591 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"factor_seq: DIV_2 factor \n";}
    break;

  case 204:
/* Line 1792 of yacc.c  */
#line 592 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"factor_seq: factor_seq '*' factor \n";}
    break;

  case 205:
/* Line 1792 of yacc.c  */
#line 593 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"factor_seq: factor_seq '/' factor \n";}
    break;

  case 206:
/* Line 1792 of yacc.c  */
#line 594 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"factor_seq: factor_seq '%' factor \n";}
    break;

  case 207:
/* Line 1792 of yacc.c  */
#line 595 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"factor_seq: factor_seq DIV_2 factor \n";}
    break;

  case 208:
/* Line 1792 of yacc.c  */
#line 598 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"term: 	factor\n";}
    break;

  case 209:
/* Line 1792 of yacc.c  */
#line 599 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"term: 	factor factor_seq\n";}
    break;

  case 210:
/* Line 1792 of yacc.c  */
#line 602 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"factor: '+' factor \n";}
    break;

  case 211:
/* Line 1792 of yacc.c  */
#line 603 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"factor: '-' factor \n";}
    break;

  case 212:
/* Line 1792 of yacc.c  */
#line 604 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"factor: '~' factor \n";}
    break;

  case 213:
/* Line 1792 of yacc.c  */
#line 605 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"factor: power\n";}
    break;

  case 214:
/* Line 1792 of yacc.c  */
#line 608 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"trailer_seq: trailer \n";}
    break;

  case 215:
/* Line 1792 of yacc.c  */
#line 609 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"trailer_seq: trailer_seq trailer \n";}
    break;

  case 216:
/* Line 1792 of yacc.c  */
#line 612 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"power:	atom\n";}
    break;

  case 217:
/* Line 1792 of yacc.c  */
#line 613 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"power: atom trailer_seq \n";}
    break;

  case 218:
/* Line 1792 of yacc.c  */
#line 614 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"power: atom trailer_seq STAR_2 factor \n";}
    break;

  case 219:
/* Line 1792 of yacc.c  */
#line 615 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"power: atom STAR_2 factor \n";}
    break;

  case 220:
/* Line 1792 of yacc.c  */
#line 618 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"str_seq:	STRING \n";}
    break;

  case 221:
/* Line 1792 of yacc.c  */
#line 619 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"str_seq:	str_seq STRING \n";}
    break;

  case 222:
/* Line 1792 of yacc.c  */
#line 622 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"atom:	'(' ')' \n";}
    break;

  case 223:
/* Line 1792 of yacc.c  */
#line 623 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"atom:	'(' testlist_comp ')' \n";}
    break;

  case 224:
/* Line 1792 of yacc.c  */
#line 624 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"atom:	'[' ']' \n";}
    break;

  case 225:
/* Line 1792 of yacc.c  */
#line 625 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"atom: '{' '}' \n";}
    break;

  case 226:
/* Line 1792 of yacc.c  */
#line 626 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"atom: '{' '}' \n";}
    break;

  case 227:
/* Line 1792 of yacc.c  */
#line 627 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"atom: '{' dictorsetmaker '}' \n";}
    break;

  case 228:
/* Line 1792 of yacc.c  */
#line 628 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    { Streams::verbose() <<"atom: NAME\n";}
    break;

  case 229:
/* Line 1792 of yacc.c  */
#line 629 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"atom: DEF NAME\n";}
    break;

  case 230:
/* Line 1792 of yacc.c  */
#line 630 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"atom: DEF access NAME\n";}
    break;

  case 231:
/* Line 1792 of yacc.c  */
#line 631 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"atom: DEF STATIC NAME\n";}
    break;

  case 232:
/* Line 1792 of yacc.c  */
#line 632 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"atom: DEF FINAL NAME\n";}
    break;

  case 233:
/* Line 1792 of yacc.c  */
#line 633 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"atom: DEF STATIC FINAL NAME\n";}
    break;

  case 234:
/* Line 1792 of yacc.c  */
#line 634 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"atom: DEF FINAL STATIC NAME\n";}
    break;

  case 235:
/* Line 1792 of yacc.c  */
#line 635 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"atom: DEF STATIC access NAME\n";}
    break;

  case 236:
/* Line 1792 of yacc.c  */
#line 636 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"atom: DEF FINAL access NAME\n";}
    break;

  case 237:
/* Line 1792 of yacc.c  */
#line 637 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"atom: DEF STATIC FINAL access NAME\n";}
    break;

  case 238:
/* Line 1792 of yacc.c  */
#line 638 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"atom: DEF FINAL STATIC access NAME\n";}
    break;

  case 239:
/* Line 1792 of yacc.c  */
#line 639 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"atom: DEF access STATIC NAME\n";}
    break;

  case 240:
/* Line 1792 of yacc.c  */
#line 640 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"atom: DEF access FINAL NAME\n";}
    break;

  case 241:
/* Line 1792 of yacc.c  */
#line 641 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"atom: DEF access STATIC FINAL NAME\n";}
    break;

  case 242:
/* Line 1792 of yacc.c  */
#line 642 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"atom: DEF access FINAL STATIC NAME\n";}
    break;

  case 243:
/* Line 1792 of yacc.c  */
#line 643 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"atom: DEF STATIC access FINAL NAME\n";}
    break;

  case 244:
/* Line 1792 of yacc.c  */
#line 644 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"atom: DEF FINAL access STATIC NAME\n";}
    break;

  case 245:
/* Line 1792 of yacc.c  */
#line 645 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"atom: NUMBER_INT\n";}
    break;

  case 246:
/* Line 1792 of yacc.c  */
#line 646 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"atom: NUMBER_FLOAT\n";}
    break;

  case 247:
/* Line 1792 of yacc.c  */
#line 647 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"atom: NUMBER_FLOAT\n";}
    break;

  case 248:
/* Line 1792 of yacc.c  */
#line 648 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"atom: CHAR_VALUE\n";}
    break;

  case 249:
/* Line 1792 of yacc.c  */
#line 649 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"atom: str_seq\n";}
    break;

  case 250:
/* Line 1792 of yacc.c  */
#line 650 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"atom: DOT_3\n";}
    break;

  case 251:
/* Line 1792 of yacc.c  */
#line 651 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"atom: NONE\n";}
    break;

  case 252:
/* Line 1792 of yacc.c  */
#line 652 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"atom: TRUE\n";}
    break;

  case 253:
/* Line 1792 of yacc.c  */
#line 653 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"atom: FALSE\n";}
    break;

  case 254:
/* Line 1792 of yacc.c  */
#line 656 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comma_test_star_seq: ',' test\n";}
    break;

  case 255:
/* Line 1792 of yacc.c  */
#line 657 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comma_test_star_seq: ',' star_expr\n";}
    break;

  case 256:
/* Line 1792 of yacc.c  */
#line 658 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comma_test_star_seq: comma_test_star_seq ',' test\n";}
    break;

  case 257:
/* Line 1792 of yacc.c  */
#line 659 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comma_test_star_seq: comma_test_star_seq ',' star_expr\n";}
    break;

  case 258:
/* Line 1792 of yacc.c  */
#line 662 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"testlist_comp: test comp_for\n";}
    break;

  case 259:
/* Line 1792 of yacc.c  */
#line 663 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"testlist_comp: test\n";}
    break;

  case 260:
/* Line 1792 of yacc.c  */
#line 664 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"testlist_comp: test   comma_test_star_seq\n";}
    break;

  case 261:
/* Line 1792 of yacc.c  */
#line 665 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 262:
/* Line 1792 of yacc.c  */
#line 666 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 263:
/* Line 1792 of yacc.c  */
#line 667 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 264:
/* Line 1792 of yacc.c  */
#line 668 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 265:
/* Line 1792 of yacc.c  */
#line 669 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 266:
/* Line 1792 of yacc.c  */
#line 670 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 267:
/* Line 1792 of yacc.c  */
#line 671 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 268:
/* Line 1792 of yacc.c  */
#line 674 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"trailer:	'('  ')'\n";}
    break;

  case 269:
/* Line 1792 of yacc.c  */
#line 675 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"trailer:	'(' arglist ')'\n";}
    break;

  case 270:
/* Line 1792 of yacc.c  */
#line 676 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"trailer:	'[' subscriptlist ']'\n";}
    break;

  case 271:
/* Line 1792 of yacc.c  */
#line 677 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"trailer:	'.' NAME\n";}
    break;

  case 272:
/* Line 1792 of yacc.c  */
#line 680 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comma_subscript_seq: ',' subscript\n";}
    break;

  case 273:
/* Line 1792 of yacc.c  */
#line 681 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comma_subscript_seq: comma_subscript_seq ',' subscript\n";}
    break;

  case 274:
/* Line 1792 of yacc.c  */
#line 684 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"subscriptlist:	subscript\n";}
    break;

  case 275:
/* Line 1792 of yacc.c  */
#line 685 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"subscriptlist:	subscript comma_subscript_seq\n";}
    break;

  case 276:
/* Line 1792 of yacc.c  */
#line 686 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"subscriptlist:	subscript  ','\n";}
    break;

  case 277:
/* Line 1792 of yacc.c  */
#line 687 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"subscriptlist:	subscript comma_subscript_seq ','\n";}
    break;

  case 278:
/* Line 1792 of yacc.c  */
#line 690 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"subscript:  test\n";}
    break;

  case 279:
/* Line 1792 of yacc.c  */
#line 691 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"subscript:  ':'\n";}
    break;

  case 280:
/* Line 1792 of yacc.c  */
#line 692 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"subscript: test ':'\n";}
    break;

  case 281:
/* Line 1792 of yacc.c  */
#line 693 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"subscript:  test ':' test\n";}
    break;

  case 282:
/* Line 1792 of yacc.c  */
#line 694 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"subscript:  test ':' sliceop\n";}
    break;

  case 283:
/* Line 1792 of yacc.c  */
#line 695 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"subscript:  test ':' test sliceop\n";}
    break;

  case 284:
/* Line 1792 of yacc.c  */
#line 696 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"subscript:  ':' test\n";}
    break;

  case 285:
/* Line 1792 of yacc.c  */
#line 697 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"subscript:  ':' sliceop\n";}
    break;

  case 286:
/* Line 1792 of yacc.c  */
#line 698 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"subscript:  ':' test sliceop\n";}
    break;

  case 287:
/* Line 1792 of yacc.c  */
#line 701 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"sliceop: ':'\n";}
    break;

  case 288:
/* Line 1792 of yacc.c  */
#line 702 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"sliceop: ':' test\n";}
    break;

  case 289:
/* Line 1792 of yacc.c  */
#line 705 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	',' expr \n";}
    break;

  case 290:
/* Line 1792 of yacc.c  */
#line 706 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	',' star_expr \n";}
    break;

  case 291:
/* Line 1792 of yacc.c  */
#line 707 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	comma_expr_star_seq ',' expr \n";}
    break;

  case 292:
/* Line 1792 of yacc.c  */
#line 708 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	comma_expr_star_seq ',' star_expr \n";}
    break;

  case 293:
/* Line 1792 of yacc.c  */
#line 711 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"exprlist: 	expr \n";}
    break;

  case 294:
/* Line 1792 of yacc.c  */
#line 712 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"exprlist: 	expr comma_expr_star_seq \n";}
    break;

  case 295:
/* Line 1792 of yacc.c  */
#line 713 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"exprlist: 	star_expr \n";}
    break;

  case 296:
/* Line 1792 of yacc.c  */
#line 714 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"exprlist: 	star_expr comma_expr_star_seq \n";}
    break;

  case 297:
/* Line 1792 of yacc.c  */
#line 715 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"exprlist: 	expr ',' \n";}
    break;

  case 298:
/* Line 1792 of yacc.c  */
#line 716 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"exprlist: 	expr comma_expr_star_seq ',' \n";}
    break;

  case 299:
/* Line 1792 of yacc.c  */
#line 717 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"exprlist: 	star_expr ',' \n";}
    break;

  case 300:
/* Line 1792 of yacc.c  */
#line 718 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"exprlist: 	star_expr  comma_expr_star_seq ',' \n";}
    break;

  case 301:
/* Line 1792 of yacc.c  */
#line 721 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comma_test: ',' test \n";}
    break;

  case 302:
/* Line 1792 of yacc.c  */
#line 722 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"',' test comma_test \n";}
    break;

  case 303:
/* Line 1792 of yacc.c  */
#line 725 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"testlist:	test \n";}
    break;

  case 304:
/* Line 1792 of yacc.c  */
#line 726 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"testlist:	test comma_test \n";}
    break;

  case 305:
/* Line 1792 of yacc.c  */
#line 727 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"testlist:	 test ','\n";}
    break;

  case 306:
/* Line 1792 of yacc.c  */
#line 728 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"testlist:	 test comma_test ','\n";}
    break;

  case 307:
/* Line 1792 of yacc.c  */
#line 731 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comma_test_colon_test_seq:  ',' test ':' test \n";}
    break;

  case 308:
/* Line 1792 of yacc.c  */
#line 732 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comma_test_colon_test_seq: comma_test_colon_test_seq ',' test ':' test\n";}
    break;

  case 309:
/* Line 1792 of yacc.c  */
#line 734 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comma_test_seq: ',' test \n";}
    break;

  case 310:
/* Line 1792 of yacc.c  */
#line 735 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comma_test_seq: comma_test_seq ',' test \n";}
    break;

  case 311:
/* Line 1792 of yacc.c  */
#line 738 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comp_for \n";}
    break;

  case 312:
/* Line 1792 of yacc.c  */
#line 739 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test \n";}
    break;

  case 313:
/* Line 1792 of yacc.c  */
#line 740 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test ',' \n";}
    break;

  case 314:
/* Line 1792 of yacc.c  */
#line 741 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comma_test_colon_test_seq \n";}
    break;

  case 315:
/* Line 1792 of yacc.c  */
#line 742 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comma_test_colon_test_seq ','\n";}
    break;

  case 316:
/* Line 1792 of yacc.c  */
#line 743 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"dictorsetmaker: test comp_for\n";}
    break;

  case 317:
/* Line 1792 of yacc.c  */
#line 744 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"dictorsetmaker: test\n";}
    break;

  case 318:
/* Line 1792 of yacc.c  */
#line 745 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"dictorsetmaker: test ','\n";}
    break;

  case 319:
/* Line 1792 of yacc.c  */
#line 746 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"dictorsetmaker: test ','\n";}
    break;

  case 320:
/* Line 1792 of yacc.c  */
#line 747 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"dictorsetmaker: test comma_test_seq ','\n";}
    break;

  case 321:
/* Line 1792 of yacc.c  */
#line 749 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
								Streams::verbose() <<"classdef: classheader suite\n";
								(yyval.type)=p->finishTypeDeclaration(t);
							}
    break;

  case 322:
/* Line 1792 of yacc.c  */
#line 754 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
								Streams::verbose() << "class_h: CLASS ID \n";
								colonStack.push(new ColonStack((yyvsp[(1) - (3)].r.lineNum),(yyvsp[(2) - (3)].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[(2) - (3)].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
							 }
    break;

  case 323:
/* Line 1792 of yacc.c  */
#line 761 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
									Streams::verbose() << "class_h: access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[(1) - (4)].r.lineNum),(yyvsp[(2) - (4)].r.colNum)+1));
									(yyval.type)=p->createType((yyvsp[(3) - (4)].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
									t=(yyval.type);
									inhertance_list.clear();
									acc_mod="";
								  }
    break;

  case 324:
/* Line 1792 of yacc.c  */
#line 768 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
									Streams::verbose() << "class_h: STATIC CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[(1) - (4)].r.lineNum),(yyvsp[(2) - (4)].r.colNum)+1));
									(yyval.type)=p->createType((yyvsp[(3) - (4)].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
									t=(yyval.type);
									inhertance_list.clear();
									acc_mod="";
								  }
    break;

  case 325:
/* Line 1792 of yacc.c  */
#line 775 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
									Streams::verbose() << "class_h: FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[(1) - (4)].r.lineNum),(yyvsp[(2) - (4)].r.colNum)+1));
									(yyval.type)=p->createType((yyvsp[(3) - (4)].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
									t=(yyval.type);
									inhertance_list.clear();
									acc_mod="";
								 }
    break;

  case 326:
/* Line 1792 of yacc.c  */
#line 782 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
											Streams::verbose() << "class_h: STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[(1) - (5)].r.lineNum),(yyvsp[(2) - (5)].r.colNum)+1));
											(yyval.type)=p->createType((yyvsp[(4) - (5)].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
											t=(yyval.type);
											inhertance_list.clear();
											acc_mod="";
										 }
    break;

  case 327:
/* Line 1792 of yacc.c  */
#line 789 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
												Streams::verbose() << "class_h: STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[(1) - (5)].r.lineNum),(yyvsp[(2) - (5)].r.colNum)+1));
												(yyval.type)=p->createType((yyvsp[(4) - (5)].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
												t=(yyval.type);
												inhertance_list.clear();
												acc_mod="";
											}
    break;

  case 328:
/* Line 1792 of yacc.c  */
#line 796 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
											Streams::verbose() << "class_h: FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[(1) - (5)].r.lineNum),(yyvsp[(2) - (5)].r.colNum)+1));
											(yyval.type)=p->createType((yyvsp[(4) - (5)].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
											t=(yyval.type);
											inhertance_list.clear();
											acc_mod="";
										}
    break;

  case 329:
/* Line 1792 of yacc.c  */
#line 803 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
											Streams::verbose() << "class_h: STATIC access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[(1) - (5)].r.lineNum),(yyvsp[(2) - (5)].r.colNum)+1));
											(yyval.type)=p->createType((yyvsp[(4) - (5)].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
											t=(yyval.type);
											inhertance_list.clear();
											acc_mod="";
										 }
    break;

  case 330:
/* Line 1792 of yacc.c  */
#line 810 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[(1) - (6)].r.lineNum),(yyvsp[(2) - (6)].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[(5) - (6)].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											   }
    break;

  case 331:
/* Line 1792 of yacc.c  */
#line 817 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[(1) - (6)].r.lineNum),(yyvsp[(2) - (6)].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[(5) - (6)].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											   }
    break;

  case 332:
/* Line 1792 of yacc.c  */
#line 824 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
											Streams::verbose() << "class_h: access_modef STATIC CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[(1) - (5)].r.lineNum),(yyvsp[(2) - (5)].r.colNum)+1));
											(yyval.type)=p->createType((yyvsp[(4) - (5)].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
											t=(yyval.type);
											inhertance_list.clear();
											acc_mod="";
										 }
    break;

  case 333:
/* Line 1792 of yacc.c  */
#line 831 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
											Streams::verbose() << "class_h: access_modef FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[(1) - (5)].r.lineNum),(yyvsp[(2) - (5)].r.colNum)+1));
											(yyval.type)=p->createType((yyvsp[(4) - (5)].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
											t=(yyval.type);
											inhertance_list.clear();
											acc_mod="";
										}
    break;

  case 334:
/* Line 1792 of yacc.c  */
#line 838 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[(1) - (6)].r.lineNum),(yyvsp[(2) - (6)].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[(5) - (6)].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											   }
    break;

  case 335:
/* Line 1792 of yacc.c  */
#line 845 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[(1) - (6)].r.lineNum),(yyvsp[(2) - (6)].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[(5) - (6)].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											   }
    break;

  case 336:
/* Line 1792 of yacc.c  */
#line 852 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[(1) - (6)].r.lineNum),(yyvsp[(2) - (6)].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[(5) - (6)].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											   }
    break;

  case 337:
/* Line 1792 of yacc.c  */
#line 859 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[(1) - (6)].r.lineNum),(yyvsp[(2) - (6)].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[(5) - (6)].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
												}
    break;

  case 338:
/* Line 1792 of yacc.c  */
#line 866 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
										Streams::verbose() << "class_h: CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[(1) - (5)].r.lineNum),(yyvsp[(4) - (5)].r.colNum)+1)); 
										(yyval.type)=p->createType((yyvsp[(2) - (5)].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
										t=(yyval.type);
										inhertance_list.clear();
										temp_id="";
										acc_mod="";
									}
    break;

  case 339:
/* Line 1792 of yacc.c  */
#line 874 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
											Streams::verbose() << "class_h: access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[(1) - (6)].r.lineNum),(yyvsp[(4) - (6)].r.colNum)+1)); 
											(yyval.type)=p->createType((yyvsp[(3) - (6)].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
											t=(yyval.type);
											inhertance_list.clear();
											acc_mod="";
										  }
    break;

  case 340:
/* Line 1792 of yacc.c  */
#line 881 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
											Streams::verbose() << "class_h: STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[(1) - (6)].r.lineNum),(yyvsp[(4) - (6)].r.colNum)+1)); 
											(yyval.type)=p->createType((yyvsp[(3) - (6)].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
											t=(yyval.type);
											inhertance_list.clear();
											acc_mod="";
										  }
    break;

  case 341:
/* Line 1792 of yacc.c  */
#line 888 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
											Streams::verbose() << "class_h: FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[(1) - (6)].r.lineNum),(yyvsp[(4) - (6)].r.colNum)+1)); 
											(yyval.type)=p->createType((yyvsp[(3) - (6)].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
											t=(yyval.type);
											inhertance_list.clear();
											acc_mod="";
										 }
    break;

  case 342:
/* Line 1792 of yacc.c  */
#line 895 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[(1) - (7)].r.lineNum),(yyvsp[(4) - (7)].r.colNum)+1)); 
													(yyval.type)=p->createType((yyvsp[(4) - (7)].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
												}
    break;

  case 343:
/* Line 1792 of yacc.c  */
#line 902 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[(1) - (7)].r.lineNum),(yyvsp[(4) - (7)].r.colNum)+1)); 
													(yyval.type)=p->createType((yyvsp[(4) - (7)].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
												}
    break;

  case 344:
/* Line 1792 of yacc.c  */
#line 909 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
													Streams::verbose() << "class_h: STATIC access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[(1) - (7)].r.lineNum),(yyvsp[(4) - (7)].r.colNum)+1)); 
													(yyval.type)=p->createType((yyvsp[(4) - (7)].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
												  }
    break;

  case 345:
/* Line 1792 of yacc.c  */
#line 916 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
													Streams::verbose() << "class_h: FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[(1) - (7)].r.lineNum),(yyvsp[(4) - (7)].r.colNum)+1)); 
													(yyval.type)=p->createType((yyvsp[(4) - (7)].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
												}
    break;

  case 346:
/* Line 1792 of yacc.c  */
#line 923 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
															Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[(1) - (8)].r.lineNum),(yyvsp[(4) - (8)].r.colNum)+1)); 
															(yyval.type)=p->createType((yyvsp[(5) - (8)].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
															t=(yyval.type);
															inhertance_list.clear();
															acc_mod="";
														}
    break;

  case 347:
/* Line 1792 of yacc.c  */
#line 930 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
															Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[(1) - (8)].r.lineNum),(yyvsp[(4) - (8)].r.colNum)+1)); 
															(yyval.type)=p->createType((yyvsp[(5) - (8)].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
															t=(yyval.type);
															inhertance_list.clear();
															acc_mod="";
														}
    break;

  case 348:
/* Line 1792 of yacc.c  */
#line 937 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[(1) - (7)].r.lineNum),(yyvsp[(4) - (7)].r.colNum)+1)); 
													(yyval.type)=p->createType((yyvsp[(4) - (7)].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
												}
    break;

  case 349:
/* Line 1792 of yacc.c  */
#line 944 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
													Streams::verbose() << "class_h: access_modef FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[(1) - (7)].r.lineNum),(yyvsp[(4) - (7)].r.colNum)+1)); 
													(yyval.type)=p->createType((yyvsp[(4) - (7)].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
												  }
    break;

  case 350:
/* Line 1792 of yacc.c  */
#line 951 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[(1) - (8)].r.lineNum),(yyvsp[(4) - (8)].r.colNum)+1)); 
															(yyval.type)=p->createType((yyvsp[(5) - (8)].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
															t=(yyval.type);
															inhertance_list.clear();
															acc_mod="";
														 }
    break;

  case 351:
/* Line 1792 of yacc.c  */
#line 958 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[(1) - (8)].r.lineNum),(yyvsp[(4) - (8)].r.colNum)+1)); 
															(yyval.type)=p->createType((yyvsp[(5) - (8)].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
															t=(yyval.type);
															inhertance_list.clear();
															acc_mod="";
														}
    break;

  case 352:
/* Line 1792 of yacc.c  */
#line 965 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[(1) - (8)].r.lineNum),(yyvsp[(4) - (8)].r.colNum)+1)); 
															(yyval.type)=p->createType((yyvsp[(5) - (8)].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
															t=(yyval.type);
															inhertance_list.clear();
															acc_mod="";
													 	 }
    break;

  case 353:
/* Line 1792 of yacc.c  */
#line 972 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[(1) - (8)].r.lineNum),(yyvsp[(4) - (8)].r.colNum)+1)); 
															(yyval.type)=p->createType((yyvsp[(5) - (8)].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
															t=(yyval.type);
															inhertance_list.clear();
															acc_mod="";
														 }
    break;

  case 354:
/* Line 1792 of yacc.c  */
#line 979 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
														Streams::verbose() << "class_h: CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[(1) - (6)].r.lineNum),(yyvsp[(5) - (6)].r.colNum)+1));
														(yyval.type)=p->createType((yyvsp[(2) - (6)].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
														t=(yyval.type);
														inhertance_list.clear();
														acc_mod="";
													}
    break;

  case 355:
/* Line 1792 of yacc.c  */
#line 986 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
																Streams::verbose() << "class_h: access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[(1) - (7)].r.lineNum),(yyvsp[(5) - (7)].r.colNum)+1));
																(yyval.type)=p->createType((yyvsp[(3) - (7)].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
																t=(yyval.type);
																inhertance_list.clear();
																acc_mod="";
														   }
    break;

  case 356:
/* Line 1792 of yacc.c  */
#line 993 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
															Streams::verbose() << "class_h: STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[(1) - (7)].r.lineNum),(yyvsp[(5) - (7)].r.colNum)+1));
															(yyval.type)=p->createType((yyvsp[(3) - (7)].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
															t=(yyval.type);
															inhertance_list.clear();
															acc_mod="";
														  }
    break;

  case 357:
/* Line 1792 of yacc.c  */
#line 1000 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
															Streams::verbose() << "class_h: FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[(1) - (7)].r.lineNum),(yyvsp[(5) - (7)].r.colNum)+1));
															(yyval.type)=p->createType((yyvsp[(3) - (7)].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
															t=(yyval.type);
															inhertance_list.clear();
															acc_mod="";
														 }
    break;

  case 358:
/* Line 1792 of yacc.c  */
#line 1007 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
																	Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[(1) - (8)].r.lineNum),(yyvsp[(5) - (8)].r.colNum)+1));
																	(yyval.type)=p->createType((yyvsp[(4) - (8)].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
																	t=(yyval.type);
																	inhertance_list.clear();
																	acc_mod="";
																}
    break;

  case 359:
/* Line 1792 of yacc.c  */
#line 1014 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
																	Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[(1) - (8)].r.lineNum),(yyvsp[(5) - (8)].r.colNum)+1));
																	(yyval.type)=p->createType((yyvsp[(4) - (8)].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
																	t=(yyval.type);
																	inhertance_list.clear();
																	acc_mod="";
																}
    break;

  case 360:
/* Line 1792 of yacc.c  */
#line 1021 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
																		Streams::verbose() << "class_h: STATIC access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[(1) - (8)].r.lineNum),(yyvsp[(5) - (8)].r.colNum)+1));
																		(yyval.type)=p->createType((yyvsp[(4) - (8)].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
																		t=(yyval.type);
																		acc_mod="";
																		inhertance_list.clear();
																  }
    break;

  case 361:
/* Line 1792 of yacc.c  */
#line 1028 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
																	Streams::verbose() << "class_h: FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[(1) - (8)].r.lineNum),(yyvsp[(5) - (8)].r.colNum)+1));
																	(yyval.type)=p->createType((yyvsp[(4) - (8)].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
																	t=(yyval.type);
																	acc_mod="";
																	inhertance_list.clear();
																 }
    break;

  case 362:
/* Line 1792 of yacc.c  */
#line 1035 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[(1) - (9)].r.lineNum),(yyvsp[(5) - (9)].r.colNum)+1));
																			(yyval.type)=p->createType((yyvsp[(5) - (9)].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
																			t=(yyval.type);
																			acc_mod="";
																			inhertance_list.clear();
																		}
    break;

  case 363:
/* Line 1792 of yacc.c  */
#line 1042 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[(1) - (9)].r.lineNum),(yyvsp[(5) - (9)].r.colNum)+1));
																			(yyval.type)=p->createType((yyvsp[(5) - (9)].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
																			t=(yyval.type);
																			acc_mod="";
																			inhertance_list.clear();
																		}
    break;

  case 364:
/* Line 1792 of yacc.c  */
#line 1049 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"classheader: CLASS NAME '(' arglist ')' ':' \n";}
    break;

  case 365:
/* Line 1792 of yacc.c  */
#line 1050 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"classheader: CLASS NAME '(' arglist ')' ':' \n";}
    break;

  case 366:
/* Line 1792 of yacc.c  */
#line 1051 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[(1) - (9)].r.lineNum),(yyvsp[(5) - (9)].r.colNum)+1));
																			(yyval.type)=p->createType((yyvsp[(5) - (9)].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
																			t=(yyval.type);
																			acc_mod="";
																			inhertance_list.clear();
																		}
    break;

  case 367:
/* Line 1792 of yacc.c  */
#line 1058 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[(1) - (9)].r.lineNum),(yyvsp[(5) - (9)].r.colNum)+1));
																			(yyval.type)=p->createType((yyvsp[(5) - (9)].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
																			t=(yyval.type);
																			acc_mod="";
																			inhertance_list.clear();
																		}
    break;

  case 368:
/* Line 1792 of yacc.c  */
#line 1065 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[(1) - (9)].r.lineNum),(yyvsp[(5) - (9)].r.colNum)+1));
																			(yyval.type)=p->createType((yyvsp[(5) - (9)].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
																			t=(yyval.type);
																			acc_mod="";
																			inhertance_list.clear();
																	   }
    break;

  case 369:
/* Line 1792 of yacc.c  */
#line 1072 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[(1) - (9)].r.lineNum),(yyvsp[(5) - (9)].r.colNum)+1));
																			(yyval.type)=p->createType((yyvsp[(5) - (9)].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
																			t=(yyval.type);
																			acc_mod="";
																			inhertance_list.clear();
																	    }
    break;

  case 370:
/* Line 1792 of yacc.c  */
#line 1082 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"arg_comma_seq : argument ','\n";}
    break;

  case 371:
/* Line 1792 of yacc.c  */
#line 1083 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"arg_comma_seq : argument ',' arg_comma_seq\n";}
    break;

  case 372:
/* Line 1792 of yacc.c  */
#line 1086 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comma_arg_seq:	',' argument\n";}
    break;

  case 373:
/* Line 1792 of yacc.c  */
#line 1087 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comma_arg_seq:	comma_arg_seq ',' argument\n";}
    break;

  case 374:
/* Line 1792 of yacc.c  */
#line 1090 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"arglist: argument\n";}
    break;

  case 375:
/* Line 1792 of yacc.c  */
#line 1091 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"arglist: default_arg\n";}
    break;

  case 376:
/* Line 1792 of yacc.c  */
#line 1093 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"arglist: argument ','\n";}
    break;

  case 377:
/* Line 1792 of yacc.c  */
#line 1095 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {    
						std::string tempstr((yyvsp[(2) - (2)].r.strVal));
						std::string erro("*" + tempstr);
						char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
						Streams::verbose() <<"arglist: '*' test\n";
				   }
    break;

  case 378:
/* Line 1792 of yacc.c  */
#line 1103 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
										std::string tempstr((yyvsp[(2) - (5)].r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);										
										std::string tempstr1((yyvsp[(5) - (5)].r.strVal));
										std::string erro1("**" + tempstr1);
										char *cstr1 = new char[erro1.length() + 1];
										strcpy(cstr1, erro1.c_str()); parameters.push_back(cstr1);										
										
										Streams::verbose() <<"arglist: '*' test ',' STAR_2 test\n";
									}
    break;

  case 379:
/* Line 1792 of yacc.c  */
#line 1116 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
		 					   		    std::string tempstr((yyvsp[(2) - (3)].r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
									    
										Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";
								 }
    break;

  case 380:
/* Line 1792 of yacc.c  */
#line 1125 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
											std::string tempstr((yyvsp[(2) - (3)].r.strVal));
											std::string erro("*" + tempstr);
											char *cstr = new char[erro.length() + 1];
											strcpy(cstr, erro.c_str()); parameters.push_back(cstr);

											Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";
										 }
    break;

  case 381:
/* Line 1792 of yacc.c  */
#line 1134 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
		 													std::string tempstr((yyvsp[(2) - (4)].r.strVal));
															std::string erro("*" + tempstr);
															char *cstr = new char[erro.length() + 1];
															strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
															Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";
													   }
    break;

  case 382:
/* Line 1792 of yacc.c  */
#line 1142 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
													std::string tempstr((yyvsp[(2) - (6)].r.strVal));
													std::string erro("*" + tempstr);
													char *cstr = new char[erro.length() + 1];
													strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
										
													std::string tempstr1((yyvsp[(6) - (6)].r.strVal));
													std::string erro1("**" + tempstr1);
													char *cstr1 = new char[erro1.length() + 1];
													strcpy(cstr1, erro1.c_str()); parameters.push_back(cstr1);Streams::verbose() <<"arglist: '*' test comma_arg_seq ',' STAR_2 test\n";
												  }
    break;

  case 383:
/* Line 1792 of yacc.c  */
#line 1154 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
						std::string tempstr((yyvsp[(2) - (2)].r.strVal));
						std::string erro("**" + tempstr);
						char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);Streams::verbose() <<"arglist: STAR_2 test\n";
					  }
    break;

  case 384:
/* Line 1792 of yacc.c  */
#line 1161 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"arglist: arg_comma_seq argument\n";}
    break;

  case 385:
/* Line 1792 of yacc.c  */
#line 1162 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"arglist: arg_comma_seq default_arg\n";}
    break;

  case 386:
/* Line 1792 of yacc.c  */
#line 1163 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"arglist: arg_comma_seq default_arg_comma_seq default_arg\n";}
    break;

  case 387:
/* Line 1792 of yacc.c  */
#line 1164 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"arglist: arg_comma_seq argument ','\n";}
    break;

  case 388:
/* Line 1792 of yacc.c  */
#line 1166 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {		
									std::string tempstr((yyvsp[(3) - (3)].r.strVal));
									std::string erro("*" + tempstr);
									char *cstr = new char[erro.length() + 1];
									strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
									Streams::verbose() <<"arglist: arg_comma_seq '*' test\n";
								  }
    break;

  case 389:
/* Line 1792 of yacc.c  */
#line 1174 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
													std::string tempstr((yyvsp[(3) - (6)].r.strVal));
													std::string erro("*" + tempstr);
													char *cstr = new char[erro.length() + 1];
													strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
										
													std::string tempstr1((yyvsp[(6) - (6)].r.strVal));
													std::string erro1("**" + tempstr1);
													char *cstr1 = new char[erro1.length() + 1];
													strcpy(cstr1, erro1.c_str()); parameters.push_back(cstr1);
													Streams::verbose() <<"arglist: arg_comma_seq '*' test ',' STAR_2 test\n";
												 }
    break;

  case 390:
/* Line 1792 of yacc.c  */
#line 1187 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
												std::string tempstr((yyvsp[(3) - (4)].r.strVal));
												std::string erro("*" + tempstr);
												char *cstr = new char[erro.length() + 1];
												strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
												Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq\n";
											   }
    break;

  case 391:
/* Line 1792 of yacc.c  */
#line 1195 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
														std::string tempstr((yyvsp[(3) - (4)].r.strVal));
														std::string erro("*" + tempstr);
														char *cstr = new char[erro.length() + 1];
														strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
														Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_default_arg_seq\n";
													   }
    break;

  case 392:
/* Line 1792 of yacc.c  */
#line 1203 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
																		std::string tempstr((yyvsp[(3) - (5)].r.strVal));
																		std::string erro("*" + tempstr);
																		char *cstr = new char[erro.length() + 1];
																		strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
																		Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq comma_default_arg_seq\n";
																	 }
    break;

  case 393:
/* Line 1792 of yacc.c  */
#line 1211 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {
																std::string tempstr((yyvsp[(3) - (7)].r.strVal));
																std::string erro("*" + tempstr);
																char *cstr = new char[erro.length() + 1];
																strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
										
																std::string tempstr1((yyvsp[(7) - (7)].r.strVal));
																std::string erro1("**" + tempstr1);
																char *cstr1 = new char[erro1.length() + 1];
																strcpy(cstr1, erro1.c_str()); parameters.push_back(cstr1);
																Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq ',' STAR_2 test\n";
															   }
    break;

  case 394:
/* Line 1792 of yacc.c  */
#line 1224 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {	std::string tempstr((yyvsp[(3) - (3)].r.strVal));
										std::string erro("**" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
										Streams::verbose() <<"arglist: arg_comma_seq STAR_2 test\n";
								    }
    break;

  case 395:
/* Line 1792 of yacc.c  */
#line 1234 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comma_default_arg_seq: ',' default_arg\n";}
    break;

  case 396:
/* Line 1792 of yacc.c  */
#line 1235 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comma_default_arg_seq: comma_default_arg_seq ',' default_arg\n";}
    break;

  case 397:
/* Line 1792 of yacc.c  */
#line 1238 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"default_arg_comma_seq: default_arg ','\n";}
    break;

  case 398:
/* Line 1792 of yacc.c  */
#line 1239 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"default_arg_comma_seq: default_arg_comma_seq default_arg ','\n";}
    break;

  case 399:
/* Line 1792 of yacc.c  */
#line 1242 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {parameters.push_back((yyvsp[(1) - (3)].r.strVal));Streams::verbose() <<"default_arg: test '=' test\n";}
    break;

  case 400:
/* Line 1792 of yacc.c  */
#line 1244 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {parameters.push_back((yyvsp[(1) - (1)].r.strVal)); Streams::verbose() <<"argument: 	test\n";}
    break;

  case 401:
/* Line 1792 of yacc.c  */
#line 1245 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {parameters.push_back((yyvsp[(1) - (2)].r.strVal));Streams::verbose() <<"argument: 	test comp_for\n";}
    break;

  case 402:
/* Line 1792 of yacc.c  */
#line 1249 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comp_iter:  comp_for\n";}
    break;

  case 403:
/* Line 1792 of yacc.c  */
#line 1250 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comp_iter:  comp_if\n";}
    break;

  case 404:
/* Line 1792 of yacc.c  */
#line 1253 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comp_for: 	FOR exprlist IN or_test\n";}
    break;

  case 405:
/* Line 1792 of yacc.c  */
#line 1254 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comp_for: FOR exprlist IN or_test comp_iter\n";}
    break;

  case 406:
/* Line 1792 of yacc.c  */
#line 1257 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comp_if: IF or_test\n";}
    break;

  case 407:
/* Line 1792 of yacc.c  */
#line 1258 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"
    {Streams::verbose() <<"comp_if: IF or_test comp_iter\n";}
    break;


/* Line 1792 of yacc.c  */
#line 5368 "yacc.cpp"
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


/* Line 2055 of yacc.c  */
#line 1261 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"

void yyerror(const char *s) 
{
	Program::addError(new SyntaxError(s));
	//cout<<s;
}

int strlength(char * str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}

int yylex()
{
	return lexer->yylex();

}
void main(void)
{
	string input = "code.txt";
	dir_path="";
	//addFile(input);
	sourceFile=input;
	ifstream inf(input);
	lexer = new yyFlexLexer(&inf);
	Parser* p = new Parser();
	p->parse();
	//Program::printErrors();
	err->printErrQueue();
	system("pause");
}