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
#line 4 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"

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
	Node* k;
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
	operand op;
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
	AST * ast = new AST();

/* Line 207 of glr.c  */
#line 124 "yacc.cpp"

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
#line 153 "yacc.cpp"

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
#define YYLAST   1446

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  110
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  100
/* YYNRULES -- Number of rules.  */
#define YYNRULES  407
/* YYNRULES -- Number of states.  */
#define YYNSTATES  763
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 9
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYTRANSLATE(X) -- Bison symbol number corresponding to X.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   342

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    97,   105,     2,
      89,   100,    95,    93,    88,    94,   102,    96,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    99,    98,
      91,   101,    92,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    90,     2,   107,   104,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   108,   103,   109,   106,     2,     2,     2,
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
      85,    86,    87
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
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
static const short int yyrhs[] =
{
     111,     0,    -1,   112,     3,    -1,   134,    98,   113,    -1,
     113,    -1,   198,   113,    -1,   198,    -1,   115,   156,    -1,
      15,    44,   116,    24,   157,    99,    -1,    15,   126,    44,
     116,    24,   157,    99,    -1,    15,    44,   116,    99,    -1,
      15,   126,    44,   116,    99,    -1,    15,    13,    44,   116,
      24,   157,    99,    -1,    15,    12,    44,   116,    24,   157,
      99,    -1,    15,    13,    44,   116,    99,    -1,    15,    12,
      44,   116,    99,    -1,    15,    13,    12,    44,   116,    24,
     157,    99,    -1,    15,    12,    13,    44,   116,    24,   157,
      99,    -1,    15,    13,    12,    44,   116,    99,    -1,    15,
      12,    13,    44,   116,    99,    -1,    15,    12,   126,    44,
     116,    24,   157,    99,    -1,    15,    13,   126,    44,   116,
      24,   157,    99,    -1,    15,    13,   126,    44,   116,    99,
      -1,    15,    12,   126,    44,   116,    99,    -1,    15,    13,
      12,   126,    44,   116,    24,   157,    99,    -1,    15,    12,
      13,   126,    44,   116,    24,   157,    99,    -1,    15,    13,
      12,   126,    44,   116,    99,    -1,    15,    12,    13,   126,
      44,   116,    99,    -1,    15,   126,    13,    44,   116,    24,
     157,    99,    -1,    15,   126,    12,    44,   116,    24,   157,
      99,    -1,    15,   126,    13,    44,   116,    99,    -1,    15,
     126,    12,    44,   116,    99,    -1,    15,   126,    13,    12,
      44,   116,    24,   157,    99,    -1,    15,   126,    12,    13,
      44,   116,    24,   157,    99,    -1,    15,   126,    13,    12,
      44,   116,    99,    -1,    15,   126,    12,    13,    44,   116,
      99,    -1,    15,    13,   126,    12,    44,   116,    24,   157,
      99,    -1,    15,    12,   126,    13,    44,   116,    24,   157,
      99,    -1,    15,    13,   126,    12,    44,   116,    99,    -1,
      15,    12,   126,    13,    44,   116,    99,    -1,    89,   202,
     100,    -1,    89,   100,    -1,   118,    -1,   144,    -1,   119,
      98,    -1,   120,    -1,   128,    -1,   129,    -1,   130,    -1,
     134,    -1,   142,    -1,   143,    -1,   127,    -1,   122,   125,
     194,    -1,   122,    -1,   122,   121,    -1,   101,   122,   121,
      -1,   101,   122,    -1,   124,    -1,   124,    88,    -1,    88,
      -1,   157,   124,    -1,   157,    -1,   166,   124,    88,    -1,
     166,    88,    -1,    88,   157,    -1,    88,   166,    -1,   124,
     123,    -1,   123,    -1,    26,    -1,    27,    -1,    55,    -1,
      28,    -1,    29,    -1,    30,    -1,    31,    -1,    32,    -1,
      33,    -1,    34,    -1,    35,    -1,    36,    -1,    58,    -1,
      59,    -1,    60,    -1,    53,   192,    -1,    51,   192,    -1,
      70,    -1,   131,    -1,   132,    -1,   133,    -1,    72,    -1,
      73,    -1,    52,   194,    -1,    52,    -1,   135,    -1,     4,
     137,    -1,    88,   138,    -1,   136,    88,   138,    -1,   138,
      -1,   138,   136,    -1,   139,    -1,   139,    48,    44,    -1,
      44,    -1,    44,   140,    -1,   102,    44,    -1,   140,   102,
      44,    -1,    88,    44,    -1,   141,    88,    44,    -1,    54,
      44,    -1,    54,    44,   141,    -1,    25,    44,    -1,    25,
      44,   141,    -1,   146,    -1,   147,    -1,   148,    -1,   149,
      -1,   152,    -1,   114,    -1,    15,   198,    -1,    18,   157,
      99,   156,    -1,   145,    18,   157,    99,   156,    -1,    17,
     157,    99,   156,    -1,    17,   157,    99,   156,   145,    -1,
      17,   157,    99,   156,    16,    99,   156,    -1,    17,   157,
      99,   156,   145,    16,    99,   156,    -1,    19,   157,    99,
     156,    -1,    19,   157,    99,   156,    16,    99,   156,    -1,
      20,   192,    21,   194,    99,   156,    -1,    20,   192,    21,
     194,    99,   156,    16,    99,   156,    -1,    22,    99,   156,
     150,    -1,    22,    99,   156,   150,    16,    99,   156,    -1,
      22,    99,   156,   150,    23,    99,   156,    -1,    22,    99,
     156,    23,    99,   156,    -1,   154,    99,   156,    -1,   150,
     154,    99,   156,    -1,    88,   153,    -1,   151,    88,   153,
      -1,    47,   153,    99,   156,    -1,    47,   153,   151,    99,
     156,    -1,   157,    -1,   157,    48,   168,    -1,    69,    -1,
      69,   157,    -1,    69,   157,    48,    44,    -1,   117,    -1,
     117,   155,    -1,   155,     6,    -1,     6,    -1,   159,    -1,
     159,    17,   159,    16,   157,    -1,     8,   161,    -1,   158,
       8,   161,    -1,   161,    -1,   161,   158,    -1,     9,   162,
      -1,   160,     9,   162,    -1,   162,    -1,   162,   160,    -1,
      10,   162,    -1,   164,    -1,   165,   168,    -1,   163,   165,
     168,    -1,   168,    -1,   168,   163,    -1,    91,    -1,    92,
      -1,    50,    -1,    68,    -1,    67,    -1,    37,    -1,    11,
      -1,    21,    -1,    10,    21,    -1,    65,    -1,    65,    10,
      -1,    95,   168,    -1,   103,   170,    -1,   167,   103,   170,
      -1,   170,    -1,   170,   167,    -1,   104,   172,    -1,   169,
     104,   172,    -1,   172,    -1,   172,   169,    -1,   105,   174,
      -1,   171,   105,   174,    -1,   174,    -1,   174,   171,    -1,
      56,   176,    -1,    62,   176,    -1,   173,    56,   176,    -1,
     173,    62,   176,    -1,   176,    -1,   176,   173,    -1,    93,
     178,    -1,    94,   178,    -1,   175,    93,   178,    -1,   175,
      94,   178,    -1,   178,    -1,   178,   175,    -1,    95,   179,
      -1,    96,   179,    -1,    97,   179,    -1,    66,   179,    -1,
     177,    95,   179,    -1,   177,    96,   179,    -1,   177,    97,
     179,    -1,   177,    66,   179,    -1,   179,    -1,   179,   177,
      -1,    93,   179,    -1,    94,   179,    -1,   106,   179,    -1,
     181,    -1,   186,    -1,   180,   186,    -1,   183,    -1,   183,
     180,    -1,   183,   180,    40,   179,    -1,   183,    40,   179,
      -1,    63,    -1,   182,    63,    -1,    89,   100,    -1,    89,
     185,   100,    -1,    90,   107,    -1,   108,   109,    -1,    90,
     185,   107,    -1,   108,   197,   109,    -1,    44,    -1,    15,
      44,    -1,    15,   126,    44,    -1,    15,    13,    44,    -1,
      15,    12,    44,    -1,    15,    13,    12,    44,    -1,    15,
      12,    13,    44,    -1,    15,    13,   126,    44,    -1,    15,
      12,   126,    44,    -1,    15,    13,    12,   126,    44,    -1,
      15,    12,    13,   126,    44,    -1,    15,   126,    13,    44,
      -1,    15,   126,    12,    44,    -1,    15,   126,    13,    12,
      44,    -1,    15,   126,    12,    13,    44,    -1,    15,    13,
     126,    12,    44,    -1,    15,    12,   126,    13,    44,    -1,
      41,    -1,    43,    -1,    42,    -1,    71,    -1,   182,    -1,
      45,    -1,    64,    -1,    39,    -1,    38,    -1,    88,   157,
      -1,    88,   166,    -1,   184,    88,   157,    -1,   184,    88,
     166,    -1,   157,   208,    -1,   157,    -1,   157,   184,    -1,
     157,    88,    -1,   157,   184,    88,    -1,   166,   208,    -1,
     166,    -1,   166,   184,    -1,   166,    88,    -1,   166,   184,
      88,    -1,    89,   100,    -1,    89,   202,   100,    -1,    90,
     188,   107,    -1,   102,    44,    -1,    88,   189,    -1,   187,
      88,   189,    -1,   189,    -1,   189,   187,    -1,   189,    88,
      -1,   189,   187,    88,    -1,   157,    -1,    99,    -1,   157,
      99,    -1,   157,    99,   157,    -1,   157,    99,   190,    -1,
     157,    99,   157,   190,    -1,    99,   157,    -1,    99,   190,
      -1,    99,   157,   190,    -1,    99,    -1,    99,   157,    -1,
      88,   168,    -1,    88,   166,    -1,   191,    88,   168,    -1,
     191,    88,   166,    -1,   168,    -1,   168,   191,    -1,   166,
      -1,   166,   191,    -1,   168,    88,    -1,   168,   191,    88,
      -1,   166,    88,    -1,   166,   191,    88,    -1,    88,   157,
      -1,    88,   157,   193,    -1,   157,    -1,   157,   193,    -1,
     157,    88,    -1,   157,   193,    88,    -1,    88,   157,    99,
     157,    -1,   195,    88,   157,    99,   157,    -1,    88,   157,
      -1,   196,    88,   157,    -1,   157,    99,   157,   208,    -1,
     157,    99,   157,    -1,   157,    99,   157,    88,    -1,   157,
      99,   157,   195,    -1,   157,    99,   157,   195,    88,    -1,
     157,   208,    -1,   157,    -1,   157,    88,    -1,   157,   196,
      -1,   157,   196,    88,    -1,   199,   156,    -1,     5,    44,
      99,    -1,   126,     5,    44,    99,    -1,    13,     5,    44,
      99,    -1,    12,     5,    44,    99,    -1,    13,    12,     5,
      44,    99,    -1,    12,    13,     5,    44,    99,    -1,    12,
     126,     5,    44,    99,    -1,    13,   126,     5,    44,    99,
      -1,    13,    12,   126,     5,    44,    99,    -1,    12,    13,
     126,     5,    44,    99,    -1,   126,    13,     5,    44,    99,
      -1,   126,    12,     5,    44,    99,    -1,   126,    13,    12,
       5,    44,    99,    -1,   126,    12,    13,     5,    44,    99,
      -1,    13,   126,    12,     5,    44,    99,    -1,    12,   126,
      13,     5,    44,    99,    -1,     5,    44,    89,   100,    99,
      -1,   126,     5,    44,    89,   100,    99,    -1,    13,     5,
      44,    89,   100,    99,    -1,    12,     5,    44,    89,   100,
      99,    -1,    13,    12,     5,    44,    89,   100,    99,    -1,
      12,    13,     5,    44,    89,   100,    99,    -1,    13,   126,
       5,    44,    89,   100,    99,    -1,    12,   126,     5,    44,
      89,   100,    99,    -1,    13,    12,   126,     5,    44,    89,
     100,    99,    -1,    12,    13,   126,     5,    44,    89,   100,
      99,    -1,   126,    13,     5,    44,    89,   100,    99,    -1,
     126,    12,     5,    44,    89,   100,    99,    -1,   126,    13,
      12,     5,    44,    89,   100,    99,    -1,   126,    12,    13,
       5,    44,    89,   100,    99,    -1,    13,   126,    12,     5,
      44,    89,   100,    99,    -1,    12,   126,    13,     5,    44,
      89,   100,    99,    -1,     5,    44,    89,   137,   100,    99,
      -1,   126,     5,    44,    89,   137,   100,    99,    -1,    13,
       5,    44,    89,   137,   100,    99,    -1,    12,     5,    44,
      89,   137,   100,    99,    -1,    13,    12,     5,    44,    89,
     137,   100,    99,    -1,    12,    13,     5,    44,    89,   137,
     100,    99,    -1,    13,   126,     5,    44,    89,   137,   100,
      99,    -1,    12,   126,     5,    44,    89,   137,   100,    99,
      -1,    13,    12,   126,     5,    44,    89,   137,   100,    99,
      -1,    12,    13,   126,     5,    44,    89,   137,   100,    99,
      -1,   126,    13,     5,    44,    89,   137,   100,    99,    -1,
     126,    12,     5,    44,    89,   137,   100,    99,    -1,   126,
      13,    12,     5,    44,    89,   137,   100,    99,    -1,   126,
      12,    13,     5,    44,    89,   137,   100,    99,    -1,    13,
     126,    12,     5,    44,    89,   137,   100,    99,    -1,    12,
     126,    13,     5,    44,    89,   137,   100,    99,    -1,   206,
      88,    -1,   200,   206,    88,    -1,    88,   206,    -1,   201,
      88,   206,    -1,   206,    -1,   205,    -1,   206,    88,    -1,
      95,   157,    -1,    95,   157,    88,    40,   157,    -1,    95,
     157,   201,    -1,    95,   157,   203,    -1,    95,   157,   201,
     203,    -1,    95,   157,   201,    88,    40,   157,    -1,    40,
     157,    -1,   200,   206,    -1,   200,   205,    -1,   200,   204,
     205,    -1,   200,   206,    88,    -1,   200,    95,   157,    -1,
     200,    95,   157,    88,    40,   157,    -1,   200,    95,   157,
     201,    -1,   200,    95,   157,   203,    -1,   200,    95,   157,
     201,   203,    -1,   200,    95,   157,   201,    88,    40,   157,
      -1,   200,    40,   157,    -1,    88,   205,    -1,   203,    88,
     205,    -1,   205,    88,    -1,   204,   205,    88,    -1,   157,
     101,   157,    -1,   157,    -1,   157,   208,    -1,   208,    -1,
     209,    -1,    20,   192,    21,   159,    -1,    20,   192,    21,
     159,   207,    -1,    17,   159,    -1,    17,   159,   207,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   115,   115,   125,   126,   130,   134,   151,   159,   160,
     161,   170,   178,   179,   180,   188,   196,   197,   198,   206,
     214,   222,   223,   230,   238,   239,   240,   248,   255,   256,
     257,   265,   273,   274,   275,   283,   290,   291,   292,   299,
     308,   309,   312,   313,   315,   317,   320,   321,   322,   323,
     324,   325,   326,   329,   330,   331,   337,   338,   341,   342,
     343,   344,   345,   349,   350,   353,   354,   357,   358,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   374,   375,   376,   378,   379,   382,   385,   386,   387,
     390,   393,   396,   397,   401,   404,   407,   408,   410,   417,
     427,   428,   431,   432,   435,   439,   445,   446,   449,   450,
     453,   454,   457,   458,   459,   460,   461,   463,   467,   473,
     474,   477,   478,   479,   480,   483,   484,   487,   488,   491,
     492,   493,   494,   497,   498,   501,   502,   505,   506,   509,
     510,   513,   514,   515,   518,   519,   525,   529,   532,   533,
     536,   537,   540,   541,   544,   545,   548,   549,   552,   553,
     556,   557,   560,   561,   564,   565,   566,   567,   568,   569,
     570,   571,   572,   573,   574,   577,   580,   581,   583,   587,
     590,   591,   594,   595,   598,   599,   602,   603,   606,   607,
     608,   609,   612,   616,   619,   623,   627,   633,   639,   640,
     650,   654,   658,   662,   663,   667,   671,   675,   678,   679,
     684,   685,   686,   687,   693,   694,   697,   698,   699,   700,
     703,   704,   707,   708,   709,   710,   711,   712,   713,   716,
     721,   728,   734,   740,   746,   752,   758,   764,   770,   776,
     782,   788,   794,   800,   806,   812,   817,   821,   825,   826,
     829,   830,   831,   834,   839,   840,   841,   842,   845,   846,
     847,   848,   849,   850,   851,   852,   853,   854,   857,   858,
     859,   860,   863,   864,   867,   868,   869,   870,   873,   874,
     875,   876,   877,   878,   879,   880,   881,   884,   885,   888,
     889,   890,   891,   894,   895,   896,   897,   898,   899,   900,
     901,   904,   905,   908,   909,   910,   911,   914,   915,   917,
     918,   921,   922,   923,   924,   925,   926,   927,   928,   929,
     930,   932,   938,   946,   953,   960,   967,   974,   981,   988,
     995,  1002,  1009,  1016,  1023,  1030,  1037,  1044,  1051,  1059,
    1066,  1073,  1080,  1087,  1094,  1101,  1108,  1115,  1122,  1129,
    1136,  1143,  1150,  1157,  1164,  1171,  1178,  1185,  1192,  1199,
    1206,  1213,  1220,  1227,  1234,  1235,  1236,  1243,  1250,  1257,
    1267,  1268,  1271,  1272,  1275,  1276,  1278,  1280,  1288,  1301,
    1310,  1319,  1327,  1339,  1346,  1347,  1348,  1349,  1351,  1359,
    1372,  1380,  1388,  1396,  1409,  1419,  1420,  1423,  1424,  1427,
    1429,  1430,  1434,  1435,  1438,  1439,  1442,  1443
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
  "NUMBER_FLOAT", "NAME", "DOT_3", "EXPECT", "WITH", "AS", "ASSERT",
  "EQUAL", "DEL", "RETURN", "PRINT", "GLOBAL", "STAR_EQUAL", "LESS_THAN_2",
  "RAISE", "PRIVATE", "PUBLIC", "PROTECTED", "YIELD", "MORE_THAN_2",
  "STRING", "NONE", "IS", "DIV_2", "LESS_OR_EQUAL", "MORE_OR_EQUAL",
  "EXCEPT", "PASS", "CHAR_VALUE", "BREAK", "CONTINUE", "stmt_14",
  "stmt_13", "stmt_12", "stmt_11", "stmt_10", "stmt_9", "stmt_8", "stmt_7",
  "stmt_6", "stmt_5", "stmt_4", "stmt_3", "stmt_2", "stmt_1", "','", "'('",
  "'['", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "';'", "':'",
  "')'", "'='", "'.'", "'|'", "'^'", "'&'", "'~'", "']'", "'{'", "'}'",
  "$accept", "file_input", "program", "temp2", "funcdef", "funcheader",
  "parameters", "stmt", "simple_stmt", "small_stmt", "expr_stmt",
  "right_testlist", "testlist_star_expr", "comma_test_star",
  "comma_test_star_seqJ", "augassign", "access", "print_stmt", "del_stmt",
  "pass_stmt", "flow_stmt", "break_stmt", "continue_stmt", "return_stmt",
  "import_stmt", "import_name", "comma_dotted_as_name_seq",
  "dotted_as_names", "dotted_as_name", "dotted_name", "dotted_name_seq",
  "comma_name_seq", "global_stmt", "nonlocal_stmt", "compound_stmt",
  "elif_seq", "if_stmt", "while_stmt", "for_stmt", "try_stmt",
  "try_except_cla_seq", "with_seq", "with_stmt", "with_item",
  "except_clause", "list_stmt", "suite", "test", "or_seq", "or_test",
  "and_seq", "and_test", "not_test", "comp_op_seq", "comparison",
  "comp_op", "star_expr", "or_xor_expr_seq", "expr", "sha_and_expr_seq",
  "xor_expr", "and_shift_expr_seq", "and_expr", "arith_seq", "shift_expr",
  "term_seq", "arith_expr", "factor_seq", "term", "factor", "trailer_seq",
  "power", "str_seq", "atom", "comma_test_star_seq", "testlist_comp",
  "trailer", "comma_subscript_seq", "subscriptlist", "subscript",
  "sliceop", "comma_expr_star_seq", "exprlist", "comma_test", "testlist",
  "comma_test_colon_test_seq", "comma_test_seq", "dictorsetmaker",
  "classdef", "classheader", "arg_comma_seq", "comma_arg_seq", "arglist",
  "comma_default_arg_seq", "default_arg_comma_seq", "default_arg",
  "argument", "comp_iter", "comp_for", "comp_if", YY_NULL
};
#endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,   110,   111,   112,   112,   113,   113,   114,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     116,   116,   117,   117,   118,   119,   119,   119,   119,   119,
     119,   119,   119,   120,   120,   120,   121,   121,   122,   122,
     122,   122,   122,   122,   122,   123,   123,   124,   124,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   126,   126,   126,   127,   128,   129,   130,   130,   130,
     131,   132,   133,   133,   134,   135,   136,   136,   137,   137,
     138,   138,   139,   139,   140,   140,   141,   141,   142,   142,
     143,   143,   144,   144,   144,   144,   144,   144,   144,   145,
     145,   146,   146,   146,   146,   147,   147,   148,   148,   149,
     149,   149,   149,   150,   150,   151,   151,   152,   152,   153,
     153,   154,   154,   154,   155,   155,   156,   156,   157,   157,
     158,   158,   159,   159,   160,   160,   161,   161,   162,   162,
     163,   163,   164,   164,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   166,   167,   167,   168,   168,
     169,   169,   170,   170,   171,   171,   172,   172,   173,   173,
     173,   173,   174,   174,   175,   175,   175,   175,   176,   176,
     177,   177,   177,   177,   177,   177,   177,   177,   178,   178,
     179,   179,   179,   179,   180,   180,   181,   181,   181,   181,
     182,   182,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   184,   184,   184,   184,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   186,   186,
     186,   186,   187,   187,   188,   188,   188,   188,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   190,   190,   191,
     191,   191,   191,   192,   192,   192,   192,   192,   192,   192,
     192,   193,   193,   194,   194,   194,   194,   195,   195,   196,
     196,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   198,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     200,   200,   201,   201,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   203,   203,   204,   204,   205,
     206,   206,   207,   207,   208,   208,   209,   209
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
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
       0,     0,     0,     0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0,     0,     0,     0
};

/* YYDEFACT[S] -- default reduction number in state S.  Performed when
   YYTABLE doesn't specify something else to do.  Zero means the default
   is an error.  */
static const unsigned short int yydefact[] =
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

/* YYPDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
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
static const short int yypact[] =
{
     180,    28,    32,   313,   409,  -524,  -524,  -524,   200,    76,
    -524,   262,   120,  -524,   338,   649,   145,  -524,   170,   228,
     173,   244,   319,   276,   260,   439,   212,  -524,  -524,   289,
     332,   447,   338,  -524,  -524,  1266,   316,  1266,  1266,  1302,
     237,   360,  -524,  -524,  -524,  -524,  -524,  -524,  -524,  1266,
    1302,  1266,  1302,   379,  -524,  -524,  -524,  -524,  -524,  -524,
    1005,   852,   893,  1338,  1338,  1338,  1338,   450,  -524,   649,
     731,  -524,   287,  -524,   265,  -524,   349,  -524,  -524,  -524,
    -524,  -524,  -524,  -524,  -524,  -524,  -524,  -524,  -524,  -524,
    -524,  -524,  -524,   440,  -524,   386,   431,   442,   462,  -524,
     387,    40,   401,   402,   421,   498,    18,   323,  -524,   444,
      12,   464,   426,    28,   441,   497,    15,  -524,   269,   502,
     544,   509,   556,   291,   518,   559,   521,   561,   293,   523,
     563,   525,   566,  -524,   465,  -524,   357,   351,   483,   166,
    -524,   474,   476,   489,   494,   564,   649,   496,   -32,   538,
    -524,   499,  -524,  -524,   496,  -524,  -524,  -524,    29,    37,
     490,  -524,   482,  -524,  -524,  -524,  -524,  -524,    21,   484,
    -524,  -524,  -524,  -524,  -524,  -524,  -524,  -524,  -524,  -524,
    -524,  -524,  -524,  -524,  -524,   933,  -524,  1266,  1005,  -524,
    -524,  1005,   386,  1266,  1266,   583,  1266,   585,  1005,   508,
     576,  -524,  -524,  -524,  -524,   588,  -524,  -524,  -524,  -524,
      40,  1338,  1338,   500,  1338,   495,  1338,   503,  1338,  1338,
     501,  1338,  1338,    79,  1338,  1338,  1338,  1338,   435,  -524,
    1338,   771,  1041,   558,   112,  -524,  -524,   560,  -524,    28,
    -524,   506,   507,    16,  -524,   339,   562,   341,   565,    49,
    -524,   343,   567,   346,   570,    69,  -524,   352,   571,   365,
     573,   224,   475,  -524,   290,   403,   483,   266,   452,   483,
     171,   812,    23,   273,   311,   483,   649,   649,  1302,   512,
    1302,   522,  1266,    30,   577,   532,  1266,   649,     1,  1338,
    1266,   534,   532,  1302,  1005,   535,  -524,  1005,   536,  -524,
    -524,  -524,  1266,  1266,   537,  -524,  -524,   526,  -524,   610,
    -524,  1266,  -524,  1266,  1005,  -524,  -524,  1338,  -524,  -524,
    1338,  -524,  1338,  -524,  1338,  -524,  -524,  1338,  1338,  -524,
    -524,  1338,  1338,  -524,  -524,  -524,  -524,  1338,  1338,  1338,
    1338,  -524,  1266,  1266,  -524,    20,   969,   528,  -524,   541,
    1081,   531,   524,   545,  -524,  1338,  -524,  -524,  -524,  -524,
     533,   540,   542,    75,  -524,   367,   121,  -524,   383,   546,
     543,   133,  -524,   416,   136,  -524,   448,   547,   548,   142,
    -524,   449,   143,  -524,   456,   458,  -524,   169,   492,  -524,
      50,   176,   186,  -524,   483,    53,    24,   165,   483,   483,
     236,    31,   302,   483,  -524,   549,  1266,  -524,   303,   483,
     362,   483,    39,    80,   618,  -524,  -524,  1302,  1302,   551,
     553,  1266,    87,   557,  -524,   591,  -524,  -524,  1266,   649,
    -524,   552,  -524,   615,  -524,  -524,  1005,  1005,  -524,    55,
    1266,  -524,  1266,  -524,  -524,  -524,  -524,  -524,  -524,  -524,
    -524,  -524,  -524,  -524,  -524,  -524,  -524,  -524,   574,  1266,
    -524,  1266,  1266,  1266,   575,   579,  -524,   572,  1266,   578,
    -524,  1081,  -524,  1041,   582,  -524,  -524,  -524,   584,   587,
     589,   144,  -524,   596,   597,   146,  -524,  -524,   599,   600,
     604,   152,  -524,   606,   607,   155,  -524,  -524,   609,   611,
     616,   161,  -524,   619,   617,   164,  -524,  -524,   614,   621,
    -524,  -524,   629,   631,  -524,   632,  -524,   638,  -524,    45,
     483,  1266,  -524,   483,    46,    47,   483,  1266,  -524,   483,
      54,  -524,   624,   483,    56,   483,    58,  1266,  -524,   625,
    1266,   336,   626,  -524,  -524,   649,   649,   593,   627,   628,
     630,   649,  -524,  -524,  -524,  -524,  1266,  -524,  -524,  1266,
     640,  -524,  -524,  -524,  1122,   642,   643,  -524,  -524,   644,
     605,   645,  -524,   634,  -524,  -524,   578,  -524,  -524,  1041,
    -524,  -524,   637,   641,   647,  -524,   646,   650,   652,  -524,
    -524,   655,   659,   660,  -524,   662,   663,   664,  -524,  -524,
     666,   667,   668,  -524,   672,   678,   679,  -524,  -524,  -524,
    -524,  -524,  -524,  1266,  -524,    59,   681,    60,  1266,  -524,
    1266,  -524,    61,   688,    63,  1266,  -524,  -524,    64,  1266,
    -524,    67,  1266,  -524,   689,   649,   690,   691,  1266,   649,
     693,  -524,   671,   649,   649,   649,  -524,   366,   692,  1266,
    1266,  -524,  -524,  1158,   643,  1266,  1194,   675,   643,  -524,
    -524,  -524,  -524,  -524,   694,  -524,  -524,   697,  -524,  -524,
     698,  -524,  -524,   699,  -524,  -524,   700,  -524,  -524,   701,
     706,  1266,  -524,  -524,  1266,  -524,   707,   708,  1266,  -524,
    -524,  1266,  -524,   709,  1266,  -524,   718,  1266,  -524,   719,
    -524,  -524,   649,   649,   724,  -524,   729,  -524,  -524,  -524,
    -524,  1266,  -524,  -524,  -524,  1266,   730,  -524,  1266,  -524,
    -524,  1266,  1230,   643,  -524,  -524,  -524,  -524,  -524,  -524,
    -524,   732,   733,  -524,  -524,   734,   737,  -524,   739,  -524,
     741,  -524,  -524,  -524,   649,   649,   366,  -524,  1266,  -524,
    -524,  1266,  -524,  -524,  -524,  -524,  -524,  -524,  -524,  -524,
    -524,  -524,  -524
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -524,  -524,  -524,    72,  -524,  -524,   -50,  -524,  -524,  -524,
    -524,   354,   656,   -63,   307,  -524,    70,  -524,  -524,  -524,
    -524,  -524,  -524,  -524,   759,  -524,  -524,   -52,  -102,  -524,
    -524,   613,  -524,  -524,  -524,  -524,  -524,  -524,  -524,  -524,
    -524,  -524,  -524,  -280,   370,   760,   -65,   -37,  -524,  -191,
    -524,  -178,   -28,  -524,  -524,   633,   -24,  -524,   -30,  -524,
    -185,  -524,  -180,  -524,  -177,  -524,  -187,  -524,  -204,     2,
    -524,  -524,  -524,  -524,   685,   783,   612,  -524,  -524,  -440,
    -450,   703,   -42,   417,  -158,  -524,  -524,  -524,   813,  -524,
    -524,   294,   598,  -523,  -524,  -228,  -341,   113,  -114,  -524
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -388
static const short int yytable[] =
{
     141,   142,   309,   348,   170,   465,   426,   135,   150,   144,
     153,   238,   149,   189,   151,   143,   310,   329,   330,   575,
     144,   577,   144,   155,   158,   158,   143,   319,   143,   308,
     168,   325,   326,   578,   321,   165,   156,   159,   159,   323,
     293,   293,   654,   348,   296,   299,   658,   406,   521,   293,
     200,   201,   230,   420,   305,   527,   286,   293,   246,    16,
      16,   202,   513,   537,   242,   163,   164,   287,   166,   613,
     618,   620,    16,    23,    26,   293,    20,   203,   625,    28,
     629,   283,   632,   681,   684,   688,    33,   691,   694,   428,
     204,   697,   120,    16,   514,   125,   539,   520,   540,   421,
     429,   231,   232,   548,   133,   205,   139,   206,   207,   302,
     549,   221,   222,    16,   233,   241,   361,   294,   464,    16,
     303,   459,   407,   522,   419,   297,   660,   451,   452,   189,
     528,   208,   209,   443,   723,   446,   189,   358,   538,   661,
     449,   450,   447,   559,   614,   619,   621,   448,   553,   369,
     151,   155,   355,   626,   155,   630,   421,   633,   682,   685,
     689,   155,   692,   695,   156,    16,   698,   156,   312,   377,
     248,    29,   331,   332,   156,   479,   126,    16,   273,   274,
      16,   318,   509,   402,     1,     2,    16,    16,    16,   515,
      16,   362,     3,     4,   345,   351,    16,   370,   517,    16,
      27,   231,   232,   378,   264,    16,   267,   270,    16,   523,
     275,   413,   414,   510,   233,   403,   396,   126,    32,   401,
     516,   483,   427,   652,   127,   412,   333,   334,   335,   336,
     518,   460,   341,   489,   345,   571,   493,   385,     5,     6,
       7,   252,   499,   503,   583,   151,   587,   111,   416,   149,
     416,   433,   592,   431,   415,   596,   415,   434,   113,   430,
     434,   601,   116,   144,   605,   438,   439,    29,   386,   143,
     435,   121,   117,   435,    30,    31,   115,   155,   129,   397,
     526,   121,     5,     6,     7,   444,   408,   445,   118,   122,
     156,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   391,   392,   123,   457,   458,   254,   258,   345,
     398,   480,   719,   469,   484,   652,   131,   409,    21,   490,
     184,     2,   494,   410,   119,   561,    22,   500,   136,   137,
     504,   387,   390,   128,   393,   395,   146,   129,   400,   453,
     454,   455,   456,     2,   519,   130,   529,   533,   524,   525,
       3,     4,   637,   530,   638,   411,    24,   475,   243,   534,
     138,   536,    21,   268,   554,   647,   185,   260,   244,   532,
     265,     5,     6,     7,     5,     6,     7,     5,     6,     7,
     249,   719,   255,   711,   547,   172,   293,   544,   544,   224,
     250,   149,   256,   543,   543,   269,     5,     6,     7,   557,
     557,   266,   192,   562,   147,   563,   535,   199,   119,     5,
       6,     7,   558,   558,    24,     5,     6,     7,   225,   226,
     227,    25,   567,   154,   568,   569,   570,   720,   363,   584,
     366,   574,   371,   588,   576,   374,   351,   188,   364,   593,
     367,   379,   372,   597,   124,   375,   190,   394,   193,   602,
     194,   380,   131,   606,   382,   508,   481,   124,   512,   132,
      35,     5,     6,     7,   383,   134,   482,     5,     6,     7,
     615,   196,   485,   617,   191,   198,   622,   261,   262,   624,
     640,   641,   486,   628,   616,   631,   646,   388,    42,    43,
     623,    44,    45,    46,    47,    48,   399,     5,     6,     7,
     634,   337,   507,   636,   212,   491,   214,   229,   236,   263,
       5,     6,     7,    54,    55,   492,     5,     6,     7,   389,
     746,    57,   648,     5,     6,     7,   216,   345,   237,   239,
     338,   339,   340,     5,     6,     7,   511,   495,   501,    61,
      62,   240,   351,    63,    64,   505,   245,   496,   502,   246,
       5,     6,     7,   247,   218,   506,    66,   327,    67,   167,
     219,   248,   251,   328,   252,   253,   254,   257,   258,   259,
     701,   260,   271,   276,   705,   277,   680,   278,   708,   709,
     710,   686,   280,   687,   284,   282,   289,   290,   693,   301,
     300,   311,   696,   306,   313,   699,   314,   315,   316,   322,
     417,   704,   354,   320,   357,   359,   365,   360,   324,   368,
     418,   373,   716,   717,   376,   381,   345,   384,   570,   345,
     425,   424,   432,   436,   437,   440,   442,   185,   466,   467,
     471,   472,   476,   473,   542,   552,   556,   742,   743,   477,
    -388,   642,   478,   488,   731,   487,   497,   732,   498,   531,
     545,   735,   546,     1,   736,    34,   551,   738,   607,    35,
     740,   441,   564,   572,    36,   608,    37,   573,    38,    39,
     579,    40,  -376,   609,    41,   610,   611,   468,   747,   758,
     759,   749,   612,   580,   750,   345,   581,    42,    43,   582,
      44,    45,    46,    47,    48,   585,    49,   586,   589,   590,
      50,    51,    52,    53,   591,   594,   459,   595,   598,   706,
     599,   761,    54,    55,   762,   707,   600,   604,   603,    56,
      57,    58,    59,   627,   635,   639,   643,   644,   649,   645,
     653,   655,   656,   659,  -387,     1,   662,    60,    61,    62,
     663,    35,    63,    64,    65,   665,    36,   664,    37,   666,
      38,    39,   667,    40,   668,    66,    41,    67,   669,    12,
     670,   671,   672,   722,   673,   674,   675,   292,   676,    42,
      43,   677,    44,    45,    46,    47,    48,   678,    49,   679,
     683,    35,    50,    51,    52,    53,   134,   690,   700,   702,
     703,   715,   550,   724,    54,    55,   725,   726,   727,   728,
     729,    56,    57,    58,    59,   730,   733,   734,   737,    42,
      43,   342,    44,    45,    46,    47,    48,   739,   741,    60,
      61,    62,    35,   744,    63,    64,    65,   134,   745,   748,
     171,   752,   753,   754,    54,    55,   755,    66,   756,    67,
     757,   307,    57,   317,   298,   162,   356,   281,   555,   140,
      42,    43,   342,    44,    45,    46,    47,    48,     0,   760,
      61,    62,    35,   657,    63,    64,   343,   134,     0,   405,
       0,   344,     0,     0,     0,    54,    55,    66,     0,    67,
       0,     0,     0,    57,     0,     0,     0,     0,     0,     0,
      42,    43,     0,    44,    45,    46,    47,    48,     0,     0,
       0,    61,    62,    35,     0,    63,    64,   343,   134,     0,
       0,     0,   404,     0,     0,    54,    55,     0,    66,     0,
      67,     0,     0,    57,     0,     0,     0,     0,     0,     0,
       0,    42,    43,     0,    44,    45,    46,    47,    48,     0,
       0,    61,    62,    35,     0,    63,    64,    65,   134,     0,
       0,     0,   157,     0,     0,     0,    54,    55,    66,     0,
      67,     0,     0,     0,    57,     0,     0,     0,     0,     0,
       0,    42,    43,     0,    44,    45,    46,    47,    48,    35,
       0,     0,    61,    62,   134,     0,    63,    64,    65,     0,
       0,     0,     0,     0,     0,     0,    54,    55,     0,    66,
     161,    67,     0,     0,    57,     0,     0,    42,    43,   461,
      44,    45,    46,    47,    48,    35,     0,     0,     0,     0,
     134,    60,    61,    62,     0,     0,    63,    64,    65,     0,
       0,     0,    54,    55,     0,     0,     0,     0,     0,    66,
      57,    67,     0,    42,    43,     0,    44,    45,    46,    47,
      48,    35,     0,     0,     0,     0,   134,     0,    61,    62,
       0,     0,    63,    64,   462,     0,     0,     0,    54,    55,
       0,     0,     0,     0,     0,    66,    57,    67,     0,    42,
      43,     0,    44,    45,    46,    47,    48,     0,     0,     0,
       0,    35,     0,     0,    61,    62,   134,     0,    63,    64,
      65,     0,     0,     0,    54,    55,     0,     0,     0,     0,
       0,    66,    57,    67,     0,     0,     0,     0,     0,    42,
      43,     0,    44,    45,    46,    47,    48,     0,     0,     0,
      61,    62,    35,     0,    63,    64,     0,   134,     0,     0,
     350,     0,     0,     0,    54,    55,     0,    66,     0,    67,
       0,     0,    57,     0,     0,     0,     0,     0,     0,     0,
      42,    43,   650,    44,    45,    46,    47,    48,    35,     0,
      61,    62,     0,   134,    63,    64,     0,     0,     0,     0,
     468,     0,     0,     0,     0,    54,    55,    66,     0,    67,
       0,     0,     0,    57,     0,     0,    42,    43,   718,    44,
      45,    46,    47,    48,    35,     0,     0,     0,     0,   134,
       0,    61,    62,     0,     0,    63,    64,     0,     0,     0,
       0,    54,    55,     0,     0,     0,     0,     0,    66,    57,
      67,     0,    42,    43,   721,    44,    45,    46,    47,    48,
      35,     0,     0,     0,     0,   134,     0,    61,    62,     0,
       0,    63,    64,     0,     0,     0,     0,    54,    55,     0,
       0,     0,     0,     0,    66,    57,    67,     0,    42,    43,
     751,    44,    45,    46,    47,    48,    35,     0,     0,     0,
       0,   134,     0,    61,    62,     0,     0,    63,    64,     0,
       0,     0,     0,    54,    55,     0,     0,     0,     0,     0,
      66,    57,    67,     0,    42,    43,     0,    44,    45,    46,
      47,    48,     0,     0,     0,     0,     0,   134,     0,    61,
      62,     0,     0,    63,    64,     0,     0,     0,     0,    54,
      55,     0,     0,     0,     0,     0,    66,    57,    67,     0,
      42,    43,     0,    44,    45,    46,    47,    48,     0,     0,
       0,     0,     0,   134,     0,    61,    62,     0,     0,    63,
      64,     0,     0,     0,     0,    54,    55,     0,     0,     0,
       0,     0,    66,    57,    67,     0,    42,    43,     0,    44,
      45,    46,    47,    48,     0,     0,     0,     0,     0,     0,
       0,    61,    62,     0,     0,    63,    64,    65,     0,     0,
       0,    54,    55,     0,     0,     0,     0,     0,    66,    57,
      67,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    61,    62,     0,
       0,    63,    64,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    66,     0,    67
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
       0,     0,     0,     0,     0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0
};

static const short int yycheck[] =
{
      37,    38,   193,   231,    69,   346,   286,    35,    50,    39,
      52,   113,    49,    76,    51,    39,   194,   221,   222,   469,
      50,   471,    52,    60,    61,    62,    50,   212,    52,   187,
      67,   218,   219,   473,   214,    65,    60,    61,    62,   216,
      20,    20,   565,   271,   158,   159,   569,    24,    24,    20,
      10,    11,    40,    23,   168,    24,    88,    20,     5,    44,
      44,    21,    12,    24,   116,    63,    64,    99,    66,    24,
      24,    24,    44,     3,     4,    20,    44,    37,    24,     3,
      24,   146,    24,    24,    24,    24,    14,    24,    24,    88,
      50,    24,    22,    44,    44,    25,    16,    44,    18,    69,
      99,    89,    90,    16,    32,    65,    36,    67,    68,    88,
      23,    93,    94,    44,   102,   100,   100,    88,   346,    44,
      99,   101,    99,    99,   282,    88,   576,   331,   332,   192,
      99,    91,    92,   311,   657,   320,   199,   239,    99,   579,
     327,   328,   322,    88,    99,    99,    99,   324,   428,   100,
     187,   188,    40,    99,   191,    99,    69,    99,    99,    99,
      99,   198,    99,    99,   188,    44,    99,   191,   196,   100,
       5,     5,    93,    94,   198,   100,     5,    44,    12,    13,
      44,   211,    13,    12,     4,     5,    44,    44,    44,    13,
      44,   243,    12,    13,   231,   232,    44,   249,    12,    44,
       0,    89,    90,   255,   134,    44,   136,   137,    44,    44,
      44,   276,   277,    44,   102,    44,   266,     5,    98,   269,
      44,   100,   287,   564,    12,   275,   224,   225,   226,   227,
      44,   345,   230,   100,   271,   463,   100,    13,    58,    59,
      60,     5,   100,   100,   100,   282,   100,   102,   278,   286,
     280,   293,   100,   290,   278,   100,   280,   294,    88,   289,
     297,   100,    89,   293,   100,   302,   303,     5,    44,   293,
     294,     5,    99,   297,    12,    13,    48,   314,     5,    13,
      44,     5,    58,    59,    60,   313,    13,   317,    44,    13,
     314,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    12,    13,    44,   342,   343,     5,     5,   346,
      44,   363,   653,   350,   366,   656,     5,    44,     5,   371,
      55,     5,   374,    12,     5,   439,    13,   379,    12,    13,
     382,   261,   262,    44,    44,   265,    99,     5,   268,   337,
     338,   339,   340,     5,   394,    13,    44,    44,   398,   399,
      12,    13,    16,   403,    18,    44,     5,   355,    89,   409,
      44,   411,     5,    12,   429,   556,   101,     5,    99,   406,
      13,    58,    59,    60,    58,    59,    60,    58,    59,    60,
      89,   722,    89,    17,   421,    98,    20,   417,   418,    66,
      99,   428,    99,   417,   418,    44,    58,    59,    60,   436,
     437,    44,    95,   440,    44,   442,    44,   100,     5,    58,
      59,    60,   436,   437,     5,    58,    59,    60,    95,    96,
      97,    12,   459,    44,   461,   462,   463,   655,    89,   481,
      89,   468,    89,   485,   471,    89,   473,    88,    99,   491,
      99,    89,    99,   495,     5,    99,     6,    44,    17,   501,
       8,    99,     5,   505,    89,   385,    89,     5,   388,    12,
      10,    58,    59,    60,    99,    15,    99,    58,    59,    60,
     520,     9,    89,   523,    88,    88,   526,    12,    13,   529,
     545,   546,    99,   533,   521,   535,   551,    12,    38,    39,
     527,    41,    42,    43,    44,    45,    44,    58,    59,    60,
     537,    66,    44,   540,   103,    89,   104,    63,    44,    44,
      58,    59,    60,    63,    64,    99,    58,    59,    60,    44,
     711,    71,   559,    58,    59,    60,   105,   564,   102,    88,
      95,    96,    97,    58,    59,    60,    44,    89,    89,    89,
      90,    44,   579,    93,    94,    89,    44,    99,    99,     5,
      58,    59,    60,    44,    56,    99,   106,    56,   108,   109,
      62,     5,    44,    62,     5,    44,     5,    44,     5,    44,
     635,     5,    89,    99,   639,    99,   613,    88,   643,   644,
     645,   618,    88,   620,    88,    21,    48,    88,   625,   107,
     100,     8,   629,   109,     9,   632,    88,    21,    10,   104,
      88,   638,    44,   103,    44,    99,    44,   100,   105,    44,
      88,    44,   649,   650,    44,    44,   653,    44,   655,   656,
      88,    44,    88,    88,    88,    88,    16,   101,   100,    88,
      99,   107,    99,    88,    16,    44,    21,   702,   703,    99,
      88,    48,   100,   100,   681,    99,    99,   684,   100,   100,
      99,   688,    99,     4,   691,     6,    99,   694,    44,    10,
     697,   307,    88,    88,    15,    44,    17,    88,    19,    20,
      88,    22,   100,    44,    25,    44,    44,    99,   715,   744,
     745,   718,    44,    99,   721,   722,    99,    38,    39,   100,
      41,    42,    43,    44,    45,    99,    47,   100,    99,    99,
      51,    52,    53,    54,   100,    99,   101,   100,    99,    16,
      99,   748,    63,    64,   751,    44,   100,   100,    99,    70,
      71,    72,    73,    99,    99,    99,    99,    99,    88,    99,
      88,    88,    88,    88,   100,     4,    99,    88,    89,    90,
      99,    10,    93,    94,    95,    99,    15,   100,    17,    99,
      19,    20,   100,    22,    99,   106,    25,   108,    99,     0,
     100,    99,    99,    88,   100,    99,    99,   154,   100,    38,
      39,    99,    41,    42,    43,    44,    45,    99,    47,   100,
      99,    10,    51,    52,    53,    54,    15,    99,    99,    99,
      99,    99,   422,    99,    63,    64,    99,    99,    99,    99,
      99,    70,    71,    72,    73,    99,    99,    99,    99,    38,
      39,    40,    41,    42,    43,    44,    45,    99,    99,    88,
      89,    90,    10,    99,    93,    94,    95,    15,    99,    99,
      70,    99,    99,    99,    63,    64,    99,   106,    99,   108,
      99,   185,    71,   210,   159,    62,   234,   144,   431,    36,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,   746,
      89,    90,    10,   569,    93,    94,    95,    15,    -1,   271,
      -1,   100,    -1,    -1,    -1,    63,    64,   106,    -1,   108,
      -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    -1,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    89,    90,    10,    -1,    93,    94,    95,    15,    -1,
      -1,    -1,   100,    -1,    -1,    63,    64,    -1,   106,    -1,
     108,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    39,    -1,    41,    42,    43,    44,    45,    -1,
      -1,    89,    90,    10,    -1,    93,    94,    95,    15,    -1,
      -1,    -1,   100,    -1,    -1,    -1,    63,    64,   106,    -1,
     108,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    39,    -1,    41,    42,    43,    44,    45,    10,
      -1,    -1,    89,    90,    15,    -1,    93,    94,    95,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    -1,   106,
     107,   108,    -1,    -1,    71,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    10,    -1,    -1,    -1,    -1,
      15,    88,    89,    90,    -1,    -1,    93,    94,    95,    -1,
      -1,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,   106,
      71,   108,    -1,    38,    39,    -1,    41,    42,    43,    44,
      45,    10,    -1,    -1,    -1,    -1,    15,    -1,    89,    90,
      -1,    -1,    93,    94,    95,    -1,    -1,    -1,    63,    64,
      -1,    -1,    -1,    -1,    -1,   106,    71,   108,    -1,    38,
      39,    -1,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    10,    -1,    -1,    89,    90,    15,    -1,    93,    94,
      95,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,    -1,
      -1,   106,    71,   108,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      89,    90,    10,    -1,    93,    94,    -1,    15,    -1,    -1,
      99,    -1,    -1,    -1,    63,    64,    -1,   106,    -1,   108,
      -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    10,    -1,
      89,    90,    -1,    15,    93,    94,    -1,    -1,    -1,    -1,
      99,    -1,    -1,    -1,    -1,    63,    64,   106,    -1,   108,
      -1,    -1,    -1,    71,    -1,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    10,    -1,    -1,    -1,    -1,    15,
      -1,    89,    90,    -1,    -1,    93,    94,    -1,    -1,    -1,
      -1,    63,    64,    -1,    -1,    -1,    -1,    -1,   106,    71,
     108,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      10,    -1,    -1,    -1,    -1,    15,    -1,    89,    90,    -1,
      -1,    93,    94,    -1,    -1,    -1,    -1,    63,    64,    -1,
      -1,    -1,    -1,    -1,   106,    71,   108,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    10,    -1,    -1,    -1,
      -1,    15,    -1,    89,    90,    -1,    -1,    93,    94,    -1,
      -1,    -1,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,
     106,    71,   108,    -1,    38,    39,    -1,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    -1,    15,    -1,    89,
      90,    -1,    -1,    93,    94,    -1,    -1,    -1,    -1,    63,
      64,    -1,    -1,    -1,    -1,    -1,   106,    71,   108,    -1,
      38,    39,    -1,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    -1,    15,    -1,    89,    90,    -1,    -1,    93,
      94,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,
      -1,    -1,   106,    71,   108,    -1,    38,    39,    -1,    41,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    90,    -1,    -1,    93,    94,    95,    -1,    -1,
      -1,    63,    64,    -1,    -1,    -1,    -1,    -1,   106,    71,
     108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,    -1,
      -1,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,   108
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     4,     5,    12,    13,    58,    59,    60,   111,   112,
     113,   126,   134,   135,   198,   199,    44,   137,   138,   139,
      44,     5,    13,   126,     5,    12,   126,     0,     3,     5,
      12,    13,    98,   113,     6,    10,    15,    17,    19,    20,
      22,    25,    38,    39,    41,    42,    43,    44,    45,    47,
      51,    52,    53,    54,    63,    64,    70,    71,    72,    73,
      88,    89,    90,    93,    94,    95,   106,   108,   114,   115,
     117,   118,   119,   120,   122,   123,   124,   127,   128,   129,
     130,   131,   132,   133,   134,   142,   143,   144,   146,   147,
     148,   149,   152,   155,   156,   157,   159,   161,   162,   164,
     166,   168,   170,   172,   174,   176,   178,   179,   181,   182,
     183,   102,   140,    88,   136,    48,    89,    99,    44,     5,
     126,     5,    13,    44,     5,   126,     5,    12,    44,     5,
      13,     5,    12,   113,    15,   162,    12,    13,    44,   126,
     198,   157,   157,   166,   168,   192,    99,    44,   153,   157,
     192,   157,   194,   192,    44,   157,   166,   100,   157,   166,
     185,   107,   185,   179,   179,   168,   179,   109,   157,   197,
     156,   155,    98,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    55,   101,   121,   125,    88,   123,
       6,    88,   124,    17,     8,   158,     9,   160,    88,   124,
      10,    11,    21,    37,    50,    65,    67,    68,    91,    92,
     163,   165,   103,   167,   104,   169,   105,   171,    56,    62,
     173,    93,    94,   175,    66,    95,    96,    97,   177,    63,
      40,    89,    90,   102,   180,   186,    44,   102,   138,    88,
      44,   100,   137,    89,    99,    44,     5,    44,     5,    89,
      99,    44,     5,    44,     5,    89,    99,    44,     5,    44,
       5,    12,    13,    44,   126,    13,    44,   126,    12,    44,
     126,    89,   116,    12,    13,    44,    99,    99,    88,   191,
      88,   191,    21,   156,    88,   141,    88,    99,   151,    48,
      88,   193,   141,    20,    88,   184,   208,    88,   184,   208,
     100,   107,    88,    99,   196,   208,   109,   122,   194,   159,
     161,     8,   162,     9,    88,    21,    10,   165,   168,   170,
     103,   172,   104,   174,   105,   176,   176,    56,    62,   178,
     178,    93,    94,   179,   179,   179,   179,    66,    95,    96,
      97,   179,    40,    95,   100,   157,   200,   202,   205,   206,
      99,   157,   188,   189,    44,    40,   186,    44,   138,    99,
     100,   100,   137,    89,    99,    44,    89,    99,    44,   100,
     137,    89,    99,    44,    89,    99,    44,   100,   137,    89,
      99,    44,    89,    99,    44,    13,    44,   126,    12,    44,
     126,    12,    13,    44,    44,   126,   116,    13,    44,    44,
     126,   116,    12,    44,   100,   202,    24,    99,    13,    44,
      12,    44,   116,   156,   156,   166,   168,    88,    88,   194,
      23,    69,   150,   154,    44,    88,   153,   156,    88,    99,
     168,   157,    88,   192,   157,   166,    88,    88,   157,   157,
      88,   121,    16,   161,   162,   168,   170,   172,   174,   176,
     176,   178,   178,   179,   179,   179,   179,   157,   157,   101,
     208,    40,    95,   204,   205,   206,   100,    88,    99,   157,
     190,    99,   107,    88,   187,   179,    99,    99,   100,   100,
     137,    89,    99,   100,   137,    89,    99,    99,   100,   100,
     137,    89,    99,   100,   137,    89,    99,    99,   100,   100,
     137,    89,    99,   100,   137,    89,    99,    44,   126,    13,
      44,    44,   126,    12,    44,    13,    44,    12,    44,   116,
      44,    24,    99,    44,   116,   116,    44,    24,    99,    44,
     116,   100,   157,    44,   116,    44,   116,    24,    99,    16,
      18,   145,    16,   166,   168,    99,    99,   157,    16,    23,
     154,    99,    44,   153,   156,   193,    21,   157,   166,    88,
     195,   208,   157,   157,    88,   201,   203,   157,   157,   157,
     157,   205,    88,    88,   157,   190,   157,   190,   189,    88,
      99,    99,   100,   100,   137,    99,   100,   100,   137,    99,
      99,   100,   100,   137,    99,   100,   100,   137,    99,    99,
     100,   100,   137,    99,   100,   100,   137,    44,    44,    44,
      44,    44,    44,    24,    99,   116,   157,   116,    24,    99,
      24,    99,   116,   157,   116,    24,    99,    99,   116,    24,
      99,   116,    24,    99,   157,    99,   157,    16,    18,    99,
     156,   156,    48,    99,    99,    99,   156,   159,   157,    88,
      40,   205,   206,    88,   203,    88,    88,   201,   203,    88,
     190,   189,    99,    99,   100,    99,    99,   100,    99,    99,
     100,    99,    99,   100,    99,    99,   100,    99,    99,   100,
     157,    24,    99,    99,    24,    99,   157,   157,    24,    99,
      99,    24,    99,   157,    24,    99,   157,    24,    99,   157,
      99,   156,    99,    99,   157,   156,    16,    44,   156,   156,
     156,    17,   207,   208,   209,    99,   157,   157,    40,   206,
     205,    40,    88,   203,    99,    99,    99,    99,    99,    99,
      99,   157,   157,    99,    99,   157,   157,    99,   157,    99,
     157,    99,   156,   156,    99,    99,   159,   157,    99,   157,
     157,    40,    99,    99,    99,    99,    99,    99,   156,   156,
     207,   157,   157
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
#line 115 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"file_input: program ENDMARKER\n";
										p->check_inhertance_list();
						if(!p->errRecovery->errQ->isEmpty())
								p->errRecovery->printErrQueue();
						p->print_symbol();
						ast->print((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn), 0);
						Streams::verbose().flush();	
								}
    break;

  case 3:
/* Line 868 of glr.c  */
#line 125 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"program : import_stmt ';' temp2 \n";}
    break;

  case 4:
/* Line 868 of glr.c  */
#line 126 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"program : temp2 \n";}
    break;

  case 5:
/* Line 868 of glr.c  */
#line 130 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"temp2: classdef temp2\n";
							ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
							cout<<"enter upper"<<endl;
						}
    break;

  case 6:
/* Line 868 of glr.c  */
#line 134 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"temp2: classdef \n";
							//ast->createClassNode();
							cout<<"enter classdef"<<endl;
					}
    break;

  case 7:
/* Line 868 of glr.c  */
#line 151 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
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
#line 159 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader:	DEF  NAME parameters ARROW test ':'  \n";}
    break;

  case 9:
/* Line 868 of glr.c  */
#line 160 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader:  DEF access NAME parameters ARROW test ':'  \n";}
    break;

  case 10:
/* Line 868 of glr.c  */
#line 161 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
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
#line 170 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
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
#line 178 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC NAME parameters ARROW test ':' \n";}
    break;

  case 13:
/* Line 868 of glr.c  */
#line 179 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL NAME parameters ARROW test ':' \n";}
    break;

  case 14:
/* Line 868 of glr.c  */
#line 180 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
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
#line 188 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
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
#line 196 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC FINAL NAME parameters ARROW test ':' \n";}
    break;

  case 17:
/* Line 868 of glr.c  */
#line 197 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 18:
/* Line 868 of glr.c  */
#line 198 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
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
#line 206 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
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
#line 214 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
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
#line 222 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC access NAME parameters ARROW test ':'  \n";}
    break;

  case 22:
/* Line 868 of glr.c  */
#line 223 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
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
#line 230 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
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
#line 238 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC FINAL access NAME parameters ARROW test ':'  \n";}
    break;

  case 25:
/* Line 868 of glr.c  */
#line 239 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL STATIC access NAME parameters ARROW test ':'  \n";}
    break;

  case 26:
/* Line 868 of glr.c  */
#line 240 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
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
#line 248 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
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
#line 255 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 29:
/* Line 868 of glr.c  */
#line 256 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access FINAL NAME parameters ARROW test ':'  \n";}
    break;

  case 30:
/* Line 868 of glr.c  */
#line 257 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
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
#line 265 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
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
#line 273 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access STATIC FINAL NAME parameters ARROW test ':'  \n";}
    break;

  case 33:
/* Line 868 of glr.c  */
#line 274 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access FINAL STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 34:
/* Line 868 of glr.c  */
#line 275 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
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
#line 283 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
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
#line 290 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC access FINAL NAME parameters ARROW test ':'  \n";}
    break;

  case 37:
/* Line 868 of glr.c  */
#line 291 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL access STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 38:
/* Line 868 of glr.c  */
#line 292 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
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
#line 299 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
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
#line 308 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"parameters:'(' arglist ')'\n";}
    break;

  case 41:
/* Line 868 of glr.c  */
#line 309 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"parameters:'(' ')'\n";}
    break;

  case 42:
/* Line 868 of glr.c  */
#line 312 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {	((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);	Streams::verbose() <<"stmt:	simple_stmt \n";}
    break;

  case 43:
/* Line 868 of glr.c  */
#line 313 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {	((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);	Streams::verbose() <<"stmt: compound_stmt\n";}
    break;

  case 44:
/* Line 868 of glr.c  */
#line 315 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"simple_stmt: small_stmt ';' \n";}
    break;

  case 45:
/* Line 868 of glr.c  */
#line 317 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: expr_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 46:
/* Line 868 of glr.c  */
#line 320 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: del_stmt \n";}
    break;

  case 47:
/* Line 868 of glr.c  */
#line 321 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: pass_stmt \n";}
    break;

  case 48:
/* Line 868 of glr.c  */
#line 322 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: flow_stmt \n";}
    break;

  case 49:
/* Line 868 of glr.c  */
#line 323 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: import_stmt \n";}
    break;

  case 50:
/* Line 868 of glr.c  */
#line 324 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: global_stmt \n";}
    break;

  case 51:
/* Line 868 of glr.c  */
#line 325 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: nonlocal_stmt \n";}
    break;

  case 52:
/* Line 868 of glr.c  */
#line 326 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: print_stmt \n";}
    break;

  case 53:
/* Line 868 of glr.c  */
#line 329 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"expr_stmt:	testlist_star_expr augassign testlist \n";}
    break;

  case 54:
/* Line 868 of glr.c  */
#line 330 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"expr_stmt: testlist_star_expr \n";}
    break;

  case 55:
/* Line 868 of glr.c  */
#line 331 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"expr_stmt: testlist_star_expr right_testlist \n";
													ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
													((*yyvalp).tn)=ast->createAssignNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),NULL);
												}
    break;

  case 56:
/* Line 868 of glr.c  */
#line 337 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"right_testlist: '=' testlist_star_expr right_testlist \n";}
    break;

  case 57:
/* Line 868 of glr.c  */
#line 338 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"right_testlist: '=' testlist_star_expr \n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 58:
/* Line 868 of glr.c  */
#line 341 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: comma_test_star_seqJ \n";}
    break;

  case 59:
/* Line 868 of glr.c  */
#line 342 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: comma_test_star_seqJ ',' \n";}
    break;

  case 60:
/* Line 868 of glr.c  */
#line 343 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"',' \n";}
    break;

  case 61:
/* Line 868 of glr.c  */
#line 344 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: test comma_test_star_seqJ \n";}
    break;

  case 62:
/* Line 868 of glr.c  */
#line 345 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
								Streams::verbose() <<"testlist_star_expr: test \n"; 
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 63:
/* Line 868 of glr.c  */
#line 349 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: star_expr comma_test_star_seqJ ',' \n";}
    break;

  case 64:
/* Line 868 of glr.c  */
#line 350 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: star_expr ',' \n";}
    break;

  case 65:
/* Line 868 of glr.c  */
#line 353 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star : ',' test \n";}
    break;

  case 66:
/* Line 868 of glr.c  */
#line 354 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star : ',' star_expr \n";}
    break;

  case 67:
/* Line 868 of glr.c  */
#line 357 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seqJ : comma_test_star_seqJ comma_test_star \n";}
    break;

  case 68:
/* Line 868 of glr.c  */
#line 358 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seqJ : comma_test_star \n";}
    break;

  case 69:
/* Line 868 of glr.c  */
#line 360 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	PLUS_EQUAL \n";}
    break;

  case 70:
/* Line 868 of glr.c  */
#line 361 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MINUS_EQUAL \n";}
    break;

  case 71:
/* Line 868 of glr.c  */
#line 362 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	STAR_EQUAL \n";}
    break;

  case 72:
/* Line 868 of glr.c  */
#line 363 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	DIV_EQUAL \n";}
    break;

  case 73:
/* Line 868 of glr.c  */
#line 364 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MOD_EQUAL \n";}
    break;

  case 74:
/* Line 868 of glr.c  */
#line 365 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	AND_EQUAL \n";}
    break;

  case 75:
/* Line 868 of glr.c  */
#line 366 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	OR_EQUAL \n";}
    break;

  case 76:
/* Line 868 of glr.c  */
#line 367 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	SHAPOO_EQUAL \n";}
    break;

  case 77:
/* Line 868 of glr.c  */
#line 368 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	LESS_THAN_2_EQUAL \n";}
    break;

  case 78:
/* Line 868 of glr.c  */
#line 369 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MORE_THAN_2_EQUAL \n";}
    break;

  case 79:
/* Line 868 of glr.c  */
#line 370 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	STAR_2_EQUAL \n";}
    break;

  case 80:
/* Line 868 of glr.c  */
#line 371 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	DIV_2_EQUAL \n";}
    break;

  case 81:
/* Line 868 of glr.c  */
#line 374 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose()<<"access_modef: PRIVATE\n";acc_mod="private";pp=true;}
    break;

  case 82:
/* Line 868 of glr.c  */
#line 375 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {pp=false;Streams::verbose()<<"access_modef:	PUBLIC\n";acc_mod="public";pp=false;}
    break;

  case 83:
/* Line 868 of glr.c  */
#line 376 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {pro=true;Streams::verbose()<<"access_modef:	PROTECTED\n";acc_mod="protected";}
    break;

  case 84:
/* Line 868 of glr.c  */
#line 378 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"print_stmt: PRINT exprlist \n";}
    break;

  case 85:
/* Line 868 of glr.c  */
#line 379 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"del_stmt:   DEL exprlist \n";}
    break;

  case 86:
/* Line 868 of glr.c  */
#line 382 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"pass_stmt:	PASS \n";}
    break;

  case 87:
/* Line 868 of glr.c  */
#line 385 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"flow_stmt:	break_stmt \n";}
    break;

  case 88:
/* Line 868 of glr.c  */
#line 386 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"flow_stmt: continue_stmt\n";}
    break;

  case 89:
/* Line 868 of glr.c  */
#line 387 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"flow_stmt: return_stmt\n";}
    break;

  case 90:
/* Line 868 of glr.c  */
#line 390 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"break_stmt: BREAK \n";}
    break;

  case 91:
/* Line 868 of glr.c  */
#line 393 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"continue_stmt:	CONTINUE \n";}
    break;

  case 92:
/* Line 868 of glr.c  */
#line 396 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"return_stmt:	RETURN testlist \n";}
    break;

  case 93:
/* Line 868 of glr.c  */
#line 397 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"return_stmt:	RETURN \n";}
    break;

  case 94:
/* Line 868 of glr.c  */
#line 401 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"import_stmt: import_name \n";}
    break;

  case 95:
/* Line 868 of glr.c  */
#line 404 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"import_name: IMPORT dotted_as_names \n";}
    break;

  case 96:
/* Line 868 of glr.c  */
#line 407 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_dotted_as_name_seq: ',' dotted_as_name \n";}
    break;

  case 97:
/* Line 868 of glr.c  */
#line 408 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_dotted_as_name_seq: comma_dotted_as_name_seq ',' dotted_as_name \n";}
    break;

  case 98:
/* Line 868 of glr.c  */
#line 410 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
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
#line 417 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
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
#line 427 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"dotted_as_name: dotted_name \n";}
    break;

  case 101:
/* Line 868 of glr.c  */
#line 428 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"dotted_as_name: dotted_name AS NAME\n";}
    break;

  case 102:
/* Line 868 of glr.c  */
#line 431 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"dotted_name: NAME \n"; temp_id=temp_id+(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal);}
    break;

  case 103:
/* Line 868 of glr.c  */
#line 432 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"dotted_name: NAME dotted_name_seq \n";}
    break;

  case 104:
/* Line 868 of glr.c  */
#line 435 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"dotted_name_seq: '.' NAME \n";
							temp_id=temp_id+"."+(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal);
						}
    break;

  case 105:
/* Line 868 of glr.c  */
#line 439 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
												Streams::verbose() <<"dotted_name_seq: dotted_name_seq '.' NAME \n";
					temp_id=temp_id+"."+(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal);
				 }
    break;

  case 106:
/* Line 868 of glr.c  */
#line 445 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_name_seq :	',' NAME \n";}
    break;

  case 107:
/* Line 868 of glr.c  */
#line 446 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_name_seq :	comma_name_seq ',' NAME \n";}
    break;

  case 108:
/* Line 868 of glr.c  */
#line 449 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"global_stmt: GLOBAL NAME \n";}
    break;

  case 109:
/* Line 868 of glr.c  */
#line 450 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"global_stmt: GLOBAL NAME comma_name_seq\n";}
    break;

  case 110:
/* Line 868 of glr.c  */
#line 453 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"nonlocal_stmt:	NONLOCAL NAME \n";}
    break;

  case 111:
/* Line 868 of glr.c  */
#line 454 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"nonlocal_stmt: NONLOCAL NAME comma_name_seq \n";}
    break;

  case 112:
/* Line 868 of glr.c  */
#line 457 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt:  if_stmt \n";}
    break;

  case 113:
/* Line 868 of glr.c  */
#line 458 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: while_stmt\n";}
    break;

  case 114:
/* Line 868 of glr.c  */
#line 459 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: for_stmt\n";}
    break;

  case 115:
/* Line 868 of glr.c  */
#line 460 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: try_stmt\n";}
    break;

  case 116:
/* Line 868 of glr.c  */
#line 461 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: with_stmt\n";}
    break;

  case 117:
/* Line 868 of glr.c  */
#line 463 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {	
								Streams::verbose() <<"compound_stmt: funcdef\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 118:
/* Line 868 of glr.c  */
#line 467 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
									Streams::verbose() <<"compound_stmt: DEF classdef\n";
									((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
								}
    break;

  case 119:
/* Line 868 of glr.c  */
#line 473 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"elif_seq :  ELIF test ':' suite \n";}
    break;

  case 120:
/* Line 868 of glr.c  */
#line 474 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"elif_seq : elif_seq ELIF test ':' suite \n";}
    break;

  case 121:
/* Line 868 of glr.c  */
#line 477 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"if_stmt:	IF test ':' suite \n";}
    break;

  case 122:
/* Line 868 of glr.c  */
#line 478 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"if_stmt:	IF test ':' suite elif_seq \n";}
    break;

  case 123:
/* Line 868 of glr.c  */
#line 479 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"if_stmt:	IF test ':' suite ELSE ':' suite \n";}
    break;

  case 124:
/* Line 868 of glr.c  */
#line 480 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"if_stmt:	IF test ':' suite elif_seq ELSE ':' suite \n";}
    break;

  case 125:
/* Line 868 of glr.c  */
#line 483 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"while_stmt: WHILE test ':' suite \n";}
    break;

  case 126:
/* Line 868 of glr.c  */
#line 484 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"while_stmt:  WHILE test ':' suite ELSE ':' suite \n";}
    break;

  case 127:
/* Line 868 of glr.c  */
#line 487 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"for_stmt:   FOR exprlist IN testlist ':' suite \n";}
    break;

  case 128:
/* Line 868 of glr.c  */
#line 488 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"for_stmt:  FOR exprlist IN testlist ':' suite ELSE ':' suite\n";}
    break;

  case 129:
/* Line 868 of glr.c  */
#line 491 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<" try_stmt:   TRY ':' suite try_except_cla_seq\n";}
    break;

  case 130:
/* Line 868 of glr.c  */
#line 492 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<" try_stmt: TRY ':' suite try_except_cla_seq ELSE ':' suite\n";}
    break;

  case 131:
/* Line 868 of glr.c  */
#line 493 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"try_stmt:  TRY ':' suite try_except_cla_seq FINALLY ':' suite\n";}
    break;

  case 132:
/* Line 868 of glr.c  */
#line 494 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"try_stmt:  TRY ':' suite FINALLY ':' suite\n";}
    break;

  case 133:
/* Line 868 of glr.c  */
#line 497 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"try_except_cla_seq: except_clause ':' suite \n";}
    break;

  case 134:
/* Line 868 of glr.c  */
#line 498 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"try_except_cla_seq: try_except_cla_seq except_clause ':' suite\n";}
    break;

  case 135:
/* Line 868 of glr.c  */
#line 501 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"with_seq:	',' with_item \n";}
    break;

  case 136:
/* Line 868 of glr.c  */
#line 502 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"with_seq: with_seq ',' with_item\n";}
    break;

  case 137:
/* Line 868 of glr.c  */
#line 505 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"with_stmt:  WITH with_item ':' suite \n";}
    break;

  case 138:
/* Line 868 of glr.c  */
#line 506 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"with_stmt: WITH with_item with_seq ':' suite\n";}
    break;

  case 139:
/* Line 868 of glr.c  */
#line 509 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<" with_item:  test\n";}
    break;

  case 140:
/* Line 868 of glr.c  */
#line 510 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"with_item: test AS expr\n";}
    break;

  case 141:
/* Line 868 of glr.c  */
#line 513 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"except_clause:  EXCEPT \n";}
    break;

  case 142:
/* Line 868 of glr.c  */
#line 514 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"except_clause:  EXCEPT test\n";}
    break;

  case 143:
/* Line 868 of glr.c  */
#line 515 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"except_clause:  EXCEPT test AS NAME\n";}
    break;

  case 144:
/* Line 868 of glr.c  */
#line 518 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {	((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);	Streams:: verbose() <<"list_stmt : stmt\n";}
    break;

  case 145:
/* Line 868 of glr.c  */
#line 519 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams:: verbose() <<"list_stmt : stmt list_stmt\n";
						ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
						((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);	
			}
    break;

  case 146:
/* Line 868 of glr.c  */
#line 525 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"suite:	list_stmt END\n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);	
						}
    break;

  case 147:
/* Line 868 of glr.c  */
#line 529 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {	((*yyvalp).tn)=NULL;	Streams::verbose() <<"suite:	END\n"; ((*yyvalp).tn)=NULL;}
    break;

  case 148:
/* Line 868 of glr.c  */
#line 532 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"test:	or_test\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 149:
/* Line 868 of glr.c  */
#line 533 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"or_test IF or_test ELSE test\n";}
    break;

  case 150:
/* Line 868 of glr.c  */
#line 536 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"or_seq:	OR and_test \n";}
    break;

  case 151:
/* Line 868 of glr.c  */
#line 537 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"or_seq: or_seq OR and_test \n";}
    break;

  case 152:
/* Line 868 of glr.c  */
#line 540 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"or_test:	and_test\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 153:
/* Line 868 of glr.c  */
#line 541 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"or_test:	and_test or_seq\n";}
    break;

  case 154:
/* Line 868 of glr.c  */
#line 544 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_seq: AND not_test \n";}
    break;

  case 155:
/* Line 868 of glr.c  */
#line 545 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_seq: and_seq AND not_test \n";}
    break;

  case 156:
/* Line 868 of glr.c  */
#line 548 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_test:	not_test\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 157:
/* Line 868 of glr.c  */
#line 549 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_test: not_test and_seq \n";}
    break;

  case 158:
/* Line 868 of glr.c  */
#line 552 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"not_test:	NOT not_test\n";}
    break;

  case 159:
/* Line 868 of glr.c  */
#line 553 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"not_test:	comparison\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 160:
/* Line 868 of glr.c  */
#line 556 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op_seq: comp_op expr \n";}
    break;

  case 161:
/* Line 868 of glr.c  */
#line 557 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op_seq: comp_op_seq comp_op expr \n";}
    break;

  case 162:
/* Line 868 of glr.c  */
#line 560 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comparison: expr\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 163:
/* Line 868 of glr.c  */
#line 561 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comparison: expr comp_op_seq\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 164:
/* Line 868 of glr.c  */
#line 564 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: '<' \n";}
    break;

  case 165:
/* Line 868 of glr.c  */
#line 565 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: '>' \n";}
    break;

  case 166:
/* Line 868 of glr.c  */
#line 566 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: EQUAL \n";}
    break;

  case 167:
/* Line 868 of glr.c  */
#line 567 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: MORE_OR_EQUAL \n";}
    break;

  case 168:
/* Line 868 of glr.c  */
#line 568 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: LESS_OR_EQUAL \n";}
    break;

  case 169:
/* Line 868 of glr.c  */
#line 569 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: MORE_LESS \n";}
    break;

  case 170:
/* Line 868 of glr.c  */
#line 570 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: NOT_EQUAL \n";}
    break;

  case 171:
/* Line 868 of glr.c  */
#line 571 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IN \n";}
    break;

  case 172:
/* Line 868 of glr.c  */
#line 572 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: NOT IN \n";}
    break;

  case 173:
/* Line 868 of glr.c  */
#line 573 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IS \n";}
    break;

  case 174:
/* Line 868 of glr.c  */
#line 574 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IS NOT \n";}
    break;

  case 175:
/* Line 868 of glr.c  */
#line 577 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"star_expr: '*' expr \n";}
    break;

  case 176:
/* Line 868 of glr.c  */
#line 580 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"or_xor_expr_seq: '|' xor_expr \n";}
    break;

  case 177:
/* Line 868 of glr.c  */
#line 581 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"or_xor_expr_seq: or_xor_expr_seq '|' xor_expr\n";}
    break;

  case 178:
/* Line 868 of glr.c  */
#line 583 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
					Streams::verbose() <<"expr: xor_expr\n";
					((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
				}
    break;

  case 179:
/* Line 868 of glr.c  */
#line 587 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"expr: xor_expr or_xor_expr_seq\n";}
    break;

  case 180:
/* Line 868 of glr.c  */
#line 590 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"sha_and_expr_seq: '^' and_expr \n";}
    break;

  case 181:
/* Line 868 of glr.c  */
#line 591 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"sha_and_expr_seq: sha_and_expr_seq '^' and_expr\n";}
    break;

  case 182:
/* Line 868 of glr.c  */
#line 594 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"xor_expr: and_expr\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 183:
/* Line 868 of glr.c  */
#line 595 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"xor_expr: and_expr sha_and_expr_seq\n";}
    break;

  case 184:
/* Line 868 of glr.c  */
#line 598 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_shift_expr_seq: '&' shift_expr \n";}
    break;

  case 185:
/* Line 868 of glr.c  */
#line 599 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_shift_expr_seq: and_shift_expr_seq '&' shift_expr\n";}
    break;

  case 186:
/* Line 868 of glr.c  */
#line 602 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_expr: shift_expr\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 187:
/* Line 868 of glr.c  */
#line 603 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_expr: shift_expr and_shift_expr_seq\n";}
    break;

  case 188:
/* Line 868 of glr.c  */
#line 606 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	LESS_THAN_2 arith_expr \n";}
    break;

  case 189:
/* Line 868 of glr.c  */
#line 607 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	MORE_THAN_2 arith_expr \n";}
    break;

  case 190:
/* Line 868 of glr.c  */
#line 608 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	arith_seq LESS_THAN_2 arith_expr \n";}
    break;

  case 191:
/* Line 868 of glr.c  */
#line 609 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	arith_seq MORE_THAN_2 arith_expr \n";}
    break;

  case 192:
/* Line 868 of glr.c  */
#line 612 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"shift_expr: arith_expr\n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 193:
/* Line 868 of glr.c  */
#line 616 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"shift_expr: arith_expr arith_seq\n";}
    break;

  case 194:
/* Line 868 of glr.c  */
#line 619 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : '+' term \n";
						op=PLUS;
						((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 195:
/* Line 868 of glr.c  */
#line 623 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : '-' term \n";
							op=MINUS;
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 196:
/* Line 868 of glr.c  */
#line 627 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : term_seq '+' term \n";op=PLUS;
									k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn));
									//ValueNode* v = static_cast<ValueNode*>(k);
									//cout << "value is in term_seq " << v->get_value()<<endl;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),NULL,op);
								}
    break;

  case 197:
/* Line 868 of glr.c  */
#line 633 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : term_seq '-' term \n";op=MINUS;
									k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn));
									((*yyvalp).tn) = ast->createExprNode(k,NULL,op);
								}
    break;

  case 198:
/* Line 868 of glr.c  */
#line 639 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"arith_expr: term\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 199:
/* Line 868 of glr.c  */
#line 640 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
											Streams::verbose() <<"arith_expr: term term_seq\n";
											k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
											//cout<<"op= "<<op<<endl;
											((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),NULL,op);
											
										}
    break;

  case 200:
/* Line 868 of glr.c  */
#line 650 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '*' factor \n";
							op=MULT;
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 201:
/* Line 868 of glr.c  */
#line 654 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '/' factor \n";
								op=DIV;
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 202:
/* Line 868 of glr.c  */
#line 658 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '%' factor \n";
								op=MOD;
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 203:
/* Line 868 of glr.c  */
#line 662 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: DIV_2 factor \n";}
    break;

  case 204:
/* Line 868 of glr.c  */
#line 663 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '*' factor \n";
									op=MULT;
									((*yyvalp).tn) = ast->createExprNode(NULL,NULL,op);
									}
    break;

  case 205:
/* Line 868 of glr.c  */
#line 667 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '/' factor \n";
									op=DIV;
									((*yyvalp).tn) = ast->createExprNode(NULL,NULL,op);
									}
    break;

  case 206:
/* Line 868 of glr.c  */
#line 671 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '%' factor \n";
									op=MOD;
									((*yyvalp).tn) = ast->createExprNode(NULL,NULL,op);
									}
    break;

  case 207:
/* Line 868 of glr.c  */
#line 675 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq DIV_2 factor \n";}
    break;

  case 208:
/* Line 868 of glr.c  */
#line 678 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"term: 	factor\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 209:
/* Line 868 of glr.c  */
#line 679 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"term: 	factor factor_seq\n";
								((*yyvalp).tn) = ast->createExprNode(NULL,NULL,op);
							}
    break;

  case 210:
/* Line 868 of glr.c  */
#line 684 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor: '+' factor \n";}
    break;

  case 211:
/* Line 868 of glr.c  */
#line 685 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor: '-' factor \n";}
    break;

  case 212:
/* Line 868 of glr.c  */
#line 686 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor: '~' factor \n";}
    break;

  case 213:
/* Line 868 of glr.c  */
#line 687 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
					Streams::verbose() <<"factor: power\n";
					((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
				}
    break;

  case 214:
/* Line 868 of glr.c  */
#line 693 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"trailer_seq: trailer \n";}
    break;

  case 215:
/* Line 868 of glr.c  */
#line 694 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"trailer_seq: trailer_seq trailer \n";}
    break;

  case 216:
/* Line 868 of glr.c  */
#line 697 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"power:	atom\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 217:
/* Line 868 of glr.c  */
#line 698 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"power: atom trailer_seq \n";}
    break;

  case 218:
/* Line 868 of glr.c  */
#line 699 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"power: atom trailer_seq STAR_2 factor \n";}
    break;

  case 219:
/* Line 868 of glr.c  */
#line 700 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"power: atom STAR_2 factor \n";}
    break;

  case 220:
/* Line 868 of glr.c  */
#line 703 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"str_seq:	STRING \n";}
    break;

  case 221:
/* Line 868 of glr.c  */
#line 704 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"str_seq:	str_seq STRING \n";}
    break;

  case 222:
/* Line 868 of glr.c  */
#line 707 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'(' ')' \n";}
    break;

  case 223:
/* Line 868 of glr.c  */
#line 708 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'(' testlist_comp ')' \n";}
    break;

  case 224:
/* Line 868 of glr.c  */
#line 709 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'[' ']' \n";}
    break;

  case 225:
/* Line 868 of glr.c  */
#line 710 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' '}' \n";}
    break;

  case 226:
/* Line 868 of glr.c  */
#line 711 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' '}' \n";}
    break;

  case 227:
/* Line 868 of glr.c  */
#line 712 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' dictorsetmaker '}' \n";}
    break;

  case 228:
/* Line 868 of glr.c  */
#line 713 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    { Streams::verbose() <<"atom: NAME\n";
							((*yyvalp).tn)=ast->createCallVarNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal),NULL,NULL);
					}
    break;

  case 229:
/* Line 868 of glr.c  */
#line 716 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF NAME\n";
											((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,0,0);
										v=((*yyvalp).var);
									((*yyvalp).tn) = ast->createIDNode(v,0,0);
									}
    break;

  case 230:
/* Line 868 of glr.c  */
#line 721 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access NAME\n";
											Streams::verbose()<<"var_declaration: access_modef ID\n";
									((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false,false);
									v=((*yyvalp).var);
									acc_mod="";
									((*yyvalp).tn) = ast->createIDNode(v,0,0);
											}
    break;

  case 231:
/* Line 868 of glr.c  */
#line 728 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC NAME\n";
											Streams::verbose()<<"var_declaration: STATIC ID\n";
											((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false,false);
											v=((*yyvalp).var);
											((*yyvalp).tn) = ast->createIDNode(v,0,0);
										}
    break;

  case 232:
/* Line 868 of glr.c  */
#line 734 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL NAME\n";
												Streams::verbose()<<"var_declaration: FINAL ID\n";
												((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													((*yyvalp).tn) = ast->createIDNode(v,0,0);
										}
    break;

  case 233:
/* Line 868 of glr.c  */
#line 740 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC FINAL NAME\n";
													Streams::verbose()<<"var_declaration: STATIC FINAL ID\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													((*yyvalp).tn) = ast->createIDNode(v,0,0);
												}
    break;

  case 234:
/* Line 868 of glr.c  */
#line 746 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL STATIC NAME\n";
													Streams::verbose()<<"var_declaration: STATIC FINAL ID\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													((*yyvalp).tn) = ast->createIDNode(v,0,0);
												}
    break;

  case 235:
/* Line 868 of glr.c  */
#line 752 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC access NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													acc_mod="";
													((*yyvalp).tn) = ast->createIDNode(v,0,0);
												}
    break;

  case 236:
/* Line 868 of glr.c  */
#line 758 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL access NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													acc_mod="";
													((*yyvalp).tn) = ast->createIDNode(v,0,0);
												}
    break;

  case 237:
/* Line 868 of glr.c  */
#line 764 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC FINAL access NAME\n";
															((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
															v=((*yyvalp).var);
															acc_mod="";
															((*yyvalp).tn) = ast->createIDNode(v,0,0);
														}
    break;

  case 238:
/* Line 868 of glr.c  */
#line 770 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL STATIC access NAME\n";
															((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
															v=((*yyvalp).var);
															acc_mod="";
															((*yyvalp).tn) = ast->createIDNode(v,0,0);
														}
    break;

  case 239:
/* Line 868 of glr.c  */
#line 776 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access STATIC NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													acc_mod="";
													((*yyvalp).tn) = ast->createIDNode(v,0,0);
												}
    break;

  case 240:
/* Line 868 of glr.c  */
#line 782 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access FINAL NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													acc_mod="";
													((*yyvalp).tn) = ast->createIDNode(v,0,0);
											}
    break;

  case 241:
/* Line 868 of glr.c  */
#line 788 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access STATIC FINAL NAME\n";
														((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
														v=((*yyvalp).var);
														acc_mod="";
														((*yyvalp).tn) = ast->createIDNode(v,0,0);
													}
    break;

  case 242:
/* Line 868 of glr.c  */
#line 794 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access FINAL STATIC NAME\n";
														((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
														v=((*yyvalp).var);
														acc_mod="";
														((*yyvalp).tn) = ast->createIDNode(v,0,0);
													}
    break;

  case 243:
/* Line 868 of glr.c  */
#line 800 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC access FINAL NAME\n";
															((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
															v=((*yyvalp).var);
															acc_mod="";
															((*yyvalp).tn) = ast->createIDNode(v,0,0);
														}
    break;

  case 244:
/* Line 868 of glr.c  */
#line 806 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL access STATIC NAME\n";
														((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
														v=((*yyvalp).var);
														acc_mod="";
														((*yyvalp).tn) = ast->createIDNode(v,0,0);
													}
    break;

  case 245:
/* Line 868 of glr.c  */
#line 812 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_INT\n";
						int xx=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.intVal);
						cout<<"yhe number is"<<xx<<endl;
						((*yyvalp).tn) = ast->createTypeNode(xx,0,0,INT);
						}
    break;

  case 246:
/* Line 868 of glr.c  */
#line 817 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_FLOAT\n";
							float x=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.floatVal);
							((*yyvalp).tn) = ast->createTypeNode(&x,0,0,FLOAT);
						}
    break;

  case 247:
/* Line 868 of glr.c  */
#line 821 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_FLOAT\n";
							long xxx=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.longVal);
							((*yyvalp).tn) = ast->createTypeNode(&xxx,0,0,LONG);
						}
    break;

  case 248:
/* Line 868 of glr.c  */
#line 825 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: CHAR_VALUE\n";}
    break;

  case 249:
/* Line 868 of glr.c  */
#line 826 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: str_seq\n";
									((*yyvalp).tn) = ast->createTypeNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal),0,0,STRINGS);
								}
    break;

  case 250:
/* Line 868 of glr.c  */
#line 829 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DOT_3\n";}
    break;

  case 251:
/* Line 868 of glr.c  */
#line 830 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: NONE\n";}
    break;

  case 252:
/* Line 868 of glr.c  */
#line 831 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: TRUE\n";
					((*yyvalp).tn) = ast->createTypeNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal),0,0,True);
				}
    break;

  case 253:
/* Line 868 of glr.c  */
#line 834 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: FALSE\n";
					((*yyvalp).tn) = ast->createTypeNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal),0,0,False);
				}
    break;

  case 254:
/* Line 868 of glr.c  */
#line 839 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: ',' test\n";}
    break;

  case 255:
/* Line 868 of glr.c  */
#line 840 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: ',' star_expr\n";}
    break;

  case 256:
/* Line 868 of glr.c  */
#line 841 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: comma_test_star_seq ',' test\n";}
    break;

  case 257:
/* Line 868 of glr.c  */
#line 842 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: comma_test_star_seq ',' star_expr\n";}
    break;

  case 258:
/* Line 868 of glr.c  */
#line 845 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test comp_for\n";}
    break;

  case 259:
/* Line 868 of glr.c  */
#line 846 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test\n";}
    break;

  case 260:
/* Line 868 of glr.c  */
#line 847 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test   comma_test_star_seq\n";}
    break;

  case 261:
/* Line 868 of glr.c  */
#line 848 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 262:
/* Line 868 of glr.c  */
#line 849 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 263:
/* Line 868 of glr.c  */
#line 850 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 264:
/* Line 868 of glr.c  */
#line 851 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 265:
/* Line 868 of glr.c  */
#line 852 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 266:
/* Line 868 of glr.c  */
#line 853 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 267:
/* Line 868 of glr.c  */
#line 854 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 268:
/* Line 868 of glr.c  */
#line 857 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"trailer:	'('  ')'\n";}
    break;

  case 269:
/* Line 868 of glr.c  */
#line 858 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"trailer:	'(' arglist ')'\n";}
    break;

  case 270:
/* Line 868 of glr.c  */
#line 859 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"trailer:	'[' subscriptlist ']'\n";}
    break;

  case 271:
/* Line 868 of glr.c  */
#line 860 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"trailer:	'.' NAME\n";}
    break;

  case 272:
/* Line 868 of glr.c  */
#line 863 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_subscript_seq: ',' subscript\n";}
    break;

  case 273:
/* Line 868 of glr.c  */
#line 864 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_subscript_seq: comma_subscript_seq ',' subscript\n";}
    break;

  case 274:
/* Line 868 of glr.c  */
#line 867 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript\n";}
    break;

  case 275:
/* Line 868 of glr.c  */
#line 868 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript comma_subscript_seq\n";}
    break;

  case 276:
/* Line 868 of glr.c  */
#line 869 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript  ','\n";}
    break;

  case 277:
/* Line 868 of glr.c  */
#line 870 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript comma_subscript_seq ','\n";}
    break;

  case 278:
/* Line 868 of glr.c  */
#line 873 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test\n";}
    break;

  case 279:
/* Line 868 of glr.c  */
#line 874 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':'\n";}
    break;

  case 280:
/* Line 868 of glr.c  */
#line 875 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript: test ':'\n";}
    break;

  case 281:
/* Line 868 of glr.c  */
#line 876 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' test\n";}
    break;

  case 282:
/* Line 868 of glr.c  */
#line 877 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' sliceop\n";}
    break;

  case 283:
/* Line 868 of glr.c  */
#line 878 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' test sliceop\n";}
    break;

  case 284:
/* Line 868 of glr.c  */
#line 879 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' test\n";}
    break;

  case 285:
/* Line 868 of glr.c  */
#line 880 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' sliceop\n";}
    break;

  case 286:
/* Line 868 of glr.c  */
#line 881 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' test sliceop\n";}
    break;

  case 287:
/* Line 868 of glr.c  */
#line 884 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"sliceop: ':'\n";}
    break;

  case 288:
/* Line 868 of glr.c  */
#line 885 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"sliceop: ':' test\n";}
    break;

  case 289:
/* Line 868 of glr.c  */
#line 888 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	',' expr \n";}
    break;

  case 290:
/* Line 868 of glr.c  */
#line 889 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	',' star_expr \n";}
    break;

  case 291:
/* Line 868 of glr.c  */
#line 890 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	comma_expr_star_seq ',' expr \n";}
    break;

  case 292:
/* Line 868 of glr.c  */
#line 891 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	comma_expr_star_seq ',' star_expr \n";}
    break;

  case 293:
/* Line 868 of glr.c  */
#line 894 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr \n";}
    break;

  case 294:
/* Line 868 of glr.c  */
#line 895 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr comma_expr_star_seq \n";}
    break;

  case 295:
/* Line 868 of glr.c  */
#line 896 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr \n";}
    break;

  case 296:
/* Line 868 of glr.c  */
#line 897 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr comma_expr_star_seq \n";}
    break;

  case 297:
/* Line 868 of glr.c  */
#line 898 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr ',' \n";}
    break;

  case 298:
/* Line 868 of glr.c  */
#line 899 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr comma_expr_star_seq ',' \n";}
    break;

  case 299:
/* Line 868 of glr.c  */
#line 900 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr ',' \n";}
    break;

  case 300:
/* Line 868 of glr.c  */
#line 901 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr  comma_expr_star_seq ',' \n";}
    break;

  case 301:
/* Line 868 of glr.c  */
#line 904 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test: ',' test \n";}
    break;

  case 302:
/* Line 868 of glr.c  */
#line 905 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"',' test comma_test \n";}
    break;

  case 303:
/* Line 868 of glr.c  */
#line 908 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	test \n";}
    break;

  case 304:
/* Line 868 of glr.c  */
#line 909 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	test comma_test \n";}
    break;

  case 305:
/* Line 868 of glr.c  */
#line 910 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	 test ','\n";}
    break;

  case 306:
/* Line 868 of glr.c  */
#line 911 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	 test comma_test ','\n";}
    break;

  case 307:
/* Line 868 of glr.c  */
#line 914 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_colon_test_seq:  ',' test ':' test \n";}
    break;

  case 308:
/* Line 868 of glr.c  */
#line 915 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_colon_test_seq: comma_test_colon_test_seq ',' test ':' test\n";}
    break;

  case 309:
/* Line 868 of glr.c  */
#line 917 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_seq: ',' test \n";}
    break;

  case 310:
/* Line 868 of glr.c  */
#line 918 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_seq: comma_test_seq ',' test \n";}
    break;

  case 311:
/* Line 868 of glr.c  */
#line 921 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comp_for \n";}
    break;

  case 312:
/* Line 868 of glr.c  */
#line 922 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test \n";}
    break;

  case 313:
/* Line 868 of glr.c  */
#line 923 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test ',' \n";}
    break;

  case 314:
/* Line 868 of glr.c  */
#line 924 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comma_test_colon_test_seq \n";}
    break;

  case 315:
/* Line 868 of glr.c  */
#line 925 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comma_test_colon_test_seq ','\n";}
    break;

  case 316:
/* Line 868 of glr.c  */
#line 926 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test comp_for\n";}
    break;

  case 317:
/* Line 868 of glr.c  */
#line 927 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test\n";}
    break;

  case 318:
/* Line 868 of glr.c  */
#line 928 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ','\n";}
    break;

  case 319:
/* Line 868 of glr.c  */
#line 929 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ','\n";}
    break;

  case 320:
/* Line 868 of glr.c  */
#line 930 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test comma_test_seq ','\n";}
    break;

  case 321:
/* Line 868 of glr.c  */
#line 932 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
								Streams::verbose() <<"classdef: classheader suite\n";
								((*yyvalp).type)=p->finishTypeDeclaration(t);
								((*yyvalp).tn)=ast->createClassNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.type),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL);
							}
    break;

  case 322:
/* Line 868 of glr.c  */
#line 938 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
								Streams::verbose() << "class_h: CLASS ID \n";
								colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);

								inhertance_list.clear();
					}
    break;

  case 323:
/* Line 868 of glr.c  */
#line 946 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
									Streams::verbose() << "class_h: access_modef CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 324:
/* Line 868 of glr.c  */
#line 953 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
									Streams::verbose() << "class_h: STATIC CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 325:
/* Line 868 of glr.c  */
#line 960 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
									Streams::verbose() << "class_h: FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 326:
/* Line 868 of glr.c  */
#line 967 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 327:
/* Line 868 of glr.c  */
#line 974 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
												Streams::verbose() << "class_h: STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 328:
/* Line 868 of glr.c  */
#line 981 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 329:
/* Line 868 of glr.c  */
#line 988 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: STATIC access_modef CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 330:
/* Line 868 of glr.c  */
#line 995 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 331:
/* Line 868 of glr.c  */
#line 1002 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 332:
/* Line 868 of glr.c  */
#line 1009 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: access_modef STATIC CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 333:
/* Line 868 of glr.c  */
#line 1016 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: access_modef FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 334:
/* Line 868 of glr.c  */
#line 1023 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 335:
/* Line 868 of glr.c  */
#line 1030 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 336:
/* Line 868 of glr.c  */
#line 1037 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 337:
/* Line 868 of glr.c  */
#line 1044 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 338:
/* Line 868 of glr.c  */
#line 1051 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
										Streams::verbose() << "class_h: CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
									t=((*yyvalp).type);
									inhertance_list.clear();
									temp_id="";
									acc_mod="";
								}
    break;

  case 339:
/* Line 868 of glr.c  */
#line 1059 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 340:
/* Line 868 of glr.c  */
#line 1066 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 341:
/* Line 868 of glr.c  */
#line 1073 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 342:
/* Line 868 of glr.c  */
#line 1080 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 343:
/* Line 868 of glr.c  */
#line 1087 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 344:
/* Line 868 of glr.c  */
#line 1094 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 345:
/* Line 868 of glr.c  */
#line 1101 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 346:
/* Line 868 of glr.c  */
#line 1108 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 347:
/* Line 868 of glr.c  */
#line 1115 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 348:
/* Line 868 of glr.c  */
#line 1122 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 349:
/* Line 868 of glr.c  */
#line 1129 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 350:
/* Line 868 of glr.c  */
#line 1136 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 351:
/* Line 868 of glr.c  */
#line 1143 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 352:
/* Line 868 of glr.c  */
#line 1150 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 353:
/* Line 868 of glr.c  */
#line 1157 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 354:
/* Line 868 of glr.c  */
#line 1164 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
														Streams::verbose() << "class_h: CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
												((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
												acc_mod="";
											}
    break;

  case 355:
/* Line 868 of glr.c  */
#line 1171 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
																Streams::verbose() << "class_h: access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 356:
/* Line 868 of glr.c  */
#line 1178 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 357:
/* Line 868 of glr.c  */
#line 1185 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 358:
/* Line 868 of glr.c  */
#line 1192 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
																	Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 359:
/* Line 868 of glr.c  */
#line 1199 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
																	Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 360:
/* Line 868 of glr.c  */
#line 1206 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
																		Streams::verbose() << "class_h: STATIC access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 361:
/* Line 868 of glr.c  */
#line 1213 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
																	Streams::verbose() << "class_h: FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 362:
/* Line 868 of glr.c  */
#line 1220 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 363:
/* Line 868 of glr.c  */
#line 1227 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 364:
/* Line 868 of glr.c  */
#line 1234 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS NAME '(' arglist ')' ':' \n";}
    break;

  case 365:
/* Line 868 of glr.c  */
#line 1235 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS NAME '(' arglist ')' ':' \n";}
    break;

  case 366:
/* Line 868 of glr.c  */
#line 1236 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 367:
/* Line 868 of glr.c  */
#line 1243 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 368:
/* Line 868 of glr.c  */
#line 1250 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 369:
/* Line 868 of glr.c  */
#line 1257 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 370:
/* Line 868 of glr.c  */
#line 1267 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"arg_comma_seq : argument ','\n";}
    break;

  case 371:
/* Line 868 of glr.c  */
#line 1268 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"arg_comma_seq : argument ',' arg_comma_seq\n";}
    break;

  case 372:
/* Line 868 of glr.c  */
#line 1271 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_arg_seq:	',' argument\n";}
    break;

  case 373:
/* Line 868 of glr.c  */
#line 1272 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_arg_seq:	comma_arg_seq ',' argument\n";}
    break;

  case 374:
/* Line 868 of glr.c  */
#line 1275 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"arglist: argument\n";}
    break;

  case 375:
/* Line 868 of glr.c  */
#line 1276 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"arglist: default_arg\n";}
    break;

  case 376:
/* Line 868 of glr.c  */
#line 1278 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"arglist: argument ','\n";}
    break;

  case 377:
/* Line 868 of glr.c  */
#line 1280 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {    
						std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal));
						std::string erro("*" + tempstr);
						char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
						Streams::verbose() <<"arglist: '*' test\n";
				   }
    break;

  case 378:
/* Line 868 of glr.c  */
#line 1288 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
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

  case 379:
/* Line 868 of glr.c  */
#line 1301 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
		 					   		    std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
									    
										Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";
								 }
    break;

  case 380:
/* Line 868 of glr.c  */
#line 1310 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
										std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);

											Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";
										 }
    break;

  case 381:
/* Line 868 of glr.c  */
#line 1319 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
		 										std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
															Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";
													   }
    break;

  case 382:
/* Line 868 of glr.c  */
#line 1327 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
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

  case 383:
/* Line 868 of glr.c  */
#line 1339 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
						std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("**" + tempstr);
										char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);Streams::verbose() <<"arglist: STAR_2 test\n";
					  }
    break;

  case 384:
/* Line 868 of glr.c  */
#line 1346 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq argument\n";}
    break;

  case 385:
/* Line 868 of glr.c  */
#line 1347 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq default_arg\n";}
    break;

  case 386:
/* Line 868 of glr.c  */
#line 1348 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq default_arg_comma_seq default_arg\n";}
    break;

  case 387:
/* Line 868 of glr.c  */
#line 1349 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq argument ','\n";}
    break;

  case 388:
/* Line 868 of glr.c  */
#line 1351 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {		
									std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
									Streams::verbose() <<"arglist: arg_comma_seq '*' test\n";
								  }
    break;

  case 389:
/* Line 868 of glr.c  */
#line 1359 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
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

  case 390:
/* Line 868 of glr.c  */
#line 1372 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
												std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
												Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq\n";
											   }
    break;

  case 391:
/* Line 868 of glr.c  */
#line 1380 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
														std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
														Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_default_arg_seq\n";
													   }
    break;

  case 392:
/* Line 868 of glr.c  */
#line 1388 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
																		std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
																		Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq comma_default_arg_seq\n";
																	 }
    break;

  case 393:
/* Line 868 of glr.c  */
#line 1396 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
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

  case 394:
/* Line 868 of glr.c  */
#line 1409 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {	std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("**" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
										Streams::verbose() <<"arglist: arg_comma_seq STAR_2 test\n";
								    }
    break;

  case 395:
/* Line 868 of glr.c  */
#line 1419 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_default_arg_seq: ',' default_arg\n";}
    break;

  case 396:
/* Line 868 of glr.c  */
#line 1420 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_default_arg_seq: comma_default_arg_seq ',' default_arg\n";}
    break;

  case 397:
/* Line 868 of glr.c  */
#line 1423 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"default_arg_comma_seq: default_arg ','\n";}
    break;

  case 398:
/* Line 868 of glr.c  */
#line 1424 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"default_arg_comma_seq: default_arg_comma_seq default_arg ','\n";}
    break;

  case 399:
/* Line 868 of glr.c  */
#line 1427 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {parameters.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.r.strVal));Streams::verbose() <<"default_arg: test '=' test\n";}
    break;

  case 400:
/* Line 868 of glr.c  */
#line 1429 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {parameters.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal)); Streams::verbose() <<"argument: 	test\n";}
    break;

  case 401:
/* Line 868 of glr.c  */
#line 1430 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {parameters.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.r.strVal));Streams::verbose() <<"argument: 	test comp_for\n";}
    break;

  case 402:
/* Line 868 of glr.c  */
#line 1434 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_iter:  comp_for\n";}
    break;

  case 403:
/* Line 868 of glr.c  */
#line 1435 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_iter:  comp_if\n";}
    break;

  case 404:
/* Line 868 of glr.c  */
#line 1438 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_for: 	FOR exprlist IN or_test\n";}
    break;

  case 405:
/* Line 868 of glr.c  */
#line 1439 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_for: FOR exprlist IN or_test comp_iter\n";}
    break;

  case 406:
/* Line 868 of glr.c  */
#line 1442 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_if: IF or_test\n";}
    break;

  case 407:
/* Line 868 of glr.c  */
#line 1443 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_if: IF or_test comp_iter\n";}
    break;


/* Line 868 of glr.c  */
#line 5107 "yacc.cpp"
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
  (!!((Yystate) == (-524)))

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
  (!!((Yytable_value) == (-388)))

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
#line 1446 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"

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