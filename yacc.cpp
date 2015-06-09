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
#line 4 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"

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
	FlowStmtNode* flowStmt = NULL;
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
#line 165 "yacc.cpp"

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
#line 194 "yacc.cpp"

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
#define YYLAST   1432

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  113
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  115
/* YYNRULES -- Number of rules.  */
#define YYNRULES  446
/* YYNRULES -- Number of states.  */
#define YYNSTATES  739
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
     646,   648,   652,   656,   660,   664,   671,   678,   685,   690,
     695,   698,   701,   705,   712,   718,   723,   726,   729,   733,
     737,   742,   747,   750,   754,   759,   765,   767,   771,   773,
     776,   781,   783,   786,   789,   792,   794,   796,   798,   804,
     807,   811,   813,   816,   819,   823,   825,   828,   831,   833,
     836,   840,   842,   845,   847,   849,   851,   853,   855,   857,
     859,   861,   864,   866,   869,   872,   875,   879,   881,   884,
     887,   891,   893,   896,   899,   903,   905,   908,   911,   914,
     918,   922,   924,   927,   930,   933,   937,   941,   943,   946,
     949,   952,   955,   958,   962,   966,   970,   974,   976,   979,
     982,   985,   988,   990,   992,   995,   997,  1000,  1005,  1009,
    1011,  1014,  1017,  1021,  1024,  1027,  1031,  1035,  1037,  1041,
    1046,  1051,  1053,  1055,  1057,  1059,  1061,  1063,  1065,  1067,
    1069,  1072,  1075,  1079,  1083,  1086,  1088,  1091,  1094,  1098,
    1101,  1103,  1106,  1109,  1113,  1116,  1121,  1127,  1133,  1136,
    1140,  1142,  1145,  1148,  1152,  1154,  1156,  1159,  1163,  1167,
    1172,  1175,  1178,  1182,  1184,  1187,  1190,  1193,  1197,  1201,
    1203,  1206,  1208,  1211,  1214,  1218,  1221,  1225,  1228,  1232,
    1234,  1237,  1240,  1244,  1249,  1255,  1258,  1262,  1267,  1271,
    1276,  1281,  1287,  1290,  1292,  1295,  1298,  1302,  1306,  1310,
    1313,  1317,  1321,  1325,  1330,  1335,  1340,  1345,  1351,  1357,
    1362,  1367,  1373,  1379,  1385,  1391,  1396,  1402,  1408,  1414,
    1421,  1428,  1435,  1442,  1450,  1458,  1465,  1472,  1480,  1488,
    1496,  1504,  1510,  1517,  1524,  1531,  1539,  1547,  1555,  1563,
    1572,  1581,  1589,  1597,  1606,  1615,  1624,  1633,  1636,  1640,
    1643,  1647,  1649,  1651,  1654,  1657,  1663,  1667,  1671,  1676,
    1683,  1686,  1689,  1692,  1696,  1700,  1704,  1711,  1716,  1721,
    1727,  1735,  1739,  1742,  1745,  1749,  1752,  1756,  1759,  1762,
    1764,  1767,  1769,  1771,  1776,  1782,  1785
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
     102,    -1,   160,   174,     1,    -1,   163,   102,   173,    -1,
     163,     1,   173,    -1,   163,   102,   173,    16,   102,   173,
      -1,   163,     1,   173,    16,   102,   173,    -1,   163,   102,
     173,    16,     1,   173,    -1,    20,   209,    21,   211,    -1,
      20,   209,     1,   211,    -1,    22,   102,    -1,    22,     1,
      -1,   164,   173,   167,    -1,   164,   173,   167,    16,   102,
     173,    -1,   164,   173,   167,   166,   173,    -1,   164,   173,
     166,   173,    -1,    23,   102,    -1,    23,     1,    -1,   171,
     102,   173,    -1,   171,     1,   173,    -1,   167,   171,   102,
     173,    -1,   167,   171,     1,   173,    -1,    91,   170,    -1,
     168,    91,   170,    -1,    46,   170,   102,   173,    -1,    46,
     170,   168,   102,   173,    -1,   174,    -1,   174,    47,   185,
      -1,    72,    -1,    72,   174,    -1,    72,   174,    47,    44,
      -1,   121,    -1,   172,   121,    -1,   172,     6,    -1,   172,
       1,    -1,     6,    -1,     1,    -1,   176,    -1,   176,    17,
     176,    16,   174,    -1,     8,   178,    -1,   175,     8,   178,
      -1,   178,    -1,   178,   175,    -1,     9,   179,    -1,   177,
       9,   179,    -1,   179,    -1,   179,   177,    -1,    10,   179,
      -1,   181,    -1,   182,   185,    -1,   180,   182,   185,    -1,
     185,    -1,   185,   180,    -1,    94,    -1,    95,    -1,    49,
      -1,    71,    -1,    70,    -1,    37,    -1,    11,    -1,    21,
      -1,    10,    21,    -1,    68,    -1,    68,    10,    -1,    98,
     185,    -1,   106,   187,    -1,   184,   106,   187,    -1,   187,
      -1,   187,   184,    -1,   107,   189,    -1,   186,   107,   189,
      -1,   189,    -1,   189,   186,    -1,   108,   191,    -1,   188,
     108,   191,    -1,   191,    -1,   191,   188,    -1,    59,   193,
      -1,    65,   193,    -1,   190,    59,   193,    -1,   190,    65,
     193,    -1,   193,    -1,   193,   190,    -1,    96,   195,    -1,
      97,   195,    -1,   192,    96,   195,    -1,   192,    97,   195,
      -1,   195,    -1,   195,   192,    -1,    98,   196,    -1,    99,
     196,    -1,   100,   196,    -1,    69,   196,    -1,   194,    98,
     196,    -1,   194,    99,   196,    -1,   194,   100,   196,    -1,
     194,    69,   196,    -1,   196,    -1,   196,   194,    -1,    96,
     196,    -1,    97,   196,    -1,   109,   196,    -1,   198,    -1,
     203,    -1,   197,   203,    -1,   200,    -1,   200,   197,    -1,
     200,   197,    40,   196,    -1,   200,    40,   196,    -1,    66,
      -1,   199,    66,    -1,    92,   103,    -1,    92,   202,   103,
      -1,    93,   110,    -1,   111,   112,    -1,    93,   202,   110,
      -1,   111,   214,   112,    -1,    44,    -1,    44,    92,   103,
      -1,    44,    92,   209,   103,    -1,    44,    93,   205,   110,
      -1,    41,    -1,    43,    -1,    42,    -1,    74,    -1,   199,
      -1,    45,    -1,    67,    -1,    39,    -1,    38,    -1,    91,
     174,    -1,    91,   183,    -1,   201,    91,   174,    -1,   201,
      91,   183,    -1,   174,   226,    -1,   174,    -1,   174,   201,
      -1,   174,    91,    -1,   174,   201,    91,    -1,   183,   226,
      -1,   183,    -1,   183,   201,    -1,   183,    91,    -1,   183,
     201,    91,    -1,   105,    44,    -1,   105,    44,    92,   103,
      -1,   105,    44,   119,   209,   103,    -1,   105,    44,    93,
     205,   110,    -1,    91,   206,    -1,   204,    91,   206,    -1,
     206,    -1,   206,   204,    -1,   206,    91,    -1,   206,   204,
      91,    -1,   174,    -1,   102,    -1,   174,   102,    -1,   174,
     102,   174,    -1,   174,   102,   207,    -1,   174,   102,   174,
     207,    -1,   102,   174,    -1,   102,   207,    -1,   102,   174,
     207,    -1,   102,    -1,   102,   174,    -1,    91,   185,    -1,
      91,   183,    -1,   208,    91,   185,    -1,   208,    91,   183,
      -1,   185,    -1,   185,   208,    -1,   183,    -1,   183,   208,
      -1,   185,    91,    -1,   185,   208,    91,    -1,   183,    91,
      -1,   183,   208,    91,    -1,    91,   174,    -1,    91,   174,
     210,    -1,   174,    -1,   174,   210,    -1,   174,    91,    -1,
     174,   210,    91,    -1,    91,   174,   102,   174,    -1,   212,
      91,   174,   102,   174,    -1,    91,   174,    -1,   213,    91,
     174,    -1,   174,   102,   174,   226,    -1,   174,   102,   174,
      -1,   174,   102,   174,    91,    -1,   174,   102,   174,   212,
      -1,   174,   102,   174,   212,    91,    -1,   174,   226,    -1,
     174,    -1,   174,    91,    -1,   174,   213,    -1,   174,   213,
      91,    -1,   216,   102,   173,    -1,   216,     1,   173,    -1,
       5,    44,    -1,   132,     5,    44,    -1,    13,     5,    44,
      -1,    12,     5,    44,    -1,    13,    12,     5,    44,    -1,
      12,    13,     5,    44,    -1,    12,   132,     5,    44,    -1,
      13,   132,     5,    44,    -1,    13,    12,   132,     5,    44,
      -1,    12,    13,   132,     5,    44,    -1,   132,    13,     5,
      44,    -1,   132,    12,     5,    44,    -1,   132,    13,    12,
       5,    44,    -1,   132,    12,    13,     5,    44,    -1,    13,
     132,    12,     5,    44,    -1,    12,   132,    13,     5,    44,
      -1,     5,    44,    92,   103,    -1,   132,     5,    44,    92,
     103,    -1,    13,     5,    44,    92,   103,    -1,    12,     5,
      44,    92,   103,    -1,    13,    12,     5,    44,    92,   103,
      -1,    12,    13,     5,    44,    92,   103,    -1,    13,   132,
       5,    44,    92,   103,    -1,    12,   132,     5,    44,    92,
     103,    -1,    13,    12,   132,     5,    44,    92,   103,    -1,
      12,    13,   132,     5,    44,    92,   103,    -1,   132,    13,
       5,    44,    92,   103,    -1,   132,    12,     5,    44,    92,
     103,    -1,   132,    13,    12,     5,    44,    92,   103,    -1,
     132,    12,    13,     5,    44,    92,   103,    -1,    13,   132,
      12,     5,    44,    92,   103,    -1,    12,   132,    13,     5,
      44,    92,   103,    -1,     5,    44,    92,   143,   103,    -1,
     132,     5,    44,    92,   143,   103,    -1,    13,     5,    44,
      92,   143,   103,    -1,    12,     5,    44,    92,   143,   103,
      -1,    13,    12,     5,    44,    92,   143,   103,    -1,    12,
      13,     5,    44,    92,   143,   103,    -1,    13,   132,     5,
      44,    92,   143,   103,    -1,    12,   132,     5,    44,    92,
     143,   103,    -1,    13,    12,   132,     5,    44,    92,   143,
     103,    -1,    12,    13,   132,     5,    44,    92,   143,   103,
      -1,   132,    13,     5,    44,    92,   143,   103,    -1,   132,
      12,     5,    44,    92,   143,   103,    -1,   132,    13,    12,
       5,    44,    92,   143,   103,    -1,   132,    12,    13,     5,
      44,    92,   143,   103,    -1,    13,   132,    12,     5,    44,
      92,   143,   103,    -1,    12,   132,    13,     5,    44,    92,
     143,   103,    -1,   224,    91,    -1,   217,   224,    91,    -1,
      91,   224,    -1,   218,    91,   224,    -1,   224,    -1,   223,
      -1,   224,    91,    -1,    98,   174,    -1,    98,   174,    91,
      40,   174,    -1,    98,   174,   218,    -1,    98,   174,   220,
      -1,    98,   174,   218,   220,    -1,    98,   174,   218,    91,
      40,   174,    -1,    40,   174,    -1,   217,   224,    -1,   217,
     223,    -1,   217,   221,   223,    -1,   217,   224,    91,    -1,
     217,    98,   174,    -1,   217,    98,   174,    91,    40,   174,
      -1,   217,    98,   174,   218,    -1,   217,    98,   174,   220,
      -1,   217,    98,   174,   218,   220,    -1,   217,    98,   174,
     218,    91,    40,   174,    -1,   217,    40,   174,    -1,   221,
     223,    -1,    91,   223,    -1,   220,    91,   223,    -1,   223,
      91,    -1,   221,   223,    91,    -1,   174,   104,    -1,   222,
     174,    -1,   174,    -1,   174,   226,    -1,   226,    -1,   227,
      -1,    20,   209,    21,   176,    -1,    20,   209,    21,   176,
     225,    -1,    17,   176,    -1,    17,   176,   225,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   158,   158,   179,   180,   181,   185,   190,   207,   219,
     220,   221,   232,   242,   243,   244,   253,   262,   263,   264,
     273,   282,   291,   292,   300,   309,   310,   311,   320,   328,
     329,   330,   339,   348,   349,   350,   359,   367,   368,   369,
     377,   387,   393,   394,   397,   400,   404,   408,   413,   417,
     421,   425,   431,   435,   439,   440,   447,   461,   467,   470,
     473,   477,   478,   479,   484,   507,   540,   541,   542,   547,
     548,   549,   550,   551,   555,   556,   559,   560,   563,   564,
     566,   567,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   580,   581,   582,   584,   588,   594,   600,   604,
     608,   614,   620,   626,   630,   637,   640,   678,   683,   688,
     693,   702,   708,   711,   740,   745,   749,   755,   761,   771,
     778,   787,   788,   791,   795,   803,   812,   816,   817,   821,
     826,   834,   843,   851,   859,   867,   875,   883,   891,   899,
     907,   915,   923,   931,   939,   947,   956,   961,   969,   973,
     980,   986,   991,   996,  1002,  1011,  1014,  1019,  1025,  1030,
    1037,  1040,  1046,  1053,  1062,  1069,  1076,  1083,  1091,  1096,
    1102,  1105,  1109,  1114,  1123,  1132,  1139,  1147,  1156,  1165,
    1174,  1187,  1202,  1203,  1206,  1207,  1210,  1211,  1214,  1220,
    1228,  1236,  1239,  1252,  1256,  1260,  1261,  1264,  1265,  1269,
    1270,  1275,  1276,  1281,  1282,  1287,  1288,  1293,  1296,  1299,
    1304,  1310,  1314,  1321,  1325,  1326,  1331,  1332,  1333,  1334,
    1335,  1336,  1337,  1338,  1341,  1344,  1345,  1347,  1351,  1354,
    1355,  1358,  1359,  1362,  1363,  1366,  1367,  1370,  1371,  1372,
    1373,  1376,  1380,  1383,  1390,  1401,  1407,  1415,  1419,  1429,
    1434,  1439,  1444,  1445,  1450,  1455,  1459,  1462,  1463,  1469,
    1473,  1480,  1481,  1557,  1561,  1567,  1571,  1582,  1583,  1586,
    1587,  1590,  1591,  1592,  1599,  1600,  1607,  1608,  1634,  1641,
    1647,  1658,  1666,  1671,  1676,  1677,  1686,  1687,  1688,  1695,
    1704,  1708,  1709,  1712,  1715,  1716,  1719,  1723,  1724,  1727,
    1728,  1729,  1730,  1731,  1734,  1747,  1766,  1786,  1795,  1796,
    1799,  1800,  1803,  1804,  1809,  1810,  1811,  1814,  1817,  1818,
    1819,  1822,  1823,  1826,  1827,  1830,  1837,  1838,  1847,  1850,
    1858,  1869,  1870,  1871,  1881,  1891,  1892,  1895,  1896,  1899,
    1900,  1901,  1902,  1905,  1906,  1908,  1909,  1912,  1913,  1914,
    1915,  1916,  1917,  1918,  1919,  1920,  1921,  1923,  1928,  1934,
    1942,  1949,  1956,  1963,  1970,  1977,  1984,  1991,  1998,  2005,
    2012,  2019,  2026,  2033,  2040,  2047,  2055,  2062,  2069,  2076,
    2083,  2090,  2097,  2104,  2111,  2118,  2125,  2132,  2139,  2146,
    2153,  2160,  2167,  2174,  2181,  2188,  2195,  2202,  2209,  2216,
    2223,  2230,  2231,  2232,  2239,  2246,  2253,  2263,  2264,  2269,
    2270,  2277,  2280,  2282,  2284,  2294,  2309,  2319,  2329,  2338,
    2354,  2363,  2366,  2367,  2368,  2370,  2379,  2396,  2406,  2415,
    2424,  2441,  2448,  2452,  2453,  2456,  2457,  2459,  2465,  2473,
    2478,  2484,  2485,  2488,  2489,  2492,  2493
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
     160,   161,   161,   162,   162,   162,   162,   162,   163,   163,
     164,   164,   165,   165,   165,   165,   166,   166,   167,   167,
     167,   167,   168,   168,   169,   169,   170,   170,   171,   171,
     171,   172,   172,   173,   173,   173,   173,   174,   174,   175,
     175,   176,   176,   177,   177,   178,   178,   179,   179,   180,
     180,   181,   181,   182,   182,   182,   182,   182,   182,   182,
     182,   182,   182,   182,   183,   184,   184,   185,   185,   186,
     186,   187,   187,   188,   188,   189,   189,   190,   190,   190,
     190,   191,   191,   192,   192,   192,   192,   193,   193,   194,
     194,   194,   194,   194,   194,   194,   194,   195,   195,   196,
     196,   196,   196,   197,   197,   198,   198,   198,   198,   199,
     199,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     201,   201,   201,   201,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   203,   203,   203,   203,   204,   204,
     205,   205,   205,   205,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   207,   207,   208,   208,   208,   208,   209,
     209,   209,   209,   209,   209,   209,   209,   210,   210,   211,
     211,   211,   211,   212,   212,   213,   213,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   215,   215,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   217,   217,   218,
     218,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   220,   220,   221,   221,   222,   223,   224,
     224,   225,   225,   226,   226,   227,   227
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
       1,     3,     3,     3,     3,     6,     6,     6,     4,     4,
       2,     2,     3,     6,     5,     4,     2,     2,     3,     3,
       4,     4,     2,     3,     4,     5,     1,     3,     1,     2,
       4,     1,     2,     2,     2,     1,     1,     1,     5,     2,
       3,     1,     2,     2,     3,     1,     2,     2,     1,     2,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     2,     2,     3,     1,     2,     2,
       3,     1,     2,     2,     3,     1,     2,     2,     2,     3,
       3,     1,     2,     2,     2,     3,     3,     1,     2,     2,
       2,     2,     2,     3,     3,     3,     3,     1,     2,     2,
       2,     2,     1,     1,     2,     1,     2,     4,     3,     1,
       2,     2,     3,     2,     2,     3,     3,     1,     3,     4,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     3,     3,     2,     1,     2,     2,     3,     2,
       1,     2,     2,     3,     2,     4,     5,     5,     2,     3,
       1,     2,     2,     3,     1,     1,     2,     3,     3,     4,
       2,     2,     3,     1,     2,     2,     2,     3,     3,     1,
       2,     1,     2,     2,     3,     2,     3,     2,     3,     1,
       2,     2,     3,     4,     5,     2,     3,     4,     3,     4,
       4,     5,     2,     1,     2,     2,     3,     3,     3,     2,
       3,     3,     3,     4,     4,     4,     4,     5,     5,     4,
       4,     5,     5,     5,     5,     4,     5,     5,     5,     6,
       6,     6,     6,     7,     7,     6,     6,     7,     7,     7,
       7,     5,     6,     6,     6,     7,     7,     7,     7,     8,
       8,     7,     7,     8,     8,     8,     8,     2,     3,     2,
       3,     1,     1,     2,     2,     5,     3,     3,     4,     6,
       2,     2,     2,     3,     3,     3,     6,     4,     4,     5,
       7,     3,     2,     2,     3,     2,     3,     2,     2,     1,
       2,     1,     1,     4,     5,     2,     3
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
       0,     0,     0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0,     0,     0
};

/* YYDEFACT[S] -- default reduction number in state S.  Performed when
   YYTABLE doesn't specify something else to do.  Zero means the default
   is an error.  */
static const unsigned short int yydefact[] =
{
       0,     0,     0,     0,     0,    92,    93,    94,     0,     2,
       5,     0,     0,   105,     7,     0,   113,   106,   109,   111,
     359,     0,     0,     0,     0,     0,     0,     1,     0,     0,
       0,     0,     0,     6,     0,     0,     0,   114,     0,   110,
       0,     0,   362,     0,     0,     0,     0,   361,     0,     0,
       0,     0,   360,     0,     0,     0,     0,     4,     3,   196,
     195,     0,     0,   155,   160,     0,     0,     0,   289,   288,
     281,   283,   282,   277,   286,     0,     0,   104,     0,     0,
     269,   287,    97,   284,   101,   102,    71,     0,     0,     0,
       0,     0,     0,     0,   128,     0,   191,    44,     0,    48,
      62,    79,    69,    55,    49,    50,    51,    98,    99,   100,
      52,    53,    54,    45,    63,   123,     0,     0,   124,     0,
       0,   125,     0,     0,   126,   127,     0,   358,    73,   197,
     201,   205,   208,     0,   211,   227,   231,   235,   241,   247,
     257,   262,   285,   265,   357,   115,     0,   107,     0,   112,
     375,     0,     0,   364,     0,   365,     0,     0,   363,     0,
     366,     0,     0,   370,     0,   369,     0,   207,     0,     0,
     130,     0,   129,   331,   329,     0,   171,   170,   121,     0,
       0,     0,   186,    96,   339,   103,    95,   119,    76,    77,
     271,   295,   300,     0,   273,     0,   259,   260,   224,   261,
     274,   353,     0,     8,    47,    46,    80,    81,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    82,     0,    65,
       0,    70,    78,    64,     0,   151,     0,   158,     0,     0,
       0,   194,   193,   192,     0,    72,     0,     0,   202,     0,
     206,    75,     0,     0,   219,   220,   218,   215,   222,   217,
     216,   213,   214,   212,     0,     0,   228,     0,   232,     0,
     236,     0,     0,   242,     0,     0,   248,     0,     0,     0,
       0,   258,   270,     0,     0,   266,   263,   116,   108,   391,
     378,     0,     0,   368,     0,   374,   377,     0,     0,   367,
       0,   373,   376,     0,     0,   372,     0,   371,     0,   133,
       0,     0,   132,     0,    41,     0,     0,     0,     0,   131,
     335,   332,   333,   330,     0,     0,     0,   122,   278,     0,
     315,   314,     0,   310,     0,     0,     0,     0,   341,   340,
     120,     0,   297,   296,   294,   302,   301,   299,   272,   275,
     354,     0,   355,   352,   276,     0,    68,    67,    61,   157,
     156,     0,   148,   152,     0,     0,     0,   162,   161,     0,
     164,   163,     0,   188,     0,   172,     0,     0,   199,     0,
     203,     0,    74,   221,   223,     0,   209,   225,     0,   229,
       0,   233,     0,   237,   238,     0,     0,   243,   244,     0,
       0,   252,   249,   250,   251,     0,     0,     0,     0,   268,
     304,     0,   264,   394,   380,     0,     0,   382,     0,     0,
     393,   379,     0,     0,   381,     0,     0,   392,   386,     0,
       0,   385,     0,     0,   135,     0,     0,     0,   137,   134,
       0,     0,     0,   136,    43,     0,     0,   439,     0,     0,
       0,     0,   412,   411,     0,    11,     0,   141,     0,   140,
       0,   326,   325,   336,   334,   169,   168,   117,     0,   279,
     323,   320,   321,   316,   280,   312,   311,   182,   184,     0,
       0,   187,   337,   342,     0,   290,   291,   298,   303,   345,
     348,   356,     0,    66,   150,     0,     0,     0,   146,   153,
       0,     0,     0,   177,   176,   189,   175,     0,     0,     0,
       0,     0,     0,   200,   204,   210,   226,   230,   234,   239,
     240,   245,   246,   256,   253,   254,   255,    41,     0,     0,
     267,   396,   384,     0,   398,   390,     0,   395,   383,     0,
     397,   389,     0,   402,   388,     0,   401,   387,     0,     0,
     139,     0,    16,   145,     0,     0,   138,     0,    15,   144,
       0,   420,   414,   437,   440,     0,     0,     0,   422,   421,
      42,     0,   432,   438,   435,   407,     0,   143,     0,   142,
       0,     0,    12,   328,   327,   118,   324,   322,   317,   318,
     308,   313,   183,   185,   338,     0,   292,   293,   349,   350,
     347,   346,    58,    59,    60,     0,     0,   147,   154,   149,
     159,     0,     0,     0,     0,     0,   174,     0,     0,   179,
     178,   198,   305,     0,     0,   400,   406,   399,   405,   404,
     403,     0,    20,     0,     0,     0,     0,    24,     0,    19,
       0,     0,     0,     0,    23,     0,   416,   417,   431,   425,
     423,   408,   436,     9,     0,     0,    32,     0,     0,    31,
       0,   319,   309,   443,     0,   351,    57,     0,   166,   167,
     165,   190,   173,   181,   180,   307,   306,     0,     0,    28,
      14,     0,    40,     0,     0,     0,    27,    13,     0,    39,
       0,     0,   433,   409,     0,   418,     0,     0,   427,   428,
       0,    36,     0,     0,    35,     0,    10,     0,   444,   441,
     442,     0,     0,     0,    18,     0,     0,    21,    17,     0,
       0,    22,   415,     0,   410,   434,     0,     0,   429,     0,
      30,     0,    29,   445,   343,     0,    56,    26,    38,    25,
      37,   419,   426,     0,    34,    33,   446,   344,   430
};

/* YYPDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,     8,     9,    10,    94,    95,   305,   306,    96,    97,
      98,   346,   595,    99,   219,   100,   101,   102,   220,    11,
     103,   104,   105,   106,   107,   108,   109,   110,    13,    39,
      17,    18,    19,    37,   317,   111,   112,   113,   114,   353,
     354,   355,   356,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   364,   365,   326,   125,   181,   366,   126,
     127,   128,   238,   129,   240,   130,   131,   253,   132,   254,
     133,   256,   134,   258,   135,   260,   136,   263,   137,   266,
     138,   271,   139,   140,   275,   141,   142,   143,   333,   193,
     276,   466,   322,   323,   462,   311,   175,   329,   185,   589,
     342,   202,    14,    15,   438,   636,   439,   637,   440,   441,
     682,   683,   698,   699,   700
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -445
static const short int yypact[] =
{
     246,    34,    62,   446,   294,  -445,  -445,  -445,   102,  -445,
    -445,   368,    41,  -445,   280,    22,     5,  -445,   113,    81,
     118,   191,   359,   395,   198,   464,    75,  -445,   202,   406,
     214,   280,   280,  -445,   629,   629,   232,   111,    34,   213,
     245,    12,   206,   285,   313,   292,   348,   297,   363,   433,
     400,   434,   356,   401,   447,   410,   450,  -445,  -445,  -445,
    -445,  1207,   379,  -445,  -445,  1283,    24,   414,  -445,  -445,
    -445,  -445,  -445,   139,  -445,  1207,  1283,  1207,  1283,   417,
    -445,  -445,  -445,  -445,  -445,  -445,   941,   747,   827,  1321,
    1321,  1321,  1321,   490,  -445,   629,  -445,  -445,    63,  -445,
     457,  -445,   374,  -445,  -445,  -445,  -445,  -445,  -445,  -445,
    -445,  -445,  -445,  -445,   366,  -445,  1207,   629,  -445,  1207,
     629,  -445,    37,   629,  -445,  -445,   727,  -445,   380,   459,
     469,   470,  -445,   403,   207,   389,   394,   396,    14,   274,
     330,  -445,   437,    13,  -445,  -445,   461,  -445,    34,  -445,
    -445,   408,    19,   422,   472,   425,   474,    32,   430,   479,
     438,   492,   124,   445,   494,   449,   498,  -445,   370,   412,
     451,   334,  -445,   454,   456,    67,  -445,  -445,   468,  1245,
     979,   -25,   501,  -445,   471,  -445,  -445,   468,  -445,  -445,
    -445,    40,   172,   460,  -445,   440,  -445,  -445,  -445,  -445,
    -445,    76,   453,  -445,  -445,  -445,  -445,  -445,  -445,  -445,
    -445,  -445,  -445,  -445,  -445,  -445,  -445,  -445,   788,  -445,
    1207,   941,  -445,  -445,    39,   317,    42,   553,   629,   629,
      47,  -445,  -445,  -445,   941,   380,  1207,  1207,   563,  1207,
     565,   941,   481,   554,  -445,  -445,  -445,  -445,   566,  -445,
    -445,  -445,  -445,   207,  1321,  1321,   473,  1321,   477,  1321,
     480,  1321,  1321,    16,  1321,  1321,   308,  1321,  1321,  1321,
    1321,   399,  -445,  1321,   533,    15,  -445,  -445,  -445,  -445,
    -445,   475,   161,   489,   165,   493,  -445,   486,   167,   499,
     171,   500,  -445,   487,   177,   502,   178,   503,   458,   451,
     354,   505,   451,   332,   495,   865,    25,   382,   381,   451,
    1283,   506,  1283,   513,  1207,  1207,   561,   516,  -445,   507,
    1017,   511,   504,   517,  1207,   629,   -19,  1321,  1207,   525,
     516,  1283,   941,   526,  -445,   941,   528,  -445,  -445,  -445,
    1207,  1207,   529,  -445,  -445,   530,  -445,   366,  -445,  -445,
    -445,   519,  -445,   317,  1207,   629,   629,  -445,  -445,   521,
     608,   609,    56,  1207,   629,    51,    58,   611,  -445,  1207,
    -445,  1207,   941,  -445,  -445,  1321,  -445,  -445,  1321,  -445,
    1321,  -445,  1321,  -445,  -445,  1321,  1321,  -445,  -445,  1321,
    1321,  -445,  -445,  -445,  -445,  1321,  1321,  1321,  1321,  -445,
     342,  1321,  -445,  -445,  -445,   531,   181,  -445,   534,   192,
    -445,  -445,   537,   193,  -445,   540,   197,  -445,  -445,   542,
     211,  -445,   544,   218,   451,   164,    28,   243,   451,   451,
     281,    71,   318,   451,  -445,  1207,  1207,    66,   903,   549,
    1207,  1207,   538,   541,  1207,  -445,   353,   451,   372,   451,
      73,  -445,  -445,  1283,  1283,  -445,  -445,  -445,   584,  -445,
    1207,   551,  -445,  1017,  -445,   979,   545,  -445,  -445,  1207,
     629,  -445,   569,  -445,   610,  -445,  -445,   941,   941,  -445,
     182,  1207,   158,  -445,  -445,   629,   629,   562,  -445,  -445,
     629,   564,    60,  -445,  -445,   616,  -445,   567,   629,    61,
     629,   629,  1207,  -445,  -445,  -445,  -445,  -445,  -445,  -445,
    -445,  -445,  -445,  -445,  -445,  -445,  -445,   573,   979,  1283,
    -445,  -445,  -445,   574,  -445,  -445,   575,  -445,  -445,   579,
    -445,  -445,   580,  -445,  -445,   581,  -445,  -445,   582,    74,
     451,  1207,  -445,   451,    77,    79,   451,  1207,  -445,   451,
      84,  -445,   596,  -445,  -445,  1207,  1207,  1207,   538,   597,
    -445,   585,   599,  -445,  -445,   588,   590,   451,    87,   451,
      88,  1207,  -445,  -445,  -445,  -445,  -445,  -445,   551,  -445,
    -445,   979,  -445,  -445,  -445,  1207,  -445,  -445,  1207,   602,
    -445,  -445,  -445,  -445,  -445,   591,    -1,  -445,  -445,  -445,
    -445,   629,   629,   629,   621,   629,  -445,   629,   629,  -445,
    -445,  -445,  -445,   587,   595,  -445,  -445,  -445,  -445,  -445,
    -445,  1207,  -445,    89,   598,    92,  1207,  -445,  1207,  -445,
      93,   604,    97,  1207,  -445,  1055,   617,   618,  -445,   619,
     599,   612,  -445,  -445,   101,  1207,  -445,   105,  1207,  -445,
     605,  -445,  -445,   203,   614,  1207,  -445,    38,  -445,  -445,
    -445,  -445,  -445,  -445,  -445,  -445,  -445,   615,  1207,  -445,
    -445,  1207,  -445,   622,   627,  1207,  -445,  -445,  1207,  -445,
     628,  1207,  -445,  -445,  1093,   618,  1207,  1131,   620,   618,
    1207,  -445,   630,  1207,  -445,   632,  -445,  1207,  -445,  -445,
    -445,  1207,   633,   636,  -445,   634,   639,  -445,  -445,   641,
     643,  -445,  -445,  1207,  -445,  -445,  1207,  1169,   618,   646,
    -445,   648,  -445,   203,  -445,  1207,  -445,  -445,  -445,  -445,
    -445,  -445,  -445,  1207,  -445,  -445,  -445,  -445,  -445
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -445,  -445,  -445,    68,  -445,  -445,   299,  -195,   586,  -445,
    -445,  -445,    57,  -445,  -104,   483,   -88,   189,  -445,    29,
    -445,  -445,  -445,  -445,  -445,  -445,  -445,   713,  -445,  -445,
      44,   -16,  -445,  -445,   532,  -445,  -445,  -445,  -445,  -445,
    -445,   365,   398,  -445,  -445,  -445,  -445,  -445,  -445,  -445,
    -445,  -445,  -445,   358,  -445,  -445,  -445,  -308,   388,  -445,
      54,   -75,  -445,  -235,  -445,  -218,   -52,  -445,  -445,   508,
     -41,  -445,    -7,  -445,  -238,  -445,  -237,  -445,  -225,  -445,
    -233,  -445,  -234,   -85,  -445,  -445,   272,  -445,   568,   667,
     484,  -445,   238,  -444,  -413,   589,   -70,   286,  -181,  -445,
    -445,  -445,   700,  -445,  -445,   125,  -445,  -287,   329,  -445,
    -290,  -302,    52,  -165,  -445
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -425
static const short int yytable[] =
{
     182,   367,   184,   443,   196,   197,   183,   199,   186,   167,
     223,   188,   191,   191,   222,   442,   467,   377,   201,   368,
     379,   580,   147,    34,   173,   176,   334,   337,   383,   384,
     387,   388,    23,    26,   381,   173,   343,   173,   228,   348,
     349,   224,    31,   357,   226,   189,   192,   192,   577,   444,
     579,    44,   541,   273,    49,   401,    16,   493,   174,   500,
     331,   602,   607,    16,   204,   272,   324,   497,   314,   174,
     362,   174,   469,   261,   362,   385,    16,   325,    16,   262,
      50,   386,    33,   470,   198,   151,   331,    51,   315,   144,
     657,   171,   592,   593,   594,   547,   331,   571,   621,    57,
      58,   626,    27,   628,   426,   321,    20,   431,   633,   319,
      36,   645,   648,   668,   450,   150,   671,   675,   274,   363,
     274,   678,   280,   363,    35,   690,   177,   445,    40,   693,
     542,   332,   278,   455,   456,   286,   559,   652,   173,   229,
     506,   350,    32,   507,   358,   184,   188,   222,   558,   203,
     562,   503,   509,   510,   222,   511,   512,   508,   494,   188,
     501,   582,   603,   608,   205,   651,   188,   340,    16,   154,
     553,   225,   174,   548,   227,   572,   622,   230,   341,   627,
     189,   629,   391,   392,   393,   394,   634,   370,   399,   646,
     649,   669,   331,   189,   672,   676,   281,   300,   303,   679,
     189,   287,   331,   691,    38,    16,   293,   694,   540,    16,
      41,    16,   592,   593,   594,    16,   146,   243,   244,    55,
     697,    16,    16,   331,    80,    16,    56,   292,   245,   539,
     437,   179,   180,   544,   545,    42,    16,    16,   550,   184,
     184,    16,    47,   483,   246,   461,    52,   376,   156,   182,
       1,     2,   568,   472,   570,    16,   247,   475,     3,     4,
     475,   474,    16,   335,   404,   479,   480,   640,   407,   451,
     411,   451,   554,   588,   414,   248,   145,   249,   250,   487,
     418,   421,   360,   361,   522,     2,   159,   543,   495,   149,
     173,   476,     3,     4,   476,   525,   528,   188,   152,    24,
     531,   251,   252,   452,   148,   452,    25,     5,     6,     7,
     513,   514,   515,   516,   534,   590,   520,   235,   154,   504,
     471,   537,   242,   161,   174,   546,   405,   425,   408,   153,
     430,   189,   412,   351,   415,   352,   155,    50,   419,    28,
     422,     5,     6,     7,   432,   623,   307,   308,   625,   685,
     653,   630,   689,   156,   632,     5,     6,     7,   164,    45,
     551,   552,   549,   437,    43,   561,   563,   427,   505,   566,
     264,   265,   644,    28,   647,    21,   433,   166,   309,   468,
      29,    30,   714,   298,     2,   576,    55,    53,   578,   157,
     321,   168,   169,   448,   182,   446,   715,   567,   428,   267,
      45,   718,   586,   586,   389,   390,   591,   158,    46,   488,
     489,    53,   573,   573,   299,   714,   569,    24,   496,    54,
       5,     6,     7,   170,   301,   449,   447,   611,   268,   269,
     270,     5,     6,     7,   517,   518,   587,   587,   159,   161,
       5,     6,     7,   321,   160,   163,   574,   574,   162,   614,
     523,    21,   164,   526,   165,   166,   302,   529,   178,    22,
     532,   187,   723,    43,   535,   221,   624,   538,   395,    48,
     218,   234,   631,     5,     6,     7,   236,   237,   173,   239,
     638,   639,   561,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   241,   255,   650,   396,   397,   398,
      61,   257,   424,   272,   259,   277,   321,     5,     6,     7,
      48,   279,   174,   654,   282,   217,   283,   284,   285,     5,
       6,     7,   288,   289,   583,     5,     6,     7,    68,    69,
     290,    70,    71,    72,    73,    74,   291,   294,   295,   597,
     598,   296,   297,   304,   600,   310,   667,   312,   327,   429,
     339,   673,   606,   674,   609,   610,    80,    81,   680,   316,
     437,   218,   328,   338,    83,   344,     5,     6,     7,   359,
     692,   369,   372,   695,   371,   373,   374,   400,   403,   378,
     702,   406,    87,    88,   380,   409,    89,    90,   382,   410,
     417,   413,   416,   705,   420,   423,   706,   453,   434,    92,
     709,    93,   200,   710,   454,   457,   712,   458,   465,   437,
     459,   561,   437,   463,   464,   719,   473,   477,   721,   478,
     481,   484,   482,   490,   491,   492,   724,   502,   575,   564,
      59,   585,   565,     1,   521,    60,   581,   524,   731,    61,
     527,   732,   437,   530,    62,   533,    63,   536,    64,    65,
     737,    66,   560,   460,    67,   658,   659,   660,   738,   662,
    -425,   663,   664,   604,   599,   661,   601,    68,    69,   605,
      70,    71,    72,    73,    74,    75,   612,   615,   616,    76,
      77,    78,   617,   618,   619,   620,    79,   635,   641,   553,
     642,  -413,   643,   655,   656,    80,    81,   665,   666,   519,
     670,   347,    82,    83,    84,    85,   677,   696,   684,   686,
     687,   717,   233,    12,   703,  -424,   701,   704,   485,   330,
      86,    87,    88,   498,   707,    89,    90,    91,   231,   708,
     711,     1,   720,   232,   722,   725,   727,    61,    92,   726,
      93,   728,    62,   729,    63,   730,    64,    65,   734,    66,
     735,   486,    67,   499,   596,   195,   613,    61,   584,   402,
     336,   375,   172,   313,   688,    68,    69,   557,    70,    71,
      72,    73,    74,    75,     0,   736,     0,    76,    77,    78,
       0,     0,     0,     0,    79,    68,    69,     0,    70,    71,
      72,    73,    74,    80,    81,     0,     0,     0,    61,     0,
      82,    83,    84,    85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,    81,     0,     0,     0,    86,    87,
      88,    83,     0,    89,    90,    91,    68,    69,     0,    70,
      71,    72,    73,    74,     0,     0,    92,    61,    93,    87,
      88,   345,     0,    89,    90,    91,     0,     0,     0,     0,
     190,     0,     0,     0,    80,    81,    92,     0,    93,     0,
       0,     0,    83,     0,     0,    68,    69,     0,    70,    71,
      72,    73,    74,     0,     0,    61,     0,     0,     0,    86,
      87,    88,     0,     0,    89,    90,    91,     0,     0,     0,
       0,     0,     0,    80,    81,     0,     0,    92,     0,    93,
       0,    83,     0,    68,    69,   435,    70,    71,    72,    73,
      74,     0,     0,    61,     0,     0,     0,     0,     0,    87,
      88,     0,     0,    89,    90,    91,     0,     0,     0,     0,
       0,    80,    81,     0,     0,     0,    92,   194,    93,    83,
       0,    68,    69,   555,    70,    71,    72,    73,    74,     0,
       0,    61,     0,     0,     0,     0,     0,    87,    88,     0,
       0,    89,    90,   436,     0,     0,     0,     0,     0,    80,
      81,     0,     0,     0,    92,     0,    93,    83,     0,    68,
      69,     0,    70,    71,    72,    73,    74,     0,     0,    61,
       0,     0,     0,     0,     0,    87,    88,     0,     0,    89,
      90,   556,     0,     0,     0,     0,     0,    80,    81,     0,
       0,     0,    92,     0,    93,    83,     0,    68,    69,     0,
      70,    71,    72,    73,    74,     0,     0,    61,     0,     0,
       0,     0,     0,    87,    88,     0,     0,    89,    90,    91,
       0,     0,     0,     0,     0,    80,    81,     0,     0,     0,
      92,     0,    93,    83,     0,    68,    69,     0,    70,    71,
      72,    73,    74,     0,     0,    61,     0,     0,     0,     0,
       0,    87,    88,     0,     0,    89,    90,     0,     0,     0,
       0,   320,     0,    80,    81,     0,     0,     0,    92,     0,
      93,    83,     0,    68,    69,   681,    70,    71,    72,    73,
      74,     0,     0,    61,     0,     0,     0,     0,     0,    87,
      88,     0,     0,    89,    90,     0,     0,     0,     0,   460,
       0,    80,    81,     0,     0,     0,    92,     0,    93,    83,
       0,    68,    69,   713,    70,    71,    72,    73,    74,     0,
       0,    61,     0,     0,     0,     0,     0,    87,    88,     0,
       0,    89,    90,     0,     0,     0,     0,     0,     0,    80,
      81,     0,     0,     0,    92,     0,    93,    83,     0,    68,
      69,   716,    70,    71,    72,    73,    74,     0,     0,    61,
       0,     0,     0,     0,     0,    87,    88,     0,     0,    89,
      90,     0,     0,     0,     0,     0,     0,    80,    81,     0,
       0,     0,    92,     0,    93,    83,     0,    68,    69,   733,
      70,    71,    72,    73,    74,     0,     0,    61,     0,     0,
       0,     0,     0,    87,    88,     0,     0,    89,    90,     0,
       0,     0,     0,     0,     0,    80,    81,     0,     0,     0,
      92,     0,    93,    83,     0,    68,    69,     0,    70,    71,
      72,    73,    74,     0,     0,     0,     0,     0,     0,     0,
       0,    87,    88,     0,     0,    89,    90,     0,     0,     0,
       0,     0,     0,    80,    81,     0,     0,     0,    92,     0,
      93,    83,     0,    68,    69,     0,    70,    71,    72,    73,
      74,     0,     0,     0,     0,     0,     0,     0,     0,    87,
      88,     0,     0,    89,    90,     0,     0,     0,     0,     0,
       0,    80,    81,     0,     0,     0,    92,     0,    93,    83,
       0,    68,    69,     0,    70,    71,    72,    73,    74,     0,
       0,     0,     0,     0,     0,     0,     0,    87,    88,     0,
       0,    89,    90,    91,     0,     0,     0,     0,   318,    80,
      81,     0,     0,     0,    92,     0,    93,    83,     0,    68,
      69,     0,    70,    71,    72,    73,    74,     0,     0,     0,
       0,     0,     0,     0,     0,    87,    88,     0,     0,    89,
      90,    91,     0,     0,     0,     0,     0,    80,    81,     0,
       0,     0,    92,     0,    93,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,    88,     0,     0,    89,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,     0,    93
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
      75,   236,    77,   305,    89,    90,    76,    92,    78,    61,
     114,    86,    87,    88,   102,   305,   324,   255,    93,   237,
     257,   465,    38,     1,    65,     1,   191,   192,   261,   262,
     264,   265,     3,     4,   259,    76,   201,    78,     1,   220,
       1,   116,     1,     1,   119,    86,    87,    88,   461,    24,
     463,    22,    24,    40,    25,    40,    44,     1,    65,     1,
      20,     1,     1,    44,     1,    66,    91,    16,     1,    76,
      23,    78,    91,    59,    23,    59,    44,   102,    44,    65,
       5,    65,    14,   102,    91,    41,    20,    12,    21,    35,
      91,    62,    54,    55,    56,    24,    20,    24,    24,    31,
      32,    24,     0,    24,   299,   180,    44,   302,    24,   179,
     105,    24,    24,    24,   309,   103,    24,    24,   105,    72,
     105,    24,   103,    72,   102,    24,   102,   102,    47,    24,
     102,    91,   148,   314,   315,   103,   438,   581,   179,   102,
     378,   102,   101,   380,   102,   220,   221,   235,   438,    95,
     440,   369,   385,   386,   242,   389,   390,   382,   102,   234,
     102,   469,   102,   102,   101,   578,   241,    91,    44,     5,
     104,   117,   179,   102,   120,   102,   102,   123,   102,   102,
     221,   102,   267,   268,   269,   270,   102,   239,   273,   102,
     102,   102,    20,   234,   102,   102,   152,   168,   169,   102,
     241,   157,    20,   102,    91,    44,   162,   102,    44,    44,
      92,    44,    54,    55,    56,    44,   105,    10,    11,     5,
      17,    44,    44,    20,    66,    44,    12,   103,    21,   424,
     305,    92,    93,   428,   429,    44,    44,    44,   433,   314,
     315,    44,    44,   347,    37,   320,    44,   254,     5,   324,
       4,     5,   447,   328,   449,    44,    49,   332,    12,    13,
     335,   331,    44,    91,   103,   340,   341,   557,   103,   310,
     103,   312,   437,    91,   103,    68,    44,    70,    71,   354,
     103,   103,   228,   229,   103,     5,     5,    44,   363,    44,
     331,   332,    12,    13,   335,   103,   103,   372,    92,     5,
     103,    94,    95,   310,    91,   312,    12,    61,    62,    63,
     395,   396,   397,   398,   103,   480,   401,   128,     5,   371,
     327,   103,   133,     5,   331,    44,   282,   298,   284,    44,
     301,   372,   288,    16,   290,    18,    44,     5,   294,     5,
     296,    61,    62,    63,    12,   540,    12,    13,   543,   636,
     585,   546,   639,     5,   549,    61,    62,    63,     5,     5,
     435,   436,    44,   438,     5,   440,   441,    13,   375,   444,
      96,    97,   567,     5,   569,     5,    44,     5,    44,   325,
      12,    13,   684,    13,     5,   460,     5,     5,   463,    92,
     465,    12,    13,    12,   469,    13,   686,    44,    44,    69,
       5,   688,   477,   478,    96,    97,   481,    44,    13,   355,
     356,     5,   453,   454,    44,   717,    44,     5,   364,    13,
      61,    62,    63,    44,    12,    44,    44,   502,    98,    99,
     100,    61,    62,    63,    92,    93,   477,   478,     5,     5,
      61,    62,    63,   518,    44,    44,   453,   454,    92,   519,
     406,     5,     5,   409,    44,     5,    44,   413,    44,    13,
     416,    44,   697,     5,   420,    91,   541,   423,    69,     5,
     104,    91,   547,    61,    62,    63,    17,     8,   519,     9,
     555,   556,   557,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    91,   106,   571,    98,    99,   100,
      10,   107,    44,    66,   108,    44,   581,    61,    62,    63,
       5,   103,   519,   588,    92,    58,    44,    92,    44,    61,
      62,    63,    92,    44,   470,    61,    62,    63,    38,    39,
      92,    41,    42,    43,    44,    45,    44,    92,    44,   485,
     486,    92,    44,    92,   490,    91,   621,    91,    47,    44,
     110,   626,   498,   628,   500,   501,    66,    67,   633,    91,
     635,   104,    91,   103,    74,   112,    61,    62,    63,    16,
     645,     8,    91,   648,     9,    21,    10,    44,   103,   106,
     655,    92,    92,    93,   107,    92,    96,    97,   108,   103,
     103,    92,    92,   668,    92,    92,   671,    91,   103,   109,
     675,   111,   112,   678,    91,    44,   681,    91,    91,   684,
     103,   686,   687,   102,   110,   690,    91,    91,   693,    91,
      91,   102,    92,   102,    16,    16,   701,    16,    44,    91,
       1,    21,    91,     4,   103,     6,    91,   103,   713,    10,
     103,   716,   717,   103,    15,   103,    17,   103,    19,    20,
     725,    22,   103,   102,    25,   601,   602,   603,   733,   605,
      91,   607,   608,    47,   102,    44,   102,    38,    39,   102,
      41,    42,    43,    44,    45,    46,   103,   103,   103,    50,
      51,    52,   103,   103,   103,   103,    57,    91,    91,   104,
      91,   103,   102,    91,   103,    66,    67,   110,   103,   400,
     102,   218,    73,    74,    75,    76,   102,   102,    91,    91,
      91,    91,   126,     0,   657,   103,   102,   102,   353,   187,
      91,    92,    93,   365,   102,    96,    97,    98,     1,   102,
     102,     4,   102,     6,   102,   102,   102,    10,   109,   103,
     111,   102,    15,   102,    17,   102,    19,    20,   102,    22,
     102,   353,    25,   365,   482,    88,   518,    10,   472,   275,
     192,   253,    62,   174,   639,    38,    39,   438,    41,    42,
      43,    44,    45,    46,    -1,   723,    -1,    50,    51,    52,
      -1,    -1,    -1,    -1,    57,    38,    39,    -1,    41,    42,
      43,    44,    45,    66,    67,    -1,    -1,    -1,    10,    -1,
      73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    -1,    -1,    -1,    91,    92,
      93,    74,    -1,    96,    97,    98,    38,    39,    -1,    41,
      42,    43,    44,    45,    -1,    -1,   109,    10,   111,    92,
      93,    53,    -1,    96,    97,    98,    -1,    -1,    -1,    -1,
     103,    -1,    -1,    -1,    66,    67,   109,    -1,   111,    -1,
      -1,    -1,    74,    -1,    -1,    38,    39,    -1,    41,    42,
      43,    44,    45,    -1,    -1,    10,    -1,    -1,    -1,    91,
      92,    93,    -1,    -1,    96,    97,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    -1,    -1,   109,    -1,   111,
      -1,    74,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    92,
      93,    -1,    -1,    96,    97,    98,    -1,    -1,    -1,    -1,
      -1,    66,    67,    -1,    -1,    -1,   109,   110,   111,    74,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    10,    -1,    -1,    -1,    -1,    -1,    92,    93,    -1,
      -1,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    66,
      67,    -1,    -1,    -1,   109,    -1,   111,    74,    -1,    38,
      39,    -1,    41,    42,    43,    44,    45,    -1,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,    96,
      97,    98,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,
      -1,    -1,   109,    -1,   111,    74,    -1,    38,    39,    -1,
      41,    42,    43,    44,    45,    -1,    -1,    10,    -1,    -1,
      -1,    -1,    -1,    92,    93,    -1,    -1,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,
     109,    -1,   111,    74,    -1,    38,    39,    -1,    41,    42,
      43,    44,    45,    -1,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    92,    93,    -1,    -1,    96,    97,    -1,    -1,    -1,
      -1,   102,    -1,    66,    67,    -1,    -1,    -1,   109,    -1,
     111,    74,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    92,
      93,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,   102,
      -1,    66,    67,    -1,    -1,    -1,   109,    -1,   111,    74,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    10,    -1,    -1,    -1,    -1,    -1,    92,    93,    -1,
      -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    -1,    -1,    -1,   109,    -1,   111,    74,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,    96,
      97,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,
      -1,    -1,   109,    -1,   111,    74,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    -1,    10,    -1,    -1,
      -1,    -1,    -1,    92,    93,    -1,    -1,    96,    97,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,
     109,    -1,   111,    74,    -1,    38,    39,    -1,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    93,    -1,    -1,    96,    97,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    -1,    -1,    -1,   109,    -1,
     111,    74,    -1,    38,    39,    -1,    41,    42,    43,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      93,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    -1,    -1,    -1,   109,    -1,   111,    74,
      -1,    38,    39,    -1,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    -1,
      -1,    96,    97,    98,    -1,    -1,    -1,    -1,   103,    66,
      67,    -1,    -1,    -1,   109,    -1,   111,    74,    -1,    38,
      39,    -1,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,    96,
      97,    98,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,
      -1,    -1,   109,    -1,   111,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    93,    -1,    -1,    96,    97,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     109,    -1,   111
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
     131,    91,   129,   127,   174,   173,   174,   173,     1,   102,
     173,     1,     6,   121,    91,   130,    17,     8,   175,     9,
     177,    91,   130,    10,    11,    21,    37,    49,    68,    70,
      71,    94,    95,   180,   182,   106,   184,   107,   186,   108,
     188,    59,    65,   190,    96,    97,   192,    69,    98,    99,
     100,   194,    66,    40,   105,   197,   203,    44,   144,   103,
     103,   143,    92,    44,    92,    44,   103,   143,    92,    44,
      92,    44,   103,   143,    92,    44,    92,    44,    13,    44,
     132,    12,    44,   132,    92,   119,   120,    12,    13,    44,
      91,   208,    91,   208,     1,    21,    91,   147,   103,   209,
     102,   174,   205,   206,    91,   102,   168,    47,    91,   210,
     147,    20,    91,   201,   226,    91,   201,   226,   103,   110,
      91,   102,   213,   226,   112,    53,   124,   128,   211,     1,
     102,    16,    18,   152,   153,   154,   155,     1,   102,    16,
     173,   173,    23,    72,   166,   167,   171,   176,   178,     8,
     179,     9,    91,    21,    10,   182,   185,   187,   106,   189,
     107,   191,   108,   193,   193,    59,    65,   195,   195,    96,
      97,   196,   196,   196,   196,    69,    98,    99,   100,   196,
      44,    40,   203,   103,   103,   143,    92,   103,   143,    92,
     103,   103,   143,    92,   103,   143,    92,   103,   103,   143,
      92,   103,   143,    92,    44,   132,   120,    13,    44,    44,
     132,   120,    12,    44,   103,    40,    98,   174,   217,   219,
     221,   222,   223,   224,    24,   102,    13,    44,    12,    44,
     120,   183,   185,    91,    91,   211,   211,    44,    91,   103,
     102,   174,   207,   102,   110,    91,   204,   170,   173,    91,
     102,   185,   174,    91,   209,   174,   183,    91,    91,   174,
     174,    91,    92,   127,   102,   154,   155,   174,   173,   173,
     102,    16,    16,     1,   102,   174,   173,    16,   166,   171,
       1,   102,    16,   178,   179,   185,   187,   189,   191,   193,
     193,   195,   195,   196,   196,   196,   196,    92,    93,   119,
     196,   103,   103,   143,   103,   103,   143,   103,   103,   143,
     103,   103,   143,   103,   103,   143,   103,   103,   143,   120,
      44,    24,   102,    44,   120,   120,    44,    24,   102,    44,
     120,   174,   174,   104,   226,    40,    98,   221,   223,   224,
     103,   174,   223,   174,    91,    91,   174,    44,   120,    44,
     120,    24,   102,   183,   185,    44,   174,   207,   174,   207,
     206,    91,   170,   173,   210,    21,   174,   183,    91,   212,
     226,   174,    54,    55,    56,   125,   199,   173,   173,   102,
     173,   102,     1,   102,    47,   102,   173,     1,   102,   173,
     173,   174,   103,   205,   209,   103,   103,   103,   103,   103,
     103,    24,   102,   120,   174,   120,    24,   102,    24,   102,
     120,   174,   120,    24,   102,    91,   218,   220,   174,   174,
     223,    91,    91,   102,   120,    24,   102,   120,    24,   102,
     174,   207,   206,   176,   174,    91,   103,    91,   173,   173,
     173,    44,   173,   173,   173,   110,   103,   174,    24,   102,
     102,    24,   102,   174,   174,    24,   102,   102,    24,   102,
     174,    40,   223,   224,    91,   220,    91,    91,   218,   220,
      24,   102,   174,    24,   102,   174,   102,    17,   225,   226,
     227,   102,   174,   125,   102,   174,   174,   102,   102,   174,
     174,   102,   174,    40,   224,   223,    40,    91,   220,   174,
     102,   174,   102,   176,   174,   102,   103,   102,   102,   102,
     102,   174,   174,    40,   102,   102,   225,   174,   174
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
#line 158 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"file_input: program ENDMARKER\n";
										p->check_inhertance_list();
						if(!p->errRecovery->errQ->isEmpty())
								p->errRecovery->printErrQueue();
						root = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);		
						try{
						if(fileStack.size()==1){
							//ast->print(root, 0);
						p->print_symbol();
						ast->tree((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn));
						ast->print((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn), 0);
						ast->generate_static((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn));
						ast->generate_main(p->getMainFunction());
						}
						}catch(int e){
							cout << "An exception occurred. Exception Nr. " << e << '\n';
						}
						Streams::verbose().flush();	
								}
    break;

  case 3:
/* Line 868 of glr.c  */
#line 179 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"program : import_stmt ';' temp2 \n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn);}
    break;

  case 4:
/* Line 868 of glr.c  */
#line 180 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"program : import_stmt error temp2 \n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn);}
    break;

  case 5:
/* Line 868 of glr.c  */
#line 181 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"program : temp2 \n";}
    break;

  case 6:
/* Line 868 of glr.c  */
#line 185 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"temp2: classdef temp2\n";
							ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
							//cout<<"enter upper"<<endl;
							out_of_import=true;
						}
    break;

  case 7:
/* Line 868 of glr.c  */
#line 190 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"temp2: classdef \n";
							//ast->createClassNode();
							//cout<<"enter classdef"<<endl;
					}
    break;

  case 8:
/* Line 868 of glr.c  */
#line 207 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 219 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader:	DEF  NAME parameters ARROW test ':'  \n";}
    break;

  case 10:
/* Line 868 of glr.c  */
#line 220 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader:  DEF access NAME parameters ARROW test ':'  \n";}
    break;

  case 11:
/* Line 868 of glr.c  */
#line 221 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 232 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 242 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC NAME parameters ARROW test ':' \n";}
    break;

  case 14:
/* Line 868 of glr.c  */
#line 243 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL NAME parameters ARROW test ':' \n";}
    break;

  case 15:
/* Line 868 of glr.c  */
#line 244 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 253 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 262 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC FINAL NAME parameters ARROW test ':' \n";}
    break;

  case 18:
/* Line 868 of glr.c  */
#line 263 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 19:
/* Line 868 of glr.c  */
#line 264 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 273 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 282 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 291 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC access NAME parameters ARROW test ':'  \n";}
    break;

  case 23:
/* Line 868 of glr.c  */
#line 292 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 300 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 309 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC FINAL access NAME parameters ARROW test ':'  \n";}
    break;

  case 26:
/* Line 868 of glr.c  */
#line 310 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL STATIC access NAME parameters ARROW test ':'  \n";}
    break;

  case 27:
/* Line 868 of glr.c  */
#line 311 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 320 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 328 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 30:
/* Line 868 of glr.c  */
#line 329 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access FINAL NAME parameters ARROW test ':'  \n";}
    break;

  case 31:
/* Line 868 of glr.c  */
#line 330 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 339 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 348 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access STATIC FINAL NAME parameters ARROW test ':'  \n";}
    break;

  case 34:
/* Line 868 of glr.c  */
#line 349 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access FINAL STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 35:
/* Line 868 of glr.c  */
#line 350 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 359 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 367 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC access FINAL NAME parameters ARROW test ':'  \n";}
    break;

  case 38:
/* Line 868 of glr.c  */
#line 368 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL access STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 39:
/* Line 868 of glr.c  */
#line 369 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 377 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 387 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
					 inside_func=true;call_func=true; Streams::verbose() <<"inside_func:'(' ";
				 }
    break;

  case 42:
/* Line 868 of glr.c  */
#line 393 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"inside_func arglist ')'\n";}
    break;

  case 43:
/* Line 868 of glr.c  */
#line 394 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"parameters:'(' ')'\n";}
    break;

  case 44:
/* Line 868 of glr.c  */
#line 397 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {	((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);	Streams::verbose() <<"stmt:	simple_stmt \n";
						visit_num=0;
					}
    break;

  case 45:
/* Line 868 of glr.c  */
#line 400 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {	((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);cout<<"line num"<<yylval.r.lineNum<<endl;	Streams::verbose() <<"stmt: compound_stmt\n";
							visit_num=0;
						}
    break;

  case 46:
/* Line 868 of glr.c  */
#line 404 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
								Streams::verbose() <<"simple_stmt: small_stmt ';' \n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 47:
/* Line 868 of glr.c  */
#line 408 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
								Streams::verbose() <<"simple_stmt: small_stmt error \n";
													((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);
							  }
    break;

  case 48:
/* Line 868 of glr.c  */
#line 413 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"small_stmt: expr_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 49:
/* Line 868 of glr.c  */
#line 417 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
						Streams::verbose() <<"small_stmt: del_stmt \n";
						((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
					  }
    break;

  case 50:
/* Line 868 of glr.c  */
#line 421 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"small_stmt: pass_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
					   }
    break;

  case 51:
/* Line 868 of glr.c  */
#line 425 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"small_stmt: flow_stmt \n";
							flowStmt = dynamic_cast<FlowStmtNode*>((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn));

							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
					   }
    break;

  case 52:
/* Line 868 of glr.c  */
#line 431 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"small_stmt: import_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						 }
    break;

  case 53:
/* Line 868 of glr.c  */
#line 435 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"small_stmt: global_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						 }
    break;

  case 54:
/* Line 868 of glr.c  */
#line 439 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: nonlocal_stmt \n";}
    break;

  case 55:
/* Line 868 of glr.c  */
#line 440 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"small_stmt: print_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
							visit_num=0;
							constant=false;
						 }
    break;

  case 56:
/* Line 868 of glr.c  */
#line 448 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 461 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
									((*yyvalp).tn)=ast->createinputNode(NULL,my_input,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
									visit_num=0;
									constant=false;
								}
    break;

  case 58:
/* Line 868 of glr.c  */
#line 467 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							my_input=INT_input;
						}
    break;

  case 59:
/* Line 868 of glr.c  */
#line 470 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							my_input=FLOAT_input;
						}
    break;

  case 60:
/* Line 868 of glr.c  */
#line 473 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							my_input=STRING_input;
						}
    break;

  case 61:
/* Line 868 of glr.c  */
#line 477 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"expr_stmt:	testlist_star_expr augassign testlist \n";}
    break;

  case 62:
/* Line 868 of glr.c  */
#line 478 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"expr_stmt: testlist_star_expr \n";}
    break;

  case 63:
/* Line 868 of glr.c  */
#line 479 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
								Streams::verbose() <<"compound_stmt: vardef\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
								visit_num=0;
							}
    break;

  case 64:
/* Line 868 of glr.c  */
#line 484 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 507 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 540 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"right_testlist: '=' testlist_star_expr right_testlist \n";}
    break;

  case 67:
/* Line 868 of glr.c  */
#line 541 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"right_testlist: '=' testlist_star_expr \n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 68:
/* Line 868 of glr.c  */
#line 542 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 69:
/* Line 868 of glr.c  */
#line 547 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: comma_test_star_seqJ \n";}
    break;

  case 70:
/* Line 868 of glr.c  */
#line 548 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: comma_test_star_seqJ ',' \n";}
    break;

  case 71:
/* Line 868 of glr.c  */
#line 549 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"',' \n";}
    break;

  case 72:
/* Line 868 of glr.c  */
#line 550 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: test comma_test_star_seqJ \n";}
    break;

  case 73:
/* Line 868 of glr.c  */
#line 551 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
								Streams::verbose() <<"testlist_star_expr: test \n"; 
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 74:
/* Line 868 of glr.c  */
#line 555 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: star_expr comma_test_star_seqJ ',' \n";}
    break;

  case 75:
/* Line 868 of glr.c  */
#line 556 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: star_expr ',' \n";}
    break;

  case 76:
/* Line 868 of glr.c  */
#line 559 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star : ',' test \n";}
    break;

  case 77:
/* Line 868 of glr.c  */
#line 560 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star : ',' star_expr \n";}
    break;

  case 78:
/* Line 868 of glr.c  */
#line 563 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seqJ : comma_test_star_seqJ comma_test_star \n";}
    break;

  case 79:
/* Line 868 of glr.c  */
#line 564 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seqJ : comma_test_star \n";}
    break;

  case 80:
/* Line 868 of glr.c  */
#line 566 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	PLUS_EQUAL \n";}
    break;

  case 81:
/* Line 868 of glr.c  */
#line 567 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MINUS_EQUAL \n";}
    break;

  case 82:
/* Line 868 of glr.c  */
#line 568 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	STAR_EQUAL \n";}
    break;

  case 83:
/* Line 868 of glr.c  */
#line 569 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	DIV_EQUAL \n";}
    break;

  case 84:
/* Line 868 of glr.c  */
#line 570 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MOD_EQUAL \n";}
    break;

  case 85:
/* Line 868 of glr.c  */
#line 571 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	AND_EQUAL \n";}
    break;

  case 86:
/* Line 868 of glr.c  */
#line 572 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	OR_EQUAL \n";}
    break;

  case 87:
/* Line 868 of glr.c  */
#line 573 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	SHAPOO_EQUAL \n";}
    break;

  case 88:
/* Line 868 of glr.c  */
#line 574 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	LESS_THAN_2_EQUAL \n";}
    break;

  case 89:
/* Line 868 of glr.c  */
#line 575 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MORE_THAN_2_EQUAL \n";}
    break;

  case 90:
/* Line 868 of glr.c  */
#line 576 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	STAR_2_EQUAL \n";}
    break;

  case 91:
/* Line 868 of glr.c  */
#line 577 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	DIV_2_EQUAL \n";}
    break;

  case 92:
/* Line 868 of glr.c  */
#line 580 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose()<<"access_modef: PRIVATE\n";acc_mod="private";pp=true;}
    break;

  case 93:
/* Line 868 of glr.c  */
#line 581 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {pp=false;Streams::verbose()<<"access_modef:	PUBLIC\n";acc_mod="public";pp=false;}
    break;

  case 94:
/* Line 868 of glr.c  */
#line 582 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {pro=true;Streams::verbose()<<"access_modef:	PROTECTED\n";acc_mod="protected";}
    break;

  case 95:
/* Line 868 of glr.c  */
#line 584 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"print_stmt: PRINT exprlist \n";
							((*yyvalp).tn) = ast->createPrintNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
						   }
    break;

  case 96:
/* Line 868 of glr.c  */
#line 588 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"del_stmt:   DEL exprlist \n";
							((*yyvalp).tn) = ast->createDelNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
						 }
    break;

  case 97:
/* Line 868 of glr.c  */
#line 594 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
					Streams::verbose() <<"pass_stmt:	PASS \n";
					((*yyvalp).tn) = ast->createPassNode(NULL, NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
				 }
    break;

  case 98:
/* Line 868 of glr.c  */
#line 600 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
						Streams::verbose() <<"flow_stmt:	break_stmt \n";
						((*yyvalp).tn) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
					   }
    break;

  case 99:
/* Line 868 of glr.c  */
#line 604 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
								Streams::verbose() <<"flow_stmt: continue_stmt\n";
								((*yyvalp).tn) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 100:
/* Line 868 of glr.c  */
#line 608 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"flow_stmt: return_stmt\n";
							((*yyvalp).tn) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						  }
    break;

  case 101:
/* Line 868 of glr.c  */
#line 614 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
					Streams::verbose() <<"break_stmt: BREAK \n";
					((*yyvalp).tn) = ast->createFlowStmtNode(NULL, NULL, breakNode, NULL,yylval.r.lineNum,yylval.r.colNum);
				  }
    break;

  case 102:
/* Line 868 of glr.c  */
#line 620 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"continue_stmt:	CONTINUE \n";
							((*yyvalp).tn) = ast->createFlowStmtNode(NULL, NULL, continueNode, NULL,yylval.r.lineNum,yylval.r.colNum);
						 }
    break;

  case 103:
/* Line 868 of glr.c  */
#line 626 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
									Streams::verbose() <<"return_stmt:	RETURN testlist \n";
									((*yyvalp).tn) = ast->createReturnNode(testfunction,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
								}
    break;

  case 104:
/* Line 868 of glr.c  */
#line 630 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"return_stmt:	RETURN \n";
							((*yyvalp).tn) = ast->createReturnNode(testfunction,NULL, NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
						}
    break;

  case 105:
/* Line 868 of glr.c  */
#line 637 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"import_stmt: import_name \n";}
    break;

  case 106:
/* Line 868 of glr.c  */
#line 640 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 678 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_dotted_as_name_seq: ',' dotted_as_name \n";
														
														inhertance_list.push_back(temp_id_stack.top());
														temp_id_stack.pop();
												}
    break;

  case 108:
/* Line 868 of glr.c  */
#line 683 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_dotted_as_name_seq: comma_dotted_as_name_seq ',' dotted_as_name \n";
																					inhertance_list.push_back(temp_id_stack.top());
																				temp_id_stack.pop();
																		}
    break;

  case 109:
/* Line 868 of glr.c  */
#line 688 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
									Streams::verbose() <<"comma_dotted_as_name_seq: dotted_as_names: dotted_as_name \n";
									inhertance_list.push_back(temp_id_stack.top());
								temp_id_stack.pop();
					}
    break;

  case 110:
/* Line 868 of glr.c  */
#line 693 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
															Streams::verbose() <<"comma_dotted_as_name_seq: dotted_as_name comma_dotted_as_name_seq \n";
								inhertance_list.insert(inhertance_list.begin(),temp_id_stack.top());
								temp_id_stack.pop();
								temp_id="";
				 }
    break;

  case 111:
/* Line 868 of glr.c  */
#line 702 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dotted_as_name: dotted_name \n";
								t_id=new char[10];
								strcpy(t_id,temp_id.c_str());
								temp_id_stack.push(t_id);
								temp_id="";
							}
    break;

  case 112:
/* Line 868 of glr.c  */
#line 708 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dotted_as_name: dotted_name AS NAME\n";}
    break;

  case 113:
/* Line 868 of glr.c  */
#line 711 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 740 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dotted_name: NAME dotted_name_seq \n";
											temp_id=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.r.strVal)+temp_id;
									}
    break;

  case 115:
/* Line 868 of glr.c  */
#line 745 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"dotted_name_seq: '.' NAME \n";
							temp_id=temp_id+"."+(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal);
						}
    break;

  case 116:
/* Line 868 of glr.c  */
#line 749 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
												Streams::verbose() <<"dotted_name_seq: dotted_name_seq '.' NAME \n";
					temp_id=temp_id+"."+(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal);
				 }
    break;

  case 117:
/* Line 868 of glr.c  */
#line 755 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
								Streams::verbose() <<"comma_name_seq :	',' NAME \n";
								((*yyvalp).var)=p->addVariableToGlobalScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal), yylval.r.lineNum, yylval.r.colNum);
								v = ((*yyvalp).var);
								((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
							 }
    break;

  case 118:
/* Line 868 of glr.c  */
#line 761 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 771 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 778 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 787 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"nonlocal_stmt:	NONLOCAL NAME \n";}
    break;

  case 122:
/* Line 868 of glr.c  */
#line 788 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"nonlocal_stmt: NONLOCAL NAME comma_name_seq \n";}
    break;

  case 123:
/* Line 868 of glr.c  */
#line 791 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"compound_stmt:  if_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 124:
/* Line 868 of glr.c  */
#line 795 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
								Streams::verbose() <<"compound_stmt: while_stmt\n";
								if(flowStmt!=NULL){
									flowStmt->setCompoundStmtNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn));
									flowStmt == NULL;
								}
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);									
							}
    break;

  case 125:
/* Line 868 of glr.c  */
#line 803 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
								Streams::verbose() <<"compound_stmt: for_stmt\n";
								if(flowStmt!=NULL){
									flowStmt->setCompoundStmtNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn));
									flowStmt == NULL;
								}
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
									
						   }
    break;

  case 126:
/* Line 868 of glr.c  */
#line 812 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
								Streams::verbose() <<"compound_stmt: try_stmt\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						   }
    break;

  case 127:
/* Line 868 of glr.c  */
#line 816 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: with_stmt\n";}
    break;

  case 128:
/* Line 868 of glr.c  */
#line 817 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {	
								Streams::verbose() <<"compound_stmt: funcdef\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 129:
/* Line 868 of glr.c  */
#line 821 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
									Streams::verbose() <<"compound_stmt: DEF classdef\n";
									((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
								}
    break;

  case 130:
/* Line 868 of glr.c  */
#line 826 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 834 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 843 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 851 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 859 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 867 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 875 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 883 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 891 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 899 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 907 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 915 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 923 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 931 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 939 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 947 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 956 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
									Streams::verbose() <<"elif_seq :  ELIF test ':' suite \n";
									((*yyvalp).tn) = ast->createElseIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);	
													
								}
    break;

  case 147:
/* Line 868 of glr.c  */
#line 961 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() <<"elif_seq : elif_seq ELIF test ':' suite \n";
											Node* elseIfNode = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn);
											elseIfNode->Next = ast->createElseIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
											((*yyvalp).tn) = elseIfNode;		
																			
										  }
    break;

  case 148:
/* Line 868 of glr.c  */
#line 969 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							visit_num++;

}
    break;

  case 149:
/* Line 868 of glr.c  */
#line 973 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
									p->CloseScope();
									p->createNewScope();
									((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn);
									visit_num=0;
							}
    break;

  case 150:
/* Line 868 of glr.c  */
#line 980 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							p->CloseScope();
							p->createNewScope();
							visit_num=0;
						}
    break;

  case 151:
/* Line 868 of glr.c  */
#line 986 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
								Streams::verbose() <<"if_stmt:	IF test ':' suite \n";
								((*yyvalp).tn) = ast->createIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
								p->CloseScope();
							  }
    break;

  case 152:
/* Line 868 of glr.c  */
#line 991 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() <<"if_stmt:	IF test ':' suite elif_seq \n";
											((*yyvalp).tn) = ast->createIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
											p->CloseScope();
										}
    break;

  case 153:
/* Line 868 of glr.c  */
#line 996 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
												Streams::verbose() <<"if_stmt:	IF test ':' suite ELSE ':' suite \n";
												p->CloseScope();
												Node* elseNode = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
												((*yyvalp).tn) = ast->createIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.tn),elseNode,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
											  }
    break;

  case 154:
/* Line 868 of glr.c  */
#line 1002 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 1011 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
						visit_num++;
					}
    break;

  case 156:
/* Line 868 of glr.c  */
#line 1014 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							p->createNewScope();
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn);
							visit_num=0;
						}
    break;

  case 157:
/* Line 868 of glr.c  */
#line 1019 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							p->createNewScope();
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn);
							visit_num=0;
						}
    break;

  case 158:
/* Line 868 of glr.c  */
#line 1025 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
									Streams::verbose() <<"while_stmt: WHILE test ':' suite \n";
									((*yyvalp).tn) = ast->createWhileNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
									p->CloseScope();
								 }
    break;

  case 159:
/* Line 868 of glr.c  */
#line 1030 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() <<"while_stmt:  WHILE test ':' suite ELSE ':' suite \n";
													Node* whileNode= ast->createWhileNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
													whileNode->Next = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
													((*yyvalp).tn) = whileNode;
												 }
    break;

  case 160:
/* Line 868 of glr.c  */
#line 1037 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
								visit_num++;
							}
    break;

  case 161:
/* Line 868 of glr.c  */
#line 1040 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
								Streams::verbose() <<"while_header:  WHILE test ':' \n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn);//cout<<"in while"<<($<tn>2)->getNodeType()<<endl;
								p->createNewScope();
								visit_num=0;
							 }
    break;

  case 162:
/* Line 868 of glr.c  */
#line 1046 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
								Streams::verbose() <<"while_header:  WHILE test error \n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn);cout<<"in while"<<((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn))->getNodeType()<<endl;
								p->createNewScope();
								visit_num=0;
							 }
    break;

  case 163:
/* Line 868 of glr.c  */
#line 1053 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
												Streams::verbose() <<"for_stmt:   FOR exprlist IN testlist ':' suite \n";
												//$<tn>$ = ast->createForNode($<tn>6, NULL, lastNode, $<tn>4, NULL,yylval.r.lineNum,yylval.r.colNum);
												//Node* temp=ast->addNext(lastNode,$<tn>6);												
												Node* forNode = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn);
												forNode->Son = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn);
												((*yyvalp).tn) = forNode;
												p->CloseScope();
											   }
    break;

  case 164:
/* Line 868 of glr.c  */
#line 1062 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
												Streams::verbose() <<"for_stmt:   FOR exprlist IN testlist error suite \n";
												Node* forNode = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn);
												forNode->Son = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn);
												((*yyvalp).tn) = forNode;
												p->CloseScope();
											   }
    break;

  case 165:
/* Line 868 of glr.c  */
#line 1069 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
																Streams::verbose() <<"for_stmt:  FOR exprlist IN testlist ':' suite ELSE ':' suite\n";
													Node* forNode = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.tn);
													forNode->Son = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.tn);													
													forNode->Next = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (6))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
																((*yyvalp).tn) = forNode;															
															   }
    break;

  case 166:
/* Line 868 of glr.c  */
#line 1076 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
																Streams::verbose() <<"for_stmt:  FOR exprlist IN testlist error suite ELSE ':' suite\n";
													Node* forNode = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.tn);
													forNode->Son = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.tn);
													forNode->Next = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (6))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
																((*yyvalp).tn) = forNode;															
															   }
    break;

  case 167:
/* Line 868 of glr.c  */
#line 1083 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
																Streams::verbose() <<"for_stmt:  FOR exprlist IN testlist ':' suite ELSE error suite\n";
													Node* forNode = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.tn);
													forNode->Son = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.tn);
													forNode->Next = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (6))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
																((*yyvalp).tn) = forNode;															
															   }
    break;

  case 168:
/* Line 868 of glr.c  */
#line 1091 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
					((*yyvalp).tn) = ast->createForNode(NULL, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
					visit_num=0;
					p->createNewScope();
			}
    break;

  case 169:
/* Line 868 of glr.c  */
#line 1096 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
					((*yyvalp).tn) = ast->createForNode(NULL, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
					visit_num=0;
													p->createNewScope();
			}
    break;

  case 170:
/* Line 868 of glr.c  */
#line 1102 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
										p->createNewScope();
					 }
    break;

  case 171:
/* Line 868 of glr.c  */
#line 1105 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
										p->createNewScope();
					 }
    break;

  case 172:
/* Line 868 of glr.c  */
#line 1109 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
												Streams::verbose() <<" try_stmt:   TRY ':' suite try_except_cla_seq\n";
												p->CloseScope();
												((*yyvalp).tn) = ast->createTryNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
											 }
    break;

  case 173:
/* Line 868 of glr.c  */
#line 1114 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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

  case 174:
/* Line 868 of glr.c  */
#line 1123 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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

  case 175:
/* Line 868 of glr.c  */
#line 1132 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
												Streams::verbose() <<"try_stmt:  TRY ':' suite FINALLY ':' suite\n";
												p->CloseScope();
												Node* finally = ast->createFinallyNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
												((*yyvalp).tn) = ast->createTryNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.tn), finally, NULL,yylval.r.lineNum,yylval.r.colNum);
											 }
    break;

  case 176:
/* Line 868 of glr.c  */
#line 1139 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
								if(!from_except)
								{
									p->CloseScope();
									p->createNewScope();
								}
								from_except=false;
							}
    break;

  case 177:
/* Line 868 of glr.c  */
#line 1147 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 1156 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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

  case 179:
/* Line 868 of glr.c  */
#line 1165 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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

  case 180:
/* Line 868 of glr.c  */
#line 1174 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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

  case 181:
/* Line 868 of glr.c  */
#line 1187 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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

  case 182:
/* Line 868 of glr.c  */
#line 1202 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"with_seq:	',' with_item \n";}
    break;

  case 183:
/* Line 868 of glr.c  */
#line 1203 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"with_seq: with_seq ',' with_item\n";}
    break;

  case 184:
/* Line 868 of glr.c  */
#line 1206 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"with_stmt:  WITH with_item ':' suite \n";}
    break;

  case 185:
/* Line 868 of glr.c  */
#line 1207 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"with_stmt: WITH with_item with_seq ':' suite\n";}
    break;

  case 186:
/* Line 868 of glr.c  */
#line 1210 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<" with_item:  test\n";}
    break;

  case 187:
/* Line 868 of glr.c  */
#line 1211 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"with_item: test AS expr\n";}
    break;

  case 188:
/* Line 868 of glr.c  */
#line 1214 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
						p->CloseScope();
						p->createNewScope();
						Streams::verbose() <<"except_clause:  EXCEPT \n";
						((*yyvalp).tn) = ast->createExceptNode(NULL, NULL, NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
					   }
    break;

  case 189:
/* Line 868 of glr.c  */
#line 1220 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
								p->CloseScope();
								p->createNewScope();
								Streams::verbose() <<"except_clause:  EXCEPT test\n";
								((*yyvalp).tn) = ast->createExceptNode(NULL, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
								visit_num=0;
								lastNode=NULL;
							 }
    break;

  case 190:
/* Line 868 of glr.c  */
#line 1228 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"except_clause:  EXCEPT test AS NAME\n";
												p->CloseScope();
												p->createNewScope();
												visit_num=0;
												lastNode=NULL;
										}
    break;

  case 191:
/* Line 868 of glr.c  */
#line 1236 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {	
						((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);	Streams:: verbose() <<"list_stmt : stmt\n";
				}
    break;

  case 192:
/* Line 868 of glr.c  */
#line 1239 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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

  case 193:
/* Line 868 of glr.c  */
#line 1252 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"suite:	list_stmt END\n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);	
						}
    break;

  case 194:
/* Line 868 of glr.c  */
#line 1256 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"suite:	list_stmt error\n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);	
						}
    break;

  case 195:
/* Line 868 of glr.c  */
#line 1260 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {	((*yyvalp).tn)=NULL;	Streams::verbose() <<"suite:	END\n"; ((*yyvalp).tn)=NULL;}
    break;

  case 196:
/* Line 868 of glr.c  */
#line 1261 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {	((*yyvalp).tn)=NULL;	Streams::verbose() <<"suite:	error\n"; ((*yyvalp).tn)=NULL;}
    break;

  case 197:
/* Line 868 of glr.c  */
#line 1264 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"test:	or_test\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 198:
/* Line 868 of glr.c  */
#line 1265 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_test IF or_test ELSE test\n";
										((*yyvalp).tn)=ast->createShortIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
		}
    break;

  case 199:
/* Line 868 of glr.c  */
#line 1269 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_seq:	OR and_test \n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 200:
/* Line 868 of glr.c  */
#line 1270 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_seq: or_seq OR and_test \n";
								((*yyvalp).tn)=ast->createBooleanNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),OR_OP,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
							}
    break;

  case 201:
/* Line 868 of glr.c  */
#line 1275 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_test:	and_test\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 202:
/* Line 868 of glr.c  */
#line 1276 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_test:	and_test or_seq\n";
							((*yyvalp).tn)=ast->createBooleanNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),OR_OP,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
							}
    break;

  case 203:
/* Line 868 of glr.c  */
#line 1281 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_seq: AND not_test \n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 204:
/* Line 868 of glr.c  */
#line 1282 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_seq: and_seq AND not_test \n";
									((*yyvalp).tn)=ast->createBooleanNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),AND_OP,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
								}
    break;

  case 205:
/* Line 868 of glr.c  */
#line 1287 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_test:	not_test\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 206:
/* Line 868 of glr.c  */
#line 1288 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_test: not_test and_seq \n";
								((*yyvalp).tn)=ast->createBooleanNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),AND_OP,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
		  }
    break;

  case 207:
/* Line 868 of glr.c  */
#line 1293 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"not_test:	NOT not_test\n";
							((*yyvalp).tn)=ast->createBooleanNode(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NOT_OP,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
							}
    break;

  case 208:
/* Line 868 of glr.c  */
#line 1296 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"not_test:	comparison\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);cout<<((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn))->getNodeType()<<endl;}
    break;

  case 209:
/* Line 868 of glr.c  */
#line 1299 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() <<"comp_op_seq: comp_op expr \n";
											((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
											lastNode=NULL;
										}
    break;

  case 210:
/* Line 868 of glr.c  */
#line 1304 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() <<"comp_op_seq: comp_op_seq comp_op expr \n";
											((*yyvalp).tn)=ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn),NULL,comp_op,yylval.r.lineNum,yylval.r.colNum);	
										}
    break;

  case 211:
/* Line 868 of glr.c  */
#line 1310 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comparison: expr\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
													//cout<<($<tn>1)->getNodeType()<<" Comp"<<endl;

												}
    break;

  case 212:
/* Line 868 of glr.c  */
#line 1314 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
					Streams::verbose() <<"comparison: expr comp_op_seq\n";
					//cout <<"the comp operand is "<<comp_op<<endl;
						((*yyvalp).tn)=ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,comp_op,yylval.r.lineNum,yylval.r.colNum);
				}
    break;

  case 213:
/* Line 868 of glr.c  */
#line 1321 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {	
				Streams::verbose() <<"comp_op: '<' \n";
				comp_op=LESS;
			}
    break;

  case 214:
/* Line 868 of glr.c  */
#line 1325 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: '>' \n";comp_op=GREATHER;}
    break;

  case 215:
/* Line 868 of glr.c  */
#line 1326 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
					cout<<"enter to equal "<<endl;
					Streams::verbose() <<"comp_op: EQUAL \n";
					comp_op=EQUALS;
					}
    break;

  case 216:
/* Line 868 of glr.c  */
#line 1331 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: MORE_OR_EQUAL \n";comp_op=EQUALGREATHER;}
    break;

  case 217:
/* Line 868 of glr.c  */
#line 1332 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: LESS_OR_EQUAL \n";comp_op=EQUALLESS;}
    break;

  case 218:
/* Line 868 of glr.c  */
#line 1333 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: MORE_LESS \n";}
    break;

  case 219:
/* Line 868 of glr.c  */
#line 1334 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: NOT_EQUAL \n";comp_op=NOTEQUAL;}
    break;

  case 220:
/* Line 868 of glr.c  */
#line 1335 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IN \n";}
    break;

  case 221:
/* Line 868 of glr.c  */
#line 1336 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: NOT IN \n";}
    break;

  case 222:
/* Line 868 of glr.c  */
#line 1337 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IS \n";}
    break;

  case 223:
/* Line 868 of glr.c  */
#line 1338 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IS NOT \n";}
    break;

  case 224:
/* Line 868 of glr.c  */
#line 1341 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"star_expr: '*' expr \n";}
    break;

  case 225:
/* Line 868 of glr.c  */
#line 1344 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_xor_expr_seq: '|' xor_expr \n";}
    break;

  case 226:
/* Line 868 of glr.c  */
#line 1345 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_xor_expr_seq: or_xor_expr_seq '|' xor_expr\n";}
    break;

  case 227:
/* Line 868 of glr.c  */
#line 1347 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
					Streams::verbose() <<"expr: xor_expr\n";
					((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
				}
    break;

  case 228:
/* Line 868 of glr.c  */
#line 1351 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"expr: xor_expr or_xor_expr_seq\n";}
    break;

  case 229:
/* Line 868 of glr.c  */
#line 1354 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"sha_and_expr_seq: '^' and_expr \n";}
    break;

  case 230:
/* Line 868 of glr.c  */
#line 1355 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"sha_and_expr_seq: sha_and_expr_seq '^' and_expr\n";}
    break;

  case 231:
/* Line 868 of glr.c  */
#line 1358 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"xor_expr: and_expr\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 232:
/* Line 868 of glr.c  */
#line 1359 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"xor_expr: and_expr sha_and_expr_seq\n";}
    break;

  case 233:
/* Line 868 of glr.c  */
#line 1362 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_shift_expr_seq: '&' shift_expr \n";}
    break;

  case 234:
/* Line 868 of glr.c  */
#line 1363 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_shift_expr_seq: and_shift_expr_seq '&' shift_expr\n";}
    break;

  case 235:
/* Line 868 of glr.c  */
#line 1366 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_expr: shift_expr\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 236:
/* Line 868 of glr.c  */
#line 1367 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_expr: shift_expr and_shift_expr_seq\n";}
    break;

  case 237:
/* Line 868 of glr.c  */
#line 1370 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	LESS_THAN_2 arith_expr \n";}
    break;

  case 238:
/* Line 868 of glr.c  */
#line 1371 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	MORE_THAN_2 arith_expr \n";}
    break;

  case 239:
/* Line 868 of glr.c  */
#line 1372 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	arith_seq LESS_THAN_2 arith_expr \n";}
    break;

  case 240:
/* Line 868 of glr.c  */
#line 1373 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	arith_seq MORE_THAN_2 arith_expr \n";}
    break;

  case 241:
/* Line 868 of glr.c  */
#line 1376 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"shift_expr: arith_expr\n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 242:
/* Line 868 of glr.c  */
#line 1380 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"shift_expr: arith_expr arith_seq\n";}
    break;

  case 243:
/* Line 868 of glr.c  */
#line 1383 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : '+' term \n";
						op=PLUS;
						//cout<<"op1= "<<op<<endl;
						((*yyvalp).operands)=op;
						//cout<<"op = "<<$<operands>$<<endl;
						((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 244:
/* Line 868 of glr.c  */
#line 1390 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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

  case 245:
/* Line 868 of glr.c  */
#line 1401 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : term_seq '+' term \n";//op=PLUS;
									k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
									((*yyvalp).operands)=PLUS;
									//op=$<operands>$;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,PLUS,yylval.r.lineNum,yylval.r.colNum);
								}
    break;

  case 246:
/* Line 868 of glr.c  */
#line 1407 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : term_seq '-' term \n";//op=MINUS;
									k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
									((*yyvalp).operands)=MINUS;
									//op=$<operands>$;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,MINUS,yylval.r.lineNum,yylval.r.colNum);
								}
    break;

  case 247:
/* Line 868 of glr.c  */
#line 1415 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arith_expr: term\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
									((*yyvalp).operands)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.operands);
							}
    break;

  case 248:
/* Line 868 of glr.c  */
#line 1419 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() <<"arith_expr: term term_seq\n";
											k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
											//cout<<"the value of op is "<<op<<endl;
											((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,PLUS/**op**/,yylval.r.lineNum,yylval.r.colNum);
											
										}
    break;

  case 249:
/* Line 868 of glr.c  */
#line 1429 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '*' factor \n";
							((*yyvalp).operands)=MULT;
							op=((*yyvalp).operands);
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 250:
/* Line 868 of glr.c  */
#line 1434 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '/' factor \n";
								((*yyvalp).operands)=DIV;
								op=((*yyvalp).operands);
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 251:
/* Line 868 of glr.c  */
#line 1439 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '%' factor \n";
								((*yyvalp).operands)=MOD;
								op=((*yyvalp).operands);
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 252:
/* Line 868 of glr.c  */
#line 1444 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: DIV_2 factor \n";}
    break;

  case 253:
/* Line 868 of glr.c  */
#line 1445 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '*' factor \n";
									k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
									op=MULT;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,op,yylval.r.lineNum,yylval.r.colNum);
									}
    break;

  case 254:
/* Line 868 of glr.c  */
#line 1450 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '/' factor \n";
									k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
									op=DIV;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,op,yylval.r.lineNum,yylval.r.colNum);
									}
    break;

  case 255:
/* Line 868 of glr.c  */
#line 1455 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '%' factor \n";
									op=MOD;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,op,yylval.r.lineNum,yylval.r.colNum);
									}
    break;

  case 256:
/* Line 868 of glr.c  */
#line 1459 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq DIV_2 factor \n";}
    break;

  case 257:
/* Line 868 of glr.c  */
#line 1462 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"term: 	factor\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 258:
/* Line 868 of glr.c  */
#line 1463 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"term: 	factor factor_seq\n";
								k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
								((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,op,yylval.r.lineNum,yylval.r.colNum);
							}
    break;

  case 259:
/* Line 868 of glr.c  */
#line 1469 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor: '+' factor \n";
						((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
						
					}
    break;

  case 260:
/* Line 868 of glr.c  */
#line 1473 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor: '-' factor \n";
						int* xx = new int (0);
						k = ast->createTypeNode((void*)xx,0,0,yylval.r.lineNum,yylval.r.colNum,INT);
						//k=ast->addNext(k,$<tn>2);
						((*yyvalp).tn) = ast->createExprNode(k,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,MINUS,yylval.r.lineNum,yylval.r.colNum);
						
						}
    break;

  case 261:
/* Line 868 of glr.c  */
#line 1480 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor: '~' factor \n";}
    break;

  case 262:
/* Line 868 of glr.c  */
#line 1481 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
				 Streams::verbose() <<"factor: power\n";
		         if(!inside_func&&!inside_while_cond){
					visit_num++;
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
							//cout<<"hello world  "<<v->get_name()<<endl;
							lastNode=ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
							//cout<<"last node"<<endl;	
							((*yyvalp).tn)=ast->createCallVarNode(temp_id2.back(),v,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);	
						}
						else
						{
							CallVariableNode* temp = dynamic_cast<CallVariableNode*>((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn));
							temp->set_variable(v);
							((*yyvalp).tn)=temp;
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

  case 263:
/* Line 868 of glr.c  */
#line 1557 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"trailer_seq: trailer \n";
										((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
										visit_num++;
									}
    break;

  case 264:
/* Line 868 of glr.c  */
#line 1561 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"trailer_seq: trailer_seq trailer \n";
										((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
										visit_num++;
									}
    break;

  case 265:
/* Line 868 of glr.c  */
#line 1567 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"power:	atom\n";
							//$<tn>$=ast->createCallVarNode(temp_id2.back(),NULL,NULL,NULL);
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 266:
/* Line 868 of glr.c  */
#line 1571 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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

  case 267:
/* Line 868 of glr.c  */
#line 1582 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"power: atom trailer_seq STAR_2 factor \n";}
    break;

  case 268:
/* Line 868 of glr.c  */
#line 1583 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"power: atom STAR_2 factor \n";}
    break;

  case 269:
/* Line 868 of glr.c  */
#line 1586 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"str_seq:	STRING \n"; cout<<"string is"<<((*yyvalp).r.strVal)<<endl;}
    break;

  case 270:
/* Line 868 of glr.c  */
#line 1587 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"str_seq:	str_seq STRING \n";}
    break;

  case 271:
/* Line 868 of glr.c  */
#line 1590 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'(' ')' \n";}
    break;

  case 272:
/* Line 868 of glr.c  */
#line 1591 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'(' testlist_comp ')' \n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn);cout<<((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn))->getNodeType()<<endl; inside_while_cond = true; arrayvec.clear();}
    break;

  case 273:
/* Line 868 of glr.c  */
#line 1592 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'[' ']' \n";
						arrayvec.clear();
						array_right=true;
						//is_list=true;
						((*yyvalp).tn)=ast->createArrayNode(arrayvec,0,0,yylval.r.lineNum,yylval.r.colNum);
						arr_node=static_cast<ArrayNode*>(((*yyvalp).tn));
				}
    break;

  case 274:
/* Line 868 of glr.c  */
#line 1599 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' '}' \n";}
    break;

  case 275:
/* Line 868 of glr.c  */
#line 1600 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: '[' testlist_comp ']' \n";
									((*yyvalp).tn)=ast->createArrayNode(arrayvec,0,0,yylval.r.lineNum,yylval.r.colNum);
									array_right=true;
									arr_node=static_cast<ArrayNode*>(((*yyvalp).tn));
									//is_list=true;
									arrayvec.clear();
									}
    break;

  case 276:
/* Line 868 of glr.c  */
#line 1607 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' dictorsetmaker '}' \n";}
    break;

  case 277:
/* Line 868 of glr.c  */
#line 1608 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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

  case 278:
/* Line 868 of glr.c  */
#line 1634 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    { Streams::verbose() <<"atom: NAME()\n";
									//temp_id2.push_back($<r.strVal>1);
									visit_num++;
									parameters.clear();
									//cout<<"enter in name()"<<endl;
									((*yyvalp).tn)=ast->createCallTypeNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.r.strVal),parameters,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
									}
    break;

  case 279:
/* Line 868 of glr.c  */
#line 1641 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    { Streams::verbose() <<"atom: NAME\n";
									//temp_id2.push_back($<r.strVal>1);
									visit_num++;
									((*yyvalp).tn)=ast->createCallTypeNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.strVal),parameters/*$<tn>3*/,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
									parameters.clear();
												}
    break;

  case 280:
/* Line 868 of glr.c  */
#line 1647 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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

  case 281:
/* Line 868 of glr.c  */
#line 1658 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_INT "<<(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.intVal)<<endl;;
						int* xx = new int ((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.intVal));
						//cout<<"yhe number is"<<*xx<<endl;
						//cout<<"reference"<<xx<<endl;
						constant=true;
						((*yyvalp).tn) = ast->createTypeNode((void*)xx,0,0,yylval.r.lineNum,yylval.r.colNum,INT);
						//visit_num++;
														}
    break;

  case 282:
/* Line 868 of glr.c  */
#line 1666 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_FLOAT\n"<<(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.floatVal)<<endl;
							constant=true;
							float* x=new float((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.floatVal));
							((*yyvalp).tn) = ast->createTypeNode((void*)x,0,0,yylval.r.lineNum,yylval.r.colNum,FLOAT);
						}
    break;

  case 283:
/* Line 868 of glr.c  */
#line 1671 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_FLOAT\n";
							long *xxx=new long((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.longVal));
							constant=true;
							((*yyvalp).tn) = ast->createTypeNode(&xxx,0,0,yylval.r.lineNum,yylval.r.colNum,LONG);
						}
    break;

  case 284:
/* Line 868 of glr.c  */
#line 1676 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: CHAR_VALUE\n";}
    break;

  case 285:
/* Line 868 of glr.c  */
#line 1677 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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

  case 286:
/* Line 868 of glr.c  */
#line 1686 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DOT_3\n";}
    break;

  case 287:
/* Line 868 of glr.c  */
#line 1687 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: NONE\n";}
    break;

  case 288:
/* Line 868 of glr.c  */
#line 1688 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: TRUE\n";
					int* xx = new int (1);
						//cout<<"yhe number is"<<*xx<<endl;
						//cout<<"reference"<<xx<<endl;
						constant=true;
						((*yyvalp).tn) = ast->createTypeNode((void*)xx,0,0,yylval.r.lineNum,yylval.r.colNum,INT);
				}
    break;

  case 289:
/* Line 868 of glr.c  */
#line 1695 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: FALSE\n";
						int* xx = new int (0);
						//cout<<"yhe number is"<<*xx<<endl;
						//cout<<"reference"<<xx<<endl;
						constant=true;
						((*yyvalp).tn) = ast->createTypeNode((void*)xx,0,0,yylval.r.lineNum,yylval.r.colNum,INT);
				}
    break;

  case 290:
/* Line 868 of glr.c  */
#line 1704 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: ',' test\n";
							arrayvec.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
							
							}
    break;

  case 291:
/* Line 868 of glr.c  */
#line 1708 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: ',' star_expr\n";}
    break;

  case 292:
/* Line 868 of glr.c  */
#line 1709 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: comma_test_star_seq ',' test\n";
														arrayvec.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
													}
    break;

  case 293:
/* Line 868 of glr.c  */
#line 1712 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: comma_test_star_seq ',' star_expr\n";}
    break;

  case 294:
/* Line 868 of glr.c  */
#line 1715 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test comp_for\n";}
    break;

  case 295:
/* Line 868 of glr.c  */
#line 1716 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test\n"; ((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
								arrayvec.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn));
							}
    break;

  case 296:
/* Line 868 of glr.c  */
#line 1719 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test   comma_test_star_seq\n";
												((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
												arrayvec.insert(arrayvec.begin(),(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn));
											}
    break;

  case 297:
/* Line 868 of glr.c  */
#line 1723 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 298:
/* Line 868 of glr.c  */
#line 1724 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";
													arrayvec.insert(arrayvec.begin(),(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn));
												}
    break;

  case 299:
/* Line 868 of glr.c  */
#line 1727 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 300:
/* Line 868 of glr.c  */
#line 1728 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 301:
/* Line 868 of glr.c  */
#line 1729 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 302:
/* Line 868 of glr.c  */
#line 1730 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 303:
/* Line 868 of glr.c  */
#line 1731 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 304:
/* Line 868 of glr.c  */
#line 1735 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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

  case 305:
/* Line 868 of glr.c  */
#line 1747 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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

  case 306:
/* Line 868 of glr.c  */
#line 1766 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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

  case 307:
/* Line 868 of glr.c  */
#line 1786 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
												Streams::verbose() <<"trailer:	'[' subscriptlist ']'\n";
												((*yyvalp).tn)=ast->createArrayElementNode(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
												dotvec.push_back(((*yyvalp).tn));
											}
    break;

  case 308:
/* Line 868 of glr.c  */
#line 1795 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_subscript_seq: ',' subscript\n";}
    break;

  case 309:
/* Line 868 of glr.c  */
#line 1796 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_subscript_seq: comma_subscript_seq ',' subscript\n";}
    break;

  case 310:
/* Line 868 of glr.c  */
#line 1799 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 311:
/* Line 868 of glr.c  */
#line 1800 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript comma_subscript_seq\n";
													((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
												}
    break;

  case 312:
/* Line 868 of glr.c  */
#line 1803 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript  ','\n";}
    break;

  case 313:
/* Line 868 of glr.c  */
#line 1804 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript comma_subscript_seq ','\n";
															((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn));
														}
    break;

  case 314:
/* Line 868 of glr.c  */
#line 1809 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 315:
/* Line 868 of glr.c  */
#line 1810 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':'\n";}
    break;

  case 316:
/* Line 868 of glr.c  */
#line 1811 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript: test ':'\n";
							((*yyvalp).tn)=ast->createSubscriptNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),NULL,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
						}
    break;

  case 317:
/* Line 868 of glr.c  */
#line 1814 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' test\n";
								((*yyvalp).tn)=ast->createSubscriptNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
							}
    break;

  case 318:
/* Line 868 of glr.c  */
#line 1817 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' sliceop\n";}
    break;

  case 319:
/* Line 868 of glr.c  */
#line 1818 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' test sliceop\n";}
    break;

  case 320:
/* Line 868 of glr.c  */
#line 1819 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' test\n";
								((*yyvalp).tn)=ast->createSubscriptNode(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
						}
    break;

  case 321:
/* Line 868 of glr.c  */
#line 1822 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' sliceop\n";}
    break;

  case 322:
/* Line 868 of glr.c  */
#line 1823 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' test sliceop\n";}
    break;

  case 323:
/* Line 868 of glr.c  */
#line 1826 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"sliceop: ':'\n";}
    break;

  case 324:
/* Line 868 of glr.c  */
#line 1827 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"sliceop: ':' test\n";}
    break;

  case 325:
/* Line 868 of glr.c  */
#line 1830 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	',' expr \n";
										((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
										if(call_func){
												func_call.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));	
												//expnode=NULL;
									}
									}
    break;

  case 326:
/* Line 868 of glr.c  */
#line 1837 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	',' star_expr \n";}
    break;

  case 327:
/* Line 868 of glr.c  */
#line 1838 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	comma_expr_star_seq ',' expr \n";
															
															if(call_func){
												//cout<<"here1"<<endl;
												func_call.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
												//expnode=NULL;
											}
															((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
														}
    break;

  case 328:
/* Line 868 of glr.c  */
#line 1847 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	comma_expr_star_seq ',' star_expr \n";}
    break;

  case 329:
/* Line 868 of glr.c  */
#line 1850 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr \n";
						((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						if(call_func){
								
								func_call.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn));	
								//expnode=NULL;
						}
					}
    break;

  case 330:
/* Line 868 of glr.c  */
#line 1858 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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

  case 331:
/* Line 868 of glr.c  */
#line 1869 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr \n";}
    break;

  case 332:
/* Line 868 of glr.c  */
#line 1870 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr comma_expr_star_seq \n";}
    break;

  case 333:
/* Line 868 of glr.c  */
#line 1871 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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

  case 334:
/* Line 868 of glr.c  */
#line 1881 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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

  case 335:
/* Line 868 of glr.c  */
#line 1891 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr ',' \n";}
    break;

  case 336:
/* Line 868 of glr.c  */
#line 1892 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr  comma_expr_star_seq ',' \n";}
    break;

  case 337:
/* Line 868 of glr.c  */
#line 1895 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test: ',' test \n";}
    break;

  case 338:
/* Line 868 of glr.c  */
#line 1896 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"',' test comma_test \n";}
    break;

  case 339:
/* Line 868 of glr.c  */
#line 1899 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	test \n";}
    break;

  case 340:
/* Line 868 of glr.c  */
#line 1900 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	test comma_test \n";}
    break;

  case 341:
/* Line 868 of glr.c  */
#line 1901 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	 test ','\n";}
    break;

  case 342:
/* Line 868 of glr.c  */
#line 1902 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	 test comma_test ','\n";}
    break;

  case 343:
/* Line 868 of glr.c  */
#line 1905 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_colon_test_seq:  ',' test ':' test \n";}
    break;

  case 344:
/* Line 868 of glr.c  */
#line 1906 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_colon_test_seq: comma_test_colon_test_seq ',' test ':' test\n";}
    break;

  case 345:
/* Line 868 of glr.c  */
#line 1908 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_seq: ',' test \n";}
    break;

  case 346:
/* Line 868 of glr.c  */
#line 1909 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_seq: comma_test_seq ',' test \n";}
    break;

  case 347:
/* Line 868 of glr.c  */
#line 1912 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comp_for \n";}
    break;

  case 348:
/* Line 868 of glr.c  */
#line 1913 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test \n";}
    break;

  case 349:
/* Line 868 of glr.c  */
#line 1914 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test ',' \n";}
    break;

  case 350:
/* Line 868 of glr.c  */
#line 1915 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comma_test_colon_test_seq \n";}
    break;

  case 351:
/* Line 868 of glr.c  */
#line 1916 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comma_test_colon_test_seq ','\n";}
    break;

  case 352:
/* Line 868 of glr.c  */
#line 1917 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test comp_for\n";}
    break;

  case 353:
/* Line 868 of glr.c  */
#line 1918 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test\n";}
    break;

  case 354:
/* Line 868 of glr.c  */
#line 1919 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ','\n";}
    break;

  case 355:
/* Line 868 of glr.c  */
#line 1920 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ','\n";}
    break;

  case 356:
/* Line 868 of glr.c  */
#line 1921 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test comma_test_seq ','\n";}
    break;

  case 357:
/* Line 868 of glr.c  */
#line 1923 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
								Streams::verbose() <<"classdef: classheader ':' suite\n";
								((*yyvalp).type)=p->finishTypeDeclaration(t);
								((*yyvalp).tn)=ast->createClassNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.type),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
							}
    break;

  case 358:
/* Line 868 of glr.c  */
#line 1928 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
								Streams::verbose() <<"classdef: classheader error suite\n";
								((*yyvalp).type)=p->finishTypeDeclaration(t);
								((*yyvalp).tn)=ast->createClassNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.type),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
							}
    break;

  case 359:
/* Line 868 of glr.c  */
#line 1934 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
								Streams::verbose() << "class_h: CLASS NAME \n";
								colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);

								inhertance_list.clear();
					}
    break;

  case 360:
/* Line 868 of glr.c  */
#line 1942 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
									Streams::verbose() << "class_h: access_modef CLASS NAME \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 361:
/* Line 868 of glr.c  */
#line 1949 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
									Streams::verbose() << "class_h: STATIC CLASS NAME \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 362:
/* Line 868 of glr.c  */
#line 1956 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
									Streams::verbose() << "class_h: FINAL CLASS NAME \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 363:
/* Line 868 of glr.c  */
#line 1963 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: STATIC FINAL CLASS NAME \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 364:
/* Line 868 of glr.c  */
#line 1970 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 1977 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: FINAL access_modef CLASS NAME \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 366:
/* Line 868 of glr.c  */
#line 1984 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: STATIC access_modef CLASS NAME \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 367:
/* Line 868 of glr.c  */
#line 1991 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS NAME \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 368:
/* Line 868 of glr.c  */
#line 1998 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 2005 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: access_modef STATIC CLASS NAME \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 370:
/* Line 868 of glr.c  */
#line 2012 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: access_modef FINAL CLASS NAME \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 371:
/* Line 868 of glr.c  */
#line 2019 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS NAME \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 372:
/* Line 868 of glr.c  */
#line 2026 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 2033 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 2040 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 2047 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
										Streams::verbose() << "class_h: CLASS NAME OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
									t=((*yyvalp).type);
									inhertance_list.clear();
									temp_id="";
									acc_mod="";
								}
    break;

  case 376:
/* Line 868 of glr.c  */
#line 2055 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: access_modef CLASS NAME OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 377:
/* Line 868 of glr.c  */
#line 2062 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: STATIC CLASS NAME OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 378:
/* Line 868 of glr.c  */
#line 2069 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: FINAL CLASS NAME OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 379:
/* Line 868 of glr.c  */
#line 2076 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL CLASS NAME OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 380:
/* Line 868 of glr.c  */
#line 2083 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 2090 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC access_modef CLASS NAME OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.colNum)+1)); 
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 382:
/* Line 868 of glr.c  */
#line 2097 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: FINAL access_modef CLASS NAME OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 383:
/* Line 868 of glr.c  */
#line 2104 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS NAME OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 384:
/* Line 868 of glr.c  */
#line 2111 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 2118 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC CLASS NAME OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.colNum)+1)); 
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 386:
/* Line 868 of glr.c  */
#line 2125 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef FINAL CLASS NAME OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 387:
/* Line 868 of glr.c  */
#line 2132 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS NAME OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 388:
/* Line 868 of glr.c  */
#line 2139 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 2146 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 2153 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 2160 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
														Streams::verbose() << "class_h: CLASS NAME OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
												((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
												acc_mod="";
											}
    break;

  case 392:
/* Line 868 of glr.c  */
#line 2167 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
																Streams::verbose() << "class_h: access_modef CLASS NAME OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 393:
/* Line 868 of glr.c  */
#line 2174 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: STATIC CLASS NAME OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 394:
/* Line 868 of glr.c  */
#line 2181 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: FINAL CLASS NAME OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 395:
/* Line 868 of glr.c  */
#line 2188 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
																	Streams::verbose() << "class_h: STATIC FINAL CLASS NAME OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 396:
/* Line 868 of glr.c  */
#line 2195 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 2202 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
																		Streams::verbose() << "class_h: STATIC access_modef CLASS NAME OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 398:
/* Line 868 of glr.c  */
#line 2209 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
																	Streams::verbose() << "class_h: FINAL access_modef CLASS NAME OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 399:
/* Line 868 of glr.c  */
#line 2216 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS NAME OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 400:
/* Line 868 of glr.c  */
#line 2223 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 2230 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS NAME '(' arglist ')' ':' \n";}
    break;

  case 402:
/* Line 868 of glr.c  */
#line 2231 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS NAME '(' arglist ')' ':' \n";}
    break;

  case 403:
/* Line 868 of glr.c  */
#line 2232 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS NAME OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 404:
/* Line 868 of glr.c  */
#line 2239 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 2246 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 2253 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 2263 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arg_comma_seq : argument ','\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 408:
/* Line 868 of glr.c  */
#line 2264 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arg_comma_seq : arg_comma_seq argument ',' \n";
													//$<tn>$=ast->addNext($<tn>1,$<tn>2);
											}
    break;

  case 409:
/* Line 868 of glr.c  */
#line 2269 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_arg_seq:	',' argument\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 410:
/* Line 868 of glr.c  */
#line 2270 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_arg_seq:	comma_arg_seq ',' argument\n";
													((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn));
												}
    break;

  case 411:
/* Line 868 of glr.c  */
#line 2277 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: argument\n";
					((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
					}
    break;

  case 412:
/* Line 868 of glr.c  */
#line 2280 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: default_arg\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 413:
/* Line 868 of glr.c  */
#line 2282 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: argument ','\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 414:
/* Line 868 of glr.c  */
#line 2284 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {    
						std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal));
							std::string erro("*" + tempstr);
							char *cstr = new char[erro.length() + 1];
							strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
								amer_par.push_back(my_node);
						
						Streams::verbose() <<"arglist: '*' test\n";
				   }
    break;

  case 415:
/* Line 868 of glr.c  */
#line 2294 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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

  case 416:
/* Line 868 of glr.c  */
#line 2309 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
		 								std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.strVal));
							std::string erro("*" + tempstr);
							char *cstr = new char[erro.length() + 1];
							strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
								amer_par.push_back(my_node);
										
										Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";
								 }
    break;

  case 417:
/* Line 868 of glr.c  */
#line 2319 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 2329 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
		 													std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.strVal));
							std::string erro("*" + tempstr);
							char *cstr = new char[erro.length() + 1];
							strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
								amer_par.push_back(my_node);
															Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";
													   }
    break;

  case 419:
/* Line 868 of glr.c  */
#line 2338 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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

  case 420:
/* Line 868 of glr.c  */
#line 2354 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
						std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("**" + tempstr);
										char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
							amer_par.push_back(my_node);
							Streams::verbose() <<"arglist: STAR_2 test\n";
					  }
    break;

  case 421:
/* Line 868 of glr.c  */
#line 2363 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq argument\n";
												//$<tn>$=ast->addNext($<tn>1,$<tn>2);
								}
    break;

  case 422:
/* Line 868 of glr.c  */
#line 2366 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq default_arg\n";}
    break;

  case 423:
/* Line 868 of glr.c  */
#line 2367 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq default_arg_comma_seq default_arg\n";}
    break;

  case 424:
/* Line 868 of glr.c  */
#line 2368 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq argument ','\n";}
    break;

  case 425:
/* Line 868 of glr.c  */
#line 2370 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {		
									std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal));
							std::string erro("*" + tempstr);
							char *cstr = new char[erro.length() + 1];
							strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
								amer_par.push_back(my_node);
									Streams::verbose() <<"arglist: arg_comma_seq '*' test\n";
								  }
    break;

  case 426:
/* Line 868 of glr.c  */
#line 2379 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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

  case 427:
/* Line 868 of glr.c  */
#line 2396 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
												
												std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.r.strVal));
							std::string erro("*" + tempstr);
							char *cstr = new char[erro.length() + 1];
							strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
								amer_par.push_back(my_node);
												Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq\n";
											   }
    break;

  case 428:
/* Line 868 of glr.c  */
#line 2406 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
														std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.r.strVal));
							std::string erro("*" + tempstr);
							char *cstr = new char[erro.length() + 1];
							strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
								amer_par.push_back(my_node);
														Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_default_arg_seq\n";
													   }
    break;

  case 429:
/* Line 868 of glr.c  */
#line 2415 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
																		std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.r.strVal));
							std::string erro("*" + tempstr);
							char *cstr = new char[erro.length() + 1];
							strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
								amer_par.push_back(my_node);
																		Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq comma_default_arg_seq\n";
																	 }
    break;

  case 430:
/* Line 868 of glr.c  */
#line 2424 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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

  case 431:
/* Line 868 of glr.c  */
#line 2441 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {	std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("**" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
											amer_par.push_back(my_node);
										Streams::verbose() <<"arglist: arg_comma_seq STAR_2 test\n";
								    }
    break;

  case 432:
/* Line 868 of glr.c  */
#line 2448 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: default_arg_comma_seq default_arg\n";}
    break;

  case 433:
/* Line 868 of glr.c  */
#line 2452 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_default_arg_seq: ',' default_arg\n";}
    break;

  case 434:
/* Line 868 of glr.c  */
#line 2453 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_default_arg_seq: comma_default_arg_seq ',' default_arg\n";}
    break;

  case 435:
/* Line 868 of glr.c  */
#line 2456 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"default_arg_comma_seq: default_arg ','\n";}
    break;

  case 436:
/* Line 868 of glr.c  */
#line 2457 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"default_arg_comma_seq: default_arg_comma_seq default_arg ','\n";}
    break;

  case 437:
/* Line 868 of glr.c  */
#line 2459 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
					Streams::verbose() <<"in_default: '='\n";
					in_def=true;
					((*yyvalp).tn) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);
				}
    break;

  case 438:
/* Line 868 of glr.c  */
#line 2465 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {parameters.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.r.strVal));Streams::verbose() <<"default_arg: test in_default test\n";
							Node* o=ast->createAssignNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
							((*yyvalp).tn)=ast->addNext(my_node,o);
							amer_par.push_back(((*yyvalp).tn));
							df_par.push_back(((*yyvalp).tn));
							in_def=false;
							}
    break;

  case 439:
/* Line 868 of glr.c  */
#line 2473 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {parameters.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal)); Streams::verbose() <<"argument: 	test\n";
					((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn); 
					if(strcmp((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal),"self")!=0)
						amer_par.push_back(my_node);
					}
    break;

  case 440:
/* Line 868 of glr.c  */
#line 2478 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {parameters.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.r.strVal));Streams::verbose() <<"argument: 	test comp_for\n";
					((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn); 
			}
    break;

  case 441:
/* Line 868 of glr.c  */
#line 2484 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_iter:  comp_for\n";}
    break;

  case 442:
/* Line 868 of glr.c  */
#line 2485 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_iter:  comp_if\n";}
    break;

  case 443:
/* Line 868 of glr.c  */
#line 2488 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_for: 	FOR exprlist IN or_test\n";}
    break;

  case 444:
/* Line 868 of glr.c  */
#line 2489 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_for: FOR exprlist IN or_test comp_iter\n";}
    break;

  case 445:
/* Line 868 of glr.c  */
#line 2492 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_if: IF or_test\n";}
    break;

  case 446:
/* Line 868 of glr.c  */
#line 2493 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_if: IF or_test comp_iter\n";}
    break;


/* Line 868 of glr.c  */
#line 6366 "yacc.cpp"
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
  (!!((Yystate) == (-445)))

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
  (!!((Yytable_value) == (-425)))

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
#line 2496 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"

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
	system("pause");

}
#endif;