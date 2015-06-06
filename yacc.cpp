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
#define YYLAST   1372

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  113
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  112
/* YYNRULES -- Number of rules.  */
#define YYNRULES  428
/* YYNRULES -- Number of states.  */
#define YYNSTATES  759
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
       0,     0,     3,     5,     9,    11,    14,    16,    19,    26,
      34,    39,    45,    53,    61,    67,    73,    82,    91,    98,
     105,   114,   123,   130,   137,   147,   157,   165,   173,   182,
     191,   198,   205,   215,   225,   233,   241,   251,   261,   269,
     277,   279,   283,   286,   288,   290,   293,   295,   297,   299,
     301,   303,   305,   307,   309,   316,   321,   323,   325,   327,
     331,   333,   335,   338,   341,   345,   348,   351,   353,   356,
     358,   361,   363,   367,   370,   373,   376,   379,   381,   383,
     385,   387,   389,   391,   393,   395,   397,   399,   401,   403,
     405,   407,   409,   411,   414,   417,   419,   421,   423,   425,
     427,   429,   432,   434,   436,   439,   442,   446,   448,   451,
     453,   457,   459,   462,   465,   469,   472,   476,   479,   483,
     486,   490,   492,   494,   496,   498,   500,   502,   505,   508,
     512,   516,   520,   525,   530,   535,   540,   546,   552,   557,
     562,   568,   574,   580,   586,   589,   593,   597,   600,   603,
     607,   612,   618,   622,   625,   631,   635,   641,   650,   653,
     656,   660,   667,   673,   678,   681,   685,   690,   693,   697,
     702,   708,   710,   714,   716,   719,   724,   726,   729,   732,
     734,   736,   742,   745,   749,   751,   754,   757,   761,   763,
     766,   769,   771,   774,   778,   780,   783,   785,   787,   789,
     791,   793,   795,   797,   799,   802,   804,   807,   810,   813,
     817,   819,   822,   825,   829,   831,   834,   837,   841,   843,
     846,   849,   852,   856,   860,   862,   865,   868,   871,   875,
     879,   881,   884,   887,   890,   893,   896,   900,   904,   908,
     912,   914,   917,   920,   923,   926,   928,   930,   933,   935,
     938,   943,   947,   949,   952,   955,   959,   962,   965,   969,
     973,   975,   979,   984,   989,   991,   993,   995,   997,   999,
    1001,  1003,  1005,  1007,  1010,  1013,  1017,  1021,  1024,  1026,
    1029,  1032,  1036,  1039,  1041,  1044,  1047,  1051,  1054,  1059,
    1065,  1071,  1074,  1078,  1080,  1083,  1086,  1090,  1092,  1094,
    1097,  1101,  1105,  1110,  1113,  1116,  1120,  1122,  1125,  1128,
    1131,  1135,  1139,  1141,  1144,  1146,  1149,  1152,  1156,  1159,
    1163,  1166,  1170,  1172,  1175,  1178,  1182,  1187,  1193,  1196,
    1200,  1205,  1209,  1214,  1219,  1225,  1228,  1230,  1233,  1236,
    1240,  1243,  1247,  1252,  1257,  1262,  1268,  1274,  1280,  1286,
    1293,  1300,  1306,  1312,  1319,  1326,  1333,  1340,  1346,  1353,
    1360,  1367,  1375,  1383,  1391,  1399,  1408,  1417,  1425,  1433,
    1442,  1451,  1460,  1469,  1476,  1484,  1492,  1500,  1509,  1518,
    1527,  1536,  1546,  1556,  1565,  1574,  1584,  1594,  1604,  1614,
    1617,  1621,  1624,  1628,  1630,  1632,  1635,  1638,  1644,  1648,
    1652,  1657,  1664,  1667,  1670,  1673,  1677,  1681,  1685,  1692,
    1697,  1702,  1708,  1716,  1720,  1723,  1726,  1730,  1733,  1737,
    1740,  1743,  1745,  1748,  1750,  1752,  1757,  1763,  1766
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const short int yyrhs[] =
{
     114,     0,    -1,   115,    -1,   140,   101,   116,    -1,   116,
      -1,   212,   116,    -1,   212,    -1,   118,   170,    -1,    15,
      44,   120,    24,   171,   102,    -1,    15,   132,    44,   120,
      24,   171,   102,    -1,    15,    44,   120,   102,    -1,    15,
     132,    44,   120,   102,    -1,    15,    13,    44,   120,    24,
     171,   102,    -1,    15,    12,    44,   120,    24,   171,   102,
      -1,    15,    13,    44,   120,   102,    -1,    15,    12,    44,
     120,   102,    -1,    15,    13,    12,    44,   120,    24,   171,
     102,    -1,    15,    12,    13,    44,   120,    24,   171,   102,
      -1,    15,    13,    12,    44,   120,   102,    -1,    15,    12,
      13,    44,   120,   102,    -1,    15,    12,   132,    44,   120,
      24,   171,   102,    -1,    15,    13,   132,    44,   120,    24,
     171,   102,    -1,    15,    13,   132,    44,   120,   102,    -1,
      15,    12,   132,    44,   120,   102,    -1,    15,    13,    12,
     132,    44,   120,    24,   171,   102,    -1,    15,    12,    13,
     132,    44,   120,    24,   171,   102,    -1,    15,    13,    12,
     132,    44,   120,   102,    -1,    15,    12,    13,   132,    44,
     120,   102,    -1,    15,   132,    13,    44,   120,    24,   171,
     102,    -1,    15,   132,    12,    44,   120,    24,   171,   102,
      -1,    15,   132,    13,    44,   120,   102,    -1,    15,   132,
      12,    44,   120,   102,    -1,    15,   132,    13,    12,    44,
     120,    24,   171,   102,    -1,    15,   132,    12,    13,    44,
     120,    24,   171,   102,    -1,    15,   132,    13,    12,    44,
     120,   102,    -1,    15,   132,    12,    13,    44,   120,   102,
      -1,    15,    13,   132,    12,    44,   120,    24,   171,   102,
      -1,    15,    12,   132,    13,    44,   120,    24,   171,   102,
      -1,    15,    13,   132,    12,    44,   120,   102,    -1,    15,
      12,   132,    13,    44,   120,   102,    -1,    92,    -1,   119,
     216,   103,    -1,    92,   103,    -1,   122,    -1,   150,    -1,
     123,   101,    -1,   126,    -1,   134,    -1,   135,    -1,   136,
      -1,   140,    -1,   148,    -1,   149,    -1,   133,    -1,    53,
      92,   196,    91,   125,   103,    -1,    53,    92,   125,   103,
      -1,    54,    -1,    55,    -1,    56,    -1,   128,   131,   208,
      -1,   128,    -1,   151,    -1,   151,   127,    -1,   128,   127,
      -1,   104,   128,   127,    -1,   104,   128,    -1,   104,   124,
      -1,   130,    -1,   130,    91,    -1,    91,    -1,   171,   130,
      -1,   171,    -1,   180,   130,    91,    -1,   180,    91,    -1,
      91,   171,    -1,    91,   180,    -1,   130,   129,    -1,   129,
      -1,    26,    -1,    27,    -1,    58,    -1,    28,    -1,    29,
      -1,    30,    -1,    31,    -1,    32,    -1,    33,    -1,    34,
      -1,    35,    -1,    36,    -1,    61,    -1,    62,    -1,    63,
      -1,    52,   206,    -1,    50,   206,    -1,    73,    -1,   137,
      -1,   138,    -1,   139,    -1,    75,    -1,    76,    -1,    51,
     208,    -1,    51,    -1,   141,    -1,     4,   143,    -1,    91,
     144,    -1,   142,    91,   144,    -1,   144,    -1,   144,   142,
      -1,   145,    -1,   145,    47,    44,    -1,    44,    -1,    44,
     146,    -1,   105,    44,    -1,   146,   105,    44,    -1,    91,
      44,    -1,   147,    91,    44,    -1,    57,    44,    -1,    57,
      44,   147,    -1,    25,    44,    -1,    25,    44,   147,    -1,
     155,    -1,   157,    -1,   159,    -1,   162,    -1,   166,    -1,
     117,    -1,    15,   212,    -1,    15,    44,    -1,    15,   132,
      44,    -1,    15,    13,    44,    -1,    15,    12,    44,    -1,
      15,    13,    12,    44,    -1,    15,    12,    13,    44,    -1,
      15,    13,   132,    44,    -1,    15,    12,   132,    44,    -1,
      15,    13,    12,   132,    44,    -1,    15,    12,    13,   132,
      44,    -1,    15,   132,    13,    44,    -1,    15,   132,    12,
      44,    -1,    15,   132,    13,    12,    44,    -1,    15,   132,
      12,    13,    44,    -1,    15,    13,   132,    12,    44,    -1,
      15,    12,   132,    13,    44,    -1,   153,   170,    -1,   152,
     153,   170,    -1,    18,   171,   102,    -1,    16,   102,    -1,
     156,   170,    -1,   156,   170,   152,    -1,   156,   170,   154,
     170,    -1,   156,   170,   152,   154,   170,    -1,    17,   171,
     102,    -1,   158,   170,    -1,   158,   170,    16,   102,   170,
      -1,    19,   171,   102,    -1,   160,    21,   208,   102,   170,
      -1,   160,    21,   208,   102,   170,    16,   102,   170,    -1,
      20,   206,    -1,    22,   102,    -1,   161,   170,   164,    -1,
     161,   170,   164,    16,   102,   170,    -1,   161,   170,   164,
     163,   170,    -1,   161,   170,   163,   170,    -1,    23,   102,
      -1,   168,   102,   170,    -1,   164,   168,   102,   170,    -1,
      91,   167,    -1,   165,    91,   167,    -1,    46,   167,   102,
     170,    -1,    46,   167,   165,   102,   170,    -1,   171,    -1,
     171,    47,   182,    -1,    72,    -1,    72,   171,    -1,    72,
     171,    47,    44,    -1,   121,    -1,   169,   121,    -1,   169,
       6,    -1,     6,    -1,   173,    -1,   173,    17,   173,    16,
     171,    -1,     8,   175,    -1,   172,     8,   175,    -1,   175,
      -1,   175,   172,    -1,     9,   176,    -1,   174,     9,   176,
      -1,   176,    -1,   176,   174,    -1,    10,   176,    -1,   178,
      -1,   179,   182,    -1,   177,   179,   182,    -1,   182,    -1,
     182,   177,    -1,    94,    -1,    95,    -1,    49,    -1,    71,
      -1,    70,    -1,    37,    -1,    11,    -1,    21,    -1,    10,
      21,    -1,    68,    -1,    68,    10,    -1,    98,   182,    -1,
     106,   184,    -1,   181,   106,   184,    -1,   184,    -1,   184,
     181,    -1,   107,   186,    -1,   183,   107,   186,    -1,   186,
      -1,   186,   183,    -1,   108,   188,    -1,   185,   108,   188,
      -1,   188,    -1,   188,   185,    -1,    59,   190,    -1,    65,
     190,    -1,   187,    59,   190,    -1,   187,    65,   190,    -1,
     190,    -1,   190,   187,    -1,    96,   192,    -1,    97,   192,
      -1,   189,    96,   192,    -1,   189,    97,   192,    -1,   192,
      -1,   192,   189,    -1,    98,   193,    -1,    99,   193,    -1,
     100,   193,    -1,    69,   193,    -1,   191,    98,   193,    -1,
     191,    99,   193,    -1,   191,   100,   193,    -1,   191,    69,
     193,    -1,   193,    -1,   193,   191,    -1,    96,   193,    -1,
      97,   193,    -1,   109,   193,    -1,   195,    -1,   200,    -1,
     194,   200,    -1,   197,    -1,   197,   194,    -1,   197,   194,
      40,   193,    -1,   197,    40,   193,    -1,    66,    -1,   196,
      66,    -1,    92,   103,    -1,    92,   199,   103,    -1,    93,
     110,    -1,   111,   112,    -1,    93,   199,   110,    -1,   111,
     211,   112,    -1,    44,    -1,    44,    92,   103,    -1,    44,
      92,   206,   103,    -1,    44,    93,   202,   110,    -1,    41,
      -1,    43,    -1,    42,    -1,    74,    -1,   196,    -1,    45,
      -1,    67,    -1,    39,    -1,    38,    -1,    91,   171,    -1,
      91,   180,    -1,   198,    91,   171,    -1,   198,    91,   180,
      -1,   171,   223,    -1,   171,    -1,   171,   198,    -1,   171,
      91,    -1,   171,   198,    91,    -1,   180,   223,    -1,   180,
      -1,   180,   198,    -1,   180,    91,    -1,   180,   198,    91,
      -1,   105,    44,    -1,   105,    44,    92,   103,    -1,   105,
      44,   119,   206,   103,    -1,   105,    44,    93,   202,   110,
      -1,    91,   203,    -1,   201,    91,   203,    -1,   203,    -1,
     203,   201,    -1,   203,    91,    -1,   203,   201,    91,    -1,
     171,    -1,   102,    -1,   171,   102,    -1,   171,   102,   171,
      -1,   171,   102,   204,    -1,   171,   102,   171,   204,    -1,
     102,   171,    -1,   102,   204,    -1,   102,   171,   204,    -1,
     102,    -1,   102,   171,    -1,    91,   182,    -1,    91,   180,
      -1,   205,    91,   182,    -1,   205,    91,   180,    -1,   182,
      -1,   182,   205,    -1,   180,    -1,   180,   205,    -1,   182,
      91,    -1,   182,   205,    91,    -1,   180,    91,    -1,   180,
     205,    91,    -1,    91,   171,    -1,    91,   171,   207,    -1,
     171,    -1,   171,   207,    -1,   171,    91,    -1,   171,   207,
      91,    -1,    91,   171,   102,   171,    -1,   209,    91,   171,
     102,   171,    -1,    91,   171,    -1,   210,    91,   171,    -1,
     171,   102,   171,   223,    -1,   171,   102,   171,    -1,   171,
     102,   171,    91,    -1,   171,   102,   171,   209,    -1,   171,
     102,   171,   209,    91,    -1,   171,   223,    -1,   171,    -1,
     171,    91,    -1,   171,   210,    -1,   171,   210,    91,    -1,
     213,   170,    -1,     5,    44,   102,    -1,   132,     5,    44,
     102,    -1,    13,     5,    44,   102,    -1,    12,     5,    44,
     102,    -1,    13,    12,     5,    44,   102,    -1,    12,    13,
       5,    44,   102,    -1,    12,   132,     5,    44,   102,    -1,
      13,   132,     5,    44,   102,    -1,    13,    12,   132,     5,
      44,   102,    -1,    12,    13,   132,     5,    44,   102,    -1,
     132,    13,     5,    44,   102,    -1,   132,    12,     5,    44,
     102,    -1,   132,    13,    12,     5,    44,   102,    -1,   132,
      12,    13,     5,    44,   102,    -1,    13,   132,    12,     5,
      44,   102,    -1,    12,   132,    13,     5,    44,   102,    -1,
       5,    44,    92,   103,   102,    -1,   132,     5,    44,    92,
     103,   102,    -1,    13,     5,    44,    92,   103,   102,    -1,
      12,     5,    44,    92,   103,   102,    -1,    13,    12,     5,
      44,    92,   103,   102,    -1,    12,    13,     5,    44,    92,
     103,   102,    -1,    13,   132,     5,    44,    92,   103,   102,
      -1,    12,   132,     5,    44,    92,   103,   102,    -1,    13,
      12,   132,     5,    44,    92,   103,   102,    -1,    12,    13,
     132,     5,    44,    92,   103,   102,    -1,   132,    13,     5,
      44,    92,   103,   102,    -1,   132,    12,     5,    44,    92,
     103,   102,    -1,   132,    13,    12,     5,    44,    92,   103,
     102,    -1,   132,    12,    13,     5,    44,    92,   103,   102,
      -1,    13,   132,    12,     5,    44,    92,   103,   102,    -1,
      12,   132,    13,     5,    44,    92,   103,   102,    -1,     5,
      44,    92,   143,   103,   102,    -1,   132,     5,    44,    92,
     143,   103,   102,    -1,    13,     5,    44,    92,   143,   103,
     102,    -1,    12,     5,    44,    92,   143,   103,   102,    -1,
      13,    12,     5,    44,    92,   143,   103,   102,    -1,    12,
      13,     5,    44,    92,   143,   103,   102,    -1,    13,   132,
       5,    44,    92,   143,   103,   102,    -1,    12,   132,     5,
      44,    92,   143,   103,   102,    -1,    13,    12,   132,     5,
      44,    92,   143,   103,   102,    -1,    12,    13,   132,     5,
      44,    92,   143,   103,   102,    -1,   132,    13,     5,    44,
      92,   143,   103,   102,    -1,   132,    12,     5,    44,    92,
     143,   103,   102,    -1,   132,    13,    12,     5,    44,    92,
     143,   103,   102,    -1,   132,    12,    13,     5,    44,    92,
     143,   103,   102,    -1,    13,   132,    12,     5,    44,    92,
     143,   103,   102,    -1,    12,   132,    13,     5,    44,    92,
     143,   103,   102,    -1,   221,    91,    -1,   214,   221,    91,
      -1,    91,   221,    -1,   215,    91,   221,    -1,   221,    -1,
     220,    -1,   221,    91,    -1,    98,   171,    -1,    98,   171,
      91,    40,   171,    -1,    98,   171,   215,    -1,    98,   171,
     217,    -1,    98,   171,   215,   217,    -1,    98,   171,   215,
      91,    40,   171,    -1,    40,   171,    -1,   214,   221,    -1,
     214,   220,    -1,   214,   218,   220,    -1,   214,   221,    91,
      -1,   214,    98,   171,    -1,   214,    98,   171,    91,    40,
     171,    -1,   214,    98,   171,   215,    -1,   214,    98,   171,
     217,    -1,   214,    98,   171,   215,   217,    -1,   214,    98,
     171,   215,    91,    40,   171,    -1,   214,    40,   171,    -1,
     218,   220,    -1,    91,   220,    -1,   217,    91,   220,    -1,
     220,    91,    -1,   218,   220,    91,    -1,   171,   104,    -1,
     219,   171,    -1,   171,    -1,   171,   223,    -1,   223,    -1,
     224,    -1,    20,   206,    21,   173,    -1,    20,   206,    21,
     173,   222,    -1,    17,   173,    -1,    17,   173,   222,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   157,   157,   174,   175,   179,   184,   201,   212,   213,
     214,   225,   235,   236,   237,   246,   255,   256,   257,   266,
     275,   284,   285,   293,   302,   303,   304,   313,   321,   322,
     323,   332,   341,   342,   343,   352,   360,   361,   362,   370,
     380,   383,   384,   387,   390,   394,   398,   402,   406,   410,
     414,   418,   422,   423,   429,   442,   446,   449,   452,   456,
     457,   458,   463,   486,   519,   520,   521,   526,   527,   528,
     529,   530,   534,   535,   538,   539,   542,   543,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,   556,
     559,   560,   561,   563,   567,   573,   579,   583,   587,   593,
     599,   605,   609,   616,   619,   657,   662,   667,   672,   681,
     687,   690,   719,   724,   728,   734,   740,   750,   757,   766,
     767,   770,   774,   775,   779,   783,   784,   788,   793,   801,
     810,   818,   826,   834,   842,   850,   858,   866,   874,   882,
     890,   898,   906,   914,   923,   928,   936,   942,   947,   952,
     957,   963,   972,   977,   982,   989,   995,  1000,  1007,  1011,
    1014,  1019,  1028,  1037,  1044,  1052,  1061,  1076,  1077,  1080,
    1081,  1084,  1085,  1088,  1094,  1102,  1110,  1113,  1126,  1130,
    1133,  1134,  1138,  1139,  1144,  1145,  1150,  1151,  1156,  1157,
    1162,  1165,  1168,  1173,  1179,  1183,  1190,  1194,  1195,  1200,
    1201,  1202,  1203,  1204,  1205,  1206,  1207,  1210,  1213,  1214,
    1216,  1220,  1223,  1224,  1227,  1228,  1231,  1232,  1235,  1236,
    1239,  1240,  1241,  1242,  1245,  1249,  1252,  1259,  1270,  1276,
    1284,  1288,  1298,  1303,  1308,  1313,  1314,  1319,  1324,  1328,
    1331,  1332,  1338,  1342,  1349,  1350,  1424,  1428,  1434,  1438,
    1448,  1449,  1452,  1453,  1456,  1457,  1458,  1465,  1466,  1473,
    1474,  1500,  1507,  1513,  1524,  1532,  1537,  1542,  1543,  1552,
    1553,  1554,  1561,  1570,  1574,  1575,  1578,  1581,  1582,  1585,
    1589,  1590,  1593,  1594,  1595,  1596,  1597,  1600,  1613,  1632,
    1652,  1661,  1662,  1665,  1666,  1669,  1670,  1675,  1676,  1677,
    1680,  1683,  1684,  1685,  1688,  1689,  1692,  1693,  1696,  1703,
    1704,  1713,  1716,  1724,  1735,  1736,  1737,  1747,  1757,  1758,
    1761,  1762,  1765,  1766,  1767,  1768,  1771,  1772,  1774,  1775,
    1778,  1779,  1780,  1781,  1782,  1783,  1784,  1785,  1786,  1787,
    1789,  1795,  1803,  1810,  1817,  1824,  1831,  1838,  1845,  1852,
    1859,  1866,  1873,  1880,  1887,  1894,  1901,  1908,  1916,  1923,
    1930,  1937,  1944,  1951,  1958,  1965,  1972,  1979,  1986,  1993,
    2000,  2007,  2014,  2021,  2028,  2035,  2042,  2049,  2056,  2063,
    2070,  2077,  2084,  2091,  2092,  2093,  2100,  2107,  2114,  2124,
    2125,  2130,  2131,  2138,  2141,  2143,  2145,  2155,  2170,  2180,
    2190,  2199,  2215,  2224,  2227,  2228,  2229,  2231,  2240,  2257,
    2267,  2276,  2285,  2302,  2309,  2322,  2323,  2326,  2327,  2329,
    2334,  2342,  2347,  2353,  2354,  2357,  2358,  2361,  2362
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
  "vardef", "elif_seq", "elif_header", "else_stmt", "if_stmt", "if_header",
  "while_stmt", "while_header", "for_stmt", "for_header", "try_header",
  "try_stmt", "finally_stmt", "try_except_cla_seq", "with_seq",
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
  "default_arg_comma_seq", "in_default", "default_arg", "argument",
  "comp_iter", "comp_for", "comp_if", YY_NULL
};
#endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,   113,   114,   115,   115,   116,   116,   117,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     119,   120,   120,   121,   121,   122,   123,   123,   123,   123,
     123,   123,   123,   123,   124,   124,   125,   125,   125,   126,
     126,   126,   126,   126,   127,   127,   127,   128,   128,   128,
     128,   128,   128,   128,   129,   129,   130,   130,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     132,   132,   132,   133,   134,   135,   136,   136,   136,   137,
     138,   139,   139,   140,   141,   142,   142,   143,   143,   144,
     144,   145,   145,   146,   146,   147,   147,   148,   148,   149,
     149,   150,   150,   150,   150,   150,   150,   150,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   152,   152,   153,   154,   155,   155,
     155,   155,   156,   157,   157,   158,   159,   159,   160,   161,
     162,   162,   162,   162,   163,   164,   164,   165,   165,   166,
     166,   167,   167,   168,   168,   168,   169,   169,   170,   170,
     171,   171,   172,   172,   173,   173,   174,   174,   175,   175,
     176,   176,   177,   177,   178,   178,   179,   179,   179,   179,
     179,   179,   179,   179,   179,   179,   179,   180,   181,   181,
     182,   182,   183,   183,   184,   184,   185,   185,   186,   186,
     187,   187,   187,   187,   188,   188,   189,   189,   189,   189,
     190,   190,   191,   191,   191,   191,   191,   191,   191,   191,
     192,   192,   193,   193,   193,   193,   194,   194,   195,   195,
     195,   195,   196,   196,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   198,   198,   198,   198,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   200,   200,   200,
     200,   201,   201,   202,   202,   202,   202,   203,   203,   203,
     203,   203,   203,   203,   203,   203,   204,   204,   205,   205,
     205,   205,   206,   206,   206,   206,   206,   206,   206,   206,
     207,   207,   208,   208,   208,   208,   209,   209,   210,   210,
     211,   211,   211,   211,   211,   211,   211,   211,   211,   211,
     212,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   213,   213,   214,
     214,   215,   215,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   217,   217,   218,   218,   219,
     220,   221,   221,   222,   222,   223,   223,   224,   224
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     3,     1,     2,     1,     2,     6,     7,
       4,     5,     7,     7,     5,     5,     8,     8,     6,     6,
       8,     8,     6,     6,     9,     9,     7,     7,     8,     8,
       6,     6,     9,     9,     7,     7,     9,     9,     7,     7,
       1,     3,     2,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     6,     4,     1,     1,     1,     3,
       1,     1,     2,     2,     3,     2,     2,     1,     2,     1,
       2,     1,     3,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     2,     2,     3,     1,     2,     1,
       3,     1,     2,     2,     3,     2,     3,     2,     3,     2,
       3,     1,     1,     1,     1,     1,     1,     2,     2,     3,
       3,     3,     4,     4,     4,     4,     5,     5,     4,     4,
       5,     5,     5,     5,     2,     3,     3,     2,     2,     3,
       4,     5,     3,     2,     5,     3,     5,     8,     2,     2,
       3,     6,     5,     4,     2,     3,     4,     2,     3,     4,
       5,     1,     3,     1,     2,     4,     1,     2,     2,     1,
       1,     5,     2,     3,     1,     2,     2,     3,     1,     2,
       2,     1,     2,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     2,     2,     3,
       1,     2,     2,     3,     1,     2,     2,     3,     1,     2,
       2,     2,     3,     3,     1,     2,     2,     2,     3,     3,
       1,     2,     2,     2,     2,     2,     3,     3,     3,     3,
       1,     2,     2,     2,     2,     1,     1,     2,     1,     2,
       4,     3,     1,     2,     2,     3,     2,     2,     3,     3,
       1,     3,     4,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     3,     3,     2,     1,     2,
       2,     3,     2,     1,     2,     2,     3,     2,     4,     5,
       5,     2,     3,     1,     2,     2,     3,     1,     1,     2,
       3,     3,     4,     2,     2,     3,     1,     2,     2,     2,
       3,     3,     1,     2,     1,     2,     2,     3,     2,     3,
       2,     3,     1,     2,     2,     3,     4,     5,     2,     3,
       4,     3,     4,     4,     5,     2,     1,     2,     2,     3,
       2,     3,     4,     4,     4,     5,     5,     5,     5,     6,
       6,     5,     5,     6,     6,     6,     6,     5,     6,     6,
       6,     7,     7,     7,     7,     8,     8,     7,     7,     8,
       8,     8,     8,     6,     7,     7,     7,     8,     8,     8,
       8,     9,     9,     8,     8,     9,     9,     9,     9,     2,
       3,     2,     3,     1,     1,     2,     2,     5,     3,     3,
       4,     6,     2,     2,     2,     3,     3,     3,     6,     4,
       4,     5,     7,     3,     2,     2,     3,     2,     3,     2,
       2,     1,     2,     1,     1,     4,     5,     2,     3
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
       0,     0,     0,     0,     0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0,     0,     0,     0,     0
};

/* YYDEFACT[S] -- default reduction number in state S.  Performed when
   YYTABLE doesn't specify something else to do.  Zero means the default
   is an error.  */
static const unsigned short int yydefact[] =
{
       0,     0,     0,     0,     0,    90,    91,    92,     0,     2,
       4,     0,     0,   103,     6,     0,   111,   104,   107,   109,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     0,
       0,     0,     5,   179,     0,     0,     0,     0,     0,     0,
       0,   272,   271,   264,   266,   265,   260,   269,     0,     0,
     102,     0,     0,   252,   270,    95,   267,    99,   100,    69,
       0,     0,     0,     0,     0,     0,     0,   126,     0,   176,
      43,     0,    46,    60,    77,    67,    53,    47,    48,    49,
      96,    97,    98,    50,    51,    52,    44,    61,   121,     0,
     122,     0,   123,     0,     0,   124,   125,     0,   340,    71,
     180,   184,   188,   191,     0,   194,   210,   214,   218,   224,
     230,   240,   245,   268,   248,     0,   112,     0,   108,     0,
       0,   341,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     3,   190,     0,
       0,   128,     0,   127,     0,     0,   314,   312,   158,   159,
     119,     0,     0,     0,   171,    94,   322,   101,    93,   117,
      74,    75,   254,   278,   283,     0,   256,     0,   242,   243,
     207,   244,   257,   336,     0,     7,    45,    78,    79,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    80,     0,
      63,     0,    68,    76,    62,   148,   153,     0,     0,   178,
     177,     0,    70,     0,     0,   185,     0,   189,    73,     0,
       0,   202,   203,   201,   198,   205,   200,   199,   196,   197,
     195,     0,     0,   211,     0,   215,     0,   219,     0,     0,
     225,     0,     0,   231,     0,     0,     0,     0,   241,   253,
       0,     0,   249,   246,   113,     0,   105,     0,   110,     0,
       0,     0,   344,     0,     0,     0,     0,     0,   343,     0,
       0,     0,     0,     0,   342,     0,     0,     0,     0,     0,
     131,     0,     0,   130,     0,    40,     0,     0,     0,     0,
     129,   152,   155,   318,   315,   316,   313,     0,   120,   261,
       0,   298,   297,     0,   293,     0,     0,     0,     0,   324,
     323,   118,     0,   280,   279,   277,   285,   284,   282,   255,
     258,   337,     0,   338,   335,   259,     0,    66,    65,    59,
       0,     0,   149,     0,     0,     0,     0,     0,   173,     0,
     160,     0,     0,   182,     0,   186,     0,    72,   204,   206,
       0,   192,   208,     0,   212,     0,   216,     0,   220,   221,
       0,     0,   226,   227,     0,     0,   235,   232,   233,   234,
       0,     0,     0,     0,   251,   287,     0,   247,   114,   106,
     357,     0,     0,     0,     0,   346,     0,     0,   347,     0,
       0,     0,     0,   345,     0,     0,   348,     0,     0,     0,
       0,   352,     0,     0,   351,     0,   133,     0,     0,     0,
     135,   132,     0,     0,     0,   134,    42,     0,     0,   421,
       0,     0,     0,     0,   394,   393,     0,    10,     0,   139,
       0,   138,     0,   309,   308,   319,   317,   115,     0,   262,
     306,   303,   304,   299,   263,   295,   294,   167,   169,     0,
       0,   172,   320,   325,     0,   273,   274,   281,   286,   328,
     331,   339,     0,    64,   147,     0,     0,     0,   144,   150,
       0,     0,   164,   174,   163,     0,     0,     0,     0,     0,
     183,   187,   193,   209,   213,   217,   222,   223,   228,   229,
     239,   236,   237,   238,    40,     0,     0,   250,   373,   360,
       0,     0,     0,     0,   350,     0,     0,     0,   356,   359,
       0,     0,     0,     0,   349,     0,     0,     0,   355,   358,
       0,     0,     0,     0,   354,     0,     0,     0,   353,     0,
     137,     0,    15,   143,     0,     0,   136,     0,    14,   142,
       0,   402,   396,   419,   422,     0,     0,     0,   404,   403,
      41,     0,   414,   420,   417,   389,     0,   141,     0,   140,
       0,     0,    11,   311,   310,   116,   307,   305,   300,   301,
     291,   296,   168,   170,   321,     0,   275,   276,   332,   333,
     330,   329,    56,    57,    58,     0,     0,   146,   145,   151,
     154,   156,     0,     0,   162,     0,   165,   181,   288,     0,
       0,   376,   362,     0,     0,     0,   364,     0,     0,     0,
     375,   361,     0,     0,     0,   363,     0,     0,     0,   374,
     368,     0,     0,     0,   367,     0,     0,     0,     0,    19,
       0,     0,     0,     0,    23,     0,    18,     0,     0,     0,
       0,    22,     0,   398,   399,   413,   407,   405,   390,   418,
       8,     0,     0,    31,     0,     0,    30,     0,   302,   292,
     425,     0,   334,    55,     0,     0,   175,   161,   166,   290,
     289,   378,   366,     0,   380,   372,     0,   377,   365,     0,
     379,   371,     0,   384,   370,     0,   383,   369,     0,     0,
       0,    27,    13,     0,    39,     0,     0,     0,    26,    12,
       0,    38,     0,     0,   415,   391,     0,   400,     0,     0,
     409,   410,     0,    35,     0,     0,    34,     0,     9,     0,
     426,   423,   424,     0,     0,     0,     0,   382,   388,   381,
     387,   386,   385,    17,     0,     0,    20,    16,     0,     0,
      21,   397,     0,   392,   416,     0,     0,   411,     0,    29,
       0,    28,   427,   326,     0,    54,   157,    25,    37,    24,
      36,   401,   408,     0,    33,    32,   428,   327,   412
};

/* YYPDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,     8,     9,    10,    67,    68,   276,   277,    69,    70,
      71,   317,   575,    72,   190,    73,    74,    75,   191,    11,
      76,    77,    78,    79,    80,    81,    82,    83,    13,   118,
      17,    18,    19,   116,   288,    84,    85,    86,    87,   322,
     323,   324,    88,    89,    90,    91,    92,    93,    94,    95,
     329,   330,   297,    96,   153,   331,    97,    98,    99,   205,
     100,   207,   101,   102,   220,   103,   221,   104,   223,   105,
     225,   106,   227,   107,   230,   108,   233,   109,   238,   110,
     111,   242,   112,   113,   114,   304,   165,   243,   436,   293,
     294,   432,   284,   148,   300,   157,   569,   313,   174,    14,
      15,   410,   633,   411,   634,   412,   413,   694,   695,   710,
     711,   712
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -523
static const short int yypact[] =
{
     122,    32,    40,   226,   384,  -523,  -523,  -523,   108,  -523,
    -523,   215,    16,  -523,   295,   668,   104,  -523,    22,   166,
     -21,   180,   253,   318,   197,   368,   202,  -523,   225,   335,
     231,   295,  -523,  -523,  1167,   221,  1167,  1167,  1250,   204,
     251,  -523,  -523,  -523,  -523,  -523,   260,  -523,  1167,  1250,
    1167,  1250,   267,  -523,  -523,  -523,  -523,  -523,  -523,   901,
     526,   783,  1261,  1261,  1261,  1261,   445,  -523,   668,  -523,
    -523,   217,  -523,  1216,  -523,   234,  -523,  -523,  -523,  -523,
    -523,  -523,  -523,  -523,  -523,  -523,  -523,   233,  -523,   668,
    -523,   668,  -523,   334,   668,  -523,  -523,   763,  -523,   248,
     369,   385,   389,  -523,   311,    30,   300,   310,   320,   209,
     270,   292,  -523,   366,    14,   395,   360,    32,   362,   424,
      15,  -523,    10,   429,   469,   432,   474,    71,   433,   476,
     449,   501,   244,   465,   505,   485,   513,  -523,  -523,   321,
     357,   438,   198,  -523,   437,   441,   443,   444,  -523,  -523,
     455,  1241,   939,   -11,   493,  -523,   461,  -523,  -523,   455,
    -523,  -523,  -523,    41,    49,   450,  -523,   448,  -523,  -523,
    -523,  -523,  -523,     2,   451,  -523,  -523,  -523,  -523,  -523,
    -523,  -523,  -523,  -523,  -523,  -523,  -523,  -523,  -523,   506,
    -523,  1167,   901,  -523,  -523,   275,   539,  1167,    43,  -523,
    -523,   901,   248,  1167,  1167,   552,  1167,   553,   901,   470,
     545,  -523,  -523,  -523,  -523,   564,  -523,  -523,  -523,  -523,
      30,  1261,  1261,   471,  1261,   468,  1261,   473,  1261,  1261,
     322,  1261,  1261,   282,  1261,  1261,  1261,  1261,   326,  -523,
    1261,   532,    33,  -523,  -523,   534,  -523,    32,  -523,   477,
     480,    76,  -523,   283,   540,   308,   541,    78,  -523,   348,
     542,   364,   544,    79,  -523,   365,   546,   378,   547,   242,
     438,   116,   459,   438,   268,   492,   824,     5,   193,   316,
     438,  -523,  -523,  1250,   510,  1250,   514,   563,   517,  -523,
     507,   977,   509,   502,   522,  1167,   668,    -8,  1261,  1167,
     523,   517,  1250,   901,   529,  -523,   901,   530,  -523,  -523,
    -523,  1167,  1167,   535,  -523,  -523,   533,  -523,   233,  -523,
     525,  1167,   275,   668,   668,   528,   531,   536,  1167,   668,
     189,   537,   612,  -523,  1167,  -523,  1167,   901,  -523,  -523,
    1261,  -523,  -523,  1261,  -523,  1261,  -523,  1261,  -523,  -523,
    1261,  1261,  -523,  -523,  1261,  1261,  -523,  -523,  -523,  -523,
    1261,  1261,  1261,  1261,  -523,   342,  1261,  -523,  -523,  -523,
    -523,   538,   543,   549,    89,  -523,   400,   127,  -523,   402,
     548,   550,   132,  -523,   403,   142,  -523,   415,   554,   555,
     143,  -523,   421,   145,  -523,   422,   438,   218,     7,   220,
     438,   438,   246,     8,   273,   438,  -523,  1167,  1167,     1,
     863,   556,  1167,  1167,   551,   557,  1167,  -523,   315,   438,
     319,   438,    26,  -523,  -523,  1250,  1250,  -523,   587,  -523,
    1167,   559,  -523,   977,  -523,   939,   558,  -523,  -523,  1167,
     668,  -523,   574,  -523,   611,  -523,  -523,   901,   901,  -523,
      54,  1167,   405,  -523,  -523,   565,   668,   668,  -523,  -523,
     668,   668,  -523,   589,  -523,   566,   668,   568,   668,  1167,
    -523,  -523,  -523,  -523,  -523,  -523,  -523,  -523,  -523,  -523,
    -523,  -523,  -523,  -523,   570,   939,  1250,  -523,  -523,  -523,
     569,   573,   576,   146,  -523,   578,   579,   147,  -523,  -523,
     582,   584,   586,   149,  -523,   590,   588,   150,  -523,  -523,
     592,   593,   594,   151,  -523,   596,   598,   157,  -523,    28,
     438,  1167,  -523,   438,    29,    34,   438,  1167,  -523,   438,
      44,  -523,   585,  -523,  -523,  1167,  1167,  1167,   551,   613,
    -523,   577,   614,  -523,  -523,   599,   601,   438,    62,   438,
      64,  1167,  -523,  -523,  -523,  -523,  -523,  -523,   559,  -523,
    -523,   939,  -523,  -523,  -523,  1167,  -523,  -523,  1167,   624,
    -523,  -523,  -523,  -523,  -523,   618,    12,  -523,  -523,  -523,
    -523,   625,   602,   668,  -523,   668,  -523,  -523,  -523,   524,
     619,  -523,  -523,   621,   622,   623,  -523,   626,   627,   628,
    -523,  -523,   630,   631,   633,  -523,   635,   636,   637,  -523,
    -523,   643,   644,   645,  -523,   647,   648,   649,  1167,  -523,
      65,   651,    66,  1167,  -523,  1167,  -523,    68,   652,    72,
    1167,  -523,  1015,   639,   656,  -523,   660,   614,   653,  -523,
    -523,    73,  1167,  -523,    75,  1167,  -523,   655,  -523,  -523,
     434,   661,  1167,  -523,   472,   666,  -523,  -523,  -523,  -523,
    -523,  -523,  -523,   669,  -523,  -523,   670,  -523,  -523,   672,
    -523,  -523,   673,  -523,  -523,   674,  -523,  -523,   679,   682,
    1167,  -523,  -523,  1167,  -523,   684,   685,  1167,  -523,  -523,
    1167,  -523,   687,  1167,  -523,  -523,  1053,   656,  1167,  1091,
     664,   656,  1167,  -523,   688,  1167,  -523,   689,  -523,  1167,
    -523,  -523,  -523,  1167,   690,   659,   668,  -523,  -523,  -523,
    -523,  -523,  -523,  -523,   692,   693,  -523,  -523,   694,   695,
    -523,  -523,  1167,  -523,  -523,  1167,  1129,   656,   696,  -523,
     697,  -523,   434,  -523,  1167,  -523,  -523,  -523,  -523,  -523,
    -523,  -523,  -523,  1167,  -523,  -523,  -523,  -523,  -523
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -523,  -523,  -523,    56,  -523,  -523,   278,   -51,   642,  -523,
    -523,  -523,   156,  -523,   -80,   466,   -60,   -27,  -523,    60,
    -523,  -523,  -523,  -523,  -523,  -523,  -523,   716,  -523,  -523,
     -55,  -104,  -523,  -523,   641,  -523,  -523,  -523,  -523,  -523,
     436,   481,  -523,  -523,  -523,  -523,  -523,  -523,  -523,  -523,
     397,  -523,  -523,  -523,  -286,   440,  -523,   -52,   -36,  -523,
    -201,  -523,  -186,   -26,  -523,  -523,   591,    -4,  -523,    11,
    -523,  -189,  -523,  -176,  -523,  -188,  -523,  -193,  -523,  -204,
     -19,  -523,  -523,   367,  -523,   654,   751,   575,  -523,   331,
    -409,  -414,   676,   -45,   390,   216,  -523,  -523,  -523,   796,
    -523,  -523,   199,  -523,  -522,   423,  -523,  -271,  -273,    98,
    -153,  -523
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -407
static const short int yytable[] =
{
     144,   145,   332,   415,   155,   414,   158,   194,   138,   437,
     305,   308,   154,   246,   156,   193,   175,   557,   333,   559,
     314,   302,   302,   160,   163,   163,   560,   352,   353,   416,
     173,   521,   527,   342,   146,   348,   349,   195,   346,   196,
     210,   211,   198,   168,   169,   146,   171,   146,   344,   147,
     551,   212,   618,   623,   240,   161,   164,   164,   625,    16,
     147,   302,   147,    23,    26,   250,   327,   213,   630,   302,
      32,   120,   202,   366,   302,   170,    16,   209,   239,   214,
     295,   121,   124,   439,    20,   129,   642,   137,   645,   680,
     683,   296,   687,   311,   440,   142,   690,   702,   215,   705,
     216,   217,   251,   654,   312,   533,   290,   417,    27,   522,
     528,   697,   252,   117,   701,   328,   292,    31,   249,   241,
      16,   125,    16,    16,   218,   219,     1,     2,   552,   399,
     619,   624,   303,    16,     3,     4,   626,   539,   241,   538,
     306,   542,   193,   369,   648,   568,   631,   146,   470,   193,
     478,   479,   649,   562,   473,   156,   160,   476,   477,   475,
     400,   156,   147,   257,   643,   160,   646,   681,   684,   474,
     688,    16,   160,   258,   691,   703,    16,   706,   737,   372,
     335,   380,   388,     5,     6,     7,    16,    16,   161,    16,
      16,    16,   491,    16,    16,    16,   373,   161,   133,   271,
     274,    16,   381,    28,   161,   465,   418,   130,   389,   115,
     278,   279,   327,   119,   131,   356,   357,   358,   359,   398,
      28,   364,   403,   254,   122,   256,     2,    29,    30,   422,
     495,    21,   341,   139,   140,   501,   135,   419,   453,    22,
     409,   127,   280,   136,   438,   505,   511,   123,   515,   594,
     598,   260,   603,   607,   612,   431,   534,   444,   123,   154,
     616,   328,   520,   442,   523,   141,   637,   445,   228,   132,
     445,   458,   459,   130,   229,   449,   450,   464,   262,   423,
     404,   423,     5,     6,     7,   455,   396,     5,     6,     7,
     526,   320,   463,   321,   424,   150,   424,   570,   146,   446,
       2,   160,   446,     5,     6,     7,   149,     3,     4,   441,
     471,   159,   405,   147,     5,     6,     7,   529,   176,   492,
     266,   135,   496,   125,   268,   192,    21,   502,   420,   397,
     506,   126,   402,   161,   269,   512,   263,   189,   516,   201,
     133,   480,   481,   482,   483,   519,   264,   487,   134,   524,
     525,   472,   151,   152,   530,   197,     5,     6,     7,   547,
     421,   234,    24,   549,   650,   270,   231,   232,   548,   272,
     550,   531,   532,   128,   409,   374,   541,   543,   354,   355,
     546,   350,     5,     6,     7,   375,   203,   351,   563,    24,
     235,   236,   237,   204,   556,   360,    25,   558,   206,   292,
     377,   273,   208,   154,   578,   579,   222,   319,   580,   581,
     378,   566,   566,   326,   584,   571,   586,   224,     5,     6,
       7,   553,   553,   733,   361,   362,   363,   734,   226,     5,
       6,     7,   239,   587,   484,   485,   554,   554,   595,   244,
     382,   590,   599,   567,   567,     5,     6,     7,   604,   292,
     383,   709,   608,   247,   302,    34,   385,   390,   613,   572,
     573,   574,   617,   733,   128,   245,   386,   391,   248,   620,
     393,    53,   622,   253,   254,   627,   255,   259,   629,   256,
     394,   260,   146,    41,    42,   621,    43,    44,    45,    46,
      47,   628,   493,   261,   497,   503,   641,   147,   644,   635,
     636,   541,   494,   401,   498,   504,   262,   507,   742,   265,
     266,    53,    54,   513,   517,   647,    34,   508,   268,    56,
       5,     6,     7,   514,   518,   292,   572,   573,   574,   267,
     275,   657,   651,   658,   283,   285,    34,    60,    61,   281,
     298,    62,    63,   282,    41,    42,   287,    43,    44,    45,
      46,    47,   299,   309,    65,   325,    66,   172,   310,   316,
     334,   337,   336,   315,    41,    42,   338,    43,    44,    45,
      46,    47,    53,    54,   339,   345,   365,   343,   368,   370,
      56,   347,   679,   371,   376,   379,   384,   685,   387,   686,
     392,   395,    53,    54,   692,   406,   409,    59,    60,    61,
      56,   425,    62,    63,    64,   426,   704,   427,   428,   707,
     429,   433,   434,   435,   443,    65,   714,    66,    60,    61,
     447,   448,    62,    63,    64,   452,   451,   454,   469,   162,
     460,   555,   565,   461,   659,    65,   582,    66,   462,   468,
     488,   655,   544,   486,   724,   489,   656,   725,   545,   561,
     499,   728,   490,   500,   729,   318,   509,   731,   510,   540,
     409,   430,   541,   409,   746,  -407,   738,   577,   583,   740,
     585,   591,     1,   588,    33,   592,   632,   743,    34,   593,
     596,   533,   597,    35,   600,    36,   601,    37,    38,   602,
      39,   606,   605,    40,   609,   610,   751,   611,   614,   752,
     409,   615,  -395,   640,   638,   639,    41,    42,   757,    43,
      44,    45,    46,    47,    48,   652,    12,   758,    49,    50,
      51,   653,   660,   661,   662,    52,   663,   466,   664,   665,
     696,   666,   667,   668,    53,    54,   669,   670,   671,   200,
     672,    55,    56,    57,    58,   673,   674,   698,   675,   676,
     677,   699,   678,   682,   689,   736,  -406,   708,   456,    59,
      60,    61,   745,   713,    62,    63,    64,     1,   716,   199,
     467,   717,   718,    34,   719,   720,   721,    65,    35,    66,
      36,   722,    37,    38,   723,    39,   726,   727,    40,   730,
     739,   741,   744,    34,   747,   748,   749,   750,   754,   755,
     301,    41,    42,   457,    43,    44,    45,    46,    47,    48,
     715,   340,   167,    49,    50,    51,   589,   367,   307,   576,
      52,    41,    42,   286,    43,    44,    45,    46,    47,    53,
      54,   143,   564,   537,    34,   700,    55,    56,    57,    58,
     756,     0,     0,     0,     0,     0,     0,     0,     0,    53,
      54,     0,     0,     0,    59,    60,    61,    56,     0,    62,
      63,    64,    41,    42,   407,    43,    44,    45,    46,    47,
       0,     0,    65,    34,    66,    60,    61,     0,     0,    62,
      63,    64,     0,     0,     0,     0,     0,     0,     0,     0,
      53,    54,    65,   166,    66,     0,     0,     0,    56,     0,
       0,    41,    42,   535,    43,    44,    45,    46,    47,     0,
       0,    34,     0,     0,     0,     0,    60,    61,     0,     0,
      62,    63,   408,     0,     0,     0,     0,     0,     0,    53,
      54,     0,     0,    65,     0,    66,     0,    56,     0,    41,
      42,     0,    43,    44,    45,    46,    47,     0,     0,    34,
       0,     0,     0,     0,     0,    60,    61,     0,     0,    62,
      63,   536,     0,     0,     0,     0,     0,    53,    54,     0,
       0,     0,    65,     0,    66,    56,     0,    41,    42,     0,
      43,    44,    45,    46,    47,     0,     0,    34,     0,     0,
       0,     0,     0,    60,    61,     0,     0,    62,    63,    64,
       0,     0,     0,     0,     0,    53,    54,     0,     0,     0,
      65,     0,    66,    56,     0,    41,    42,     0,    43,    44,
      45,    46,    47,     0,     0,    34,     0,     0,     0,     0,
       0,    60,    61,     0,     0,    62,    63,     0,     0,     0,
       0,   291,     0,    53,    54,     0,     0,     0,    65,     0,
      66,    56,     0,    41,    42,   693,    43,    44,    45,    46,
      47,     0,     0,    34,     0,     0,     0,     0,     0,    60,
      61,     0,     0,    62,    63,     0,     0,     0,     0,   430,
       0,    53,    54,     0,     0,     0,    65,     0,    66,    56,
       0,    41,    42,   732,    43,    44,    45,    46,    47,     0,
       0,    34,     0,     0,     0,     0,     0,    60,    61,     0,
       0,    62,    63,     0,     0,     0,     0,     0,     0,    53,
      54,     0,     0,     0,    65,     0,    66,    56,     0,    41,
      42,   735,    43,    44,    45,    46,    47,     0,     0,    34,
       0,     0,     0,     0,     0,    60,    61,     0,     0,    62,
      63,     0,     0,     0,     0,     0,     0,    53,    54,     0,
       0,     0,    65,     0,    66,    56,     0,    41,    42,   753,
      43,    44,    45,    46,    47,     0,     0,    34,     0,     0,
       0,     0,     0,    60,    61,     0,     0,    62,    63,     0,
       0,     0,     0,     0,     0,    53,    54,     0,     0,     0,
      65,     0,    66,    56,     0,    41,    42,     0,    43,    44,
      45,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,    60,    61,     0,     0,    62,    63,     0,     0,     0,
       0,     0,     0,    53,    54,     0,     0,     0,    65,     0,
      66,    56,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,     0,     0,     0,     0,     0,     0,    60,
      61,     0,     0,    62,    63,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   188,     0,    65,     0,    66,    41,
      42,     0,    43,    44,    45,    46,    47,     0,    41,    42,
       0,    43,    44,    45,    46,    47,     0,     0,     0,    41,
      42,     0,    43,    44,    45,    46,    47,    53,    54,     0,
       0,     0,     0,     0,     0,    56,    53,    54,     0,     0,
     189,     0,     0,     0,    56,     0,     0,    53,    54,     0,
       0,     0,     0,    60,    61,    56,     0,    62,    63,    64,
       0,     0,    60,    61,   289,     0,    62,    63,    64,     0,
      65,     0,    66,    60,    61,     0,     0,    62,    63,    65,
       0,    66,     0,     0,     0,     0,     0,     0,     0,     0,
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
      36,    37,   203,   276,    49,   276,    51,    87,    34,   295,
     163,   164,    48,   117,    50,    75,    68,   431,   204,   433,
     173,    20,    20,    59,    60,    61,   435,   231,   232,    24,
      66,    24,    24,   222,    38,   228,   229,    89,   226,    91,
      10,    11,    94,    62,    63,    49,    65,    51,   224,    38,
      24,    21,    24,    24,    40,    59,    60,    61,    24,    44,
      49,    20,    51,     3,     4,   120,    23,    37,    24,    20,
      14,    92,    99,    40,    20,    64,    44,   104,    66,    49,
      91,   102,    22,    91,    44,    25,    24,    31,    24,    24,
      24,   102,    24,    91,   102,    35,    24,    24,    68,    24,
      70,    71,    92,    91,   102,   104,   151,   102,     0,   102,
     102,   633,   102,    91,   636,    72,   152,   101,   103,   105,
      44,     5,    44,    44,    94,    95,     4,     5,   102,    13,
     102,   102,    91,    44,    12,    13,   102,   410,   105,   410,
      91,   412,   202,   247,   558,    91,   102,   151,   334,   209,
     354,   355,   561,   439,   343,   191,   192,   350,   351,   347,
      44,   197,   151,    92,   102,   201,   102,   102,   102,   345,
     102,    44,   208,   102,   102,   102,    44,   102,   700,   103,
     206,   103,   103,    61,    62,    63,    44,    44,   192,    44,
      44,    44,   103,    44,    44,    44,   251,   201,     5,   139,
     140,    44,   257,     5,   208,    16,    13,     5,   263,   105,
      12,    13,    23,    47,    12,   234,   235,   236,   237,   270,
       5,   240,   273,     5,    44,     5,     5,    12,    13,   280,
     103,     5,   221,    12,    13,   103,     5,    44,   318,    13,
     276,    44,    44,    12,   296,   103,   103,     5,   103,   103,
     103,     5,   103,   103,   103,   291,   409,   302,     5,   295,
     103,    72,    44,   299,    44,    44,   537,   303,    59,    44,
     306,   323,   324,     5,    65,   311,   312,   329,     5,   283,
      12,   285,    61,    62,    63,   321,    44,    61,    62,    63,
      44,    16,   328,    18,   283,    44,   285,   450,   302,   303,
       5,   337,   306,    61,    62,    63,   102,    12,    13,   298,
     336,    44,    44,   302,    61,    62,    63,    44,   101,   374,
       5,     5,   377,     5,     5,    91,     5,   382,    12,   269,
     385,    13,   272,   337,    13,   390,    92,   104,   393,    91,
       5,   360,   361,   362,   363,   396,   102,   366,    13,   400,
     401,   340,    92,    93,   405,    21,    61,    62,    63,    44,
      44,    69,     5,    44,   565,    44,    96,    97,   419,    12,
     421,   407,   408,     5,   410,    92,   412,   413,    96,    97,
     416,    59,    61,    62,    63,   102,    17,    65,   440,     5,
      98,    99,   100,     8,   430,    69,    12,   433,     9,   435,
      92,    44,    91,   439,   456,   457,   106,   191,   460,   461,
     102,   447,   448,   197,   466,   451,   468,   107,    61,    62,
      63,   425,   426,   696,    98,    99,   100,   698,   108,    61,
      62,    63,    66,   469,    92,    93,   425,   426,   493,    44,
      92,   486,   497,   447,   448,    61,    62,    63,   503,   485,
     102,    17,   507,    91,    20,    10,    92,    92,   513,    54,
      55,    56,   517,   736,     5,   105,   102,   102,    44,   520,
      92,    66,   523,    44,     5,   526,    44,    44,   529,     5,
     102,     5,   486,    38,    39,   521,    41,    42,    43,    44,
      45,   527,    92,    44,    92,    92,   547,   486,   549,   535,
     536,   537,   102,    44,   102,   102,     5,    92,   709,    44,
       5,    66,    67,    92,    92,   551,    10,   102,     5,    74,
      61,    62,    63,   102,   102,   561,    54,    55,    56,    44,
      92,   583,   568,   585,    91,    91,    10,    92,    93,   102,
      47,    96,    97,   102,    38,    39,    91,    41,    42,    43,
      44,    45,    91,   103,   109,    16,   111,   112,   110,    53,
       8,    91,     9,   112,    38,    39,    21,    41,    42,    43,
      44,    45,    66,    67,    10,   107,    44,   106,    44,   102,
      74,   108,   618,   103,    44,    44,    44,   623,    44,   625,
      44,    44,    66,    67,   630,   103,   632,    91,    92,    93,
      74,    91,    96,    97,    98,    91,   642,    44,    91,   645,
     103,   102,   110,    91,    91,   109,   652,   111,    92,    93,
      91,    91,    96,    97,    98,    92,    91,   102,    16,   103,
     102,    44,    21,   102,   110,   109,    47,   111,   102,   102,
     102,    16,    91,   365,   680,   102,    44,   683,    91,    91,
     102,   687,   103,   103,   690,   189,   102,   693,   103,   103,
     696,   102,   698,   699,   716,    91,   702,   102,   102,   705,
     102,   102,     4,   103,     6,   102,    91,   713,    10,   103,
     102,   104,   103,    15,   102,    17,   102,    19,    20,   103,
      22,   103,   102,    25,   102,   102,   732,   103,   102,   735,
     736,   103,   103,   102,    91,    91,    38,    39,   744,    41,
      42,    43,    44,    45,    46,    91,     0,   753,    50,    51,
      52,   103,   103,   102,   102,    57,   103,   330,   102,   102,
      91,   103,   102,   102,    66,    67,   103,   102,   102,    97,
     103,    73,    74,    75,    76,   102,   102,    91,   103,   102,
     102,    91,   103,   102,   102,    91,   103,   102,   322,    91,
      92,    93,   103,   102,    96,    97,    98,     4,   102,     6,
     330,   102,   102,    10,   102,   102,   102,   109,    15,   111,
      17,   102,    19,    20,   102,    22,   102,   102,    25,   102,
     102,   102,   102,    10,   102,   102,   102,   102,   102,   102,
     159,    38,    39,   322,    41,    42,    43,    44,    45,    46,
     654,   220,    61,    50,    51,    52,   485,   242,   164,   452,
      57,    38,    39,   147,    41,    42,    43,    44,    45,    66,
      67,    35,   442,   410,    10,   636,    73,    74,    75,    76,
     742,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    -1,    -1,    -1,    91,    92,    93,    74,    -1,    96,
      97,    98,    38,    39,    40,    41,    42,    43,    44,    45,
      -1,    -1,   109,    10,   111,    92,    93,    -1,    -1,    96,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    67,   109,   110,   111,    -1,    -1,    -1,    74,    -1,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    10,    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,
      96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    -1,    -1,   109,    -1,   111,    -1,    74,    -1,    38,
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
     111,    74,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      93,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    -1,   109,    -1,   111,    38,
      39,    -1,    41,    42,    43,    44,    45,    -1,    38,    39,
      -1,    41,    42,    43,    44,    45,    -1,    -1,    -1,    38,
      39,    -1,    41,    42,    43,    44,    45,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    66,    67,    -1,    -1,
     104,    -1,    -1,    -1,    74,    -1,    -1,    66,    67,    -1,
      -1,    -1,    -1,    92,    93,    74,    -1,    96,    97,    98,
      -1,    -1,    92,    93,   103,    -1,    96,    97,    98,    -1,
     109,    -1,   111,    92,    93,    -1,    -1,    96,    97,   109,
      -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     109,    -1,   111
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     4,     5,    12,    13,    61,    62,    63,   114,   115,
     116,   132,   140,   141,   212,   213,    44,   143,   144,   145,
      44,     5,    13,   132,     5,    12,   132,     0,     5,    12,
      13,   101,   116,     6,    10,    15,    17,    19,    20,    22,
      25,    38,    39,    41,    42,    43,    44,    45,    46,    50,
      51,    52,    57,    66,    67,    73,    74,    75,    76,    91,
      92,    93,    96,    97,    98,   109,   111,   117,   118,   121,
     122,   123,   126,   128,   129,   130,   133,   134,   135,   136,
     137,   138,   139,   140,   148,   149,   150,   151,   155,   156,
     157,   158,   159,   160,   161,   162,   166,   169,   170,   171,
     173,   175,   176,   178,   180,   182,   184,   186,   188,   190,
     192,   193,   195,   196,   197,   105,   146,    91,   142,    47,
      92,   102,    44,     5,   132,     5,    13,    44,     5,   132,
       5,    12,    44,     5,    13,     5,    12,   116,   176,    12,
      13,    44,   132,   212,   171,   171,   180,   182,   206,   102,
      44,    92,    93,   167,   171,   206,   171,   208,   206,    44,
     171,   180,   103,   171,   180,   199,   110,   199,   193,   193,
     182,   193,   112,   171,   211,   170,   101,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    58,   104,
     127,   131,    91,   129,   127,   170,   170,    21,   170,     6,
     121,    91,   130,    17,     8,   172,     9,   174,    91,   130,
      10,    11,    21,    37,    49,    68,    70,    71,    94,    95,
     177,   179,   106,   181,   107,   183,   108,   185,    59,    65,
     187,    96,    97,   189,    69,    98,    99,   100,   191,    66,
      40,   105,   194,   200,    44,   105,   144,    91,    44,   103,
     143,    92,   102,    44,     5,    44,     5,    92,   102,    44,
       5,    44,     5,    92,   102,    44,     5,    44,     5,    13,
      44,   132,    12,    44,   132,    92,   119,   120,    12,    13,
      44,   102,   102,    91,   205,    91,   205,    91,   147,   103,
     206,   102,   171,   202,   203,    91,   102,   165,    47,    91,
     207,   147,    20,    91,   198,   223,    91,   198,   223,   103,
     110,    91,   102,   210,   223,   112,    53,   124,   128,   208,
      16,    18,   152,   153,   154,    16,   208,    23,    72,   163,
     164,   168,   173,   175,     8,   176,     9,    91,    21,    10,
     179,   182,   184,   106,   186,   107,   188,   108,   190,   190,
      59,    65,   192,   192,    96,    97,   193,   193,   193,   193,
      69,    98,    99,   100,   193,    44,    40,   200,    44,   144,
     102,   103,   103,   143,    92,   102,    44,    92,   102,    44,
     103,   143,    92,   102,    44,    92,   102,    44,   103,   143,
      92,   102,    44,    92,   102,    44,    44,   132,   120,    13,
      44,    44,   132,   120,    12,    44,   103,    40,    98,   171,
     214,   216,   218,   219,   220,   221,    24,   102,    13,    44,
      12,    44,   120,   180,   182,    91,    91,    44,    91,   103,
     102,   171,   204,   102,   110,    91,   201,   167,   170,    91,
     102,   182,   171,    91,   206,   171,   180,    91,    91,   171,
     171,    91,    92,   127,   102,   171,   153,   154,   170,   170,
     102,   102,   102,   171,   170,    16,   163,   168,   102,    16,
     175,   176,   182,   184,   186,   188,   190,   190,   192,   192,
     193,   193,   193,   193,    92,    93,   119,   193,   102,   102,
     103,   103,   143,    92,   102,   103,   143,    92,   102,   102,
     103,   103,   143,    92,   102,   103,   143,    92,   102,   102,
     103,   103,   143,    92,   102,   103,   143,    92,   102,   120,
      44,    24,   102,    44,   120,   120,    44,    24,   102,    44,
     120,   171,   171,   104,   223,    40,    98,   218,   220,   221,
     103,   171,   220,   171,    91,    91,   171,    44,   120,    44,
     120,    24,   102,   180,   182,    44,   171,   204,   171,   204,
     203,    91,   167,   170,   207,    21,   171,   180,    91,   209,
     223,   171,    54,    55,    56,   125,   196,   102,   170,   170,
     170,   170,    47,   102,   170,   102,   170,   171,   103,   202,
     206,   102,   102,   103,   103,   143,   102,   103,   103,   143,
     102,   102,   103,   103,   143,   102,   103,   103,   143,   102,
     102,   103,   103,   143,   102,   103,   103,   143,    24,   102,
     120,   171,   120,    24,   102,    24,   102,   120,   171,   120,
      24,   102,    91,   215,   217,   171,   171,   220,    91,    91,
     102,   120,    24,   102,   120,    24,   102,   171,   204,   203,
     173,   171,    91,   103,    91,    16,    44,   170,   170,   110,
     103,   102,   102,   103,   102,   102,   103,   102,   102,   103,
     102,   102,   103,   102,   102,   103,   102,   102,   103,   171,
      24,   102,   102,    24,   102,   171,   171,    24,   102,   102,
      24,   102,   171,    40,   220,   221,    91,   217,    91,    91,
     215,   217,    24,   102,   171,    24,   102,   171,   102,    17,
     222,   223,   224,   102,   171,   125,   102,   102,   102,   102,
     102,   102,   102,   102,   171,   171,   102,   102,   171,   171,
     102,   171,    40,   221,   220,    40,    91,   217,   171,   102,
     171,   102,   173,   171,   102,   103,   170,   102,   102,   102,
     102,   171,   171,    40,   102,   102,   222,   171,   171
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
#line 157 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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
#line 174 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"program : import_stmt ';' temp2 \n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn);}
    break;

  case 4:
/* Line 868 of glr.c  */
#line 175 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"program : temp2 \n";}
    break;

  case 5:
/* Line 868 of glr.c  */
#line 179 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"temp2: classdef temp2\n";
							ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
							//cout<<"enter upper"<<endl;
							out_of_import=true;
						}
    break;

  case 6:
/* Line 868 of glr.c  */
#line 184 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"temp2: classdef \n";
							//ast->createClassNode();
							//cout<<"enter classdef"<<endl;
					}
    break;

  case 7:
/* Line 868 of glr.c  */
#line 201 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 8:
/* Line 868 of glr.c  */
#line 212 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader:	DEF  NAME parameters ARROW test ':'  \n";}
    break;

  case 9:
/* Line 868 of glr.c  */
#line 213 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader:  DEF access NAME parameters ARROW test ':'  \n";}
    break;

  case 10:
/* Line 868 of glr.c  */
#line 214 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 11:
/* Line 868 of glr.c  */
#line 225 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 12:
/* Line 868 of glr.c  */
#line 235 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC NAME parameters ARROW test ':' \n";}
    break;

  case 13:
/* Line 868 of glr.c  */
#line 236 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL NAME parameters ARROW test ':' \n";}
    break;

  case 14:
/* Line 868 of glr.c  */
#line 237 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 15:
/* Line 868 of glr.c  */
#line 246 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 16:
/* Line 868 of glr.c  */
#line 255 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC FINAL NAME parameters ARROW test ':' \n";}
    break;

  case 17:
/* Line 868 of glr.c  */
#line 256 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 18:
/* Line 868 of glr.c  */
#line 257 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 19:
/* Line 868 of glr.c  */
#line 266 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 20:
/* Line 868 of glr.c  */
#line 275 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 21:
/* Line 868 of glr.c  */
#line 284 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC access NAME parameters ARROW test ':'  \n";}
    break;

  case 22:
/* Line 868 of glr.c  */
#line 285 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											testfunction = p->createTypeFunctionHeader(t,true,pp,pro,ff, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											inside_func=false;call_func=false;
											linefunc=yylval.r.lineNum;
														colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF STATIC access NAME parameters ':'  \n";
													}
    break;

  case 23:
/* Line 868 of glr.c  */
#line 293 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 24:
/* Line 868 of glr.c  */
#line 302 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC FINAL access NAME parameters ARROW test ':'  \n";}
    break;

  case 25:
/* Line 868 of glr.c  */
#line 303 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL STATIC access NAME parameters ARROW test ':'  \n";}
    break;

  case 26:
/* Line 868 of glr.c  */
#line 304 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 27:
/* Line 868 of glr.c  */
#line 313 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											inside_func=false;call_func=false;
											linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF FINAL STATIC access NAME parameters ':'  \n";
														  }
    break;

  case 28:
/* Line 868 of glr.c  */
#line 321 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 29:
/* Line 868 of glr.c  */
#line 322 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access FINAL NAME parameters ARROW test ':'  \n";}
    break;

  case 30:
/* Line 868 of glr.c  */
#line 323 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 31:
/* Line 868 of glr.c  */
#line 332 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 32:
/* Line 868 of glr.c  */
#line 341 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access STATIC FINAL NAME parameters ARROW test ':'  \n";}
    break;

  case 33:
/* Line 868 of glr.c  */
#line 342 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access FINAL STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 34:
/* Line 868 of glr.c  */
#line 343 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 35:
/* Line 868 of glr.c  */
#line 352 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											inside_func=false;call_func=false;
											linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF access FINAL STATIC NAME parameters ':'  \n";
			  											  }
    break;

  case 36:
/* Line 868 of glr.c  */
#line 360 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC access FINAL NAME parameters ARROW test ':'  \n";}
    break;

  case 37:
/* Line 868 of glr.c  */
#line 361 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL access STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 38:
/* Line 868 of glr.c  */
#line 362 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											inside_func=false;call_func=false;
											linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF STATIC access FINAL NAME parameters ':'  \n";
			  											  }
    break;

  case 39:
/* Line 868 of glr.c  */
#line 370 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											inside_func=false;call_func=false;
											linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF FINAL access STATIC NAME parameters ':'  \n";
														  }
    break;

  case 40:
/* Line 868 of glr.c  */
#line 380 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    { inside_func=true;call_func=true; Streams::verbose() <<"inside_func:'(' ";}
    break;

  case 41:
/* Line 868 of glr.c  */
#line 383 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"inside_func arglist ')'\n";}
    break;

  case 42:
/* Line 868 of glr.c  */
#line 384 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"parameters:'(' ')'\n";}
    break;

  case 43:
/* Line 868 of glr.c  */
#line 387 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {	((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);	Streams::verbose() <<"stmt:	simple_stmt \n";
						visit_num=0;
					}
    break;

  case 44:
/* Line 868 of glr.c  */
#line 390 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {	((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);cout<<"line num"<<yylval.r.lineNum<<endl;	Streams::verbose() <<"stmt: compound_stmt\n";
							visit_num=0;
						}
    break;

  case 45:
/* Line 868 of glr.c  */
#line 394 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"simple_stmt: small_stmt ';' \n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 46:
/* Line 868 of glr.c  */
#line 398 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"small_stmt: expr_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 47:
/* Line 868 of glr.c  */
#line 402 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
						Streams::verbose() <<"small_stmt: del_stmt \n";
						((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
					  }
    break;

  case 48:
/* Line 868 of glr.c  */
#line 406 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"small_stmt: pass_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
					   }
    break;

  case 49:
/* Line 868 of glr.c  */
#line 410 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"small_stmt: flow_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
					   }
    break;

  case 50:
/* Line 868 of glr.c  */
#line 414 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"small_stmt: import_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						 }
    break;

  case 51:
/* Line 868 of glr.c  */
#line 418 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"small_stmt: global_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						 }
    break;

  case 52:
/* Line 868 of glr.c  */
#line 422 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: nonlocal_stmt \n";}
    break;

  case 53:
/* Line 868 of glr.c  */
#line 423 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"small_stmt: print_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
							visit_num=0;
						 }
    break;

  case 54:
/* Line 868 of glr.c  */
#line 430 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: str_seq\n";
									char* x = new char[100];
									strcpy(x,(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.r.strVal));
									//cout<<"x=   "<<x<<endl;
									string sd(x);
									//cout<<"sd=== "<<sd<<endl;
									constant=true;
									Node* string_now;

									string_now = ast->createTypeNode(reinterpret_cast<void*>(x),0,0,yylval.r.lineNum,yylval.r.colNum,STRINGS);
									((*yyvalp).tn)=ast->createinputNode(string_now,my_input,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
						}
    break;

  case 55:
/* Line 868 of glr.c  */
#line 442 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
									((*yyvalp).tn)=ast->createinputNode(NULL,my_input,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
								}
    break;

  case 56:
/* Line 868 of glr.c  */
#line 446 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							my_input=INT_input;
						}
    break;

  case 57:
/* Line 868 of glr.c  */
#line 449 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							my_input=FLOAT_input;
						}
    break;

  case 58:
/* Line 868 of glr.c  */
#line 452 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							my_input=STRING_input;
						}
    break;

  case 59:
/* Line 868 of glr.c  */
#line 456 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"expr_stmt:	testlist_star_expr augassign testlist \n";}
    break;

  case 60:
/* Line 868 of glr.c  */
#line 457 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"expr_stmt: testlist_star_expr \n";}
    break;

  case 61:
/* Line 868 of glr.c  */
#line 458 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
								Streams::verbose() <<"compound_stmt: vardef\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
								visit_num=0;
							}
    break;

  case 62:
/* Line 868 of glr.c  */
#line 463 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 63:
/* Line 868 of glr.c  */
#line 486 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 64:
/* Line 868 of glr.c  */
#line 519 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"right_testlist: '=' testlist_star_expr right_testlist \n";}
    break;

  case 65:
/* Line 868 of glr.c  */
#line 520 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"right_testlist: '=' testlist_star_expr \n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 66:
/* Line 868 of glr.c  */
#line 521 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 67:
/* Line 868 of glr.c  */
#line 526 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: comma_test_star_seqJ \n";}
    break;

  case 68:
/* Line 868 of glr.c  */
#line 527 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: comma_test_star_seqJ ',' \n";}
    break;

  case 69:
/* Line 868 of glr.c  */
#line 528 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"',' \n";}
    break;

  case 70:
/* Line 868 of glr.c  */
#line 529 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: test comma_test_star_seqJ \n";}
    break;

  case 71:
/* Line 868 of glr.c  */
#line 530 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
								Streams::verbose() <<"testlist_star_expr: test \n"; 
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 72:
/* Line 868 of glr.c  */
#line 534 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: star_expr comma_test_star_seqJ ',' \n";}
    break;

  case 73:
/* Line 868 of glr.c  */
#line 535 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: star_expr ',' \n";}
    break;

  case 74:
/* Line 868 of glr.c  */
#line 538 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star : ',' test \n";}
    break;

  case 75:
/* Line 868 of glr.c  */
#line 539 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star : ',' star_expr \n";}
    break;

  case 76:
/* Line 868 of glr.c  */
#line 542 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seqJ : comma_test_star_seqJ comma_test_star \n";}
    break;

  case 77:
/* Line 868 of glr.c  */
#line 543 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seqJ : comma_test_star \n";}
    break;

  case 78:
/* Line 868 of glr.c  */
#line 545 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	PLUS_EQUAL \n";}
    break;

  case 79:
/* Line 868 of glr.c  */
#line 546 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MINUS_EQUAL \n";}
    break;

  case 80:
/* Line 868 of glr.c  */
#line 547 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	STAR_EQUAL \n";}
    break;

  case 81:
/* Line 868 of glr.c  */
#line 548 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	DIV_EQUAL \n";}
    break;

  case 82:
/* Line 868 of glr.c  */
#line 549 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MOD_EQUAL \n";}
    break;

  case 83:
/* Line 868 of glr.c  */
#line 550 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	AND_EQUAL \n";}
    break;

  case 84:
/* Line 868 of glr.c  */
#line 551 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	OR_EQUAL \n";}
    break;

  case 85:
/* Line 868 of glr.c  */
#line 552 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	SHAPOO_EQUAL \n";}
    break;

  case 86:
/* Line 868 of glr.c  */
#line 553 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	LESS_THAN_2_EQUAL \n";}
    break;

  case 87:
/* Line 868 of glr.c  */
#line 554 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MORE_THAN_2_EQUAL \n";}
    break;

  case 88:
/* Line 868 of glr.c  */
#line 555 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	STAR_2_EQUAL \n";}
    break;

  case 89:
/* Line 868 of glr.c  */
#line 556 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	DIV_2_EQUAL \n";}
    break;

  case 90:
/* Line 868 of glr.c  */
#line 559 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose()<<"access_modef: PRIVATE\n";acc_mod="private";pp=true;}
    break;

  case 91:
/* Line 868 of glr.c  */
#line 560 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {pp=false;Streams::verbose()<<"access_modef:	PUBLIC\n";acc_mod="public";pp=false;}
    break;

  case 92:
/* Line 868 of glr.c  */
#line 561 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {pro=true;Streams::verbose()<<"access_modef:	PROTECTED\n";acc_mod="protected";}
    break;

  case 93:
/* Line 868 of glr.c  */
#line 563 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"print_stmt: PRINT exprlist \n";
							((*yyvalp).tn) = ast->createPrintNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
						   }
    break;

  case 94:
/* Line 868 of glr.c  */
#line 567 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"del_stmt:   DEL exprlist \n";
							((*yyvalp).tn) = ast->createDelNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
						 }
    break;

  case 95:
/* Line 868 of glr.c  */
#line 573 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
					Streams::verbose() <<"pass_stmt:	PASS \n";
					((*yyvalp).tn) = ast->createPassNode(NULL, NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
				 }
    break;

  case 96:
/* Line 868 of glr.c  */
#line 579 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
						Streams::verbose() <<"flow_stmt:	break_stmt \n";
						((*yyvalp).tn) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
					   }
    break;

  case 97:
/* Line 868 of glr.c  */
#line 583 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
								Streams::verbose() <<"flow_stmt: continue_stmt\n";
								((*yyvalp).tn) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 98:
/* Line 868 of glr.c  */
#line 587 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"flow_stmt: return_stmt\n";
							((*yyvalp).tn) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						  }
    break;

  case 99:
/* Line 868 of glr.c  */
#line 593 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
					Streams::verbose() <<"break_stmt: BREAK \n";
					((*yyvalp).tn) = ast->createFlowStmtNode(NULL, NULL, breakNode, NULL,yylval.r.lineNum,yylval.r.colNum);
				  }
    break;

  case 100:
/* Line 868 of glr.c  */
#line 599 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"continue_stmt:	CONTINUE \n";
							((*yyvalp).tn) = ast->createFlowStmtNode(NULL, NULL, continueNode, NULL,yylval.r.lineNum,yylval.r.colNum);
						 }
    break;

  case 101:
/* Line 868 of glr.c  */
#line 605 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
									Streams::verbose() <<"return_stmt:	RETURN testlist \n";
									((*yyvalp).tn) = ast->createReturnNode(testfunction,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
								}
    break;

  case 102:
/* Line 868 of glr.c  */
#line 609 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"return_stmt:	RETURN \n";
							((*yyvalp).tn) = ast->createReturnNode(testfunction,NULL, NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
						}
    break;

  case 103:
/* Line 868 of glr.c  */
#line 616 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"import_stmt: import_name \n";}
    break;

  case 104:
/* Line 868 of glr.c  */
#line 619 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 105:
/* Line 868 of glr.c  */
#line 657 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_dotted_as_name_seq: ',' dotted_as_name \n";
														
														inhertance_list.push_back(temp_id_stack.top());
														temp_id_stack.pop();
												}
    break;

  case 106:
/* Line 868 of glr.c  */
#line 662 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_dotted_as_name_seq: comma_dotted_as_name_seq ',' dotted_as_name \n";
																					inhertance_list.push_back(temp_id_stack.top());
																				temp_id_stack.pop();
																		}
    break;

  case 107:
/* Line 868 of glr.c  */
#line 667 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
									Streams::verbose() <<"comma_dotted_as_name_seq: dotted_as_names: dotted_as_name \n";
									inhertance_list.push_back(temp_id_stack.top());
								temp_id_stack.pop();
					}
    break;

  case 108:
/* Line 868 of glr.c  */
#line 672 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
															Streams::verbose() <<"comma_dotted_as_name_seq: dotted_as_name comma_dotted_as_name_seq \n";
								inhertance_list.insert(inhertance_list.begin(),temp_id_stack.top());
								temp_id_stack.pop();
								temp_id="";
				 }
    break;

  case 109:
/* Line 868 of glr.c  */
#line 681 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dotted_as_name: dotted_name \n";
								t_id=new char[10];
								strcpy(t_id,temp_id.c_str());
								temp_id_stack.push(t_id);
								temp_id="";
							}
    break;

  case 110:
/* Line 868 of glr.c  */
#line 687 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dotted_as_name: dotted_name AS NAME\n";}
    break;

  case 111:
/* Line 868 of glr.c  */
#line 690 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 112:
/* Line 868 of glr.c  */
#line 719 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dotted_name: NAME dotted_name_seq \n";
											temp_id=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.r.strVal)+temp_id;
									}
    break;

  case 113:
/* Line 868 of glr.c  */
#line 724 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"dotted_name_seq: '.' NAME \n";
							temp_id=temp_id+"."+(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal);
						}
    break;

  case 114:
/* Line 868 of glr.c  */
#line 728 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
												Streams::verbose() <<"dotted_name_seq: dotted_name_seq '.' NAME \n";
					temp_id=temp_id+"."+(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal);
				 }
    break;

  case 115:
/* Line 868 of glr.c  */
#line 734 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
								Streams::verbose() <<"comma_name_seq :	',' NAME \n";
								((*yyvalp).var)=p->addVariableToGlobalScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal), yylval.r.lineNum, yylval.r.colNum);
								v = ((*yyvalp).var);
								((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
							 }
    break;

  case 116:
/* Line 868 of glr.c  */
#line 740 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
												Streams::verbose() <<"comma_name_seq :	comma_name_seq ',' NAME \n";
												((*yyvalp).var)=p->addVariableToGlobalScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal), yylval.r.lineNum, yylval.r.colNum);
												v = ((*yyvalp).var);
												Node* temp = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
												Node* seq = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn);
												seq->Next = temp;
											 }
    break;

  case 117:
/* Line 868 of glr.c  */
#line 750 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"global_stmt: GLOBAL NAME \n";
							((*yyvalp).var)=p->addVariableToGlobalScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal), yylval.r.lineNum, yylval.r.colNum);
							v = ((*yyvalp).var);
							Node* temp = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
							((*yyvalp).tn) = ast->createGlobalNode(temp,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
						 }
    break;

  case 118:
/* Line 868 of glr.c  */
#line 757 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() <<"global_stmt: GLOBAL NAME comma_name_seq\n";
											((*yyvalp).var)=p->addVariableToGlobalScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.strVal), yylval.r.lineNum, yylval.r.colNum);											
											v = ((*yyvalp).var);
											Node* temp = ast->createIDNode(v,0,(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),yylval.r.lineNum,yylval.r.colNum);
											((*yyvalp).tn) = ast->createGlobalNode(temp,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
										 }
    break;

  case 119:
/* Line 868 of glr.c  */
#line 766 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"nonlocal_stmt:	NONLOCAL NAME \n";}
    break;

  case 120:
/* Line 868 of glr.c  */
#line 767 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"nonlocal_stmt: NONLOCAL NAME comma_name_seq \n";}
    break;

  case 121:
/* Line 868 of glr.c  */
#line 770 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"compound_stmt:  if_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 122:
/* Line 868 of glr.c  */
#line 774 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: while_stmt\n";}
    break;

  case 123:
/* Line 868 of glr.c  */
#line 775 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
								Streams::verbose() <<"compound_stmt: for_stmt\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						   }
    break;

  case 124:
/* Line 868 of glr.c  */
#line 779 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
								Streams::verbose() <<"compound_stmt: try_stmt\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						   }
    break;

  case 125:
/* Line 868 of glr.c  */
#line 783 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: with_stmt\n";}
    break;

  case 126:
/* Line 868 of glr.c  */
#line 784 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {	
								Streams::verbose() <<"compound_stmt: funcdef\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 127:
/* Line 868 of glr.c  */
#line 788 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
									Streams::verbose() <<"compound_stmt: DEF classdef\n";
									((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
								}
    break;

  case 128:
/* Line 868 of glr.c  */
#line 793 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF NAME\n";
											((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,0,0);
											v=((*yyvalp).var);
											v1=new Variable();
											v1=v;
										((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
										visit_num++;
									}
    break;

  case 129:
/* Line 868 of glr.c  */
#line 801 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF access NAME\n";
											Streams::verbose()<<"var_declaration: access_modef ID\n";
									((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false,false);
									v=((*yyvalp).var);
									visit_num++;
									acc_mod="";
									v1=v;
									((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
											}
    break;

  case 130:
/* Line 868 of glr.c  */
#line 810 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF STATIC NAME\n";
											Streams::verbose()<<"var_declaration: STATIC ID\n";
											((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false,false);
											v=((*yyvalp).var);
											v1=v;
											visit_num++;
											((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
										}
    break;

  case 131:
/* Line 868 of glr.c  */
#line 818 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF FINAL NAME\n";
												Streams::verbose()<<"var_declaration: FINAL ID\n";
												((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													v1=v;
													visit_num++;
													((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
										}
    break;

  case 132:
/* Line 868 of glr.c  */
#line 826 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF STATIC FINAL NAME\n";
													Streams::verbose()<<"var_declaration: STATIC FINAL ID\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													visit_num++;
													v1=v;
													((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
												}
    break;

  case 133:
/* Line 868 of glr.c  */
#line 834 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF FINAL STATIC NAME\n";
													Streams::verbose()<<"var_declaration: STATIC FINAL ID\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													v1=v;
													visit_num++;
													((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
												}
    break;

  case 134:
/* Line 868 of glr.c  */
#line 842 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF STATIC access NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													acc_mod="";
													visit_num++;
													v1=v;
													((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
												}
    break;

  case 135:
/* Line 868 of glr.c  */
#line 850 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF FINAL access NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													acc_mod="";
													v1=v;
													visit_num++;
													((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
												}
    break;

  case 136:
/* Line 868 of glr.c  */
#line 858 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF STATIC FINAL access NAME\n";
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
#line 866 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF FINAL STATIC access NAME\n";
															((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
															v=((*yyvalp).var);
															acc_mod="";
															visit_num++;
															v1=v;
															((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
														}
    break;

  case 138:
/* Line 868 of glr.c  */
#line 874 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF access STATIC NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													visit_num++;
													acc_mod="";
													v1=v;
													((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
												}
    break;

  case 139:
/* Line 868 of glr.c  */
#line 882 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF access FINAL NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													acc_mod="";
													visit_num++;
													v1=v;
													((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
											}
    break;

  case 140:
/* Line 868 of glr.c  */
#line 890 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF access STATIC FINAL NAME\n";
														((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
														v=((*yyvalp).var);
														visit_num++;
														acc_mod="";
														v1=v;
														((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
													}
    break;

  case 141:
/* Line 868 of glr.c  */
#line 898 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF access FINAL STATIC NAME\n";
														((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
														v=((*yyvalp).var);
														acc_mod="";
														visit_num++;
														v1=v;
														((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
													}
    break;

  case 142:
/* Line 868 of glr.c  */
#line 906 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF STATIC access FINAL NAME\n";
															((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
															v=((*yyvalp).var);
															acc_mod="";
															visit_num++;
															v1=v;
															((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
														}
    break;

  case 143:
/* Line 868 of glr.c  */
#line 914 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF FINAL access STATIC NAME\n";
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
#line 923 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
									Streams::verbose() <<"elif_seq :  ELIF test ':' suite \n";
									((*yyvalp).tn) = ast->createElseIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);	
													
								}
    break;

  case 145:
/* Line 868 of glr.c  */
#line 928 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() <<"elif_seq : elif_seq ELIF test ':' suite \n";
											Node* elseIfNode = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn);
											elseIfNode->Next = ast->createElseIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
											((*yyvalp).tn) = elseIfNode;		
																			
										  }
    break;

  case 146:
/* Line 868 of glr.c  */
#line 936 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
									p->CloseScope();
									p->createNewScope();
									((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn);
									visit_num=0;
							}
    break;

  case 147:
/* Line 868 of glr.c  */
#line 942 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							p->CloseScope();
							p->createNewScope();
							visit_num=0;
						}
    break;

  case 148:
/* Line 868 of glr.c  */
#line 947 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
								Streams::verbose() <<"if_stmt:	IF test ':' suite \n";
								((*yyvalp).tn) = ast->createIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
								p->CloseScope();
							  }
    break;

  case 149:
/* Line 868 of glr.c  */
#line 952 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() <<"if_stmt:	IF test ':' suite elif_seq \n";
											((*yyvalp).tn) = ast->createIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
											p->CloseScope();
										}
    break;

  case 150:
/* Line 868 of glr.c  */
#line 957 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
												Streams::verbose() <<"if_stmt:	IF test ':' suite ELSE ':' suite \n";
												p->CloseScope();
												Node* elseNode = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
												((*yyvalp).tn) = ast->createIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.tn),elseNode,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
											  }
    break;

  case 151:
/* Line 868 of glr.c  */
#line 963 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
														Streams::verbose() <<"if_stmt:	IF test ':' suite elif_seq ELSE ':' suite \n";
														Node* elseIfNode = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.tn);
														Node* elseNode = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
														elseIfNode->Next = elseNode;
														((*yyvalp).tn) = ast->createIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.tn),elseIfNode,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
														p->CloseScope();
													   }
    break;

  case 152:
/* Line 868 of glr.c  */
#line 972 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							p->createNewScope();
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn);
							visit_num=0;
						}
    break;

  case 153:
/* Line 868 of glr.c  */
#line 977 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
									Streams::verbose() <<"while_stmt: WHILE test ':' suite \n";
									((*yyvalp).tn) = ast->createWhileNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
									p->CloseScope();
								 }
    break;

  case 154:
/* Line 868 of glr.c  */
#line 982 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													Streams::verbose() <<"while_stmt:  WHILE test ':' suite ELSE ':' suite \n";
													Node* whileNode= ast->createWhileNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
													whileNode->Next = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
													((*yyvalp).tn) = whileNode;
												 }
    break;

  case 155:
/* Line 868 of glr.c  */
#line 989 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
									Streams::verbose() <<"while_header:  WHILE test ':' \n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn);//cout<<"in while"<<($<tn>2)->getNodeType()<<endl;
								p->createNewScope();
								visit_num=0;
}
    break;

  case 156:
/* Line 868 of glr.c  */
#line 995 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
												Streams::verbose() <<"for_stmt:   FOR exprlist IN testlist ':' suite \n";
												((*yyvalp).tn) = ast->createForNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.tn), NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
												p->CloseScope();
											   }
    break;

  case 157:
/* Line 868 of glr.c  */
#line 1000 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																Streams::verbose() <<"for_stmt:  FOR exprlist IN testlist ':' suite ELSE ':' suite\n";
																Node* forNode = ast->createForNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.tn), NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (8))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
																forNode->Next = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (8))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
																((*yyvalp).tn) = forNode;															
															   }
    break;

  case 158:
/* Line 868 of glr.c  */
#line 1007 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													p->createNewScope();
													((*yyvalp).tn)= (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
											}
    break;

  case 159:
/* Line 868 of glr.c  */
#line 1011 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
										p->createNewScope();
}
    break;

  case 160:
/* Line 868 of glr.c  */
#line 1014 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
												Streams::verbose() <<" try_stmt:   TRY ':' suite try_except_cla_seq\n";
												p->CloseScope();
												((*yyvalp).tn) = ast->createTryNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
											 }
    break;

  case 161:
/* Line 868 of glr.c  */
#line 1019 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 162:
/* Line 868 of glr.c  */
#line 1028 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 163:
/* Line 868 of glr.c  */
#line 1037 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
												Streams::verbose() <<"try_stmt:  TRY ':' suite FINALLY ':' suite\n";
												p->CloseScope();
												Node* finally = ast->createFinallyNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
												((*yyvalp).tn) = ast->createTryNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.tn), finally, NULL,yylval.r.lineNum,yylval.r.colNum);
											 }
    break;

  case 164:
/* Line 868 of glr.c  */
#line 1044 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
								if(!from_except)
								{
									p->CloseScope();
									p->createNewScope();
								}
								from_except=false;
}
    break;

  case 165:
/* Line 868 of glr.c  */
#line 1052 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 166:
/* Line 868 of glr.c  */
#line 1061 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 167:
/* Line 868 of glr.c  */
#line 1076 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"with_seq:	',' with_item \n";}
    break;

  case 168:
/* Line 868 of glr.c  */
#line 1077 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"with_seq: with_seq ',' with_item\n";}
    break;

  case 169:
/* Line 868 of glr.c  */
#line 1080 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"with_stmt:  WITH with_item ':' suite \n";}
    break;

  case 170:
/* Line 868 of glr.c  */
#line 1081 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"with_stmt: WITH with_item with_seq ':' suite\n";}
    break;

  case 171:
/* Line 868 of glr.c  */
#line 1084 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<" with_item:  test\n";}
    break;

  case 172:
/* Line 868 of glr.c  */
#line 1085 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"with_item: test AS expr\n";}
    break;

  case 173:
/* Line 868 of glr.c  */
#line 1088 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
						p->CloseScope();
						p->createNewScope();
						Streams::verbose() <<"except_clause:  EXCEPT \n";
						((*yyvalp).tn) = ast->createExceptNode(NULL, NULL, NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
					   }
    break;

  case 174:
/* Line 868 of glr.c  */
#line 1094 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
								p->CloseScope();
								p->createNewScope();
								Streams::verbose() <<"except_clause:  EXCEPT test\n";
								((*yyvalp).tn) = ast->createExceptNode(NULL, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
								visit_num=0;
								lastNode=NULL;
							 }
    break;

  case 175:
/* Line 868 of glr.c  */
#line 1102 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"except_clause:  EXCEPT test AS NAME\n";
												p->CloseScope();
												p->createNewScope();
												visit_num=0;
												lastNode=NULL;
										}
    break;

  case 176:
/* Line 868 of glr.c  */
#line 1110 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {	
						((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);	Streams:: verbose() <<"list_stmt : stmt\n";
				}
    break;

  case 177:
/* Line 868 of glr.c  */
#line 1113 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 178:
/* Line 868 of glr.c  */
#line 1126 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"suite:	list_stmt END\n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);	
						}
    break;

  case 179:
/* Line 868 of glr.c  */
#line 1130 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {	((*yyvalp).tn)=NULL;	Streams::verbose() <<"suite:	END\n"; ((*yyvalp).tn)=NULL;}
    break;

  case 180:
/* Line 868 of glr.c  */
#line 1133 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"test:	or_test\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 181:
/* Line 868 of glr.c  */
#line 1134 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"or_test IF or_test ELSE test\n";
										((*yyvalp).tn)=ast->createShortIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
		}
    break;

  case 182:
/* Line 868 of glr.c  */
#line 1138 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"or_seq:	OR and_test \n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 183:
/* Line 868 of glr.c  */
#line 1139 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"or_seq: or_seq OR and_test \n";
								((*yyvalp).tn)=ast->createBooleanNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),OR_OP,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
							}
    break;

  case 184:
/* Line 868 of glr.c  */
#line 1144 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"or_test:	and_test\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 185:
/* Line 868 of glr.c  */
#line 1145 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"or_test:	and_test or_seq\n";
							((*yyvalp).tn)=ast->createBooleanNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),OR_OP,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
							}
    break;

  case 186:
/* Line 868 of glr.c  */
#line 1150 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_seq: AND not_test \n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 187:
/* Line 868 of glr.c  */
#line 1151 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_seq: and_seq AND not_test \n";
									((*yyvalp).tn)=ast->createBooleanNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),AND_OP,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
								}
    break;

  case 188:
/* Line 868 of glr.c  */
#line 1156 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_test:	not_test\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 189:
/* Line 868 of glr.c  */
#line 1157 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_test: not_test and_seq \n";
								((*yyvalp).tn)=ast->createBooleanNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),AND_OP,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
		  }
    break;

  case 190:
/* Line 868 of glr.c  */
#line 1162 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"not_test:	NOT not_test\n";
							((*yyvalp).tn)=ast->createBooleanNode(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NOT_OP,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
							}
    break;

  case 191:
/* Line 868 of glr.c  */
#line 1165 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"not_test:	comparison\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);cout<<((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn))->getNodeType()<<endl;}
    break;

  case 192:
/* Line 868 of glr.c  */
#line 1168 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() <<"comp_op_seq: comp_op expr \n";
											((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
											lastNode=NULL;
										}
    break;

  case 193:
/* Line 868 of glr.c  */
#line 1173 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() <<"comp_op_seq: comp_op_seq comp_op expr \n";
											((*yyvalp).tn)=ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn),NULL,comp_op,yylval.r.lineNum,yylval.r.colNum);	
										}
    break;

  case 194:
/* Line 868 of glr.c  */
#line 1179 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comparison: expr\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
													//cout<<($<tn>1)->getNodeType()<<" Comp"<<endl;

												}
    break;

  case 195:
/* Line 868 of glr.c  */
#line 1183 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
					Streams::verbose() <<"comparison: expr comp_op_seq\n";
					cout <<"the comp operand is "<<comp_op<<endl;
						((*yyvalp).tn)=ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,comp_op,yylval.r.lineNum,yylval.r.colNum);
				}
    break;

  case 196:
/* Line 868 of glr.c  */
#line 1190 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {	
				Streams::verbose() <<"comp_op: '<' \n";
				comp_op=LESS;
			}
    break;

  case 197:
/* Line 868 of glr.c  */
#line 1194 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: '>' \n";comp_op=GREATHER;}
    break;

  case 198:
/* Line 868 of glr.c  */
#line 1195 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
					cout<<"enter to equal "<<endl;
					Streams::verbose() <<"comp_op: EQUAL \n";
					comp_op=EQUALS;
					}
    break;

  case 199:
/* Line 868 of glr.c  */
#line 1200 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: MORE_OR_EQUAL \n";comp_op=EQUALGREATHER;}
    break;

  case 200:
/* Line 868 of glr.c  */
#line 1201 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: LESS_OR_EQUAL \n";comp_op=EQUALLESS;}
    break;

  case 201:
/* Line 868 of glr.c  */
#line 1202 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: MORE_LESS \n";}
    break;

  case 202:
/* Line 868 of glr.c  */
#line 1203 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: NOT_EQUAL \n";comp_op=NOTEQUAL;}
    break;

  case 203:
/* Line 868 of glr.c  */
#line 1204 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IN \n";}
    break;

  case 204:
/* Line 868 of glr.c  */
#line 1205 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: NOT IN \n";}
    break;

  case 205:
/* Line 868 of glr.c  */
#line 1206 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IS \n";}
    break;

  case 206:
/* Line 868 of glr.c  */
#line 1207 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IS NOT \n";}
    break;

  case 207:
/* Line 868 of glr.c  */
#line 1210 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"star_expr: '*' expr \n";}
    break;

  case 208:
/* Line 868 of glr.c  */
#line 1213 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"or_xor_expr_seq: '|' xor_expr \n";}
    break;

  case 209:
/* Line 868 of glr.c  */
#line 1214 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"or_xor_expr_seq: or_xor_expr_seq '|' xor_expr\n";}
    break;

  case 210:
/* Line 868 of glr.c  */
#line 1216 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
					Streams::verbose() <<"expr: xor_expr\n";
					((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
				}
    break;

  case 211:
/* Line 868 of glr.c  */
#line 1220 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"expr: xor_expr or_xor_expr_seq\n";}
    break;

  case 212:
/* Line 868 of glr.c  */
#line 1223 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"sha_and_expr_seq: '^' and_expr \n";}
    break;

  case 213:
/* Line 868 of glr.c  */
#line 1224 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"sha_and_expr_seq: sha_and_expr_seq '^' and_expr\n";}
    break;

  case 214:
/* Line 868 of glr.c  */
#line 1227 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"xor_expr: and_expr\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 215:
/* Line 868 of glr.c  */
#line 1228 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"xor_expr: and_expr sha_and_expr_seq\n";}
    break;

  case 216:
/* Line 868 of glr.c  */
#line 1231 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_shift_expr_seq: '&' shift_expr \n";}
    break;

  case 217:
/* Line 868 of glr.c  */
#line 1232 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_shift_expr_seq: and_shift_expr_seq '&' shift_expr\n";}
    break;

  case 218:
/* Line 868 of glr.c  */
#line 1235 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_expr: shift_expr\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 219:
/* Line 868 of glr.c  */
#line 1236 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_expr: shift_expr and_shift_expr_seq\n";}
    break;

  case 220:
/* Line 868 of glr.c  */
#line 1239 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	LESS_THAN_2 arith_expr \n";}
    break;

  case 221:
/* Line 868 of glr.c  */
#line 1240 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	MORE_THAN_2 arith_expr \n";}
    break;

  case 222:
/* Line 868 of glr.c  */
#line 1241 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	arith_seq LESS_THAN_2 arith_expr \n";}
    break;

  case 223:
/* Line 868 of glr.c  */
#line 1242 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	arith_seq MORE_THAN_2 arith_expr \n";}
    break;

  case 224:
/* Line 868 of glr.c  */
#line 1245 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"shift_expr: arith_expr\n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 225:
/* Line 868 of glr.c  */
#line 1249 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"shift_expr: arith_expr arith_seq\n";}
    break;

  case 226:
/* Line 868 of glr.c  */
#line 1252 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : '+' term \n";
						op=PLUS;
						//cout<<"op1= "<<op<<endl;
						((*yyvalp).operands)=op;
						//cout<<"op = "<<$<operands>$<<endl;
						((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 227:
/* Line 868 of glr.c  */
#line 1259 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 228:
/* Line 868 of glr.c  */
#line 1270 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : term_seq '+' term \n";//op=PLUS;
									k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
									((*yyvalp).operands)=PLUS;
									//op=$<operands>$;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,PLUS,yylval.r.lineNum,yylval.r.colNum);
								}
    break;

  case 229:
/* Line 868 of glr.c  */
#line 1276 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : term_seq '-' term \n";//op=MINUS;
									k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
									((*yyvalp).operands)=MINUS;
									//op=$<operands>$;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,MINUS,yylval.r.lineNum,yylval.r.colNum);
								}
    break;

  case 230:
/* Line 868 of glr.c  */
#line 1284 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arith_expr: term\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
									((*yyvalp).operands)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.operands);
							}
    break;

  case 231:
/* Line 868 of glr.c  */
#line 1288 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() <<"arith_expr: term term_seq\n";
											k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
											//cout<<"the value of op is "<<op<<endl;
											((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,PLUS/**op**/,yylval.r.lineNum,yylval.r.colNum);
											
										}
    break;

  case 232:
/* Line 868 of glr.c  */
#line 1298 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '*' factor \n";
							((*yyvalp).operands)=MULT;
							op=((*yyvalp).operands);
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 233:
/* Line 868 of glr.c  */
#line 1303 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '/' factor \n";
								((*yyvalp).operands)=DIV;
								op=((*yyvalp).operands);
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 234:
/* Line 868 of glr.c  */
#line 1308 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '%' factor \n";
								((*yyvalp).operands)=MOD;
								op=((*yyvalp).operands);
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 235:
/* Line 868 of glr.c  */
#line 1313 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: DIV_2 factor \n";}
    break;

  case 236:
/* Line 868 of glr.c  */
#line 1314 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '*' factor \n";
									k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
									op=MULT;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,op,yylval.r.lineNum,yylval.r.colNum);
									}
    break;

  case 237:
/* Line 868 of glr.c  */
#line 1319 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '/' factor \n";
									k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
									op=DIV;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,op,yylval.r.lineNum,yylval.r.colNum);
									}
    break;

  case 238:
/* Line 868 of glr.c  */
#line 1324 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '%' factor \n";
									op=MOD;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,op,yylval.r.lineNum,yylval.r.colNum);
									}
    break;

  case 239:
/* Line 868 of glr.c  */
#line 1328 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq DIV_2 factor \n";}
    break;

  case 240:
/* Line 868 of glr.c  */
#line 1331 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"term: 	factor\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 241:
/* Line 868 of glr.c  */
#line 1332 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"term: 	factor factor_seq\n";
								k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
								((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,op,yylval.r.lineNum,yylval.r.colNum);
							}
    break;

  case 242:
/* Line 868 of glr.c  */
#line 1338 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor: '+' factor \n";
						((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
						
					}
    break;

  case 243:
/* Line 868 of glr.c  */
#line 1342 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor: '-' factor \n";
						int* xx = new int (0);
						k = ast->createTypeNode((void*)xx,0,0,yylval.r.lineNum,yylval.r.colNum,INT);
						//k=ast->addNext(k,$<tn>2);
						((*yyvalp).tn) = ast->createExprNode(k,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,MINUS,yylval.r.lineNum,yylval.r.colNum);
						
						}
    break;

  case 244:
/* Line 868 of glr.c  */
#line 1349 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor: '~' factor \n";}
    break;

  case 245:
/* Line 868 of glr.c  */
#line 1350 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
		         if(!inside_func&&!inside_while_cond){
					visit_num++;
					Streams::verbose() <<"factor: power\n";
					exist=false;
					//cout<<"visit num= "<<visit_num<<"  "<<yylval.r.lineNum<<"  size = "<<temp_id2.size()<<endl;
					if((visit_num==1)&&(!constant))
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

  case 246:
/* Line 868 of glr.c  */
#line 1424 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"trailer_seq: trailer \n";
										((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
										visit_num++;
									}
    break;

  case 247:
/* Line 868 of glr.c  */
#line 1428 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"trailer_seq: trailer_seq trailer \n";
										((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
										visit_num++;
									}
    break;

  case 248:
/* Line 868 of glr.c  */
#line 1434 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"power:	atom\n";
							//$<tn>$=ast->createCallVarNode(temp_id2.back(),NULL,NULL,NULL);
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 249:
/* Line 868 of glr.c  */
#line 1438 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"power: atom trailer_seq \n";
											//cout<<"the top is "<<temp_id2.back()<<"   "<<temp_id2.size()<<endl;
											((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
											dotvec.insert(dotvec.begin(),(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn));
											((*yyvalp).tn)=ast->createDotNode(dotvec,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
											dotvec.clear();
											inside_func=false;
											//cout <<"insite func "<<inside_func<<endl;
											//temp_id2.pop_back();
										}
    break;

  case 250:
/* Line 868 of glr.c  */
#line 1448 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"power: atom trailer_seq STAR_2 factor \n";}
    break;

  case 251:
/* Line 868 of glr.c  */
#line 1449 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"power: atom STAR_2 factor \n";}
    break;

  case 252:
/* Line 868 of glr.c  */
#line 1452 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"str_seq:	STRING \n"; cout<<"string is"<<((*yyvalp).r.strVal)<<endl;}
    break;

  case 253:
/* Line 868 of glr.c  */
#line 1453 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"str_seq:	str_seq STRING \n";}
    break;

  case 254:
/* Line 868 of glr.c  */
#line 1456 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'(' ')' \n";}
    break;

  case 255:
/* Line 868 of glr.c  */
#line 1457 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'(' testlist_comp ')' \n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn);cout<<((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn))->getNodeType()<<endl; inside_while_cond = true; arrayvec.clear();}
    break;

  case 256:
/* Line 868 of glr.c  */
#line 1458 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'[' ']' \n";
						arrayvec.clear();
						array_right=true;
						//is_list=true;
						((*yyvalp).tn)=ast->createArrayNode(arrayvec,0,0,yylval.r.lineNum,yylval.r.colNum);
						arr_node=static_cast<ArrayNode*>(((*yyvalp).tn));
				}
    break;

  case 257:
/* Line 868 of glr.c  */
#line 1465 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' '}' \n";}
    break;

  case 258:
/* Line 868 of glr.c  */
#line 1466 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' '}' \n";
									((*yyvalp).tn)=ast->createArrayNode(arrayvec,0,0,yylval.r.lineNum,yylval.r.colNum);
									array_right=true;
									arr_node=static_cast<ArrayNode*>(((*yyvalp).tn));
									//is_list=true;
									arrayvec.clear();
									}
    break;

  case 259:
/* Line 868 of glr.c  */
#line 1473 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' dictorsetmaker '}' \n";}
    break;

  case 260:
/* Line 868 of glr.c  */
#line 1474 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 261:
/* Line 868 of glr.c  */
#line 1500 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    { Streams::verbose() <<"atom: NAME()\n";
									//temp_id2.push_back($<r.strVal>1);
									visit_num++;
									parameters.clear();
									//cout<<"enter in name()"<<endl;
									((*yyvalp).tn)=ast->createCallTypeNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.r.strVal),parameters,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
									}
    break;

  case 262:
/* Line 868 of glr.c  */
#line 1507 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    { Streams::verbose() <<"atom: NAME\n";
									//temp_id2.push_back($<r.strVal>1);
									visit_num++;
									((*yyvalp).tn)=ast->createCallTypeNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.strVal),parameters/*$<tn>3*/,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
									parameters.clear();
												}
    break;

  case 263:
/* Line 868 of glr.c  */
#line 1513 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 264:
/* Line 868 of glr.c  */
#line 1524 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_INT "<<(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.intVal)<<endl;;
						int* xx = new int ((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.intVal));
						//cout<<"yhe number is"<<*xx<<endl;
						//cout<<"reference"<<xx<<endl;
						constant=true;
						((*yyvalp).tn) = ast->createTypeNode((void*)xx,0,0,yylval.r.lineNum,yylval.r.colNum,INT);
						//visit_num++;
														}
    break;

  case 265:
/* Line 868 of glr.c  */
#line 1532 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_FLOAT\n"<<(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.floatVal)<<endl;
							constant=true;
							float* x=new float((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.floatVal));
							((*yyvalp).tn) = ast->createTypeNode((void*)x,0,0,yylval.r.lineNum,yylval.r.colNum,FLOAT);
						}
    break;

  case 266:
/* Line 868 of glr.c  */
#line 1537 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_FLOAT\n";
							long *xxx=new long((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.longVal));
							constant=true;
							((*yyvalp).tn) = ast->createTypeNode(&xxx,0,0,yylval.r.lineNum,yylval.r.colNum,LONG);
						}
    break;

  case 267:
/* Line 868 of glr.c  */
#line 1542 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: CHAR_VALUE\n";}
    break;

  case 268:
/* Line 868 of glr.c  */
#line 1543 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 269:
/* Line 868 of glr.c  */
#line 1552 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DOT_3\n";}
    break;

  case 270:
/* Line 868 of glr.c  */
#line 1553 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: NONE\n";}
    break;

  case 271:
/* Line 868 of glr.c  */
#line 1554 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: TRUE\n";
					int* xx = new int (1);
						//cout<<"yhe number is"<<*xx<<endl;
						//cout<<"reference"<<xx<<endl;
						constant=true;
						((*yyvalp).tn) = ast->createTypeNode((void*)xx,0,0,yylval.r.lineNum,yylval.r.colNum,INT);
				}
    break;

  case 272:
/* Line 868 of glr.c  */
#line 1561 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: FALSE\n";
						int* xx = new int (0);
						//cout<<"yhe number is"<<*xx<<endl;
						//cout<<"reference"<<xx<<endl;
						constant=true;
						((*yyvalp).tn) = ast->createTypeNode((void*)xx,0,0,yylval.r.lineNum,yylval.r.colNum,INT);
				}
    break;

  case 273:
/* Line 868 of glr.c  */
#line 1570 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: ',' test\n";
							arrayvec.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
							
							}
    break;

  case 274:
/* Line 868 of glr.c  */
#line 1574 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: ',' star_expr\n";}
    break;

  case 275:
/* Line 868 of glr.c  */
#line 1575 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: comma_test_star_seq ',' test\n";
														arrayvec.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
													}
    break;

  case 276:
/* Line 868 of glr.c  */
#line 1578 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: comma_test_star_seq ',' star_expr\n";}
    break;

  case 277:
/* Line 868 of glr.c  */
#line 1581 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test comp_for\n";}
    break;

  case 278:
/* Line 868 of glr.c  */
#line 1582 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test\n"; ((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
								arrayvec.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn));
							}
    break;

  case 279:
/* Line 868 of glr.c  */
#line 1585 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test   comma_test_star_seq\n";
												((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
												arrayvec.insert(arrayvec.begin(),(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn));
											}
    break;

  case 280:
/* Line 868 of glr.c  */
#line 1589 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 281:
/* Line 868 of glr.c  */
#line 1590 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";
													arrayvec.insert(arrayvec.begin(),(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn));
												}
    break;

  case 282:
/* Line 868 of glr.c  */
#line 1593 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 283:
/* Line 868 of glr.c  */
#line 1594 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 284:
/* Line 868 of glr.c  */
#line 1595 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 285:
/* Line 868 of glr.c  */
#line 1596 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 286:
/* Line 868 of glr.c  */
#line 1597 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 287:
/* Line 868 of glr.c  */
#line 1601 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 288:
/* Line 868 of glr.c  */
#line 1613 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 289:
/* Line 868 of glr.c  */
#line 1632 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 290:
/* Line 868 of glr.c  */
#line 1652 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
												Streams::verbose() <<"trailer:	'[' subscriptlist ']'\n";
												((*yyvalp).tn)=ast->createArrayElementNode(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
												dotvec.push_back(((*yyvalp).tn));
											}
    break;

  case 291:
/* Line 868 of glr.c  */
#line 1661 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_subscript_seq: ',' subscript\n";}
    break;

  case 292:
/* Line 868 of glr.c  */
#line 1662 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_subscript_seq: comma_subscript_seq ',' subscript\n";}
    break;

  case 293:
/* Line 868 of glr.c  */
#line 1665 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 294:
/* Line 868 of glr.c  */
#line 1666 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript comma_subscript_seq\n";
													((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
												}
    break;

  case 295:
/* Line 868 of glr.c  */
#line 1669 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript  ','\n";}
    break;

  case 296:
/* Line 868 of glr.c  */
#line 1670 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript comma_subscript_seq ','\n";
															((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn));
														}
    break;

  case 297:
/* Line 868 of glr.c  */
#line 1675 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 298:
/* Line 868 of glr.c  */
#line 1676 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':'\n";}
    break;

  case 299:
/* Line 868 of glr.c  */
#line 1677 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript: test ':'\n";
							((*yyvalp).tn)=ast->createSubscriptNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),NULL,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
						}
    break;

  case 300:
/* Line 868 of glr.c  */
#line 1680 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' test\n";
								((*yyvalp).tn)=ast->createSubscriptNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
							}
    break;

  case 301:
/* Line 868 of glr.c  */
#line 1683 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' sliceop\n";}
    break;

  case 302:
/* Line 868 of glr.c  */
#line 1684 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' test sliceop\n";}
    break;

  case 303:
/* Line 868 of glr.c  */
#line 1685 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' test\n";
								((*yyvalp).tn)=ast->createSubscriptNode(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
						}
    break;

  case 304:
/* Line 868 of glr.c  */
#line 1688 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' sliceop\n";}
    break;

  case 305:
/* Line 868 of glr.c  */
#line 1689 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' test sliceop\n";}
    break;

  case 306:
/* Line 868 of glr.c  */
#line 1692 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"sliceop: ':'\n";}
    break;

  case 307:
/* Line 868 of glr.c  */
#line 1693 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"sliceop: ':' test\n";}
    break;

  case 308:
/* Line 868 of glr.c  */
#line 1696 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	',' expr \n";
										((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
										if(call_func){
												func_call.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));	
												//expnode=NULL;
									}
									}
    break;

  case 309:
/* Line 868 of glr.c  */
#line 1703 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	',' star_expr \n";}
    break;

  case 310:
/* Line 868 of glr.c  */
#line 1704 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	comma_expr_star_seq ',' expr \n";
															
															if(call_func){
												//cout<<"here1"<<endl;
												func_call.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
												//expnode=NULL;
											}
															((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
														}
    break;

  case 311:
/* Line 868 of glr.c  */
#line 1713 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	comma_expr_star_seq ',' star_expr \n";}
    break;

  case 312:
/* Line 868 of glr.c  */
#line 1716 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr \n";
						((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						if(call_func){
								
								func_call.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn));	
								//expnode=NULL;
						}
					}
    break;

  case 313:
/* Line 868 of glr.c  */
#line 1724 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 314:
/* Line 868 of glr.c  */
#line 1735 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr \n";}
    break;

  case 315:
/* Line 868 of glr.c  */
#line 1736 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr comma_expr_star_seq \n";}
    break;

  case 316:
/* Line 868 of glr.c  */
#line 1737 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 317:
/* Line 868 of glr.c  */
#line 1747 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 318:
/* Line 868 of glr.c  */
#line 1757 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr ',' \n";}
    break;

  case 319:
/* Line 868 of glr.c  */
#line 1758 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr  comma_expr_star_seq ',' \n";}
    break;

  case 320:
/* Line 868 of glr.c  */
#line 1761 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test: ',' test \n";}
    break;

  case 321:
/* Line 868 of glr.c  */
#line 1762 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"',' test comma_test \n";}
    break;

  case 322:
/* Line 868 of glr.c  */
#line 1765 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	test \n";}
    break;

  case 323:
/* Line 868 of glr.c  */
#line 1766 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	test comma_test \n";}
    break;

  case 324:
/* Line 868 of glr.c  */
#line 1767 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	 test ','\n";}
    break;

  case 325:
/* Line 868 of glr.c  */
#line 1768 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	 test comma_test ','\n";}
    break;

  case 326:
/* Line 868 of glr.c  */
#line 1771 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_colon_test_seq:  ',' test ':' test \n";}
    break;

  case 327:
/* Line 868 of glr.c  */
#line 1772 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_colon_test_seq: comma_test_colon_test_seq ',' test ':' test\n";}
    break;

  case 328:
/* Line 868 of glr.c  */
#line 1774 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_seq: ',' test \n";}
    break;

  case 329:
/* Line 868 of glr.c  */
#line 1775 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_seq: comma_test_seq ',' test \n";}
    break;

  case 330:
/* Line 868 of glr.c  */
#line 1778 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comp_for \n";}
    break;

  case 331:
/* Line 868 of glr.c  */
#line 1779 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test \n";}
    break;

  case 332:
/* Line 868 of glr.c  */
#line 1780 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test ',' \n";}
    break;

  case 333:
/* Line 868 of glr.c  */
#line 1781 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comma_test_colon_test_seq \n";}
    break;

  case 334:
/* Line 868 of glr.c  */
#line 1782 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comma_test_colon_test_seq ','\n";}
    break;

  case 335:
/* Line 868 of glr.c  */
#line 1783 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test comp_for\n";}
    break;

  case 336:
/* Line 868 of glr.c  */
#line 1784 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test\n";}
    break;

  case 337:
/* Line 868 of glr.c  */
#line 1785 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ','\n";}
    break;

  case 338:
/* Line 868 of glr.c  */
#line 1786 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ','\n";}
    break;

  case 339:
/* Line 868 of glr.c  */
#line 1787 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test comma_test_seq ','\n";}
    break;

  case 340:
/* Line 868 of glr.c  */
#line 1789 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
								Streams::verbose() <<"classdef: classheader suite\n";
								((*yyvalp).type)=p->finishTypeDeclaration(t);
								((*yyvalp).tn)=ast->createClassNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.type),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
							}
    break;

  case 341:
/* Line 868 of glr.c  */
#line 1795 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
								Streams::verbose() << "class_h: CLASS ID \n";
								colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);

								inhertance_list.clear();
					}
    break;

  case 342:
/* Line 868 of glr.c  */
#line 1803 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
									Streams::verbose() << "class_h: access_modef CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 343:
/* Line 868 of glr.c  */
#line 1810 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
									Streams::verbose() << "class_h: STATIC CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 344:
/* Line 868 of glr.c  */
#line 1817 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
									Streams::verbose() << "class_h: FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 345:
/* Line 868 of glr.c  */
#line 1824 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 346:
/* Line 868 of glr.c  */
#line 1831 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
												Streams::verbose() << "class_h: STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 347:
/* Line 868 of glr.c  */
#line 1838 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 348:
/* Line 868 of glr.c  */
#line 1845 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: STATIC access_modef CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 349:
/* Line 868 of glr.c  */
#line 1852 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 350:
/* Line 868 of glr.c  */
#line 1859 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 351:
/* Line 868 of glr.c  */
#line 1866 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: access_modef STATIC CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 352:
/* Line 868 of glr.c  */
#line 1873 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: access_modef FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 353:
/* Line 868 of glr.c  */
#line 1880 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 354:
/* Line 868 of glr.c  */
#line 1887 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 355:
/* Line 868 of glr.c  */
#line 1894 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 356:
/* Line 868 of glr.c  */
#line 1901 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 357:
/* Line 868 of glr.c  */
#line 1908 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
										Streams::verbose() << "class_h: CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
									t=((*yyvalp).type);
									inhertance_list.clear();
									temp_id="";
									acc_mod="";
								}
    break;

  case 358:
/* Line 868 of glr.c  */
#line 1916 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 359:
/* Line 868 of glr.c  */
#line 1923 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 360:
/* Line 868 of glr.c  */
#line 1930 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 361:
/* Line 868 of glr.c  */
#line 1937 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 362:
/* Line 868 of glr.c  */
#line 1944 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 363:
/* Line 868 of glr.c  */
#line 1951 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 364:
/* Line 868 of glr.c  */
#line 1958 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 365:
/* Line 868 of glr.c  */
#line 1965 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 366:
/* Line 868 of glr.c  */
#line 1972 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 367:
/* Line 868 of glr.c  */
#line 1979 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 368:
/* Line 868 of glr.c  */
#line 1986 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 369:
/* Line 868 of glr.c  */
#line 1993 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 370:
/* Line 868 of glr.c  */
#line 2000 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 371:
/* Line 868 of glr.c  */
#line 2007 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 372:
/* Line 868 of glr.c  */
#line 2014 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 373:
/* Line 868 of glr.c  */
#line 2021 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
														Streams::verbose() << "class_h: CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
												((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
												acc_mod="";
											}
    break;

  case 374:
/* Line 868 of glr.c  */
#line 2028 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																Streams::verbose() << "class_h: access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 375:
/* Line 868 of glr.c  */
#line 2035 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 376:
/* Line 868 of glr.c  */
#line 2042 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 377:
/* Line 868 of glr.c  */
#line 2049 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																	Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 378:
/* Line 868 of glr.c  */
#line 2056 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																	Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 379:
/* Line 868 of glr.c  */
#line 2063 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																		Streams::verbose() << "class_h: STATIC access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 380:
/* Line 868 of glr.c  */
#line 2070 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																	Streams::verbose() << "class_h: FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 381:
/* Line 868 of glr.c  */
#line 2077 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 382:
/* Line 868 of glr.c  */
#line 2084 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 383:
/* Line 868 of glr.c  */
#line 2091 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS NAME '(' arglist ')' ':' \n";}
    break;

  case 384:
/* Line 868 of glr.c  */
#line 2092 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS NAME '(' arglist ')' ':' \n";}
    break;

  case 385:
/* Line 868 of glr.c  */
#line 2093 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 386:
/* Line 868 of glr.c  */
#line 2100 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 387:
/* Line 868 of glr.c  */
#line 2107 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 388:
/* Line 868 of glr.c  */
#line 2114 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 389:
/* Line 868 of glr.c  */
#line 2124 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arg_comma_seq : argument ','\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 390:
/* Line 868 of glr.c  */
#line 2125 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arg_comma_seq : arg_comma_seq argument ',' \n";
													//$<tn>$=ast->addNext($<tn>1,$<tn>2);
											}
    break;

  case 391:
/* Line 868 of glr.c  */
#line 2130 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_arg_seq:	',' argument\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 392:
/* Line 868 of glr.c  */
#line 2131 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_arg_seq:	comma_arg_seq ',' argument\n";
													((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn));
												}
    break;

  case 393:
/* Line 868 of glr.c  */
#line 2138 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arglist: argument\n";
					((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
					}
    break;

  case 394:
/* Line 868 of glr.c  */
#line 2141 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arglist: default_arg\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 395:
/* Line 868 of glr.c  */
#line 2143 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arglist: argument ','\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 396:
/* Line 868 of glr.c  */
#line 2145 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {    
						std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal));
							std::string erro("*" + tempstr);
							char *cstr = new char[erro.length() + 1];
							strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
								amer_par.push_back(my_node);
						
						Streams::verbose() <<"arglist: '*' test\n";
				   }
    break;

  case 397:
/* Line 868 of glr.c  */
#line 2155 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 398:
/* Line 868 of glr.c  */
#line 2170 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
		 								std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.strVal));
							std::string erro("*" + tempstr);
							char *cstr = new char[erro.length() + 1];
							strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
								amer_par.push_back(my_node);
										
										Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";
								 }
    break;

  case 399:
/* Line 868 of glr.c  */
#line 2180 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
											
											std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.strVal));
							std::string erro("*" + tempstr);
							char *cstr = new char[erro.length() + 1];
							strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
								amer_par.push_back(my_node);
											Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";
										 }
    break;

  case 400:
/* Line 868 of glr.c  */
#line 2190 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
		 													std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.strVal));
							std::string erro("*" + tempstr);
							char *cstr = new char[erro.length() + 1];
							strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
								amer_par.push_back(my_node);
															Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";
													   }
    break;

  case 401:
/* Line 868 of glr.c  */
#line 2199 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 402:
/* Line 868 of glr.c  */
#line 2215 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
						std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("**" + tempstr);
										char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
							amer_par.push_back(my_node);
							Streams::verbose() <<"arglist: STAR_2 test\n";
					  }
    break;

  case 403:
/* Line 868 of glr.c  */
#line 2224 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq argument\n";
												//$<tn>$=ast->addNext($<tn>1,$<tn>2);
								}
    break;

  case 404:
/* Line 868 of glr.c  */
#line 2227 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq default_arg\n";}
    break;

  case 405:
/* Line 868 of glr.c  */
#line 2228 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq default_arg_comma_seq default_arg\n";}
    break;

  case 406:
/* Line 868 of glr.c  */
#line 2229 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq argument ','\n";}
    break;

  case 407:
/* Line 868 of glr.c  */
#line 2231 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {		
									std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal));
							std::string erro("*" + tempstr);
							char *cstr = new char[erro.length() + 1];
							strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
								amer_par.push_back(my_node);
									Streams::verbose() <<"arglist: arg_comma_seq '*' test\n";
								  }
    break;

  case 408:
/* Line 868 of glr.c  */
#line 2240 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 409:
/* Line 868 of glr.c  */
#line 2257 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
												
												std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.r.strVal));
							std::string erro("*" + tempstr);
							char *cstr = new char[erro.length() + 1];
							strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
								amer_par.push_back(my_node);
												Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq\n";
											   }
    break;

  case 410:
/* Line 868 of glr.c  */
#line 2267 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
														std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.r.strVal));
							std::string erro("*" + tempstr);
							char *cstr = new char[erro.length() + 1];
							strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
								amer_par.push_back(my_node);
														Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_default_arg_seq\n";
													   }
    break;

  case 411:
/* Line 868 of glr.c  */
#line 2276 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
																		std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.r.strVal));
							std::string erro("*" + tempstr);
							char *cstr = new char[erro.length() + 1];
							strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
								amer_par.push_back(my_node);
																		Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq comma_default_arg_seq\n";
																	 }
    break;

  case 412:
/* Line 868 of glr.c  */
#line 2285 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
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

  case 413:
/* Line 868 of glr.c  */
#line 2302 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {	std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("**" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
											amer_par.push_back(my_node);
										Streams::verbose() <<"arglist: arg_comma_seq STAR_2 test\n";
								    }
    break;

  case 414:
/* Line 868 of glr.c  */
#line 2309 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"arglist: default_arg_comma_seq default_arg\n";}
    break;

  case 415:
/* Line 868 of glr.c  */
#line 2322 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_default_arg_seq: ',' default_arg\n";}
    break;

  case 416:
/* Line 868 of glr.c  */
#line 2323 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_default_arg_seq: comma_default_arg_seq ',' default_arg\n";}
    break;

  case 417:
/* Line 868 of glr.c  */
#line 2326 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"default_arg_comma_seq: default_arg ','\n";}
    break;

  case 418:
/* Line 868 of glr.c  */
#line 2327 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"default_arg_comma_seq: default_arg_comma_seq default_arg ','\n";}
    break;

  case 419:
/* Line 868 of glr.c  */
#line 2329 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {
					Streams::verbose() <<"in_default: '='\n";
					//in_def=true;
					((*yyvalp).tn) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);
				}
    break;

  case 420:
/* Line 868 of glr.c  */
#line 2334 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {parameters.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.r.strVal));Streams::verbose() <<"default_arg: test in_default test\n";
							Node* o=ast->createAssignNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
							((*yyvalp).tn)=ast->addNext(my_node,o);
							amer_par.push_back(((*yyvalp).tn));
							df_par.push_back(((*yyvalp).tn));
							in_def=false;
							}
    break;

  case 421:
/* Line 868 of glr.c  */
#line 2342 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {parameters.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal)); Streams::verbose() <<"argument: 	test\n";
					((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn); 
					if(strcmp((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal),"self")!=0)
						amer_par.push_back(my_node);
					}
    break;

  case 422:
/* Line 868 of glr.c  */
#line 2347 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {parameters.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.r.strVal));Streams::verbose() <<"argument: 	test comp_for\n";
					((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn); 
			}
    break;

  case 423:
/* Line 868 of glr.c  */
#line 2353 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_iter:  comp_for\n";}
    break;

  case 424:
/* Line 868 of glr.c  */
#line 2354 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_iter:  comp_if\n";}
    break;

  case 425:
/* Line 868 of glr.c  */
#line 2357 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_for: 	FOR exprlist IN or_test\n";}
    break;

  case 426:
/* Line 868 of glr.c  */
#line 2358 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_for: FOR exprlist IN or_test comp_iter\n";}
    break;

  case 427:
/* Line 868 of glr.c  */
#line 2361 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_if: IF or_test\n";}
    break;

  case 428:
/* Line 868 of glr.c  */
#line 2362 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_if: IF or_test comp_iter\n";}
    break;


/* Line 868 of glr.c  */
#line 6119 "yacc.cpp"
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
  (!!((Yystate) == (-523)))

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
  (!!((Yytable_value) == (-407)))

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
#line 2365 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project-Copy-Copy\\yaccFinal.y"

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