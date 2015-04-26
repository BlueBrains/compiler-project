/* A Bison parser, made by GNU Bison 2.7.  */

/* Skeleton implementation for Bison GLR parsers in C
   
      Copyright (C) 2002-2012 Free Software Foundation, Inc.
   
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

/* C GLR parser skeleton written by Paul Hilfinger.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.c"

/* Pure parsers.  */
#define YYPURE 0






/* Copy the first part of user declarations.  */
/* Line 207 of glr.c  */
#line 4 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"

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
	#include "compilerProject/AST.h"
	#include "compilerProject/getString.h"
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
	vector<string> temp_id2;
	int visit_num=0;//this variable for detected that if in right side in expretion
	char* i_type;
	Node* k;
	char* t_id=new char[10];
	char* acc_mod=new char[8];
	vector<char*> sto_mod;
	bool ss=false;
	bool ff=false;
	bool pro= false;
	bool pp=true;
	bool self=false;
	bool is_list=false;
	bool is_dic=false;
	bool array_right=false;
	int linefunc=0;
	int colmfunc=0;
	bool constant =false;
	Node* lastNode;
	operand op;
	bool v_static,v_final;
	vector<char *>inhertance_list;
	vector<Node*>arrayvec;

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
	AST * ast = new AST();

/* Line 207 of glr.c  */
#line 131 "yacc.cpp"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

#include "yacc.hpp"

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Default (constant) value used for initialization for null
   right-hand sides.  Unlike the standard yacc.c template, here we set
   the default value of $$ to a zeroed-out value.  Since the default
   value is undefined, this behavior is technically correct.  */
static YYSTYPE yyval_default;

/* Copy the second part of user declarations.  */

/* Line 230 of glr.c  */
#line 160 "yacc.cpp"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#ifndef YYFREE
# define YYFREE free
#endif
#ifndef YYMALLOC
# define YYMALLOC malloc
#endif
#ifndef YYREALLOC
# define YYREALLOC realloc
#endif

#define YYSIZEMAX ((size_t) -1)

#ifdef __cplusplus
   typedef bool yybool;
#else
   typedef unsigned char yybool;
#endif
#define yytrue 1
#define yyfalse 0

#ifndef YYSETJMP
# include <setjmp.h>
# define YYJMP_BUF jmp_buf
# define YYSETJMP(Env) setjmp (Env)
/* Pacify clang.  */
# define YYLONGJMP(Env, Val) (longjmp (Env, Val), YYASSERT (0))
#endif

/*-----------------.
| GCC extensions.  |
`-----------------*/

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

#ifndef YYASSERT
# define YYASSERT(Condition) ((void) ((Condition) || (abort (), 0)))
#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  27
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1442

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  109
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  101
/* YYNRULES -- Number of rules.  */
#define YYNRULES  411
/* YYNRULES -- Number of states.  */
#define YYNSTATES  739
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 9
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYTRANSLATE(X) -- Bison symbol number corresponding to X.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   341

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
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
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     5,     9,    11,    14,    16,    19,    26,
      34,    39,    45,    53,    61,    67,    73,    82,    91,    98,
     105,   114,   123,   130,   137,   147,   157,   165,   173,   182,
     191,   198,   205,   215,   225,   233,   241,   251,   261,   269,
     277,   281,   284,   286,   288,   291,   293,   295,   297,   299,
     301,   303,   305,   307,   311,   313,   316,   320,   323,   325,
     328,   330,   333,   335,   339,   342,   345,   348,   351,   353,
     355,   357,   359,   361,   363,   365,   367,   369,   371,   373,
     375,   377,   379,   381,   383,   386,   389,   391,   393,   395,
     397,   399,   401,   404,   406,   408,   411,   414,   418,   420,
     423,   425,   429,   431,   434,   437,   441,   444,   448,   451,
     455,   458,   462,   464,   466,   468,   470,   472,   474,   477,
     480,   483,   487,   491,   495,   500,   505,   510,   515,   521,
     527,   532,   537,   543,   549,   555,   561,   566,   572,   577,
     583,   591,   600,   605,   613,   620,   630,   635,   643,   651,
     658,   662,   667,   670,   674,   679,   685,   687,   691,   693,
     696,   701,   703,   706,   709,   711,   713,   719,   722,   726,
     728,   731,   734,   738,   740,   743,   746,   748,   751,   755,
     757,   760,   762,   764,   766,   768,   770,   772,   774,   776,
     779,   781,   784,   787,   790,   794,   796,   799,   802,   806,
     808,   811,   814,   818,   820,   823,   826,   829,   833,   837,
     839,   842,   845,   848,   852,   856,   858,   861,   864,   867,
     870,   873,   877,   881,   885,   889,   891,   894,   897,   900,
     903,   905,   907,   910,   912,   915,   920,   924,   926,   929,
     932,   936,   939,   942,   946,   950,   952,   956,   961,   966,
     968,   970,   972,   974,   976,   978,   980,   982,   984,   987,
     990,   994,   998,  1001,  1003,  1006,  1009,  1013,  1016,  1018,
    1021,  1024,  1028,  1031,  1036,  1042,  1048,  1051,  1055,  1057,
    1060,  1063,  1067,  1069,  1071,  1074,  1078,  1082,  1087,  1090,
    1093,  1097,  1099,  1102,  1105,  1108,  1112,  1116,  1118,  1121,
    1123,  1126,  1129,  1133,  1136,  1140,  1143,  1147,  1149,  1152,
    1155,  1159,  1164,  1170,  1173,  1177,  1182,  1186,  1191,  1196,
    1202,  1205,  1207,  1210,  1213,  1217,  1220,  1224,  1229,  1234,
    1239,  1245,  1251,  1257,  1263,  1270,  1277,  1283,  1289,  1296,
    1303,  1310,  1317,  1323,  1330,  1337,  1344,  1352,  1360,  1368,
    1376,  1385,  1394,  1402,  1410,  1419,  1428,  1437,  1446,  1453,
    1461,  1469,  1477,  1486,  1495,  1504,  1513,  1523,  1533,  1542,
    1551,  1561,  1571,  1581,  1591,  1594,  1598,  1601,  1605,  1607,
    1609,  1612,  1615,  1621,  1625,  1629,  1634,  1641,  1644,  1647,
    1650,  1654,  1658,  1662,  1669,  1674,  1679,  1685,  1693,  1697,
    1700,  1704,  1707,  1711,  1715,  1717,  1720,  1722,  1724,  1729,
    1735,  1738
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const short int yyrhs[] =
{
     110,     0,    -1,   111,    -1,   133,    97,   112,    -1,   112,
      -1,   198,   112,    -1,   198,    -1,   114,   156,    -1,    15,
      44,   115,    24,   157,    98,    -1,    15,   125,    44,   115,
      24,   157,    98,    -1,    15,    44,   115,    98,    -1,    15,
     125,    44,   115,    98,    -1,    15,    13,    44,   115,    24,
     157,    98,    -1,    15,    12,    44,   115,    24,   157,    98,
      -1,    15,    13,    44,   115,    98,    -1,    15,    12,    44,
     115,    98,    -1,    15,    13,    12,    44,   115,    24,   157,
      98,    -1,    15,    12,    13,    44,   115,    24,   157,    98,
      -1,    15,    13,    12,    44,   115,    98,    -1,    15,    12,
      13,    44,   115,    98,    -1,    15,    12,   125,    44,   115,
      24,   157,    98,    -1,    15,    13,   125,    44,   115,    24,
     157,    98,    -1,    15,    13,   125,    44,   115,    98,    -1,
      15,    12,   125,    44,   115,    98,    -1,    15,    13,    12,
     125,    44,   115,    24,   157,    98,    -1,    15,    12,    13,
     125,    44,   115,    24,   157,    98,    -1,    15,    13,    12,
     125,    44,   115,    98,    -1,    15,    12,    13,   125,    44,
     115,    98,    -1,    15,   125,    13,    44,   115,    24,   157,
      98,    -1,    15,   125,    12,    44,   115,    24,   157,    98,
      -1,    15,   125,    13,    44,   115,    98,    -1,    15,   125,
      12,    44,   115,    98,    -1,    15,   125,    13,    12,    44,
     115,    24,   157,    98,    -1,    15,   125,    12,    13,    44,
     115,    24,   157,    98,    -1,    15,   125,    13,    12,    44,
     115,    98,    -1,    15,   125,    12,    13,    44,   115,    98,
      -1,    15,    13,   125,    12,    44,   115,    24,   157,    98,
      -1,    15,    12,   125,    13,    44,   115,    24,   157,    98,
      -1,    15,    13,   125,    12,    44,   115,    98,    -1,    15,
      12,   125,    13,    44,   115,    98,    -1,    88,   202,    99,
      -1,    88,    99,    -1,   117,    -1,   143,    -1,   118,    97,
      -1,   119,    -1,   127,    -1,   128,    -1,   129,    -1,   133,
      -1,   141,    -1,   142,    -1,   126,    -1,   121,   124,   194,
      -1,   121,    -1,   121,   120,    -1,   100,   121,   120,    -1,
     100,   121,    -1,   123,    -1,   123,    87,    -1,    87,    -1,
     157,   123,    -1,   157,    -1,   166,   123,    87,    -1,   166,
      87,    -1,    87,   157,    -1,    87,   166,    -1,   123,   122,
      -1,   122,    -1,    26,    -1,    27,    -1,    54,    -1,    28,
      -1,    29,    -1,    30,    -1,    31,    -1,    32,    -1,    33,
      -1,    34,    -1,    35,    -1,    36,    -1,    57,    -1,    58,
      -1,    59,    -1,    52,   192,    -1,    50,   192,    -1,    69,
      -1,   130,    -1,   131,    -1,   132,    -1,    71,    -1,    72,
      -1,    51,   194,    -1,    51,    -1,   134,    -1,     4,   136,
      -1,    87,   137,    -1,   135,    87,   137,    -1,   137,    -1,
     137,   135,    -1,   138,    -1,   138,    47,    44,    -1,    44,
      -1,    44,   139,    -1,   101,    44,    -1,   139,   101,    44,
      -1,    87,    44,    -1,   140,    87,    44,    -1,    53,    44,
      -1,    53,    44,   140,    -1,    25,    44,    -1,    25,    44,
     140,    -1,   146,    -1,   147,    -1,   148,    -1,   149,    -1,
     152,    -1,   113,    -1,   144,    97,    -1,    15,   198,    -1,
      15,    44,    -1,    15,   125,    44,    -1,    15,    13,    44,
      -1,    15,    12,    44,    -1,    15,    13,    12,    44,    -1,
      15,    12,    13,    44,    -1,    15,    13,   125,    44,    -1,
      15,    12,   125,    44,    -1,    15,    13,    12,   125,    44,
      -1,    15,    12,    13,   125,    44,    -1,    15,   125,    13,
      44,    -1,    15,   125,    12,    44,    -1,    15,   125,    13,
      12,    44,    -1,    15,   125,    12,    13,    44,    -1,    15,
      13,   125,    12,    44,    -1,    15,    12,   125,    13,    44,
      -1,    18,   157,    98,   156,    -1,   145,    18,   157,    98,
     156,    -1,    17,   157,    98,   156,    -1,    17,   157,    98,
     156,   145,    -1,    17,   157,    98,   156,    16,    98,   156,
      -1,    17,   157,    98,   156,   145,    16,    98,   156,    -1,
      19,   157,    98,   156,    -1,    19,   157,    98,   156,    16,
      98,   156,    -1,    20,   192,    21,   194,    98,   156,    -1,
      20,   192,    21,   194,    98,   156,    16,    98,   156,    -1,
      22,    98,   156,   150,    -1,    22,    98,   156,   150,    16,
      98,   156,    -1,    22,    98,   156,   150,    23,    98,   156,
      -1,    22,    98,   156,    23,    98,   156,    -1,   154,    98,
     156,    -1,   150,   154,    98,   156,    -1,    87,   153,    -1,
     151,    87,   153,    -1,    46,   153,    98,   156,    -1,    46,
     153,   151,    98,   156,    -1,   157,    -1,   157,    47,   168,
      -1,    68,    -1,    68,   157,    -1,    68,   157,    47,    44,
      -1,   116,    -1,   155,   116,    -1,   155,     6,    -1,     6,
      -1,   159,    -1,   159,    17,   159,    16,   157,    -1,     8,
     161,    -1,   158,     8,   161,    -1,   161,    -1,   161,   158,
      -1,     9,   162,    -1,   160,     9,   162,    -1,   162,    -1,
     162,   160,    -1,    10,   162,    -1,   164,    -1,   165,   168,
      -1,   163,   165,   168,    -1,   168,    -1,   168,   163,    -1,
      90,    -1,    91,    -1,    49,    -1,    67,    -1,    66,    -1,
      37,    -1,    11,    -1,    21,    -1,    10,    21,    -1,    64,
      -1,    64,    10,    -1,    94,   168,    -1,   102,   170,    -1,
     167,   102,   170,    -1,   170,    -1,   170,   167,    -1,   103,
     172,    -1,   169,   103,   172,    -1,   172,    -1,   172,   169,
      -1,   104,   174,    -1,   171,   104,   174,    -1,   174,    -1,
     174,   171,    -1,    55,   176,    -1,    61,   176,    -1,   173,
      55,   176,    -1,   173,    61,   176,    -1,   176,    -1,   176,
     173,    -1,    92,   178,    -1,    93,   178,    -1,   175,    92,
     178,    -1,   175,    93,   178,    -1,   178,    -1,   178,   175,
      -1,    94,   179,    -1,    95,   179,    -1,    96,   179,    -1,
      65,   179,    -1,   177,    94,   179,    -1,   177,    95,   179,
      -1,   177,    96,   179,    -1,   177,    65,   179,    -1,   179,
      -1,   179,   177,    -1,    92,   179,    -1,    93,   179,    -1,
     105,   179,    -1,   181,    -1,   186,    -1,   180,   186,    -1,
     183,    -1,   183,   180,    -1,   183,   180,    40,   179,    -1,
     183,    40,   179,    -1,    62,    -1,   182,    62,    -1,    88,
      99,    -1,    88,   185,    99,    -1,    89,   106,    -1,   107,
     108,    -1,    89,   185,   106,    -1,   107,   197,   108,    -1,
      44,    -1,    44,    88,    99,    -1,    44,    88,   202,    99,
      -1,    44,    89,   188,   106,    -1,    41,    -1,    43,    -1,
      42,    -1,    70,    -1,   182,    -1,    45,    -1,    63,    -1,
      39,    -1,    38,    -1,    87,   157,    -1,    87,   166,    -1,
     184,    87,   157,    -1,   184,    87,   166,    -1,   157,   208,
      -1,   157,    -1,   157,   184,    -1,   157,    87,    -1,   157,
     184,    87,    -1,   166,   208,    -1,   166,    -1,   166,   184,
      -1,   166,    87,    -1,   166,   184,    87,    -1,   101,    44,
      -1,   101,    44,    88,    99,    -1,   101,    44,    88,   202,
      99,    -1,   101,    44,    89,   188,   106,    -1,    87,   189,
      -1,   187,    87,   189,    -1,   189,    -1,   189,   187,    -1,
     189,    87,    -1,   189,   187,    87,    -1,   157,    -1,    98,
      -1,   157,    98,    -1,   157,    98,   157,    -1,   157,    98,
     190,    -1,   157,    98,   157,   190,    -1,    98,   157,    -1,
      98,   190,    -1,    98,   157,   190,    -1,    98,    -1,    98,
     157,    -1,    87,   168,    -1,    87,   166,    -1,   191,    87,
     168,    -1,   191,    87,   166,    -1,   168,    -1,   168,   191,
      -1,   166,    -1,   166,   191,    -1,   168,    87,    -1,   168,
     191,    87,    -1,   166,    87,    -1,   166,   191,    87,    -1,
      87,   157,    -1,    87,   157,   193,    -1,   157,    -1,   157,
     193,    -1,   157,    87,    -1,   157,   193,    87,    -1,    87,
     157,    98,   157,    -1,   195,    87,   157,    98,   157,    -1,
      87,   157,    -1,   196,    87,   157,    -1,   157,    98,   157,
     208,    -1,   157,    98,   157,    -1,   157,    98,   157,    87,
      -1,   157,    98,   157,   195,    -1,   157,    98,   157,   195,
      87,    -1,   157,   208,    -1,   157,    -1,   157,    87,    -1,
     157,   196,    -1,   157,   196,    87,    -1,   199,   156,    -1,
       5,    44,    98,    -1,   125,     5,    44,    98,    -1,    13,
       5,    44,    98,    -1,    12,     5,    44,    98,    -1,    13,
      12,     5,    44,    98,    -1,    12,    13,     5,    44,    98,
      -1,    12,   125,     5,    44,    98,    -1,    13,   125,     5,
      44,    98,    -1,    13,    12,   125,     5,    44,    98,    -1,
      12,    13,   125,     5,    44,    98,    -1,   125,    13,     5,
      44,    98,    -1,   125,    12,     5,    44,    98,    -1,   125,
      13,    12,     5,    44,    98,    -1,   125,    12,    13,     5,
      44,    98,    -1,    13,   125,    12,     5,    44,    98,    -1,
      12,   125,    13,     5,    44,    98,    -1,     5,    44,    88,
      99,    98,    -1,   125,     5,    44,    88,    99,    98,    -1,
      13,     5,    44,    88,    99,    98,    -1,    12,     5,    44,
      88,    99,    98,    -1,    13,    12,     5,    44,    88,    99,
      98,    -1,    12,    13,     5,    44,    88,    99,    98,    -1,
      13,   125,     5,    44,    88,    99,    98,    -1,    12,   125,
       5,    44,    88,    99,    98,    -1,    13,    12,   125,     5,
      44,    88,    99,    98,    -1,    12,    13,   125,     5,    44,
      88,    99,    98,    -1,   125,    13,     5,    44,    88,    99,
      98,    -1,   125,    12,     5,    44,    88,    99,    98,    -1,
     125,    13,    12,     5,    44,    88,    99,    98,    -1,   125,
      12,    13,     5,    44,    88,    99,    98,    -1,    13,   125,
      12,     5,    44,    88,    99,    98,    -1,    12,   125,    13,
       5,    44,    88,    99,    98,    -1,     5,    44,    88,   136,
      99,    98,    -1,   125,     5,    44,    88,   136,    99,    98,
      -1,    13,     5,    44,    88,   136,    99,    98,    -1,    12,
       5,    44,    88,   136,    99,    98,    -1,    13,    12,     5,
      44,    88,   136,    99,    98,    -1,    12,    13,     5,    44,
      88,   136,    99,    98,    -1,    13,   125,     5,    44,    88,
     136,    99,    98,    -1,    12,   125,     5,    44,    88,   136,
      99,    98,    -1,    13,    12,   125,     5,    44,    88,   136,
      99,    98,    -1,    12,    13,   125,     5,    44,    88,   136,
      99,    98,    -1,   125,    13,     5,    44,    88,   136,    99,
      98,    -1,   125,    12,     5,    44,    88,   136,    99,    98,
      -1,   125,    13,    12,     5,    44,    88,   136,    99,    98,
      -1,   125,    12,    13,     5,    44,    88,   136,    99,    98,
      -1,    13,   125,    12,     5,    44,    88,   136,    99,    98,
      -1,    12,   125,    13,     5,    44,    88,   136,    99,    98,
      -1,   206,    87,    -1,   200,   206,    87,    -1,    87,   206,
      -1,   201,    87,   206,    -1,   206,    -1,   205,    -1,   206,
      87,    -1,    94,   157,    -1,    94,   157,    87,    40,   157,
      -1,    94,   157,   201,    -1,    94,   157,   203,    -1,    94,
     157,   201,   203,    -1,    94,   157,   201,    87,    40,   157,
      -1,    40,   157,    -1,   200,   206,    -1,   200,   205,    -1,
     200,   204,   205,    -1,   200,   206,    87,    -1,   200,    94,
     157,    -1,   200,    94,   157,    87,    40,   157,    -1,   200,
      94,   157,   201,    -1,   200,    94,   157,   203,    -1,   200,
      94,   157,   201,   203,    -1,   200,    94,   157,   201,    87,
      40,   157,    -1,   200,    40,   157,    -1,    87,   205,    -1,
     203,    87,   205,    -1,   205,    87,    -1,   204,   205,    87,
      -1,   157,   100,   157,    -1,   157,    -1,   157,   208,    -1,
     208,    -1,   209,    -1,    20,   192,    21,   159,    -1,    20,
     192,    21,   159,   207,    -1,    17,   159,    -1,    17,   159,
     207,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   125,   125,   136,   137,   141,   145,   162,   170,   171,
     172,   181,   189,   190,   191,   199,   207,   208,   209,   217,
     225,   233,   234,   241,   249,   250,   251,   259,   266,   267,
     268,   276,   284,   285,   286,   294,   301,   302,   303,   310,
     319,   320,   323,   326,   328,   332,   335,   336,   337,   338,
     339,   340,   341,   344,   345,   346,   373,   374,   377,   378,
     379,   380,   381,   385,   386,   389,   390,   393,   394,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   410,   411,   412,   414,   415,   418,   421,   422,   423,
     426,   429,   432,   433,   437,   440,   443,   444,   446,   453,
     463,   464,   467,   468,   471,   475,   481,   482,   485,   486,
     489,   490,   493,   497,   498,   502,   506,   507,   511,   515,
     520,   525,   532,   538,   544,   550,   556,   562,   568,   574,
     580,   586,   592,   598,   604,   610,   617,   621,   629,   633,
     637,   642,   651,   655,   663,   667,   675,   679,   687,   695,
     702,   708,   720,   721,   724,   725,   728,   729,   732,   736,
     740,   743,   746,   759,   763,   766,   767,   770,   771,   774,
     775,   778,   779,   782,   783,   786,   787,   790,   791,   794,
     795,   798,   799,   800,   801,   802,   803,   804,   805,   806,
     807,   808,   811,   814,   815,   817,   821,   824,   825,   828,
     829,   832,   833,   836,   837,   840,   841,   842,   843,   846,
     850,   853,   860,   871,   877,   885,   888,   898,   903,   908,
     913,   914,   919,   924,   928,   931,   932,   938,   945,   952,
     953,   993,   996,  1001,  1006,  1011,  1012,  1015,  1016,  1019,
    1020,  1021,  1027,  1028,  1033,  1034,  1038,  1043,  1048,  1054,
    1062,  1067,  1072,  1073,  1077,  1078,  1079,  1082,  1087,  1091,
    1092,  1095,  1098,  1099,  1102,  1106,  1107,  1110,  1111,  1112,
    1113,  1114,  1117,  1124,  1127,  1130,  1136,  1137,  1140,  1141,
    1142,  1143,  1146,  1147,  1148,  1149,  1150,  1151,  1152,  1153,
    1154,  1157,  1158,  1161,  1162,  1163,  1164,  1167,  1168,  1169,
    1170,  1171,  1172,  1173,  1174,  1177,  1178,  1181,  1182,  1183,
    1184,  1187,  1188,  1190,  1191,  1194,  1195,  1196,  1197,  1198,
    1199,  1200,  1201,  1202,  1203,  1205,  1211,  1219,  1226,  1233,
    1240,  1247,  1254,  1261,  1268,  1275,  1282,  1289,  1296,  1303,
    1310,  1317,  1324,  1332,  1339,  1346,  1353,  1360,  1367,  1374,
    1381,  1388,  1395,  1402,  1409,  1416,  1423,  1430,  1437,  1444,
    1451,  1458,  1465,  1472,  1479,  1486,  1493,  1500,  1507,  1508,
    1509,  1516,  1523,  1530,  1540,  1541,  1544,  1545,  1548,  1549,
    1551,  1553,  1561,  1574,  1583,  1592,  1600,  1612,  1619,  1620,
    1621,  1622,  1624,  1632,  1645,  1653,  1661,  1669,  1682,  1692,
    1693,  1696,  1697,  1700,  1702,  1703,  1707,  1708,  1711,  1712,
    1715,  1716
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ENDMARKER", "IMPORT", "CLASS", "END",
  "PRIMARY", "OR", "AND", "NOT", "NOT_EQUAL", "FINAL", "STATIC", "SELF",
  "DEF", "ELSE", "IF", "ELIF", "WHILE", "FOR", "IN", "TRY", "FINALLY",
  "ARROW", "NONLOCAL", "PLUS_EQUAL", "MINUS_EQUAL", "DIV_EQUAL",
  "MOD_EQUAL", "AND_EQUAL", "OR_EQUAL", "SHAPOO_EQUAL",
  "LESS_THAN_2_EQUAL", "MORE_THAN_2_EQUAL", "STAR_2_EQUAL", "DIV_2_EQUAL",
  "MORE_LESS", "FALSE", "TRUE", "STAR_2", "NUMBER_INT", "NUMBER_LONG",
  "NUMBER_FLOAT", "NAME", "DOT_3", "WITH", "AS", "ASSERT", "EQUAL", "DEL",
  "RETURN", "PRINT", "GLOBAL", "STAR_EQUAL", "LESS_THAN_2", "RAISE",
  "PRIVATE", "PUBLIC", "PROTECTED", "YIELD", "MORE_THAN_2", "STRING",
  "NONE", "IS", "DIV_2", "LESS_OR_EQUAL", "MORE_OR_EQUAL", "EXCEPT",
  "PASS", "CHAR_VALUE", "BREAK", "CONTINUE", "stmt_14", "stmt_13",
  "stmt_12", "stmt_11", "stmt_10", "stmt_9", "stmt_8", "stmt_7", "stmt_6",
  "stmt_5", "stmt_4", "stmt_3", "stmt_2", "stmt_1", "','", "'('", "'['",
  "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "';'", "':'", "')'",
  "'='", "'.'", "'|'", "'^'", "'&'", "'~'", "']'", "'{'", "'}'", "$accept",
  "file_input", "program", "temp2", "funcdef", "funcheader", "parameters",
  "stmt", "simple_stmt", "small_stmt", "expr_stmt", "right_testlist",
  "testlist_star_expr", "comma_test_star", "comma_test_star_seqJ",
  "augassign", "access", "print_stmt", "del_stmt", "pass_stmt",
  "flow_stmt", "break_stmt", "continue_stmt", "return_stmt", "import_stmt",
  "import_name", "comma_dotted_as_name_seq", "dotted_as_names",
  "dotted_as_name", "dotted_name", "dotted_name_seq", "comma_name_seq",
  "global_stmt", "nonlocal_stmt", "compound_stmt", "vardef", "elif_seq",
  "if_stmt", "while_stmt", "for_stmt", "try_stmt", "try_except_cla_seq",
  "with_seq", "with_stmt", "with_item", "except_clause", "list_stmt",
  "suite", "test", "or_seq", "or_test", "and_seq", "and_test", "not_test",
  "comp_op_seq", "comparison", "comp_op", "star_expr", "or_xor_expr_seq",
  "expr", "sha_and_expr_seq", "xor_expr", "and_shift_expr_seq", "and_expr",
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

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
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
     142,   142,   143,   143,   143,   143,   143,   143,   143,   143,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   145,   145,   146,   146,
     146,   146,   147,   147,   148,   148,   149,   149,   149,   149,
     150,   150,   151,   151,   152,   152,   153,   153,   154,   154,
     154,   155,   155,   156,   156,   157,   157,   158,   158,   159,
     159,   160,   160,   161,   161,   162,   162,   163,   163,   164,
     164,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   166,   167,   167,   168,   168,   169,   169,   170,
     170,   171,   171,   172,   172,   173,   173,   173,   173,   174,
     174,   175,   175,   175,   175,   176,   176,   177,   177,   177,
     177,   177,   177,   177,   177,   178,   178,   179,   179,   179,
     179,   180,   180,   181,   181,   181,   181,   182,   182,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   184,   184,
     184,   184,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   186,   186,   186,   186,   187,   187,   188,   188,
     188,   188,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   190,   190,   191,   191,   191,   191,   192,   192,   192,
     192,   192,   192,   192,   192,   193,   193,   194,   194,   194,
     194,   195,   195,   196,   196,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   198,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   200,   200,   201,   201,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   203,
     203,   204,   204,   205,   206,   206,   207,   207,   208,   208,
     209,   209
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     3,     1,     2,     1,     2,     6,     7,
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
       2,     3,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     3,     3,     3,     4,     4,     4,     4,     5,     5,
       4,     4,     5,     5,     5,     5,     4,     5,     4,     5,
       7,     8,     4,     7,     6,     9,     4,     7,     7,     6,
       3,     4,     2,     3,     4,     5,     1,     3,     1,     2,
       4,     1,     2,     2,     1,     1,     5,     2,     3,     1,
       2,     2,     3,     1,     2,     2,     1,     2,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     2,     2,     3,     1,     2,     2,     3,     1,
       2,     2,     3,     1,     2,     2,     2,     3,     3,     1,
       2,     2,     2,     3,     3,     1,     2,     2,     2,     2,
       2,     3,     3,     3,     3,     1,     2,     2,     2,     2,
       1,     1,     2,     1,     2,     4,     3,     1,     2,     2,
       3,     2,     2,     3,     3,     1,     3,     4,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       3,     3,     2,     1,     2,     2,     3,     2,     1,     2,
       2,     3,     2,     4,     5,     5,     2,     3,     1,     2,
       2,     3,     1,     1,     2,     3,     3,     4,     2,     2,
       3,     1,     2,     2,     2,     3,     3,     1,     2,     1,
       2,     2,     3,     2,     3,     2,     3,     1,     2,     2,
       3,     4,     5,     2,     3,     4,     3,     4,     4,     5,
       2,     1,     2,     2,     3,     2,     3,     4,     4,     4,
       5,     5,     5,     5,     6,     6,     5,     5,     6,     6,
       6,     6,     5,     6,     6,     6,     7,     7,     7,     7,
       8,     8,     7,     7,     8,     8,     8,     8,     6,     7,
       7,     7,     8,     8,     8,     8,     9,     9,     8,     8,
       9,     9,     9,     9,     2,     3,     2,     3,     1,     1,
       2,     2,     5,     3,     3,     4,     6,     2,     2,     2,
       3,     3,     3,     6,     4,     4,     5,     7,     3,     2,
       3,     2,     3,     3,     1,     2,     1,     1,     4,     5,
       2,     3
};

/* YYDPREC[RULE-NUM] -- Dynamic precedence of rule #RULE-NUM (0 if none).  */
static const unsigned char yydprec[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

/* YYMERGER[RULE-NUM] -- Index of merging function for rule #RULE-NUM.  */
static const unsigned char yymerger[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

/* YYDEFACT[S] -- default reduction number in state S.  Performed when
   YYTABLE doesn't specify something else to do.  Zero means the default
   is an error.  */
static const unsigned short int yydefact[] =
{
       0,     0,     0,     0,     0,    81,    82,    83,     0,     2,
       4,     0,     0,    94,     6,     0,   102,    95,    98,   100,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     0,
       0,     0,     5,   164,     0,     0,     0,     0,     0,     0,
       0,   257,   256,   249,   251,   250,   245,   254,     0,     0,
      93,     0,     0,   237,   255,    86,   252,    90,    91,    60,
       0,     0,     0,     0,     0,     0,     0,   117,     0,   161,
      42,     0,    45,    54,    68,    58,    52,    46,    47,    48,
      87,    88,    89,    49,    50,    51,    43,     0,   112,   113,
     114,   115,   116,     0,   325,    62,   165,   169,   173,   176,
       0,   179,   195,   199,   203,   209,   215,   225,   230,   253,
     233,     0,   103,     0,    99,     0,     0,   326,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,   175,     0,     0,   120,     0,   119,
       0,     0,   299,   297,     0,     0,   110,     0,     0,     0,
     156,    85,   307,    92,    84,   108,    65,    66,   239,   263,
     268,     0,   241,     0,   227,   228,   192,   229,   242,   321,
       0,     7,    44,    69,    70,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    71,     0,    55,     0,    59,    67,
     118,   163,   162,     0,    61,     0,     0,   170,     0,   174,
      64,     0,     0,   187,   188,   186,   183,   190,   185,   184,
     181,   182,   180,     0,     0,   196,     0,   200,     0,   204,
       0,     0,   210,     0,     0,   216,     0,     0,     0,     0,
     226,   238,     0,     0,   234,   231,   104,     0,    96,     0,
     101,     0,     0,     0,   329,     0,     0,     0,     0,     0,
     328,     0,     0,     0,     0,     0,   327,     0,     0,     0,
       0,     0,   123,     0,     0,   122,     0,     0,     0,     0,
       0,   121,     0,     0,   303,   300,   301,   298,     0,     0,
       0,   111,     0,     0,   246,   404,     0,     0,   379,   378,
     283,   282,     0,   278,     0,     0,     0,     0,   309,   308,
     109,     0,   265,   264,   262,   270,   269,   267,   240,   243,
     322,     0,   323,   320,   244,    57,    53,     0,   167,     0,
     171,     0,    63,   189,   191,     0,   177,   193,     0,   197,
       0,   201,     0,   205,   206,     0,     0,   211,   212,     0,
       0,   220,   217,   218,   219,     0,     0,     0,     0,   236,
     272,     0,   232,   105,    97,   342,     0,     0,     0,     0,
     331,     0,     0,   332,     0,     0,     0,     0,   330,     0,
       0,   333,     0,     0,     0,     0,   337,     0,     0,   336,
       0,   125,     0,     0,     0,   127,   124,     0,     0,     0,
     126,    41,     0,     0,    10,     0,   131,     0,   130,     0,
     138,   142,   294,   293,   304,   302,     0,     0,   158,   146,
       0,   106,     0,   387,   381,     0,   405,     0,     0,     0,
     389,   388,   247,   374,   291,   288,   289,   284,   248,   280,
     279,   152,   154,     0,     0,   157,   305,   310,     0,   258,
     259,   266,   271,   313,   316,   324,    56,     0,   168,   172,
     178,   194,   198,   202,   207,   208,   213,   214,   224,   221,
     222,   223,     0,     0,   235,   358,   345,     0,     0,     0,
       0,   335,     0,     0,     0,   341,   344,     0,     0,     0,
       0,   334,     0,     0,     0,   340,   343,     0,     0,     0,
       0,   339,     0,     0,     0,   338,     0,   129,     0,    15,
     135,     0,     0,   128,     0,    14,   134,     0,    40,     0,
     133,     0,   132,     0,     0,    11,     0,     0,   139,     0,
     296,   295,     0,     0,   159,     0,     0,     0,     0,   107,
       0,   383,   384,   403,   398,   392,     0,   390,   401,   375,
     292,   290,   285,   286,   276,   281,   153,   155,   306,     0,
     260,   261,   317,   318,   315,   314,   166,   273,     0,     0,
     361,   347,     0,     0,     0,   349,     0,     0,     0,   360,
     346,     0,     0,     0,   348,     0,     0,     0,   359,   353,
       0,     0,     0,   352,     0,     0,     0,     0,    19,     0,
       0,     0,     0,    23,     0,    18,     0,     0,     0,     0,
      22,     8,     0,     0,    31,     0,     0,    30,     0,     0,
       0,     0,     0,     0,   144,   149,     0,     0,     0,     0,
     150,     0,   399,   376,     0,   385,     0,     0,   394,   395,
     402,   287,   277,   408,     0,   319,   274,   275,   363,   351,
       0,   365,   357,     0,   362,   350,     0,   364,   356,     0,
     369,   355,     0,   368,   354,     0,     0,     0,    27,    13,
       0,    39,     0,     0,     0,    26,    12,     0,    38,     0,
       0,    35,     0,     0,    34,     0,     9,   140,     0,     0,
       0,   143,     0,   160,   147,   148,   151,   382,     0,   377,
     400,     0,     0,   396,     0,   409,   406,   407,     0,     0,
     367,   373,   366,   372,   371,   370,    17,     0,     0,    20,
      16,     0,     0,    21,     0,    29,     0,    28,   136,   141,
       0,     0,   386,   393,     0,   410,   311,     0,    25,    37,
      24,    36,    33,    32,   137,   145,   397,   411,   312
};

/* YYPDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,     8,     9,    10,    67,    68,   268,    69,    70,    71,
      72,   186,    73,    74,    75,   187,    11,    76,    77,    78,
      79,    80,    81,    82,    83,    13,   114,    17,    18,    19,
     112,   281,    84,    85,    86,    87,   518,    88,    89,    90,
      91,   409,   296,    92,   149,   410,    93,    94,    95,   197,
      96,   199,    97,    98,   212,    99,   213,   100,   215,   101,
     217,   102,   219,   103,   222,   104,   225,   105,   230,   106,
     107,   234,   108,   109,   110,   303,   161,   235,   430,   292,
     293,   426,   275,   144,   299,   153,   553,   312,   170,    14,
      15,   286,   531,   287,   532,   419,   622,   289,   695,   696,
     697
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -505
static const short int yypact[] =
{
     181,    24,    44,   221,   224,  -505,  -505,  -505,    90,  -505,
    -505,   187,    79,  -505,   296,   654,    27,  -505,   135,   164,
     280,   186,   306,   182,   197,   328,    62,  -505,   256,   211,
      97,   296,  -505,  -505,  1265,   302,  1265,  1265,  1299,   227,
     290,  -505,  -505,  -505,  -505,  -505,   196,  -505,  1265,  1299,
    1265,  1299,   299,  -505,  -505,  -505,  -505,  -505,  -505,  1045,
     897,   935,  1335,  1335,  1335,  1335,   397,  -505,   654,  -505,
    -505,   233,  -505,   492,  -505,   265,  -505,  -505,  -505,  -505,
    -505,  -505,  -505,  -505,  -505,  -505,  -505,   269,  -505,  -505,
    -505,  -505,  -505,   745,  -505,   288,   356,   372,   380,  -505,
     303,    52,   319,   320,   321,   198,    11,   369,  -505,   362,
       9,   384,   329,    24,   342,   393,    14,  -505,   286,   411,
     466,   428,   474,   315,   436,   482,   453,   486,   378,   454,
     505,   467,   510,  -505,  -505,   292,   357,   429,   387,  -505,
     438,   439,   465,   468,   532,   654,   475,   783,  1081,   -15,
     507,  -505,   477,  -505,  -505,   475,  -505,  -505,  -505,    66,
      87,   469,  -505,   455,  -505,  -505,  -505,  -505,  -505,    34,
     457,  -505,  -505,  -505,  -505,  -505,  -505,  -505,  -505,  -505,
    -505,  -505,  -505,  -505,  -505,   973,  -505,  1265,  1045,  -505,
    -505,  -505,  -505,  1045,   288,  1265,  1265,   558,  1265,   562,
    1045,   485,   553,  -505,  -505,  -505,  -505,   565,  -505,  -505,
    -505,  -505,    52,  1335,  1335,   478,  1335,   479,  1335,   480,
    1335,  1335,   316,  1335,  1335,   225,  1335,  1335,  1335,  1335,
     379,  -505,  1335,   537,    19,  -505,  -505,   539,  -505,    24,
    -505,   488,   490,    16,  -505,   415,   543,   441,   549,   119,
    -505,   442,   550,   443,   551,   121,  -505,   444,   552,   445,
     554,   399,   429,   244,   449,   429,   326,   821,    31,   448,
     332,   429,   654,   654,  1299,   513,  1299,   514,  1265,    38,
     559,   515,  1265,  1265,  -505,    23,  1009,   498,  -505,   517,
    1119,   508,   499,   520,  1265,   654,   -11,  1335,  1265,   521,
     515,  1299,  1045,   522,  -505,  1045,   523,  -505,  -505,  -505,
    1265,  1265,   524,  -505,  -505,   512,  -505,   597,  -505,  1265,
    -505,  1265,  1045,  -505,  -505,  1335,  -505,  -505,  1335,  -505,
    1335,  -505,  1335,  -505,  -505,  1335,  1335,  -505,  -505,  1335,
    1335,  -505,  -505,  -505,  -505,  1335,  1335,  1335,  1335,  -505,
     259,  1335,  -505,  -505,  -505,  -505,   516,   518,   519,   124,
    -505,   446,   136,  -505,   447,   525,   526,   138,  -505,   450,
     144,  -505,   459,   528,   530,   145,  -505,   461,   146,  -505,
     462,   429,    73,    32,   173,   429,   429,   216,    33,   266,
     429,  -505,   531,  1265,  -505,   314,   429,   323,   429,    41,
      53,   599,  -505,  -505,  1299,  1299,   529,   534,  1265,    54,
     535,  -505,   573,  -505,   533,  1265,  -505,  1265,  1265,  1265,
     548,   555,  -505,   541,  1265,   538,  -505,  1119,  -505,  1081,
     556,  -505,  -505,  1265,   654,  -505,   557,  -505,   598,  -505,
    -505,  1045,  1045,  -505,    88,  1265,  -505,  1265,  -505,  -505,
    -505,  -505,  -505,  -505,  -505,  -505,  -505,  -505,  -505,  -505,
    -505,  -505,   859,  1081,  -505,  -505,  -505,   547,   561,   542,
     152,  -505,   563,   564,   153,  -505,  -505,   567,   568,   569,
     157,  -505,   572,   576,   162,  -505,  -505,   574,   579,   583,
     165,  -505,   580,   584,   169,  -505,    51,   429,  1265,  -505,
     429,    56,    57,   429,  1265,  -505,   429,    58,  -505,   586,
     429,    60,   429,    61,  1265,  -505,   587,  1265,   254,   588,
    -505,  -505,   654,   654,   575,   589,   591,   592,   654,  -505,
     407,   560,   566,  -505,  -505,   570,   546,   607,  -505,   602,
    -505,  -505,   538,  -505,  -505,  1081,  -505,  -505,  -505,  1265,
    -505,  -505,  1265,   615,  -505,  -505,  -505,  -505,   604,   544,
    -505,  -505,   610,   611,   612,  -505,   614,   616,   619,  -505,
    -505,   617,   621,   622,  -505,   624,   629,   630,  -505,  -505,
     632,   633,   634,  -505,   636,   637,   638,  1265,  -505,    68,
     640,    69,  1265,  -505,  1265,  -505,    71,   641,    72,  1265,
    -505,  -505,    74,  1265,  -505,    75,  1265,  -505,   642,   654,
     646,   647,  1265,   654,   635,  -505,   605,   654,   654,   654,
    -505,  1265,  -505,  -505,  1157,   566,  1265,  1193,   623,   566,
    -505,  -505,  -505,   282,   652,  1265,  -505,  -505,  -505,  -505,
     655,  -505,  -505,   656,  -505,  -505,   658,  -505,  -505,   659,
    -505,  -505,   660,  -505,  -505,   665,   668,  1265,  -505,  -505,
    1265,  -505,   670,   671,  1265,  -505,  -505,  1265,  -505,   673,
    1265,  -505,   674,  1265,  -505,   675,  -505,  -505,   654,   654,
     676,  -505,   677,  -505,  -505,  -505,  -505,  -505,  1265,  -505,
    -505,  1265,  1229,   566,  1265,  -505,  -505,  -505,  1265,   678,
    -505,  -505,  -505,  -505,  -505,  -505,  -505,   679,   680,  -505,
    -505,   681,   682,  -505,   683,  -505,   684,  -505,  -505,  -505,
     654,   654,  -505,  -505,  1265,   282,  -505,  1265,  -505,  -505,
    -505,  -505,  -505,  -505,  -505,  -505,  -505,  -505,  -505
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -505,  -505,  -505,    83,  -505,  -505,  -171,   620,  -505,  -505,
    -505,   333,   600,   -68,   112,  -505,    12,  -505,  -505,  -505,
    -505,  -505,  -505,  -505,   667,  -505,  -505,   -72,  -105,  -505,
    -505,   577,  -505,  -505,  -505,  -505,  -505,  -505,  -505,  -505,
    -505,  -505,  -505,  -505,  -288,   245,  -505,   -40,   -36,  -505,
    -193,  -505,  -178,   -17,  -505,  -505,   540,    -9,  -505,    15,
    -505,  -188,  -505,  -184,  -505,  -170,  -505,  -175,  -505,  -203,
     -24,  -505,  -505,  -505,  -505,   639,   731,   494,  -505,   257,
    -407,  -392,   593,   -38,   358,  -151,  -505,  -505,  -505,   765,
    -505,  -505,   267,  -264,  -504,  -505,  -142,  -282,    76,  -150,
    -505
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -392
static const short int yytable[] =
{
     140,   141,   317,   392,   421,   288,   431,   189,   238,   304,
     307,   151,   150,   154,   152,    23,    26,   134,   318,   313,
     337,   338,   544,   156,   159,   159,   327,   625,   171,   142,
     169,   629,   329,   541,   120,   543,   316,   125,   164,   165,
     142,   167,   142,   301,   242,   333,   334,   138,   331,   232,
     157,   160,   160,   143,   301,   393,   498,   504,    16,   351,
      16,   407,   202,   203,   143,   514,   143,   126,    16,   516,
     525,   517,   294,   204,   127,   587,   433,   526,   246,   166,
     592,   594,   599,   295,   603,   606,   301,   434,    20,   205,
      27,   383,   657,   660,   388,   664,   667,    32,   670,   673,
     399,   206,   131,   223,   224,   279,   408,   301,   301,   132,
     233,   285,   291,   241,   133,   357,   207,   497,   208,   209,
     233,   310,   408,   415,   693,   288,   189,   406,   111,   394,
     499,   505,   311,   189,   354,   416,   456,   457,   632,   515,
     451,   448,   210,   211,   420,   546,   452,   263,   266,   588,
     631,   152,   156,   302,   593,   595,   600,   156,   604,   607,
     454,   455,   453,    16,   156,    16,   658,   661,    16,   665,
     668,   358,   671,   674,   305,   552,    31,   366,   248,   157,
      16,   320,    16,   374,   157,     1,     2,   121,    16,    16,
      16,   157,    28,     3,     4,   122,    16,    16,   558,    29,
      30,    16,   341,   342,   343,   344,    16,   194,   349,    16,
     496,   115,   201,    16,   501,   502,   129,   500,   365,   507,
     373,   252,   113,   468,   130,   511,    21,   513,   326,    24,
     118,   285,   400,   401,    22,   472,    25,   478,     5,     6,
       7,   123,   152,   482,   488,   492,   413,   414,   623,   121,
     285,   563,   567,   220,   425,   432,   572,   384,   150,   221,
     503,   576,   436,   438,   581,   402,   439,   402,   585,   439,
     611,   254,   612,   382,   443,   444,   387,   537,     5,     6,
       7,     5,     6,     7,   147,   148,   156,   469,   385,   403,
     473,   403,   142,   440,   554,   479,   440,    21,   483,   694,
     128,     2,   301,   489,   449,   261,   493,     2,     3,     4,
     506,   119,   435,   157,   135,   136,   143,   339,   340,   258,
     288,   458,   459,   460,   461,   145,   589,   464,   260,   591,
     172,   126,   596,   124,   146,   598,   262,   131,   389,   602,
     450,   605,   689,   155,   397,   623,   137,   462,   463,     5,
       6,     7,   188,     5,     6,     7,   633,   509,   510,     5,
       6,     7,    24,     5,     6,     7,   190,   512,   116,   264,
     390,   335,   524,   195,   243,   193,   398,   336,   117,   533,
     196,   534,   535,   536,   244,     5,     6,     7,   540,   198,
     200,   542,    28,   291,   547,   520,   520,   150,   564,   269,
     270,   265,   568,   249,   119,   550,   550,    34,   573,   555,
     689,   556,   577,   250,     5,     6,     7,    34,   582,   521,
     521,   214,   586,   216,   231,   218,   285,   291,   236,   239,
     237,   271,   551,   551,   226,    41,    42,   240,    43,    44,
      45,    46,    47,   381,   345,    41,    42,   621,    43,    44,
      45,    46,    47,   129,   124,   245,     5,     6,     7,    53,
      54,   395,   590,   227,   228,   229,   255,    56,   597,    53,
      54,   246,   247,   346,   347,   348,   256,    56,   608,   248,
     251,   610,   614,   615,   690,    60,    61,   252,   620,    62,
      63,   254,   396,   386,   285,    60,    61,   253,   257,    62,
      63,   725,    65,   359,    66,   168,     5,     6,     7,   291,
     258,   259,    65,   360,    66,   260,   634,   267,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   362,
     367,   370,   375,   378,   470,   474,   272,   273,   480,   363,
     368,   371,   376,   379,   471,   475,   184,   484,   481,   490,
     494,   656,   274,   278,   297,   276,   662,   485,   663,   491,
     495,   309,   280,   669,   298,   314,   319,   672,   308,   677,
     675,   321,   322,   681,   323,   324,   680,   684,   685,   686,
     328,   350,   330,   353,   332,   687,   355,   361,   285,   356,
     536,   285,   185,   364,   369,   372,   377,   422,   380,   699,
     404,   405,   412,   411,   423,   428,   427,   429,   437,   441,
     442,   445,   185,   447,   465,   519,   466,   529,   467,   549,
     530,   707,   616,   476,   708,   477,   486,   522,   711,   487,
     508,   712,   523,   528,   714,   538,   424,   716,   718,   719,
    -380,   562,   539,   545,  -392,   560,   415,   624,   446,   683,
     637,   682,   722,   626,   527,   723,   285,   627,     1,   561,
      33,   565,   726,   566,    34,   569,   570,    12,   571,    35,
     574,    36,   578,    37,    38,   575,    39,   579,   583,    40,
     734,   735,   580,   584,   601,   609,   613,   617,   736,   618,
     619,   738,    41,    42,   630,    43,    44,    45,    46,    47,
      48,  -391,   635,   636,    49,    50,    51,    52,   638,   639,
     692,   640,   641,   192,   642,   644,    53,    54,   643,   645,
     559,   646,   647,    55,    56,    57,    58,   648,   352,   649,
     650,   651,   300,   652,   653,   654,   277,   655,   659,   666,
     676,    59,    60,    61,   678,   679,    62,    63,    64,     1,
     698,   191,   325,   700,   701,    34,   702,   703,   704,    65,
      35,    66,    36,   705,    37,    38,   706,    39,   709,   710,
      40,   713,   715,   717,   720,   721,   727,   728,   729,   730,
     731,   732,   733,    41,    42,   315,    43,    44,    45,    46,
      47,    48,   163,    34,   548,    49,    50,    51,    52,   306,
     139,   737,   628,     0,     0,     0,     0,    53,    54,     0,
       0,     0,     0,     0,    55,    56,    57,    58,     0,     0,
       0,    41,    42,   282,    43,    44,    45,    46,    47,     0,
       0,    34,    59,    60,    61,     0,     0,    62,    63,    64,
       0,     0,     0,     0,     0,    53,    54,     0,     0,     0,
      65,     0,    66,    56,     0,     0,     0,     0,     0,    41,
      42,   282,    43,    44,    45,    46,    47,     0,     0,    34,
       0,    60,    61,     0,     0,    62,    63,   283,     0,     0,
       0,     0,   284,    53,    54,     0,     0,     0,    65,     0,
      66,    56,     0,     0,     0,     0,     0,    41,    42,   282,
      43,    44,    45,    46,    47,     0,     0,    34,     0,    60,
      61,     0,     0,    62,    63,   283,     0,     0,     0,     0,
     391,    53,    54,     0,     0,     0,    65,     0,    66,    56,
       0,     0,     0,     0,     0,    41,    42,     0,    43,    44,
      45,    46,    47,     0,     0,    34,     0,    60,    61,     0,
       0,    62,    63,   283,     0,     0,     0,     0,   557,    53,
      54,     0,     0,     0,    65,     0,    66,    56,     0,     0,
       0,     0,     0,    41,    42,     0,    43,    44,    45,    46,
      47,     0,     0,    34,     0,    60,    61,     0,     0,    62,
      63,    64,     0,     0,     0,     0,   158,    53,    54,     0,
       0,     0,    65,     0,    66,    56,     0,     0,     0,     0,
       0,    41,    42,     0,    43,    44,    45,    46,    47,    34,
       0,     0,     0,    60,    61,     0,     0,    62,    63,    64,
       0,     0,     0,     0,     0,    53,    54,     0,     0,     0,
      65,   162,    66,    56,     0,     0,     0,    41,    42,   417,
      43,    44,    45,    46,    47,    34,     0,     0,     0,     0,
      59,    60,    61,     0,     0,    62,    63,    64,     0,     0,
       0,    53,    54,     0,     0,     0,     0,     0,    65,    56,
      66,     0,     0,    41,    42,     0,    43,    44,    45,    46,
      47,    34,     0,     0,     0,     0,     0,    60,    61,     0,
       0,    62,    63,   418,     0,     0,     0,    53,    54,     0,
       0,     0,     0,     0,    65,    56,    66,     0,     0,    41,
      42,     0,    43,    44,    45,    46,    47,     0,     0,    34,
       0,     0,     0,    60,    61,     0,     0,    62,    63,    64,
       0,     0,     0,    53,    54,     0,     0,     0,     0,     0,
      65,    56,    66,     0,     0,     0,     0,    41,    42,     0,
      43,    44,    45,    46,    47,     0,     0,    34,     0,    60,
      61,     0,     0,    62,    63,     0,     0,     0,     0,   290,
       0,    53,    54,     0,     0,     0,    65,     0,    66,    56,
       0,     0,     0,     0,     0,    41,    42,   688,    43,    44,
      45,    46,    47,    34,     0,     0,     0,    60,    61,     0,
       0,    62,    63,     0,     0,     0,     0,   424,     0,    53,
      54,     0,     0,     0,    65,     0,    66,    56,     0,     0,
       0,    41,    42,   691,    43,    44,    45,    46,    47,    34,
       0,     0,     0,     0,     0,    60,    61,     0,     0,    62,
      63,     0,     0,     0,     0,    53,    54,     0,     0,     0,
       0,     0,    65,    56,    66,     0,     0,    41,    42,   724,
      43,    44,    45,    46,    47,    34,     0,     0,     0,     0,
       0,    60,    61,     0,     0,    62,    63,     0,     0,     0,
       0,    53,    54,     0,     0,     0,     0,     0,    65,    56,
      66,     0,     0,    41,    42,     0,    43,    44,    45,    46,
      47,     0,     0,     0,     0,     0,     0,    60,    61,     0,
       0,    62,    63,     0,     0,     0,     0,    53,    54,     0,
       0,     0,     0,     0,    65,    56,    66,    41,    42,     0,
      43,    44,    45,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,    60,    61,     0,     0,    62,    63,     0,
       0,    53,    54,     0,     0,     0,     0,     0,     0,    56,
      65,     0,    66,    41,    42,     0,    43,    44,    45,    46,
      47,     0,     0,     0,     0,     0,     0,    60,    61,     0,
       0,    62,    63,    64,     0,     0,     0,    53,    54,     0,
       0,     0,     0,     0,    65,    56,    66,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    60,    61,     0,     0,    62,    63,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      65,     0,    66
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const unsigned char yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0
};

static const short int yycheck[] =
{
      36,    37,   195,   267,   286,   147,   294,    75,   113,   159,
     160,    49,    48,    51,    50,     3,     4,    34,   196,   169,
     223,   224,   429,    59,    60,    61,   214,   531,    68,    38,
      66,   535,   216,   425,    22,   427,   187,    25,    62,    63,
      49,    65,    51,    20,   116,   220,   221,    35,   218,    40,
      59,    60,    61,    38,    20,    24,    24,    24,    44,    40,
      44,    23,    10,    11,    49,    24,    51,     5,    44,    16,
      16,    18,    87,    21,    12,    24,    87,    23,     5,    64,
      24,    24,    24,    98,    24,    24,    20,    98,    44,    37,
       0,   262,    24,    24,   265,    24,    24,    14,    24,    24,
     271,    49,     5,    92,    93,   145,    68,    20,    20,    12,
     101,   147,   148,    99,    31,    99,    64,    44,    66,    67,
     101,    87,    68,   100,   628,   267,   194,   278,   101,    98,
      98,    98,    98,   201,   239,   285,   339,   340,   545,    98,
     328,   319,    90,    91,   286,   433,   330,   135,   136,    98,
     542,   187,   188,    87,    98,    98,    98,   193,    98,    98,
     335,   336,   332,    44,   200,    44,    98,    98,    44,    98,
      98,   243,    98,    98,    87,    87,    97,   249,     5,   188,
      44,   198,    44,   255,   193,     4,     5,     5,    44,    44,
      44,   200,     5,    12,    13,    13,    44,    44,   462,    12,
      13,    44,   226,   227,   228,   229,    44,    95,   232,    44,
     381,    47,   100,    44,   385,   386,     5,    44,    99,   390,
      99,     5,    87,    99,    13,   396,     5,   398,   213,     5,
      44,   267,   272,   273,    13,    99,    12,    99,    57,    58,
      59,    44,   278,    99,    99,    99,   282,   283,   530,     5,
     286,    99,    99,    55,   290,   295,    99,    13,   294,    61,
      44,    99,   298,   301,    99,   274,   302,   276,    99,   305,
      16,     5,    18,   261,   310,   311,   264,   419,    57,    58,
      59,    57,    58,    59,    88,    89,   322,   359,    44,   274,
     362,   276,   301,   302,   444,   367,   305,     5,   370,    17,
      44,     5,    20,   375,   321,    13,   378,     5,    12,    13,
      44,     5,   297,   322,    12,    13,   301,    92,    93,     5,
     462,   345,   346,   347,   348,    98,   497,   351,     5,   500,
      97,     5,   503,     5,    44,   506,    44,     5,    12,   510,
     325,   512,   624,    44,    12,   627,    44,    88,    89,    57,
      58,    59,    87,    57,    58,    59,   549,   393,    44,    57,
      58,    59,     5,    57,    58,    59,    97,    44,    88,    12,
      44,    55,   408,    17,    88,    87,    44,    61,    98,   415,
       8,   417,   418,   419,    98,    57,    58,    59,   424,     9,
      87,   427,     5,   429,   434,   404,   405,   433,   470,    12,
      13,    44,   474,    88,     5,   441,   442,    10,   480,   445,
     692,   447,   484,    98,    57,    58,    59,    10,   490,   404,
     405,   102,   494,   103,    62,   104,   462,   463,    44,    87,
     101,    44,   441,   442,    65,    38,    39,    44,    41,    42,
      43,    44,    45,    44,    65,    38,    39,    40,    41,    42,
      43,    44,    45,     5,     5,    44,    57,    58,    59,    62,
      63,    13,   498,    94,    95,    96,    88,    70,   504,    62,
      63,     5,    44,    94,    95,    96,    98,    70,   514,     5,
      44,   517,   522,   523,   626,    88,    89,     5,   528,    92,
      93,     5,    44,    44,   530,    88,    89,    44,    44,    92,
      93,   694,   105,    88,   107,   108,    57,    58,    59,   545,
       5,    44,   105,    98,   107,     5,   552,    88,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    88,
      88,    88,    88,    88,    88,    88,    98,    98,    88,    98,
      98,    98,    98,    98,    98,    98,    54,    88,    98,    88,
      88,   587,    87,    21,    47,    87,   592,    98,   594,    98,
      98,   106,    87,   599,    87,   108,     8,   603,    99,   609,
     606,     9,    87,   613,    21,    10,   612,   617,   618,   619,
     102,    44,   103,    44,   104,   621,    98,    44,   624,    99,
     626,   627,   100,    44,    44,    44,    44,    99,    44,   635,
      87,    87,    87,    44,    87,   106,    98,    87,    87,    87,
      87,    87,   100,    16,    98,    16,    98,    44,    99,    21,
      87,   657,    47,    98,   660,    99,    98,    98,   664,    99,
      99,   667,    98,    98,   670,    87,    98,   673,   678,   679,
      99,    99,    87,    87,    87,    98,   100,    87,   315,    44,
     106,    16,   688,    87,   409,   691,   692,    87,     4,    98,
       6,    98,   698,    99,    10,    98,    98,     0,    99,    15,
      98,    17,    98,    19,    20,    99,    22,    98,    98,    25,
     720,   721,    99,    99,    98,    98,    98,    98,   724,    98,
      98,   727,    38,    39,    87,    41,    42,    43,    44,    45,
      46,    99,    87,    99,    50,    51,    52,    53,    98,    98,
      87,    99,    98,    93,    98,    98,    62,    63,    99,    98,
     463,    99,    98,    69,    70,    71,    72,    98,   234,    99,
      98,    98,   155,    99,    98,    98,   143,    99,    98,    98,
      98,    87,    88,    89,    98,    98,    92,    93,    94,     4,
      98,     6,   212,    98,    98,    10,    98,    98,    98,   105,
      15,   107,    17,    98,    19,    20,    98,    22,    98,    98,
      25,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    38,    39,   185,    41,    42,    43,    44,
      45,    46,    61,    10,   436,    50,    51,    52,    53,   160,
      35,   725,   535,    -1,    -1,    -1,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    -1,    -1,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    10,    87,    88,    89,    -1,    -1,    92,    93,    94,
      -1,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,
     105,    -1,   107,    70,    -1,    -1,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    10,
      -1,    88,    89,    -1,    -1,    92,    93,    94,    -1,    -1,
      -1,    -1,    99,    62,    63,    -1,    -1,    -1,   105,    -1,
     107,    70,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    -1,    10,    -1,    88,
      89,    -1,    -1,    92,    93,    94,    -1,    -1,    -1,    -1,
      99,    62,    63,    -1,    -1,    -1,   105,    -1,   107,    70,
      -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,    42,
      43,    44,    45,    -1,    -1,    10,    -1,    88,    89,    -1,
      -1,    92,    93,    94,    -1,    -1,    -1,    -1,    99,    62,
      63,    -1,    -1,    -1,   105,    -1,   107,    70,    -1,    -1,
      -1,    -1,    -1,    38,    39,    -1,    41,    42,    43,    44,
      45,    -1,    -1,    10,    -1,    88,    89,    -1,    -1,    92,
      93,    94,    -1,    -1,    -1,    -1,    99,    62,    63,    -1,
      -1,    -1,   105,    -1,   107,    70,    -1,    -1,    -1,    -1,
      -1,    38,    39,    -1,    41,    42,    43,    44,    45,    10,
      -1,    -1,    -1,    88,    89,    -1,    -1,    92,    93,    94,
      -1,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,
     105,   106,   107,    70,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    10,    -1,    -1,    -1,    -1,
      87,    88,    89,    -1,    -1,    92,    93,    94,    -1,    -1,
      -1,    62,    63,    -1,    -1,    -1,    -1,    -1,   105,    70,
     107,    -1,    -1,    38,    39,    -1,    41,    42,    43,    44,
      45,    10,    -1,    -1,    -1,    -1,    -1,    88,    89,    -1,
      -1,    92,    93,    94,    -1,    -1,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,   105,    70,   107,    -1,    -1,    38,
      39,    -1,    41,    42,    43,    44,    45,    -1,    -1,    10,
      -1,    -1,    -1,    88,    89,    -1,    -1,    92,    93,    94,
      -1,    -1,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,
     105,    70,   107,    -1,    -1,    -1,    -1,    38,    39,    -1,
      41,    42,    43,    44,    45,    -1,    -1,    10,    -1,    88,
      89,    -1,    -1,    92,    93,    -1,    -1,    -1,    -1,    98,
      -1,    62,    63,    -1,    -1,    -1,   105,    -1,   107,    70,
      -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    10,    -1,    -1,    -1,    88,    89,    -1,
      -1,    92,    93,    -1,    -1,    -1,    -1,    98,    -1,    62,
      63,    -1,    -1,    -1,   105,    -1,   107,    70,    -1,    -1,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    10,
      -1,    -1,    -1,    -1,    -1,    88,    89,    -1,    -1,    92,
      93,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,
      -1,    -1,   105,    70,   107,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    10,    -1,    -1,    -1,    -1,
      -1,    88,    89,    -1,    -1,    92,    93,    -1,    -1,    -1,
      -1,    62,    63,    -1,    -1,    -1,    -1,    -1,   105,    70,
     107,    -1,    -1,    38,    39,    -1,    41,    42,    43,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    -1,
      -1,    92,    93,    -1,    -1,    -1,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,   105,    70,   107,    38,    39,    -1,
      41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    89,    -1,    -1,    92,    93,    -1,
      -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,
     105,    -1,   107,    38,    39,    -1,    41,    42,    43,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    -1,
      -1,    92,    93,    94,    -1,    -1,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,   105,    70,   107,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    89,    -1,    -1,    92,    93,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,   107
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     4,     5,    12,    13,    57,    58,    59,   110,   111,
     112,   125,   133,   134,   198,   199,    44,   136,   137,   138,
      44,     5,    13,   125,     5,    12,   125,     0,     5,    12,
      13,    97,   112,     6,    10,    15,    17,    19,    20,    22,
      25,    38,    39,    41,    42,    43,    44,    45,    46,    50,
      51,    52,    53,    62,    63,    69,    70,    71,    72,    87,
      88,    89,    92,    93,    94,   105,   107,   113,   114,   116,
     117,   118,   119,   121,   122,   123,   126,   127,   128,   129,
     130,   131,   132,   133,   141,   142,   143,   144,   146,   147,
     148,   149,   152,   155,   156,   157,   159,   161,   162,   164,
     166,   168,   170,   172,   174,   176,   178,   179,   181,   182,
     183,   101,   139,    87,   135,    47,    88,    98,    44,     5,
     125,     5,    13,    44,     5,   125,     5,    12,    44,     5,
      13,     5,    12,   112,   162,    12,    13,    44,   125,   198,
     157,   157,   166,   168,   192,    98,    44,    88,    89,   153,
     157,   192,   157,   194,   192,    44,   157,   166,    99,   157,
     166,   185,   106,   185,   179,   179,   168,   179,   108,   157,
     197,   156,    97,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    54,   100,   120,   124,    87,   122,
      97,     6,   116,    87,   123,    17,     8,   158,     9,   160,
      87,   123,    10,    11,    21,    37,    49,    64,    66,    67,
      90,    91,   163,   165,   102,   167,   103,   169,   104,   171,
      55,    61,   173,    92,    93,   175,    65,    94,    95,    96,
     177,    62,    40,   101,   180,   186,    44,   101,   137,    87,
      44,    99,   136,    88,    98,    44,     5,    44,     5,    88,
      98,    44,     5,    44,     5,    88,    98,    44,     5,    44,
       5,    13,    44,   125,    12,    44,   125,    88,   115,    12,
      13,    44,    98,    98,    87,   191,    87,   191,    21,   156,
      87,   140,    40,    94,    99,   157,   200,   202,   205,   206,
      98,   157,   188,   189,    87,    98,   151,    47,    87,   193,
     140,    20,    87,   184,   208,    87,   184,   208,    99,   106,
      87,    98,   196,   208,   108,   121,   194,   159,   161,     8,
     162,     9,    87,    21,    10,   165,   168,   170,   102,   172,
     103,   174,   104,   176,   176,    55,    61,   178,   178,    92,
      93,   179,   179,   179,   179,    65,    94,    95,    96,   179,
      44,    40,   186,    44,   137,    98,    99,    99,   136,    88,
      98,    44,    88,    98,    44,    99,   136,    88,    98,    44,
      88,    98,    44,    99,   136,    88,    98,    44,    88,    98,
      44,    44,   125,   115,    13,    44,    44,   125,   115,    12,
      44,    99,   202,    24,    98,    13,    44,    12,    44,   115,
     156,   156,   166,   168,    87,    87,   194,    23,    68,   150,
     154,    44,    87,   157,   157,   100,   208,    40,    94,   204,
     205,   206,    99,    87,    98,   157,   190,    98,   106,    87,
     187,   153,   156,    87,    98,   168,   157,    87,   192,   157,
     166,    87,    87,   157,   157,    87,   120,    16,   161,   162,
     168,   170,   172,   174,   176,   176,   178,   178,   179,   179,
     179,   179,    88,    89,   179,    98,    98,    99,    99,   136,
      88,    98,    99,   136,    88,    98,    98,    99,    99,   136,
      88,    98,    99,   136,    88,    98,    98,    99,    99,   136,
      88,    98,    99,   136,    88,    98,   115,    44,    24,    98,
      44,   115,   115,    44,    24,    98,    44,   115,    99,   157,
      44,   115,    44,   115,    24,    98,    16,    18,   145,    16,
     166,   168,    98,    98,   157,    16,    23,   154,    98,    44,
      87,   201,   203,   157,   157,   157,   157,   205,    87,    87,
     157,   190,   157,   190,   189,    87,   153,   156,   193,    21,
     157,   166,    87,   195,   208,   157,   157,    99,   202,   188,
      98,    98,    99,    99,   136,    98,    99,    99,   136,    98,
      98,    99,    99,   136,    98,    99,    99,   136,    98,    98,
      99,    99,   136,    98,    99,    99,   136,    24,    98,   115,
     157,   115,    24,    98,    24,    98,   115,   157,   115,    24,
      98,    98,   115,    24,    98,   115,    24,    98,   157,    98,
     157,    16,    18,    98,   156,   156,    47,    98,    98,    98,
     156,    40,   205,   206,    87,   203,    87,    87,   201,   203,
      87,   190,   189,   159,   157,    87,    99,   106,    98,    98,
      99,    98,    98,    99,    98,    98,    99,    98,    98,    99,
      98,    98,    99,    98,    98,    99,   157,    24,    98,    98,
      24,    98,   157,   157,    24,    98,    98,    24,    98,   157,
      24,    98,   157,    24,    98,   157,    98,   156,    98,    98,
     157,   156,    16,    44,   156,   156,   156,   157,    40,   206,
     205,    40,    87,   203,    17,   207,   208,   209,    98,   157,
      98,    98,    98,    98,    98,    98,    98,   157,   157,    98,
      98,   157,   157,    98,   157,    98,   157,    98,   156,   156,
      98,    98,   157,   157,    40,   159,   157,    98,    98,    98,
      98,    98,    98,    98,   156,   156,   157,   207,   157
};

/* Error token number */
#define YYTERROR 1


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#define YYLEX yylex ()

YYSTYPE yylval;

int yynerrs;
int yychar;

static const int YYEOF = 0;
static const int YYEMPTY = -2;

typedef enum { yyok, yyaccept, yyabort, yyerr } YYRESULTTAG;

#define YYCHK(YYE)                                                           \
   do { YYRESULTTAG yyflag = YYE; if (yyflag != yyok) return yyflag; }       \
   while (YYID (0))

#if YYDEBUG

# ifndef YYFPRINTF
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
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

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)          \
do {                                                            \
  if (yydebug)                                                  \
    {                                                           \
      YYFPRINTF (stderr, "%s ", Title);                         \
      yy_symbol_print (stderr, Type, Value);        \
      YYFPRINTF (stderr, "\n");                                 \
    }                                                           \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;

#else /* !YYDEBUG */

# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)

#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYMAXDEPTH * sizeof (GLRStackItem)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Minimum number of free items on the stack allowed after an
   allocation.  This is to allow allocation and initialization
   to be completed by functions that call yyexpandGLRStack before the
   stack is expanded, thus insuring that all necessary pointers get
   properly redirected to new data.  */
#define YYHEADROOM 2

#ifndef YYSTACKEXPANDABLE
# if (! defined __cplusplus \
      || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL))
#  define YYSTACKEXPANDABLE 1
# else
#  define YYSTACKEXPANDABLE 0
# endif
#endif

#if YYSTACKEXPANDABLE
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyexpandGLRStack (Yystack);                       \
  } while (YYID (0))
#else
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyMemoryExhausted (Yystack);                      \
  } while (YYID (0))
#endif


#if YYERROR_VERBOSE

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
static size_t
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      size_t yyn = 0;
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
    return strlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

#endif /* !YYERROR_VERBOSE */

/** State numbers, as in LALR(1) machine */
typedef int yyStateNum;

/** Rule numbers, as in LALR(1) machine */
typedef int yyRuleNum;

/** Grammar symbol */
typedef short int yySymbol;

/** Item references, as in LALR(1) machine */
typedef short int yyItemNum;

typedef struct yyGLRState yyGLRState;
typedef struct yyGLRStateSet yyGLRStateSet;
typedef struct yySemanticOption yySemanticOption;
typedef union yyGLRStackItem yyGLRStackItem;
typedef struct yyGLRStack yyGLRStack;

struct yyGLRState {
  /** Type tag: always true.  */
  yybool yyisState;
  /** Type tag for yysemantics.  If true, yysval applies, otherwise
   *  yyfirstVal applies.  */
  yybool yyresolved;
  /** Number of corresponding LALR(1) machine state.  */
  yyStateNum yylrState;
  /** Preceding state in this stack */
  yyGLRState* yypred;
  /** Source position of the first token produced by my symbol */
  size_t yyposn;
  union {
    /** First in a chain of alternative reductions producing the
     *  non-terminal corresponding to this state, threaded through
     *  yynext.  */
    yySemanticOption* yyfirstVal;
    /** Semantic value for this state.  */
    YYSTYPE yysval;
  } yysemantics;
};

struct yyGLRStateSet {
  yyGLRState** yystates;
  /** During nondeterministic operation, yylookaheadNeeds tracks which
   *  stacks have actually needed the current lookahead.  During deterministic
   *  operation, yylookaheadNeeds[0] is not maintained since it would merely
   *  duplicate yychar != YYEMPTY.  */
  yybool* yylookaheadNeeds;
  size_t yysize, yycapacity;
};

struct yySemanticOption {
  /** Type tag: always false.  */
  yybool yyisState;
  /** Rule number for this reduction */
  yyRuleNum yyrule;
  /** The last RHS state in the list of states to be reduced.  */
  yyGLRState* yystate;
  /** The lookahead for this reduction.  */
  int yyrawchar;
  YYSTYPE yyval;
  /** Next sibling in chain of options.  To facilitate merging,
   *  options are chained in decreasing order by address.  */
  yySemanticOption* yynext;
};

/** Type of the items in the GLR stack.  The yyisState field
 *  indicates which item of the union is valid.  */
union yyGLRStackItem {
  yyGLRState yystate;
  yySemanticOption yyoption;
};

struct yyGLRStack {
  int yyerrState;


  YYJMP_BUF yyexception_buffer;
  yyGLRStackItem* yyitems;
  yyGLRStackItem* yynextFree;
  size_t yyspaceLeft;
  yyGLRState* yysplitPoint;
  yyGLRState* yylastDeleted;
  yyGLRStateSet yytops;
};

#if YYSTACKEXPANDABLE
static void yyexpandGLRStack (yyGLRStack* yystackp);
#endif

static void yyFail (yyGLRStack* yystackp, const char* yymsg)
  __attribute__ ((__noreturn__));
static void
yyFail (yyGLRStack* yystackp, const char* yymsg)
{
  if (yymsg != YY_NULL)
    yyerror (yymsg);
  YYLONGJMP (yystackp->yyexception_buffer, 1);
}

static void yyMemoryExhausted (yyGLRStack* yystackp)
  __attribute__ ((__noreturn__));
static void
yyMemoryExhausted (yyGLRStack* yystackp)
{
  YYLONGJMP (yystackp->yyexception_buffer, 2);
}

#if YYDEBUG || YYERROR_VERBOSE
/** A printable representation of TOKEN.  */
static inline const char*
yytokenName (yySymbol yytoken)
{
  if (yytoken == YYEMPTY)
    return "";

  return yytname[yytoken];
}
#endif

/** Fill in YYVSP[YYLOW1 .. YYLOW0-1] from the chain of states starting
 *  at YYVSP[YYLOW0].yystate.yypred.  Leaves YYVSP[YYLOW1].yystate.yypred
 *  containing the pointer to the next state in the chain.  */
static void yyfillin (yyGLRStackItem *, int, int) __attribute__ ((__unused__));
static void
yyfillin (yyGLRStackItem *yyvsp, int yylow0, int yylow1)
{
  int i;
  yyGLRState *s = yyvsp[yylow0].yystate.yypred;
  for (i = yylow0-1; i >= yylow1; i -= 1)
    {
      YYASSERT (s->yyresolved);
      yyvsp[i].yystate.yyresolved = yytrue;
      yyvsp[i].yystate.yysemantics.yysval = s->yysemantics.yysval;
      s = yyvsp[i].yystate.yypred = s->yypred;
    }
}

/* Do nothing if YYNORMAL or if *YYLOW <= YYLOW1.  Otherwise, fill in
 * YYVSP[YYLOW1 .. *YYLOW-1] as in yyfillin and set *YYLOW = YYLOW1.
 * For convenience, always return YYLOW1.  */
static inline int yyfill (yyGLRStackItem *, int *, int, yybool)
     __attribute__ ((__unused__));
static inline int
yyfill (yyGLRStackItem *yyvsp, int *yylow, int yylow1, yybool yynormal)
{
  if (!yynormal && yylow1 < *yylow)
    {
      yyfillin (yyvsp, *yylow, yylow1);
      *yylow = yylow1;
    }
  return yylow1;
}

/** Perform user action for rule number YYN, with RHS length YYRHSLEN,
 *  and top stack item YYVSP.  YYLVALP points to place to put semantic
 *  value ($$), and yylocp points to place for location information
 *  (@$).  Returns yyok for normal return, yyaccept for YYACCEPT,
 *  yyerr for YYERROR, yyabort for YYABORT.  */
/*ARGSUSED*/ static YYRESULTTAG
yyuserAction (yyRuleNum yyn, int yyrhslen, yyGLRStackItem* yyvsp,
              yyGLRStack* yystackp,
              YYSTYPE* yyvalp)
{
  yybool yynormal __attribute__ ((__unused__)) =
    (yystackp->yysplitPoint == YY_NULL);
  int yylow;
# undef yyerrok
# define yyerrok (yystackp->yyerrState = 0)
# undef YYACCEPT
# define YYACCEPT return yyaccept
# undef YYABORT
# define YYABORT return yyabort
# undef YYERROR
# define YYERROR return yyerrok, yyerr
# undef YYRECOVERING
# define YYRECOVERING() (yystackp->yyerrState != 0)
# undef yyclearin
# define yyclearin (yychar = YYEMPTY)
# undef YYFILL
# define YYFILL(N) yyfill (yyvsp, &yylow, N, yynormal)
# undef YYBACKUP
# define YYBACKUP(Token, Value)                                              \
  return yyerror (YY_("syntax error: cannot back up")),     \
         yyerrok, yyerr

  yylow = 1;
  if (yyrhslen == 0)
    *yyvalp = yyval_default;
  else
    *yyvalp = yyvsp[YYFILL (1-yyrhslen)].yystate.yysemantics.yysval;
  switch (yyn)
    {
        case 2:
/* Line 868 of glr.c  */
#line 125 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"file_input: program ENDMARKER\n";
										p->check_inhertance_list();
						if(!p->errRecovery->errQ->isEmpty())
								p->errRecovery->printErrQueue();
						p->print_symbol();
						ast->tree((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn));
						ast->print((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn), 0);
						Streams::verbose().flush();	
								}
    break;

  case 3:
/* Line 868 of glr.c  */
#line 136 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"program : import_stmt ';' temp2 \n";}
    break;

  case 4:
/* Line 868 of glr.c  */
#line 137 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"program : temp2 \n";}
    break;

  case 5:
/* Line 868 of glr.c  */
#line 141 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"temp2: classdef temp2\n";
							ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
							cout<<"enter upper"<<endl;
						}
    break;

  case 6:
/* Line 868 of glr.c  */
#line 145 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"temp2: classdef \n";
							//ast->createClassNode();
							cout<<"enter classdef"<<endl;
					}
    break;

  case 7:
/* Line 868 of glr.c  */
#line 162 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							testfunction = p->finishFunctionDeclaration(testfunction,linefunc,colmfunc);
							((*yyvalp).tn)=ast->createFunctionNode(testfunction,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL);
							parameters.clear();
							linefunc=0;colmfunc=0;
							Streams::verbose() <<"funcdef:	funcheader suite \n";
						  }
    break;

  case 8:
/* Line 868 of glr.c  */
#line 170 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader:	DEF  NAME parameters ARROW test ':'  \n";}
    break;

  case 9:
/* Line 868 of glr.c  */
#line 171 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader:  DEF access NAME parameters ARROW test ':'  \n";}
    break;

  case 10:
/* Line 868 of glr.c  */
#line 172 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,ff, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
											Streams::verbose() <<"funcheader: DEF NAME parameters ':' \n";
											
									   }
    break;

  case 11:
/* Line 868 of glr.c  */
#line 181 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    { 
												testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,ff, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
												Streams::verbose() <<"funcheader: DEF access NAME parameters ':' \n";
											  }
    break;

  case 12:
/* Line 868 of glr.c  */
#line 189 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC NAME parameters ARROW test ':' \n";}
    break;

  case 13:
/* Line 868 of glr.c  */
#line 190 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL NAME parameters ARROW test ':' \n";}
    break;

  case 14:
/* Line 868 of glr.c  */
#line 191 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
												testfunction = p->createTypeFunctionHeader(t,true,pp,pro,ff, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
												Streams::verbose() <<"funcheader: DEF STATIC NAME parameters ':' \n";
											 }
    break;

  case 15:
/* Line 868 of glr.c  */
#line 199 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
												Streams::verbose() <<"funcheader: DEF FINAL NAME parameters ':' \n";
											 }
    break;

  case 16:
/* Line 868 of glr.c  */
#line 207 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC FINAL NAME parameters ARROW test ':' \n";}
    break;

  case 17:
/* Line 868 of glr.c  */
#line 208 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 18:
/* Line 868 of glr.c  */
#line 209 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
														testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
														Streams::verbose() <<"funcheader: DEF STATIC FINAL NAME parameters ':'  \n";
												    }
    break;

  case 19:
/* Line 868 of glr.c  */
#line 217 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
													Streams::verbose() <<"funcheader: DEF FINAL STATIC NAME parameters ':'  \n";
													}
    break;

  case 20:
/* Line 868 of glr.c  */
#line 225 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
																Streams::verbose() <<"funcheader: DEF FINAL access NAME parameters ARROW test ':'  \n";
															  }
    break;

  case 21:
/* Line 868 of glr.c  */
#line 233 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC access NAME parameters ARROW test ':'  \n";}
    break;

  case 22:
/* Line 868 of glr.c  */
#line 234 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											testfunction = p->createTypeFunctionHeader(t,true,pp,pro,ff, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
														colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF STATIC access NAME parameters ':'  \n";
													}
    break;

  case 23:
/* Line 868 of glr.c  */
#line 241 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
														testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
														Streams::verbose() <<"funcheader: DEF STATIC access NAME parameters ':' ";
													}
    break;

  case 24:
/* Line 868 of glr.c  */
#line 249 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC FINAL access NAME parameters ARROW test ':'  \n";}
    break;

  case 25:
/* Line 868 of glr.c  */
#line 250 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL STATIC access NAME parameters ARROW test ':'  \n";}
    break;

  case 26:
/* Line 868 of glr.c  */
#line 251 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
															Streams::verbose() <<"funcheader: DEF STATIC FINAL access NAME parameters ':'  \n";
														  }
    break;

  case 27:
/* Line 868 of glr.c  */
#line 259 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF FINAL STATIC access NAME parameters ':'  \n";
														  }
    break;

  case 28:
/* Line 868 of glr.c  */
#line 266 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 29:
/* Line 868 of glr.c  */
#line 267 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access FINAL NAME parameters ARROW test ':'  \n";}
    break;

  case 30:
/* Line 868 of glr.c  */
#line 268 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
														testfunction = p->createTypeFunctionHeader(t,true,pp,pro,ff, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
														Streams::verbose() <<"funcheader: DEF access STATIC NAME parameters ':'  \n";
													}
    break;

  case 31:
/* Line 868 of glr.c  */
#line 276 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
														testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
														Streams::verbose() <<"funcheader: DEF access FINAL NAME parameters ':'  \n";
													}
    break;

  case 32:
/* Line 868 of glr.c  */
#line 284 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access STATIC FINAL NAME parameters ARROW test ':'  \n";}
    break;

  case 33:
/* Line 868 of glr.c  */
#line 285 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access FINAL STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 34:
/* Line 868 of glr.c  */
#line 286 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
															Streams::verbose() <<"funcheader: DEF access STATIC FINAL NAME parameters ':'  \n";
			   											  }
    break;

  case 35:
/* Line 868 of glr.c  */
#line 294 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF access FINAL STATIC NAME parameters ':'  \n";
			  											  }
    break;

  case 36:
/* Line 868 of glr.c  */
#line 301 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC access FINAL NAME parameters ARROW test ':'  \n";}
    break;

  case 37:
/* Line 868 of glr.c  */
#line 302 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL access STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 38:
/* Line 868 of glr.c  */
#line 303 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF STATIC access FINAL NAME parameters ':'  \n";
			  											  }
    break;

  case 39:
/* Line 868 of glr.c  */
#line 310 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF FINAL access STATIC NAME parameters ':'  \n";
														  }
    break;

  case 40:
/* Line 868 of glr.c  */
#line 319 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"parameters:'(' arglist ')'\n";}
    break;

  case 41:
/* Line 868 of glr.c  */
#line 320 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"parameters:'(' ')'\n";}
    break;

  case 42:
/* Line 868 of glr.c  */
#line 323 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {	((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);	Streams::verbose() <<"stmt:	simple_stmt \n";
						
					}
    break;

  case 43:
/* Line 868 of glr.c  */
#line 326 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {	((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);cout<<"line num"<<yylval.r.lineNum<<endl;	Streams::verbose() <<"stmt: compound_stmt\n";}
    break;

  case 44:
/* Line 868 of glr.c  */
#line 328 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"simple_stmt: small_stmt ';' \n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 45:
/* Line 868 of glr.c  */
#line 332 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: expr_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 46:
/* Line 868 of glr.c  */
#line 335 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: del_stmt \n";}
    break;

  case 47:
/* Line 868 of glr.c  */
#line 336 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: pass_stmt \n";}
    break;

  case 48:
/* Line 868 of glr.c  */
#line 337 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: flow_stmt \n";}
    break;

  case 49:
/* Line 868 of glr.c  */
#line 338 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: import_stmt \n";}
    break;

  case 50:
/* Line 868 of glr.c  */
#line 339 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: global_stmt \n";}
    break;

  case 51:
/* Line 868 of glr.c  */
#line 340 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: nonlocal_stmt \n";}
    break;

  case 52:
/* Line 868 of glr.c  */
#line 341 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: print_stmt \n";}
    break;

  case 53:
/* Line 868 of glr.c  */
#line 344 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"expr_stmt:	testlist_star_expr augassign testlist \n";}
    break;

  case 54:
/* Line 868 of glr.c  */
#line 345 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"expr_stmt: testlist_star_expr \n";}
    break;

  case 55:
/* Line 868 of glr.c  */
#line 346 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"expr_stmt: testlist_star_expr right_testlist \n";
													//$<amerstr>1;
													visit_num=0;
													Node *il=new Node();
													il=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
													Node* p=new Node();
													p=ast->createAssignNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),NULL);
													if(lastNode)
													{
														cout<<"enter heree amer \n";
														((*yyvalp).tn)=ast->addNext(lastNode,p);
														
														lastNode=NULL;
														cout<<"print in expr_stmt if";
														((*yyvalp).tn)->print();cout<<endl;
													}
													if((v)&&(array_right))
													{
														v->set_isarray(true);
													}
													else
														((*yyvalp).tn)=p;
													
													
												}
    break;

  case 56:
/* Line 868 of glr.c  */
#line 373 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"right_testlist: '=' testlist_star_expr right_testlist \n";}
    break;

  case 57:
/* Line 868 of glr.c  */
#line 374 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"right_testlist: '=' testlist_star_expr \n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 58:
/* Line 868 of glr.c  */
#line 377 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: comma_test_star_seqJ \n";}
    break;

  case 59:
/* Line 868 of glr.c  */
#line 378 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: comma_test_star_seqJ ',' \n";}
    break;

  case 60:
/* Line 868 of glr.c  */
#line 379 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"',' \n";}
    break;

  case 61:
/* Line 868 of glr.c  */
#line 380 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: test comma_test_star_seqJ \n";}
    break;

  case 62:
/* Line 868 of glr.c  */
#line 381 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
								Streams::verbose() <<"testlist_star_expr: test \n"; 
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 63:
/* Line 868 of glr.c  */
#line 385 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: star_expr comma_test_star_seqJ ',' \n";}
    break;

  case 64:
/* Line 868 of glr.c  */
#line 386 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: star_expr ',' \n";}
    break;

  case 65:
/* Line 868 of glr.c  */
#line 389 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star : ',' test \n";}
    break;

  case 66:
/* Line 868 of glr.c  */
#line 390 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star : ',' star_expr \n";}
    break;

  case 67:
/* Line 868 of glr.c  */
#line 393 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seqJ : comma_test_star_seqJ comma_test_star \n";}
    break;

  case 68:
/* Line 868 of glr.c  */
#line 394 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seqJ : comma_test_star \n";}
    break;

  case 69:
/* Line 868 of glr.c  */
#line 396 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	PLUS_EQUAL \n";}
    break;

  case 70:
/* Line 868 of glr.c  */
#line 397 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MINUS_EQUAL \n";}
    break;

  case 71:
/* Line 868 of glr.c  */
#line 398 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	STAR_EQUAL \n";}
    break;

  case 72:
/* Line 868 of glr.c  */
#line 399 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	DIV_EQUAL \n";}
    break;

  case 73:
/* Line 868 of glr.c  */
#line 400 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MOD_EQUAL \n";}
    break;

  case 74:
/* Line 868 of glr.c  */
#line 401 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	AND_EQUAL \n";}
    break;

  case 75:
/* Line 868 of glr.c  */
#line 402 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	OR_EQUAL \n";}
    break;

  case 76:
/* Line 868 of glr.c  */
#line 403 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	SHAPOO_EQUAL \n";}
    break;

  case 77:
/* Line 868 of glr.c  */
#line 404 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	LESS_THAN_2_EQUAL \n";}
    break;

  case 78:
/* Line 868 of glr.c  */
#line 405 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MORE_THAN_2_EQUAL \n";}
    break;

  case 79:
/* Line 868 of glr.c  */
#line 406 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	STAR_2_EQUAL \n";}
    break;

  case 80:
/* Line 868 of glr.c  */
#line 407 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	DIV_2_EQUAL \n";}
    break;

  case 81:
/* Line 868 of glr.c  */
#line 410 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose()<<"access_modef: PRIVATE\n";acc_mod="private";pp=true;}
    break;

  case 82:
/* Line 868 of glr.c  */
#line 411 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {pp=false;Streams::verbose()<<"access_modef:	PUBLIC\n";acc_mod="public";pp=false;}
    break;

  case 83:
/* Line 868 of glr.c  */
#line 412 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {pro=true;Streams::verbose()<<"access_modef:	PROTECTED\n";acc_mod="protected";}
    break;

  case 84:
/* Line 868 of glr.c  */
#line 414 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"print_stmt: PRINT exprlist \n";}
    break;

  case 85:
/* Line 868 of glr.c  */
#line 415 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"del_stmt:   DEL exprlist \n";}
    break;

  case 86:
/* Line 868 of glr.c  */
#line 418 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"pass_stmt:	PASS \n";}
    break;

  case 87:
/* Line 868 of glr.c  */
#line 421 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"flow_stmt:	break_stmt \n";}
    break;

  case 88:
/* Line 868 of glr.c  */
#line 422 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"flow_stmt: continue_stmt\n";}
    break;

  case 89:
/* Line 868 of glr.c  */
#line 423 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"flow_stmt: return_stmt\n";}
    break;

  case 90:
/* Line 868 of glr.c  */
#line 426 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"break_stmt: BREAK \n";}
    break;

  case 91:
/* Line 868 of glr.c  */
#line 429 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"continue_stmt:	CONTINUE \n";}
    break;

  case 92:
/* Line 868 of glr.c  */
#line 432 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"return_stmt:	RETURN testlist \n";}
    break;

  case 93:
/* Line 868 of glr.c  */
#line 433 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"return_stmt:	RETURN \n";}
    break;

  case 94:
/* Line 868 of glr.c  */
#line 437 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"import_stmt: import_name \n";}
    break;

  case 95:
/* Line 868 of glr.c  */
#line 440 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"import_name: IMPORT dotted_as_names \n";}
    break;

  case 96:
/* Line 868 of glr.c  */
#line 443 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_dotted_as_name_seq: ',' dotted_as_name \n";}
    break;

  case 97:
/* Line 868 of glr.c  */
#line 444 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_dotted_as_name_seq: comma_dotted_as_name_seq ',' dotted_as_name \n";}
    break;

  case 98:
/* Line 868 of glr.c  */
#line 446 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
									Streams::verbose() <<"comma_dotted_as_name_seq: dotted_as_names: dotted_as_name \n";
								t_id=new char[10];
								strcpy(t_id,temp_id.c_str());
								inhertance_list.push_back(t_id);
								temp_id="";
					}
    break;

  case 99:
/* Line 868 of glr.c  */
#line 453 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
															Streams::verbose() <<"comma_dotted_as_name_seq: dotted_as_name comma_dotted_as_name_seq \n";
						t_id=new char[10];
								strcpy(t_id,temp_id.c_str());
								inhertance_list.push_back(t_id);
								temp_id="";
				 }
    break;

  case 100:
/* Line 868 of glr.c  */
#line 463 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dotted_as_name: dotted_name \n";}
    break;

  case 101:
/* Line 868 of glr.c  */
#line 464 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dotted_as_name: dotted_name AS NAME\n";}
    break;

  case 102:
/* Line 868 of glr.c  */
#line 467 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dotted_name: NAME \n"; temp_id=temp_id+(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal);}
    break;

  case 103:
/* Line 868 of glr.c  */
#line 468 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dotted_name: NAME dotted_name_seq \n";}
    break;

  case 104:
/* Line 868 of glr.c  */
#line 471 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"dotted_name_seq: '.' NAME \n";
							temp_id=temp_id+"."+(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal);
						}
    break;

  case 105:
/* Line 868 of glr.c  */
#line 475 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
												Streams::verbose() <<"dotted_name_seq: dotted_name_seq '.' NAME \n";
					temp_id=temp_id+"."+(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal);
				 }
    break;

  case 106:
/* Line 868 of glr.c  */
#line 481 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_name_seq :	',' NAME \n";}
    break;

  case 107:
/* Line 868 of glr.c  */
#line 482 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_name_seq :	comma_name_seq ',' NAME \n";}
    break;

  case 108:
/* Line 868 of glr.c  */
#line 485 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"global_stmt: GLOBAL NAME \n";}
    break;

  case 109:
/* Line 868 of glr.c  */
#line 486 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"global_stmt: GLOBAL NAME comma_name_seq\n";}
    break;

  case 110:
/* Line 868 of glr.c  */
#line 489 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"nonlocal_stmt:	NONLOCAL NAME \n";}
    break;

  case 111:
/* Line 868 of glr.c  */
#line 490 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"nonlocal_stmt: NONLOCAL NAME comma_name_seq \n";}
    break;

  case 112:
/* Line 868 of glr.c  */
#line 493 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"compound_stmt:  if_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 113:
/* Line 868 of glr.c  */
#line 497 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: while_stmt\n";}
    break;

  case 114:
/* Line 868 of glr.c  */
#line 498 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
								Streams::verbose() <<"compound_stmt: for_stmt\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						   }
    break;

  case 115:
/* Line 868 of glr.c  */
#line 502 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
								Streams::verbose() <<"compound_stmt: try_stmt\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						   }
    break;

  case 116:
/* Line 868 of glr.c  */
#line 506 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: with_stmt\n";}
    break;

  case 117:
/* Line 868 of glr.c  */
#line 507 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {	
								Streams::verbose() <<"compound_stmt: funcdef\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 118:
/* Line 868 of glr.c  */
#line 511 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
								Streams::verbose() <<"compound_stmt: vardef\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 119:
/* Line 868 of glr.c  */
#line 515 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
									Streams::verbose() <<"compound_stmt: DEF classdef\n";
									((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
								}
    break;

  case 120:
/* Line 868 of glr.c  */
#line 520 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF NAME\n";
											((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,0,0);
											v=((*yyvalp).var);
										((*yyvalp).tn) = ast->createIDNode(v,0,0);
									}
    break;

  case 121:
/* Line 868 of glr.c  */
#line 525 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access NAME\n";
											Streams::verbose()<<"var_declaration: access_modef ID\n";
									((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false,false);
									v=((*yyvalp).var);
									acc_mod="";
									((*yyvalp).tn) = ast->createIDNode(v,0,0);
											}
    break;

  case 122:
/* Line 868 of glr.c  */
#line 532 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC NAME\n";
											Streams::verbose()<<"var_declaration: STATIC ID\n";
											((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false,false);
											v=((*yyvalp).var);
											((*yyvalp).tn) = ast->createIDNode(v,0,0);
										}
    break;

  case 123:
/* Line 868 of glr.c  */
#line 538 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL NAME\n";
												Streams::verbose()<<"var_declaration: FINAL ID\n";
												((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													((*yyvalp).tn) = ast->createIDNode(v,0,0);
										}
    break;

  case 124:
/* Line 868 of glr.c  */
#line 544 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC FINAL NAME\n";
													Streams::verbose()<<"var_declaration: STATIC FINAL ID\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													((*yyvalp).tn) = ast->createIDNode(v,0,0);
												}
    break;

  case 125:
/* Line 868 of glr.c  */
#line 550 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL STATIC NAME\n";
													Streams::verbose()<<"var_declaration: STATIC FINAL ID\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													((*yyvalp).tn) = ast->createIDNode(v,0,0);
												}
    break;

  case 126:
/* Line 868 of glr.c  */
#line 556 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC access NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													acc_mod="";
													((*yyvalp).tn) = ast->createIDNode(v,0,0);
												}
    break;

  case 127:
/* Line 868 of glr.c  */
#line 562 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL access NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													acc_mod="";
													((*yyvalp).tn) = ast->createIDNode(v,0,0);
												}
    break;

  case 128:
/* Line 868 of glr.c  */
#line 568 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC FINAL access NAME\n";
															((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
															v=((*yyvalp).var);
															acc_mod="";
															((*yyvalp).tn) = ast->createIDNode(v,0,0);
														}
    break;

  case 129:
/* Line 868 of glr.c  */
#line 574 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL STATIC access NAME\n";
															((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
															v=((*yyvalp).var);
															acc_mod="";
															((*yyvalp).tn) = ast->createIDNode(v,0,0);
														}
    break;

  case 130:
/* Line 868 of glr.c  */
#line 580 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access STATIC NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													acc_mod="";
													((*yyvalp).tn) = ast->createIDNode(v,0,0);
												}
    break;

  case 131:
/* Line 868 of glr.c  */
#line 586 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access FINAL NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													acc_mod="";
													((*yyvalp).tn) = ast->createIDNode(v,0,0);
											}
    break;

  case 132:
/* Line 868 of glr.c  */
#line 592 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access STATIC FINAL NAME\n";
														((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
														v=((*yyvalp).var);
														acc_mod="";
														((*yyvalp).tn) = ast->createIDNode(v,0,0);
													}
    break;

  case 133:
/* Line 868 of glr.c  */
#line 598 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access FINAL STATIC NAME\n";
														((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
														v=((*yyvalp).var);
														acc_mod="";
														((*yyvalp).tn) = ast->createIDNode(v,0,0);
													}
    break;

  case 134:
/* Line 868 of glr.c  */
#line 604 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC access FINAL NAME\n";
															((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
															v=((*yyvalp).var);
															acc_mod="";
															((*yyvalp).tn) = ast->createIDNode(v,0,0);
														}
    break;

  case 135:
/* Line 868 of glr.c  */
#line 610 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL access STATIC NAME\n";
														((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
														v=((*yyvalp).var);
														acc_mod="";
														((*yyvalp).tn) = ast->createIDNode(v,0,0);
													}
    break;

  case 136:
/* Line 868 of glr.c  */
#line 617 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
									Streams::verbose() <<"elif_seq :  ELIF test ':' suite \n";
									((*yyvalp).tn) = ast->createElseIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.tn),NULL);								
								}
    break;

  case 137:
/* Line 868 of glr.c  */
#line 621 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() <<"elif_seq : elif_seq ELIF test ':' suite \n";
											Node* elseIfNode = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.tn);
											elseIfNode->Next = ast->createElseIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.tn),NULL);
											((*yyvalp).tn) = elseIfNode;											
										  }
    break;

  case 138:
/* Line 868 of glr.c  */
#line 629 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
								Streams::verbose() <<"if_stmt:	IF test ':' suite \n";
								((*yyvalp).tn) = ast->createIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.tn),NULL);
							  }
    break;

  case 139:
/* Line 868 of glr.c  */
#line 633 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() <<"if_stmt:	IF test ':' suite elif_seq \n";
											((*yyvalp).tn) = ast->createIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.tn), NULL);
										}
    break;

  case 140:
/* Line 868 of glr.c  */
#line 637 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
												Streams::verbose() <<"if_stmt:	IF test ':' suite ELSE ':' suite \n";
												Node* elseNode = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (7))].yystate.yysemantics.yysval.tn),NULL,NULL);
												((*yyvalp).tn) = ast->createIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.tn),elseNode,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (7))].yystate.yysemantics.yysval.tn),NULL);
											  }
    break;

  case 141:
/* Line 868 of glr.c  */
#line 642 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
														Streams::verbose() <<"if_stmt:	IF test ':' suite elif_seq ELSE ':' suite \n";
														Node* elseIfNode = (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.tn);
														Node* elseNode = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (8))].yystate.yysemantics.yysval.tn),NULL,NULL);
														elseIfNode->Next = elseNode;
														((*yyvalp).tn) = ast->createIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.tn),elseIfNode,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (8))].yystate.yysemantics.yysval.tn),NULL);
													   }
    break;

  case 142:
/* Line 868 of glr.c  */
#line 651 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
									Streams::verbose() <<"while_stmt: WHILE test ':' suite \n";
									((*yyvalp).tn) = ast->createWhileNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.tn),NULL);
								 }
    break;

  case 143:
/* Line 868 of glr.c  */
#line 655 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													Streams::verbose() <<"while_stmt:  WHILE test ':' suite ELSE ':' suite \n";
													Node* whileNode= ast->createWhileNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (7))].yystate.yysemantics.yysval.tn),NULL);
													whileNode->Next = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (7))].yystate.yysemantics.yysval.tn),NULL,NULL);
													((*yyvalp).tn) = whileNode;
												 }
    break;

  case 144:
/* Line 868 of glr.c  */
#line 663 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
												Streams::verbose() <<"for_stmt:   FOR exprlist IN testlist ':' suite \n";
												((*yyvalp).tn) = ast->createForNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (6))].yystate.yysemantics.yysval.tn), NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.tn), NULL);
											   }
    break;

  case 145:
/* Line 868 of glr.c  */
#line 667 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																Streams::verbose() <<"for_stmt:  FOR exprlist IN testlist ':' suite ELSE ':' suite\n";
																Node* forNode = ast->createForNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.tn), NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (9))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (9))].yystate.yysemantics.yysval.tn), NULL);
																forNode->Next = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((9) - (9))].yystate.yysemantics.yysval.tn), NULL, NULL);
																((*yyvalp).tn) = forNode;															
															   }
    break;

  case 146:
/* Line 868 of glr.c  */
#line 675 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
												Streams::verbose() <<" try_stmt:   TRY ':' suite try_except_cla_seq\n";
												((*yyvalp).tn) = ast->createTryNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.tn), NULL);
											 }
    break;

  case 147:
/* Line 868 of glr.c  */
#line 679 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																Streams::verbose() <<" try_stmt: TRY ':' suite try_except_cla_seq ELSE ':' suite\n";
																Node* except = (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.tn);
																while(except->Next!=NULL)
																	except = except->Next;
																except->Next = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (7))].yystate.yysemantics.yysval.tn), NULL, NULL);
																((*yyvalp).tn) = ast->createTryNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.tn), NULL);
															 }
    break;

  case 148:
/* Line 868 of glr.c  */
#line 687 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																	Streams::verbose() <<"try_stmt:  TRY ':' suite try_except_cla_seq FINALLY ':' suite\n";
																Node* except = (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.tn);
																while(except->Next!=NULL)
																	except = except->Next;
																except->Next = ast->createFinallyNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (7))].yystate.yysemantics.yysval.tn), NULL, NULL);
																((*yyvalp).tn) = ast->createTryNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.tn), NULL);
																}
    break;

  case 149:
/* Line 868 of glr.c  */
#line 695 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
												Streams::verbose() <<"try_stmt:  TRY ':' suite FINALLY ':' suite\n";
												Node* finally = ast->createFinallyNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (6))].yystate.yysemantics.yysval.tn), NULL, NULL);
												((*yyvalp).tn) = ast->createTryNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.tn), finally, NULL);
											 }
    break;

  case 150:
/* Line 868 of glr.c  */
#line 702 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
												Streams::verbose() <<"try_except_cla_seq: except_clause ':' suite \n";
												Node* except = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn);
												except->Son = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn);
												((*yyvalp).tn) = except;
											}
    break;

  case 151:
/* Line 868 of glr.c  */
#line 708 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																	Streams::verbose() <<"try_except_cla_seq: try_except_cla_seq except_clause ':' suite\n";
																	Node* except_a = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.tn);
																	Node* except_b = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.tn);
																	while(except_a->Next!=NULL)
																		except_a = except_a->Next;
																	except_a->Next = except_b;
																	except_b->Son = (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.tn);
																	((*yyvalp).tn) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.tn);
																}
    break;

  case 152:
/* Line 868 of glr.c  */
#line 720 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"with_seq:	',' with_item \n";}
    break;

  case 153:
/* Line 868 of glr.c  */
#line 721 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"with_seq: with_seq ',' with_item\n";}
    break;

  case 154:
/* Line 868 of glr.c  */
#line 724 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"with_stmt:  WITH with_item ':' suite \n";}
    break;

  case 155:
/* Line 868 of glr.c  */
#line 725 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"with_stmt: WITH with_item with_seq ':' suite\n";}
    break;

  case 156:
/* Line 868 of glr.c  */
#line 728 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<" with_item:  test\n";}
    break;

  case 157:
/* Line 868 of glr.c  */
#line 729 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"with_item: test AS expr\n";}
    break;

  case 158:
/* Line 868 of glr.c  */
#line 732 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
						Streams::verbose() <<"except_clause:  EXCEPT \n";
						((*yyvalp).tn) = ast->createExceptNode(NULL, NULL, NULL, NULL);
					   }
    break;

  case 159:
/* Line 868 of glr.c  */
#line 736 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
								Streams::verbose() <<"except_clause:  EXCEPT test\n";
								((*yyvalp).tn) = ast->createExceptNode(NULL, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn), NULL);
							 }
    break;

  case 160:
/* Line 868 of glr.c  */
#line 740 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"except_clause:  EXCEPT test AS NAME\n";}
    break;

  case 161:
/* Line 868 of glr.c  */
#line 743 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {	
						((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);	Streams:: verbose() <<"list_stmt : stmt\n";
				}
    break;

  case 162:
/* Line 868 of glr.c  */
#line 746 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
								Streams:: verbose() <<"list_stmt : stmt list_stmt\n";
								Node* node = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);
								if(node->Next!=NULL){
									while(node->Next != NULL)
										node = node->Next;
									ast->addNext(node,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
								}else
									ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);	
							}
    break;

  case 163:
/* Line 868 of glr.c  */
#line 759 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"suite:	list_stmt END\n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);	
						}
    break;

  case 164:
/* Line 868 of glr.c  */
#line 763 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {	((*yyvalp).tn)=NULL;	Streams::verbose() <<"suite:	END\n"; ((*yyvalp).tn)=NULL;}
    break;

  case 165:
/* Line 868 of glr.c  */
#line 766 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"test:	or_test\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 166:
/* Line 868 of glr.c  */
#line 767 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"or_test IF or_test ELSE test\n";}
    break;

  case 167:
/* Line 868 of glr.c  */
#line 770 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"or_seq:	OR and_test \n";}
    break;

  case 168:
/* Line 868 of glr.c  */
#line 771 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"or_seq: or_seq OR and_test \n";}
    break;

  case 169:
/* Line 868 of glr.c  */
#line 774 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"or_test:	and_test\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 170:
/* Line 868 of glr.c  */
#line 775 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"or_test:	and_test or_seq\n";}
    break;

  case 171:
/* Line 868 of glr.c  */
#line 778 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_seq: AND not_test \n";}
    break;

  case 172:
/* Line 868 of glr.c  */
#line 779 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_seq: and_seq AND not_test \n";}
    break;

  case 173:
/* Line 868 of glr.c  */
#line 782 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_test:	not_test\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 174:
/* Line 868 of glr.c  */
#line 783 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_test: not_test and_seq \n";}
    break;

  case 175:
/* Line 868 of glr.c  */
#line 786 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"not_test:	NOT not_test\n";}
    break;

  case 176:
/* Line 868 of glr.c  */
#line 787 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"not_test:	comparison\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 177:
/* Line 868 of glr.c  */
#line 790 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op_seq: comp_op expr \n";}
    break;

  case 178:
/* Line 868 of glr.c  */
#line 791 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op_seq: comp_op_seq comp_op expr \n";}
    break;

  case 179:
/* Line 868 of glr.c  */
#line 794 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comparison: expr\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 180:
/* Line 868 of glr.c  */
#line 795 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comparison: expr comp_op_seq\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 181:
/* Line 868 of glr.c  */
#line 798 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: '<' \n";}
    break;

  case 182:
/* Line 868 of glr.c  */
#line 799 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: '>' \n";}
    break;

  case 183:
/* Line 868 of glr.c  */
#line 800 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: EQUAL \n";}
    break;

  case 184:
/* Line 868 of glr.c  */
#line 801 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: MORE_OR_EQUAL \n";}
    break;

  case 185:
/* Line 868 of glr.c  */
#line 802 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: LESS_OR_EQUAL \n";}
    break;

  case 186:
/* Line 868 of glr.c  */
#line 803 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: MORE_LESS \n";}
    break;

  case 187:
/* Line 868 of glr.c  */
#line 804 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: NOT_EQUAL \n";}
    break;

  case 188:
/* Line 868 of glr.c  */
#line 805 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IN \n";}
    break;

  case 189:
/* Line 868 of glr.c  */
#line 806 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: NOT IN \n";}
    break;

  case 190:
/* Line 868 of glr.c  */
#line 807 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IS \n";}
    break;

  case 191:
/* Line 868 of glr.c  */
#line 808 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IS NOT \n";}
    break;

  case 192:
/* Line 868 of glr.c  */
#line 811 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"star_expr: '*' expr \n";}
    break;

  case 193:
/* Line 868 of glr.c  */
#line 814 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"or_xor_expr_seq: '|' xor_expr \n";}
    break;

  case 194:
/* Line 868 of glr.c  */
#line 815 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"or_xor_expr_seq: or_xor_expr_seq '|' xor_expr\n";}
    break;

  case 195:
/* Line 868 of glr.c  */
#line 817 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
					Streams::verbose() <<"expr: xor_expr\n";
					((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
				}
    break;

  case 196:
/* Line 868 of glr.c  */
#line 821 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"expr: xor_expr or_xor_expr_seq\n";}
    break;

  case 197:
/* Line 868 of glr.c  */
#line 824 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"sha_and_expr_seq: '^' and_expr \n";}
    break;

  case 198:
/* Line 868 of glr.c  */
#line 825 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"sha_and_expr_seq: sha_and_expr_seq '^' and_expr\n";}
    break;

  case 199:
/* Line 868 of glr.c  */
#line 828 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"xor_expr: and_expr\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 200:
/* Line 868 of glr.c  */
#line 829 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"xor_expr: and_expr sha_and_expr_seq\n";}
    break;

  case 201:
/* Line 868 of glr.c  */
#line 832 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_shift_expr_seq: '&' shift_expr \n";}
    break;

  case 202:
/* Line 868 of glr.c  */
#line 833 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_shift_expr_seq: and_shift_expr_seq '&' shift_expr\n";}
    break;

  case 203:
/* Line 868 of glr.c  */
#line 836 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_expr: shift_expr\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 204:
/* Line 868 of glr.c  */
#line 837 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_expr: shift_expr and_shift_expr_seq\n";}
    break;

  case 205:
/* Line 868 of glr.c  */
#line 840 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	LESS_THAN_2 arith_expr \n";}
    break;

  case 206:
/* Line 868 of glr.c  */
#line 841 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	MORE_THAN_2 arith_expr \n";}
    break;

  case 207:
/* Line 868 of glr.c  */
#line 842 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	arith_seq LESS_THAN_2 arith_expr \n";}
    break;

  case 208:
/* Line 868 of glr.c  */
#line 843 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	arith_seq MORE_THAN_2 arith_expr \n";}
    break;

  case 209:
/* Line 868 of glr.c  */
#line 846 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"shift_expr: arith_expr\n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 210:
/* Line 868 of glr.c  */
#line 850 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"shift_expr: arith_expr arith_seq\n";}
    break;

  case 211:
/* Line 868 of glr.c  */
#line 853 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : '+' term \n";
						op=PLUS;
						cout<<"op1= "<<op<<endl;
						((*yyvalp).operands)=op;
						cout<<"op = "<<((*yyvalp).operands)<<endl;
						((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 212:
/* Line 868 of glr.c  */
#line 860 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : '-' term \n";
			/**
							op=MINUS;
							cout<<"amer = "<<op<<endl;
							$<operands>$=op;
							$<tn>$=$<tn>2;**/
							int* xx = new int (0);
						k = ast->createTypeNode((void*)xx,0,0,INT);
						k=ast->addNext(k,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
						((*yyvalp).tn) = ast->createExprNode(k,NULL,MINUS);
						}
    break;

  case 213:
/* Line 868 of glr.c  */
#line 871 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : term_seq '+' term \n";//op=PLUS;
									k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
									((*yyvalp).operands)=PLUS;
									//op=$<operands>$;
									((*yyvalp).tn) = ast->createExprNode(k,NULL,PLUS);
								}
    break;

  case 214:
/* Line 868 of glr.c  */
#line 877 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : term_seq '-' term \n";//op=MINUS;
									k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
									((*yyvalp).operands)=MINUS;
									//op=$<operands>$;
									((*yyvalp).tn) = ast->createExprNode(k,NULL,MINUS);
								}
    break;

  case 215:
/* Line 868 of glr.c  */
#line 885 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arith_expr: term\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
									((*yyvalp).operands)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.operands);
							}
    break;

  case 216:
/* Line 868 of glr.c  */
#line 888 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() <<"arith_expr: term term_seq\n";
											k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
											cout<<"the value of op is "<<op<<endl;
											((*yyvalp).tn) = ast->createExprNode(k,NULL,PLUS/**op**/);
											
										}
    break;

  case 217:
/* Line 868 of glr.c  */
#line 898 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '*' factor \n";
							((*yyvalp).operands)=MULT;
							op=((*yyvalp).operands);
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 218:
/* Line 868 of glr.c  */
#line 903 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '/' factor \n";
								((*yyvalp).operands)=DIV;
								op=((*yyvalp).operands);
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 219:
/* Line 868 of glr.c  */
#line 908 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '%' factor \n";
								((*yyvalp).operands)=MOD;
								op=((*yyvalp).operands);
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 220:
/* Line 868 of glr.c  */
#line 913 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: DIV_2 factor \n";}
    break;

  case 221:
/* Line 868 of glr.c  */
#line 914 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '*' factor \n";
									k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
									op=MULT;
									((*yyvalp).tn) = ast->createExprNode(k,NULL,op);
									}
    break;

  case 222:
/* Line 868 of glr.c  */
#line 919 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '/' factor \n";
									k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
									op=DIV;
									((*yyvalp).tn) = ast->createExprNode(k,NULL,op);
									}
    break;

  case 223:
/* Line 868 of glr.c  */
#line 924 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '%' factor \n";
									op=MOD;
									((*yyvalp).tn) = ast->createExprNode(NULL,NULL,op);
									}
    break;

  case 224:
/* Line 868 of glr.c  */
#line 928 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq DIV_2 factor \n";}
    break;

  case 225:
/* Line 868 of glr.c  */
#line 931 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"term: 	factor\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 226:
/* Line 868 of glr.c  */
#line 932 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"term: 	factor factor_seq\n";
								k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
								((*yyvalp).tn) = ast->createExprNode(k,NULL,op);
							}
    break;

  case 227:
/* Line 868 of glr.c  */
#line 938 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor: '+' factor \n";
						int* xx = new int (0);
						k = ast->createTypeNode((void*)xx,0,0,INT);
						k=ast->addNext(k,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
						((*yyvalp).tn) = ast->createExprNode(k,NULL,PLUS);
						
					}
    break;

  case 228:
/* Line 868 of glr.c  */
#line 945 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor: '-' factor \n";
						int* xx = new int (0);
						k = ast->createTypeNode((void*)xx,0,0,INT);
						k=ast->addNext(k,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
						((*yyvalp).tn) = ast->createExprNode(k,NULL,MINUS);
						
						}
    break;

  case 229:
/* Line 868 of glr.c  */
#line 952 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor: '~' factor \n";}
    break;

  case 230:
/* Line 868 of glr.c  */
#line 953 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
					visit_num++;
					Streams::verbose() <<"factor: power\n";
					
					if(visit_num==1)
					{
						//$<var>$=p->checkVariable(const_cast<char *>(temp_id2.back().c_str()),t, yylval.r.lineNum, yylval.r.colNum,true,is_list,is_dic);
						((*yyvalp).var)=p->checkVariable(const_cast<char *>(temp_id2.back().c_str()),t, yylval.r.lineNum, yylval.r.colNum,true,false,is_dic);
						v=((*yyvalp).var);
						if(v!=NULL)
						{
							//cout<<"hellow world  "<<v->get_name()<<endl;
							lastNode=ast->createIDNode(v,0,0);
									
							((*yyvalp).tn)=ast->createCallVarNode(temp_id2.back(),v,NULL,NULL);	
						}
						else
						{
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						}
					}
					else if((!constant)&&(!is_list))
					{
						((*yyvalp).var)=p->checkVariable(const_cast<char *>(temp_id2.back().c_str()),t, yylval.r.lineNum, yylval.r.colNum,false,is_list,is_dic);
						v=((*yyvalp).var);
						is_list=false;
						if(v!=NULL)
						{
							((*yyvalp).tn)=ast->createCallVarNode(temp_id2.back(),v,NULL,NULL);	
						}
						else
						{
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						}
					}
					else
						((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
				}
    break;

  case 231:
/* Line 868 of glr.c  */
#line 993 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"trailer_seq: trailer \n";
										((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
									}
    break;

  case 232:
/* Line 868 of glr.c  */
#line 996 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"trailer_seq: trailer_seq trailer \n";
										((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
									}
    break;

  case 233:
/* Line 868 of glr.c  */
#line 1001 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"power:	atom\n";
							//$<tn>$=ast->createCallVarNode(temp_id2.back(),NULL,NULL,NULL);
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
							
							}
    break;

  case 234:
/* Line 868 of glr.c  */
#line 1006 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"power: atom trailer_seq \n";
											cout<<"the top is "<<temp_id2.back()<<endl;
											((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
											((*yyvalp).tn)=ast->createDotNode(((*yyvalp).tn),NULL);
										}
    break;

  case 235:
/* Line 868 of glr.c  */
#line 1011 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"power: atom trailer_seq STAR_2 factor \n";}
    break;

  case 236:
/* Line 868 of glr.c  */
#line 1012 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"power: atom STAR_2 factor \n";}
    break;

  case 237:
/* Line 868 of glr.c  */
#line 1015 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"str_seq:	STRING \n";}
    break;

  case 238:
/* Line 868 of glr.c  */
#line 1016 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"str_seq:	str_seq STRING \n";}
    break;

  case 239:
/* Line 868 of glr.c  */
#line 1019 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'(' ')' \n";}
    break;

  case 240:
/* Line 868 of glr.c  */
#line 1020 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'(' testlist_comp ')' \n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn);arrayvec.clear();}
    break;

  case 241:
/* Line 868 of glr.c  */
#line 1021 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'[' ']' \n";
						arrayvec.clear();
						array_right=true;
						is_list=true;
						((*yyvalp).tn)=ast->createArrayNode(arrayvec,0,0);
				}
    break;

  case 242:
/* Line 868 of glr.c  */
#line 1027 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' '}' \n";}
    break;

  case 243:
/* Line 868 of glr.c  */
#line 1028 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' '}' \n";
									((*yyvalp).tn)=ast->createArrayNode(arrayvec,0,0);
									array_right=true;
									arrayvec.clear();
									}
    break;

  case 244:
/* Line 868 of glr.c  */
#line 1033 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' dictorsetmaker '}' \n";}
    break;

  case 245:
/* Line 868 of glr.c  */
#line 1034 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    { Streams::verbose() <<"atom: NAME\n";
									temp_id2.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal));
									((*yyvalp).tn)=ast->createCallVarNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal),NULL,NULL,NULL);
					}
    break;

  case 246:
/* Line 868 of glr.c  */
#line 1038 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    { Streams::verbose() <<"atom: NAME\n";
									temp_id2.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.r.strVal));
									parameters.clear();
									((*yyvalp).tn)=ast->createCallTypeNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.r.strVal),parameters,NULL,NULL);
					}
    break;

  case 247:
/* Line 868 of glr.c  */
#line 1043 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    { Streams::verbose() <<"atom: NAME\n";
									temp_id2.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.strVal));
									((*yyvalp).tn)=ast->createCallTypeNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.strVal),parameters,NULL,NULL);
									parameters.clear();
					}
    break;

  case 248:
/* Line 868 of glr.c  */
#line 1048 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"trailer:	'[' subscriptlist ']'\n";
											((*yyvalp).var)=p->checkVariable((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.strVal),t, yylval.r.lineNum, yylval.r.colNum,false,true,is_dic);
											is_list=true;
											if(((*yyvalp).var))
												((*yyvalp).tn)=ast->createArrayElementNode(((*yyvalp).var),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.tn),NULL,NULL);
										}
    break;

  case 249:
/* Line 868 of glr.c  */
#line 1054 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_INT "<<(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.intVal)<<endl;;
						int* xx = new int ((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.intVal));
						//cout<<"yhe number is"<<*xx<<endl;
						//cout<<"reference"<<xx<<endl;
						constant=true;
						((*yyvalp).tn) = ast->createTypeNode((void*)xx,0,0,INT);
						visit_num++;
						}
    break;

  case 250:
/* Line 868 of glr.c  */
#line 1062 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_FLOAT\n";
							constant=true;
							float* x=new float((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.floatVal));
							((*yyvalp).tn) = ast->createTypeNode((void*)x,0,0,FLOAT);
						}
    break;

  case 251:
/* Line 868 of glr.c  */
#line 1067 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_FLOAT\n";
							long *xxx=new long((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.longVal));
							constant=true;
							((*yyvalp).tn) = ast->createTypeNode(&xxx,0,0,LONG);
						}
    break;

  case 252:
/* Line 868 of glr.c  */
#line 1072 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: CHAR_VALUE\n";}
    break;

  case 253:
/* Line 868 of glr.c  */
#line 1073 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: str_seq\n";
									
									((*yyvalp).tn) = ast->createTypeNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal),0,0,STRINGS);
								}
    break;

  case 254:
/* Line 868 of glr.c  */
#line 1077 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DOT_3\n";}
    break;

  case 255:
/* Line 868 of glr.c  */
#line 1078 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: NONE\n";}
    break;

  case 256:
/* Line 868 of glr.c  */
#line 1079 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: TRUE\n";
					((*yyvalp).tn) = ast->createTypeNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal),0,0,True);
				}
    break;

  case 257:
/* Line 868 of glr.c  */
#line 1082 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: FALSE\n";
					((*yyvalp).tn) = ast->createTypeNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal),0,0,False);
				}
    break;

  case 258:
/* Line 868 of glr.c  */
#line 1087 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: ',' test\n";
							arrayvec.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
							
							}
    break;

  case 259:
/* Line 868 of glr.c  */
#line 1091 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: ',' star_expr\n";}
    break;

  case 260:
/* Line 868 of glr.c  */
#line 1092 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: comma_test_star_seq ',' test\n";
														arrayvec.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
													}
    break;

  case 261:
/* Line 868 of glr.c  */
#line 1095 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: comma_test_star_seq ',' star_expr\n";}
    break;

  case 262:
/* Line 868 of glr.c  */
#line 1098 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test comp_for\n";}
    break;

  case 263:
/* Line 868 of glr.c  */
#line 1099 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test\n"; ((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
								arrayvec.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn));
							}
    break;

  case 264:
/* Line 868 of glr.c  */
#line 1102 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test   comma_test_star_seq\n";
												((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
												arrayvec.insert(arrayvec.begin(),(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn));
											}
    break;

  case 265:
/* Line 868 of glr.c  */
#line 1106 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 266:
/* Line 868 of glr.c  */
#line 1107 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";
													arrayvec.insert(arrayvec.begin(),(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn));
												}
    break;

  case 267:
/* Line 868 of glr.c  */
#line 1110 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 268:
/* Line 868 of glr.c  */
#line 1111 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 269:
/* Line 868 of glr.c  */
#line 1112 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 270:
/* Line 868 of glr.c  */
#line 1113 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 271:
/* Line 868 of glr.c  */
#line 1114 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 272:
/* Line 868 of glr.c  */
#line 1117 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"trailer:	'.' NAME\n";
							temp_id=temp_id2.back();
							temp_id=temp_id+"."+(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal);
						temp_id2.pop_back();
						temp_id2.push_back(temp_id);	
						((*yyvalp).tn)=ast->createCallVarNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal),NULL,NULL,NULL);
						}
    break;

  case 273:
/* Line 868 of glr.c  */
#line 1124 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
									((*yyvalp).tn)=ast->createCallFunctionNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.strVal),NULL,NULL,NULL,NULL);
								}
    break;

  case 274:
/* Line 868 of glr.c  */
#line 1127 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
									((*yyvalp).tn)=ast->createCallFunctionNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.strVal),NULL,NULL,NULL,NULL);
								}
    break;

  case 275:
/* Line 868 of glr.c  */
#line 1130 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"trailer:	'[' subscriptlist ']'\n";
													
											}
    break;

  case 276:
/* Line 868 of glr.c  */
#line 1136 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_subscript_seq: ',' subscript\n";}
    break;

  case 277:
/* Line 868 of glr.c  */
#line 1137 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_subscript_seq: comma_subscript_seq ',' subscript\n";}
    break;

  case 278:
/* Line 868 of glr.c  */
#line 1140 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript\n";}
    break;

  case 279:
/* Line 868 of glr.c  */
#line 1141 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript comma_subscript_seq\n";}
    break;

  case 280:
/* Line 868 of glr.c  */
#line 1142 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript  ','\n";}
    break;

  case 281:
/* Line 868 of glr.c  */
#line 1143 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript comma_subscript_seq ','\n";}
    break;

  case 282:
/* Line 868 of glr.c  */
#line 1146 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test\n";}
    break;

  case 283:
/* Line 868 of glr.c  */
#line 1147 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':'\n";}
    break;

  case 284:
/* Line 868 of glr.c  */
#line 1148 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript: test ':'\n";}
    break;

  case 285:
/* Line 868 of glr.c  */
#line 1149 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' test\n";}
    break;

  case 286:
/* Line 868 of glr.c  */
#line 1150 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' sliceop\n";}
    break;

  case 287:
/* Line 868 of glr.c  */
#line 1151 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' test sliceop\n";}
    break;

  case 288:
/* Line 868 of glr.c  */
#line 1152 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' test\n";}
    break;

  case 289:
/* Line 868 of glr.c  */
#line 1153 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' sliceop\n";}
    break;

  case 290:
/* Line 868 of glr.c  */
#line 1154 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' test sliceop\n";}
    break;

  case 291:
/* Line 868 of glr.c  */
#line 1157 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"sliceop: ':'\n";}
    break;

  case 292:
/* Line 868 of glr.c  */
#line 1158 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"sliceop: ':' test\n";}
    break;

  case 293:
/* Line 868 of glr.c  */
#line 1161 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	',' expr \n";}
    break;

  case 294:
/* Line 868 of glr.c  */
#line 1162 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	',' star_expr \n";}
    break;

  case 295:
/* Line 868 of glr.c  */
#line 1163 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	comma_expr_star_seq ',' expr \n";}
    break;

  case 296:
/* Line 868 of glr.c  */
#line 1164 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	comma_expr_star_seq ',' star_expr \n";}
    break;

  case 297:
/* Line 868 of glr.c  */
#line 1167 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr \n";}
    break;

  case 298:
/* Line 868 of glr.c  */
#line 1168 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr comma_expr_star_seq \n";}
    break;

  case 299:
/* Line 868 of glr.c  */
#line 1169 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr \n";}
    break;

  case 300:
/* Line 868 of glr.c  */
#line 1170 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr comma_expr_star_seq \n";}
    break;

  case 301:
/* Line 868 of glr.c  */
#line 1171 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr ',' \n";}
    break;

  case 302:
/* Line 868 of glr.c  */
#line 1172 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr comma_expr_star_seq ',' \n";}
    break;

  case 303:
/* Line 868 of glr.c  */
#line 1173 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr ',' \n";}
    break;

  case 304:
/* Line 868 of glr.c  */
#line 1174 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr  comma_expr_star_seq ',' \n";}
    break;

  case 305:
/* Line 868 of glr.c  */
#line 1177 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test: ',' test \n";}
    break;

  case 306:
/* Line 868 of glr.c  */
#line 1178 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"',' test comma_test \n";}
    break;

  case 307:
/* Line 868 of glr.c  */
#line 1181 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	test \n";}
    break;

  case 308:
/* Line 868 of glr.c  */
#line 1182 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	test comma_test \n";}
    break;

  case 309:
/* Line 868 of glr.c  */
#line 1183 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	 test ','\n";}
    break;

  case 310:
/* Line 868 of glr.c  */
#line 1184 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	 test comma_test ','\n";}
    break;

  case 311:
/* Line 868 of glr.c  */
#line 1187 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_colon_test_seq:  ',' test ':' test \n";}
    break;

  case 312:
/* Line 868 of glr.c  */
#line 1188 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_colon_test_seq: comma_test_colon_test_seq ',' test ':' test\n";}
    break;

  case 313:
/* Line 868 of glr.c  */
#line 1190 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_seq: ',' test \n";}
    break;

  case 314:
/* Line 868 of glr.c  */
#line 1191 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_seq: comma_test_seq ',' test \n";}
    break;

  case 315:
/* Line 868 of glr.c  */
#line 1194 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comp_for \n";}
    break;

  case 316:
/* Line 868 of glr.c  */
#line 1195 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test \n";}
    break;

  case 317:
/* Line 868 of glr.c  */
#line 1196 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test ',' \n";}
    break;

  case 318:
/* Line 868 of glr.c  */
#line 1197 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comma_test_colon_test_seq \n";}
    break;

  case 319:
/* Line 868 of glr.c  */
#line 1198 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comma_test_colon_test_seq ','\n";}
    break;

  case 320:
/* Line 868 of glr.c  */
#line 1199 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test comp_for\n";}
    break;

  case 321:
/* Line 868 of glr.c  */
#line 1200 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test\n";}
    break;

  case 322:
/* Line 868 of glr.c  */
#line 1201 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ','\n";}
    break;

  case 323:
/* Line 868 of glr.c  */
#line 1202 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ','\n";}
    break;

  case 324:
/* Line 868 of glr.c  */
#line 1203 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test comma_test_seq ','\n";}
    break;

  case 325:
/* Line 868 of glr.c  */
#line 1205 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
								Streams::verbose() <<"classdef: classheader suite\n";
								((*yyvalp).type)=p->finishTypeDeclaration(t);
								((*yyvalp).tn)=ast->createClassNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.type),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL);
							}
    break;

  case 326:
/* Line 868 of glr.c  */
#line 1211 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
								Streams::verbose() << "class_h: CLASS ID \n";
								colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);

								inhertance_list.clear();
					}
    break;

  case 327:
/* Line 868 of glr.c  */
#line 1219 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
									Streams::verbose() << "class_h: access_modef CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 328:
/* Line 868 of glr.c  */
#line 1226 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
									Streams::verbose() << "class_h: STATIC CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 329:
/* Line 868 of glr.c  */
#line 1233 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
									Streams::verbose() << "class_h: FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 330:
/* Line 868 of glr.c  */
#line 1240 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 331:
/* Line 868 of glr.c  */
#line 1247 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
												Streams::verbose() << "class_h: STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 332:
/* Line 868 of glr.c  */
#line 1254 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 333:
/* Line 868 of glr.c  */
#line 1261 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: STATIC access_modef CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 334:
/* Line 868 of glr.c  */
#line 1268 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 335:
/* Line 868 of glr.c  */
#line 1275 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 336:
/* Line 868 of glr.c  */
#line 1282 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: access_modef STATIC CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 337:
/* Line 868 of glr.c  */
#line 1289 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: access_modef FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 338:
/* Line 868 of glr.c  */
#line 1296 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 339:
/* Line 868 of glr.c  */
#line 1303 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 340:
/* Line 868 of glr.c  */
#line 1310 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 341:
/* Line 868 of glr.c  */
#line 1317 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 342:
/* Line 868 of glr.c  */
#line 1324 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
										Streams::verbose() << "class_h: CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
									t=((*yyvalp).type);
									inhertance_list.clear();
									temp_id="";
									acc_mod="";
								}
    break;

  case 343:
/* Line 868 of glr.c  */
#line 1332 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 344:
/* Line 868 of glr.c  */
#line 1339 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 345:
/* Line 868 of glr.c  */
#line 1346 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 346:
/* Line 868 of glr.c  */
#line 1353 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 347:
/* Line 868 of glr.c  */
#line 1360 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 348:
/* Line 868 of glr.c  */
#line 1367 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 349:
/* Line 868 of glr.c  */
#line 1374 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 350:
/* Line 868 of glr.c  */
#line 1381 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 351:
/* Line 868 of glr.c  */
#line 1388 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 352:
/* Line 868 of glr.c  */
#line 1395 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 353:
/* Line 868 of glr.c  */
#line 1402 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 354:
/* Line 868 of glr.c  */
#line 1409 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 355:
/* Line 868 of glr.c  */
#line 1416 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 356:
/* Line 868 of glr.c  */
#line 1423 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 357:
/* Line 868 of glr.c  */
#line 1430 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 358:
/* Line 868 of glr.c  */
#line 1437 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
														Streams::verbose() << "class_h: CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
												((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
												acc_mod="";
											}
    break;

  case 359:
/* Line 868 of glr.c  */
#line 1444 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																Streams::verbose() << "class_h: access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 360:
/* Line 868 of glr.c  */
#line 1451 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 361:
/* Line 868 of glr.c  */
#line 1458 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 362:
/* Line 868 of glr.c  */
#line 1465 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																	Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 363:
/* Line 868 of glr.c  */
#line 1472 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																	Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 364:
/* Line 868 of glr.c  */
#line 1479 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																		Streams::verbose() << "class_h: STATIC access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 365:
/* Line 868 of glr.c  */
#line 1486 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																	Streams::verbose() << "class_h: FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 366:
/* Line 868 of glr.c  */
#line 1493 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 367:
/* Line 868 of glr.c  */
#line 1500 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 368:
/* Line 868 of glr.c  */
#line 1507 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS NAME '(' arglist ')' ':' \n";}
    break;

  case 369:
/* Line 868 of glr.c  */
#line 1508 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS NAME '(' arglist ')' ':' \n";}
    break;

  case 370:
/* Line 868 of glr.c  */
#line 1509 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 371:
/* Line 868 of glr.c  */
#line 1516 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 372:
/* Line 868 of glr.c  */
#line 1523 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 373:
/* Line 868 of glr.c  */
#line 1530 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 374:
/* Line 868 of glr.c  */
#line 1540 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arg_comma_seq : argument ','\n";}
    break;

  case 375:
/* Line 868 of glr.c  */
#line 1541 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arg_comma_seq : argument ',' arg_comma_seq\n";}
    break;

  case 376:
/* Line 868 of glr.c  */
#line 1544 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_arg_seq:	',' argument\n";}
    break;

  case 377:
/* Line 868 of glr.c  */
#line 1545 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_arg_seq:	comma_arg_seq ',' argument\n";}
    break;

  case 378:
/* Line 868 of glr.c  */
#line 1548 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arglist: argument\n";}
    break;

  case 379:
/* Line 868 of glr.c  */
#line 1549 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arglist: default_arg\n";}
    break;

  case 380:
/* Line 868 of glr.c  */
#line 1551 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arglist: argument ','\n";}
    break;

  case 381:
/* Line 868 of glr.c  */
#line 1553 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {    
						std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal));
						std::string erro("*" + tempstr);
						char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
						Streams::verbose() <<"arglist: '*' test\n";
				   }
    break;

  case 382:
/* Line 868 of glr.c  */
#line 1561 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
										std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
										std::string tempstr1((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal));
										std::string erro1("**" + tempstr1);
										char *cstr1 = new char[erro1.length() + 1];
										strcpy(cstr1, erro1.c_str()); parameters.push_back(cstr1);
										
										Streams::verbose() <<"arglist: '*' test ',' STAR_2 test\n";
									}
    break;

  case 383:
/* Line 868 of glr.c  */
#line 1574 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
		 					   		    std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
									    
										Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";
								 }
    break;

  case 384:
/* Line 868 of glr.c  */
#line 1583 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
										std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);

											Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";
										 }
    break;

  case 385:
/* Line 868 of glr.c  */
#line 1592 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
		 										std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
															Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";
													   }
    break;

  case 386:
/* Line 868 of glr.c  */
#line 1600 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
										
										std::string tempstr1((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (6))].yystate.yysemantics.yysval.r.strVal));
										std::string erro1("**" + tempstr1);
										char *cstr1 = new char[erro1.length() + 1];
													strcpy(cstr1, erro1.c_str()); parameters.push_back(cstr1);Streams::verbose() <<"arglist: '*' test comma_arg_seq ',' STAR_2 test\n";
												  }
    break;

  case 387:
/* Line 868 of glr.c  */
#line 1612 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
						std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("**" + tempstr);
										char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);Streams::verbose() <<"arglist: STAR_2 test\n";
					  }
    break;

  case 388:
/* Line 868 of glr.c  */
#line 1619 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq argument\n";}
    break;

  case 389:
/* Line 868 of glr.c  */
#line 1620 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq default_arg\n";}
    break;

  case 390:
/* Line 868 of glr.c  */
#line 1621 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq default_arg_comma_seq default_arg\n";}
    break;

  case 391:
/* Line 868 of glr.c  */
#line 1622 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq argument ','\n";}
    break;

  case 392:
/* Line 868 of glr.c  */
#line 1624 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {		
									std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
									Streams::verbose() <<"arglist: arg_comma_seq '*' test\n";
								  }
    break;

  case 393:
/* Line 868 of glr.c  */
#line 1632 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
										
										std::string tempstr1((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (6))].yystate.yysemantics.yysval.r.strVal));
										std::string erro1("**" + tempstr1);
										char *cstr1 = new char[erro1.length() + 1];
										strcpy(cstr1, erro1.c_str()); parameters.push_back(cstr1);
													Streams::verbose() <<"arglist: arg_comma_seq '*' test ',' STAR_2 test\n";
												 }
    break;

  case 394:
/* Line 868 of glr.c  */
#line 1645 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
												std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
												Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq\n";
											   }
    break;

  case 395:
/* Line 868 of glr.c  */
#line 1653 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
														std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
														Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_default_arg_seq\n";
													   }
    break;

  case 396:
/* Line 868 of glr.c  */
#line 1661 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																		std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
																		Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq comma_default_arg_seq\n";
																	 }
    break;

  case 397:
/* Line 868 of glr.c  */
#line 1669 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
										
										std::string tempstr1((((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (7))].yystate.yysemantics.yysval.r.strVal));
										std::string erro1("**" + tempstr1);
										char *cstr1 = new char[erro1.length() + 1];
										strcpy(cstr1, erro1.c_str()); parameters.push_back(cstr1);
																Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq ',' STAR_2 test\n";
															   }
    break;

  case 398:
/* Line 868 of glr.c  */
#line 1682 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {	std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("**" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
										Streams::verbose() <<"arglist: arg_comma_seq STAR_2 test\n";
								    }
    break;

  case 399:
/* Line 868 of glr.c  */
#line 1692 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_default_arg_seq: ',' default_arg\n";}
    break;

  case 400:
/* Line 868 of glr.c  */
#line 1693 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_default_arg_seq: comma_default_arg_seq ',' default_arg\n";}
    break;

  case 401:
/* Line 868 of glr.c  */
#line 1696 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"default_arg_comma_seq: default_arg ','\n";}
    break;

  case 402:
/* Line 868 of glr.c  */
#line 1697 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"default_arg_comma_seq: default_arg_comma_seq default_arg ','\n";}
    break;

  case 403:
/* Line 868 of glr.c  */
#line 1700 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {parameters.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.r.strVal));Streams::verbose() <<"default_arg: test '=' test\n";}
    break;

  case 404:
/* Line 868 of glr.c  */
#line 1702 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {parameters.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal)); Streams::verbose() <<"argument: 	test\n";}
    break;

  case 405:
/* Line 868 of glr.c  */
#line 1703 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {parameters.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.r.strVal));Streams::verbose() <<"argument: 	test comp_for\n";}
    break;

  case 406:
/* Line 868 of glr.c  */
#line 1707 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_iter:  comp_for\n";}
    break;

  case 407:
/* Line 868 of glr.c  */
#line 1708 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_iter:  comp_if\n";}
    break;

  case 408:
/* Line 868 of glr.c  */
#line 1711 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_for: 	FOR exprlist IN or_test\n";}
    break;

  case 409:
/* Line 868 of glr.c  */
#line 1712 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_for: FOR exprlist IN or_test comp_iter\n";}
    break;

  case 410:
/* Line 868 of glr.c  */
#line 1715 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_if: IF or_test\n";}
    break;

  case 411:
/* Line 868 of glr.c  */
#line 1716 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_if: IF or_test comp_iter\n";}
    break;


/* Line 868 of glr.c  */
#line 5399 "yacc.cpp"
      default: break;
    }

  return yyok;
# undef yyerrok
# undef YYABORT
# undef YYACCEPT
# undef YYERROR
# undef YYBACKUP
# undef yyclearin
# undef YYRECOVERING
}


/*ARGSUSED*/ static void
yyuserMerge (int yyn, YYSTYPE* yy0, YYSTYPE* yy1)
{
  YYUSE (yy0);
  YYUSE (yy1);

  switch (yyn)
    {
      
      default: break;
    }
}

                              /* Bison grammar-table manipulation.  */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
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

/** Number of symbols composing the right hand side of rule #RULE.  */
static inline int
yyrhsLength (yyRuleNum yyrule)
{
  return yyr2[yyrule];
}

static void
yydestroyGLRState (char const *yymsg, yyGLRState *yys)
{
  if (yys->yyresolved)
    yydestruct (yymsg, yystos[yys->yylrState],
                &yys->yysemantics.yysval);
  else
    {
#if YYDEBUG
      if (yydebug)
        {
          if (yys->yysemantics.yyfirstVal)
            YYFPRINTF (stderr, "%s unresolved ", yymsg);
          else
            YYFPRINTF (stderr, "%s incomplete ", yymsg);
          yy_symbol_print (stderr, yystos[yys->yylrState],
                           YY_NULL);
          YYFPRINTF (stderr, "\n");
        }
#endif

      if (yys->yysemantics.yyfirstVal)
        {
          yySemanticOption *yyoption = yys->yysemantics.yyfirstVal;
          yyGLRState *yyrh;
          int yyn;
          for (yyrh = yyoption->yystate, yyn = yyrhsLength (yyoption->yyrule);
               yyn > 0;
               yyrh = yyrh->yypred, yyn -= 1)
            yydestroyGLRState (yymsg, yyrh);
        }
    }
}

/** Left-hand-side symbol for rule #RULE.  */
static inline yySymbol
yylhsNonterm (yyRuleNum yyrule)
{
  return yyr1[yyrule];
}

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-505)))

/** True iff LR state STATE has only a default reduction (regardless
 *  of token).  */
static inline yybool
yyisDefaultedState (yyStateNum yystate)
{
  return yypact_value_is_default (yypact[yystate]);
}

/** The default reduction for STATE, assuming it has one.  */
static inline yyRuleNum
yydefaultAction (yyStateNum yystate)
{
  return yydefact[yystate];
}

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-392)))

/** Set *YYACTION to the action to take in YYSTATE on seeing YYTOKEN.
 *  Result R means
 *    R < 0:  Reduce on rule -R.
 *    R = 0:  Error.
 *    R > 0:  Shift to state R.
 *  Set *CONFLICTS to a pointer into yyconfl to 0-terminated list of
 *  conflicting reductions.
 */
static inline void
yygetLRActions (yyStateNum yystate, int yytoken,
                int* yyaction, const short int** yyconflicts)
{
  int yyindex = yypact[yystate] + yytoken;
  if (yypact_value_is_default (yypact[yystate])
      || yyindex < 0 || YYLAST < yyindex || yycheck[yyindex] != yytoken)
    {
      *yyaction = -yydefact[yystate];
      *yyconflicts = yyconfl;
    }
  else if (! yytable_value_is_error (yytable[yyindex]))
    {
      *yyaction = yytable[yyindex];
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
  else
    {
      *yyaction = 0;
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
}

static inline yyStateNum
yyLRgotoState (yyStateNum yystate, yySymbol yylhs)
{
  int yyr;
  yyr = yypgoto[yylhs - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yylhs - YYNTOKENS];
}

static inline yybool
yyisShiftAction (int yyaction)
{
  return 0 < yyaction;
}

static inline yybool
yyisErrorAction (int yyaction)
{
  return yyaction == 0;
}

                                /* GLRStates */

/** Return a fresh GLRStackItem.  Callers should call
 * YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 * headroom.  */

static inline yyGLRStackItem*
yynewGLRStackItem (yyGLRStack* yystackp, yybool yyisState)
{
  yyGLRStackItem* yynewItem = yystackp->yynextFree;
  yystackp->yyspaceLeft -= 1;
  yystackp->yynextFree += 1;
  yynewItem->yystate.yyisState = yyisState;
  return yynewItem;
}

/** Add a new semantic action that will execute the action for rule
 *  RULENUM on the semantic values in RHS to the list of
 *  alternative actions for STATE.  Assumes that RHS comes from
 *  stack #K of *STACKP. */
static void
yyaddDeferredAction (yyGLRStack* yystackp, size_t yyk, yyGLRState* yystate,
                     yyGLRState* rhs, yyRuleNum yyrule)
{
  yySemanticOption* yynewOption =
    &yynewGLRStackItem (yystackp, yyfalse)->yyoption;
  yynewOption->yystate = rhs;
  yynewOption->yyrule = yyrule;
  if (yystackp->yytops.yylookaheadNeeds[yyk])
    {
      yynewOption->yyrawchar = yychar;
      yynewOption->yyval = yylval;
    }
  else
    yynewOption->yyrawchar = YYEMPTY;
  yynewOption->yynext = yystate->yysemantics.yyfirstVal;
  yystate->yysemantics.yyfirstVal = yynewOption;

  YY_RESERVE_GLRSTACK (yystackp);
}

                                /* GLRStacks */

/** Initialize SET to a singleton set containing an empty stack.  */
static yybool
yyinitStateSet (yyGLRStateSet* yyset)
{
  yyset->yysize = 1;
  yyset->yycapacity = 16;
  yyset->yystates = (yyGLRState**) YYMALLOC (16 * sizeof yyset->yystates[0]);
  if (! yyset->yystates)
    return yyfalse;
  yyset->yystates[0] = YY_NULL;
  yyset->yylookaheadNeeds =
    (yybool*) YYMALLOC (16 * sizeof yyset->yylookaheadNeeds[0]);
  if (! yyset->yylookaheadNeeds)
    {
      YYFREE (yyset->yystates);
      return yyfalse;
    }
  return yytrue;
}

static void yyfreeStateSet (yyGLRStateSet* yyset)
{
  YYFREE (yyset->yystates);
  YYFREE (yyset->yylookaheadNeeds);
}

/** Initialize STACK to a single empty stack, with total maximum
 *  capacity for all stacks of SIZE.  */
static yybool
yyinitGLRStack (yyGLRStack* yystackp, size_t yysize)
{
  yystackp->yyerrState = 0;
  yynerrs = 0;
  yystackp->yyspaceLeft = yysize;
  yystackp->yyitems =
    (yyGLRStackItem*) YYMALLOC (yysize * sizeof yystackp->yynextFree[0]);
  if (!yystackp->yyitems)
    return yyfalse;
  yystackp->yynextFree = yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULL;
  yystackp->yylastDeleted = YY_NULL;
  return yyinitStateSet (&yystackp->yytops);
}


#if YYSTACKEXPANDABLE
# define YYRELOC(YYFROMITEMS,YYTOITEMS,YYX,YYTYPE) \
  &((YYTOITEMS) - ((YYFROMITEMS) - (yyGLRStackItem*) (YYX)))->YYTYPE

/** If STACK is expandable, extend it.  WARNING: Pointers into the
    stack from outside should be considered invalid after this call.
    We always expand when there are 1 or fewer items left AFTER an
    allocation, so that we can avoid having external pointers exist
    across an allocation.  */
static void
yyexpandGLRStack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yynewItems;
  yyGLRStackItem* yyp0, *yyp1;
  size_t yynewSize;
  size_t yyn;
  size_t yysize = yystackp->yynextFree - yystackp->yyitems;
  if (YYMAXDEPTH - YYHEADROOM < yysize)
    yyMemoryExhausted (yystackp);
  yynewSize = 2*yysize;
  if (YYMAXDEPTH < yynewSize)
    yynewSize = YYMAXDEPTH;
  yynewItems = (yyGLRStackItem*) YYMALLOC (yynewSize * sizeof yynewItems[0]);
  if (! yynewItems)
    yyMemoryExhausted (yystackp);
  for (yyp0 = yystackp->yyitems, yyp1 = yynewItems, yyn = yysize;
       0 < yyn;
       yyn -= 1, yyp0 += 1, yyp1 += 1)
    {
      *yyp1 = *yyp0;
      if (*(yybool *) yyp0)
        {
          yyGLRState* yys0 = &yyp0->yystate;
          yyGLRState* yys1 = &yyp1->yystate;
          if (yys0->yypred != YY_NULL)
            yys1->yypred =
              YYRELOC (yyp0, yyp1, yys0->yypred, yystate);
          if (! yys0->yyresolved && yys0->yysemantics.yyfirstVal != YY_NULL)
            yys1->yysemantics.yyfirstVal =
              YYRELOC (yyp0, yyp1, yys0->yysemantics.yyfirstVal, yyoption);
        }
      else
        {
          yySemanticOption* yyv0 = &yyp0->yyoption;
          yySemanticOption* yyv1 = &yyp1->yyoption;
          if (yyv0->yystate != YY_NULL)
            yyv1->yystate = YYRELOC (yyp0, yyp1, yyv0->yystate, yystate);
          if (yyv0->yynext != YY_NULL)
            yyv1->yynext = YYRELOC (yyp0, yyp1, yyv0->yynext, yyoption);
        }
    }
  if (yystackp->yysplitPoint != YY_NULL)
    yystackp->yysplitPoint = YYRELOC (yystackp->yyitems, yynewItems,
                                 yystackp->yysplitPoint, yystate);

  for (yyn = 0; yyn < yystackp->yytops.yysize; yyn += 1)
    if (yystackp->yytops.yystates[yyn] != YY_NULL)
      yystackp->yytops.yystates[yyn] =
        YYRELOC (yystackp->yyitems, yynewItems,
                 yystackp->yytops.yystates[yyn], yystate);
  YYFREE (yystackp->yyitems);
  yystackp->yyitems = yynewItems;
  yystackp->yynextFree = yynewItems + yysize;
  yystackp->yyspaceLeft = yynewSize - yysize;
}
#endif

static void
yyfreeGLRStack (yyGLRStack* yystackp)
{
  YYFREE (yystackp->yyitems);
  yyfreeStateSet (&yystackp->yytops);
}

/** Assuming that S is a GLRState somewhere on STACK, update the
 *  splitpoint of STACK, if needed, so that it is at least as deep as
 *  S.  */
static inline void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != YY_NULL && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #K in STACK.  */
static inline void
yymarkStackDeleted (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yytops.yystates[yyk] != YY_NULL)
    yystackp->yylastDeleted = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yystates[yyk] = YY_NULL;
}

/** Undelete the last stack that was marked as deleted.  Can only be
    done once after a deletion, and only when all other stacks have
    been deleted.  */
static void
yyundeleteLastStack (yyGLRStack* yystackp)
{
  if (yystackp->yylastDeleted == YY_NULL || yystackp->yytops.yysize != 0)
    return;
  yystackp->yytops.yystates[0] = yystackp->yylastDeleted;
  yystackp->yytops.yysize = 1;
  YYDPRINTF ((stderr, "Restoring last deleted stack as stack #0.\n"));
  yystackp->yylastDeleted = YY_NULL;
}

static inline void
yyremoveDeletes (yyGLRStack* yystackp)
{
  size_t yyi, yyj;
  yyi = yyj = 0;
  while (yyj < yystackp->yytops.yysize)
    {
      if (yystackp->yytops.yystates[yyi] == YY_NULL)
        {
          if (yyi == yyj)
            {
              YYDPRINTF ((stderr, "Removing dead stacks.\n"));
            }
          yystackp->yytops.yysize -= 1;
        }
      else
        {
          yystackp->yytops.yystates[yyj] = yystackp->yytops.yystates[yyi];
          /* In the current implementation, it's unnecessary to copy
             yystackp->yytops.yylookaheadNeeds[yyi] since, after
             yyremoveDeletes returns, the parser immediately either enters
             deterministic operation or shifts a token.  However, it doesn't
             hurt, and the code might evolve to need it.  */
          yystackp->yytops.yylookaheadNeeds[yyj] =
            yystackp->yytops.yylookaheadNeeds[yyi];
          if (yyj != yyi)
            {
              YYDPRINTF ((stderr, "Rename stack %lu -> %lu.\n",
                          (unsigned long int) yyi, (unsigned long int) yyj));
            }
          yyj += 1;
        }
      yyi += 1;
    }
}

/** Shift to a new state on stack #K of STACK, corresponding to LR state
 * LRSTATE, at input position POSN, with (resolved) semantic value SVAL.  */
static inline void
yyglrShift (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
            size_t yyposn,
            YYSTYPE* yyvalp)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yytrue;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yysval = *yyvalp;
  yystackp->yytops.yystates[yyk] = yynewState;

  YY_RESERVE_GLRSTACK (yystackp);
}

/** Shift stack #K of YYSTACK, to a new state corresponding to LR
 *  state YYLRSTATE, at input position YYPOSN, with the (unresolved)
 *  semantic value of YYRHS under the action for YYRULE.  */
static inline void
yyglrShiftDefer (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
                 size_t yyposn, yyGLRState* rhs, yyRuleNum yyrule)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yyfalse;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyfirstVal = YY_NULL;
  yystackp->yytops.yystates[yyk] = yynewState;

  /* Invokes YY_RESERVE_GLRSTACK.  */
  yyaddDeferredAction (yystackp, yyk, yynewState, rhs, yyrule);
}

/** Pop the symbols consumed by reduction #RULE from the top of stack
 *  #K of STACK, and perform the appropriate semantic action on their
 *  semantic values.  Assumes that all ambiguities in semantic values
 *  have been previously resolved.  Set *VALP to the resulting value,
 *  and *LOCP to the computed location (if any).  Return value is as
 *  for userAction.  */
static inline YYRESULTTAG
yydoAction (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
            YYSTYPE* yyvalp)
{
  int yynrhs = yyrhsLength (yyrule);

  if (yystackp->yysplitPoint == YY_NULL)
    {
      /* Standard special case: single stack.  */
      yyGLRStackItem* rhs = (yyGLRStackItem*) yystackp->yytops.yystates[yyk];
      YYASSERT (yyk == 0);
      yystackp->yynextFree -= yynrhs;
      yystackp->yyspaceLeft += yynrhs;
      yystackp->yytops.yystates[0] = & yystackp->yynextFree[-1].yystate;
      return yyuserAction (yyrule, yynrhs, rhs, yystackp,
                           yyvalp);
    }
  else
    {
      /* At present, doAction is never called in nondeterministic
       * mode, so this branch is never taken.  It is here in
       * anticipation of a future feature that will allow immediate
       * evaluation of selected actions in nondeterministic mode.  */
      int yyi;
      yyGLRState* yys;
      yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
      yys = yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred
        = yystackp->yytops.yystates[yyk];
      for (yyi = 0; yyi < yynrhs; yyi += 1)
        {
          yys = yys->yypred;
          YYASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yystackp->yytops.yystates[yyk] = yys;
      return yyuserAction (yyrule, yynrhs, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyvalp);
    }
}

#if !YYDEBUG
# define YY_REDUCE_PRINT(Args)
#else
# define YY_REDUCE_PRINT(Args)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print Args;               \
} while (YYID (0))

/*----------------------------------------------------------.
| Report that the RULE is going to be reduced on stack #K.  |
`----------------------------------------------------------*/

/*ARGSUSED*/ static inline void
yy_reduce_print (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
                 YYSTYPE* yyvalp)
{
  int yynrhs = yyrhsLength (yyrule);
  yybool yynormal __attribute__ ((__unused__)) =
    (yystackp->yysplitPoint == YY_NULL);
  yyGLRStackItem* yyvsp = (yyGLRStackItem*) yystackp->yytops.yystates[yyk];
  int yylow = 1;
  int yyi;
  YYUSE (yyvalp);
  YYFPRINTF (stderr, "Reducing stack %lu by rule %d (line %lu):\n",
             (unsigned long int) yyk, yyrule - 1,
             (unsigned long int) yyrline[yyrule]);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
                       &(((yyGLRStackItem const *)yyvsp)[YYFILL ((yyi + 1) - (yynrhs))].yystate.yysemantics.yysval)
                                              );
      YYFPRINTF (stderr, "\n");
    }
}
#endif

/** Pop items off stack #K of STACK according to grammar rule RULE,
 *  and push back on the resulting nonterminal symbol.  Perform the
 *  semantic action associated with RULE and store its value with the
 *  newly pushed state, if FORCEEVAL or if STACK is currently
 *  unambiguous.  Otherwise, store the deferred semantic action with
 *  the new state.  If the new state would have an identical input
 *  position, LR state, and predecessor to an existing state on the stack,
 *  it is identified with that existing state, eliminating stack #K from
 *  the STACK.  In this case, the (necessarily deferred) semantic value is
 *  added to the options for the existing state's semantic value.
 */
static inline YYRESULTTAG
yyglrReduce (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
             yybool yyforceEval)
{
  size_t yyposn = yystackp->yytops.yystates[yyk]->yyposn;

  if (yyforceEval || yystackp->yysplitPoint == YY_NULL)
    {
      YYSTYPE yysval;

      YY_REDUCE_PRINT ((yystackp, yyk, yyrule, &yysval));
      YYCHK (yydoAction (yystackp, yyk, yyrule, &yysval));
      YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyrule], &yysval, &yyloc);
      yyglrShift (yystackp, yyk,
                  yyLRgotoState (yystackp->yytops.yystates[yyk]->yylrState,
                                 yylhsNonterm (yyrule)),
                  yyposn, &yysval);
    }
  else
    {
      size_t yyi;
      int yyn;
      yyGLRState* yys, *yys0 = yystackp->yytops.yystates[yyk];
      yyStateNum yynewLRState;

      for (yys = yystackp->yytops.yystates[yyk], yyn = yyrhsLength (yyrule);
           0 < yyn; yyn -= 1)
        {
          yys = yys->yypred;
          YYASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yynewLRState = yyLRgotoState (yys->yylrState, yylhsNonterm (yyrule));
      YYDPRINTF ((stderr,
                  "Reduced stack %lu by rule #%d; action deferred.  Now in state %d.\n",
                  (unsigned long int) yyk, yyrule - 1, yynewLRState));
      for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
        if (yyi != yyk && yystackp->yytops.yystates[yyi] != YY_NULL)
          {
            yyGLRState *yysplit = yystackp->yysplitPoint;
            yyGLRState *yyp = yystackp->yytops.yystates[yyi];
            while (yyp != yys && yyp != yysplit && yyp->yyposn >= yyposn)
              {
                if (yyp->yylrState == yynewLRState && yyp->yypred == yys)
                  {
                    yyaddDeferredAction (yystackp, yyk, yyp, yys0, yyrule);
                    yymarkStackDeleted (yystackp, yyk);
                    YYDPRINTF ((stderr, "Merging stack %lu into stack %lu.\n",
                                (unsigned long int) yyk,
                                (unsigned long int) yyi));
                    return yyok;
                  }
                yyp = yyp->yypred;
              }
          }
      yystackp->yytops.yystates[yyk] = yys;
      yyglrShiftDefer (yystackp, yyk, yynewLRState, yyposn, yys0, yyrule);
    }
  return yyok;
}

static size_t
yysplitStack (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yysplitPoint == YY_NULL)
    {
      YYASSERT (yyk == 0);
      yystackp->yysplitPoint = yystackp->yytops.yystates[yyk];
    }
  if (yystackp->yytops.yysize >= yystackp->yytops.yycapacity)
    {
      yyGLRState** yynewStates;
      yybool* yynewLookaheadNeeds;

      yynewStates = YY_NULL;

      if (yystackp->yytops.yycapacity
          > (YYSIZEMAX / (2 * sizeof yynewStates[0])))
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yycapacity *= 2;

      yynewStates =
        (yyGLRState**) YYREALLOC (yystackp->yytops.yystates,
                                  (yystackp->yytops.yycapacity
                                   * sizeof yynewStates[0]));
      if (yynewStates == YY_NULL)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yystates = yynewStates;

      yynewLookaheadNeeds =
        (yybool*) YYREALLOC (yystackp->yytops.yylookaheadNeeds,
                             (yystackp->yytops.yycapacity
                              * sizeof yynewLookaheadNeeds[0]));
      if (yynewLookaheadNeeds == YY_NULL)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yylookaheadNeeds = yynewLookaheadNeeds;
    }
  yystackp->yytops.yystates[yystackp->yytops.yysize]
    = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yylookaheadNeeds[yystackp->yytops.yysize]
    = yystackp->yytops.yylookaheadNeeds[yyk];
  yystackp->yytops.yysize += 1;
  return yystackp->yytops.yysize-1;
}

/** True iff Y0 and Y1 represent identical options at the top level.
 *  That is, they represent the same rule applied to RHS symbols
 *  that produce the same terminal symbols.  */
static yybool
yyidenticalOptions (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  if (yyy0->yyrule == yyy1->yyrule)
    {
      yyGLRState *yys0, *yys1;
      int yyn;
      for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
           yyn = yyrhsLength (yyy0->yyrule);
           yyn > 0;
           yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
        if (yys0->yyposn != yys1->yyposn)
          return yyfalse;
      return yytrue;
    }
  else
    return yyfalse;
}

/** Assuming identicalOptions (Y0,Y1), destructively merge the
 *  alternative semantic values for the RHS-symbols of Y1 and Y0.  */
static void
yymergeOptionSets (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  yyGLRState *yys0, *yys1;
  int yyn;
  for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
       yyn = yyrhsLength (yyy0->yyrule);
       yyn > 0;
       yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
    {
      if (yys0 == yys1)
        break;
      else if (yys0->yyresolved)
        {
          yys1->yyresolved = yytrue;
          yys1->yysemantics.yysval = yys0->yysemantics.yysval;
        }
      else if (yys1->yyresolved)
        {
          yys0->yyresolved = yytrue;
          yys0->yysemantics.yysval = yys1->yysemantics.yysval;
        }
      else
        {
          yySemanticOption** yyz0p = &yys0->yysemantics.yyfirstVal;
          yySemanticOption* yyz1 = yys1->yysemantics.yyfirstVal;
          while (YYID (yytrue))
            {
              if (yyz1 == *yyz0p || yyz1 == YY_NULL)
                break;
              else if (*yyz0p == YY_NULL)
                {
                  *yyz0p = yyz1;
                  break;
                }
              else if (*yyz0p < yyz1)
                {
                  yySemanticOption* yyz = *yyz0p;
                  *yyz0p = yyz1;
                  yyz1 = yyz1->yynext;
                  (*yyz0p)->yynext = yyz;
                }
              yyz0p = &(*yyz0p)->yynext;
            }
          yys1->yysemantics.yyfirstVal = yys0->yysemantics.yyfirstVal;
        }
    }
}

/** Y0 and Y1 represent two possible actions to take in a given
 *  parsing state; return 0 if no combination is possible,
 *  1 if user-mergeable, 2 if Y0 is preferred, 3 if Y1 is preferred.  */
static int
yypreference (yySemanticOption* y0, yySemanticOption* y1)
{
  yyRuleNum r0 = y0->yyrule, r1 = y1->yyrule;
  int p0 = yydprec[r0], p1 = yydprec[r1];

  if (p0 == p1)
    {
      if (yymerger[r0] == 0 || yymerger[r0] != yymerger[r1])
        return 0;
      else
        return 1;
    }
  if (p0 == 0 || p1 == 0)
    return 0;
  if (p0 < p1)
    return 3;
  if (p1 < p0)
    return 2;
  return 0;
}

static YYRESULTTAG yyresolveValue (yyGLRState* yys,
                                   yyGLRStack* yystackp);


/** Resolve the previous N states starting at and including state S.  If result
 *  != yyok, some states may have been left unresolved possibly with empty
 *  semantic option chains.  Regardless of whether result = yyok, each state
 *  has been left with consistent data so that yydestroyGLRState can be invoked
 *  if necessary.  */
static YYRESULTTAG
yyresolveStates (yyGLRState* yys, int yyn,
                 yyGLRStack* yystackp)
{
  if (0 < yyn)
    {
      YYASSERT (yys->yypred);
      YYCHK (yyresolveStates (yys->yypred, yyn-1, yystackp));
      if (! yys->yyresolved)
        YYCHK (yyresolveValue (yys, yystackp));
    }
  return yyok;
}

/** Resolve the states for the RHS of OPT, perform its user action, and return
 *  the semantic value and location.  Regardless of whether result = yyok, all
 *  RHS states have been destroyed (assuming the user action destroys all RHS
 *  semantic values if invoked).  */
static YYRESULTTAG
yyresolveAction (yySemanticOption* yyopt, yyGLRStack* yystackp,
                 YYSTYPE* yyvalp)
{
  yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
  int yynrhs = yyrhsLength (yyopt->yyrule);
  YYRESULTTAG yyflag =
    yyresolveStates (yyopt->yystate, yynrhs, yystackp);
  if (yyflag != yyok)
    {
      yyGLRState *yys;
      for (yys = yyopt->yystate; yynrhs > 0; yys = yys->yypred, yynrhs -= 1)
        yydestroyGLRState ("Cleanup: popping", yys);
      return yyflag;
    }

  yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred = yyopt->yystate;
  {
    int yychar_current = yychar;
    YYSTYPE yylval_current = yylval;
    yychar = yyopt->yyrawchar;
    yylval = yyopt->yyval;
    yyflag = yyuserAction (yyopt->yyrule, yynrhs,
                           yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyvalp);
    yychar = yychar_current;
    yylval = yylval_current;
  }
  return yyflag;
}

#if YYDEBUG
static void
yyreportTree (yySemanticOption* yyx, int yyindent)
{
  int yynrhs = yyrhsLength (yyx->yyrule);
  int yyi;
  yyGLRState* yys;
  yyGLRState* yystates[1 + YYMAXRHS];
  yyGLRState yyleftmost_state;

  for (yyi = yynrhs, yys = yyx->yystate; 0 < yyi; yyi -= 1, yys = yys->yypred)
    yystates[yyi] = yys;
  if (yys == YY_NULL)
    {
      yyleftmost_state.yyposn = 0;
      yystates[0] = &yyleftmost_state;
    }
  else
    yystates[0] = yys;

  if (yyx->yystate->yyposn < yys->yyposn + 1)
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, empty>\n",
               yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
               yyx->yyrule - 1);
  else
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, tokens %lu .. %lu>\n",
               yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
               yyx->yyrule - 1, (unsigned long int) (yys->yyposn + 1),
               (unsigned long int) yyx->yystate->yyposn);
  for (yyi = 1; yyi <= yynrhs; yyi += 1)
    {
      if (yystates[yyi]->yyresolved)
        {
          if (yystates[yyi-1]->yyposn+1 > yystates[yyi]->yyposn)
            YYFPRINTF (stderr, "%*s%s <empty>\n", yyindent+2, "",
                       yytokenName (yyrhs[yyprhs[yyx->yyrule]+yyi-1]));
          else
            YYFPRINTF (stderr, "%*s%s <tokens %lu .. %lu>\n", yyindent+2, "",
                       yytokenName (yyrhs[yyprhs[yyx->yyrule]+yyi-1]),
                       (unsigned long int) (yystates[yyi - 1]->yyposn + 1),
                       (unsigned long int) yystates[yyi]->yyposn);
        }
      else
        yyreportTree (yystates[yyi]->yysemantics.yyfirstVal, yyindent+2);
    }
}
#endif

/*ARGSUSED*/ static YYRESULTTAG
yyreportAmbiguity (yySemanticOption* yyx0,
                   yySemanticOption* yyx1)
{
  YYUSE (yyx0);
  YYUSE (yyx1);

#if YYDEBUG
  YYFPRINTF (stderr, "Ambiguity detected.\n");
  YYFPRINTF (stderr, "Option 1,\n");
  yyreportTree (yyx0, 2);
  YYFPRINTF (stderr, "\nOption 2,\n");
  yyreportTree (yyx1, 2);
  YYFPRINTF (stderr, "\n");
#endif

  yyerror (YY_("syntax is ambiguous"));
  return yyabort;
}

/** Resolve the ambiguity represented in state S, perform the indicated
 *  actions, and set the semantic value of S.  If result != yyok, the chain of
 *  semantic options in S has been cleared instead or it has been left
 *  unmodified except that redundant options may have been removed.  Regardless
 *  of whether result = yyok, S has been left with consistent data so that
 *  yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp)
{
  yySemanticOption* yyoptionList = yys->yysemantics.yyfirstVal;
  yySemanticOption* yybest = yyoptionList;
  yySemanticOption** yypp;
  yybool yymerge = yyfalse;
  YYSTYPE yysval;
  YYRESULTTAG yyflag;

  for (yypp = &yyoptionList->yynext; *yypp != YY_NULL; )
    {
      yySemanticOption* yyp = *yypp;

      if (yyidenticalOptions (yybest, yyp))
        {
          yymergeOptionSets (yybest, yyp);
          *yypp = yyp->yynext;
        }
      else
        {
          switch (yypreference (yybest, yyp))
            {
            case 0:
              return yyreportAmbiguity (yybest, yyp);
              break;
            case 1:
              yymerge = yytrue;
              break;
            case 2:
              break;
            case 3:
              yybest = yyp;
              yymerge = yyfalse;
              break;
            default:
              /* This cannot happen so it is not worth a YYASSERT (yyfalse),
                 but some compilers complain if the default case is
                 omitted.  */
              break;
            }
          yypp = &yyp->yynext;
        }
    }

  if (yymerge)
    {
      yySemanticOption* yyp;
      int yyprec = yydprec[yybest->yyrule];
      yyflag = yyresolveAction (yybest, yystackp, &yysval);
      if (yyflag == yyok)
        for (yyp = yybest->yynext; yyp != YY_NULL; yyp = yyp->yynext)
          {
            if (yyprec == yydprec[yyp->yyrule])
              {
                YYSTYPE yysval_other;
                yyflag = yyresolveAction (yyp, yystackp, &yysval_other);
                if (yyflag != yyok)
                  {
                    yydestruct ("Cleanup: discarding incompletely merged value for",
                                yystos[yys->yylrState],
                                &yysval);
                    break;
                  }
                yyuserMerge (yymerger[yyp->yyrule], &yysval, &yysval_other);
              }
          }
    }
  else
    yyflag = yyresolveAction (yybest, yystackp, &yysval);

  if (yyflag == yyok)
    {
      yys->yyresolved = yytrue;
      yys->yysemantics.yysval = yysval;
    }
  else
    yys->yysemantics.yyfirstVal = YY_NULL;
  return yyflag;
}

static YYRESULTTAG
yyresolveStack (yyGLRStack* yystackp)
{
  if (yystackp->yysplitPoint != YY_NULL)
    {
      yyGLRState* yys;
      int yyn;

      for (yyn = 0, yys = yystackp->yytops.yystates[0];
           yys != yystackp->yysplitPoint;
           yys = yys->yypred, yyn += 1)
        continue;
      YYCHK (yyresolveStates (yystackp->yytops.yystates[0], yyn, yystackp
                             ));
    }
  return yyok;
}

static void
yycompressStack (yyGLRStack* yystackp)
{
  yyGLRState* yyp, *yyq, *yyr;

  if (yystackp->yytops.yysize != 1 || yystackp->yysplitPoint == YY_NULL)
    return;

  for (yyp = yystackp->yytops.yystates[0], yyq = yyp->yypred, yyr = YY_NULL;
       yyp != yystackp->yysplitPoint;
       yyr = yyp, yyp = yyq, yyq = yyp->yypred)
    yyp->yypred = yyr;

  yystackp->yyspaceLeft += yystackp->yynextFree - yystackp->yyitems;
  yystackp->yynextFree = ((yyGLRStackItem*) yystackp->yysplitPoint) + 1;
  yystackp->yyspaceLeft -= yystackp->yynextFree - yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULL;
  yystackp->yylastDeleted = YY_NULL;

  while (yyr != YY_NULL)
    {
      yystackp->yynextFree->yystate = *yyr;
      yyr = yyr->yypred;
      yystackp->yynextFree->yystate.yypred = &yystackp->yynextFree[-1].yystate;
      yystackp->yytops.yystates[0] = &yystackp->yynextFree->yystate;
      yystackp->yynextFree += 1;
      yystackp->yyspaceLeft -= 1;
    }
}

static YYRESULTTAG
yyprocessOneStack (yyGLRStack* yystackp, size_t yyk,
                   size_t yyposn)
{
  int yyaction;
  const short int* yyconflicts;
  yyRuleNum yyrule;

  while (yystackp->yytops.yystates[yyk] != YY_NULL)
    {
      yyStateNum yystate = yystackp->yytops.yystates[yyk]->yylrState;
      YYDPRINTF ((stderr, "Stack %lu Entering state %d\n",
                  (unsigned long int) yyk, yystate));

      YYASSERT (yystate != YYFINAL);

      if (yyisDefaultedState (yystate))
        {
          yyrule = yydefaultAction (yystate);
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, "Stack %lu dies.\n",
                          (unsigned long int) yyk));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          YYCHK (yyglrReduce (yystackp, yyk, yyrule, yyfalse));
        }
      else
        {
          yySymbol yytoken;
          yystackp->yytops.yylookaheadNeeds[yyk] = yytrue;
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

          yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);

          while (*yyconflicts != 0)
            {
              size_t yynewStack = yysplitStack (yystackp, yyk);
              YYDPRINTF ((stderr, "Splitting off stack %lu from %lu.\n",
                          (unsigned long int) yynewStack,
                          (unsigned long int) yyk));
              YYCHK (yyglrReduce (yystackp, yynewStack,
                                  *yyconflicts, yyfalse));
              YYCHK (yyprocessOneStack (yystackp, yynewStack,
                                        yyposn));
              yyconflicts += 1;
            }

          if (yyisShiftAction (yyaction))
            break;
          else if (yyisErrorAction (yyaction))
            {
              YYDPRINTF ((stderr, "Stack %lu dies.\n",
                          (unsigned long int) yyk));
              yymarkStackDeleted (yystackp, yyk);
              break;
            }
          else
            YYCHK (yyglrReduce (yystackp, yyk, -yyaction,
                                yyfalse));
        }
    }
  return yyok;
}

/*ARGSUSED*/ static void
yyreportSyntaxError (yyGLRStack* yystackp)
{
  if (yystackp->yyerrState != 0)
    return;
#if ! YYERROR_VERBOSE
  yyerror (YY_("syntax error"));
#else
  {
  yySymbol yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);
  size_t yysize0 = yytnamerr (YY_NULL, yytokenName (yytoken));
  size_t yysize = yysize0;
  yybool yysize_overflow = yyfalse;
  char* yymsg = YY_NULL;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected").  */
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
      int yyn = yypact[yystackp->yytops.yystates[0]->yylrState];
      yyarg[yycount++] = yytokenName (yytoken);
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for this
             state because they are default actions.  */
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
                yyarg[yycount++] = yytokenName (yyx);
                {
                  size_t yysz = yysize + yytnamerr (YY_NULL, yytokenName (yyx));
                  yysize_overflow |= yysz < yysize;
                  yysize = yysz;
                }
              }
        }
    }

  switch (yycount)
    {
#define YYCASE_(N, S)                   \
      case N:                           \
        yyformat = S;                   \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  {
    size_t yysz = yysize + strlen (yyformat);
    yysize_overflow |= yysz < yysize;
    yysize = yysz;
  }

  if (!yysize_overflow)
    yymsg = (char *) YYMALLOC (yysize);

  if (yymsg)
    {
      char *yyp = yymsg;
      int yyi = 0;
      while ((*yyp = *yyformat))
        {
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
      yyerror (yymsg);
      YYFREE (yymsg);
    }
  else
    {
      yyerror (YY_("syntax error"));
      yyMemoryExhausted (yystackp);
    }
  }
#endif /* YYERROR_VERBOSE */
  yynerrs += 1;
}

/* Recover from a syntax error on *YYSTACKP, assuming that *YYSTACKP->YYTOKENP,
   yylval, and yylloc are the syntactic category, semantic value, and location
   of the lookahead.  */
/*ARGSUSED*/ static void
yyrecoverSyntaxError (yyGLRStack* yystackp)
{
  size_t yyk;
  int yyj;

  if (yystackp->yyerrState == 3)
    /* We just shifted the error token and (perhaps) took some
       reductions.  Skip tokens until we can proceed.  */
    while (YYID (yytrue))
      {
        yySymbol yytoken;
        if (yychar == YYEOF)
          yyFail (yystackp, YY_NULL);
        if (yychar != YYEMPTY)
          {
            yytoken = YYTRANSLATE (yychar);
            yydestruct ("Error: discarding",
                        yytoken, &yylval);
          }
        YYDPRINTF ((stderr, "Reading a token: "));
        yychar = YYLEX;
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
        yyj = yypact[yystackp->yytops.yystates[0]->yylrState];
        if (yypact_value_is_default (yyj))
          return;
        yyj += yytoken;
        if (yyj < 0 || YYLAST < yyj || yycheck[yyj] != yytoken)
          {
            if (yydefact[yystackp->yytops.yystates[0]->yylrState] != 0)
              return;
          }
        else if (! yytable_value_is_error (yytable[yyj]))
          return;
      }

  /* Reduce to one stack.  */
  for (yyk = 0; yyk < yystackp->yytops.yysize; yyk += 1)
    if (yystackp->yytops.yystates[yyk] != YY_NULL)
      break;
  if (yyk >= yystackp->yytops.yysize)
    yyFail (yystackp, YY_NULL);
  for (yyk += 1; yyk < yystackp->yytops.yysize; yyk += 1)
    yymarkStackDeleted (yystackp, yyk);
  yyremoveDeletes (yystackp);
  yycompressStack (yystackp);

  /* Now pop stack until we find a state that shifts the error token.  */
  yystackp->yyerrState = 3;
  while (yystackp->yytops.yystates[0] != YY_NULL)
    {
      yyGLRState *yys = yystackp->yytops.yystates[0];
      yyj = yypact[yys->yylrState];
      if (! yypact_value_is_default (yyj))
        {
          yyj += YYTERROR;
          if (0 <= yyj && yyj <= YYLAST && yycheck[yyj] == YYTERROR
              && yyisShiftAction (yytable[yyj]))
            {
              /* Shift the error token.  */
              YY_SYMBOL_PRINT ("Shifting", yystos[yytable[yyj]],
                               &yylval, &yyerrloc);
              yyglrShift (yystackp, 0, yytable[yyj],
                          yys->yyposn, &yylval);
              yys = yystackp->yytops.yystates[0];
              break;
            }
        }
      if (yys->yypred != YY_NULL)
        yydestroyGLRState ("Error: popping", yys);
      yystackp->yytops.yystates[0] = yys->yypred;
      yystackp->yynextFree -= 1;
      yystackp->yyspaceLeft += 1;
    }
  if (yystackp->yytops.yystates[0] == YY_NULL)
    yyFail (yystackp, YY_NULL);
}

#define YYCHK1(YYE)                                                          \
  do {                                                                       \
    switch (YYE) {                                                           \
    case yyok:                                                               \
      break;                                                                 \
    case yyabort:                                                            \
      goto yyabortlab;                                                       \
    case yyaccept:                                                           \
      goto yyacceptlab;                                                      \
    case yyerr:                                                              \
      goto yyuser_error;                                                     \
    default:                                                                 \
      goto yybuglab;                                                         \
    }                                                                        \
  } while (YYID (0))


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
  int yyresult;
  yyGLRStack yystack;
  yyGLRStack* const yystackp = &yystack;
  size_t yyposn;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY;
  yylval = yyval_default;

  if (! yyinitGLRStack (yystackp, YYINITDEPTH))
    goto yyexhaustedlab;
  switch (YYSETJMP (yystack.yyexception_buffer))
    {
    case 0: break;
    case 1: goto yyabortlab;
    case 2: goto yyexhaustedlab;
    default: goto yybuglab;
    }
  yyglrShift (&yystack, 0, 0, 0, &yylval);
  yyposn = 0;

  while (YYID (yytrue))
    {
      /* For efficiency, we have two loops, the first of which is
         specialized to deterministic operation (single stack, no
         potential ambiguity).  */
      /* Standard mode */
      while (YYID (yytrue))
        {
          yyRuleNum yyrule;
          int yyaction;
          const short int* yyconflicts;

          yyStateNum yystate = yystack.yytops.yystates[0]->yylrState;
          YYDPRINTF ((stderr, "Entering state %d\n", yystate));
          if (yystate == YYFINAL)
            goto yyacceptlab;
          if (yyisDefaultedState (yystate))
            {
              yyrule = yydefaultAction (yystate);
              if (yyrule == 0)
                {

                  yyreportSyntaxError (&yystack);
                  goto yyuser_error;
                }
              YYCHK1 (yyglrReduce (&yystack, 0, yyrule, yytrue));
            }
          else
            {
              yySymbol yytoken;
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

              yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);
              if (*yyconflicts != 0)
                break;
              if (yyisShiftAction (yyaction))
                {
                  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
                  yychar = YYEMPTY;
                  yyposn += 1;
                  yyglrShift (&yystack, 0, yyaction, yyposn, &yylval);
                  if (0 < yystack.yyerrState)
                    yystack.yyerrState -= 1;
                }
              else if (yyisErrorAction (yyaction))
                {

                  yyreportSyntaxError (&yystack);
                  goto yyuser_error;
                }
              else
                YYCHK1 (yyglrReduce (&yystack, 0, -yyaction, yytrue));
            }
        }

      while (YYID (yytrue))
        {
          yySymbol yytoken_to_shift;
          size_t yys;

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            yystackp->yytops.yylookaheadNeeds[yys] = yychar != YYEMPTY;

          /* yyprocessOneStack returns one of three things:

              - An error flag.  If the caller is yyprocessOneStack, it
                immediately returns as well.  When the caller is finally
                yyparse, it jumps to an error label via YYCHK1.

              - yyok, but yyprocessOneStack has invoked yymarkStackDeleted
                (&yystack, yys), which sets the top state of yys to NULL.  Thus,
                yyparse's following invocation of yyremoveDeletes will remove
                the stack.

              - yyok, when ready to shift a token.

             Except in the first case, yyparse will invoke yyremoveDeletes and
             then shift the next token onto all remaining stacks.  This
             synchronization of the shift (that is, after all preceding
             reductions on all stacks) helps prevent double destructor calls
             on yylval in the event of memory exhaustion.  */

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            YYCHK1 (yyprocessOneStack (&yystack, yys, yyposn));
          yyremoveDeletes (&yystack);
          if (yystack.yytops.yysize == 0)
            {
              yyundeleteLastStack (&yystack);
              if (yystack.yytops.yysize == 0)
                yyFail (&yystack, YY_("syntax error"));
              YYCHK1 (yyresolveStack (&yystack));
              YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));

              yyreportSyntaxError (&yystack);
              goto yyuser_error;
            }

          /* If any yyglrShift call fails, it will fail after shifting.  Thus,
             a copy of yylval will already be on stack 0 in the event of a
             failure in the following loop.  Thus, yychar is set to YYEMPTY
             before the loop to make sure the user destructor for yylval isn't
             called twice.  */
          yytoken_to_shift = YYTRANSLATE (yychar);
          yychar = YYEMPTY;
          yyposn += 1;
          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            {
              int yyaction;
              const short int* yyconflicts;
              yyStateNum yystate = yystack.yytops.yystates[yys]->yylrState;
              yygetLRActions (yystate, yytoken_to_shift, &yyaction,
                              &yyconflicts);
              /* Note that yyconflicts were handled by yyprocessOneStack.  */
              YYDPRINTF ((stderr, "On stack %lu, ", (unsigned long int) yys));
              YY_SYMBOL_PRINT ("shifting", yytoken_to_shift, &yylval, &yylloc);
              yyglrShift (&yystack, yys, yyaction, yyposn,
                          &yylval);
              YYDPRINTF ((stderr, "Stack %lu now in state #%d\n",
                          (unsigned long int) yys,
                          yystack.yytops.yystates[yys]->yylrState));
            }

          if (yystack.yytops.yysize == 1)
            {
              YYCHK1 (yyresolveStack (&yystack));
              YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yycompressStack (&yystack);
              break;
            }
        }
      continue;
    yyuser_error:
      yyrecoverSyntaxError (&yystack);
      yyposn = yystack.yytops.yystates[0]->yyposn;
    }

 yyacceptlab:
  yyresult = 0;
  goto yyreturn;

 yybuglab:
  YYASSERT (yyfalse);
  goto yyabortlab;

 yyabortlab:
  yyresult = 1;
  goto yyreturn;

 yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;

 yyreturn:
  if (yychar != YYEMPTY)
    yydestruct ("Cleanup: discarding lookahead",
                YYTRANSLATE (yychar), &yylval);

  /* If the stack is well-formed, pop the stack until it is empty,
     destroying its entries as we go.  But free the stack regardless
     of whether it is well-formed.  */
  if (yystack.yyitems)
    {
      yyGLRState** yystates = yystack.yytops.yystates;
      if (yystates)
        {
          size_t yysize = yystack.yytops.yysize;
          size_t yyk;
          for (yyk = 0; yyk < yysize; yyk += 1)
            if (yystates[yyk])
              {
                while (yystates[yyk])
                  {
                    yyGLRState *yys = yystates[yyk];
                  if (yys->yypred != YY_NULL)
                      yydestroyGLRState ("Cleanup: popping", yys);
                    yystates[yyk] = yys->yypred;
                    yystack.yynextFree -= 1;
                    yystack.yyspaceLeft += 1;
                  }
                break;
              }
        }
      yyfreeGLRStack (&yystack);
    }

  /* Make sure YYID is used.  */
  return YYID (yyresult);
}

/* DEBUGGING ONLY */
#if YYDEBUG
static void yypstack (yyGLRStack* yystackp, size_t yyk)
  __attribute__ ((__unused__));
static void yypdumpstack (yyGLRStack* yystackp) __attribute__ ((__unused__));

static void
yy_yypstack (yyGLRState* yys)
{
  if (yys->yypred)
    {
      yy_yypstack (yys->yypred);
      YYFPRINTF (stderr, " -> ");
    }
  YYFPRINTF (stderr, "%d@%lu", yys->yylrState,
             (unsigned long int) yys->yyposn);
}

static void
yypstates (yyGLRState* yyst)
{
  if (yyst == YY_NULL)
    YYFPRINTF (stderr, "<null>");
  else
    yy_yypstack (yyst);
  YYFPRINTF (stderr, "\n");
}

static void
yypstack (yyGLRStack* yystackp, size_t yyk)
{
  yypstates (yystackp->yytops.yystates[yyk]);
}

#define YYINDEX(YYX)                                                         \
    ((YYX) == YY_NULL ? -1 : (yyGLRStackItem*) (YYX) - yystackp->yyitems)


static void
yypdumpstack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yyp;
  size_t yyi;
  for (yyp = yystackp->yyitems; yyp < yystackp->yynextFree; yyp += 1)
    {
      YYFPRINTF (stderr, "%3lu. ",
                 (unsigned long int) (yyp - yystackp->yyitems));
      if (*(yybool *) yyp)
        {
          YYFPRINTF (stderr, "Res: %d, LR State: %d, posn: %lu, pred: %ld",
                     yyp->yystate.yyresolved, yyp->yystate.yylrState,
                     (unsigned long int) yyp->yystate.yyposn,
                     (long int) YYINDEX (yyp->yystate.yypred));
          if (! yyp->yystate.yyresolved)
            YYFPRINTF (stderr, ", firstVal: %ld",
                       (long int) YYINDEX (yyp->yystate
                                             .yysemantics.yyfirstVal));
        }
      else
        {
          YYFPRINTF (stderr, "Option. rule: %d, state: %ld, next: %ld",
                     yyp->yyoption.yyrule - 1,
                     (long int) YYINDEX (yyp->yyoption.yystate),
                     (long int) YYINDEX (yyp->yyoption.yynext));
        }
      YYFPRINTF (stderr, "\n");
    }
  YYFPRINTF (stderr, "Tops:");
  for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
    YYFPRINTF (stderr, "%lu: %ld; ", (unsigned long int) yyi,
               (long int) YYINDEX (yystackp->yytops.yystates[yyi]));
  YYFPRINTF (stderr, "\n");
}
#endif
/* Line 2575 of glr.c  */
#line 1719 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"

void yyerror(const char *s) 
{
	Program::addError(new SyntaxError(s));
	fprintf(stderr, "Error:%s\n", s);
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