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
#line 4 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"

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
	//#include "compilerProject/common.h"
	//#define p  c->p
	//#define ast c->ast
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
	stack<char*> temp_id_stack;
	stack<string> fileStack;
	vector<string> parsedFile;
	vector<string> temp_id2;
	bool out_of_import=false;
	input_Types my_input;
	int visit_num=0;//this variable for detected that if in right side in expretion
	char* i_type;
	bool exist;
	bool inside_func=false;
	bool inside_while_cond = false;
	bool call_func=false;
	Node* k;
	Node* root;
	char* t_id=new char[10];
	char* acc_mod=new char[8];
	vector<char*> sto_mod;
	bool ss=false;
	bool ff=false;
	bool a_self=false;//this for self.x()
	bool pro= false;
	bool from_except=false;
	bool pp=true;
	bool self=false;
	bool is_list=false;
	bool in_def=false;
	Node* my_node;
	bool is_dic=false;
	bool array_right=false;
	int linefunc=0;
	int colmfunc=0;
	bool constant =false;
	Node* lastNode;
	ArrayNode* arr_node;
	operand op;
	operand comp_op;
	bool v_static,v_final;
	vector<char *>inhertance_list;
	vector<Node*>arrayvec;
	vector<Node*>dotvec;
	vector<Node*>amer_par;
	vector<Node*>func_call;
	extern int lineNum;
	extern int colNum;
	vector<char *>ID_list;
	//vector<Node *>_par;
	vector<Node *>df_par;
	Variable* v;
	Variable* v1=new Variable();
	Type* t;
	Node* expnode;
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
	//common *c=new common();

/* Line 207 of glr.c  */
#line 164 "yacc.cpp"

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
#line 193 "yacc.cpp"

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
#define YYLAST   1458

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  113
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  115
/* YYNRULES -- Number of rules.  */
#define YYNRULES  447
/* YYNRULES -- Number of states.  */
#define YYNSTATES  744
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 9
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYTRANSLATE(X) -- Bison symbol number corresponding to X.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   345

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   100,   108,     2,
      92,   103,    98,    96,    91,    97,   105,    99,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   102,   101,
      94,   104,    95,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    93,     2,   110,   107,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   111,   106,   112,   109,     2,     2,     2,
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
      85,    86,    87,    88,    89,    90
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     5,     9,    13,    15,    18,    20,    23,
      30,    38,    43,    49,    57,    65,    71,    77,    86,    95,
     102,   109,   118,   127,   134,   141,   151,   161,   169,   177,
     186,   195,   202,   209,   219,   229,   237,   245,   255,   265,
     273,   281,   283,   287,   290,   292,   294,   297,   300,   302,
     304,   306,   308,   310,   312,   314,   316,   323,   328,   330,
     332,   334,   338,   340,   342,   345,   348,   352,   355,   358,
     360,   363,   365,   368,   370,   374,   377,   380,   383,   386,
     388,   390,   392,   394,   396,   398,   400,   402,   404,   406,
     408,   410,   412,   414,   416,   418,   421,   424,   426,   428,
     430,   432,   434,   436,   439,   441,   443,   446,   449,   453,
     455,   458,   460,   464,   466,   469,   472,   476,   479,   483,
     486,   490,   493,   497,   499,   501,   503,   505,   507,   509,
     512,   515,   519,   523,   527,   532,   537,   542,   547,   553,
     559,   564,   569,   575,   581,   587,   593,   596,   600,   602,
     606,   609,   612,   616,   621,   627,   629,   633,   637,   640,
     646,   648,   652,   656,   662,   668,   674,   683,   692,   701,
     710,   713,   716,   719,   723,   730,   736,   741,   744,   747,
     751,   755,   760,   765,   768,   772,   777,   783,   785,   789,
     791,   794,   799,   801,   804,   807,   810,   812,   814,   816,
     822,   825,   829,   831,   834,   837,   841,   843,   846,   849,
     851,   854,   858,   860,   863,   865,   867,   869,   871,   873,
     875,   877,   879,   882,   884,   887,   890,   893,   897,   899,
     902,   905,   909,   911,   914,   917,   921,   923,   926,   929,
     932,   936,   940,   942,   945,   948,   951,   955,   959,   961,
     964,   967,   970,   973,   976,   980,   984,   988,   992,   994,
     997,  1000,  1003,  1006,  1008,  1010,  1013,  1015,  1018,  1023,
    1027,  1029,  1032,  1035,  1039,  1042,  1045,  1049,  1053,  1055,
    1059,  1064,  1069,  1071,  1073,  1075,  1077,  1079,  1081,  1083,
    1085,  1087,  1090,  1093,  1097,  1101,  1104,  1106,  1109,  1112,
    1116,  1119,  1121,  1124,  1127,  1131,  1134,  1139,  1145,  1151,
    1154,  1158,  1160,  1163,  1166,  1170,  1172,  1174,  1177,  1181,
    1185,  1190,  1193,  1196,  1200,  1202,  1205,  1208,  1211,  1215,
    1219,  1221,  1224,  1226,  1229,  1232,  1236,  1239,  1243,  1246,
    1250,  1252,  1255,  1258,  1262,  1267,  1273,  1276,  1280,  1285,
    1289,  1294,  1299,  1305,  1308,  1310,  1313,  1316,  1320,  1324,
    1328,  1331,  1335,  1339,  1343,  1348,  1353,  1358,  1363,  1369,
    1375,  1380,  1385,  1391,  1397,  1403,  1409,  1414,  1420,  1426,
    1432,  1439,  1446,  1453,  1460,  1468,  1476,  1483,  1490,  1498,
    1506,  1514,  1522,  1528,  1535,  1542,  1549,  1557,  1565,  1573,
    1581,  1590,  1599,  1607,  1615,  1624,  1633,  1642,  1651,  1654,
    1658,  1661,  1665,  1667,  1669,  1672,  1675,  1681,  1685,  1689,
    1694,  1701,  1704,  1707,  1710,  1714,  1718,  1722,  1729,  1734,
    1739,  1745,  1753,  1757,  1760,  1763,  1767,  1770,  1774,  1777,
    1780,  1782,  1785,  1787,  1789,  1794,  1800,  1803
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const short int yyrhs[] =
{
     114,     0,    -1,   115,    -1,   140,   101,   116,    -1,   140,
       1,   116,    -1,   116,    -1,   215,   116,    -1,   215,    -1,
     118,   173,    -1,    15,    44,   120,    24,   174,   102,    -1,
      15,   132,    44,   120,    24,   174,   102,    -1,    15,    44,
     120,   102,    -1,    15,   132,    44,   120,   102,    -1,    15,
      13,    44,   120,    24,   174,   102,    -1,    15,    12,    44,
     120,    24,   174,   102,    -1,    15,    13,    44,   120,   102,
      -1,    15,    12,    44,   120,   102,    -1,    15,    13,    12,
      44,   120,    24,   174,   102,    -1,    15,    12,    13,    44,
     120,    24,   174,   102,    -1,    15,    13,    12,    44,   120,
     102,    -1,    15,    12,    13,    44,   120,   102,    -1,    15,
      12,   132,    44,   120,    24,   174,   102,    -1,    15,    13,
     132,    44,   120,    24,   174,   102,    -1,    15,    13,   132,
      44,   120,   102,    -1,    15,    12,   132,    44,   120,   102,
      -1,    15,    13,    12,   132,    44,   120,    24,   174,   102,
      -1,    15,    12,    13,   132,    44,   120,    24,   174,   102,
      -1,    15,    13,    12,   132,    44,   120,   102,    -1,    15,
      12,    13,   132,    44,   120,   102,    -1,    15,   132,    13,
      44,   120,    24,   174,   102,    -1,    15,   132,    12,    44,
     120,    24,   174,   102,    -1,    15,   132,    13,    44,   120,
     102,    -1,    15,   132,    12,    44,   120,   102,    -1,    15,
     132,    13,    12,    44,   120,    24,   174,   102,    -1,    15,
     132,    12,    13,    44,   120,    24,   174,   102,    -1,    15,
     132,    13,    12,    44,   120,   102,    -1,    15,   132,    12,
      13,    44,   120,   102,    -1,    15,    13,   132,    12,    44,
     120,    24,   174,   102,    -1,    15,    12,   132,    13,    44,
     120,    24,   174,   102,    -1,    15,    13,   132,    12,    44,
     120,   102,    -1,    15,    12,   132,    13,    44,   120,   102,
      -1,    92,    -1,   119,   219,   103,    -1,    92,   103,    -1,
     122,    -1,   150,    -1,   123,   101,    -1,   123,     1,    -1,
     126,    -1,   134,    -1,   135,    -1,   136,    -1,   140,    -1,
     148,    -1,   149,    -1,   133,    -1,    53,    92,   199,    91,
     125,   103,    -1,    53,    92,   125,   103,    -1,    54,    -1,
      55,    -1,    56,    -1,   128,   131,   211,    -1,   128,    -1,
     151,    -1,   151,   127,    -1,   128,   127,    -1,   104,   128,
     127,    -1,   104,   128,    -1,   104,   124,    -1,   130,    -1,
     130,    91,    -1,    91,    -1,   174,   130,    -1,   174,    -1,
     183,   130,    91,    -1,   183,    91,    -1,    91,   174,    -1,
      91,   183,    -1,   130,   129,    -1,   129,    -1,    26,    -1,
      27,    -1,    58,    -1,    28,    -1,    29,    -1,    30,    -1,
      31,    -1,    32,    -1,    33,    -1,    34,    -1,    35,    -1,
      36,    -1,    61,    -1,    62,    -1,    63,    -1,    52,   209,
      -1,    50,   209,    -1,    73,    -1,   137,    -1,   138,    -1,
     139,    -1,    75,    -1,    76,    -1,    51,   211,    -1,    51,
      -1,   141,    -1,     4,   143,    -1,    91,   144,    -1,   142,
      91,   144,    -1,   144,    -1,   144,   142,    -1,   145,    -1,
     145,    47,    44,    -1,    44,    -1,    44,   146,    -1,   105,
      44,    -1,   146,   105,    44,    -1,    91,    44,    -1,   147,
      91,    44,    -1,    57,    44,    -1,    57,    44,   147,    -1,
      25,    44,    -1,    25,    44,   147,    -1,   156,    -1,   159,
      -1,   162,    -1,   165,    -1,   169,    -1,   117,    -1,    15,
     215,    -1,    15,    44,    -1,    15,   132,    44,    -1,    15,
      13,    44,    -1,    15,    12,    44,    -1,    15,    13,    12,
      44,    -1,    15,    12,    13,    44,    -1,    15,    13,   132,
      44,    -1,    15,    12,   132,    44,    -1,    15,    13,    12,
     132,    44,    -1,    15,    12,    13,   132,    44,    -1,    15,
     132,    13,    44,    -1,    15,   132,    12,    44,    -1,    15,
     132,    13,    12,    44,    -1,    15,   132,    12,    13,    44,
      -1,    15,    13,   132,    12,    44,    -1,    15,    12,   132,
      13,    44,    -1,   154,   173,    -1,   152,   154,   173,    -1,
      18,    -1,   153,   174,   102,    -1,    16,   102,    -1,   158,
     173,    -1,   158,   173,   152,    -1,   158,   173,   155,   173,
      -1,   158,   173,   152,   155,   173,    -1,    17,    -1,   157,
     174,   102,    -1,   157,   174,     1,    -1,   161,   173,    -1,
     161,   173,    16,   102,   173,    -1,    19,    -1,   160,   174,
     102,    -1,   160,   174,     1,    -1,   163,    21,   211,   102,
     173,    -1,   163,    21,   211,     1,   173,    -1,   163,     1,
     211,   102,   173,    -1,   163,    21,   211,   102,   173,    16,
     102,   173,    -1,   163,    21,   211,     1,   173,    16,   102,
     173,    -1,   163,    21,   211,   102,   173,    16,     1,   173,
      -1,   163,     1,   211,   102,   173,    16,   102,   173,    -1,
      20,   209,    -1,    22,   102,    -1,    22,     1,    -1,   164,
     173,   167,    -1,   164,   173,   167,    16,   102,   173,    -1,
     164,   173,   167,   166,   173,    -1,   164,   173,   166,   173,
      -1,    23,   102,    -1,    23,     1,    -1,   171,   102,   173,
      -1,   171,     1,   173,    -1,   167,   171,   102,   173,    -1,
     167,   171,     1,   173,    -1,    91,   170,    -1,   168,    91,
     170,    -1,    46,   170,   102,   173,    -1,    46,   170,   168,
     102,   173,    -1,   174,    -1,   174,    47,   185,    -1,    72,
      -1,    72,   174,    -1,    72,   174,    47,    44,    -1,   121,
      -1,   172,   121,    -1,   172,     6,    -1,   172,     1,    -1,
       6,    -1,     1,    -1,   176,    -1,   176,    17,   176,    16,
     174,    -1,     8,   178,    -1,   175,     8,   178,    -1,   178,
      -1,   178,   175,    -1,     9,   179,    -1,   177,     9,   179,
      -1,   179,    -1,   179,   177,    -1,    10,   179,    -1,   181,
      -1,   182,   185,    -1,   180,   182,   185,    -1,   185,    -1,
     185,   180,    -1,    94,    -1,    95,    -1,    49,    -1,    71,
      -1,    70,    -1,    37,    -1,    11,    -1,    21,    -1,    10,
      21,    -1,    68,    -1,    68,    10,    -1,    98,   185,    -1,
     106,   187,    -1,   184,   106,   187,    -1,   187,    -1,   187,
     184,    -1,   107,   189,    -1,   186,   107,   189,    -1,   189,
      -1,   189,   186,    -1,   108,   191,    -1,   188,   108,   191,
      -1,   191,    -1,   191,   188,    -1,    59,   193,    -1,    65,
     193,    -1,   190,    59,   193,    -1,   190,    65,   193,    -1,
     193,    -1,   193,   190,    -1,    96,   195,    -1,    97,   195,
      -1,   192,    96,   195,    -1,   192,    97,   195,    -1,   195,
      -1,   195,   192,    -1,    98,   196,    -1,    99,   196,    -1,
     100,   196,    -1,    69,   196,    -1,   194,    98,   196,    -1,
     194,    99,   196,    -1,   194,   100,   196,    -1,   194,    69,
     196,    -1,   196,    -1,   196,   194,    -1,    96,   196,    -1,
      97,   196,    -1,   109,   196,    -1,   198,    -1,   203,    -1,
     197,   203,    -1,   200,    -1,   200,   197,    -1,   200,   197,
      40,   196,    -1,   200,    40,   196,    -1,    66,    -1,   199,
      66,    -1,    92,   103,    -1,    92,   202,   103,    -1,    93,
     110,    -1,   111,   112,    -1,    93,   202,   110,    -1,   111,
     214,   112,    -1,    44,    -1,    44,    92,   103,    -1,    44,
      92,   209,   103,    -1,    44,    93,   205,   110,    -1,    41,
      -1,    43,    -1,    42,    -1,    74,    -1,   199,    -1,    45,
      -1,    67,    -1,    39,    -1,    38,    -1,    91,   174,    -1,
      91,   183,    -1,   201,    91,   174,    -1,   201,    91,   183,
      -1,   174,   226,    -1,   174,    -1,   174,   201,    -1,   174,
      91,    -1,   174,   201,    91,    -1,   183,   226,    -1,   183,
      -1,   183,   201,    -1,   183,    91,    -1,   183,   201,    91,
      -1,   105,    44,    -1,   105,    44,    92,   103,    -1,   105,
      44,   119,   209,   103,    -1,   105,    44,    93,   205,   110,
      -1,    91,   206,    -1,   204,    91,   206,    -1,   206,    -1,
     206,   204,    -1,   206,    91,    -1,   206,   204,    91,    -1,
     174,    -1,   102,    -1,   174,   102,    -1,   174,   102,   174,
      -1,   174,   102,   207,    -1,   174,   102,   174,   207,    -1,
     102,   174,    -1,   102,   207,    -1,   102,   174,   207,    -1,
     102,    -1,   102,   174,    -1,    91,   185,    -1,    91,   183,
      -1,   208,    91,   185,    -1,   208,    91,   183,    -1,   185,
      -1,   185,   208,    -1,   183,    -1,   183,   208,    -1,   185,
      91,    -1,   185,   208,    91,    -1,   183,    91,    -1,   183,
     208,    91,    -1,    91,   174,    -1,    91,   174,   210,    -1,
     174,    -1,   174,   210,    -1,   174,    91,    -1,   174,   210,
      91,    -1,    91,   174,   102,   174,    -1,   212,    91,   174,
     102,   174,    -1,    91,   174,    -1,   213,    91,   174,    -1,
     174,   102,   174,   226,    -1,   174,   102,   174,    -1,   174,
     102,   174,    91,    -1,   174,   102,   174,   212,    -1,   174,
     102,   174,   212,    91,    -1,   174,   226,    -1,   174,    -1,
     174,    91,    -1,   174,   213,    -1,   174,   213,    91,    -1,
     216,   102,   173,    -1,   216,     1,   173,    -1,     5,    44,
      -1,   132,     5,    44,    -1,    13,     5,    44,    -1,    12,
       5,    44,    -1,    13,    12,     5,    44,    -1,    12,    13,
       5,    44,    -1,    12,   132,     5,    44,    -1,    13,   132,
       5,    44,    -1,    13,    12,   132,     5,    44,    -1,    12,
      13,   132,     5,    44,    -1,   132,    13,     5,    44,    -1,
     132,    12,     5,    44,    -1,   132,    13,    12,     5,    44,
      -1,   132,    12,    13,     5,    44,    -1,    13,   132,    12,
       5,    44,    -1,    12,   132,    13,     5,    44,    -1,     5,
      44,    92,   103,    -1,   132,     5,    44,    92,   103,    -1,
      13,     5,    44,    92,   103,    -1,    12,     5,    44,    92,
     103,    -1,    13,    12,     5,    44,    92,   103,    -1,    12,
      13,     5,    44,    92,   103,    -1,    13,   132,     5,    44,
      92,   103,    -1,    12,   132,     5,    44,    92,   103,    -1,
      13,    12,   132,     5,    44,    92,   103,    -1,    12,    13,
     132,     5,    44,    92,   103,    -1,   132,    13,     5,    44,
      92,   103,    -1,   132,    12,     5,    44,    92,   103,    -1,
     132,    13,    12,     5,    44,    92,   103,    -1,   132,    12,
      13,     5,    44,    92,   103,    -1,    13,   132,    12,     5,
      44,    92,   103,    -1,    12,   132,    13,     5,    44,    92,
     103,    -1,     5,    44,    92,   143,   103,    -1,   132,     5,
      44,    92,   143,   103,    -1,    13,     5,    44,    92,   143,
     103,    -1,    12,     5,    44,    92,   143,   103,    -1,    13,
      12,     5,    44,    92,   143,   103,    -1,    12,    13,     5,
      44,    92,   143,   103,    -1,    13,   132,     5,    44,    92,
     143,   103,    -1,    12,   132,     5,    44,    92,   143,   103,
      -1,    13,    12,   132,     5,    44,    92,   143,   103,    -1,
      12,    13,   132,     5,    44,    92,   143,   103,    -1,   132,
      13,     5,    44,    92,   143,   103,    -1,   132,    12,     5,
      44,    92,   143,   103,    -1,   132,    13,    12,     5,    44,
      92,   143,   103,    -1,   132,    12,    13,     5,    44,    92,
     143,   103,    -1,    13,   132,    12,     5,    44,    92,   143,
     103,    -1,    12,   132,    13,     5,    44,    92,   143,   103,
      -1,   224,    91,    -1,   217,   224,    91,    -1,    91,   224,
      -1,   218,    91,   224,    -1,   224,    -1,   223,    -1,   224,
      91,    -1,    98,   174,    -1,    98,   174,    91,    40,   174,
      -1,    98,   174,   218,    -1,    98,   174,   220,    -1,    98,
     174,   218,   220,    -1,    98,   174,   218,    91,    40,   174,
      -1,    40,   174,    -1,   217,   224,    -1,   217,   223,    -1,
     217,   221,   223,    -1,   217,   224,    91,    -1,   217,    98,
     174,    -1,   217,    98,   174,    91,    40,   174,    -1,   217,
      98,   174,   218,    -1,   217,    98,   174,   220,    -1,   217,
      98,   174,   218,   220,    -1,   217,    98,   174,   218,    91,
      40,   174,    -1,   217,    40,   174,    -1,   221,   223,    -1,
      91,   223,    -1,   220,    91,   223,    -1,   223,    91,    -1,
     221,   223,    91,    -1,   174,   104,    -1,   222,   174,    -1,
     174,    -1,   174,   226,    -1,   226,    -1,   227,    -1,    20,
     209,    21,   176,    -1,    20,   209,    21,   176,   225,    -1,
      17,   176,    -1,    17,   176,   225,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   157,   157,   174,   175,   176,   180,   185,   202,   213,
     214,   215,   226,   236,   237,   238,   247,   256,   257,   258,
     267,   276,   285,   286,   294,   303,   304,   305,   314,   322,
     323,   324,   333,   342,   343,   344,   353,   361,   362,   363,
     371,   381,   384,   385,   388,   391,   395,   398,   403,   407,
     411,   415,   419,   423,   427,   428,   435,   449,   455,   458,
     461,   465,   466,   467,   472,   495,   528,   529,   530,   535,
     536,   537,   538,   539,   543,   544,   547,   548,   551,   552,
     554,   555,   556,   557,   558,   559,   560,   561,   562,   563,
     564,   565,   568,   569,   570,   572,   576,   582,   588,   592,
     596,   602,   608,   614,   618,   625,   628,   666,   671,   676,
     681,   690,   696,   699,   728,   733,   737,   743,   749,   759,
     766,   775,   776,   779,   783,   784,   788,   792,   793,   797,
     802,   810,   819,   827,   835,   843,   851,   859,   867,   875,
     883,   891,   899,   907,   915,   923,   932,   937,   945,   949,
     955,   960,   965,   970,   976,   985,   988,   993,   998,  1003,
    1010,  1013,  1019,  1025,  1030,  1035,  1040,  1046,  1052,  1058,
    1065,  1069,  1072,  1076,  1081,  1090,  1099,  1106,  1114,  1123,
    1132,  1141,  1154,  1169,  1170,  1173,  1174,  1177,  1178,  1181,
    1187,  1195,  1203,  1206,  1219,  1223,  1227,  1228,  1231,  1232,
    1236,  1237,  1242,  1243,  1248,  1249,  1254,  1255,  1260,  1263,
    1266,  1271,  1277,  1281,  1288,  1292,  1293,  1298,  1299,  1300,
    1301,  1302,  1303,  1304,  1305,  1308,  1311,  1312,  1314,  1318,
    1321,  1322,  1325,  1326,  1329,  1330,  1333,  1334,  1337,  1338,
    1339,  1340,  1343,  1347,  1350,  1357,  1368,  1374,  1382,  1386,
    1396,  1401,  1406,  1411,  1412,  1417,  1422,  1426,  1429,  1430,
    1436,  1440,  1447,  1448,  1522,  1526,  1532,  1536,  1547,  1548,
    1551,  1552,  1555,  1556,  1557,  1564,  1565,  1572,  1573,  1599,
    1606,  1612,  1623,  1631,  1636,  1641,  1642,  1651,  1652,  1653,
    1660,  1669,  1673,  1674,  1677,  1680,  1681,  1684,  1688,  1689,
    1692,  1693,  1694,  1695,  1696,  1699,  1712,  1731,  1751,  1760,
    1761,  1764,  1765,  1768,  1769,  1774,  1775,  1776,  1779,  1782,
    1783,  1784,  1787,  1788,  1791,  1792,  1795,  1802,  1803,  1812,
    1815,  1823,  1834,  1835,  1836,  1846,  1856,  1857,  1860,  1861,
    1864,  1865,  1866,  1867,  1870,  1871,  1873,  1874,  1877,  1878,
    1879,  1880,  1881,  1882,  1883,  1884,  1885,  1886,  1888,  1893,
    1899,  1907,  1914,  1921,  1928,  1935,  1942,  1949,  1956,  1963,
    1970,  1977,  1984,  1991,  1998,  2005,  2012,  2020,  2027,  2034,
    2041,  2048,  2055,  2062,  2069,  2076,  2083,  2090,  2097,  2104,
    2111,  2118,  2125,  2132,  2139,  2146,  2153,  2160,  2167,  2174,
    2181,  2188,  2195,  2196,  2197,  2204,  2211,  2218,  2228,  2229,
    2234,  2235,  2242,  2245,  2247,  2249,  2259,  2274,  2284,  2294,
    2303,  2319,  2328,  2331,  2332,  2333,  2335,  2344,  2361,  2371,
    2380,  2389,  2406,  2413,  2426,  2427,  2430,  2431,  2433,  2438,
    2446,  2451,  2457,  2458,  2461,  2462,  2465,  2466
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
  "RETURN", "PRINT", "INPUT", "INPUT_INT", "INPUT_FLOAT", "INPUT_STRING",
  "GLOBAL", "STAR_EQUAL", "LESS_THAN_2", "RAISE", "PRIVATE", "PUBLIC",
  "PROTECTED", "YIELD", "MORE_THAN_2", "STRING", "NONE", "IS", "DIV_2",
  "LESS_OR_EQUAL", "MORE_OR_EQUAL", "EXCEPT", "PASS", "CHAR_VALUE",
  "BREAK", "CONTINUE", "stmt_14", "stmt_13", "stmt_12", "stmt_11",
  "stmt_10", "stmt_9", "stmt_8", "stmt_7", "stmt_6", "stmt_5", "stmt_4",
  "stmt_3", "stmt_2", "stmt_1", "','", "'('", "'['", "'<'", "'>'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "';'", "':'", "')'", "'='", "'.'", "'|'",
  "'^'", "'&'", "'~'", "']'", "'{'", "'}'", "$accept", "file_input",
  "program", "temp2", "funcdef", "funcheader", "inside_func", "parameters",
  "stmt", "simple_stmt", "small_stmt", "input_stmt", "input_choise",
  "expr_stmt", "right_testlist", "testlist_star_expr", "comma_test_star",
  "comma_test_star_seqJ", "augassign", "access", "print_stmt", "del_stmt",
  "pass_stmt", "flow_stmt", "break_stmt", "continue_stmt", "return_stmt",
  "import_stmt", "import_name", "comma_dotted_as_name_seq",
  "dotted_as_names", "dotted_as_name", "dotted_name", "dotted_name_seq",
  "comma_name_seq", "global_stmt", "nonlocal_stmt", "compound_stmt",
  "vardef", "elif_seq", "elif_header_name", "elif_header", "else_stmt",
  "if_stmt", "if_header_name", "if_header", "while_stmt",
  "while_header_name", "while_header", "for_stmt", "for_header",
  "try_header", "try_stmt", "finally_stmt", "try_except_cla_seq",
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
  "default_arg_comma_seq", "in_default", "default_arg", "argument",
  "comp_iter", "comp_for", "comp_if", YY_NULL
};
#endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,   113,   114,   115,   115,   115,   116,   116,   117,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   119,   120,   120,   121,   121,   122,   122,   123,   123,
     123,   123,   123,   123,   123,   123,   124,   124,   125,   125,
     125,   126,   126,   126,   126,   126,   127,   127,   127,   128,
     128,   128,   128,   128,   128,   128,   129,   129,   130,   130,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   132,   132,   132,   133,   134,   135,   136,   136,
     136,   137,   138,   139,   139,   140,   141,   142,   142,   143,
     143,   144,   144,   145,   145,   146,   146,   147,   147,   148,
     148,   149,   149,   150,   150,   150,   150,   150,   150,   150,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   152,   152,   153,   154,
     155,   156,   156,   156,   156,   157,   158,   158,   159,   159,
     160,   161,   161,   162,   162,   162,   162,   162,   162,   162,
     163,   164,   164,   165,   165,   165,   165,   166,   166,   167,
     167,   167,   167,   168,   168,   169,   169,   170,   170,   171,
     171,   171,   172,   172,   173,   173,   173,   173,   174,   174,
     175,   175,   176,   176,   177,   177,   178,   178,   179,   179,
     180,   180,   181,   181,   182,   182,   182,   182,   182,   182,
     182,   182,   182,   182,   182,   183,   184,   184,   185,   185,
     186,   186,   187,   187,   188,   188,   189,   189,   190,   190,
     190,   190,   191,   191,   192,   192,   192,   192,   193,   193,
     194,   194,   194,   194,   194,   194,   194,   194,   195,   195,
     196,   196,   196,   196,   197,   197,   198,   198,   198,   198,
     199,   199,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   201,   201,   201,   201,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   203,   203,   203,   203,   204,
     204,   205,   205,   205,   205,   206,   206,   206,   206,   206,
     206,   206,   206,   206,   207,   207,   208,   208,   208,   208,
     209,   209,   209,   209,   209,   209,   209,   209,   210,   210,
     211,   211,   211,   211,   212,   212,   213,   213,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   215,   215,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   217,   217,
     218,   218,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   220,   220,   221,   221,   222,   223,
     224,   224,   225,   225,   226,   226,   227,   227
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     3,     3,     1,     2,     1,     2,     6,
       7,     4,     5,     7,     7,     5,     5,     8,     8,     6,
       6,     8,     8,     6,     6,     9,     9,     7,     7,     8,
       8,     6,     6,     9,     9,     7,     7,     9,     9,     7,
       7,     1,     3,     2,     1,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     6,     4,     1,     1,
       1,     3,     1,     1,     2,     2,     3,     2,     2,     1,
       2,     1,     2,     1,     3,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     2,     2,     3,     1,
       2,     1,     3,     1,     2,     2,     3,     2,     3,     2,
       3,     2,     3,     1,     1,     1,     1,     1,     1,     2,
       2,     3,     3,     3,     4,     4,     4,     4,     5,     5,
       4,     4,     5,     5,     5,     5,     2,     3,     1,     3,
       2,     2,     3,     4,     5,     1,     3,     3,     2,     5,
       1,     3,     3,     5,     5,     5,     8,     8,     8,     8,
       2,     2,     2,     3,     6,     5,     4,     2,     2,     3,
       3,     4,     4,     2,     3,     4,     5,     1,     3,     1,
       2,     4,     1,     2,     2,     2,     1,     1,     1,     5,
       2,     3,     1,     2,     2,     3,     1,     2,     2,     1,
       2,     3,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     2,     2,     3,     1,     2,
       2,     3,     1,     2,     2,     3,     1,     2,     2,     2,
       3,     3,     1,     2,     2,     2,     3,     3,     1,     2,
       2,     2,     2,     2,     3,     3,     3,     3,     1,     2,
       2,     2,     2,     1,     1,     2,     1,     2,     4,     3,
       1,     2,     2,     3,     2,     2,     3,     3,     1,     3,
       4,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     3,     3,     2,     1,     2,     2,     3,
       2,     1,     2,     2,     3,     2,     4,     5,     5,     2,
       3,     1,     2,     2,     3,     1,     1,     2,     3,     3,
       4,     2,     2,     3,     1,     2,     2,     2,     3,     3,
       1,     2,     1,     2,     2,     3,     2,     3,     2,     3,
       1,     2,     2,     3,     4,     5,     2,     3,     4,     3,
       4,     4,     5,     2,     1,     2,     2,     3,     3,     3,
       2,     3,     3,     3,     4,     4,     4,     4,     5,     5,
       4,     4,     5,     5,     5,     5,     4,     5,     5,     5,
       6,     6,     6,     6,     7,     7,     6,     6,     7,     7,
       7,     7,     5,     6,     6,     6,     7,     7,     7,     7,
       8,     8,     7,     7,     8,     8,     8,     8,     2,     3,
       2,     3,     1,     1,     2,     2,     5,     3,     3,     4,
       6,     2,     2,     2,     3,     3,     3,     6,     4,     4,
       5,     7,     3,     2,     2,     3,     2,     3,     2,     2,
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
       0,     0,     0,     0,     0,    92,    93,    94,     0,     2,
       5,     0,     0,   105,     7,     0,   113,   106,   109,   111,
     360,     0,     0,     0,     0,     0,     0,     1,     0,     0,
       0,     0,     0,     6,     0,     0,     0,   114,     0,   110,
       0,     0,   363,     0,     0,     0,     0,   362,     0,     0,
       0,     0,   361,     0,     0,     0,     0,     4,     3,   197,
     196,     0,     0,   155,   160,     0,     0,     0,   290,   289,
     282,   284,   283,   278,   287,     0,     0,   104,     0,     0,
     270,   288,    97,   285,   101,   102,    71,     0,     0,     0,
       0,     0,     0,     0,   128,     0,   192,    44,     0,    48,
      62,    79,    69,    55,    49,    50,    51,    98,    99,   100,
      52,    53,    54,    45,    63,   123,     0,     0,   124,     0,
       0,   125,     0,     0,   126,   127,     0,   359,    73,   198,
     202,   206,   209,     0,   212,   228,   232,   236,   242,   248,
     258,   263,   286,   266,   358,   115,     0,   107,     0,   112,
     376,     0,     0,   365,     0,   366,     0,     0,   364,     0,
     367,     0,     0,   371,     0,   370,     0,   208,     0,     0,
     130,     0,   129,   332,   330,   170,   172,   171,   121,     0,
       0,     0,   187,    96,   340,   103,    95,   119,    76,    77,
     272,   296,   301,     0,   274,     0,   260,   261,   225,   262,
     275,   354,     0,     8,    47,    46,    80,    81,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    82,     0,    65,
       0,    70,    78,    64,     0,   151,     0,   158,     0,     0,
       0,   195,   194,   193,     0,    72,     0,     0,   203,     0,
     207,    75,     0,     0,   220,   221,   219,   216,   223,   218,
     217,   214,   215,   213,     0,     0,   229,     0,   233,     0,
     237,     0,     0,   243,     0,     0,   249,     0,     0,     0,
       0,   259,   271,     0,     0,   267,   264,   116,   108,   392,
     379,     0,     0,   369,     0,   375,   378,     0,     0,   368,
       0,   374,   377,     0,     0,   373,     0,   372,     0,   133,
       0,     0,   132,     0,    41,     0,     0,     0,     0,   131,
     336,   333,   334,   331,     0,   122,   279,     0,   316,   315,
       0,   311,     0,     0,     0,     0,   342,   341,   120,     0,
     298,   297,   295,   303,   302,   300,   273,   276,   355,     0,
     356,   353,   277,     0,    68,    67,    61,   157,   156,     0,
     148,   152,     0,     0,     0,   162,   161,     0,     0,     0,
       0,   189,     0,   173,     0,     0,   200,     0,   204,     0,
      74,   222,   224,     0,   210,   226,     0,   230,     0,   234,
       0,   238,   239,     0,     0,   244,   245,     0,     0,   253,
     250,   251,   252,     0,     0,     0,     0,   269,   305,     0,
     265,   395,   381,     0,     0,   383,     0,     0,   394,   380,
       0,     0,   382,     0,     0,   393,   387,     0,     0,   386,
       0,     0,   135,     0,     0,     0,   137,   134,     0,     0,
       0,   136,    43,     0,     0,   440,     0,     0,     0,     0,
     413,   412,     0,    11,     0,   141,     0,   140,     0,   327,
     326,   337,   335,   117,     0,   280,   324,   321,   322,   317,
     281,   313,   312,   183,   185,     0,     0,   188,   338,   343,
       0,   291,   292,   299,   304,   346,   349,   357,     0,    66,
     150,     0,     0,     0,   146,   153,     0,     0,     0,     0,
     178,   177,   190,   176,     0,     0,     0,     0,     0,     0,
     201,   205,   211,   227,   231,   235,   240,   241,   246,   247,
     257,   254,   255,   256,    41,     0,     0,   268,   397,   385,
       0,   399,   391,     0,   396,   384,     0,   398,   390,     0,
     403,   389,     0,   402,   388,     0,     0,   139,     0,    16,
     145,     0,     0,   138,     0,    15,   144,     0,   421,   415,
     438,   441,     0,     0,     0,   423,   422,    42,     0,   433,
     439,   436,   408,     0,   143,     0,   142,     0,     0,    12,
     329,   328,   118,   325,   323,   318,   319,   309,   314,   184,
     186,   339,     0,   293,   294,   350,   351,   348,   347,    58,
      59,    60,     0,     0,   147,   154,   149,   159,   165,   164,
     163,     0,     0,   175,     0,     0,   180,   179,   199,   306,
       0,     0,   401,   407,   400,   406,   405,   404,     0,    20,
       0,     0,     0,     0,    24,     0,    19,     0,     0,     0,
       0,    23,     0,   417,   418,   432,   426,   424,   409,   437,
       9,     0,     0,    32,     0,     0,    31,     0,   320,   310,
     444,     0,   352,    57,     0,     0,     0,     0,   191,   174,
     182,   181,   308,   307,     0,     0,    28,    14,     0,    40,
       0,     0,     0,    27,    13,     0,    39,     0,     0,   434,
     410,     0,   419,     0,     0,   428,   429,     0,    36,     0,
       0,    35,     0,    10,     0,   445,   442,   443,     0,     0,
       0,     0,     0,     0,     0,    18,     0,     0,    21,    17,
       0,     0,    22,   416,     0,   411,   435,     0,     0,   430,
       0,    30,     0,    29,   446,   344,     0,    56,   169,   167,
     168,   166,    26,    38,    25,    37,   420,   427,     0,    34,
      33,   447,   345,   431
};

/* YYPDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,     8,     9,    10,    94,    95,   305,   306,    96,    97,
      98,   344,   592,    99,   219,   100,   101,   102,   220,    11,
     103,   104,   105,   106,   107,   108,   109,   110,    13,    39,
      17,    18,    19,    37,   315,   111,   112,   113,   114,   351,
     352,   353,   354,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   362,   363,   324,   125,   181,   364,   126,
     127,   128,   238,   129,   240,   130,   131,   253,   132,   254,
     133,   256,   134,   258,   135,   260,   136,   263,   137,   266,
     138,   271,   139,   140,   275,   141,   142,   143,   331,   193,
     276,   462,   320,   321,   458,   311,   175,   327,   185,   586,
     340,   202,    14,    15,   436,   633,   437,   634,   438,   439,
     679,   680,   695,   696,   697
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -558
static const short int yypact[] =
{
     309,    33,    69,   375,   476,  -558,  -558,  -558,    93,  -558,
    -558,   110,    65,  -558,   421,    28,    26,  -558,   152,   203,
     198,   257,   335,    96,   273,   452,   113,  -558,   289,   114,
     234,   421,   421,  -558,   655,   655,   298,   244,    33,   264,
     317,    29,   292,   342,   399,   368,   411,   337,   391,   434,
     414,   450,   367,   417,   471,   433,   481,  -558,  -558,  -558,
    -558,  1233,   406,  -558,  -558,  1309,    38,   446,  -558,  -558,
    -558,  -558,  -558,   124,  -558,  1233,  1309,  1233,  1309,   447,
    -558,  -558,  -558,  -558,  -558,  -558,   967,   773,   853,  1347,
    1347,  1347,  1347,   488,  -558,   655,  -558,  -558,    68,  -558,
     172,  -558,   404,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,   393,  -558,  1233,   655,  -558,  1233,
     655,  -558,   208,   655,  -558,  -558,   753,  -558,   419,   495,
     497,   510,  -558,   429,   204,   415,   416,   420,    31,   173,
     402,  -558,   456,    15,  -558,  -558,   490,  -558,    33,  -558,
    -558,   422,    36,   443,   492,   448,   501,   168,   454,   503,
     458,   504,   179,   460,   509,   465,   515,  -558,   480,   295,
     468,   401,  -558,   470,   472,  -558,  -558,  -558,   473,  1271,
    1005,   -10,   518,  -558,   475,  -558,  -558,   473,  -558,  -558,
    -558,    94,   167,   469,  -558,   463,  -558,  -558,  -558,  -558,
    -558,    77,   462,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,   814,  -558,
    1233,   967,  -558,  -558,    47,   210,    55,   559,  1233,  1233,
      49,  -558,  -558,  -558,   967,   419,  1233,  1233,   568,  1233,
     570,   967,   486,   561,  -558,  -558,  -558,  -558,   573,  -558,
    -558,  -558,  -558,   204,  1347,  1347,   482,  1347,   479,  1347,
     484,  1347,  1347,   246,  1347,  1347,   255,  1347,  1347,  1347,
    1347,   418,  -558,  1347,   543,   130,  -558,  -558,  -558,  -558,
    -558,   487,   183,   511,   188,   513,  -558,   493,   189,   514,
     192,   516,  -558,   499,   194,   519,   201,   520,   332,   468,
     250,   412,   468,    66,   512,   891,    22,   310,   319,   468,
    1309,   498,  1309,   502,   551,   523,  -558,   517,  1043,   521,
     507,   527,  1233,   655,    -7,  1347,  1233,   528,   523,  1309,
     967,   530,  -558,   967,   531,  -558,  -558,  -558,  1233,  1233,
     534,  -558,  -558,   535,  -558,   393,  -558,  -558,  -558,   524,
    -558,   210,  1233,   655,   655,  -558,  -558,   526,   529,    56,
      57,  1233,   655,   318,    60,   613,  -558,  1233,  -558,  1233,
     967,  -558,  -558,  1347,  -558,  -558,  1347,  -558,  1347,  -558,
    1347,  -558,  -558,  1347,  1347,  -558,  -558,  1347,  1347,  -558,
    -558,  -558,  -558,  1347,  1347,  1347,  1347,  -558,   350,  1347,
    -558,  -558,  -558,   532,   205,  -558,   533,   207,  -558,  -558,
     536,   223,  -558,   538,   233,  -558,  -558,   539,   240,  -558,
     542,   245,   468,    54,    40,   229,   468,   468,   330,    43,
     333,   468,  -558,  1233,  1233,    13,   929,   544,  1233,  1233,
     541,   546,  1233,  -558,   361,   468,   384,   468,    46,  -558,
    -558,  1309,  1309,  -558,   586,  -558,  1233,   547,  -558,  1043,
    -558,  1005,   555,  -558,  -558,  1233,   655,  -558,   557,  -558,
     612,  -558,  -558,   967,   967,  -558,   202,  1233,   366,  -558,
    -558,   655,   655,   548,  -558,  -558,   655,   655,   655,   655,
    -558,  -558,   587,  -558,   549,   655,    61,   655,   655,  1233,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,   550,  1005,  1309,  -558,  -558,  -558,
     552,  -558,  -558,   554,  -558,  -558,   560,  -558,  -558,   575,
    -558,  -558,   576,  -558,  -558,   578,    50,   468,  1233,  -558,
     468,    63,    70,   468,  1233,  -558,   468,    75,  -558,   563,
    -558,  -558,  1233,  1233,  1233,   541,   567,  -558,   556,   571,
    -558,  -558,   579,   569,   468,    76,   468,    78,  1233,  -558,
    -558,  -558,  -558,  -558,  -558,   547,  -558,  -558,  1005,  -558,
    -558,  -558,  1233,  -558,  -558,  1233,   582,  -558,  -558,  -558,
    -558,  -558,   580,    17,  -558,  -558,  -558,  -558,   622,   660,
     668,   641,   655,  -558,   655,   655,  -558,  -558,  -558,  -558,
     577,   583,  -558,  -558,  -558,  -558,  -558,  -558,  1233,  -558,
      79,   588,    80,  1233,  -558,  1233,  -558,    81,   589,    87,
    1233,  -558,  1081,   597,   598,  -558,   601,   571,   592,  -558,
    -558,    88,  1233,  -558,    92,  1233,  -558,   600,  -558,  -558,
     410,   602,  1233,  -558,   453,   606,   607,    62,  -558,  -558,
    -558,  -558,  -558,  -558,   608,  1233,  -558,  -558,  1233,  -558,
     609,   611,  1233,  -558,  -558,  1233,  -558,   614,  1233,  -558,
    -558,  1119,   598,  1233,  1157,   623,   598,  1233,  -558,   615,
    1233,  -558,   616,  -558,  1233,  -558,  -558,  -558,  1233,   617,
     620,   655,   655,   655,   655,  -558,   618,   624,  -558,  -558,
     625,   630,  -558,  -558,  1233,  -558,  -558,  1233,  1195,   598,
     631,  -558,   632,  -558,   410,  -558,  1233,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  1233,  -558,
    -558,  -558,  -558,  -558
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -558,  -558,  -558,   378,  -558,  -558,   305,  -234,   599,  -558,
    -558,  -558,    82,  -558,  -105,   506,   -91,   -42,  -558,    27,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,   715,  -558,  -558,
      85,   -14,  -558,  -558,   553,  -558,  -558,  -558,  -558,  -558,
    -558,   386,   387,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,   372,  -558,  -558,  -558,  -312,   376,  -558,
     -35,   -74,  -558,  -229,  -558,  -217,   -53,  -558,  -558,   489,
     -50,  -558,   -44,  -558,  -239,  -558,  -235,  -558,  -224,  -558,
    -208,  -558,  -214,   -49,  -558,  -558,   263,  -558,   558,   656,
     474,  -558,   228,  -417,  -434,   581,   -72,   277,   220,  -558,
    -558,  -558,   694,  -558,  -558,   122,  -558,  -557,   324,  -558,
    -300,  -303,    37,  -174,  -558
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -426
static const short int yytable[] =
{
     144,   182,   441,   184,   183,   440,   186,   365,   167,   223,
     463,   222,   188,   191,   191,   173,   375,   332,   335,   201,
     366,   174,   377,   574,   147,   576,   173,   341,   173,    34,
      23,    26,   174,   329,   174,   379,   189,   192,   192,   176,
     196,   197,   224,   199,   577,   226,   442,   198,   347,    44,
     385,   386,    49,   381,   382,   273,   355,   488,   490,   154,
     203,   497,   604,   703,   538,   424,    31,   544,   429,   204,
     568,    50,   360,    16,   618,   448,   682,    16,   430,   686,
      16,   322,   225,   272,   465,   227,   235,   623,   230,   171,
     261,   242,   323,    27,   625,   466,   262,   329,   537,   630,
     642,    45,   645,   665,   668,   672,   319,   317,   654,    46,
     431,   675,   687,    20,   329,    28,   690,   550,    50,    53,
     274,   361,    29,    30,   443,    51,   151,    54,   719,   173,
      35,    36,   150,   556,   278,   174,   555,   503,   559,   280,
     177,   648,   539,   504,   222,   545,   184,   188,   569,   348,
     500,   222,   619,   579,   184,   184,   505,   356,   489,   491,
     188,   649,   498,   605,   704,   624,    32,   188,   338,   205,
     399,   189,   626,   508,   509,   506,   507,   631,   643,   339,
     646,   666,   669,   673,   189,   330,   368,   329,   536,   676,
     688,   189,   541,   542,   691,   300,   303,   547,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   228,
     374,   565,    16,   567,   243,   244,   179,   180,   389,   390,
     391,   392,   329,    16,   397,   245,   349,    16,   350,   229,
     217,   435,    16,    16,   156,   274,    16,   281,    16,    55,
     479,   246,   287,    38,   457,    16,    56,   293,   182,    16,
      40,    16,   468,   247,   637,    45,   471,   470,   333,   471,
     449,   551,   449,   425,   475,   476,   450,    16,   450,   264,
     265,   286,   248,   540,   249,   250,   218,    16,   483,   173,
     472,   467,   292,   472,    16,   174,   402,   492,   464,    16,
      41,   405,   409,   585,   426,   412,   188,   416,   251,   252,
      24,    42,   587,   620,   419,   383,   622,   301,   519,   627,
     522,   384,   629,     1,     2,    53,   501,    47,   484,   485,
     189,     3,     4,   444,    55,   423,   525,   493,   428,   502,
     641,   446,   644,    52,   494,   159,   528,    43,   161,   302,
      43,   360,   145,   531,   510,   511,   512,   513,   534,   146,
     517,   387,   388,   650,   445,   148,     5,     6,     7,   548,
     549,   149,   435,   447,   558,   560,   164,   403,   563,   406,
       5,     6,     7,   410,   543,   413,   422,   546,   715,   417,
      21,   420,   573,   716,   152,   575,   153,   319,    22,   166,
     361,   182,    33,     5,     6,     7,     5,     6,     7,   583,
     583,   570,   570,   588,   154,   564,    28,   571,   571,    57,
      58,     2,   155,   307,   308,   715,   156,    48,   168,   169,
     589,   590,   591,   584,   584,   608,     2,   694,   566,   157,
     329,   580,    80,     3,     4,   158,     5,     6,     7,   159,
     346,   319,   514,   515,   611,   309,   594,   595,   358,   359,
     170,   597,   598,   599,   600,   161,   427,    48,   160,   162,
     603,   163,   606,   607,   621,   724,   173,     5,     6,     7,
     628,   267,   174,     5,     6,     7,   164,   165,   635,   636,
     558,    24,     5,     6,     7,    21,   166,   393,    25,   520,
     178,   187,   523,   298,   647,   221,   526,   218,    61,   529,
     268,   269,   270,   532,   319,   237,   535,   589,   590,   591,
     234,   651,   236,     5,     6,     7,   394,   395,   396,   239,
     241,   255,   272,   257,   299,   279,    68,    69,   259,    70,
      71,    72,    73,    74,   277,   282,   283,     5,     6,     7,
     284,     5,     6,     7,   664,   285,   288,   289,   291,   670,
     290,   671,   294,   295,    80,    81,   677,   296,   435,   297,
     304,   310,    83,   312,   314,   325,   326,   659,   689,   660,
     661,   692,   336,   337,   342,   357,   367,   370,   699,   369,
      87,    88,   371,   372,    89,    90,   378,   398,   376,   451,
     401,   706,   380,   452,   707,   453,   408,    92,   710,    93,
     200,   711,   415,   404,   713,   407,   411,   435,   414,   558,
     435,   418,   421,   720,   454,   432,   722,   460,   461,   469,
     455,   473,   474,   459,   725,   477,   480,   478,   486,   499,
     572,   487,   561,   582,   601,   518,   521,   562,   655,   524,
     736,   527,   530,   737,   435,   533,   578,   557,  -426,   456,
     596,   602,   742,   609,   632,   612,    59,   613,   638,     1,
     550,    60,   639,   614,   743,    61,   728,   729,   730,   731,
      62,   640,    63,   652,    64,    65,   656,    66,   615,   616,
      67,   617,  -414,   653,   657,   658,   663,   662,   681,   683,
     667,   674,   684,    68,    69,  -425,    70,    71,    72,    73,
      74,    75,   693,   516,   698,    76,    77,    78,   701,   702,
     705,   708,    79,   709,   718,    12,   712,   721,   723,   726,
     732,    80,    81,   727,   345,   233,   733,   734,    82,    83,
      84,    85,   735,   739,   740,   495,   700,   481,   482,   496,
     328,   593,   373,   610,   195,   581,    86,    87,    88,   400,
     334,    89,    90,    91,   231,   313,   172,     1,   685,   232,
     554,   741,     0,    61,    92,     0,    93,     0,    62,     0,
      63,     0,    64,    65,     0,    66,     0,     0,    67,     0,
       0,     0,     0,    61,     0,     0,     0,     0,     0,     0,
       0,    68,    69,     0,    70,    71,    72,    73,    74,    75,
       0,     0,     0,    76,    77,    78,     0,     0,     0,     0,
      79,    68,    69,     0,    70,    71,    72,    73,    74,    80,
      81,     0,     0,     0,    61,     0,    82,    83,    84,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
      81,     0,     0,     0,    86,    87,    88,    83,     0,    89,
      90,    91,    68,    69,     0,    70,    71,    72,    73,    74,
       0,     0,    92,    61,    93,    87,    88,   343,     0,    89,
      90,    91,     0,     0,     0,     0,   190,     0,     0,     0,
      80,    81,    92,     0,    93,     0,     0,     0,    83,     0,
       0,    68,    69,     0,    70,    71,    72,    73,    74,     0,
       0,    61,     0,     0,     0,    86,    87,    88,     0,     0,
      89,    90,    91,     0,     0,     0,     0,     0,     0,    80,
      81,     0,     0,    92,     0,    93,     0,    83,     0,    68,
      69,   433,    70,    71,    72,    73,    74,     0,     0,    61,
       0,     0,     0,     0,     0,    87,    88,     0,     0,    89,
      90,    91,     0,     0,     0,     0,     0,    80,    81,     0,
       0,     0,    92,   194,    93,    83,     0,    68,    69,   552,
      70,    71,    72,    73,    74,     0,     0,    61,     0,     0,
       0,     0,     0,    87,    88,     0,     0,    89,    90,   434,
       0,     0,     0,     0,     0,    80,    81,     0,     0,     0,
      92,     0,    93,    83,     0,    68,    69,     0,    70,    71,
      72,    73,    74,     0,     0,    61,     0,     0,     0,     0,
       0,    87,    88,     0,     0,    89,    90,   553,     0,     0,
       0,     0,     0,    80,    81,     0,     0,     0,    92,     0,
      93,    83,     0,    68,    69,     0,    70,    71,    72,    73,
      74,     0,     0,    61,     0,     0,     0,     0,     0,    87,
      88,     0,     0,    89,    90,    91,     0,     0,     0,     0,
       0,    80,    81,     0,     0,     0,    92,     0,    93,    83,
       0,    68,    69,     0,    70,    71,    72,    73,    74,     0,
       0,    61,     0,     0,     0,     0,     0,    87,    88,     0,
       0,    89,    90,     0,     0,     0,     0,   318,     0,    80,
      81,     0,     0,     0,    92,     0,    93,    83,     0,    68,
      69,   678,    70,    71,    72,    73,    74,     0,     0,    61,
       0,     0,     0,     0,     0,    87,    88,     0,     0,    89,
      90,     0,     0,     0,     0,   456,     0,    80,    81,     0,
       0,     0,    92,     0,    93,    83,     0,    68,    69,   714,
      70,    71,    72,    73,    74,     0,     0,    61,     0,     0,
       0,     0,     0,    87,    88,     0,     0,    89,    90,     0,
       0,     0,     0,     0,     0,    80,    81,     0,     0,     0,
      92,     0,    93,    83,     0,    68,    69,   717,    70,    71,
      72,    73,    74,     0,     0,    61,     0,     0,     0,     0,
       0,    87,    88,     0,     0,    89,    90,     0,     0,     0,
       0,     0,     0,    80,    81,     0,     0,     0,    92,     0,
      93,    83,     0,    68,    69,   738,    70,    71,    72,    73,
      74,     0,     0,    61,     0,     0,     0,     0,     0,    87,
      88,     0,     0,    89,    90,     0,     0,     0,     0,     0,
       0,    80,    81,     0,     0,     0,    92,     0,    93,    83,
       0,    68,    69,     0,    70,    71,    72,    73,    74,     0,
       0,     0,     0,     0,     0,     0,     0,    87,    88,     0,
       0,    89,    90,     0,     0,     0,     0,     0,     0,    80,
      81,     0,     0,     0,    92,     0,    93,    83,     0,    68,
      69,     0,    70,    71,    72,    73,    74,     0,     0,     0,
       0,     0,     0,     0,     0,    87,    88,     0,     0,    89,
      90,     0,     0,     0,     0,     0,     0,    80,    81,     0,
       0,     0,    92,     0,    93,    83,     0,    68,    69,     0,
      70,    71,    72,    73,    74,     0,     0,     0,     0,     0,
       0,     0,     0,    87,    88,     0,     0,    89,    90,    91,
       0,     0,     0,     0,   316,    80,    81,     0,     0,     0,
      92,     0,    93,    83,     0,    68,    69,     0,    70,    71,
      72,    73,    74,     0,     0,     0,     0,     0,     0,     0,
       0,    87,    88,     0,     0,    89,    90,    91,     0,     0,
       0,     0,     0,    80,    81,     0,     0,     0,    92,     0,
      93,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
      88,     0,     0,    89,    90,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,     0,    93
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0
};

static const short int yycheck[] =
{
      35,    75,   305,    77,    76,   305,    78,   236,    61,   114,
     322,   102,    86,    87,    88,    65,   255,   191,   192,    93,
     237,    65,   257,   457,    38,   459,    76,   201,    78,     1,
       3,     4,    76,    20,    78,   259,    86,    87,    88,     1,
      89,    90,   116,    92,   461,   119,    24,    91,     1,    22,
     264,   265,    25,   261,   262,    40,     1,     1,     1,     5,
      95,     1,     1,     1,    24,   299,     1,    24,   302,     1,
      24,     5,    23,    44,    24,   309,   633,    44,    12,   636,
      44,    91,   117,    66,    91,   120,   128,    24,   123,    62,
      59,   133,   102,     0,    24,   102,    65,    20,    44,    24,
      24,     5,    24,    24,    24,    24,   180,   179,    91,    13,
      44,    24,    24,    44,    20,     5,    24,   104,     5,     5,
     105,    72,    12,    13,   102,    12,    41,    13,   685,   179,
     102,   105,   103,   436,   148,   179,   436,   376,   438,   103,
     102,   575,   102,   378,   235,   102,   220,   221,   102,   102,
     367,   242,   102,   465,   228,   229,   380,   102,   102,   102,
     234,   578,   102,   102,   102,   102,   101,   241,    91,   101,
      40,   221,   102,   387,   388,   383,   384,   102,   102,   102,
     102,   102,   102,   102,   234,    91,   239,    20,   422,   102,
     102,   241,   426,   427,   102,   168,   169,   431,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,     1,
     254,   445,    44,   447,    10,    11,    92,    93,   267,   268,
     269,   270,    20,    44,   273,    21,    16,    44,    18,    21,
      58,   305,    44,    44,     5,   105,    44,   152,    44,     5,
     345,    37,   157,    91,   318,    44,    12,   162,   322,    44,
      47,    44,   326,    49,   554,     5,   330,   329,    91,   333,
     310,   435,   312,    13,   338,   339,   310,    44,   312,    96,
      97,   103,    68,    44,    70,    71,   104,    44,   352,   329,
     330,   325,   103,   333,    44,   329,   103,   361,   323,    44,
      92,   103,   103,    91,    44,   103,   370,   103,    94,    95,
       5,    44,   476,   537,   103,    59,   540,    12,   103,   543,
     103,    65,   546,     4,     5,     5,   369,    44,   353,   354,
     370,    12,    13,    13,     5,   298,   103,   362,   301,   373,
     564,    12,   566,    44,    16,     5,   103,     5,     5,    44,
       5,    23,    44,   103,   393,   394,   395,   396,   103,   105,
     399,    96,    97,   582,    44,    91,    61,    62,    63,   433,
     434,    44,   436,    44,   438,   439,     5,   282,   442,   284,
      61,    62,    63,   288,    44,   290,    44,    44,   681,   294,
       5,   296,   456,   683,    92,   459,    44,   461,    13,     5,
      72,   465,    14,    61,    62,    63,    61,    62,    63,   473,
     474,   451,   452,   477,     5,    44,     5,   451,   452,    31,
      32,     5,    44,    12,    13,   718,     5,     5,    12,    13,
      54,    55,    56,   473,   474,   499,     5,    17,    44,    92,
      20,   466,    66,    12,    13,    44,    61,    62,    63,     5,
     220,   515,    92,    93,   516,    44,   481,   482,   228,   229,
      44,   486,   487,   488,   489,     5,    44,     5,    44,    92,
     495,    44,   497,   498,   538,   694,   516,    61,    62,    63,
     544,    69,   516,    61,    62,    63,     5,    44,   552,   553,
     554,     5,    61,    62,    63,     5,     5,    69,    12,   404,
      44,    44,   407,    13,   568,    91,   411,   104,    10,   414,
      98,    99,   100,   418,   578,     8,   421,    54,    55,    56,
      91,   585,    17,    61,    62,    63,    98,    99,   100,     9,
      91,   106,    66,   107,    44,   103,    38,    39,   108,    41,
      42,    43,    44,    45,    44,    92,    44,    61,    62,    63,
      92,    61,    62,    63,   618,    44,    92,    44,    44,   623,
      92,   625,    92,    44,    66,    67,   630,    92,   632,    44,
      92,    91,    74,    91,    91,    47,    91,   602,   642,   604,
     605,   645,   103,   110,   112,    16,     8,    91,   652,     9,
      92,    93,    21,    10,    96,    97,   107,    44,   106,    91,
     103,   665,   108,    91,   668,    44,   103,   109,   672,   111,
     112,   675,   103,    92,   678,    92,    92,   681,    92,   683,
     684,    92,    92,   687,    91,   103,   690,   110,    91,    91,
     103,    91,    91,   102,   698,    91,   102,    92,   102,    16,
      44,   102,    91,    21,    47,   103,   103,    91,    16,   103,
     714,   103,   103,   717,   718,   103,    91,   103,    91,   102,
     102,   102,   726,   103,    91,   103,     1,   103,    91,     4,
     104,     6,    91,   103,   738,    10,   701,   702,   703,   704,
      15,   102,    17,    91,    19,    20,    16,    22,   103,   103,
      25,   103,   103,   103,    16,    44,   103,   110,    91,    91,
     102,   102,    91,    38,    39,   103,    41,    42,    43,    44,
      45,    46,   102,   398,   102,    50,    51,    52,   102,   102,
     102,   102,    57,   102,    91,     0,   102,   102,   102,   102,
     102,    66,    67,   103,   218,   126,   102,   102,    73,    74,
      75,    76,   102,   102,   102,   363,   654,   351,   351,   363,
     187,   478,   253,   515,    88,   468,    91,    92,    93,   275,
     192,    96,    97,    98,     1,   174,    62,     4,   636,     6,
     436,   724,    -1,    10,   109,    -1,   111,    -1,    15,    -1,
      17,    -1,    19,    20,    -1,    22,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    39,    -1,    41,    42,    43,    44,    45,    46,
      -1,    -1,    -1,    50,    51,    52,    -1,    -1,    -1,    -1,
      57,    38,    39,    -1,    41,    42,    43,    44,    45,    66,
      67,    -1,    -1,    -1,    10,    -1,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    -1,    -1,    -1,    91,    92,    93,    74,    -1,    96,
      97,    98,    38,    39,    -1,    41,    42,    43,    44,    45,
      -1,    -1,   109,    10,   111,    92,    93,    53,    -1,    96,
      97,    98,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,
      66,    67,   109,    -1,   111,    -1,    -1,    -1,    74,    -1,
      -1,    38,    39,    -1,    41,    42,    43,    44,    45,    -1,
      -1,    10,    -1,    -1,    -1,    91,    92,    93,    -1,    -1,
      96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    -1,    -1,   109,    -1,   111,    -1,    74,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,    96,
      97,    98,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,
      -1,    -1,   109,   110,   111,    74,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    -1,    10,    -1,    -1,
      -1,    -1,    -1,    92,    93,    -1,    -1,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,
     109,    -1,   111,    74,    -1,    38,    39,    -1,    41,    42,
      43,    44,    45,    -1,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    92,    93,    -1,    -1,    96,    97,    98,    -1,    -1,
      -1,    -1,    -1,    66,    67,    -1,    -1,    -1,   109,    -1,
     111,    74,    -1,    38,    39,    -1,    41,    42,    43,    44,
      45,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    92,
      93,    -1,    -1,    96,    97,    98,    -1,    -1,    -1,    -1,
      -1,    66,    67,    -1,    -1,    -1,   109,    -1,   111,    74,
      -1,    38,    39,    -1,    41,    42,    43,    44,    45,    -1,
      -1,    10,    -1,    -1,    -1,    -1,    -1,    92,    93,    -1,
      -1,    96,    97,    -1,    -1,    -1,    -1,   102,    -1,    66,
      67,    -1,    -1,    -1,   109,    -1,   111,    74,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,    96,
      97,    -1,    -1,    -1,    -1,   102,    -1,    66,    67,    -1,
      -1,    -1,   109,    -1,   111,    74,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    -1,    10,    -1,    -1,
      -1,    -1,    -1,    92,    93,    -1,    -1,    96,    97,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,
     109,    -1,   111,    74,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    92,    93,    -1,    -1,    96,    97,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    -1,    -1,    -1,   109,    -1,
     111,    74,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    92,
      93,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    -1,    -1,    -1,   109,    -1,   111,    74,
      -1,    38,    39,    -1,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    -1,
      -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    -1,    -1,    -1,   109,    -1,   111,    74,    -1,    38,
      39,    -1,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,    96,
      97,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,
      -1,    -1,   109,    -1,   111,    74,    -1,    38,    39,    -1,
      41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    93,    -1,    -1,    96,    97,    98,
      -1,    -1,    -1,    -1,   103,    66,    67,    -1,    -1,    -1,
     109,    -1,   111,    74,    -1,    38,    39,    -1,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    93,    -1,    -1,    96,    97,    98,    -1,    -1,
      -1,    -1,    -1,    66,    67,    -1,    -1,    -1,   109,    -1,
     111,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      93,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,   111
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     4,     5,    12,    13,    61,    62,    63,   114,   115,
     116,   132,   140,   141,   215,   216,    44,   143,   144,   145,
      44,     5,    13,   132,     5,    12,   132,     0,     5,    12,
      13,     1,   101,   116,     1,   102,   105,   146,    91,   142,
      47,    92,    44,     5,   132,     5,    13,    44,     5,   132,
       5,    12,    44,     5,    13,     5,    12,   116,   116,     1,
       6,    10,    15,    17,    19,    20,    22,    25,    38,    39,
      41,    42,    43,    44,    45,    46,    50,    51,    52,    57,
      66,    67,    73,    74,    75,    76,    91,    92,    93,    96,
      97,    98,   109,   111,   117,   118,   121,   122,   123,   126,
     128,   129,   130,   133,   134,   135,   136,   137,   138,   139,
     140,   148,   149,   150,   151,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   169,   172,   173,   174,   176,
     178,   179,   181,   183,   185,   187,   189,   191,   193,   195,
     196,   198,   199,   200,   173,    44,   105,   144,    91,    44,
     103,   143,    92,    44,     5,    44,     5,    92,    44,     5,
      44,     5,    92,    44,     5,    44,     5,   179,    12,    13,
      44,   132,   215,   183,   185,   209,     1,   102,    44,    92,
      93,   170,   174,   209,   174,   211,   209,    44,   174,   183,
     103,   174,   183,   202,   110,   202,   196,   196,   185,   196,
     112,   174,   214,   173,     1,   101,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    58,   104,   127,
     131,    91,   129,   127,   174,   173,   174,   173,     1,    21,
     173,     1,     6,   121,    91,   130,    17,     8,   175,     9,
     177,    91,   130,    10,    11,    21,    37,    49,    68,    70,
      71,    94,    95,   180,   182,   106,   184,   107,   186,   108,
     188,    59,    65,   190,    96,    97,   192,    69,    98,    99,
     100,   194,    66,    40,   105,   197,   203,    44,   144,   103,
     103,   143,    92,    44,    92,    44,   103,   143,    92,    44,
      92,    44,   103,   143,    92,    44,    92,    44,    13,    44,
     132,    12,    44,   132,    92,   119,   120,    12,    13,    44,
      91,   208,    91,   208,    91,   147,   103,   209,   102,   174,
     205,   206,    91,   102,   168,    47,    91,   210,   147,    20,
      91,   201,   226,    91,   201,   226,   103,   110,    91,   102,
     213,   226,   112,    53,   124,   128,   211,     1,   102,    16,
      18,   152,   153,   154,   155,     1,   102,    16,   211,   211,
      23,    72,   166,   167,   171,   176,   178,     8,   179,     9,
      91,    21,    10,   182,   185,   187,   106,   189,   107,   191,
     108,   193,   193,    59,    65,   195,   195,    96,    97,   196,
     196,   196,   196,    69,    98,    99,   100,   196,    44,    40,
     203,   103,   103,   143,    92,   103,   143,    92,   103,   103,
     143,    92,   103,   143,    92,   103,   103,   143,    92,   103,
     143,    92,    44,   132,   120,    13,    44,    44,   132,   120,
      12,    44,   103,    40,    98,   174,   217,   219,   221,   222,
     223,   224,    24,   102,    13,    44,    12,    44,   120,   183,
     185,    91,    91,    44,    91,   103,   102,   174,   207,   102,
     110,    91,   204,   170,   173,    91,   102,   185,   174,    91,
     209,   174,   183,    91,    91,   174,   174,    91,    92,   127,
     102,   154,   155,   174,   173,   173,   102,   102,     1,   102,
       1,   102,   174,   173,    16,   166,   171,     1,   102,    16,
     178,   179,   185,   187,   189,   191,   193,   193,   195,   195,
     196,   196,   196,   196,    92,    93,   119,   196,   103,   103,
     143,   103,   103,   143,   103,   103,   143,   103,   103,   143,
     103,   103,   143,   103,   103,   143,   120,    44,    24,   102,
      44,   120,   120,    44,    24,   102,    44,   120,   174,   174,
     104,   226,    40,    98,   221,   223,   224,   103,   174,   223,
     174,    91,    91,   174,    44,   120,    44,   120,    24,   102,
     183,   185,    44,   174,   207,   174,   207,   206,    91,   170,
     173,   210,    21,   174,   183,    91,   212,   226,   174,    54,
      55,    56,   125,   199,   173,   173,   102,   173,   173,   173,
     173,    47,   102,   173,     1,   102,   173,   173,   174,   103,
     205,   209,   103,   103,   103,   103,   103,   103,    24,   102,
     120,   174,   120,    24,   102,    24,   102,   120,   174,   120,
      24,   102,    91,   218,   220,   174,   174,   223,    91,    91,
     102,   120,    24,   102,   120,    24,   102,   174,   207,   206,
     176,   174,    91,   103,    91,    16,    16,    16,    44,   173,
     173,   173,   110,   103,   174,    24,   102,   102,    24,   102,
     174,   174,    24,   102,   102,    24,   102,   174,    40,   223,
     224,    91,   220,    91,    91,   218,   220,    24,   102,   174,
      24,   102,   174,   102,    17,   225,   226,   227,   102,   174,
     125,   102,   102,     1,   102,   102,   174,   174,   102,   102,
     174,   174,   102,   174,    40,   224,   223,    40,    91,   220,
     174,   102,   174,   102,   176,   174,   102,   103,   173,   173,
     173,   173,   102,   102,   102,   102,   174,   174,    40,   102,
     102,   225,   174,   174
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
#line 157 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"file_input: program ENDMARKER\n";
										p->check_inhertance_list();
						if(!p->errRecovery->errQ->isEmpty())
								p->errRecovery->printErrQueue();
						root = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);		
						if(fileStack.size()==1){
							//ast->print(root, 0);
						p->print_symbol();
						ast->tree((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn));
						ast->print((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn), 0);
						ast->generate_static((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn));
						ast->generate_main(p->getMainFunction());
						}
						Streams::verbose().flush();	
								}
    break;

  case 3:
/* Line 868 of glr.c  */
#line 174 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"program : import_stmt ';' temp2 \n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn);}
    break;

  case 4:
/* Line 868 of glr.c  */
#line 175 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"program : import_stmt error temp2 \n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn);}
    break;

  case 5:
/* Line 868 of glr.c  */
#line 176 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"program : temp2 \n";}
    break;

  case 6:
/* Line 868 of glr.c  */
#line 180 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"temp2: classdef temp2\n";
							ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
							//cout<<"enter upper"<<endl;
							out_of_import=true;
						}
    break;

  case 7:
/* Line 868 of glr.c  */
#line 185 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"temp2: classdef \n";
							//ast->createClassNode();
							//cout<<"enter classdef"<<endl;
					}
    break;

  case 8:
/* Line 868 of glr.c  */
#line 202 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							testfunction = p->finishFunctionDeclaration(testfunction,linefunc,colmfunc);
							((*yyvalp).tn)=ast->createFunctionNode(testfunction,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum,amer_par);
							parameters.clear();df_par.clear();amer_par.clear();
							linefunc=0;colmfunc=0;
							visit_num=0;
							constant=false;
							
							Streams::verbose() <<"funcdef:	funcheader suite \n";
						  }
    break;

  case 9:
/* Line 868 of glr.c  */
#line 213 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"funcheader:	DEF  NAME parameters ARROW test ':'  \n";}
    break;

  case 10:
/* Line 868 of glr.c  */
#line 214 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"funcheader:  DEF access NAME parameters ARROW test ':'  \n";}
    break;

  case 11:
/* Line 868 of glr.c  */
#line 215 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
											testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,ff, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
											inside_func=false;
											call_func=false;
											Streams::verbose() <<"funcheader: DEF NAME parameters ':' \n";
											
									   }
    break;

  case 12:
/* Line 868 of glr.c  */
#line 226 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    { 
												testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,ff, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											inside_func=false;
											call_func=false;
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
												Streams::verbose() <<"funcheader: DEF access NAME parameters ':' \n";
											  }
    break;

  case 13:
/* Line 868 of glr.c  */
#line 236 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC NAME parameters ARROW test ':' \n";}
    break;

  case 14:
/* Line 868 of glr.c  */
#line 237 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL NAME parameters ARROW test ':' \n";}
    break;

  case 15:
/* Line 868 of glr.c  */
#line 238 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
												testfunction = p->createTypeFunctionHeader(t,true,pp,pro,ff, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											inside_func=false;call_func=false;
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
												Streams::verbose() <<"funcheader: DEF STATIC NAME parameters ':' \n";
											 }
    break;

  case 16:
/* Line 868 of glr.c  */
#line 247 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
											testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											inside_func=false;call_func=false;
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
												Streams::verbose() <<"funcheader: DEF FINAL NAME parameters ':' \n";
											 }
    break;

  case 17:
/* Line 868 of glr.c  */
#line 256 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC FINAL NAME parameters ARROW test ':' \n";}
    break;

  case 18:
/* Line 868 of glr.c  */
#line 257 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 19:
/* Line 868 of glr.c  */
#line 258 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
														testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
											inside_func=false;call_func=false;
														Streams::verbose() <<"funcheader: DEF STATIC FINAL NAME parameters ':'  \n";
												    }
    break;

  case 20:
/* Line 868 of glr.c  */
#line 267 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
													testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
											inside_func=false;call_func=false;
													Streams::verbose() <<"funcheader: DEF FINAL STATIC NAME parameters ':'  \n";
													}
    break;

  case 21:
/* Line 868 of glr.c  */
#line 276 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
																testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
											inside_func=false;call_func=false;
																Streams::verbose() <<"funcheader: DEF FINAL access NAME parameters ARROW test ':'  \n";
															  }
    break;

  case 22:
/* Line 868 of glr.c  */
#line 285 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC access NAME parameters ARROW test ':'  \n";}
    break;

  case 23:
/* Line 868 of glr.c  */
#line 286 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
											testfunction = p->createTypeFunctionHeader(t,true,pp,pro,ff, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											inside_func=false;call_func=false;
											linefunc=yylval.r.lineNum;
														colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF STATIC access NAME parameters ':'  \n";
													}
    break;

  case 24:
/* Line 868 of glr.c  */
#line 294 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
														testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											inside_func=false;call_func=false;
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
														Streams::verbose() <<"funcheader: DEF STATIC access NAME parameters ':' ";
													}
    break;

  case 25:
/* Line 868 of glr.c  */
#line 303 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC FINAL access NAME parameters ARROW test ':'  \n";}
    break;

  case 26:
/* Line 868 of glr.c  */
#line 304 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL STATIC access NAME parameters ARROW test ':'  \n";}
    break;

  case 27:
/* Line 868 of glr.c  */
#line 305 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
											testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											inside_func=false;call_func=false;
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
															Streams::verbose() <<"funcheader: DEF STATIC FINAL access NAME parameters ':'  \n";
														  }
    break;

  case 28:
/* Line 868 of glr.c  */
#line 314 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											inside_func=false;call_func=false;
											linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF FINAL STATIC access NAME parameters ':'  \n";
														  }
    break;

  case 29:
/* Line 868 of glr.c  */
#line 322 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 30:
/* Line 868 of glr.c  */
#line 323 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access FINAL NAME parameters ARROW test ':'  \n";}
    break;

  case 31:
/* Line 868 of glr.c  */
#line 324 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
														testfunction = p->createTypeFunctionHeader(t,true,pp,pro,ff, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											inside_func=false;call_func=false;
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
														Streams::verbose() <<"funcheader: DEF access STATIC NAME parameters ':'  \n";
													}
    break;

  case 32:
/* Line 868 of glr.c  */
#line 333 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
														testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											inside_func=false;call_func=false;
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
														Streams::verbose() <<"funcheader: DEF access FINAL NAME parameters ':'  \n";
													}
    break;

  case 33:
/* Line 868 of glr.c  */
#line 342 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access STATIC FINAL NAME parameters ARROW test ':'  \n";}
    break;

  case 34:
/* Line 868 of glr.c  */
#line 343 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access FINAL STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 35:
/* Line 868 of glr.c  */
#line 344 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											inside_func=false;call_func=false;
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
															Streams::verbose() <<"funcheader: DEF access STATIC FINAL NAME parameters ':'  \n";
			   											  }
    break;

  case 36:
/* Line 868 of glr.c  */
#line 353 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											inside_func=false;call_func=false;
											linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF access FINAL STATIC NAME parameters ':'  \n";
			  											  }
    break;

  case 37:
/* Line 868 of glr.c  */
#line 361 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC access FINAL NAME parameters ARROW test ':'  \n";}
    break;

  case 38:
/* Line 868 of glr.c  */
#line 362 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL access STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 39:
/* Line 868 of glr.c  */
#line 363 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											inside_func=false;call_func=false;
											linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF STATIC access FINAL NAME parameters ':'  \n";
			  											  }
    break;

  case 40:
/* Line 868 of glr.c  */
#line 371 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											inside_func=false;call_func=false;
											linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF FINAL access STATIC NAME parameters ':'  \n";
														  }
    break;

  case 41:
/* Line 868 of glr.c  */
#line 381 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    { inside_func=true;call_func=true; Streams::verbose() <<"inside_func:'(' ";}
    break;

  case 42:
/* Line 868 of glr.c  */
#line 384 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"inside_func arglist ')'\n";}
    break;

  case 43:
/* Line 868 of glr.c  */
#line 385 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"parameters:'(' ')'\n";}
    break;

  case 44:
/* Line 868 of glr.c  */
#line 388 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {	((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);	Streams::verbose() <<"stmt:	simple_stmt \n";
						visit_num=0;
					}
    break;

  case 45:
/* Line 868 of glr.c  */
#line 391 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {	((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);cout<<"line num"<<yylval.r.lineNum<<endl;	Streams::verbose() <<"stmt: compound_stmt\n";
							visit_num=0;
						}
    break;

  case 46:
/* Line 868 of glr.c  */
#line 395 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"simple_stmt: small_stmt ';' \n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 47:
/* Line 868 of glr.c  */
#line 398 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
								Streams::verbose() <<"simple_stmt: small_stmt error \n";
													((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);
							  }
    break;

  case 48:
/* Line 868 of glr.c  */
#line 403 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							Streams::verbose() <<"small_stmt: expr_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 49:
/* Line 868 of glr.c  */
#line 407 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
						Streams::verbose() <<"small_stmt: del_stmt \n";
						((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
					  }
    break;

  case 50:
/* Line 868 of glr.c  */
#line 411 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							Streams::verbose() <<"small_stmt: pass_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
					   }
    break;

  case 51:
/* Line 868 of glr.c  */
#line 415 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							Streams::verbose() <<"small_stmt: flow_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
					   }
    break;

  case 52:
/* Line 868 of glr.c  */
#line 419 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							Streams::verbose() <<"small_stmt: import_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						 }
    break;

  case 53:
/* Line 868 of glr.c  */
#line 423 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							Streams::verbose() <<"small_stmt: global_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						 }
    break;

  case 54:
/* Line 868 of glr.c  */
#line 427 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: nonlocal_stmt \n";}
    break;

  case 55:
/* Line 868 of glr.c  */
#line 428 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							Streams::verbose() <<"small_stmt: print_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
							visit_num=0;
							constant=false;
						 }
    break;

  case 56:
/* Line 868 of glr.c  */
#line 436 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atom: str_seq\n";
									char* x = new char[100];
									strcpy(x,(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.r.strVal));
									//cout<<"x=   "<<x<<endl;
									string sd(x);
									//cout<<"sd=== "<<sd<<endl;
									constant=true;
									Node* string_now;
									visit_num=0;
									string_now = ast->createTypeNode(reinterpret_cast<void*>(x),0,0,yylval.r.lineNum,yylval.r.colNum,STRINGS);
									((*yyvalp).tn)=ast->createinputNode(string_now,my_input,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
									constant=false;
						}
    break;

  case 57:
/* Line 868 of glr.c  */
#line 449 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
									((*yyvalp).tn)=ast->createinputNode(NULL,my_input,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
									visit_num=0;
									constant=false;
								}
    break;

  case 58:
/* Line 868 of glr.c  */
#line 455 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							my_input=INT_input;
						}
    break;

  case 59:
/* Line 868 of glr.c  */
#line 458 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							my_input=FLOAT_input;
						}
    break;

  case 60:
/* Line 868 of glr.c  */
#line 461 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							my_input=STRING_input;
						}
    break;

  case 61:
/* Line 868 of glr.c  */
#line 465 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"expr_stmt:	testlist_star_expr augassign testlist \n";}
    break;

  case 62:
/* Line 868 of glr.c  */
#line 466 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"expr_stmt: testlist_star_expr \n";}
    break;

  case 63:
/* Line 868 of glr.c  */
#line 467 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
								Streams::verbose() <<"compound_stmt: vardef\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
								visit_num=0;
							}
    break;

  case 64:
/* Line 868 of glr.c  */
#line 472 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
								Streams::verbose() <<"compound_stmt: vardef\n";
								//$<tn>$=$<tn>1;
								visit_num=0;
								Node *il=new Node();
								if(v1)
								{
									v1->init=true;
									il=ast->createCallVarNode(v1->get_name(),v1,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);			
								}
								else
								{
									il=ast->createErrorNode("Variable is already declared",NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
								}
								//cout<<"var name in yacc "<<v1->get_name()<<endl;
								//il=ast->createCallVarNode(v1->get_name(),v1,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);	
								//il=ast->addNext(il,$<tn>2);
								v1=NULL;
								Node *il2=new Node();
								il2=ast->createAssignNode(il,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
								((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),il2);

							}
    break;

  case 65:
/* Line 868 of glr.c  */
#line 495 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"expr_stmt: testlist_star_expr right_testlist \n";
													//$<amerstr>1;
													visit_num=0;
													Node *il=new Node();
													il=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
													Node* pp=new Node();
													((*yyvalp).tn)=ast->createAssignNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
													pp=((*yyvalp).tn);
													if(lastNode)
													{
														//cout<<"enter heree amer \n";
														((*yyvalp).tn)=ast->addNext(lastNode,pp);
														
														lastNode=NULL;
														//cout<<"print in expr_stmt if";
														//$<tn>$->print();cout<<endl;
													}
													cout<<"array right is "<<array_right<<endl;
													if((v1)&&(array_right))
													{
														v1->set_isarray(true);
														ArrayNode* jo=static_cast<ArrayNode*>((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
														v1->set_arrayNode(arr_node);
														//cout<<"enter here for array "<<v1->get_name()<<endl;
													}
													array_right=false;
													is_list=false;
													
													
												}
    break;

  case 66:
/* Line 868 of glr.c  */
#line 528 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"right_testlist: '=' testlist_star_expr right_testlist \n";}
    break;

  case 67:
/* Line 868 of glr.c  */
#line 529 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"right_testlist: '=' testlist_star_expr \n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 68:
/* Line 868 of glr.c  */
#line 530 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 69:
/* Line 868 of glr.c  */
#line 535 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: comma_test_star_seqJ \n";}
    break;

  case 70:
/* Line 868 of glr.c  */
#line 536 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: comma_test_star_seqJ ',' \n";}
    break;

  case 71:
/* Line 868 of glr.c  */
#line 537 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"',' \n";}
    break;

  case 72:
/* Line 868 of glr.c  */
#line 538 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: test comma_test_star_seqJ \n";}
    break;

  case 73:
/* Line 868 of glr.c  */
#line 539 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
								Streams::verbose() <<"testlist_star_expr: test \n"; 
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 74:
/* Line 868 of glr.c  */
#line 543 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: star_expr comma_test_star_seqJ ',' \n";}
    break;

  case 75:
/* Line 868 of glr.c  */
#line 544 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: star_expr ',' \n";}
    break;

  case 76:
/* Line 868 of glr.c  */
#line 547 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star : ',' test \n";}
    break;

  case 77:
/* Line 868 of glr.c  */
#line 548 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star : ',' star_expr \n";}
    break;

  case 78:
/* Line 868 of glr.c  */
#line 551 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seqJ : comma_test_star_seqJ comma_test_star \n";}
    break;

  case 79:
/* Line 868 of glr.c  */
#line 552 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seqJ : comma_test_star \n";}
    break;

  case 80:
/* Line 868 of glr.c  */
#line 554 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	PLUS_EQUAL \n";}
    break;

  case 81:
/* Line 868 of glr.c  */
#line 555 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MINUS_EQUAL \n";}
    break;

  case 82:
/* Line 868 of glr.c  */
#line 556 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	STAR_EQUAL \n";}
    break;

  case 83:
/* Line 868 of glr.c  */
#line 557 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	DIV_EQUAL \n";}
    break;

  case 84:
/* Line 868 of glr.c  */
#line 558 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MOD_EQUAL \n";}
    break;

  case 85:
/* Line 868 of glr.c  */
#line 559 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	AND_EQUAL \n";}
    break;

  case 86:
/* Line 868 of glr.c  */
#line 560 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	OR_EQUAL \n";}
    break;

  case 87:
/* Line 868 of glr.c  */
#line 561 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	SHAPOO_EQUAL \n";}
    break;

  case 88:
/* Line 868 of glr.c  */
#line 562 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	LESS_THAN_2_EQUAL \n";}
    break;

  case 89:
/* Line 868 of glr.c  */
#line 563 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MORE_THAN_2_EQUAL \n";}
    break;

  case 90:
/* Line 868 of glr.c  */
#line 564 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	STAR_2_EQUAL \n";}
    break;

  case 91:
/* Line 868 of glr.c  */
#line 565 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	DIV_2_EQUAL \n";}
    break;

  case 92:
/* Line 868 of glr.c  */
#line 568 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose()<<"access_modef: PRIVATE\n";acc_mod="private";pp=true;}
    break;

  case 93:
/* Line 868 of glr.c  */
#line 569 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {pp=false;Streams::verbose()<<"access_modef:	PUBLIC\n";acc_mod="public";pp=false;}
    break;

  case 94:
/* Line 868 of glr.c  */
#line 570 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {pro=true;Streams::verbose()<<"access_modef:	PROTECTED\n";acc_mod="protected";}
    break;

  case 95:
/* Line 868 of glr.c  */
#line 572 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							Streams::verbose() <<"print_stmt: PRINT exprlist \n";
							((*yyvalp).tn) = ast->createPrintNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
						   }
    break;

  case 96:
/* Line 868 of glr.c  */
#line 576 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							Streams::verbose() <<"del_stmt:   DEL exprlist \n";
							((*yyvalp).tn) = ast->createDelNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
						 }
    break;

  case 97:
/* Line 868 of glr.c  */
#line 582 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
					Streams::verbose() <<"pass_stmt:	PASS \n";
					((*yyvalp).tn) = ast->createPassNode(NULL, NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
				 }
    break;

  case 98:
/* Line 868 of glr.c  */
#line 588 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
						Streams::verbose() <<"flow_stmt:	break_stmt \n";
						((*yyvalp).tn) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
					   }
    break;

  case 99:
/* Line 868 of glr.c  */
#line 592 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
								Streams::verbose() <<"flow_stmt: continue_stmt\n";
								((*yyvalp).tn) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 100:
/* Line 868 of glr.c  */
#line 596 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							Streams::verbose() <<"flow_stmt: return_stmt\n";
							((*yyvalp).tn) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						  }
    break;

  case 101:
/* Line 868 of glr.c  */
#line 602 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
					Streams::verbose() <<"break_stmt: BREAK \n";
					((*yyvalp).tn) = ast->createFlowStmtNode(NULL, NULL, breakNode, NULL,yylval.r.lineNum,yylval.r.colNum);
				  }
    break;

  case 102:
/* Line 868 of glr.c  */
#line 608 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							Streams::verbose() <<"continue_stmt:	CONTINUE \n";
							((*yyvalp).tn) = ast->createFlowStmtNode(NULL, NULL, continueNode, NULL,yylval.r.lineNum,yylval.r.colNum);
						 }
    break;

  case 103:
/* Line 868 of glr.c  */
#line 614 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
									Streams::verbose() <<"return_stmt:	RETURN testlist \n";
									((*yyvalp).tn) = ast->createReturnNode(testfunction,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
								}
    break;

  case 104:
/* Line 868 of glr.c  */
#line 618 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							Streams::verbose() <<"return_stmt:	RETURN \n";
							((*yyvalp).tn) = ast->createReturnNode(testfunction,NULL, NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
						}
    break;

  case 105:
/* Line 868 of glr.c  */
#line 625 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"import_stmt: import_name \n";}
    break;

  case 106:
/* Line 868 of glr.c  */
#line 628 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"import_name: IMPORT dotted_as_names \n";
										int i=0;
										char *tokenPtr;
										while(i<inhertance_list.size())
										{
											char* xx = inhertance_list.at(i);
											char buffer[15];
											bool found = false;
											sprintf(buffer, xx);
											tokenPtr = strtok(buffer, ".");
											string fg=tokenPtr;
											 string sf=tokenPtr;
											 cout<<"sf ="<<sf<<endl;
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
											 inhertance_list.erase(inhertance_list.begin() + i);
											i++;
										}
										inhertance_list.clear();
				}
    break;

  case 107:
/* Line 868 of glr.c  */
#line 666 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_dotted_as_name_seq: ',' dotted_as_name \n";
														
														inhertance_list.push_back(temp_id_stack.top());
														temp_id_stack.pop();
												}
    break;

  case 108:
/* Line 868 of glr.c  */
#line 671 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_dotted_as_name_seq: comma_dotted_as_name_seq ',' dotted_as_name \n";
																					inhertance_list.push_back(temp_id_stack.top());
																				temp_id_stack.pop();
																		}
    break;

  case 109:
/* Line 868 of glr.c  */
#line 676 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
									Streams::verbose() <<"comma_dotted_as_name_seq: dotted_as_names: dotted_as_name \n";
									inhertance_list.push_back(temp_id_stack.top());
								temp_id_stack.pop();
					}
    break;

  case 110:
/* Line 868 of glr.c  */
#line 681 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
															Streams::verbose() <<"comma_dotted_as_name_seq: dotted_as_name comma_dotted_as_name_seq \n";
								inhertance_list.insert(inhertance_list.begin(),temp_id_stack.top());
								temp_id_stack.pop();
								temp_id="";
				 }
    break;

  case 111:
/* Line 868 of glr.c  */
#line 690 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"dotted_as_name: dotted_name \n";
								t_id=new char[10];
								strcpy(t_id,temp_id.c_str());
								temp_id_stack.push(t_id);
								temp_id="";
							}
    break;

  case 112:
/* Line 868 of glr.c  */
#line 696 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"dotted_as_name: dotted_name AS NAME\n";}
    break;

  case 113:
/* Line 868 of glr.c  */
#line 699 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
					 Streams::verbose() <<"dotted_name: NAME \n";
					 temp_id=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal);
					
					/*
					  string sf=$<r.strVal>1;
					 cout<<"sf ="<<sf<<endl;
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
					 }*/
					 
					

				  }
    break;

  case 114:
/* Line 868 of glr.c  */
#line 728 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"dotted_name: NAME dotted_name_seq \n";
											temp_id=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.r.strVal)+temp_id;
									}
    break;

  case 115:
/* Line 868 of glr.c  */
#line 733 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							Streams::verbose() <<"dotted_name_seq: '.' NAME \n";
							temp_id=temp_id+"."+(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal);
						}
    break;

  case 116:
/* Line 868 of glr.c  */
#line 737 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
												Streams::verbose() <<"dotted_name_seq: dotted_name_seq '.' NAME \n";
					temp_id=temp_id+"."+(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal);
				 }
    break;

  case 117:
/* Line 868 of glr.c  */
#line 743 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
								Streams::verbose() <<"comma_name_seq :	',' NAME \n";
								((*yyvalp).var)=p->addVariableToGlobalScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal), yylval.r.lineNum, yylval.r.colNum);
								v = ((*yyvalp).var);
								((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
							 }
    break;

  case 118:
/* Line 868 of glr.c  */
#line 749 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
												Streams::verbose() <<"comma_name_seq :	comma_name_seq ',' NAME \n";
												((*yyvalp).var)=p->addVariableToGlobalScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal), yylval.r.lineNum, yylval.r.colNum);
												v = ((*yyvalp).var);
												Node* temp = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
												Node* seq = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn);
												seq->Next = temp;
											 }
    break;

  case 119:
/* Line 868 of glr.c  */
#line 759 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							Streams::verbose() <<"global_stmt: GLOBAL NAME \n";
							((*yyvalp).var)=p->addVariableToGlobalScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal), yylval.r.lineNum, yylval.r.colNum);
							v = ((*yyvalp).var);
							Node* temp = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
							((*yyvalp).tn) = ast->createGlobalNode(temp,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
						 }
    break;

  case 120:
/* Line 868 of glr.c  */
#line 766 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
											Streams::verbose() <<"global_stmt: GLOBAL NAME comma_name_seq\n";
											((*yyvalp).var)=p->addVariableToGlobalScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.strVal), yylval.r.lineNum, yylval.r.colNum);											
											v = ((*yyvalp).var);
											Node* temp = ast->createIDNode(v,0,(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),yylval.r.lineNum,yylval.r.colNum);
											((*yyvalp).tn) = ast->createGlobalNode(temp,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
										 }
    break;

  case 121:
/* Line 868 of glr.c  */
#line 775 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"nonlocal_stmt:	NONLOCAL NAME \n";}
    break;

  case 122:
/* Line 868 of glr.c  */
#line 776 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"nonlocal_stmt: NONLOCAL NAME comma_name_seq \n";}
    break;

  case 123:
/* Line 868 of glr.c  */
#line 779 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							Streams::verbose() <<"compound_stmt:  if_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 124:
/* Line 868 of glr.c  */
#line 783 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: while_stmt\n";}
    break;

  case 125:
/* Line 868 of glr.c  */
#line 784 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
								Streams::verbose() <<"compound_stmt: for_stmt\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						   }
    break;

  case 126:
/* Line 868 of glr.c  */
#line 788 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
								Streams::verbose() <<"compound_stmt: try_stmt\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						   }
    break;

  case 127:
/* Line 868 of glr.c  */
#line 792 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: with_stmt\n";}
    break;

  case 128:
/* Line 868 of glr.c  */
#line 793 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {	
								Streams::verbose() <<"compound_stmt: funcdef\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 129:
/* Line 868 of glr.c  */
#line 797 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
									Streams::verbose() <<"compound_stmt: DEF classdef\n";
									((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
								}
    break;

  case 130:
/* Line 868 of glr.c  */
#line 802 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF NAME\n";
											((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,0,0);
											v=((*yyvalp).var);
											v1=new Variable();
											v1=v;
										((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
										visit_num++;
									}
    break;

  case 131:
/* Line 868 of glr.c  */
#line 810 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF access NAME\n";
											Streams::verbose()<<"var_declaration: access_modef NAME\n";
									((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false,false);
									v=((*yyvalp).var);
									visit_num++;
									acc_mod="";
									v1=v;
									((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
											}
    break;

  case 132:
/* Line 868 of glr.c  */
#line 819 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF STATIC NAME\n";
											Streams::verbose()<<"var_declaration: STATIC NAME\n";
											((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false,false);
											v=((*yyvalp).var);
											v1=v;
											visit_num++;
											((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
										}
    break;

  case 133:
/* Line 868 of glr.c  */
#line 827 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF FINAL NAME\n";
												Streams::verbose()<<"var_declaration: FINAL NAME\n";
												((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													v1=v;
													visit_num++;
													((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
										}
    break;

  case 134:
/* Line 868 of glr.c  */
#line 835 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF STATIC FINAL NAME\n";
													Streams::verbose()<<"var_declaration: STATIC FINAL NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													visit_num++;
													v1=v;
													((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
												}
    break;

  case 135:
/* Line 868 of glr.c  */
#line 843 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF FINAL STATIC NAME\n";
													Streams::verbose()<<"var_declaration: STATIC FINAL NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													v1=v;
													visit_num++;
													((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
												}
    break;

  case 136:
/* Line 868 of glr.c  */
#line 851 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF STATIC access NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													acc_mod="";
													visit_num++;
													v1=v;
													((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
												}
    break;

  case 137:
/* Line 868 of glr.c  */
#line 859 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF FINAL access NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													acc_mod="";
													v1=v;
													visit_num++;
													((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
												}
    break;

  case 138:
/* Line 868 of glr.c  */
#line 867 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF STATIC FINAL access NAME\n";
															((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
															v=((*yyvalp).var);
															acc_mod="";
															visit_num++;
															v1=v;
															((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
														}
    break;

  case 139:
/* Line 868 of glr.c  */
#line 875 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF FINAL STATIC access NAME\n";
															((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
															v=((*yyvalp).var);
															acc_mod="";
															visit_num++;
															v1=v;
															((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
														}
    break;

  case 140:
/* Line 868 of glr.c  */
#line 883 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF access STATIC NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													visit_num++;
													acc_mod="";
													v1=v;
													((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
												}
    break;

  case 141:
/* Line 868 of glr.c  */
#line 891 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF access FINAL NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													acc_mod="";
													visit_num++;
													v1=v;
													((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
											}
    break;

  case 142:
/* Line 868 of glr.c  */
#line 899 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF access STATIC FINAL NAME\n";
														((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
														v=((*yyvalp).var);
														visit_num++;
														acc_mod="";
														v1=v;
														((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
													}
    break;

  case 143:
/* Line 868 of glr.c  */
#line 907 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF access FINAL STATIC NAME\n";
														((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
														v=((*yyvalp).var);
														acc_mod="";
														visit_num++;
														v1=v;
														((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
													}
    break;

  case 144:
/* Line 868 of glr.c  */
#line 915 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF STATIC access FINAL NAME\n";
															((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
															v=((*yyvalp).var);
															acc_mod="";
															visit_num++;
															v1=v;
															((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
														}
    break;

  case 145:
/* Line 868 of glr.c  */
#line 923 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF FINAL access STATIC NAME\n";
														((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
														v=((*yyvalp).var);
														acc_mod="";
														visit_num++;
														v1=v;
														((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
													}
    break;

  case 146:
/* Line 868 of glr.c  */
#line 932 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
									Streams::verbose() <<"elif_seq :  ELIF test ':' suite \n";
									((*yyvalp).tn) = ast->createElseIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);	
													
								}
    break;

  case 147:
/* Line 868 of glr.c  */
#line 937 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
											Streams::verbose() <<"elif_seq : elif_seq ELIF test ':' suite \n";
											Node* elseIfNode = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn);
											elseIfNode->Next = ast->createElseIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
											((*yyvalp).tn) = elseIfNode;		
																			
										  }
    break;

  case 148:
/* Line 868 of glr.c  */
#line 945 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							visit_num++;

}
    break;

  case 149:
/* Line 868 of glr.c  */
#line 949 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
									p->CloseScope();
									p->createNewScope();
									((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn);
									visit_num=0;
							}
    break;

  case 150:
/* Line 868 of glr.c  */
#line 955 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							p->CloseScope();
							p->createNewScope();
							visit_num=0;
						}
    break;

  case 151:
/* Line 868 of glr.c  */
#line 960 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
								Streams::verbose() <<"if_stmt:	IF test ':' suite \n";
								((*yyvalp).tn) = ast->createIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
								p->CloseScope();
							  }
    break;

  case 152:
/* Line 868 of glr.c  */
#line 965 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
											Streams::verbose() <<"if_stmt:	IF test ':' suite elif_seq \n";
											((*yyvalp).tn) = ast->createIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
											p->CloseScope();
										}
    break;

  case 153:
/* Line 868 of glr.c  */
#line 970 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
												Streams::verbose() <<"if_stmt:	IF test ':' suite ELSE ':' suite \n";
												p->CloseScope();
												Node* elseNode = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
												((*yyvalp).tn) = ast->createIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.tn),elseNode,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
											  }
    break;

  case 154:
/* Line 868 of glr.c  */
#line 976 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
														Streams::verbose() <<"if_stmt:	IF test ':' suite elif_seq ELSE ':' suite \n";
														Node* elseIfNode = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.tn);
														Node* elseNode = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
														elseIfNode->Next = elseNode;
														((*yyvalp).tn) = ast->createIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.tn),elseIfNode,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
														p->CloseScope();
													   }
    break;

  case 155:
/* Line 868 of glr.c  */
#line 985 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
						visit_num++;
					}
    break;

  case 156:
/* Line 868 of glr.c  */
#line 988 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							p->createNewScope();
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn);
							visit_num=0;
						}
    break;

  case 157:
/* Line 868 of glr.c  */
#line 993 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							p->createNewScope();
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn);
							visit_num=0;
						}
    break;

  case 158:
/* Line 868 of glr.c  */
#line 998 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
									Streams::verbose() <<"while_stmt: WHILE test ':' suite \n";
									((*yyvalp).tn) = ast->createWhileNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
									p->CloseScope();
								 }
    break;

  case 159:
/* Line 868 of glr.c  */
#line 1003 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
													Streams::verbose() <<"while_stmt:  WHILE test ':' suite ELSE ':' suite \n";
													Node* whileNode= ast->createWhileNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
													whileNode->Next = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
													((*yyvalp).tn) = whileNode;
												 }
    break;

  case 160:
/* Line 868 of glr.c  */
#line 1010 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
								visit_num++;
							}
    break;

  case 161:
/* Line 868 of glr.c  */
#line 1013 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
									Streams::verbose() <<"while_header:  WHILE test ':' \n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn);//cout<<"in while"<<($<tn>2)->getNodeType()<<endl;
								p->createNewScope();
								visit_num=0;
}
    break;

  case 162:
/* Line 868 of glr.c  */
#line 1019 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
								Streams::verbose() <<"while_header:  WHILE test error \n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn);cout<<"in while"<<((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn))->getNodeType()<<endl;
								p->createNewScope();
								visit_num=0;
							 }
    break;

  case 163:
/* Line 868 of glr.c  */
#line 1025 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
												Streams::verbose() <<"for_stmt:   FOR exprlist IN testlist ':' suite \n";
												((*yyvalp).tn) = ast->createForNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.tn), NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
												p->CloseScope();
											   }
    break;

  case 164:
/* Line 868 of glr.c  */
#line 1030 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
												Streams::verbose() <<"for_stmt:   FOR exprlist IN testlist error suite \n";
												((*yyvalp).tn) = ast->createForNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.tn), NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
												p->CloseScope();
											   }
    break;

  case 165:
/* Line 868 of glr.c  */
#line 1035 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
												Streams::verbose() <<"for_stmt:   FOR exprlist error testlist ':' suite \n";
												((*yyvalp).tn) = ast->createForNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.tn), NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
												p->CloseScope();
											   }
    break;

  case 166:
/* Line 868 of glr.c  */
#line 1040 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
																Streams::verbose() <<"for_stmt:  FOR exprlist IN testlist ':' suite ELSE ':' suite\n";
																Node* forNode = ast->createForNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.tn), NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (8))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
																forNode->Next = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (8))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
																((*yyvalp).tn) = forNode;															
															   }
    break;

  case 167:
/* Line 868 of glr.c  */
#line 1046 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
																Streams::verbose() <<"for_stmt:  FOR exprlist IN testlist error suite ELSE ':' suite\n";
																Node* forNode = ast->createForNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.tn), NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (8))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
																forNode->Next = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (8))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
																((*yyvalp).tn) = forNode;															
															   }
    break;

  case 168:
/* Line 868 of glr.c  */
#line 1052 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
																Streams::verbose() <<"for_stmt:  FOR exprlist IN testlist ':' suite ELSE error suite\n";
																Node* forNode = ast->createForNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.tn), NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (8))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
																forNode->Next = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (8))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
																((*yyvalp).tn) = forNode;															
															   }
    break;

  case 169:
/* Line 868 of glr.c  */
#line 1058 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
																Streams::verbose() <<"for_stmt:  FOR exprlist error testlist ':' suite ELSE ':' suite\n";
																Node* forNode = ast->createForNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.tn), NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (8))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
																forNode->Next = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (8))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
																((*yyvalp).tn) = forNode;															
															   }
    break;

  case 170:
/* Line 868 of glr.c  */
#line 1065 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
													p->createNewScope();
													((*yyvalp).tn)= (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
											}
    break;

  case 171:
/* Line 868 of glr.c  */
#line 1069 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
										p->createNewScope();
}
    break;

  case 172:
/* Line 868 of glr.c  */
#line 1072 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
										p->createNewScope();
					 }
    break;

  case 173:
/* Line 868 of glr.c  */
#line 1076 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
												Streams::verbose() <<" try_stmt:   TRY ':' suite try_except_cla_seq\n";
												p->CloseScope();
												((*yyvalp).tn) = ast->createTryNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
											 }
    break;

  case 174:
/* Line 868 of glr.c  */
#line 1081 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
																p->CloseScope();
																Streams::verbose() <<" try_stmt: TRY ':' suite try_except_cla_seq ELSE ':' suite\n";
																Node* except = (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.tn);
																while(except->Next!=NULL)
																	except = except->Next;
																except->Next = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (6))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
																((*yyvalp).tn) = ast->createTryNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
															 }
    break;

  case 175:
/* Line 868 of glr.c  */
#line 1090 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
																	Streams::verbose() <<"try_stmt:  TRY ':' suite try_except_cla_seq FINALLY ':' suite\n";
																Node* except = (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.tn);
																p->CloseScope();
																while(except->Next!=NULL)
																	except = except->Next;
																except->Next = ast->createFinallyNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
																((*yyvalp).tn) = ast->createTryNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
																}
    break;

  case 176:
/* Line 868 of glr.c  */
#line 1099 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
												Streams::verbose() <<"try_stmt:  TRY ':' suite FINALLY ':' suite\n";
												p->CloseScope();
												Node* finally = ast->createFinallyNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
												((*yyvalp).tn) = ast->createTryNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.tn), finally, NULL,yylval.r.lineNum,yylval.r.colNum);
											 }
    break;

  case 177:
/* Line 868 of glr.c  */
#line 1106 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
								if(!from_except)
								{
									p->CloseScope();
									p->createNewScope();
								}
								from_except=false;
							}
    break;

  case 178:
/* Line 868 of glr.c  */
#line 1114 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
								if(!from_except)
								{
									p->CloseScope();
									p->createNewScope();
								}
								from_except=false;
							}
    break;

  case 179:
/* Line 868 of glr.c  */
#line 1123 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
												Streams::verbose() <<"try_except_cla_seq: except_clause ':' suite \n";
												Node* except = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn);
												except->Son = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn);
												p->CloseScope();
												p->createNewScope();
												((*yyvalp).tn) = except;
												from_except=true;
											}
    break;

  case 180:
/* Line 868 of glr.c  */
#line 1132 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
												Streams::verbose() <<"try_except_cla_seq: except_clause error suite \n";
												Node* except = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn);
												except->Son = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn);
												p->CloseScope();
												p->createNewScope();
												((*yyvalp).tn) = except;
												from_except=true;
											}
    break;

  case 181:
/* Line 868 of glr.c  */
#line 1141 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
																	Streams::verbose() <<"try_except_cla_seq: try_except_cla_seq except_clause ':' suite\n";
																	Node* except_a = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.tn);
																	Node* except_b = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.tn);
																	while(except_a->Next!=NULL)
																		except_a = except_a->Next;
																	except_a->Next = except_b;
																	p->CloseScope();
																	p->createNewScope();
																	except_b->Son = (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.tn);
																	((*yyvalp).tn) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.tn);
																	from_except=true;
																}
    break;

  case 182:
/* Line 868 of glr.c  */
#line 1154 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
																	Streams::verbose() <<"try_except_cla_seq: try_except_cla_seq except_clause error suite\n";
																	Node* except_a = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.tn);
																	Node* except_b = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.tn);
																	while(except_a->Next!=NULL)
																		except_a = except_a->Next;
																	except_a->Next = except_b;
																	p->CloseScope();
																	p->createNewScope();
																	except_b->Son = (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.tn);
																	((*yyvalp).tn) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.tn);
																	from_except=true;
																}
    break;

  case 183:
/* Line 868 of glr.c  */
#line 1169 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"with_seq:	',' with_item \n";}
    break;

  case 184:
/* Line 868 of glr.c  */
#line 1170 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"with_seq: with_seq ',' with_item\n";}
    break;

  case 185:
/* Line 868 of glr.c  */
#line 1173 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"with_stmt:  WITH with_item ':' suite \n";}
    break;

  case 186:
/* Line 868 of glr.c  */
#line 1174 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"with_stmt: WITH with_item with_seq ':' suite\n";}
    break;

  case 187:
/* Line 868 of glr.c  */
#line 1177 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<" with_item:  test\n";}
    break;

  case 188:
/* Line 868 of glr.c  */
#line 1178 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"with_item: test AS expr\n";}
    break;

  case 189:
/* Line 868 of glr.c  */
#line 1181 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
						p->CloseScope();
						p->createNewScope();
						Streams::verbose() <<"except_clause:  EXCEPT \n";
						((*yyvalp).tn) = ast->createExceptNode(NULL, NULL, NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
					   }
    break;

  case 190:
/* Line 868 of glr.c  */
#line 1187 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
								p->CloseScope();
								p->createNewScope();
								Streams::verbose() <<"except_clause:  EXCEPT test\n";
								((*yyvalp).tn) = ast->createExceptNode(NULL, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
								visit_num=0;
								lastNode=NULL;
							 }
    break;

  case 191:
/* Line 868 of glr.c  */
#line 1195 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"except_clause:  EXCEPT test AS NAME\n";
												p->CloseScope();
												p->createNewScope();
												visit_num=0;
												lastNode=NULL;
										}
    break;

  case 192:
/* Line 868 of glr.c  */
#line 1203 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {	
						((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);	Streams:: verbose() <<"list_stmt : stmt\n";
				}
    break;

  case 193:
/* Line 868 of glr.c  */
#line 1206 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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

  case 194:
/* Line 868 of glr.c  */
#line 1219 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							Streams::verbose() <<"suite:	list_stmt END\n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);	
						}
    break;

  case 195:
/* Line 868 of glr.c  */
#line 1223 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							Streams::verbose() <<"suite:	list_stmt error\n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);	
						}
    break;

  case 196:
/* Line 868 of glr.c  */
#line 1227 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {	((*yyvalp).tn)=NULL;	Streams::verbose() <<"suite:	END\n"; ((*yyvalp).tn)=NULL;}
    break;

  case 197:
/* Line 868 of glr.c  */
#line 1228 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {	((*yyvalp).tn)=NULL;	Streams::verbose() <<"suite:	error\n"; ((*yyvalp).tn)=NULL;}
    break;

  case 198:
/* Line 868 of glr.c  */
#line 1231 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"test:	or_test\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 199:
/* Line 868 of glr.c  */
#line 1232 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"or_test IF or_test ELSE test\n";
										((*yyvalp).tn)=ast->createShortIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
		}
    break;

  case 200:
/* Line 868 of glr.c  */
#line 1236 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"or_seq:	OR and_test \n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 201:
/* Line 868 of glr.c  */
#line 1237 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"or_seq: or_seq OR and_test \n";
								((*yyvalp).tn)=ast->createBooleanNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),OR_OP,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
							}
    break;

  case 202:
/* Line 868 of glr.c  */
#line 1242 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"or_test:	and_test\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 203:
/* Line 868 of glr.c  */
#line 1243 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"or_test:	and_test or_seq\n";
							((*yyvalp).tn)=ast->createBooleanNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),OR_OP,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
							}
    break;

  case 204:
/* Line 868 of glr.c  */
#line 1248 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"and_seq: AND not_test \n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 205:
/* Line 868 of glr.c  */
#line 1249 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"and_seq: and_seq AND not_test \n";
									((*yyvalp).tn)=ast->createBooleanNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),AND_OP,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
								}
    break;

  case 206:
/* Line 868 of glr.c  */
#line 1254 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"and_test:	not_test\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 207:
/* Line 868 of glr.c  */
#line 1255 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"and_test: not_test and_seq \n";
								((*yyvalp).tn)=ast->createBooleanNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),AND_OP,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
		  }
    break;

  case 208:
/* Line 868 of glr.c  */
#line 1260 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"not_test:	NOT not_test\n";
							((*yyvalp).tn)=ast->createBooleanNode(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NOT_OP,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
							}
    break;

  case 209:
/* Line 868 of glr.c  */
#line 1263 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"not_test:	comparison\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);cout<<((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn))->getNodeType()<<endl;}
    break;

  case 210:
/* Line 868 of glr.c  */
#line 1266 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
											Streams::verbose() <<"comp_op_seq: comp_op expr \n";
											((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
											lastNode=NULL;
										}
    break;

  case 211:
/* Line 868 of glr.c  */
#line 1271 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
											Streams::verbose() <<"comp_op_seq: comp_op_seq comp_op expr \n";
											((*yyvalp).tn)=ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn),NULL,comp_op,yylval.r.lineNum,yylval.r.colNum);	
										}
    break;

  case 212:
/* Line 868 of glr.c  */
#line 1277 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comparison: expr\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
													//cout<<($<tn>1)->getNodeType()<<" Comp"<<endl;

												}
    break;

  case 213:
/* Line 868 of glr.c  */
#line 1281 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
					Streams::verbose() <<"comparison: expr comp_op_seq\n";
					//cout <<"the comp operand is "<<comp_op<<endl;
						((*yyvalp).tn)=ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,comp_op,yylval.r.lineNum,yylval.r.colNum);
				}
    break;

  case 214:
/* Line 868 of glr.c  */
#line 1288 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {	
				Streams::verbose() <<"comp_op: '<' \n";
				comp_op=LESS;
			}
    break;

  case 215:
/* Line 868 of glr.c  */
#line 1292 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: '>' \n";comp_op=GREATHER;}
    break;

  case 216:
/* Line 868 of glr.c  */
#line 1293 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
					cout<<"enter to equal "<<endl;
					Streams::verbose() <<"comp_op: EQUAL \n";
					comp_op=EQUALS;
					}
    break;

  case 217:
/* Line 868 of glr.c  */
#line 1298 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: MORE_OR_EQUAL \n";comp_op=EQUALGREATHER;}
    break;

  case 218:
/* Line 868 of glr.c  */
#line 1299 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: LESS_OR_EQUAL \n";comp_op=EQUALLESS;}
    break;

  case 219:
/* Line 868 of glr.c  */
#line 1300 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: MORE_LESS \n";}
    break;

  case 220:
/* Line 868 of glr.c  */
#line 1301 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: NOT_EQUAL \n";comp_op=NOTEQUAL;}
    break;

  case 221:
/* Line 868 of glr.c  */
#line 1302 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IN \n";}
    break;

  case 222:
/* Line 868 of glr.c  */
#line 1303 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: NOT IN \n";}
    break;

  case 223:
/* Line 868 of glr.c  */
#line 1304 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IS \n";}
    break;

  case 224:
/* Line 868 of glr.c  */
#line 1305 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IS NOT \n";}
    break;

  case 225:
/* Line 868 of glr.c  */
#line 1308 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"star_expr: '*' expr \n";}
    break;

  case 226:
/* Line 868 of glr.c  */
#line 1311 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"or_xor_expr_seq: '|' xor_expr \n";}
    break;

  case 227:
/* Line 868 of glr.c  */
#line 1312 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"or_xor_expr_seq: or_xor_expr_seq '|' xor_expr\n";}
    break;

  case 228:
/* Line 868 of glr.c  */
#line 1314 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
					Streams::verbose() <<"expr: xor_expr\n";
					((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
				}
    break;

  case 229:
/* Line 868 of glr.c  */
#line 1318 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"expr: xor_expr or_xor_expr_seq\n";}
    break;

  case 230:
/* Line 868 of glr.c  */
#line 1321 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"sha_and_expr_seq: '^' and_expr \n";}
    break;

  case 231:
/* Line 868 of glr.c  */
#line 1322 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"sha_and_expr_seq: sha_and_expr_seq '^' and_expr\n";}
    break;

  case 232:
/* Line 868 of glr.c  */
#line 1325 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"xor_expr: and_expr\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 233:
/* Line 868 of glr.c  */
#line 1326 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"xor_expr: and_expr sha_and_expr_seq\n";}
    break;

  case 234:
/* Line 868 of glr.c  */
#line 1329 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"and_shift_expr_seq: '&' shift_expr \n";}
    break;

  case 235:
/* Line 868 of glr.c  */
#line 1330 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"and_shift_expr_seq: and_shift_expr_seq '&' shift_expr\n";}
    break;

  case 236:
/* Line 868 of glr.c  */
#line 1333 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"and_expr: shift_expr\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 237:
/* Line 868 of glr.c  */
#line 1334 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"and_expr: shift_expr and_shift_expr_seq\n";}
    break;

  case 238:
/* Line 868 of glr.c  */
#line 1337 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	LESS_THAN_2 arith_expr \n";}
    break;

  case 239:
/* Line 868 of glr.c  */
#line 1338 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	MORE_THAN_2 arith_expr \n";}
    break;

  case 240:
/* Line 868 of glr.c  */
#line 1339 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	arith_seq LESS_THAN_2 arith_expr \n";}
    break;

  case 241:
/* Line 868 of glr.c  */
#line 1340 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	arith_seq MORE_THAN_2 arith_expr \n";}
    break;

  case 242:
/* Line 868 of glr.c  */
#line 1343 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							Streams::verbose() <<"shift_expr: arith_expr\n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 243:
/* Line 868 of glr.c  */
#line 1347 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"shift_expr: arith_expr arith_seq\n";}
    break;

  case 244:
/* Line 868 of glr.c  */
#line 1350 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : '+' term \n";
						op=PLUS;
						//cout<<"op1= "<<op<<endl;
						((*yyvalp).operands)=op;
						//cout<<"op = "<<$<operands>$<<endl;
						((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 245:
/* Line 868 of glr.c  */
#line 1357 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : '-' term \n";
			/**
							op=MINUS;
							cout<<"amer = "<<op<<endl;
							$<operands>$=op;
							$<tn>$=$<tn>2;**/
							int* xx = new int (0);
						Node* kl = ast->createTypeNode((void*)xx,0,0,yylval.r.lineNum,yylval.r.colNum,INT);
						//k=ast->addNext(k,$<tn>2);
						((*yyvalp).tn) = ast->createExprNode(kl,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,MINUS,yylval.r.lineNum,yylval.r.colNum);
						}
    break;

  case 246:
/* Line 868 of glr.c  */
#line 1368 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : term_seq '+' term \n";//op=PLUS;
									k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
									((*yyvalp).operands)=PLUS;
									//op=$<operands>$;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,PLUS,yylval.r.lineNum,yylval.r.colNum);
								}
    break;

  case 247:
/* Line 868 of glr.c  */
#line 1374 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : term_seq '-' term \n";//op=MINUS;
									k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
									((*yyvalp).operands)=MINUS;
									//op=$<operands>$;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,MINUS,yylval.r.lineNum,yylval.r.colNum);
								}
    break;

  case 248:
/* Line 868 of glr.c  */
#line 1382 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"arith_expr: term\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
									((*yyvalp).operands)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.operands);
							}
    break;

  case 249:
/* Line 868 of glr.c  */
#line 1386 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
											Streams::verbose() <<"arith_expr: term term_seq\n";
											k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
											//cout<<"the value of op is "<<op<<endl;
											((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,PLUS/**op**/,yylval.r.lineNum,yylval.r.colNum);
											
										}
    break;

  case 250:
/* Line 868 of glr.c  */
#line 1396 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '*' factor \n";
							((*yyvalp).operands)=MULT;
							op=((*yyvalp).operands);
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 251:
/* Line 868 of glr.c  */
#line 1401 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '/' factor \n";
								((*yyvalp).operands)=DIV;
								op=((*yyvalp).operands);
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 252:
/* Line 868 of glr.c  */
#line 1406 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '%' factor \n";
								((*yyvalp).operands)=MOD;
								op=((*yyvalp).operands);
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 253:
/* Line 868 of glr.c  */
#line 1411 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: DIV_2 factor \n";}
    break;

  case 254:
/* Line 868 of glr.c  */
#line 1412 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '*' factor \n";
									k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
									op=MULT;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,op,yylval.r.lineNum,yylval.r.colNum);
									}
    break;

  case 255:
/* Line 868 of glr.c  */
#line 1417 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '/' factor \n";
									k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
									op=DIV;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,op,yylval.r.lineNum,yylval.r.colNum);
									}
    break;

  case 256:
/* Line 868 of glr.c  */
#line 1422 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '%' factor \n";
									op=MOD;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,op,yylval.r.lineNum,yylval.r.colNum);
									}
    break;

  case 257:
/* Line 868 of glr.c  */
#line 1426 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq DIV_2 factor \n";}
    break;

  case 258:
/* Line 868 of glr.c  */
#line 1429 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"term: 	factor\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 259:
/* Line 868 of glr.c  */
#line 1430 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"term: 	factor factor_seq\n";
								k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
								((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,op,yylval.r.lineNum,yylval.r.colNum);
							}
    break;

  case 260:
/* Line 868 of glr.c  */
#line 1436 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"factor: '+' factor \n";
						((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
						
					}
    break;

  case 261:
/* Line 868 of glr.c  */
#line 1440 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"factor: '-' factor \n";
						int* xx = new int (0);
						k = ast->createTypeNode((void*)xx,0,0,yylval.r.lineNum,yylval.r.colNum,INT);
						//k=ast->addNext(k,$<tn>2);
						((*yyvalp).tn) = ast->createExprNode(k,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,MINUS,yylval.r.lineNum,yylval.r.colNum);
						
						}
    break;

  case 262:
/* Line 868 of glr.c  */
#line 1447 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"factor: '~' factor \n";}
    break;

  case 263:
/* Line 868 of glr.c  */
#line 1448 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
		         if(!inside_func&&!inside_while_cond){
					visit_num++;
					Streams::verbose() <<"factor: power\n";
					exist=false;
					//cout<<"visit num= "<<visit_num<<"  "<<yylval.r.lineNum<<"  size = "<<temp_id2.size()<<endl;
					if((visit_num==1)&&(!constant)&&(temp_id2.size()>0))
					{
						((*yyvalp).var)=p->checkVariable(const_cast<char *>(temp_id2.back().c_str()),t,exist, yylval.r.lineNum, yylval.r.colNum,true,false,is_dic);
						v=((*yyvalp).var);
						v1=v;
						//cout<<"exist is "<<exist<<yylval.r.lineNum<<endl;
						if((!exist)&&(v!=NULL))
						{
							//cout<<"hellow world  "<<v->get_name()<<endl;
							lastNode=ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
							//cout<<"last node"<<endl;	
							((*yyvalp).tn)=ast->createCallVarNode(temp_id2.back(),v,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);	
							
						}
						else
						{
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						} 
						temp_id2.pop_back();	
					}
					else if((!constant)&&(!is_list))
					{
						v=NULL;
						if(v1)
						{
							v1->init=true;
						}
						if(!temp_id2.empty())
						{
						//cout<<"enter amora alhosary"<<endl;
						((*yyvalp).var)=p->checkVariable(const_cast<char *>(temp_id2.back().c_str()),t,exist, yylval.r.lineNum, yylval.r.colNum,false,is_list,is_dic);
						v=((*yyvalp).var);
						}
						else
						{
							v=NULL;
						}
						is_list=false;
						if(v!=NULL)
						{
							((*yyvalp).tn)=ast->createCallVarNode(temp_id2.back(),v,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);	
							//temp_id2.pop_back();		
						}
						else
						{
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						}
							if(!temp_id2.empty())
							{
								temp_id2.pop_back();
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
					constant=false;
				}else {
					((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
					inside_while_cond = false;
				} 
			}
    break;

  case 264:
/* Line 868 of glr.c  */
#line 1522 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"trailer_seq: trailer \n";
										((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
										visit_num++;
									}
    break;

  case 265:
/* Line 868 of glr.c  */
#line 1526 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"trailer_seq: trailer_seq trailer \n";
										((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
										visit_num++;
									}
    break;

  case 266:
/* Line 868 of glr.c  */
#line 1532 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"power:	atom\n";
							//$<tn>$=ast->createCallVarNode(temp_id2.back(),NULL,NULL,NULL);
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 267:
/* Line 868 of glr.c  */
#line 1536 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"power: atom trailer_seq \n";
											//cout<<"the top is "<<temp_id2.back()<<"   "<<temp_id2.size()<<endl;
											((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
											dotvec.insert(dotvec.begin(),(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn));
											((*yyvalp).tn)=ast->createDotNode(dotvec,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
											dotvec.clear();
											inside_func=false;
											//cout <<"insite func "<<inside_func<<endl;
											cout<<"in dot grammer "<<temp_id2.back()<<endl;
											temp_id2.pop_back();
										}
    break;

  case 268:
/* Line 868 of glr.c  */
#line 1547 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"power: atom trailer_seq STAR_2 factor \n";}
    break;

  case 269:
/* Line 868 of glr.c  */
#line 1548 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"power: atom STAR_2 factor \n";}
    break;

  case 270:
/* Line 868 of glr.c  */
#line 1551 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"str_seq:	STRING \n"; cout<<"string is"<<((*yyvalp).r.strVal)<<endl;}
    break;

  case 271:
/* Line 868 of glr.c  */
#line 1552 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"str_seq:	str_seq STRING \n";}
    break;

  case 272:
/* Line 868 of glr.c  */
#line 1555 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'(' ')' \n";}
    break;

  case 273:
/* Line 868 of glr.c  */
#line 1556 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'(' testlist_comp ')' \n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn);cout<<((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn))->getNodeType()<<endl; inside_while_cond = true; arrayvec.clear();}
    break;

  case 274:
/* Line 868 of glr.c  */
#line 1557 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'[' ']' \n";
						arrayvec.clear();
						array_right=true;
						//is_list=true;
						((*yyvalp).tn)=ast->createArrayNode(arrayvec,0,0,yylval.r.lineNum,yylval.r.colNum);
						arr_node=static_cast<ArrayNode*>(((*yyvalp).tn));
				}
    break;

  case 275:
/* Line 868 of glr.c  */
#line 1564 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' '}' \n";}
    break;

  case 276:
/* Line 868 of glr.c  */
#line 1565 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' '}' \n";
									((*yyvalp).tn)=ast->createArrayNode(arrayvec,0,0,yylval.r.lineNum,yylval.r.colNum);
									array_right=true;
									arr_node=static_cast<ArrayNode*>(((*yyvalp).tn));
									//is_list=true;
									arrayvec.clear();
									}
    break;

  case 277:
/* Line 868 of glr.c  */
#line 1572 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' dictorsetmaker '}' \n";}
    break;

  case 278:
/* Line 868 of glr.c  */
#line 1573 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    { Streams::verbose() <<"atom: NAME\n";
									if(strcmp((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal),"self")==0)
									{
										a_self=true;
									}
		                            if(!inside_func){
									temp_id2.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal));
									//cout <<"hello molham "<<$<r.strVal>1;
									my_node=NULL;
									}
									else{
											if(!in_def)
											{
												my_node = ast->createIDNode(NULL,0,0,yylval.r.lineNum,yylval.r.colNum);
											}
											else
												in_def=false;
										
										}
									
									/*Node* temp = ast->createCallVarNode($<r.strVal>1,NULL,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
									$<tn>$=temp;
									expnode= new Node(temp);*/
									((*yyvalp).tn)=ast->createCallVarNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal),NULL,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
									//expnode=$<tn>$;
					}
    break;

  case 279:
/* Line 868 of glr.c  */
#line 1599 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    { Streams::verbose() <<"atom: NAME()\n";
									//temp_id2.push_back($<r.strVal>1);
									visit_num++;
									parameters.clear();
									//cout<<"enter in name()"<<endl;
									((*yyvalp).tn)=ast->createCallTypeNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.r.strVal),parameters,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
									}
    break;

  case 280:
/* Line 868 of glr.c  */
#line 1606 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    { Streams::verbose() <<"atom: NAME\n";
									//temp_id2.push_back($<r.strVal>1);
									visit_num++;
									((*yyvalp).tn)=ast->createCallTypeNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.strVal),parameters/*$<tn>3*/,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
									parameters.clear();
												}
    break;

  case 281:
/* Line 868 of glr.c  */
#line 1612 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"trailer:	'[' subscriptlist ']'\n";
											((*yyvalp).var)=p->checkVariable((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.strVal),t,exist, yylval.r.lineNum, yylval.r.colNum,false,true,is_dic);
											//cout<<"enter to arrayelem"<<endl;
											is_list=true;
											if(((*yyvalp).var))
											{
												((*yyvalp).tn)=ast->createArrayElementNode(((*yyvalp).var),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.strVal));
												//cout<<"enter if in arrsay ggyhg\n";
											}
												
										}
    break;

  case 282:
/* Line 868 of glr.c  */
#line 1623 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_INT "<<(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.intVal)<<endl;;
						int* xx = new int ((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.intVal));
						//cout<<"yhe number is"<<*xx<<endl;
						//cout<<"reference"<<xx<<endl;
						constant=true;
						((*yyvalp).tn) = ast->createTypeNode((void*)xx,0,0,yylval.r.lineNum,yylval.r.colNum,INT);
						//visit_num++;
														}
    break;

  case 283:
/* Line 868 of glr.c  */
#line 1631 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_FLOAT\n"<<(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.floatVal)<<endl;
							constant=true;
							float* x=new float((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.floatVal));
							((*yyvalp).tn) = ast->createTypeNode((void*)x,0,0,yylval.r.lineNum,yylval.r.colNum,FLOAT);
						}
    break;

  case 284:
/* Line 868 of glr.c  */
#line 1636 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_FLOAT\n";
							long *xxx=new long((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.longVal));
							constant=true;
							((*yyvalp).tn) = ast->createTypeNode(&xxx,0,0,yylval.r.lineNum,yylval.r.colNum,LONG);
						}
    break;

  case 285:
/* Line 868 of glr.c  */
#line 1641 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atom: CHAR_VALUE\n";}
    break;

  case 286:
/* Line 868 of glr.c  */
#line 1642 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atom: str_seq\n";
									char* x = new char[100];
									strcpy(x,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal));
									//cout<<"x=   "<<x<<endl;
									string sd(x);
									//cout<<"sd=== "<<sd<<endl;
									constant=true;
									((*yyvalp).tn) = ast->createTypeNode(reinterpret_cast<void*>(x),0,0,yylval.r.lineNum,yylval.r.colNum,STRINGS);
								}
    break;

  case 287:
/* Line 868 of glr.c  */
#line 1651 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atom: DOT_3\n";}
    break;

  case 288:
/* Line 868 of glr.c  */
#line 1652 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atom: NONE\n";}
    break;

  case 289:
/* Line 868 of glr.c  */
#line 1653 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atom: TRUE\n";
					int* xx = new int (1);
						//cout<<"yhe number is"<<*xx<<endl;
						//cout<<"reference"<<xx<<endl;
						constant=true;
						((*yyvalp).tn) = ast->createTypeNode((void*)xx,0,0,yylval.r.lineNum,yylval.r.colNum,INT);
				}
    break;

  case 290:
/* Line 868 of glr.c  */
#line 1660 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atom: FALSE\n";
						int* xx = new int (0);
						//cout<<"yhe number is"<<*xx<<endl;
						//cout<<"reference"<<xx<<endl;
						constant=true;
						((*yyvalp).tn) = ast->createTypeNode((void*)xx,0,0,yylval.r.lineNum,yylval.r.colNum,INT);
				}
    break;

  case 291:
/* Line 868 of glr.c  */
#line 1669 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: ',' test\n";
							arrayvec.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
							
							}
    break;

  case 292:
/* Line 868 of glr.c  */
#line 1673 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: ',' star_expr\n";}
    break;

  case 293:
/* Line 868 of glr.c  */
#line 1674 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: comma_test_star_seq ',' test\n";
														arrayvec.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
													}
    break;

  case 294:
/* Line 868 of glr.c  */
#line 1677 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: comma_test_star_seq ',' star_expr\n";}
    break;

  case 295:
/* Line 868 of glr.c  */
#line 1680 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test comp_for\n";}
    break;

  case 296:
/* Line 868 of glr.c  */
#line 1681 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test\n"; ((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
								arrayvec.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn));
							}
    break;

  case 297:
/* Line 868 of glr.c  */
#line 1684 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test   comma_test_star_seq\n";
												((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
												arrayvec.insert(arrayvec.begin(),(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn));
											}
    break;

  case 298:
/* Line 868 of glr.c  */
#line 1688 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 299:
/* Line 868 of glr.c  */
#line 1689 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";
													arrayvec.insert(arrayvec.begin(),(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn));
												}
    break;

  case 300:
/* Line 868 of glr.c  */
#line 1692 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 301:
/* Line 868 of glr.c  */
#line 1693 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 302:
/* Line 868 of glr.c  */
#line 1694 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 303:
/* Line 868 of glr.c  */
#line 1695 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 304:
/* Line 868 of glr.c  */
#line 1696 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 305:
/* Line 868 of glr.c  */
#line 1700 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"trailer:	'.' NAME\n";
							temp_id=temp_id2.back();
							temp_id=temp_id+"."+(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal);
						temp_id2.pop_back();
						temp_id2.push_back(temp_id);	
						((*yyvalp).tn)=ast->createCallVarNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal),NULL,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
						dotvec.push_back(((*yyvalp).tn));
						if(strcmp((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal),"self")==0)
						{
							a_self=true;
						}
						}
    break;

  case 306:
/* Line 868 of glr.c  */
#line 1712 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
									parameters.clear();
									if(a_self)
									{
										((*yyvalp).tn)=ast->createCallFunctionNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.strVal),func_call,NULL,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);	
										a_self=false;
									}
									else
									{
										((*yyvalp).tn)=ast->createCallTypeNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.strVal),parameters,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
									}
									Streams::verbose() <<"trailer:	'.' NAME()\n";
									temp_id=temp_id2.back();
									temp_id=temp_id+"."+(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.strVal);
								temp_id2.pop_back();
								temp_id2.push_back(temp_id);
									dotvec.push_back(((*yyvalp).tn));
									call_func=false;
								}
    break;

  case 307:
/* Line 868 of glr.c  */
#line 1731 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
									if(a_self)
									{
									//cout<<"Toslamly khyoo Amooooora"<<endl;
										((*yyvalp).tn)=ast->createCallFunctionNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.strVal),func_call,NULL,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
										a_self=false;
									}
									else
									{
										((*yyvalp).tn)=ast->createCallTypeNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.strVal),parameters,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
									}
									dotvec.push_back(((*yyvalp).tn));
									//cout<<"the size is "<<func_call.size()<<endl;
									temp_id=temp_id2.back();
									temp_id=temp_id+"."+(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.strVal);
									temp_id2.pop_back();
									temp_id2.push_back(temp_id);
									call_func=false;
									func_call.clear();
								}
    break;

  case 308:
/* Line 868 of glr.c  */
#line 1751 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
												Streams::verbose() <<"trailer:	'[' subscriptlist ']'\n";
												((*yyvalp).tn)=ast->createArrayElementNode(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
												dotvec.push_back(((*yyvalp).tn));
											}
    break;

  case 309:
/* Line 868 of glr.c  */
#line 1760 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_subscript_seq: ',' subscript\n";}
    break;

  case 310:
/* Line 868 of glr.c  */
#line 1761 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_subscript_seq: comma_subscript_seq ',' subscript\n";}
    break;

  case 311:
/* Line 868 of glr.c  */
#line 1764 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 312:
/* Line 868 of glr.c  */
#line 1765 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript comma_subscript_seq\n";
													((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
												}
    break;

  case 313:
/* Line 868 of glr.c  */
#line 1768 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript  ','\n";}
    break;

  case 314:
/* Line 868 of glr.c  */
#line 1769 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript comma_subscript_seq ','\n";
															((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn));
														}
    break;

  case 315:
/* Line 868 of glr.c  */
#line 1774 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 316:
/* Line 868 of glr.c  */
#line 1775 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':'\n";}
    break;

  case 317:
/* Line 868 of glr.c  */
#line 1776 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"subscript: test ':'\n";
							((*yyvalp).tn)=ast->createSubscriptNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),NULL,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
						}
    break;

  case 318:
/* Line 868 of glr.c  */
#line 1779 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' test\n";
								((*yyvalp).tn)=ast->createSubscriptNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
							}
    break;

  case 319:
/* Line 868 of glr.c  */
#line 1782 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' sliceop\n";}
    break;

  case 320:
/* Line 868 of glr.c  */
#line 1783 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' test sliceop\n";}
    break;

  case 321:
/* Line 868 of glr.c  */
#line 1784 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' test\n";
								((*yyvalp).tn)=ast->createSubscriptNode(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
						}
    break;

  case 322:
/* Line 868 of glr.c  */
#line 1787 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' sliceop\n";}
    break;

  case 323:
/* Line 868 of glr.c  */
#line 1788 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' test sliceop\n";}
    break;

  case 324:
/* Line 868 of glr.c  */
#line 1791 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"sliceop: ':'\n";}
    break;

  case 325:
/* Line 868 of glr.c  */
#line 1792 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"sliceop: ':' test\n";}
    break;

  case 326:
/* Line 868 of glr.c  */
#line 1795 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	',' expr \n";
										((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
										if(call_func){
												func_call.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));	
												//expnode=NULL;
									}
									}
    break;

  case 327:
/* Line 868 of glr.c  */
#line 1802 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	',' star_expr \n";}
    break;

  case 328:
/* Line 868 of glr.c  */
#line 1803 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	comma_expr_star_seq ',' expr \n";
															
															if(call_func){
												//cout<<"here1"<<endl;
												func_call.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
												//expnode=NULL;
											}
															((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
														}
    break;

  case 329:
/* Line 868 of glr.c  */
#line 1812 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	comma_expr_star_seq ',' star_expr \n";}
    break;

  case 330:
/* Line 868 of glr.c  */
#line 1815 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr \n";
						((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						if(call_func){
								
								func_call.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn));	
								//expnode=NULL;
						}
					}
    break;

  case 331:
/* Line 868 of glr.c  */
#line 1823 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr comma_expr_star_seq \n";
											((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);
											
											//cout<<"out here1"<<endl;
											if(call_func){
												//cout<<"here1"<<endl;
												func_call.insert(func_call.begin(),(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn));	
												//expnode=NULL;
											}
											((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
										}
    break;

  case 332:
/* Line 868 of glr.c  */
#line 1834 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr \n";}
    break;

  case 333:
/* Line 868 of glr.c  */
#line 1835 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr comma_expr_star_seq \n";}
    break;

  case 334:
/* Line 868 of glr.c  */
#line 1836 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr ',' \n";
							
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);
							//cout<<"out here2"<<endl;
						if(call_func){
						//cout<<"here2"<<endl;
								func_call.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn));	
								//expnode=NULL;
						}
						}
    break;

  case 335:
/* Line 868 of glr.c  */
#line 1846 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr comma_expr_star_seq ',' \n";
												
												//cout<<"out here3"<<endl;
												if(call_func){
							//cout<<"here3"<<endl;
								func_call.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn));
								//expnode=NULL;	
						}
												((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn));
											}
    break;

  case 336:
/* Line 868 of glr.c  */
#line 1856 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr ',' \n";}
    break;

  case 337:
/* Line 868 of glr.c  */
#line 1857 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr  comma_expr_star_seq ',' \n";}
    break;

  case 338:
/* Line 868 of glr.c  */
#line 1860 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_test: ',' test \n";}
    break;

  case 339:
/* Line 868 of glr.c  */
#line 1861 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"',' test comma_test \n";}
    break;

  case 340:
/* Line 868 of glr.c  */
#line 1864 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	test \n";}
    break;

  case 341:
/* Line 868 of glr.c  */
#line 1865 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	test comma_test \n";}
    break;

  case 342:
/* Line 868 of glr.c  */
#line 1866 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	 test ','\n";}
    break;

  case 343:
/* Line 868 of glr.c  */
#line 1867 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	 test comma_test ','\n";}
    break;

  case 344:
/* Line 868 of glr.c  */
#line 1870 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_colon_test_seq:  ',' test ':' test \n";}
    break;

  case 345:
/* Line 868 of glr.c  */
#line 1871 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_colon_test_seq: comma_test_colon_test_seq ',' test ':' test\n";}
    break;

  case 346:
/* Line 868 of glr.c  */
#line 1873 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_seq: ',' test \n";}
    break;

  case 347:
/* Line 868 of glr.c  */
#line 1874 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_seq: comma_test_seq ',' test \n";}
    break;

  case 348:
/* Line 868 of glr.c  */
#line 1877 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comp_for \n";}
    break;

  case 349:
/* Line 868 of glr.c  */
#line 1878 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test \n";}
    break;

  case 350:
/* Line 868 of glr.c  */
#line 1879 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test ',' \n";}
    break;

  case 351:
/* Line 868 of glr.c  */
#line 1880 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comma_test_colon_test_seq \n";}
    break;

  case 352:
/* Line 868 of glr.c  */
#line 1881 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comma_test_colon_test_seq ','\n";}
    break;

  case 353:
/* Line 868 of glr.c  */
#line 1882 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test comp_for\n";}
    break;

  case 354:
/* Line 868 of glr.c  */
#line 1883 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test\n";}
    break;

  case 355:
/* Line 868 of glr.c  */
#line 1884 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ','\n";}
    break;

  case 356:
/* Line 868 of glr.c  */
#line 1885 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ','\n";}
    break;

  case 357:
/* Line 868 of glr.c  */
#line 1886 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test comma_test_seq ','\n";}
    break;

  case 358:
/* Line 868 of glr.c  */
#line 1888 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
								Streams::verbose() <<"classdef: classheader ':' suite\n";
								((*yyvalp).type)=p->finishTypeDeclaration(t);
								((*yyvalp).tn)=ast->createClassNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.type),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
							}
    break;

  case 359:
/* Line 868 of glr.c  */
#line 1893 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
								Streams::verbose() <<"classdef: classheader error suite\n";
								((*yyvalp).type)=p->finishTypeDeclaration(t);
								((*yyvalp).tn)=ast->createClassNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.type),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
							}
    break;

  case 360:
/* Line 868 of glr.c  */
#line 1899 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
								Streams::verbose() << "class_h: CLASS NAME \n";
								colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);

								inhertance_list.clear();
					}
    break;

  case 361:
/* Line 868 of glr.c  */
#line 1907 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
									Streams::verbose() << "class_h: access_modef CLASS NAME \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 362:
/* Line 868 of glr.c  */
#line 1914 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
									Streams::verbose() << "class_h: STATIC CLASS NAME \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 363:
/* Line 868 of glr.c  */
#line 1921 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
									Streams::verbose() << "class_h: FINAL CLASS NAME \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 364:
/* Line 868 of glr.c  */
#line 1928 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: STATIC FINAL CLASS NAME \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 365:
/* Line 868 of glr.c  */
#line 1935 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
												Streams::verbose() << "class_h: STATIC FINAL CLASS NAME \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 366:
/* Line 868 of glr.c  */
#line 1942 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: FINAL access_modef CLASS NAME \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 367:
/* Line 868 of glr.c  */
#line 1949 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: STATIC access_modef CLASS NAME \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 368:
/* Line 868 of glr.c  */
#line 1956 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS NAME \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 369:
/* Line 868 of glr.c  */
#line 1963 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS NAME \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 370:
/* Line 868 of glr.c  */
#line 1970 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: access_modef STATIC CLASS NAME \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 371:
/* Line 868 of glr.c  */
#line 1977 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: access_modef FINAL CLASS NAME \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 372:
/* Line 868 of glr.c  */
#line 1984 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS NAME \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 373:
/* Line 868 of glr.c  */
#line 1991 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS NAME \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 374:
/* Line 868 of glr.c  */
#line 1998 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS NAME \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 375:
/* Line 868 of glr.c  */
#line 2005 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS NAME \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 376:
/* Line 868 of glr.c  */
#line 2012 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
										Streams::verbose() << "class_h: CLASS NAME OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
									t=((*yyvalp).type);
									inhertance_list.clear();
									temp_id="";
									acc_mod="";
								}
    break;

  case 377:
/* Line 868 of glr.c  */
#line 2020 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: access_modef CLASS NAME OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 378:
/* Line 868 of glr.c  */
#line 2027 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: STATIC CLASS NAME OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 379:
/* Line 868 of glr.c  */
#line 2034 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: FINAL CLASS NAME OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 380:
/* Line 868 of glr.c  */
#line 2041 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL CLASS NAME OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 381:
/* Line 868 of glr.c  */
#line 2048 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL CLASS NAME OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 382:
/* Line 868 of glr.c  */
#line 2055 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC access_modef CLASS NAME OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.colNum)+1)); 
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 383:
/* Line 868 of glr.c  */
#line 2062 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: FINAL access_modef CLASS NAME OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 384:
/* Line 868 of glr.c  */
#line 2069 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS NAME OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 385:
/* Line 868 of glr.c  */
#line 2076 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS NAME OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 386:
/* Line 868 of glr.c  */
#line 2083 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC CLASS NAME OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.colNum)+1)); 
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 387:
/* Line 868 of glr.c  */
#line 2090 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef FINAL CLASS NAME OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 388:
/* Line 868 of glr.c  */
#line 2097 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS NAME OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 389:
/* Line 868 of glr.c  */
#line 2104 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS NAME OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 390:
/* Line 868 of glr.c  */
#line 2111 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS NAME OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 391:
/* Line 868 of glr.c  */
#line 2118 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS NAME OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 392:
/* Line 868 of glr.c  */
#line 2125 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
														Streams::verbose() << "class_h: CLASS NAME OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
												((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
												acc_mod="";
											}
    break;

  case 393:
/* Line 868 of glr.c  */
#line 2132 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
																Streams::verbose() << "class_h: access_modef CLASS NAME OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 394:
/* Line 868 of glr.c  */
#line 2139 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: STATIC CLASS NAME OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 395:
/* Line 868 of glr.c  */
#line 2146 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: FINAL CLASS NAME OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 396:
/* Line 868 of glr.c  */
#line 2153 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
																	Streams::verbose() << "class_h: STATIC FINAL CLASS NAME OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 397:
/* Line 868 of glr.c  */
#line 2160 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
																	Streams::verbose() << "class_h: STATIC FINAL CLASS NAME OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 398:
/* Line 868 of glr.c  */
#line 2167 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
																		Streams::verbose() << "class_h: STATIC access_modef CLASS NAME OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 399:
/* Line 868 of glr.c  */
#line 2174 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
																	Streams::verbose() << "class_h: FINAL access_modef CLASS NAME OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 400:
/* Line 868 of glr.c  */
#line 2181 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS NAME OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 401:
/* Line 868 of glr.c  */
#line 2188 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS NAME OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 402:
/* Line 868 of glr.c  */
#line 2195 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS NAME '(' arglist ')' ':' \n";}
    break;

  case 403:
/* Line 868 of glr.c  */
#line 2196 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS NAME '(' arglist ')' ':' \n";}
    break;

  case 404:
/* Line 868 of glr.c  */
#line 2197 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS NAME OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 405:
/* Line 868 of glr.c  */
#line 2204 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS NAME OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 406:
/* Line 868 of glr.c  */
#line 2211 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS NAME OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 407:
/* Line 868 of glr.c  */
#line 2218 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS NAME OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 408:
/* Line 868 of glr.c  */
#line 2228 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"arg_comma_seq : argument ','\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 409:
/* Line 868 of glr.c  */
#line 2229 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"arg_comma_seq : arg_comma_seq argument ',' \n";
													//$<tn>$=ast->addNext($<tn>1,$<tn>2);
											}
    break;

  case 410:
/* Line 868 of glr.c  */
#line 2234 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_arg_seq:	',' argument\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 411:
/* Line 868 of glr.c  */
#line 2235 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_arg_seq:	comma_arg_seq ',' argument\n";
													((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn));
												}
    break;

  case 412:
/* Line 868 of glr.c  */
#line 2242 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"arglist: argument\n";
					((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
					}
    break;

  case 413:
/* Line 868 of glr.c  */
#line 2245 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"arglist: default_arg\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 414:
/* Line 868 of glr.c  */
#line 2247 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"arglist: argument ','\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 415:
/* Line 868 of glr.c  */
#line 2249 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {    
						std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal));
							std::string erro("*" + tempstr);
							char *cstr = new char[erro.length() + 1];
							strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
								amer_par.push_back(my_node);
						
						Streams::verbose() <<"arglist: '*' test\n";
				   }
    break;

  case 416:
/* Line 868 of glr.c  */
#line 2259 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
		 std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.strVal));
							std::string erro("*" + tempstr);
							char *cstr = new char[erro.length() + 1];
							strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
								amer_par.push_back(my_node);

										std::string tempstr1((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.strVal));
										std::string erro1("**" + tempstr1);
										char *cstr1 = new char[erro1.length() + 1];
										strcpy(cstr1, erro1.c_str()); parameters.push_back(cstr1);
										amer_par.push_back(my_node);
										Streams::verbose() <<"arglist: '*' test ',' STAR_2 test\n";
									}
    break;

  case 417:
/* Line 868 of glr.c  */
#line 2274 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
		 								std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.strVal));
							std::string erro("*" + tempstr);
							char *cstr = new char[erro.length() + 1];
							strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
								amer_par.push_back(my_node);
										
										Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";
								 }
    break;

  case 418:
/* Line 868 of glr.c  */
#line 2284 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
											
											std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.strVal));
							std::string erro("*" + tempstr);
							char *cstr = new char[erro.length() + 1];
							strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
								amer_par.push_back(my_node);
											Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";
										 }
    break;

  case 419:
/* Line 868 of glr.c  */
#line 2294 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
		 													std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.strVal));
							std::string erro("*" + tempstr);
							char *cstr = new char[erro.length() + 1];
							strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
								amer_par.push_back(my_node);
															Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";
													   }
    break;

  case 420:
/* Line 868 of glr.c  */
#line 2303 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {

										std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.strVal));
							std::string erro("*" + tempstr);
							char *cstr = new char[erro.length() + 1];
							strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
								amer_par.push_back(my_node);

										std::string tempstr1((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.strVal));
										std::string erro1("**" + tempstr1);
										char *cstr1 = new char[erro1.length() + 1];
													strcpy(cstr1, erro1.c_str()); parameters.push_back(cstr1);
														amer_par.push_back(my_node);
														Streams::verbose() <<"arglist: '*' test comma_arg_seq ',' STAR_2 test\n";
												  }
    break;

  case 421:
/* Line 868 of glr.c  */
#line 2319 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
						std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("**" + tempstr);
										char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
							amer_par.push_back(my_node);
							Streams::verbose() <<"arglist: STAR_2 test\n";
					  }
    break;

  case 422:
/* Line 868 of glr.c  */
#line 2328 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq argument\n";
												//$<tn>$=ast->addNext($<tn>1,$<tn>2);
								}
    break;

  case 423:
/* Line 868 of glr.c  */
#line 2331 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq default_arg\n";}
    break;

  case 424:
/* Line 868 of glr.c  */
#line 2332 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq default_arg_comma_seq default_arg\n";}
    break;

  case 425:
/* Line 868 of glr.c  */
#line 2333 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq argument ','\n";}
    break;

  case 426:
/* Line 868 of glr.c  */
#line 2335 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {		
									std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal));
							std::string erro("*" + tempstr);
							char *cstr = new char[erro.length() + 1];
							strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
								amer_par.push_back(my_node);
									Streams::verbose() <<"arglist: arg_comma_seq '*' test\n";
								  }
    break;

  case 427:
/* Line 868 of glr.c  */
#line 2344 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {

		 std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.r.strVal));
							std::string erro("*" + tempstr);
							char *cstr = new char[erro.length() + 1];
							strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
								amer_par.push_back(my_node);

										std::string tempstr1((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (6))].yystate.yysemantics.yysval.r.strVal));
										std::string erro1("**" + tempstr1);
										char *cstr1 = new char[erro1.length() + 1];
										strcpy(cstr1, erro1.c_str()); parameters.push_back(cstr1);
											amer_par.push_back(my_node);
													Streams::verbose() <<"arglist: arg_comma_seq '*' test ',' STAR_2 test\n";
												 
												 }
    break;

  case 428:
/* Line 868 of glr.c  */
#line 2361 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
												
												std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.r.strVal));
							std::string erro("*" + tempstr);
							char *cstr = new char[erro.length() + 1];
							strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
								amer_par.push_back(my_node);
												Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq\n";
											   }
    break;

  case 429:
/* Line 868 of glr.c  */
#line 2371 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
														std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.r.strVal));
							std::string erro("*" + tempstr);
							char *cstr = new char[erro.length() + 1];
							strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
								amer_par.push_back(my_node);
														Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_default_arg_seq\n";
													   }
    break;

  case 430:
/* Line 868 of glr.c  */
#line 2380 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
																		std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.r.strVal));
							std::string erro("*" + tempstr);
							char *cstr = new char[erro.length() + 1];
							strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
								amer_par.push_back(my_node);
																		Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq comma_default_arg_seq\n";
																	 }
    break;

  case 431:
/* Line 868 of glr.c  */
#line 2389 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
										
										std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.r.strVal));
							std::string erro("*" + tempstr);
							char *cstr = new char[erro.length() + 1];
							strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
								amer_par.push_back(my_node);

										std::string tempstr1((((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (7))].yystate.yysemantics.yysval.r.strVal));
										std::string erro1("**" + tempstr1);
										char *cstr1 = new char[erro1.length() + 1];
										strcpy(cstr1, erro1.c_str()); parameters.push_back(cstr1);
											amer_par.push_back(my_node);
																Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq ',' STAR_2 test\n";
        
									   }
    break;

  case 432:
/* Line 868 of glr.c  */
#line 2406 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {	std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("**" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
											amer_par.push_back(my_node);
										Streams::verbose() <<"arglist: arg_comma_seq STAR_2 test\n";
								    }
    break;

  case 433:
/* Line 868 of glr.c  */
#line 2413 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"arglist: default_arg_comma_seq default_arg\n";}
    break;

  case 434:
/* Line 868 of glr.c  */
#line 2426 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_default_arg_seq: ',' default_arg\n";}
    break;

  case 435:
/* Line 868 of glr.c  */
#line 2427 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_default_arg_seq: comma_default_arg_seq ',' default_arg\n";}
    break;

  case 436:
/* Line 868 of glr.c  */
#line 2430 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"default_arg_comma_seq: default_arg ','\n";}
    break;

  case 437:
/* Line 868 of glr.c  */
#line 2431 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"default_arg_comma_seq: default_arg_comma_seq default_arg ','\n";}
    break;

  case 438:
/* Line 868 of glr.c  */
#line 2433 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
					Streams::verbose() <<"in_default: '='\n";
					//in_def=true;
					((*yyvalp).tn) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);
				}
    break;

  case 439:
/* Line 868 of glr.c  */
#line 2438 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {parameters.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.r.strVal));Streams::verbose() <<"default_arg: test in_default test\n";
							Node* o=ast->createAssignNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
							((*yyvalp).tn)=ast->addNext(my_node,o);
							amer_par.push_back(((*yyvalp).tn));
							df_par.push_back(((*yyvalp).tn));
							in_def=false;
							}
    break;

  case 440:
/* Line 868 of glr.c  */
#line 2446 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {parameters.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal)); Streams::verbose() <<"argument: 	test\n";
					((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn); 
					if(strcmp((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal),"self")!=0)
						amer_par.push_back(my_node);
					}
    break;

  case 441:
/* Line 868 of glr.c  */
#line 2451 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {parameters.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.r.strVal));Streams::verbose() <<"argument: 	test comp_for\n";
					((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn); 
			}
    break;

  case 442:
/* Line 868 of glr.c  */
#line 2457 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comp_iter:  comp_for\n";}
    break;

  case 443:
/* Line 868 of glr.c  */
#line 2458 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comp_iter:  comp_if\n";}
    break;

  case 444:
/* Line 868 of glr.c  */
#line 2461 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comp_for: 	FOR exprlist IN or_test\n";}
    break;

  case 445:
/* Line 868 of glr.c  */
#line 2462 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comp_for: FOR exprlist IN or_test comp_iter\n";}
    break;

  case 446:
/* Line 868 of glr.c  */
#line 2465 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comp_if: IF or_test\n";}
    break;

  case 447:
/* Line 868 of glr.c  */
#line 2466 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comp_if: IF or_test comp_iter\n";}
    break;


/* Line 868 of glr.c  */
#line 6354 "yacc.cpp"
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
  (!!((Yystate) == (-558)))

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
  (!!((Yytable_value) == (-426)))

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
#line 2469 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"

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
	Parser* pp = new Parser();
	pp->parse();
MIPS_ASM::add_data("\nblock_head:    .byte   0:8\n");
			MIPS_ASM::add_data("\nglob_tmp:    .byte   0:4\n");
	MIPS_ASM::add_data("\nalign_to:  .word 4\n");
		//symbolTable->generateStatics();
		//symbolTable->generateCode();
	ofs<<".data\n";
	MIPS_ASM::add_data("\nnewline: .asciiz \"\\n\"\n");
	MIPS_ASM::add_data("\nendarray: .asciiz \"\\p\"\n");
	
	MIPS_ASM::writeData();
		ofs<<"\n.text\n";

	ofs<<".globl main\n";
		ofs<<"main:\n";
	
	
	MIPS_ASM::writeCode();
	//MIPS_ASM::writeMain();
	std::ifstream t_common("common.asm");
std::string str_common((std::istreambuf_iterator<char>(t_common)),
                 std::istreambuf_iterator<char>());
	ofs<<str_common<<"\n";
/*
	Iskernal=1;
	symbolTable->generateKernalCode();
*/
		//ofs<<"li $v0,10 \n syscall \n";
		ofs<<".ktext 0x80000180\n";

 t_common =	std::ifstream("exception.asm");
 str_common=string((std::istreambuf_iterator<char>(t_common)),
                 std::istreambuf_iterator<char>());
	ofs<<str_common<<"\n";
	MIPS_ASM::writeCode();

	MIPS_ASM::add_data("msg:   .asciiz \"Trap generated \\n\"\n");
	MIPS_ASM::add_data("ure_msg:   .asciiz \"unhandled runtime error \\n\"\n");
	ofs<<".kdata\n";
	MIPS_ASM::writeData();
	Program::printErrors();
	//err->printErrQueue();
	system("pause");

}
#endif;