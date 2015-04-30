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

	#pragma once
	#ifndef __YACCF__
	#define __YACCF__
	#define _CRT_SECURE_NO_WARNINGS
	#include <iostream>
	#include <FlexLexer.h>
	#include <string>
	#include <stack>
	#include "Program.h"
	#include "SyntaxError.h"
	#include <fstream>
	#include <stdlib.h>
	#include "Streams.h"
	#include "ErrorRevovery.h"
	#include "compilerProject/AST.h"
	#include"compilerProject/MyParser.h"
	#include <set>
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
	extern FlexLexer* lexer = new yyFlexLexer();
	extern string sourceFile="";
	string dir_path="";
	string temp_id="";
	stack<string> temp_id1;
	stack<string> fileStack;
	vector<string> parsedFile;
	vector<string> temp_id2;
	int visit_num=0;//this variable for detected that if in right side in expretion
	char* i_type;
	bool exist;
	Node* k;
	Node* root;
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
	operand comp_op;
	bool v_static,v_final;
	vector<char *>inhertance_list;
	vector<Node*>arrayvec;
	vector<Node*>dotvec;
	extern int lineNum;
	extern int colNum;
	vector<char *>ID_list;
	Variable* v;
	Variable* v1=new Variable();
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
#line 142 "yacc.cpp"

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
#line 171 "yacc.cpp"

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
#define YYNRULES  412
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
     301,   303,   305,   307,   311,   313,   315,   318,   321,   325,
     328,   330,   333,   335,   338,   340,   344,   347,   350,   353,
     356,   358,   360,   362,   364,   366,   368,   370,   372,   374,
     376,   378,   380,   382,   384,   386,   388,   391,   394,   396,
     398,   400,   402,   404,   406,   409,   411,   413,   416,   419,
     423,   425,   428,   430,   434,   436,   439,   442,   446,   449,
     453,   456,   460,   463,   467,   469,   471,   473,   475,   477,
     479,   482,   485,   489,   493,   497,   502,   507,   512,   517,
     523,   529,   534,   539,   545,   551,   557,   563,   568,   574,
     579,   585,   593,   602,   607,   615,   622,   632,   637,   645,
     653,   660,   664,   669,   672,   676,   681,   687,   689,   693,
     695,   698,   703,   705,   708,   711,   713,   715,   721,   724,
     728,   730,   733,   736,   740,   742,   745,   748,   750,   753,
     757,   759,   762,   764,   766,   768,   770,   772,   774,   776,
     778,   781,   783,   786,   789,   792,   796,   798,   801,   804,
     808,   810,   813,   816,   820,   822,   825,   828,   831,   835,
     839,   841,   844,   847,   850,   854,   858,   860,   863,   866,
     869,   872,   875,   879,   883,   887,   891,   893,   896,   899,
     902,   905,   907,   909,   912,   914,   917,   922,   926,   928,
     931,   934,   938,   941,   944,   948,   952,   954,   958,   963,
     968,   970,   972,   974,   976,   978,   980,   982,   984,   986,
     989,   992,   996,  1000,  1003,  1005,  1008,  1011,  1015,  1018,
    1020,  1023,  1026,  1030,  1033,  1038,  1044,  1050,  1053,  1057,
    1059,  1062,  1065,  1069,  1071,  1073,  1076,  1080,  1084,  1089,
    1092,  1095,  1099,  1101,  1104,  1107,  1110,  1114,  1118,  1120,
    1123,  1125,  1128,  1131,  1135,  1138,  1142,  1145,  1149,  1151,
    1154,  1157,  1161,  1166,  1172,  1175,  1179,  1184,  1188,  1193,
    1198,  1204,  1207,  1209,  1212,  1215,  1219,  1222,  1226,  1231,
    1236,  1241,  1247,  1253,  1259,  1265,  1272,  1279,  1285,  1291,
    1298,  1305,  1312,  1319,  1325,  1332,  1339,  1346,  1354,  1362,
    1370,  1378,  1387,  1396,  1404,  1412,  1421,  1430,  1439,  1448,
    1455,  1463,  1471,  1479,  1488,  1497,  1506,  1515,  1525,  1535,
    1544,  1553,  1563,  1573,  1583,  1593,  1596,  1600,  1603,  1607,
    1609,  1611,  1614,  1617,  1623,  1627,  1631,  1636,  1643,  1646,
    1649,  1652,  1656,  1660,  1664,  1671,  1676,  1681,  1687,  1695,
    1699,  1702,  1706,  1709,  1713,  1717,  1719,  1722,  1724,  1726,
    1731,  1737,  1740
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
      -1,   121,    -1,   144,    -1,   144,   120,    -1,   121,   120,
      -1,   100,   121,   120,    -1,   100,   121,    -1,   123,    -1,
     123,    87,    -1,    87,    -1,   157,   123,    -1,   157,    -1,
     166,   123,    87,    -1,   166,    87,    -1,    87,   157,    -1,
      87,   166,    -1,   123,   122,    -1,   122,    -1,    26,    -1,
      27,    -1,    54,    -1,    28,    -1,    29,    -1,    30,    -1,
      31,    -1,    32,    -1,    33,    -1,    34,    -1,    35,    -1,
      36,    -1,    57,    -1,    58,    -1,    59,    -1,    52,   192,
      -1,    50,   192,    -1,    69,    -1,   130,    -1,   131,    -1,
     132,    -1,    71,    -1,    72,    -1,    51,   194,    -1,    51,
      -1,   134,    -1,     4,   136,    -1,    87,   137,    -1,   135,
      87,   137,    -1,   137,    -1,   137,   135,    -1,   138,    -1,
     138,    47,    44,    -1,    44,    -1,    44,   139,    -1,   101,
      44,    -1,   139,   101,    44,    -1,    87,    44,    -1,   140,
      87,    44,    -1,    53,    44,    -1,    53,    44,   140,    -1,
      25,    44,    -1,    25,    44,   140,    -1,   146,    -1,   147,
      -1,   148,    -1,   149,    -1,   152,    -1,   113,    -1,    15,
     198,    -1,    15,    44,    -1,    15,   125,    44,    -1,    15,
      13,    44,    -1,    15,    12,    44,    -1,    15,    13,    12,
      44,    -1,    15,    12,    13,    44,    -1,    15,    13,   125,
      44,    -1,    15,    12,   125,    44,    -1,    15,    13,    12,
     125,    44,    -1,    15,    12,    13,   125,    44,    -1,    15,
     125,    13,    44,    -1,    15,   125,    12,    44,    -1,    15,
     125,    13,    12,    44,    -1,    15,   125,    12,    13,    44,
      -1,    15,    13,   125,    12,    44,    -1,    15,    12,   125,
      13,    44,    -1,    18,   157,    98,   156,    -1,   145,    18,
     157,    98,   156,    -1,    17,   157,    98,   156,    -1,    17,
     157,    98,   156,   145,    -1,    17,   157,    98,   156,    16,
      98,   156,    -1,    17,   157,    98,   156,   145,    16,    98,
     156,    -1,    19,   157,    98,   156,    -1,    19,   157,    98,
     156,    16,    98,   156,    -1,    20,   192,    21,   194,    98,
     156,    -1,    20,   192,    21,   194,    98,   156,    16,    98,
     156,    -1,    22,    98,   156,   150,    -1,    22,    98,   156,
     150,    16,    98,   156,    -1,    22,    98,   156,   150,    23,
      98,   156,    -1,    22,    98,   156,    23,    98,   156,    -1,
     154,    98,   156,    -1,   150,   154,    98,   156,    -1,    87,
     153,    -1,   151,    87,   153,    -1,    46,   153,    98,   156,
      -1,    46,   153,   151,    98,   156,    -1,   157,    -1,   157,
      47,   168,    -1,    68,    -1,    68,   157,    -1,    68,   157,
      47,    44,    -1,   116,    -1,   155,   116,    -1,   155,     6,
      -1,     6,    -1,   159,    -1,   159,    17,   159,    16,   157,
      -1,     8,   161,    -1,   158,     8,   161,    -1,   161,    -1,
     161,   158,    -1,     9,   162,    -1,   160,     9,   162,    -1,
     162,    -1,   162,   160,    -1,    10,   162,    -1,   164,    -1,
     165,   168,    -1,   163,   165,   168,    -1,   168,    -1,   168,
     163,    -1,    90,    -1,    91,    -1,    49,    -1,    67,    -1,
      66,    -1,    37,    -1,    11,    -1,    21,    -1,    10,    21,
      -1,    64,    -1,    64,    10,    -1,    94,   168,    -1,   102,
     170,    -1,   167,   102,   170,    -1,   170,    -1,   170,   167,
      -1,   103,   172,    -1,   169,   103,   172,    -1,   172,    -1,
     172,   169,    -1,   104,   174,    -1,   171,   104,   174,    -1,
     174,    -1,   174,   171,    -1,    55,   176,    -1,    61,   176,
      -1,   173,    55,   176,    -1,   173,    61,   176,    -1,   176,
      -1,   176,   173,    -1,    92,   178,    -1,    93,   178,    -1,
     175,    92,   178,    -1,   175,    93,   178,    -1,   178,    -1,
     178,   175,    -1,    94,   179,    -1,    95,   179,    -1,    96,
     179,    -1,    65,   179,    -1,   177,    94,   179,    -1,   177,
      95,   179,    -1,   177,    96,   179,    -1,   177,    65,   179,
      -1,   179,    -1,   179,   177,    -1,    92,   179,    -1,    93,
     179,    -1,   105,   179,    -1,   181,    -1,   186,    -1,   180,
     186,    -1,   183,    -1,   183,   180,    -1,   183,   180,    40,
     179,    -1,   183,    40,   179,    -1,    62,    -1,   182,    62,
      -1,    88,    99,    -1,    88,   185,    99,    -1,    89,   106,
      -1,   107,   108,    -1,    89,   185,   106,    -1,   107,   197,
     108,    -1,    44,    -1,    44,    88,    99,    -1,    44,    88,
     202,    99,    -1,    44,    89,   188,   106,    -1,    41,    -1,
      43,    -1,    42,    -1,    70,    -1,   182,    -1,    45,    -1,
      63,    -1,    39,    -1,    38,    -1,    87,   157,    -1,    87,
     166,    -1,   184,    87,   157,    -1,   184,    87,   166,    -1,
     157,   208,    -1,   157,    -1,   157,   184,    -1,   157,    87,
      -1,   157,   184,    87,    -1,   166,   208,    -1,   166,    -1,
     166,   184,    -1,   166,    87,    -1,   166,   184,    87,    -1,
     101,    44,    -1,   101,    44,    88,    99,    -1,   101,    44,
      88,   202,    99,    -1,   101,    44,    89,   188,   106,    -1,
      87,   189,    -1,   187,    87,   189,    -1,   189,    -1,   189,
     187,    -1,   189,    87,    -1,   189,   187,    87,    -1,   157,
      -1,    98,    -1,   157,    98,    -1,   157,    98,   157,    -1,
     157,    98,   190,    -1,   157,    98,   157,   190,    -1,    98,
     157,    -1,    98,   190,    -1,    98,   157,   190,    -1,    98,
      -1,    98,   157,    -1,    87,   168,    -1,    87,   166,    -1,
     191,    87,   168,    -1,   191,    87,   166,    -1,   168,    -1,
     168,   191,    -1,   166,    -1,   166,   191,    -1,   168,    87,
      -1,   168,   191,    87,    -1,   166,    87,    -1,   166,   191,
      87,    -1,    87,   157,    -1,    87,   157,   193,    -1,   157,
      -1,   157,   193,    -1,   157,    87,    -1,   157,   193,    87,
      -1,    87,   157,    98,   157,    -1,   195,    87,   157,    98,
     157,    -1,    87,   157,    -1,   196,    87,   157,    -1,   157,
      98,   157,   208,    -1,   157,    98,   157,    -1,   157,    98,
     157,    87,    -1,   157,    98,   157,   195,    -1,   157,    98,
     157,   195,    87,    -1,   157,   208,    -1,   157,    -1,   157,
      87,    -1,   157,   196,    -1,   157,   196,    87,    -1,   199,
     156,    -1,     5,    44,    98,    -1,   125,     5,    44,    98,
      -1,    13,     5,    44,    98,    -1,    12,     5,    44,    98,
      -1,    13,    12,     5,    44,    98,    -1,    12,    13,     5,
      44,    98,    -1,    12,   125,     5,    44,    98,    -1,    13,
     125,     5,    44,    98,    -1,    13,    12,   125,     5,    44,
      98,    -1,    12,    13,   125,     5,    44,    98,    -1,   125,
      13,     5,    44,    98,    -1,   125,    12,     5,    44,    98,
      -1,   125,    13,    12,     5,    44,    98,    -1,   125,    12,
      13,     5,    44,    98,    -1,    13,   125,    12,     5,    44,
      98,    -1,    12,   125,    13,     5,    44,    98,    -1,     5,
      44,    88,    99,    98,    -1,   125,     5,    44,    88,    99,
      98,    -1,    13,     5,    44,    88,    99,    98,    -1,    12,
       5,    44,    88,    99,    98,    -1,    13,    12,     5,    44,
      88,    99,    98,    -1,    12,    13,     5,    44,    88,    99,
      98,    -1,    13,   125,     5,    44,    88,    99,    98,    -1,
      12,   125,     5,    44,    88,    99,    98,    -1,    13,    12,
     125,     5,    44,    88,    99,    98,    -1,    12,    13,   125,
       5,    44,    88,    99,    98,    -1,   125,    13,     5,    44,
      88,    99,    98,    -1,   125,    12,     5,    44,    88,    99,
      98,    -1,   125,    13,    12,     5,    44,    88,    99,    98,
      -1,   125,    12,    13,     5,    44,    88,    99,    98,    -1,
      13,   125,    12,     5,    44,    88,    99,    98,    -1,    12,
     125,    13,     5,    44,    88,    99,    98,    -1,     5,    44,
      88,   136,    99,    98,    -1,   125,     5,    44,    88,   136,
      99,    98,    -1,    13,     5,    44,    88,   136,    99,    98,
      -1,    12,     5,    44,    88,   136,    99,    98,    -1,    13,
      12,     5,    44,    88,   136,    99,    98,    -1,    12,    13,
       5,    44,    88,   136,    99,    98,    -1,    13,   125,     5,
      44,    88,   136,    99,    98,    -1,    12,   125,     5,    44,
      88,   136,    99,    98,    -1,    13,    12,   125,     5,    44,
      88,   136,    99,    98,    -1,    12,    13,   125,     5,    44,
      88,   136,    99,    98,    -1,   125,    13,     5,    44,    88,
     136,    99,    98,    -1,   125,    12,     5,    44,    88,   136,
      99,    98,    -1,   125,    13,    12,     5,    44,    88,   136,
      99,    98,    -1,   125,    12,    13,     5,    44,    88,   136,
      99,    98,    -1,    13,   125,    12,     5,    44,    88,   136,
      99,    98,    -1,    12,   125,    13,     5,    44,    88,   136,
      99,    98,    -1,   206,    87,    -1,   200,   206,    87,    -1,
      87,   206,    -1,   201,    87,   206,    -1,   206,    -1,   205,
      -1,   206,    87,    -1,    94,   157,    -1,    94,   157,    87,
      40,   157,    -1,    94,   157,   201,    -1,    94,   157,   203,
      -1,    94,   157,   201,   203,    -1,    94,   157,   201,    87,
      40,   157,    -1,    40,   157,    -1,   200,   206,    -1,   200,
     205,    -1,   200,   204,   205,    -1,   200,   206,    87,    -1,
     200,    94,   157,    -1,   200,    94,   157,    87,    40,   157,
      -1,   200,    94,   157,   201,    -1,   200,    94,   157,   203,
      -1,   200,    94,   157,   201,   203,    -1,   200,    94,   157,
     201,    87,    40,   157,    -1,   200,    40,   157,    -1,    87,
     205,    -1,   203,    87,   205,    -1,   205,    87,    -1,   204,
     205,    87,    -1,   157,   100,   157,    -1,   157,    -1,   157,
     208,    -1,   208,    -1,   209,    -1,    20,   192,    21,   159,
      -1,    20,   192,    21,   159,   207,    -1,    17,   159,    -1,
      17,   159,   207,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   135,   135,   150,   151,   155,   159,   176,   184,   185,
     186,   195,   203,   204,   205,   213,   221,   222,   223,   231,
     239,   247,   248,   255,   263,   264,   265,   273,   280,   281,
     282,   290,   298,   299,   300,   308,   315,   316,   317,   324,
     333,   334,   337,   340,   342,   346,   350,   354,   358,   362,
     366,   370,   371,   377,   378,   379,   384,   399,   426,   427,
     430,   431,   432,   433,   434,   438,   439,   442,   443,   446,
     447,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   463,   464,   465,   467,   471,   477,   483,
     487,   491,   497,   503,   509,   513,   520,   523,   527,   528,
     530,   537,   547,   548,   551,   575,   578,   582,   588,   594,
     604,   611,   620,   621,   624,   628,   629,   633,   637,   638,
     642,   647,   655,   664,   672,   680,   688,   696,   704,   712,
     720,   728,   736,   744,   752,   760,   768,   777,   781,   789,
     793,   797,   802,   811,   815,   823,   827,   835,   839,   847,
     855,   862,   868,   880,   881,   884,   885,   888,   889,   892,
     896,   900,   903,   906,   919,   923,   926,   927,   930,   931,
     934,   935,   938,   939,   942,   943,   946,   947,   950,   954,
     960,   961,   967,   971,   972,   973,   974,   975,   976,   977,
     978,   979,   980,   983,   986,   987,   989,   993,   996,   997,
    1000,  1001,  1004,  1005,  1008,  1009,  1012,  1013,  1014,  1015,
    1018,  1022,  1025,  1032,  1043,  1049,  1057,  1061,  1071,  1076,
    1081,  1086,  1087,  1092,  1097,  1101,  1104,  1105,  1111,  1115,
    1122,  1123,  1175,  1178,  1183,  1188,  1195,  1196,  1199,  1200,
    1203,  1204,  1205,  1211,  1212,  1217,  1218,  1222,  1227,  1232,
    1238,  1246,  1251,  1256,  1257,  1261,  1262,  1263,  1266,  1271,
    1275,  1276,  1279,  1282,  1283,  1286,  1290,  1291,  1294,  1295,
    1296,  1297,  1298,  1301,  1309,  1313,  1317,  1324,  1325,  1328,
    1329,  1330,  1331,  1334,  1335,  1336,  1337,  1338,  1339,  1340,
    1341,  1342,  1345,  1346,  1349,  1350,  1351,  1352,  1355,  1356,
    1357,  1358,  1359,  1360,  1361,  1362,  1365,  1366,  1369,  1370,
    1371,  1372,  1375,  1376,  1378,  1379,  1382,  1383,  1384,  1385,
    1386,  1387,  1388,  1389,  1390,  1391,  1393,  1399,  1407,  1414,
    1421,  1428,  1435,  1442,  1449,  1456,  1463,  1470,  1477,  1484,
    1491,  1498,  1505,  1512,  1520,  1527,  1534,  1541,  1548,  1555,
    1562,  1569,  1576,  1583,  1590,  1597,  1604,  1611,  1618,  1625,
    1632,  1639,  1646,  1653,  1660,  1667,  1674,  1681,  1688,  1695,
    1696,  1697,  1704,  1711,  1718,  1728,  1729,  1734,  1735,  1740,
    1741,  1743,  1745,  1753,  1766,  1775,  1784,  1792,  1804,  1811,
    1814,  1815,  1816,  1818,  1826,  1839,  1847,  1855,  1863,  1876,
    1886,  1887,  1890,  1891,  1894,  1896,  1897,  1901,  1902,  1905,
    1906,  1909,  1910
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
     118,   118,   118,   119,   119,   119,   119,   119,   120,   120,
     121,   121,   121,   121,   121,   121,   121,   122,   122,   123,
     123,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   125,   125,   125,   126,   127,   128,   129,
     129,   129,   130,   131,   132,   132,   133,   134,   135,   135,
     136,   136,   137,   137,   138,   138,   139,   139,   140,   140,
     141,   141,   142,   142,   143,   143,   143,   143,   143,   143,
     143,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   145,   145,   146,
     146,   146,   146,   147,   147,   148,   148,   149,   149,   149,
     149,   150,   150,   151,   151,   152,   152,   153,   153,   154,
     154,   154,   155,   155,   156,   156,   157,   157,   158,   158,
     159,   159,   160,   160,   161,   161,   162,   162,   163,   163,
     164,   164,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   166,   167,   167,   168,   168,   169,   169,
     170,   170,   171,   171,   172,   172,   173,   173,   173,   173,
     174,   174,   175,   175,   175,   175,   176,   176,   177,   177,
     177,   177,   177,   177,   177,   177,   178,   178,   179,   179,
     179,   179,   180,   180,   181,   181,   181,   181,   182,   182,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   184,
     184,   184,   184,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   186,   186,   186,   186,   187,   187,   188,
     188,   188,   188,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   190,   190,   191,   191,   191,   191,   192,   192,
     192,   192,   192,   192,   192,   192,   193,   193,   194,   194,
     194,   194,   195,   195,   196,   196,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   198,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   200,   200,   201,   201,   202,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     203,   203,   204,   204,   205,   206,   206,   207,   207,   208,
     208,   209,   209
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     3,     1,     2,     1,     2,     6,     7,
       4,     5,     7,     7,     5,     5,     8,     8,     6,     6,
       8,     8,     6,     6,     9,     9,     7,     7,     8,     8,
       6,     6,     9,     9,     7,     7,     9,     9,     7,     7,
       3,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     2,     2,     3,     2,
       1,     2,     1,     2,     1,     3,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     2,     2,     3,
       1,     2,     1,     3,     1,     2,     2,     3,     2,     3,
       2,     3,     2,     3,     1,     1,     1,     1,     1,     1,
       2,     2,     3,     3,     3,     4,     4,     4,     4,     5,
       5,     4,     4,     5,     5,     5,     5,     4,     5,     4,
       5,     7,     8,     4,     7,     6,     9,     4,     7,     7,
       6,     3,     4,     2,     3,     4,     5,     1,     3,     1,
       2,     4,     1,     2,     2,     1,     1,     5,     2,     3,
       1,     2,     2,     3,     1,     2,     2,     1,     2,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     2,     2,     2,     3,     1,     2,     2,     3,
       1,     2,     2,     3,     1,     2,     2,     2,     3,     3,
       1,     2,     2,     2,     3,     3,     1,     2,     2,     2,
       2,     2,     3,     3,     3,     3,     1,     2,     2,     2,
       2,     1,     1,     2,     1,     2,     4,     3,     1,     2,
       2,     3,     2,     2,     3,     3,     1,     3,     4,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     3,     3,     2,     1,     2,     2,     3,     2,     1,
       2,     2,     3,     2,     4,     5,     5,     2,     3,     1,
       2,     2,     3,     1,     1,     2,     3,     3,     4,     2,
       2,     3,     1,     2,     2,     2,     3,     3,     1,     2,
       1,     2,     2,     3,     2,     3,     2,     3,     1,     2,
       2,     3,     4,     5,     2,     3,     4,     3,     4,     4,
       5,     2,     1,     2,     2,     3,     2,     3,     4,     4,
       4,     5,     5,     5,     5,     6,     6,     5,     5,     6,
       6,     6,     6,     5,     6,     6,     6,     7,     7,     7,
       7,     8,     8,     7,     7,     8,     8,     8,     8,     6,
       7,     7,     7,     8,     8,     8,     8,     9,     9,     8,
       8,     9,     9,     9,     9,     2,     3,     2,     3,     1,
       1,     2,     2,     5,     3,     3,     4,     6,     2,     2,
       2,     3,     3,     3,     6,     4,     4,     5,     7,     3,
       2,     3,     2,     3,     3,     1,     2,     1,     1,     4,
       5,     2,     3
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
       0,     0,     0
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
       0,     0,     0
};

/* YYDEFACT[S] -- default reduction number in state S.  Performed when
   YYTABLE doesn't specify something else to do.  Zero means the default
   is an error.  */
static const unsigned short int yydefact[] =
{
       0,     0,     0,     0,     0,    83,    84,    85,     0,     2,
       4,     0,     0,    96,     6,     0,   104,    97,   100,   102,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     0,
       0,     0,     5,   165,     0,     0,     0,     0,     0,     0,
       0,   258,   257,   250,   252,   251,   246,   255,     0,     0,
      95,     0,     0,   238,   256,    88,   253,    92,    93,    62,
       0,     0,     0,     0,     0,     0,     0,   119,     0,   162,
      42,     0,    45,    54,    70,    60,    52,    46,    47,    48,
      89,    90,    91,    49,    50,    51,    43,    55,   114,   115,
     116,   117,   118,     0,   326,    64,   166,   170,   174,   177,
       0,   180,   196,   200,   204,   210,   216,   226,   231,   254,
     234,     0,   105,     0,   101,     0,     0,   327,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,   176,     0,     0,   121,     0,   120,
       0,     0,   300,   298,     0,     0,   112,     0,     0,     0,
     157,    87,   308,    94,    86,   110,    67,    68,   240,   264,
     269,     0,   242,     0,   228,   229,   193,   230,   243,   322,
       0,     7,    44,    71,    72,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    73,     0,    57,     0,    61,    69,
      56,   164,   163,     0,    63,     0,     0,   171,     0,   175,
      66,     0,     0,   188,   189,   187,   184,   191,   186,   185,
     182,   183,   181,     0,     0,   197,     0,   201,     0,   205,
       0,     0,   211,     0,     0,   217,     0,     0,     0,     0,
     227,   239,     0,     0,   235,   232,   106,     0,    98,     0,
     103,     0,     0,     0,   330,     0,     0,     0,     0,     0,
     329,     0,     0,     0,     0,     0,   328,     0,     0,     0,
       0,     0,   124,     0,     0,   123,     0,     0,     0,     0,
       0,   122,     0,     0,   304,   301,   302,   299,     0,     0,
       0,   113,     0,     0,   247,   405,     0,     0,   380,   379,
     284,   283,     0,   279,     0,     0,     0,     0,   310,   309,
     111,     0,   266,   265,   263,   271,   270,   268,   241,   244,
     323,     0,   324,   321,   245,    59,    53,     0,   168,     0,
     172,     0,    65,   190,   192,     0,   178,   194,     0,   198,
       0,   202,     0,   206,   207,     0,     0,   212,   213,     0,
       0,   221,   218,   219,   220,     0,     0,     0,     0,   237,
     273,     0,   233,   107,    99,   343,     0,     0,     0,     0,
     332,     0,     0,   333,     0,     0,     0,     0,   331,     0,
       0,   334,     0,     0,     0,     0,   338,     0,     0,   337,
       0,   126,     0,     0,     0,   128,   125,     0,     0,     0,
     127,    41,     0,     0,    10,     0,   132,     0,   131,     0,
     139,   143,   295,   294,   305,   303,     0,     0,   159,   147,
       0,   108,     0,   388,   382,     0,   406,     0,     0,     0,
     390,   389,   248,   375,   292,   289,   290,   285,   249,   281,
     280,   153,   155,     0,     0,   158,   306,   311,     0,   259,
     260,   267,   272,   314,   317,   325,    58,     0,   169,   173,
     179,   195,   199,   203,   208,   209,   214,   215,   225,   222,
     223,   224,     0,     0,   236,   359,   346,     0,     0,     0,
       0,   336,     0,     0,     0,   342,   345,     0,     0,     0,
       0,   335,     0,     0,     0,   341,   344,     0,     0,     0,
       0,   340,     0,     0,     0,   339,     0,   130,     0,    15,
     136,     0,     0,   129,     0,    14,   135,     0,    40,     0,
     134,     0,   133,     0,     0,    11,     0,     0,   140,     0,
     297,   296,     0,     0,   160,     0,     0,     0,     0,   109,
       0,   384,   385,   404,   399,   393,     0,   391,   402,   376,
     293,   291,   286,   287,   277,   282,   154,   156,   307,     0,
     261,   262,   318,   319,   316,   315,   167,   274,     0,     0,
     362,   348,     0,     0,     0,   350,     0,     0,     0,   361,
     347,     0,     0,     0,   349,     0,     0,     0,   360,   354,
       0,     0,     0,   353,     0,     0,     0,     0,    19,     0,
       0,     0,     0,    23,     0,    18,     0,     0,     0,     0,
      22,     8,     0,     0,    31,     0,     0,    30,     0,     0,
       0,     0,     0,     0,   145,   150,     0,     0,     0,     0,
     151,     0,   400,   377,     0,   386,     0,     0,   395,   396,
     403,   288,   278,   409,     0,   320,   275,   276,   364,   352,
       0,   366,   358,     0,   363,   351,     0,   365,   357,     0,
     370,   356,     0,   369,   355,     0,     0,     0,    27,    13,
       0,    39,     0,     0,     0,    26,    12,     0,    38,     0,
       0,    35,     0,     0,    34,     0,     9,   141,     0,     0,
       0,   144,     0,   161,   148,   149,   152,   383,     0,   378,
     401,     0,     0,   397,     0,   410,   407,   408,     0,     0,
     368,   374,   367,   373,   372,   371,    17,     0,     0,    20,
      16,     0,     0,    21,     0,    29,     0,    28,   137,   142,
       0,     0,   387,   394,     0,   411,   312,     0,    25,    37,
      24,    36,    33,    32,   138,   146,   398,   412,   313
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
#define YYPACT_NINF -500
static const short int yypact[] =
{
     181,    11,    39,   306,   224,  -500,  -500,  -500,    90,  -500,
    -500,   187,     6,  -500,   296,   654,    13,  -500,   100,   148,
     260,   167,   221,    63,   186,   328,   313,  -500,   209,   115,
     363,   296,  -500,  -500,  1265,   302,  1265,  1265,  1299,   126,
     215,  -500,  -500,  -500,  -500,  -500,   196,  -500,  1265,  1299,
    1265,  1299,   255,  -500,  -500,  -500,  -500,  -500,  -500,  1045,
     897,   935,  1335,  1335,  1335,  1335,   397,  -500,   654,  -500,
    -500,   220,  -500,   492,  -500,   243,  -500,  -500,  -500,  -500,
    -500,  -500,  -500,  -500,  -500,  -500,  -500,   252,  -500,  -500,
    -500,  -500,  -500,   745,  -500,   256,   349,   372,   362,  -500,
     297,    52,   288,   318,   319,   161,   337,   282,  -500,   366,
       9,   381,   371,    11,   350,   420,    16,  -500,   336,   448,
     482,   466,   486,   365,   467,   510,   473,   531,   367,   493,
     544,   506,   547,  -500,  -500,   292,   357,   465,    62,  -500,
     456,   457,   472,   474,   539,   654,   475,   783,  1081,   -10,
     517,  -500,   478,  -500,  -500,   475,  -500,  -500,  -500,    87,
      88,   469,  -500,   460,  -500,  -500,  -500,  -500,  -500,    34,
     463,  -500,  -500,  -500,  -500,  -500,  -500,  -500,  -500,  -500,
    -500,  -500,  -500,  -500,  -500,   973,  -500,  1265,  1045,  -500,
    -500,  -500,  -500,  1045,   256,  1265,  1265,   564,  1265,   565,
    1045,   488,   559,  -500,  -500,  -500,  -500,   571,  -500,  -500,
    -500,  -500,    52,  1335,  1335,   480,  1335,   481,  1335,   479,
    1335,  1335,   180,  1335,  1335,   405,  1335,  1335,  1335,  1335,
     379,  -500,  1335,   542,    21,  -500,  -500,   543,  -500,    11,
    -500,   491,   494,    25,  -500,   373,   550,   378,   551,    27,
    -500,   415,   552,   441,   553,   119,  -500,   442,   554,   443,
     556,   399,   465,    65,   449,   465,   326,   821,    32,   244,
     387,   465,   654,   654,  1299,   514,  1299,   515,  1265,    49,
     560,   516,  1265,  1265,  -500,    23,  1009,   507,  -500,   518,
    1119,   509,   502,   522,  1265,   654,    -1,  1335,  1265,   523,
     516,  1299,  1045,   524,  -500,  1045,   525,  -500,  -500,  -500,
    1265,  1265,   526,  -500,  -500,   252,  -500,   598,  -500,  1265,
    -500,  1265,  1045,  -500,  -500,  1335,  -500,  -500,  1335,  -500,
    1335,  -500,  1335,  -500,  -500,  1335,  1335,  -500,  -500,  1335,
    1335,  -500,  -500,  -500,  -500,  1335,  1335,  1335,  1335,  -500,
     391,  1335,  -500,  -500,  -500,  -500,   519,   520,   521,   121,
    -500,   444,   124,  -500,   445,   527,   528,   138,  -500,   446,
     144,  -500,   447,   532,   530,   145,  -500,   450,   146,  -500,
     459,   465,   173,    33,   216,   465,   465,   266,    35,   323,
     465,  -500,   533,  1265,  -500,   329,   465,   369,   465,    41,
     254,   599,  -500,  -500,  1299,  1299,   535,   537,  1265,   321,
     538,  -500,   572,  -500,   536,  1265,  -500,  1265,  1265,  1265,
     555,   557,  -500,   541,  1265,   545,  -500,  1119,  -500,  1081,
     558,  -500,  -500,  1265,   654,  -500,   561,  -500,   601,  -500,
    -500,  1045,  1045,  -500,    93,  1265,  -500,  1265,  -500,  -500,
    -500,  -500,  -500,  -500,  -500,  -500,  -500,  -500,  -500,  -500,
    -500,  -500,   859,  1081,  -500,  -500,  -500,   548,   549,   562,
     152,  -500,   567,   568,   153,  -500,  -500,   570,   574,   576,
     157,  -500,   579,   583,   162,  -500,  -500,   580,   585,   586,
     165,  -500,   588,   590,   169,  -500,    56,   465,  1265,  -500,
     465,    57,    58,   465,  1265,  -500,   465,    60,  -500,   589,
     465,    61,   465,    68,  1265,  -500,   592,  1265,   284,   596,
    -500,  -500,   654,   654,   594,   603,   604,   605,   654,  -500,
     407,   563,   566,  -500,  -500,   597,   608,   622,  -500,   611,
    -500,  -500,   545,  -500,  -500,  1081,  -500,  -500,  -500,  1265,
    -500,  -500,  1265,   624,  -500,  -500,  -500,  -500,   613,   513,
    -500,  -500,   615,   616,   619,  -500,   617,   621,   623,  -500,
    -500,   629,   630,   631,  -500,   633,   634,   635,  -500,  -500,
     637,   638,   639,  -500,   641,   642,   645,  1265,  -500,    69,
     647,    71,  1265,  -500,  1265,  -500,    72,   652,    74,  1265,
    -500,  -500,    75,  1265,  -500,    78,  1265,  -500,   655,   654,
     656,   658,  1265,   654,   610,  -500,   607,   654,   654,   654,
    -500,  1265,  -500,  -500,  1157,   566,  1265,  1193,   646,   566,
    -500,  -500,  -500,   383,   659,  1265,  -500,  -500,  -500,  -500,
     660,  -500,  -500,   665,  -500,  -500,   668,  -500,  -500,   670,
    -500,  -500,   671,  -500,  -500,   673,   674,  1265,  -500,  -500,
    1265,  -500,   675,   676,  1265,  -500,  -500,  1265,  -500,   677,
    1265,  -500,   678,  1265,  -500,   679,  -500,  -500,   654,   654,
     680,  -500,   681,  -500,  -500,  -500,  -500,  -500,  1265,  -500,
    -500,  1265,  1229,   566,  1265,  -500,  -500,  -500,  1265,   682,
    -500,  -500,  -500,  -500,  -500,  -500,  -500,   683,   684,  -500,
    -500,   687,   694,  -500,   696,  -500,   701,  -500,  -500,  -500,
     654,   654,  -500,  -500,  1265,   383,  -500,  1265,  -500,  -500,
    -500,  -500,  -500,  -500,  -500,  -500,  -500,  -500,  -500
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -500,  -500,  -500,    73,  -500,  -500,  -171,   573,  -500,  -500,
    -500,   -81,   464,   -67,   112,  -500,    12,  -500,  -500,  -500,
    -500,  -500,  -500,  -500,   657,  -500,  -500,   -72,   -86,  -500,
    -500,   499,  -500,  -500,  -500,  -500,  -500,  -500,  -500,  -500,
    -500,  -500,  -500,  -500,  -287,   250,  -500,   -40,   -36,  -500,
    -193,  -500,  -178,   -17,  -500,  -500,   451,    -9,  -500,    15,
    -500,  -188,  -500,  -185,  -500,  -170,  -500,  -175,  -500,  -203,
     -24,  -500,  -500,  -500,  -500,   569,   609,   487,  -500,   257,
    -407,  -392,   661,   -38,   301,  -129,  -500,  -500,  -500,   717,
    -500,  -500,   265,  -264,  -499,  -500,  -142,  -282,    76,  -150,
    -500
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -393
static const short int yytable[] =
{
     140,   141,   317,   392,   421,   288,   190,   431,   189,   304,
     307,   151,   150,   154,   152,    23,    26,   134,   318,   313,
     337,   338,   544,   156,   159,   159,   327,   238,   171,   142,
     169,   329,   625,   541,   120,   543,   629,   125,   164,   165,
     142,   167,   142,   301,   242,   333,   334,   138,   331,   232,
     157,   160,   160,   143,   301,    16,   393,   498,   316,   504,
      16,   351,   202,   203,   143,   514,   143,    28,   121,    16,
     121,    16,   407,   204,   269,   270,   122,   294,   384,   166,
     587,   592,   594,    20,   599,   603,   433,    32,   295,   205,
      27,   383,   606,   657,   388,   660,   664,   434,   667,   670,
     399,   206,   673,    31,   133,   279,   271,   301,   301,   385,
     233,   285,   291,   301,   111,   241,   207,   408,   208,   209,
     129,   310,   233,   415,   357,   288,   365,   189,   130,   693,
     394,   499,   311,   505,   189,   416,   456,   457,   632,   515,
     451,   448,   210,   211,   420,   452,   546,   263,   266,   406,
     631,   152,   156,   354,   588,   593,   595,   156,   600,   604,
     454,   455,   453,    16,   156,    16,   607,   658,    16,   661,
     665,   358,   668,   671,   302,   305,   674,   366,   246,   157,
     552,   320,    16,   374,   157,     1,     2,   113,    16,    16,
      16,   157,    28,     3,     4,   115,    16,    16,   558,    29,
      30,    16,   341,   342,   343,   344,    16,   194,   349,    16,
     496,   118,   201,    16,   501,   502,   220,   497,   373,   507,
     468,   248,   221,   472,   145,   511,   119,   513,   326,    24,
     123,   285,   400,   401,   446,   335,    25,   478,     5,     6,
       7,   336,   152,   482,   488,   492,   413,   414,   623,   129,
     285,   563,   567,   128,   425,   432,   572,   395,   150,   146,
     500,   576,   436,   438,   581,   402,   439,   402,   585,   439,
     516,   252,   517,   382,   443,   444,   387,   537,     5,     6,
       7,     5,     6,     7,   147,   148,   156,   469,   396,   403,
     473,   403,   142,   440,   554,   479,   440,    21,   483,   155,
     611,     2,   612,   489,   449,   261,   493,     2,     3,     4,
     503,    21,   435,   157,   135,   136,   143,   172,   126,    22,
     288,   458,   459,   460,   461,   127,   589,   464,   254,   591,
     188,   126,   596,   124,   258,   598,   262,   525,   389,   602,
     450,   605,   689,   193,   526,   623,   137,   226,   116,     5,
       6,     7,   185,     5,     6,     7,   633,   509,   117,     5,
       6,     7,    24,     5,     6,     7,   195,   506,   131,   264,
     390,   198,   524,   510,   260,   132,   227,   228,   229,   533,
     196,   534,   535,   536,   200,     5,     6,     7,   540,   408,
     214,   542,   131,   291,   547,   520,   520,   150,   564,   397,
     694,   265,   568,   301,   119,   550,   550,    34,   573,   555,
     689,   556,   577,   512,     5,     6,     7,    34,   582,   521,
     521,   216,   586,   218,   243,   236,   285,   291,   231,   223,
     224,   398,   551,   551,   244,    41,    42,   239,    43,    44,
      45,    46,    47,   381,   345,    41,    42,   621,    43,    44,
      45,    46,    47,   249,   124,   255,     5,     6,     7,    53,
      54,   359,   590,   250,   240,   256,   362,    56,   597,    53,
      54,   360,   237,   346,   347,   348,   363,    56,   608,   462,
     463,   610,   614,   615,   690,    60,    61,   246,   620,    62,
      63,   248,   245,   386,   285,    60,    61,   339,   340,    62,
      63,   725,    65,   367,    66,   168,     5,     6,     7,   291,
     247,   251,    65,   368,    66,   252,   634,   253,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   370,
     375,   378,   470,   474,   480,   484,   254,   257,   490,   371,
     376,   379,   471,   475,   481,   485,   184,   494,   491,   258,
     259,   656,   260,   267,   272,   273,   662,   495,   663,   274,
     278,   276,   280,   669,   297,   298,   309,   672,   308,   677,
     675,   314,   319,   681,   321,   322,   680,   684,   685,   686,
     323,   324,   328,   332,   330,   687,   350,   353,   285,   355,
     536,   285,   185,   356,   361,   364,   369,   372,   377,   699,
     380,   404,   405,   412,   411,   423,   422,   427,   428,   429,
     437,   441,   442,   445,   447,   519,   529,   465,   466,   637,
     467,   707,   549,   530,   708,   476,   682,   477,   711,   487,
     486,   712,   508,   522,   714,   523,   528,   716,   718,   719,
    -381,   616,   538,   424,   539,   545,   560,   561,  -393,   315,
     624,   683,   722,   626,   300,   723,   285,    12,     1,   527,
      33,   562,   726,   325,    34,   565,   192,   566,   569,    35,
     163,    36,   570,    37,    38,   571,    39,   574,   578,    40,
     734,   735,   575,   579,   627,   580,   583,   601,   736,   584,
     609,   738,    41,    42,   613,    43,    44,    45,    46,    47,
      48,   617,   618,   619,    49,    50,    51,    52,   415,   630,
    -392,   635,   636,   638,   639,   641,    53,    54,   640,   642,
     559,   352,   643,    55,    56,    57,    58,   644,   645,   306,
     646,   647,   648,   692,   649,   650,   651,   548,   652,   653,
     654,    59,    60,    61,   655,   659,    62,    63,    64,     1,
     666,   191,   139,   676,   678,    34,   679,   698,   700,    65,
      35,    66,    36,   701,    37,    38,   702,    39,   703,   704,
      40,   705,   706,   709,   710,   713,   715,   717,   720,   721,
     727,   728,   729,    41,    42,   730,    43,    44,    45,    46,
      47,    48,   731,    34,   732,    49,    50,    51,    52,   733,
     628,   737,     0,     0,   277,     0,     0,    53,    54,     0,
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
      36,    37,   195,   267,   286,   147,    87,   294,    75,   159,
     160,    49,    48,    51,    50,     3,     4,    34,   196,   169,
     223,   224,   429,    59,    60,    61,   214,   113,    68,    38,
      66,   216,   531,   425,    22,   427,   535,    25,    62,    63,
      49,    65,    51,    20,   116,   220,   221,    35,   218,    40,
      59,    60,    61,    38,    20,    44,    24,    24,   187,    24,
      44,    40,    10,    11,    49,    24,    51,     5,     5,    44,
       5,    44,    23,    21,    12,    13,    13,    87,    13,    64,
      24,    24,    24,    44,    24,    24,    87,    14,    98,    37,
       0,   262,    24,    24,   265,    24,    24,    98,    24,    24,
     271,    49,    24,    97,    31,   145,    44,    20,    20,    44,
     101,   147,   148,    20,   101,    99,    64,    68,    66,    67,
       5,    87,   101,   100,    99,   267,    99,   194,    13,   628,
      98,    98,    98,    98,   201,   285,   339,   340,   545,    98,
     328,   319,    90,    91,   286,   330,   433,   135,   136,   278,
     542,   187,   188,   239,    98,    98,    98,   193,    98,    98,
     335,   336,   332,    44,   200,    44,    98,    98,    44,    98,
      98,   243,    98,    98,    87,    87,    98,   249,     5,   188,
      87,   198,    44,   255,   193,     4,     5,    87,    44,    44,
      44,   200,     5,    12,    13,    47,    44,    44,   462,    12,
      13,    44,   226,   227,   228,   229,    44,    95,   232,    44,
     381,    44,   100,    44,   385,   386,    55,    44,    99,   390,
      99,     5,    61,    99,    98,   396,     5,   398,   213,     5,
      44,   267,   272,   273,   315,    55,    12,    99,    57,    58,
      59,    61,   278,    99,    99,    99,   282,   283,   530,     5,
     286,    99,    99,    44,   290,   295,    99,    13,   294,    44,
      44,    99,   298,   301,    99,   274,   302,   276,    99,   305,
      16,     5,    18,   261,   310,   311,   264,   419,    57,    58,
      59,    57,    58,    59,    88,    89,   322,   359,    44,   274,
     362,   276,   301,   302,   444,   367,   305,     5,   370,    44,
      16,     5,    18,   375,   321,    13,   378,     5,    12,    13,
      44,     5,   297,   322,    12,    13,   301,    97,     5,    13,
     462,   345,   346,   347,   348,    12,   497,   351,     5,   500,
      87,     5,   503,     5,     5,   506,    44,    16,    12,   510,
     325,   512,   624,    87,    23,   627,    44,    65,    88,    57,
      58,    59,   100,    57,    58,    59,   549,   393,    98,    57,
      58,    59,     5,    57,    58,    59,    17,    44,     5,    12,
      44,     9,   408,    44,     5,    12,    94,    95,    96,   415,
       8,   417,   418,   419,    87,    57,    58,    59,   424,    68,
     102,   427,     5,   429,   434,   404,   405,   433,   470,    12,
      17,    44,   474,    20,     5,   441,   442,    10,   480,   445,
     692,   447,   484,    44,    57,    58,    59,    10,   490,   404,
     405,   103,   494,   104,    88,    44,   462,   463,    62,    92,
      93,    44,   441,   442,    98,    38,    39,    87,    41,    42,
      43,    44,    45,    44,    65,    38,    39,    40,    41,    42,
      43,    44,    45,    88,     5,    88,    57,    58,    59,    62,
      63,    88,   498,    98,    44,    98,    88,    70,   504,    62,
      63,    98,   101,    94,    95,    96,    98,    70,   514,    88,
      89,   517,   522,   523,   626,    88,    89,     5,   528,    92,
      93,     5,    44,    44,   530,    88,    89,    92,    93,    92,
      93,   694,   105,    88,   107,   108,    57,    58,    59,   545,
      44,    44,   105,    98,   107,     5,   552,    44,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    88,
      88,    88,    88,    88,    88,    88,     5,    44,    88,    98,
      98,    98,    98,    98,    98,    98,    54,    88,    98,     5,
      44,   587,     5,    88,    98,    98,   592,    98,   594,    87,
      21,    87,    87,   599,    47,    87,   106,   603,    99,   609,
     606,   108,     8,   613,     9,    87,   612,   617,   618,   619,
      21,    10,   102,   104,   103,   621,    44,    44,   624,    98,
     626,   627,   100,    99,    44,    44,    44,    44,    44,   635,
      44,    87,    87,    87,    44,    87,    99,    98,   106,    87,
      87,    87,    87,    87,    16,    16,    44,    98,    98,   106,
      99,   657,    21,    87,   660,    98,    16,    99,   664,    99,
      98,   667,    99,    98,   670,    98,    98,   673,   678,   679,
      99,    47,    87,    98,    87,    87,    98,    98,    87,   185,
      87,    44,   688,    87,   155,   691,   692,     0,     4,   409,
       6,    99,   698,   212,    10,    98,    93,    99,    98,    15,
      61,    17,    98,    19,    20,    99,    22,    98,    98,    25,
     720,   721,    99,    98,    87,    99,    98,    98,   724,    99,
      98,   727,    38,    39,    98,    41,    42,    43,    44,    45,
      46,    98,    98,    98,    50,    51,    52,    53,   100,    87,
      99,    87,    99,    98,    98,    98,    62,    63,    99,    98,
     463,   234,    99,    69,    70,    71,    72,    98,    98,   160,
      99,    98,    98,    87,    99,    98,    98,   436,    99,    98,
      98,    87,    88,    89,    99,    98,    92,    93,    94,     4,
      98,     6,    35,    98,    98,    10,    98,    98,    98,   105,
      15,   107,    17,    98,    19,    20,    98,    22,    98,    98,
      25,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    38,    39,    98,    41,    42,    43,    44,
      45,    46,    98,    10,    98,    50,    51,    52,    53,    98,
     535,   725,    -1,    -1,   143,    -1,    -1,    62,    63,    -1,
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
     120,     6,   116,    87,   123,    17,     8,   158,     9,   160,
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
#line 135 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"file_input: program ENDMARKER\n";
										p->check_inhertance_list();
						if(!p->errRecovery->errQ->isEmpty())
								p->errRecovery->printErrQueue();
						root = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);		
						if(fileStack.size()==1){
							//ast->print(root, 0);
							
						p->print_symbol();
						ast->tree((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn));
						ast->print((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn), 0);}
						Streams::verbose().flush();	
								}
    break;

  case 3:
/* Line 868 of glr.c  */
#line 150 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"program : import_stmt ';' temp2 \n";}
    break;

  case 4:
/* Line 868 of glr.c  */
#line 151 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"program : temp2 \n";}
    break;

  case 5:
/* Line 868 of glr.c  */
#line 155 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"temp2: classdef temp2\n";
							ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
							cout<<"enter upper"<<endl;
						}
    break;

  case 6:
/* Line 868 of glr.c  */
#line 159 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"temp2: classdef \n";
							//ast->createClassNode();
							cout<<"enter classdef"<<endl;
					}
    break;

  case 7:
/* Line 868 of glr.c  */
#line 176 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							testfunction = p->finishFunctionDeclaration(testfunction,linefunc,colmfunc);
							((*yyvalp).tn)=ast->createFunctionNode(testfunction,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
							parameters.clear();
							linefunc=0;colmfunc=0;
							Streams::verbose() <<"funcdef:	funcheader suite \n";
						  }
    break;

  case 8:
/* Line 868 of glr.c  */
#line 184 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader:	DEF  NAME parameters ARROW test ':'  \n";}
    break;

  case 9:
/* Line 868 of glr.c  */
#line 185 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader:  DEF access NAME parameters ARROW test ':'  \n";}
    break;

  case 10:
/* Line 868 of glr.c  */
#line 186 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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
#line 195 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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
#line 203 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC NAME parameters ARROW test ':' \n";}
    break;

  case 13:
/* Line 868 of glr.c  */
#line 204 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL NAME parameters ARROW test ':' \n";}
    break;

  case 14:
/* Line 868 of glr.c  */
#line 205 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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
#line 213 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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
#line 221 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC FINAL NAME parameters ARROW test ':' \n";}
    break;

  case 17:
/* Line 868 of glr.c  */
#line 222 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 18:
/* Line 868 of glr.c  */
#line 223 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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
#line 231 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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
#line 239 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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
#line 247 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC access NAME parameters ARROW test ':'  \n";}
    break;

  case 22:
/* Line 868 of glr.c  */
#line 248 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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
#line 255 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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
#line 263 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC FINAL access NAME parameters ARROW test ':'  \n";}
    break;

  case 25:
/* Line 868 of glr.c  */
#line 264 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL STATIC access NAME parameters ARROW test ':'  \n";}
    break;

  case 26:
/* Line 868 of glr.c  */
#line 265 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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
#line 273 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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
#line 280 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 29:
/* Line 868 of glr.c  */
#line 281 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access FINAL NAME parameters ARROW test ':'  \n";}
    break;

  case 30:
/* Line 868 of glr.c  */
#line 282 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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
#line 290 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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
#line 298 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access STATIC FINAL NAME parameters ARROW test ':'  \n";}
    break;

  case 33:
/* Line 868 of glr.c  */
#line 299 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access FINAL STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 34:
/* Line 868 of glr.c  */
#line 300 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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
#line 308 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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
#line 315 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC access FINAL NAME parameters ARROW test ':'  \n";}
    break;

  case 37:
/* Line 868 of glr.c  */
#line 316 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL access STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 38:
/* Line 868 of glr.c  */
#line 317 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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
#line 324 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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
#line 333 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"parameters:'(' arglist ')'\n";}
    break;

  case 41:
/* Line 868 of glr.c  */
#line 334 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"parameters:'(' ')'\n";}
    break;

  case 42:
/* Line 868 of glr.c  */
#line 337 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {	((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);	Streams::verbose() <<"stmt:	simple_stmt \n";
						
					}
    break;

  case 43:
/* Line 868 of glr.c  */
#line 340 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {	((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);cout<<"line num"<<yylval.r.lineNum<<endl;	Streams::verbose() <<"stmt: compound_stmt\n";}
    break;

  case 44:
/* Line 868 of glr.c  */
#line 342 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"simple_stmt: small_stmt ';' \n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 45:
/* Line 868 of glr.c  */
#line 346 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"small_stmt: expr_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 46:
/* Line 868 of glr.c  */
#line 350 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
						Streams::verbose() <<"small_stmt: del_stmt \n";
						((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
					  }
    break;

  case 47:
/* Line 868 of glr.c  */
#line 354 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"small_stmt: pass_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
					   }
    break;

  case 48:
/* Line 868 of glr.c  */
#line 358 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"small_stmt: flow_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
					   }
    break;

  case 49:
/* Line 868 of glr.c  */
#line 362 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"small_stmt: import_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						 }
    break;

  case 50:
/* Line 868 of glr.c  */
#line 366 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"small_stmt: global_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						 }
    break;

  case 51:
/* Line 868 of glr.c  */
#line 370 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: nonlocal_stmt \n";}
    break;

  case 52:
/* Line 868 of glr.c  */
#line 371 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"small_stmt: print_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						 }
    break;

  case 53:
/* Line 868 of glr.c  */
#line 377 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"expr_stmt:	testlist_star_expr augassign testlist \n";}
    break;

  case 54:
/* Line 868 of glr.c  */
#line 378 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"expr_stmt: testlist_star_expr \n";}
    break;

  case 55:
/* Line 868 of glr.c  */
#line 379 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
								Streams::verbose() <<"compound_stmt: vardef\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
								visit_num=0;
							}
    break;

  case 56:
/* Line 868 of glr.c  */
#line 384 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
								Streams::verbose() <<"compound_stmt: vardef\n";
								//$<tn>$=$<tn>1;
								visit_num=0;
								Node *il=new Node();
								v1->init=true;
								cout<<"var name in yacc "<<v1->get_name()<<endl;
								il=ast->createCallVarNode(v1->get_name(),v1,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);	
								//il=ast->addNext(il,$<tn>2);
								v1=NULL;
								Node *il2=new Node();
								il2=ast->createAssignNode(il,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
								((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),il2);
							}
    break;

  case 57:
/* Line 868 of glr.c  */
#line 399 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"expr_stmt: testlist_star_expr right_testlist \n";
													//$<amerstr>1;
													visit_num=0;
													Node *il=new Node();
													il=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
													Node* p=new Node();
													((*yyvalp).tn)=ast->createAssignNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
													p=((*yyvalp).tn);
													if(lastNode)
													{
														//cout<<"enter heree amer \n";
														((*yyvalp).tn)=ast->addNext(lastNode,p);
														
														lastNode=NULL;
														//cout<<"print in expr_stmt if";
														//$<tn>$->print();cout<<endl;
													}
													if((v)&&(array_right))
													{
														v->set_isarray(true);
													}
													
													
													
												}
    break;

  case 58:
/* Line 868 of glr.c  */
#line 426 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"right_testlist: '=' testlist_star_expr right_testlist \n";}
    break;

  case 59:
/* Line 868 of glr.c  */
#line 427 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"right_testlist: '=' testlist_star_expr \n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 60:
/* Line 868 of glr.c  */
#line 430 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: comma_test_star_seqJ \n";}
    break;

  case 61:
/* Line 868 of glr.c  */
#line 431 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: comma_test_star_seqJ ',' \n";}
    break;

  case 62:
/* Line 868 of glr.c  */
#line 432 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"',' \n";}
    break;

  case 63:
/* Line 868 of glr.c  */
#line 433 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: test comma_test_star_seqJ \n";}
    break;

  case 64:
/* Line 868 of glr.c  */
#line 434 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
								Streams::verbose() <<"testlist_star_expr: test \n"; 
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 65:
/* Line 868 of glr.c  */
#line 438 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: star_expr comma_test_star_seqJ ',' \n";}
    break;

  case 66:
/* Line 868 of glr.c  */
#line 439 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: star_expr ',' \n";}
    break;

  case 67:
/* Line 868 of glr.c  */
#line 442 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star : ',' test \n";}
    break;

  case 68:
/* Line 868 of glr.c  */
#line 443 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star : ',' star_expr \n";}
    break;

  case 69:
/* Line 868 of glr.c  */
#line 446 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seqJ : comma_test_star_seqJ comma_test_star \n";}
    break;

  case 70:
/* Line 868 of glr.c  */
#line 447 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seqJ : comma_test_star \n";}
    break;

  case 71:
/* Line 868 of glr.c  */
#line 449 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	PLUS_EQUAL \n";}
    break;

  case 72:
/* Line 868 of glr.c  */
#line 450 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MINUS_EQUAL \n";}
    break;

  case 73:
/* Line 868 of glr.c  */
#line 451 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	STAR_EQUAL \n";}
    break;

  case 74:
/* Line 868 of glr.c  */
#line 452 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	DIV_EQUAL \n";}
    break;

  case 75:
/* Line 868 of glr.c  */
#line 453 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MOD_EQUAL \n";}
    break;

  case 76:
/* Line 868 of glr.c  */
#line 454 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	AND_EQUAL \n";}
    break;

  case 77:
/* Line 868 of glr.c  */
#line 455 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	OR_EQUAL \n";}
    break;

  case 78:
/* Line 868 of glr.c  */
#line 456 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	SHAPOO_EQUAL \n";}
    break;

  case 79:
/* Line 868 of glr.c  */
#line 457 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	LESS_THAN_2_EQUAL \n";}
    break;

  case 80:
/* Line 868 of glr.c  */
#line 458 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MORE_THAN_2_EQUAL \n";}
    break;

  case 81:
/* Line 868 of glr.c  */
#line 459 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	STAR_2_EQUAL \n";}
    break;

  case 82:
/* Line 868 of glr.c  */
#line 460 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	DIV_2_EQUAL \n";}
    break;

  case 83:
/* Line 868 of glr.c  */
#line 463 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose()<<"access_modef: PRIVATE\n";acc_mod="private";pp=true;}
    break;

  case 84:
/* Line 868 of glr.c  */
#line 464 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {pp=false;Streams::verbose()<<"access_modef:	PUBLIC\n";acc_mod="public";pp=false;}
    break;

  case 85:
/* Line 868 of glr.c  */
#line 465 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {pro=true;Streams::verbose()<<"access_modef:	PROTECTED\n";acc_mod="protected";}
    break;

  case 86:
/* Line 868 of glr.c  */
#line 467 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"print_stmt: PRINT exprlist \n";
							((*yyvalp).tn) = ast->createPrintNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
						   }
    break;

  case 87:
/* Line 868 of glr.c  */
#line 471 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"del_stmt:   DEL exprlist \n";
							((*yyvalp).tn) = ast->createDelNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
						 }
    break;

  case 88:
/* Line 868 of glr.c  */
#line 477 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
					Streams::verbose() <<"pass_stmt:	PASS \n";
					((*yyvalp).tn) = ast->createPassNode(NULL, NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
				 }
    break;

  case 89:
/* Line 868 of glr.c  */
#line 483 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
						Streams::verbose() <<"flow_stmt:	break_stmt \n";
						((*yyvalp).tn) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
					   }
    break;

  case 90:
/* Line 868 of glr.c  */
#line 487 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
								Streams::verbose() <<"flow_stmt: continue_stmt\n";
								((*yyvalp).tn) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 91:
/* Line 868 of glr.c  */
#line 491 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"flow_stmt: return_stmt\n";
							((*yyvalp).tn) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						  }
    break;

  case 92:
/* Line 868 of glr.c  */
#line 497 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
					Streams::verbose() <<"break_stmt: BREAK \n";
					((*yyvalp).tn) = ast->createFlowStmtNode(NULL, NULL, breakNode, NULL,yylval.r.lineNum,yylval.r.colNum);
				  }
    break;

  case 93:
/* Line 868 of glr.c  */
#line 503 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"continue_stmt:	CONTINUE \n";
							((*yyvalp).tn) = ast->createFlowStmtNode(NULL, NULL, continueNode, NULL,yylval.r.lineNum,yylval.r.colNum);
						 }
    break;

  case 94:
/* Line 868 of glr.c  */
#line 509 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
									Streams::verbose() <<"return_stmt:	RETURN testlist \n";
									((*yyvalp).tn) = ast->createFlowStmtNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn), NULL, returnNode, NULL,yylval.r.lineNum,yylval.r.colNum);
								}
    break;

  case 95:
/* Line 868 of glr.c  */
#line 513 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"return_stmt:	RETURN \n";
							((*yyvalp).tn) = ast->createFlowStmtNode(NULL, NULL, returnNode, NULL,yylval.r.lineNum,yylval.r.colNum);
						}
    break;

  case 96:
/* Line 868 of glr.c  */
#line 520 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"import_stmt: import_name \n";}
    break;

  case 97:
/* Line 868 of glr.c  */
#line 523 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"import_name: IMPORT dotted_as_names \n";
										inhertance_list.clear();}
    break;

  case 98:
/* Line 868 of glr.c  */
#line 527 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_dotted_as_name_seq: ',' dotted_as_name \n";}
    break;

  case 99:
/* Line 868 of glr.c  */
#line 528 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_dotted_as_name_seq: comma_dotted_as_name_seq ',' dotted_as_name \n";}
    break;

  case 100:
/* Line 868 of glr.c  */
#line 530 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
									Streams::verbose() <<"comma_dotted_as_name_seq: dotted_as_names: dotted_as_name \n";
								t_id=new char[10];
								strcpy(t_id,temp_id.c_str());
								inhertance_list.push_back(t_id);
								temp_id="";
					}
    break;

  case 101:
/* Line 868 of glr.c  */
#line 537 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
															Streams::verbose() <<"comma_dotted_as_name_seq: dotted_as_name comma_dotted_as_name_seq \n";
						t_id=new char[10];
								strcpy(t_id,temp_id.c_str());
								inhertance_list.push_back(t_id);
								temp_id="";
				 }
    break;

  case 102:
/* Line 868 of glr.c  */
#line 547 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dotted_as_name: dotted_name \n";}
    break;

  case 103:
/* Line 868 of glr.c  */
#line 548 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dotted_as_name: dotted_name AS NAME\n";}
    break;

  case 104:
/* Line 868 of glr.c  */
#line 551 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
					 Streams::verbose() <<"dotted_name: NAME \n";
					 temp_id=temp_id+(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal);
					 string sf=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal);
					 cout<<sf;
					 lineNum=colNum=1;					 
					 sf.append(".txt");
					 if(find(parsedFile.begin(),parsedFile.end(),sf)==parsedFile.end())
						fileStack.push(sf);
					 while(!fileStack.empty()&&sourceFile!=fileStack.top()){
						 sf=fileStack.top();
						 sourceFile=sf;
						 ifstream inf(sf);
						 lexer->yyrestart(&inf);
						 Parser* p = new Parser();
						 p->parse();						 
						 lineNum=colNum=1;
						 parsedFile.push_back(sf);
						 if(fileStack.size()>0)
							fileStack.pop();
						 if(fileStack.size()==0)
							YYABORT;
					 }
				  }
    break;

  case 105:
/* Line 868 of glr.c  */
#line 575 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dotted_name: NAME dotted_name_seq \n";}
    break;

  case 106:
/* Line 868 of glr.c  */
#line 578 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"dotted_name_seq: '.' NAME \n";
							temp_id=temp_id+"."+(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal);
						}
    break;

  case 107:
/* Line 868 of glr.c  */
#line 582 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
												Streams::verbose() <<"dotted_name_seq: dotted_name_seq '.' NAME \n";
					temp_id=temp_id+"."+(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal);
				 }
    break;

  case 108:
/* Line 868 of glr.c  */
#line 588 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
								Streams::verbose() <<"comma_name_seq :	',' NAME \n";
								((*yyvalp).var)=p->addVariableToGlobalScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal), yylval.r.lineNum, yylval.r.colNum);
								v = ((*yyvalp).var);
								((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
							 }
    break;

  case 109:
/* Line 868 of glr.c  */
#line 594 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
												Streams::verbose() <<"comma_name_seq :	comma_name_seq ',' NAME \n";
												((*yyvalp).var)=p->addVariableToGlobalScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal), yylval.r.lineNum, yylval.r.colNum);
												v = ((*yyvalp).var);
												Node* temp = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
												Node* seq = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn);
												seq->Next = temp;
											 }
    break;

  case 110:
/* Line 868 of glr.c  */
#line 604 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"global_stmt: GLOBAL NAME \n";
							((*yyvalp).var)=p->addVariableToGlobalScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal), yylval.r.lineNum, yylval.r.colNum);
							v = ((*yyvalp).var);
							Node* temp = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
							((*yyvalp).tn) = ast->createGlobalNode(temp,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
						 }
    break;

  case 111:
/* Line 868 of glr.c  */
#line 611 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() <<"global_stmt: GLOBAL NAME comma_name_seq\n";
											((*yyvalp).var)=p->addVariableToGlobalScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.strVal), yylval.r.lineNum, yylval.r.colNum);											
											v = ((*yyvalp).var);
											Node* temp = ast->createIDNode(v,0,(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),yylval.r.lineNum,yylval.r.colNum);
											((*yyvalp).tn) = ast->createGlobalNode(temp,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
										 }
    break;

  case 112:
/* Line 868 of glr.c  */
#line 620 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"nonlocal_stmt:	NONLOCAL NAME \n";}
    break;

  case 113:
/* Line 868 of glr.c  */
#line 621 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"nonlocal_stmt: NONLOCAL NAME comma_name_seq \n";}
    break;

  case 114:
/* Line 868 of glr.c  */
#line 624 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"compound_stmt:  if_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 115:
/* Line 868 of glr.c  */
#line 628 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: while_stmt\n";}
    break;

  case 116:
/* Line 868 of glr.c  */
#line 629 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
								Streams::verbose() <<"compound_stmt: for_stmt\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						   }
    break;

  case 117:
/* Line 868 of glr.c  */
#line 633 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
								Streams::verbose() <<"compound_stmt: try_stmt\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						   }
    break;

  case 118:
/* Line 868 of glr.c  */
#line 637 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: with_stmt\n";}
    break;

  case 119:
/* Line 868 of glr.c  */
#line 638 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {	
								Streams::verbose() <<"compound_stmt: funcdef\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 120:
/* Line 868 of glr.c  */
#line 642 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
									Streams::verbose() <<"compound_stmt: DEF classdef\n";
									((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
								}
    break;

  case 121:
/* Line 868 of glr.c  */
#line 647 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF NAME\n";
											((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,0,0);
											v=((*yyvalp).var);
											v1=new Variable();
											v1=v;
										((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
										visit_num++;
									}
    break;

  case 122:
/* Line 868 of glr.c  */
#line 655 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access NAME\n";
											Streams::verbose()<<"var_declaration: access_modef ID\n";
									((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false,false);
									v=((*yyvalp).var);
									visit_num++;
									acc_mod="";
									v1=v;
									((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
											}
    break;

  case 123:
/* Line 868 of glr.c  */
#line 664 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC NAME\n";
											Streams::verbose()<<"var_declaration: STATIC ID\n";
											((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false,false);
											v=((*yyvalp).var);
											v1=v;
											visit_num++;
											((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
										}
    break;

  case 124:
/* Line 868 of glr.c  */
#line 672 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL NAME\n";
												Streams::verbose()<<"var_declaration: FINAL ID\n";
												((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													v1=v;
													visit_num++;
													((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
										}
    break;

  case 125:
/* Line 868 of glr.c  */
#line 680 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC FINAL NAME\n";
													Streams::verbose()<<"var_declaration: STATIC FINAL ID\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													visit_num++;
													v1=v;
													((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
												}
    break;

  case 126:
/* Line 868 of glr.c  */
#line 688 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL STATIC NAME\n";
													Streams::verbose()<<"var_declaration: STATIC FINAL ID\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													v1=v;
													visit_num++;
													((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
												}
    break;

  case 127:
/* Line 868 of glr.c  */
#line 696 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC access NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													acc_mod="";
													visit_num++;
													v1=v;
													((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
												}
    break;

  case 128:
/* Line 868 of glr.c  */
#line 704 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL access NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													acc_mod="";
													v1=v;
													visit_num++;
													((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
												}
    break;

  case 129:
/* Line 868 of glr.c  */
#line 712 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC FINAL access NAME\n";
															((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
															v=((*yyvalp).var);
															acc_mod="";
															visit_num++;
															v1=v;
															((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
														}
    break;

  case 130:
/* Line 868 of glr.c  */
#line 720 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL STATIC access NAME\n";
															((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
															v=((*yyvalp).var);
															acc_mod="";
															visit_num++;
															v1=v;
															((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
														}
    break;

  case 131:
/* Line 868 of glr.c  */
#line 728 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access STATIC NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													visit_num++;
													acc_mod="";
													v1=v;
													((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
												}
    break;

  case 132:
/* Line 868 of glr.c  */
#line 736 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access FINAL NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													acc_mod="";
													visit_num++;
													v1=v;
													((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
											}
    break;

  case 133:
/* Line 868 of glr.c  */
#line 744 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access STATIC FINAL NAME\n";
														((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
														v=((*yyvalp).var);
														visit_num++;
														acc_mod="";
														v1=v;
														((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
													}
    break;

  case 134:
/* Line 868 of glr.c  */
#line 752 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access FINAL STATIC NAME\n";
														((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
														v=((*yyvalp).var);
														acc_mod="";
														visit_num++;
														v1=v;
														((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
													}
    break;

  case 135:
/* Line 868 of glr.c  */
#line 760 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC access FINAL NAME\n";
															((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
															v=((*yyvalp).var);
															acc_mod="";
															visit_num++;
															v1=v;
															((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
														}
    break;

  case 136:
/* Line 868 of glr.c  */
#line 768 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL access STATIC NAME\n";
														((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
														v=((*yyvalp).var);
														acc_mod="";
														visit_num++;
														v1=v;
														((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
													}
    break;

  case 137:
/* Line 868 of glr.c  */
#line 777 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
									Streams::verbose() <<"elif_seq :  ELIF test ':' suite \n";
									((*yyvalp).tn) = ast->createElseIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);								
								}
    break;

  case 138:
/* Line 868 of glr.c  */
#line 781 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() <<"elif_seq : elif_seq ELIF test ':' suite \n";
											Node* elseIfNode = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.tn);
											elseIfNode->Next = ast->createElseIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
											((*yyvalp).tn) = elseIfNode;											
										  }
    break;

  case 139:
/* Line 868 of glr.c  */
#line 789 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
								Streams::verbose() <<"if_stmt:	IF test ':' suite \n";
								((*yyvalp).tn) = ast->createIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
							  }
    break;

  case 140:
/* Line 868 of glr.c  */
#line 793 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() <<"if_stmt:	IF test ':' suite elif_seq \n";
											((*yyvalp).tn) = ast->createIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
										}
    break;

  case 141:
/* Line 868 of glr.c  */
#line 797 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
												Streams::verbose() <<"if_stmt:	IF test ':' suite ELSE ':' suite \n";
												Node* elseNode = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (7))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
												((*yyvalp).tn) = ast->createIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.tn),elseNode,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (7))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
											  }
    break;

  case 142:
/* Line 868 of glr.c  */
#line 802 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
														Streams::verbose() <<"if_stmt:	IF test ':' suite elif_seq ELSE ':' suite \n";
														Node* elseIfNode = (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.tn);
														Node* elseNode = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (8))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
														elseIfNode->Next = elseNode;
														((*yyvalp).tn) = ast->createIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.tn),elseIfNode,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (8))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
													   }
    break;

  case 143:
/* Line 868 of glr.c  */
#line 811 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
									Streams::verbose() <<"while_stmt: WHILE test ':' suite \n";
									((*yyvalp).tn) = ast->createWhileNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
								 }
    break;

  case 144:
/* Line 868 of glr.c  */
#line 815 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													Streams::verbose() <<"while_stmt:  WHILE test ':' suite ELSE ':' suite \n";
													Node* whileNode= ast->createWhileNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (7))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
													whileNode->Next = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (7))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
													((*yyvalp).tn) = whileNode;
												 }
    break;

  case 145:
/* Line 868 of glr.c  */
#line 823 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
												Streams::verbose() <<"for_stmt:   FOR exprlist IN testlist ':' suite \n";
												((*yyvalp).tn) = ast->createForNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (6))].yystate.yysemantics.yysval.tn), NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
											   }
    break;

  case 146:
/* Line 868 of glr.c  */
#line 827 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																Streams::verbose() <<"for_stmt:  FOR exprlist IN testlist ':' suite ELSE ':' suite\n";
																Node* forNode = ast->createForNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.tn), NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (9))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (9))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
																forNode->Next = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((9) - (9))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
																((*yyvalp).tn) = forNode;															
															   }
    break;

  case 147:
/* Line 868 of glr.c  */
#line 835 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
												Streams::verbose() <<" try_stmt:   TRY ':' suite try_except_cla_seq\n";
												((*yyvalp).tn) = ast->createTryNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
											 }
    break;

  case 148:
/* Line 868 of glr.c  */
#line 839 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																Streams::verbose() <<" try_stmt: TRY ':' suite try_except_cla_seq ELSE ':' suite\n";
																Node* except = (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.tn);
																while(except->Next!=NULL)
																	except = except->Next;
																except->Next = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (7))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
																((*yyvalp).tn) = ast->createTryNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
															 }
    break;

  case 149:
/* Line 868 of glr.c  */
#line 847 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																	Streams::verbose() <<"try_stmt:  TRY ':' suite try_except_cla_seq FINALLY ':' suite\n";
																Node* except = (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.tn);
																while(except->Next!=NULL)
																	except = except->Next;
																except->Next = ast->createFinallyNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (7))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
																((*yyvalp).tn) = ast->createTryNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
																}
    break;

  case 150:
/* Line 868 of glr.c  */
#line 855 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
												Streams::verbose() <<"try_stmt:  TRY ':' suite FINALLY ':' suite\n";
												Node* finally = ast->createFinallyNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (6))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
												((*yyvalp).tn) = ast->createTryNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.tn), finally, NULL,yylval.r.lineNum,yylval.r.colNum);
											 }
    break;

  case 151:
/* Line 868 of glr.c  */
#line 862 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
												Streams::verbose() <<"try_except_cla_seq: except_clause ':' suite \n";
												Node* except = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn);
												except->Son = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn);
												((*yyvalp).tn) = except;
											}
    break;

  case 152:
/* Line 868 of glr.c  */
#line 868 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 153:
/* Line 868 of glr.c  */
#line 880 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"with_seq:	',' with_item \n";}
    break;

  case 154:
/* Line 868 of glr.c  */
#line 881 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"with_seq: with_seq ',' with_item\n";}
    break;

  case 155:
/* Line 868 of glr.c  */
#line 884 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"with_stmt:  WITH with_item ':' suite \n";}
    break;

  case 156:
/* Line 868 of glr.c  */
#line 885 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"with_stmt: WITH with_item with_seq ':' suite\n";}
    break;

  case 157:
/* Line 868 of glr.c  */
#line 888 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<" with_item:  test\n";}
    break;

  case 158:
/* Line 868 of glr.c  */
#line 889 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"with_item: test AS expr\n";}
    break;

  case 159:
/* Line 868 of glr.c  */
#line 892 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
						Streams::verbose() <<"except_clause:  EXCEPT \n";
						((*yyvalp).tn) = ast->createExceptNode(NULL, NULL, NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
					   }
    break;

  case 160:
/* Line 868 of glr.c  */
#line 896 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
								Streams::verbose() <<"except_clause:  EXCEPT test\n";
								((*yyvalp).tn) = ast->createExceptNode(NULL, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
							 }
    break;

  case 161:
/* Line 868 of glr.c  */
#line 900 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"except_clause:  EXCEPT test AS NAME\n";}
    break;

  case 162:
/* Line 868 of glr.c  */
#line 903 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {	
						((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);	Streams:: verbose() <<"list_stmt : stmt\n";
				}
    break;

  case 163:
/* Line 868 of glr.c  */
#line 906 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 164:
/* Line 868 of glr.c  */
#line 919 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"suite:	list_stmt END\n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);	
						}
    break;

  case 165:
/* Line 868 of glr.c  */
#line 923 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {	((*yyvalp).tn)=NULL;	Streams::verbose() <<"suite:	END\n"; ((*yyvalp).tn)=NULL;}
    break;

  case 166:
/* Line 868 of glr.c  */
#line 926 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"test:	or_test\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 167:
/* Line 868 of glr.c  */
#line 927 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"or_test IF or_test ELSE test\n";}
    break;

  case 168:
/* Line 868 of glr.c  */
#line 930 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"or_seq:	OR and_test \n";}
    break;

  case 169:
/* Line 868 of glr.c  */
#line 931 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"or_seq: or_seq OR and_test \n";}
    break;

  case 170:
/* Line 868 of glr.c  */
#line 934 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"or_test:	and_test\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 171:
/* Line 868 of glr.c  */
#line 935 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"or_test:	and_test or_seq\n";}
    break;

  case 172:
/* Line 868 of glr.c  */
#line 938 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_seq: AND not_test \n";}
    break;

  case 173:
/* Line 868 of glr.c  */
#line 939 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_seq: and_seq AND not_test \n";}
    break;

  case 174:
/* Line 868 of glr.c  */
#line 942 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_test:	not_test\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 175:
/* Line 868 of glr.c  */
#line 943 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_test: not_test and_seq \n";}
    break;

  case 176:
/* Line 868 of glr.c  */
#line 946 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"not_test:	NOT not_test\n";}
    break;

  case 177:
/* Line 868 of glr.c  */
#line 947 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"not_test:	comparison\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 178:
/* Line 868 of glr.c  */
#line 950 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() <<"comp_op_seq: comp_op expr \n";
											((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
										}
    break;

  case 179:
/* Line 868 of glr.c  */
#line 954 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() <<"comp_op_seq: comp_op_seq comp_op expr \n";
											((*yyvalp).tn)=ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn),NULL,comp_op,yylval.r.lineNum,yylval.r.colNum);	
										}
    break;

  case 180:
/* Line 868 of glr.c  */
#line 960 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comparison: expr\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 181:
/* Line 868 of glr.c  */
#line 961 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
					Streams::verbose() <<"comparison: expr comp_op_seq\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);
						((*yyvalp).tn)=ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,comp_op,yylval.r.lineNum,yylval.r.colNum);
				}
    break;

  case 182:
/* Line 868 of glr.c  */
#line 967 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {	
				Streams::verbose() <<"comp_op: '<' \n";
				comp_op=LESS;
			}
    break;

  case 183:
/* Line 868 of glr.c  */
#line 971 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: '>' \n";comp_op=GREATHER;}
    break;

  case 184:
/* Line 868 of glr.c  */
#line 972 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: EQUAL \n";comp_op=EQUALS;}
    break;

  case 185:
/* Line 868 of glr.c  */
#line 973 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: MORE_OR_EQUAL \n";comp_op=EQUALGREATHER;}
    break;

  case 186:
/* Line 868 of glr.c  */
#line 974 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: LESS_OR_EQUAL \n";comp_op=EQUALLESS;}
    break;

  case 187:
/* Line 868 of glr.c  */
#line 975 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: MORE_LESS \n";}
    break;

  case 188:
/* Line 868 of glr.c  */
#line 976 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: NOT_EQUAL \n";comp_op=NOTEQUAL;}
    break;

  case 189:
/* Line 868 of glr.c  */
#line 977 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IN \n";}
    break;

  case 190:
/* Line 868 of glr.c  */
#line 978 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: NOT IN \n";}
    break;

  case 191:
/* Line 868 of glr.c  */
#line 979 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IS \n";}
    break;

  case 192:
/* Line 868 of glr.c  */
#line 980 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IS NOT \n";}
    break;

  case 193:
/* Line 868 of glr.c  */
#line 983 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"star_expr: '*' expr \n";}
    break;

  case 194:
/* Line 868 of glr.c  */
#line 986 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"or_xor_expr_seq: '|' xor_expr \n";}
    break;

  case 195:
/* Line 868 of glr.c  */
#line 987 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"or_xor_expr_seq: or_xor_expr_seq '|' xor_expr\n";}
    break;

  case 196:
/* Line 868 of glr.c  */
#line 989 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
					Streams::verbose() <<"expr: xor_expr\n";
					((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
				}
    break;

  case 197:
/* Line 868 of glr.c  */
#line 993 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"expr: xor_expr or_xor_expr_seq\n";}
    break;

  case 198:
/* Line 868 of glr.c  */
#line 996 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"sha_and_expr_seq: '^' and_expr \n";}
    break;

  case 199:
/* Line 868 of glr.c  */
#line 997 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"sha_and_expr_seq: sha_and_expr_seq '^' and_expr\n";}
    break;

  case 200:
/* Line 868 of glr.c  */
#line 1000 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"xor_expr: and_expr\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 201:
/* Line 868 of glr.c  */
#line 1001 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"xor_expr: and_expr sha_and_expr_seq\n";}
    break;

  case 202:
/* Line 868 of glr.c  */
#line 1004 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_shift_expr_seq: '&' shift_expr \n";}
    break;

  case 203:
/* Line 868 of glr.c  */
#line 1005 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_shift_expr_seq: and_shift_expr_seq '&' shift_expr\n";}
    break;

  case 204:
/* Line 868 of glr.c  */
#line 1008 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_expr: shift_expr\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 205:
/* Line 868 of glr.c  */
#line 1009 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_expr: shift_expr and_shift_expr_seq\n";}
    break;

  case 206:
/* Line 868 of glr.c  */
#line 1012 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	LESS_THAN_2 arith_expr \n";}
    break;

  case 207:
/* Line 868 of glr.c  */
#line 1013 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	MORE_THAN_2 arith_expr \n";}
    break;

  case 208:
/* Line 868 of glr.c  */
#line 1014 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	arith_seq LESS_THAN_2 arith_expr \n";}
    break;

  case 209:
/* Line 868 of glr.c  */
#line 1015 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	arith_seq MORE_THAN_2 arith_expr \n";}
    break;

  case 210:
/* Line 868 of glr.c  */
#line 1018 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"shift_expr: arith_expr\n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 211:
/* Line 868 of glr.c  */
#line 1022 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"shift_expr: arith_expr arith_seq\n";}
    break;

  case 212:
/* Line 868 of glr.c  */
#line 1025 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : '+' term \n";
						op=PLUS;
						cout<<"op1= "<<op<<endl;
						((*yyvalp).operands)=op;
						cout<<"op = "<<((*yyvalp).operands)<<endl;
						((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 213:
/* Line 868 of glr.c  */
#line 1032 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : '-' term \n";
			/**
							op=MINUS;
							cout<<"amer = "<<op<<endl;
							$<operands>$=op;
							$<tn>$=$<tn>2;**/
							int* xx = new int (0);
						k = ast->createTypeNode((void*)xx,0,0,yylval.r.lineNum,yylval.r.colNum,INT);
						//k=ast->addNext(k,$<tn>2);
						((*yyvalp).tn) = ast->createExprNode(k,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),MINUS,yylval.r.lineNum,yylval.r.colNum);
						}
    break;

  case 214:
/* Line 868 of glr.c  */
#line 1043 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : term_seq '+' term \n";//op=PLUS;
									k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
									((*yyvalp).operands)=PLUS;
									//op=$<operands>$;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,PLUS,yylval.r.lineNum,yylval.r.colNum);
								}
    break;

  case 215:
/* Line 868 of glr.c  */
#line 1049 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : term_seq '-' term \n";//op=MINUS;
									k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
									((*yyvalp).operands)=MINUS;
									//op=$<operands>$;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,MINUS,yylval.r.lineNum,yylval.r.colNum);
								}
    break;

  case 216:
/* Line 868 of glr.c  */
#line 1057 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arith_expr: term\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
									((*yyvalp).operands)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.operands);
							}
    break;

  case 217:
/* Line 868 of glr.c  */
#line 1061 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() <<"arith_expr: term term_seq\n";
											k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
											//cout<<"the value of op is "<<op<<endl;
											((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,PLUS/**op**/,yylval.r.lineNum,yylval.r.colNum);
											
										}
    break;

  case 218:
/* Line 868 of glr.c  */
#line 1071 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '*' factor \n";
							((*yyvalp).operands)=MULT;
							op=((*yyvalp).operands);
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 219:
/* Line 868 of glr.c  */
#line 1076 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '/' factor \n";
								((*yyvalp).operands)=DIV;
								op=((*yyvalp).operands);
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 220:
/* Line 868 of glr.c  */
#line 1081 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '%' factor \n";
								((*yyvalp).operands)=MOD;
								op=((*yyvalp).operands);
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 221:
/* Line 868 of glr.c  */
#line 1086 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: DIV_2 factor \n";}
    break;

  case 222:
/* Line 868 of glr.c  */
#line 1087 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '*' factor \n";
									k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
									op=MULT;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,op,yylval.r.lineNum,yylval.r.colNum);
									}
    break;

  case 223:
/* Line 868 of glr.c  */
#line 1092 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '/' factor \n";
									k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
									op=DIV;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,op,yylval.r.lineNum,yylval.r.colNum);
									}
    break;

  case 224:
/* Line 868 of glr.c  */
#line 1097 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '%' factor \n";
									op=MOD;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,op,yylval.r.lineNum,yylval.r.colNum);
									}
    break;

  case 225:
/* Line 868 of glr.c  */
#line 1101 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq DIV_2 factor \n";}
    break;

  case 226:
/* Line 868 of glr.c  */
#line 1104 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"term: 	factor\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 227:
/* Line 868 of glr.c  */
#line 1105 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"term: 	factor factor_seq\n";
								k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
								((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,PLUS,yylval.r.lineNum,yylval.r.colNum);
							}
    break;

  case 228:
/* Line 868 of glr.c  */
#line 1111 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor: '+' factor \n";
						((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
						
					}
    break;

  case 229:
/* Line 868 of glr.c  */
#line 1115 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor: '-' factor \n";
						int* xx = new int (0);
						k = ast->createTypeNode((void*)xx,0,0,yylval.r.lineNum,yylval.r.colNum,INT);
						//k=ast->addNext(k,$<tn>2);
						((*yyvalp).tn) = ast->createExprNode(k,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,MINUS,yylval.r.lineNum,yylval.r.colNum);
						
						}
    break;

  case 230:
/* Line 868 of glr.c  */
#line 1122 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor: '~' factor \n";}
    break;

  case 231:
/* Line 868 of glr.c  */
#line 1123 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
					visit_num++;
					Streams::verbose() <<"factor: power\n";
					exist=false;
					if(visit_num==1)
					{
						//$<var>$=p->checkVariable(const_cast<char *>(temp_id2.back().c_str()),t, yylval.r.lineNum, yylval.r.colNum,true,is_list,is_dic);
						((*yyvalp).var)=p->checkVariable(const_cast<char *>(temp_id2.back().c_str()),t,exist, yylval.r.lineNum, yylval.r.colNum,true,false,is_dic);
						v=((*yyvalp).var);
						v1=v;
						if((!exist)&&(v!=NULL))
						{
							//cout<<"hellow world  "<<v->get_name()<<endl;
							lastNode=ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
									
							((*yyvalp).tn)=ast->createCallVarNode(temp_id2.back(),v,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);	
						}
						else
						{
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						} 
					}
					else if((!constant)&&(!is_list))
					{
						if(v1)
						{
							v1->init=true;
						}
						((*yyvalp).var)=p->checkVariable(const_cast<char *>(temp_id2.back().c_str()),t,exist, yylval.r.lineNum, yylval.r.colNum,false,is_list,is_dic);
						v=((*yyvalp).var);
						is_list=false;
						if(v!=NULL)
						{
							((*yyvalp).tn)=ast->createCallVarNode(temp_id2.back(),v,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);	
						}
						else
						{
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						}
					}
					else
					{
						if(v1)
						{
							v1->init=true;
						}
						((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
					}
						
				}
    break;

  case 232:
/* Line 868 of glr.c  */
#line 1175 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"trailer_seq: trailer \n";
										((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
									}
    break;

  case 233:
/* Line 868 of glr.c  */
#line 1178 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"trailer_seq: trailer_seq trailer \n";
										((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
									}
    break;

  case 234:
/* Line 868 of glr.c  */
#line 1183 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"power:	atom\n";
							//$<tn>$=ast->createCallVarNode(temp_id2.back(),NULL,NULL,NULL);
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
							
							}
    break;

  case 235:
/* Line 868 of glr.c  */
#line 1188 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"power: atom trailer_seq \n";
											cout<<"the top is "<<temp_id2.back()<<endl;
											((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
											dotvec.insert(dotvec.begin(),(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn));
											((*yyvalp).tn)=ast->createDotNode(dotvec,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
											dotvec.clear();
										}
    break;

  case 236:
/* Line 868 of glr.c  */
#line 1195 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"power: atom trailer_seq STAR_2 factor \n";}
    break;

  case 237:
/* Line 868 of glr.c  */
#line 1196 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"power: atom STAR_2 factor \n";}
    break;

  case 238:
/* Line 868 of glr.c  */
#line 1199 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"str_seq:	STRING \n";}
    break;

  case 239:
/* Line 868 of glr.c  */
#line 1200 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"str_seq:	str_seq STRING \n";}
    break;

  case 240:
/* Line 868 of glr.c  */
#line 1203 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'(' ')' \n";}
    break;

  case 241:
/* Line 868 of glr.c  */
#line 1204 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'(' testlist_comp ')' \n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn);arrayvec.clear();}
    break;

  case 242:
/* Line 868 of glr.c  */
#line 1205 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'[' ']' \n";
						arrayvec.clear();
						array_right=true;
						is_list=true;
						((*yyvalp).tn)=ast->createArrayNode(arrayvec,0,0,yylval.r.lineNum,yylval.r.colNum);
				}
    break;

  case 243:
/* Line 868 of glr.c  */
#line 1211 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' '}' \n";}
    break;

  case 244:
/* Line 868 of glr.c  */
#line 1212 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' '}' \n";
									((*yyvalp).tn)=ast->createArrayNode(arrayvec,0,0,yylval.r.lineNum,yylval.r.colNum);
									array_right=true;
									arrayvec.clear();
									}
    break;

  case 245:
/* Line 868 of glr.c  */
#line 1217 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' dictorsetmaker '}' \n";}
    break;

  case 246:
/* Line 868 of glr.c  */
#line 1218 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    { Streams::verbose() <<"atom: NAME\n";
									temp_id2.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal));
									((*yyvalp).tn)=ast->createCallVarNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal),NULL,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
					}
    break;

  case 247:
/* Line 868 of glr.c  */
#line 1222 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    { Streams::verbose() <<"atom: NAME\n";
									temp_id2.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.r.strVal));
									parameters.clear();
									((*yyvalp).tn)=ast->createCallTypeNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.r.strVal),parameters,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
									}
    break;

  case 248:
/* Line 868 of glr.c  */
#line 1227 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    { Streams::verbose() <<"atom: NAME\n";
									temp_id2.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.strVal));
									((*yyvalp).tn)=ast->createCallTypeNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.strVal),parameters/*$<tn>3*/,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
									parameters.clear();
												}
    break;

  case 249:
/* Line 868 of glr.c  */
#line 1232 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"trailer:	'[' subscriptlist ']'\n";
											((*yyvalp).var)=p->checkVariable((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.strVal),t,exist, yylval.r.lineNum, yylval.r.colNum,false,true,is_dic);
											is_list=true;
											if(((*yyvalp).var))
												((*yyvalp).tn)=ast->createArrayElementNode(((*yyvalp).var),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.strVal));
												}
    break;

  case 250:
/* Line 868 of glr.c  */
#line 1238 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_INT "<<(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.intVal)<<endl;;
						int* xx = new int ((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.intVal));
						//cout<<"yhe number is"<<*xx<<endl;
						//cout<<"reference"<<xx<<endl;
						constant=true;
						((*yyvalp).tn) = ast->createTypeNode((void*)xx,0,0,yylval.r.lineNum,yylval.r.colNum,INT);
						visit_num++;
														}
    break;

  case 251:
/* Line 868 of glr.c  */
#line 1246 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_FLOAT\n";
							constant=true;
							float* x=new float((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.floatVal));
							((*yyvalp).tn) = ast->createTypeNode((void*)x,0,0,yylval.r.lineNum,yylval.r.colNum,FLOAT);
						}
    break;

  case 252:
/* Line 868 of glr.c  */
#line 1251 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_FLOAT\n";
							long *xxx=new long((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.longVal));
							constant=true;
							((*yyvalp).tn) = ast->createTypeNode(&xxx,0,0,yylval.r.lineNum,yylval.r.colNum,LONG);
						}
    break;

  case 253:
/* Line 868 of glr.c  */
#line 1256 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: CHAR_VALUE\n";}
    break;

  case 254:
/* Line 868 of glr.c  */
#line 1257 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: str_seq\n";
									
									((*yyvalp).tn) = ast->createTypeNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal),0,0,yylval.r.lineNum,yylval.r.colNum,STRINGS);
								}
    break;

  case 255:
/* Line 868 of glr.c  */
#line 1261 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DOT_3\n";}
    break;

  case 256:
/* Line 868 of glr.c  */
#line 1262 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: NONE\n";}
    break;

  case 257:
/* Line 868 of glr.c  */
#line 1263 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: TRUE\n";
					((*yyvalp).tn) = ast->createTypeNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal),0,0,yylval.r.lineNum,yylval.r.colNum,True);
				}
    break;

  case 258:
/* Line 868 of glr.c  */
#line 1266 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: FALSE\n";
					((*yyvalp).tn) = ast->createTypeNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal),0,0,yylval.r.lineNum,yylval.r.colNum,False);
				}
    break;

  case 259:
/* Line 868 of glr.c  */
#line 1271 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: ',' test\n";
							arrayvec.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
							
							}
    break;

  case 260:
/* Line 868 of glr.c  */
#line 1275 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: ',' star_expr\n";}
    break;

  case 261:
/* Line 868 of glr.c  */
#line 1276 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: comma_test_star_seq ',' test\n";
														arrayvec.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
													}
    break;

  case 262:
/* Line 868 of glr.c  */
#line 1279 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: comma_test_star_seq ',' star_expr\n";}
    break;

  case 263:
/* Line 868 of glr.c  */
#line 1282 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test comp_for\n";}
    break;

  case 264:
/* Line 868 of glr.c  */
#line 1283 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test\n"; ((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
								arrayvec.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn));
							}
    break;

  case 265:
/* Line 868 of glr.c  */
#line 1286 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test   comma_test_star_seq\n";
												((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
												arrayvec.insert(arrayvec.begin(),(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn));
											}
    break;

  case 266:
/* Line 868 of glr.c  */
#line 1290 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 267:
/* Line 868 of glr.c  */
#line 1291 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";
													arrayvec.insert(arrayvec.begin(),(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn));
												}
    break;

  case 268:
/* Line 868 of glr.c  */
#line 1294 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 269:
/* Line 868 of glr.c  */
#line 1295 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 270:
/* Line 868 of glr.c  */
#line 1296 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 271:
/* Line 868 of glr.c  */
#line 1297 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 272:
/* Line 868 of glr.c  */
#line 1298 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 273:
/* Line 868 of glr.c  */
#line 1301 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"trailer:	'.' NAME\n";
							temp_id=temp_id2.back();
							temp_id=temp_id+"."+(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal);
						temp_id2.pop_back();
						temp_id2.push_back(temp_id);	
						((*yyvalp).tn)=ast->createCallVarNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal),NULL,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
						dotvec.push_back(((*yyvalp).tn));
						}
    break;

  case 274:
/* Line 868 of glr.c  */
#line 1309 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
									((*yyvalp).tn)=ast->createCallFunctionNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.strVal),NULL,NULL,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
									dotvec.push_back(((*yyvalp).tn));
								}
    break;

  case 275:
/* Line 868 of glr.c  */
#line 1313 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
									((*yyvalp).tn)=ast->createCallFunctionNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.strVal),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.tn),NULL,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
									dotvec.push_back(((*yyvalp).tn));
								}
    break;

  case 276:
/* Line 868 of glr.c  */
#line 1317 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"trailer:	'[' subscriptlist ']'\n";
												((*yyvalp).tn)=ast->createArrayElementNode(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
												dotvec.push_back(((*yyvalp).tn));
											}
    break;

  case 277:
/* Line 868 of glr.c  */
#line 1324 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_subscript_seq: ',' subscript\n";}
    break;

  case 278:
/* Line 868 of glr.c  */
#line 1325 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_subscript_seq: comma_subscript_seq ',' subscript\n";}
    break;

  case 279:
/* Line 868 of glr.c  */
#line 1328 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript\n";}
    break;

  case 280:
/* Line 868 of glr.c  */
#line 1329 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript comma_subscript_seq\n";}
    break;

  case 281:
/* Line 868 of glr.c  */
#line 1330 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript  ','\n";}
    break;

  case 282:
/* Line 868 of glr.c  */
#line 1331 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript comma_subscript_seq ','\n";}
    break;

  case 283:
/* Line 868 of glr.c  */
#line 1334 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 284:
/* Line 868 of glr.c  */
#line 1335 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':'\n";}
    break;

  case 285:
/* Line 868 of glr.c  */
#line 1336 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript: test ':'\n";((*yyvalp).tn)=((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 286:
/* Line 868 of glr.c  */
#line 1337 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' test\n";}
    break;

  case 287:
/* Line 868 of glr.c  */
#line 1338 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' sliceop\n";}
    break;

  case 288:
/* Line 868 of glr.c  */
#line 1339 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' test sliceop\n";}
    break;

  case 289:
/* Line 868 of glr.c  */
#line 1340 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' test\n";}
    break;

  case 290:
/* Line 868 of glr.c  */
#line 1341 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' sliceop\n";}
    break;

  case 291:
/* Line 868 of glr.c  */
#line 1342 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' test sliceop\n";}
    break;

  case 292:
/* Line 868 of glr.c  */
#line 1345 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"sliceop: ':'\n";}
    break;

  case 293:
/* Line 868 of glr.c  */
#line 1346 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"sliceop: ':' test\n";}
    break;

  case 294:
/* Line 868 of glr.c  */
#line 1349 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	',' expr \n";}
    break;

  case 295:
/* Line 868 of glr.c  */
#line 1350 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	',' star_expr \n";}
    break;

  case 296:
/* Line 868 of glr.c  */
#line 1351 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	comma_expr_star_seq ',' expr \n";}
    break;

  case 297:
/* Line 868 of glr.c  */
#line 1352 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	comma_expr_star_seq ',' star_expr \n";}
    break;

  case 298:
/* Line 868 of glr.c  */
#line 1355 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr \n";}
    break;

  case 299:
/* Line 868 of glr.c  */
#line 1356 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr comma_expr_star_seq \n";}
    break;

  case 300:
/* Line 868 of glr.c  */
#line 1357 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr \n";}
    break;

  case 301:
/* Line 868 of glr.c  */
#line 1358 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr comma_expr_star_seq \n";}
    break;

  case 302:
/* Line 868 of glr.c  */
#line 1359 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr ',' \n";}
    break;

  case 303:
/* Line 868 of glr.c  */
#line 1360 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr comma_expr_star_seq ',' \n";}
    break;

  case 304:
/* Line 868 of glr.c  */
#line 1361 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr ',' \n";}
    break;

  case 305:
/* Line 868 of glr.c  */
#line 1362 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr  comma_expr_star_seq ',' \n";}
    break;

  case 306:
/* Line 868 of glr.c  */
#line 1365 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test: ',' test \n";}
    break;

  case 307:
/* Line 868 of glr.c  */
#line 1366 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"',' test comma_test \n";}
    break;

  case 308:
/* Line 868 of glr.c  */
#line 1369 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	test \n";}
    break;

  case 309:
/* Line 868 of glr.c  */
#line 1370 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	test comma_test \n";}
    break;

  case 310:
/* Line 868 of glr.c  */
#line 1371 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	 test ','\n";}
    break;

  case 311:
/* Line 868 of glr.c  */
#line 1372 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	 test comma_test ','\n";}
    break;

  case 312:
/* Line 868 of glr.c  */
#line 1375 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_colon_test_seq:  ',' test ':' test \n";}
    break;

  case 313:
/* Line 868 of glr.c  */
#line 1376 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_colon_test_seq: comma_test_colon_test_seq ',' test ':' test\n";}
    break;

  case 314:
/* Line 868 of glr.c  */
#line 1378 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_seq: ',' test \n";}
    break;

  case 315:
/* Line 868 of glr.c  */
#line 1379 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_seq: comma_test_seq ',' test \n";}
    break;

  case 316:
/* Line 868 of glr.c  */
#line 1382 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comp_for \n";}
    break;

  case 317:
/* Line 868 of glr.c  */
#line 1383 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test \n";}
    break;

  case 318:
/* Line 868 of glr.c  */
#line 1384 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test ',' \n";}
    break;

  case 319:
/* Line 868 of glr.c  */
#line 1385 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comma_test_colon_test_seq \n";}
    break;

  case 320:
/* Line 868 of glr.c  */
#line 1386 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comma_test_colon_test_seq ','\n";}
    break;

  case 321:
/* Line 868 of glr.c  */
#line 1387 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test comp_for\n";}
    break;

  case 322:
/* Line 868 of glr.c  */
#line 1388 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test\n";}
    break;

  case 323:
/* Line 868 of glr.c  */
#line 1389 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ','\n";}
    break;

  case 324:
/* Line 868 of glr.c  */
#line 1390 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ','\n";}
    break;

  case 325:
/* Line 868 of glr.c  */
#line 1391 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test comma_test_seq ','\n";}
    break;

  case 326:
/* Line 868 of glr.c  */
#line 1393 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
								Streams::verbose() <<"classdef: classheader suite\n";
								((*yyvalp).type)=p->finishTypeDeclaration(t);
								((*yyvalp).tn)=ast->createClassNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.type),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
							}
    break;

  case 327:
/* Line 868 of glr.c  */
#line 1399 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
								Streams::verbose() << "class_h: CLASS ID \n";
								colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);

								inhertance_list.clear();
					}
    break;

  case 328:
/* Line 868 of glr.c  */
#line 1407 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
									Streams::verbose() << "class_h: access_modef CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 329:
/* Line 868 of glr.c  */
#line 1414 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
									Streams::verbose() << "class_h: STATIC CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 330:
/* Line 868 of glr.c  */
#line 1421 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
									Streams::verbose() << "class_h: FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 331:
/* Line 868 of glr.c  */
#line 1428 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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
#line 1435 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
												Streams::verbose() << "class_h: STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 333:
/* Line 868 of glr.c  */
#line 1442 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 334:
/* Line 868 of glr.c  */
#line 1449 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: STATIC access_modef CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 335:
/* Line 868 of glr.c  */
#line 1456 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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
#line 1463 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 337:
/* Line 868 of glr.c  */
#line 1470 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: access_modef STATIC CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 338:
/* Line 868 of glr.c  */
#line 1477 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: access_modef FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 339:
/* Line 868 of glr.c  */
#line 1484 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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
#line 1491 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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
#line 1498 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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
#line 1505 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 343:
/* Line 868 of glr.c  */
#line 1512 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
										Streams::verbose() << "class_h: CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
									t=((*yyvalp).type);
									inhertance_list.clear();
									temp_id="";
									acc_mod="";
								}
    break;

  case 344:
/* Line 868 of glr.c  */
#line 1520 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 345:
/* Line 868 of glr.c  */
#line 1527 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 346:
/* Line 868 of glr.c  */
#line 1534 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 347:
/* Line 868 of glr.c  */
#line 1541 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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
#line 1548 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 349:
/* Line 868 of glr.c  */
#line 1555 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 350:
/* Line 868 of glr.c  */
#line 1562 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 351:
/* Line 868 of glr.c  */
#line 1569 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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
#line 1576 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 353:
/* Line 868 of glr.c  */
#line 1583 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 354:
/* Line 868 of glr.c  */
#line 1590 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 355:
/* Line 868 of glr.c  */
#line 1597 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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
#line 1604 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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
#line 1611 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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
#line 1618 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 359:
/* Line 868 of glr.c  */
#line 1625 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
														Streams::verbose() << "class_h: CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
												((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
												acc_mod="";
											}
    break;

  case 360:
/* Line 868 of glr.c  */
#line 1632 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																Streams::verbose() << "class_h: access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 361:
/* Line 868 of glr.c  */
#line 1639 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 362:
/* Line 868 of glr.c  */
#line 1646 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 363:
/* Line 868 of glr.c  */
#line 1653 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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
#line 1660 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																	Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 365:
/* Line 868 of glr.c  */
#line 1667 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																		Streams::verbose() << "class_h: STATIC access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 366:
/* Line 868 of glr.c  */
#line 1674 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																	Streams::verbose() << "class_h: FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 367:
/* Line 868 of glr.c  */
#line 1681 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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
#line 1688 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 369:
/* Line 868 of glr.c  */
#line 1695 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS NAME '(' arglist ')' ':' \n";}
    break;

  case 370:
/* Line 868 of glr.c  */
#line 1696 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS NAME '(' arglist ')' ':' \n";}
    break;

  case 371:
/* Line 868 of glr.c  */
#line 1697 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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
#line 1704 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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
#line 1711 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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
#line 1718 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 375:
/* Line 868 of glr.c  */
#line 1728 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arg_comma_seq : argument ','\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 376:
/* Line 868 of glr.c  */
#line 1729 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arg_comma_seq : argument ',' arg_comma_seq\n";
													((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn));
											}
    break;

  case 377:
/* Line 868 of glr.c  */
#line 1734 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_arg_seq:	',' argument\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 378:
/* Line 868 of glr.c  */
#line 1735 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_arg_seq:	comma_arg_seq ',' argument\n";
													((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn));
												}
    break;

  case 379:
/* Line 868 of glr.c  */
#line 1740 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arglist: argument\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 380:
/* Line 868 of glr.c  */
#line 1741 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arglist: default_arg\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 381:
/* Line 868 of glr.c  */
#line 1743 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arglist: argument ','\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 382:
/* Line 868 of glr.c  */
#line 1745 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {    
						std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal));
						std::string erro("*" + tempstr);
						char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
						Streams::verbose() <<"arglist: '*' test\n";
				   }
    break;

  case 383:
/* Line 868 of glr.c  */
#line 1753 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 384:
/* Line 868 of glr.c  */
#line 1766 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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
#line 1775 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
										std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);

											Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";
										 }
    break;

  case 386:
/* Line 868 of glr.c  */
#line 1784 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
		 										std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
															Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";
													   }
    break;

  case 387:
/* Line 868 of glr.c  */
#line 1792 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 388:
/* Line 868 of glr.c  */
#line 1804 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
						std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("**" + tempstr);
										char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);Streams::verbose() <<"arglist: STAR_2 test\n";
					  }
    break;

  case 389:
/* Line 868 of glr.c  */
#line 1811 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq argument\n";
												((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
								}
    break;

  case 390:
/* Line 868 of glr.c  */
#line 1814 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq default_arg\n";}
    break;

  case 391:
/* Line 868 of glr.c  */
#line 1815 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq default_arg_comma_seq default_arg\n";}
    break;

  case 392:
/* Line 868 of glr.c  */
#line 1816 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq argument ','\n";}
    break;

  case 393:
/* Line 868 of glr.c  */
#line 1818 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {		
									std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
									Streams::verbose() <<"arglist: arg_comma_seq '*' test\n";
								  }
    break;

  case 394:
/* Line 868 of glr.c  */
#line 1826 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 395:
/* Line 868 of glr.c  */
#line 1839 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
												std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
												Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq\n";
											   }
    break;

  case 396:
/* Line 868 of glr.c  */
#line 1847 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
														std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
														Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_default_arg_seq\n";
													   }
    break;

  case 397:
/* Line 868 of glr.c  */
#line 1855 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																		std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
																		Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq comma_default_arg_seq\n";
																	 }
    break;

  case 398:
/* Line 868 of glr.c  */
#line 1863 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 399:
/* Line 868 of glr.c  */
#line 1876 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {	std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("**" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
										Streams::verbose() <<"arglist: arg_comma_seq STAR_2 test\n";
								    }
    break;

  case 400:
/* Line 868 of glr.c  */
#line 1886 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_default_arg_seq: ',' default_arg\n";}
    break;

  case 401:
/* Line 868 of glr.c  */
#line 1887 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_default_arg_seq: comma_default_arg_seq ',' default_arg\n";}
    break;

  case 402:
/* Line 868 of glr.c  */
#line 1890 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"default_arg_comma_seq: default_arg ','\n";}
    break;

  case 403:
/* Line 868 of glr.c  */
#line 1891 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"default_arg_comma_seq: default_arg_comma_seq default_arg ','\n";}
    break;

  case 404:
/* Line 868 of glr.c  */
#line 1894 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {parameters.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.r.strVal));Streams::verbose() <<"default_arg: test '=' test\n";}
    break;

  case 405:
/* Line 868 of glr.c  */
#line 1896 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {parameters.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal)); Streams::verbose() <<"argument: 	test\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 406:
/* Line 868 of glr.c  */
#line 1897 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {parameters.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.r.strVal));Streams::verbose() <<"argument: 	test comp_for\n";}
    break;

  case 407:
/* Line 868 of glr.c  */
#line 1901 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_iter:  comp_for\n";}
    break;

  case 408:
/* Line 868 of glr.c  */
#line 1902 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_iter:  comp_if\n";}
    break;

  case 409:
/* Line 868 of glr.c  */
#line 1905 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_for: 	FOR exprlist IN or_test\n";}
    break;

  case 410:
/* Line 868 of glr.c  */
#line 1906 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_for: FOR exprlist IN or_test comp_iter\n";}
    break;

  case 411:
/* Line 868 of glr.c  */
#line 1909 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_if: IF or_test\n";}
    break;

  case 412:
/* Line 868 of glr.c  */
#line 1910 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_if: IF or_test comp_iter\n";}
    break;


/* Line 868 of glr.c  */
#line 5598 "yacc.cpp"
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
  (!!((Yystate) == (-500)))

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
  (!!((Yytable_value) == (-393)))

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
#line 1913 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"

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
	//bool f = true;
	//if (f)
	//{
	//	addFile(input);
	//}
	
	//for(int i=0;i<sfiles.size();i++)
	//{
	//    string sf=sfiles[i];
	//	lineNum=colNum=1;
	//	sourceFile=sf;
	//	ifstream inf(sf);
	//	lexer = new yyFlexLexer(&inf);
	//	Parser* p = new Parser();
	//	p->parse();
	//}
	//addFile(input);
	sourceFile=input;
	fileStack.push(input);
	ifstream inf(input);
	lexer = new yyFlexLexer(&inf);
	Parser* p = new Parser();
	p->parse();
	Program::printErrors();
	//err->printErrQueue();
	system("pause");
}
#endif;