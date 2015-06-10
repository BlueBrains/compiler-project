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
#define YYLAST   1395

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  113
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  116
/* YYNRULES -- Number of rules.  */
#define YYNRULES  447
/* YYNRULES -- Number of states.  */
#define YYNSTATES  740
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
     408,   410,   412,   414,   416,   418,   420,   423,   426,   428,
     430,   432,   434,   436,   438,   441,   443,   445,   448,   451,
     455,   457,   460,   462,   466,   468,   471,   474,   478,   481,
     485,   488,   492,   495,   499,   501,   503,   505,   507,   509,
     511,   514,   517,   521,   525,   529,   534,   539,   544,   549,
     555,   561,   566,   571,   577,   583,   589,   595,   598,   602,
     604,   608,   611,   614,   618,   623,   629,   631,   635,   639,
     642,   648,   650,   654,   658,   662,   666,   673,   680,   687,
     692,   697,   700,   703,   707,   714,   720,   725,   728,   731,
     735,   739,   744,   749,   752,   756,   761,   767,   769,   773,
     775,   778,   783,   785,   788,   791,   794,   796,   798,   800,
     806,   809,   813,   815,   818,   821,   825,   827,   830,   833,
     835,   838,   842,   844,   847,   849,   851,   853,   855,   857,
     859,   861,   863,   866,   868,   871,   874,   877,   881,   883,
     886,   889,   893,   895,   898,   901,   905,   907,   910,   913,
     916,   920,   924,   926,   929,   932,   935,   939,   943,   945,
     948,   951,   954,   957,   960,   964,   968,   972,   976,   978,
     981,   984,   987,   990,   992,   994,   997,   999,  1002,  1007,
    1011,  1013,  1016,  1019,  1023,  1026,  1029,  1033,  1037,  1039,
    1043,  1048,  1053,  1055,  1057,  1059,  1061,  1063,  1065,  1067,
    1069,  1071,  1074,  1077,  1081,  1085,  1088,  1090,  1093,  1096,
    1100,  1103,  1105,  1108,  1111,  1115,  1118,  1123,  1129,  1135,
    1138,  1142,  1144,  1147,  1150,  1154,  1156,  1158,  1161,  1165,
    1169,  1174,  1177,  1180,  1184,  1186,  1189,  1192,  1195,  1199,
    1203,  1205,  1208,  1210,  1213,  1216,  1220,  1223,  1227,  1230,
    1234,  1236,  1239,  1242,  1246,  1251,  1257,  1260,  1264,  1269,
    1273,  1278,  1283,  1289,  1292,  1294,  1297,  1300,  1304,  1308,
    1312,  1315,  1319,  1323,  1327,  1332,  1337,  1342,  1347,  1353,
    1359,  1364,  1369,  1375,  1381,  1387,  1393,  1398,  1404,  1410,
    1416,  1423,  1430,  1437,  1444,  1452,  1460,  1467,  1474,  1482,
    1490,  1498,  1506,  1512,  1519,  1526,  1533,  1541,  1549,  1557,
    1565,  1574,  1583,  1591,  1599,  1608,  1617,  1626,  1635,  1638,
    1642,  1645,  1649,  1651,  1653,  1656,  1659,  1665,  1669,  1673,
    1678,  1685,  1688,  1691,  1694,  1698,  1702,  1706,  1713,  1718,
    1723,  1729,  1737,  1741,  1744,  1747,  1751,  1754,  1758,  1761,
    1764,  1766,  1769,  1771,  1773,  1778,  1784,  1787
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const short int yyrhs[] =
{
     114,     0,    -1,   115,    -1,   141,   101,   116,    -1,   141,
       1,   116,    -1,   116,    -1,   216,   116,    -1,   216,    -1,
     118,   174,    -1,    15,    44,   120,    24,   175,   102,    -1,
      15,   132,    44,   120,    24,   175,   102,    -1,    15,    44,
     120,   102,    -1,    15,   132,    44,   120,   102,    -1,    15,
      13,    44,   120,    24,   175,   102,    -1,    15,    12,    44,
     120,    24,   175,   102,    -1,    15,    13,    44,   120,   102,
      -1,    15,    12,    44,   120,   102,    -1,    15,    13,    12,
      44,   120,    24,   175,   102,    -1,    15,    12,    13,    44,
     120,    24,   175,   102,    -1,    15,    13,    12,    44,   120,
     102,    -1,    15,    12,    13,    44,   120,   102,    -1,    15,
      12,   132,    44,   120,    24,   175,   102,    -1,    15,    13,
     132,    44,   120,    24,   175,   102,    -1,    15,    13,   132,
      44,   120,   102,    -1,    15,    12,   132,    44,   120,   102,
      -1,    15,    13,    12,   132,    44,   120,    24,   175,   102,
      -1,    15,    12,    13,   132,    44,   120,    24,   175,   102,
      -1,    15,    13,    12,   132,    44,   120,   102,    -1,    15,
      12,    13,   132,    44,   120,   102,    -1,    15,   132,    13,
      44,   120,    24,   175,   102,    -1,    15,   132,    12,    44,
     120,    24,   175,   102,    -1,    15,   132,    13,    44,   120,
     102,    -1,    15,   132,    12,    44,   120,   102,    -1,    15,
     132,    13,    12,    44,   120,    24,   175,   102,    -1,    15,
     132,    12,    13,    44,   120,    24,   175,   102,    -1,    15,
     132,    13,    12,    44,   120,   102,    -1,    15,   132,    12,
      13,    44,   120,   102,    -1,    15,    13,   132,    12,    44,
     120,    24,   175,   102,    -1,    15,    12,   132,    13,    44,
     120,    24,   175,   102,    -1,    15,    13,   132,    12,    44,
     120,   102,    -1,    15,    12,   132,    13,    44,   120,   102,
      -1,    92,    -1,   119,   220,   103,    -1,    92,   103,    -1,
     122,    -1,   151,    -1,   123,   101,    -1,   123,     1,    -1,
     126,    -1,   135,    -1,   136,    -1,   137,    -1,   141,    -1,
     149,    -1,   150,    -1,   134,    -1,    53,    92,   200,    91,
     125,   103,    -1,    53,    92,   125,   103,    -1,    54,    -1,
      55,    -1,    56,    -1,   128,   131,   212,    -1,   128,    -1,
     152,    -1,   152,   127,    -1,   128,   127,    -1,   104,   128,
     127,    -1,   104,   128,    -1,   104,   124,    -1,   130,    -1,
     130,    91,    -1,    91,    -1,   175,   130,    -1,   175,    -1,
     184,   130,    91,    -1,   184,    91,    -1,    91,   175,    -1,
      91,   184,    -1,   130,   129,    -1,   129,    -1,    26,    -1,
      27,    -1,    58,    -1,    28,    -1,    29,    -1,    30,    -1,
      31,    -1,    32,    -1,    33,    -1,    34,    -1,    35,    -1,
      36,    -1,    61,    -1,    62,    -1,    63,    -1,    52,    -1,
     133,   210,    -1,    50,   210,    -1,    73,    -1,   138,    -1,
     139,    -1,   140,    -1,    75,    -1,    76,    -1,    51,   212,
      -1,    51,    -1,   142,    -1,     4,   144,    -1,    91,   145,
      -1,   143,    91,   145,    -1,   145,    -1,   145,   143,    -1,
     146,    -1,   146,    47,    44,    -1,    44,    -1,    44,   147,
      -1,   105,    44,    -1,   147,   105,    44,    -1,    91,    44,
      -1,   148,    91,    44,    -1,    57,    44,    -1,    57,    44,
     148,    -1,    25,    44,    -1,    25,    44,   148,    -1,   157,
      -1,   160,    -1,   163,    -1,   166,    -1,   170,    -1,   117,
      -1,    15,   216,    -1,    15,    44,    -1,    15,   132,    44,
      -1,    15,    13,    44,    -1,    15,    12,    44,    -1,    15,
      13,    12,    44,    -1,    15,    12,    13,    44,    -1,    15,
      13,   132,    44,    -1,    15,    12,   132,    44,    -1,    15,
      13,    12,   132,    44,    -1,    15,    12,    13,   132,    44,
      -1,    15,   132,    13,    44,    -1,    15,   132,    12,    44,
      -1,    15,   132,    13,    12,    44,    -1,    15,   132,    12,
      13,    44,    -1,    15,    13,   132,    12,    44,    -1,    15,
      12,   132,    13,    44,    -1,   155,   174,    -1,   153,   155,
     174,    -1,    18,    -1,   154,   175,   102,    -1,    16,   102,
      -1,   159,   174,    -1,   159,   174,   153,    -1,   159,   174,
     156,   174,    -1,   159,   174,   153,   156,   174,    -1,    17,
      -1,   158,   175,   102,    -1,   158,   175,     1,    -1,   162,
     174,    -1,   162,   174,    16,   102,   174,    -1,    19,    -1,
     161,   175,   102,    -1,   161,   175,     1,    -1,   164,   102,
     174,    -1,   164,     1,   174,    -1,   164,   102,   174,    16,
     102,   174,    -1,   164,     1,   174,    16,   102,   174,    -1,
     164,   102,   174,    16,     1,   174,    -1,    20,   210,    21,
     212,    -1,    20,   210,     1,   212,    -1,    22,   102,    -1,
      22,     1,    -1,   165,   174,   168,    -1,   165,   174,   168,
      16,   102,   174,    -1,   165,   174,   168,   167,   174,    -1,
     165,   174,   167,   174,    -1,    23,   102,    -1,    23,     1,
      -1,   172,   102,   174,    -1,   172,     1,   174,    -1,   168,
     172,   102,   174,    -1,   168,   172,     1,   174,    -1,    91,
     171,    -1,   169,    91,   171,    -1,    46,   171,   102,   174,
      -1,    46,   171,   169,   102,   174,    -1,   175,    -1,   175,
      47,   186,    -1,    72,    -1,    72,   175,    -1,    72,   175,
      47,    44,    -1,   121,    -1,   173,   121,    -1,   173,     6,
      -1,   173,     1,    -1,     6,    -1,     1,    -1,   177,    -1,
     177,    17,   177,    16,   175,    -1,     8,   179,    -1,   176,
       8,   179,    -1,   179,    -1,   179,   176,    -1,     9,   180,
      -1,   178,     9,   180,    -1,   180,    -1,   180,   178,    -1,
      10,   180,    -1,   182,    -1,   183,   186,    -1,   181,   183,
     186,    -1,   186,    -1,   186,   181,    -1,    94,    -1,    95,
      -1,    49,    -1,    71,    -1,    70,    -1,    37,    -1,    11,
      -1,    21,    -1,    10,    21,    -1,    68,    -1,    68,    10,
      -1,    98,   186,    -1,   106,   188,    -1,   185,   106,   188,
      -1,   188,    -1,   188,   185,    -1,   107,   190,    -1,   187,
     107,   190,    -1,   190,    -1,   190,   187,    -1,   108,   192,
      -1,   189,   108,   192,    -1,   192,    -1,   192,   189,    -1,
      59,   194,    -1,    65,   194,    -1,   191,    59,   194,    -1,
     191,    65,   194,    -1,   194,    -1,   194,   191,    -1,    96,
     196,    -1,    97,   196,    -1,   193,    96,   196,    -1,   193,
      97,   196,    -1,   196,    -1,   196,   193,    -1,    98,   197,
      -1,    99,   197,    -1,   100,   197,    -1,    69,   197,    -1,
     195,    98,   197,    -1,   195,    99,   197,    -1,   195,   100,
     197,    -1,   195,    69,   197,    -1,   197,    -1,   197,   195,
      -1,    96,   197,    -1,    97,   197,    -1,   109,   197,    -1,
     199,    -1,   204,    -1,   198,   204,    -1,   201,    -1,   201,
     198,    -1,   201,   198,    40,   197,    -1,   201,    40,   197,
      -1,    66,    -1,   200,    66,    -1,    92,   103,    -1,    92,
     203,   103,    -1,    93,   110,    -1,   111,   112,    -1,    93,
     203,   110,    -1,   111,   215,   112,    -1,    44,    -1,    44,
      92,   103,    -1,    44,    92,   210,   103,    -1,    44,    93,
     206,   110,    -1,    41,    -1,    43,    -1,    42,    -1,    74,
      -1,   200,    -1,    45,    -1,    67,    -1,    39,    -1,    38,
      -1,    91,   175,    -1,    91,   184,    -1,   202,    91,   175,
      -1,   202,    91,   184,    -1,   175,   227,    -1,   175,    -1,
     175,   202,    -1,   175,    91,    -1,   175,   202,    91,    -1,
     184,   227,    -1,   184,    -1,   184,   202,    -1,   184,    91,
      -1,   184,   202,    91,    -1,   105,    44,    -1,   105,    44,
      92,   103,    -1,   105,    44,   119,   210,   103,    -1,   105,
      44,    93,   206,   110,    -1,    91,   207,    -1,   205,    91,
     207,    -1,   207,    -1,   207,   205,    -1,   207,    91,    -1,
     207,   205,    91,    -1,   175,    -1,   102,    -1,   175,   102,
      -1,   175,   102,   175,    -1,   175,   102,   208,    -1,   175,
     102,   175,   208,    -1,   102,   175,    -1,   102,   208,    -1,
     102,   175,   208,    -1,   102,    -1,   102,   175,    -1,    91,
     186,    -1,    91,   184,    -1,   209,    91,   186,    -1,   209,
      91,   184,    -1,   186,    -1,   186,   209,    -1,   184,    -1,
     184,   209,    -1,   186,    91,    -1,   186,   209,    91,    -1,
     184,    91,    -1,   184,   209,    91,    -1,    91,   175,    -1,
      91,   175,   211,    -1,   175,    -1,   175,   211,    -1,   175,
      91,    -1,   175,   211,    91,    -1,    91,   175,   102,   175,
      -1,   213,    91,   175,   102,   175,    -1,    91,   175,    -1,
     214,    91,   175,    -1,   175,   102,   175,   227,    -1,   175,
     102,   175,    -1,   175,   102,   175,    91,    -1,   175,   102,
     175,   213,    -1,   175,   102,   175,   213,    91,    -1,   175,
     227,    -1,   175,    -1,   175,    91,    -1,   175,   214,    -1,
     175,   214,    91,    -1,   217,   102,   174,    -1,   217,     1,
     174,    -1,     5,    44,    -1,   132,     5,    44,    -1,    13,
       5,    44,    -1,    12,     5,    44,    -1,    13,    12,     5,
      44,    -1,    12,    13,     5,    44,    -1,    12,   132,     5,
      44,    -1,    13,   132,     5,    44,    -1,    13,    12,   132,
       5,    44,    -1,    12,    13,   132,     5,    44,    -1,   132,
      13,     5,    44,    -1,   132,    12,     5,    44,    -1,   132,
      13,    12,     5,    44,    -1,   132,    12,    13,     5,    44,
      -1,    13,   132,    12,     5,    44,    -1,    12,   132,    13,
       5,    44,    -1,     5,    44,    92,   103,    -1,   132,     5,
      44,    92,   103,    -1,    13,     5,    44,    92,   103,    -1,
      12,     5,    44,    92,   103,    -1,    13,    12,     5,    44,
      92,   103,    -1,    12,    13,     5,    44,    92,   103,    -1,
      13,   132,     5,    44,    92,   103,    -1,    12,   132,     5,
      44,    92,   103,    -1,    13,    12,   132,     5,    44,    92,
     103,    -1,    12,    13,   132,     5,    44,    92,   103,    -1,
     132,    13,     5,    44,    92,   103,    -1,   132,    12,     5,
      44,    92,   103,    -1,   132,    13,    12,     5,    44,    92,
     103,    -1,   132,    12,    13,     5,    44,    92,   103,    -1,
      13,   132,    12,     5,    44,    92,   103,    -1,    12,   132,
      13,     5,    44,    92,   103,    -1,     5,    44,    92,   144,
     103,    -1,   132,     5,    44,    92,   144,   103,    -1,    13,
       5,    44,    92,   144,   103,    -1,    12,     5,    44,    92,
     144,   103,    -1,    13,    12,     5,    44,    92,   144,   103,
      -1,    12,    13,     5,    44,    92,   144,   103,    -1,    13,
     132,     5,    44,    92,   144,   103,    -1,    12,   132,     5,
      44,    92,   144,   103,    -1,    13,    12,   132,     5,    44,
      92,   144,   103,    -1,    12,    13,   132,     5,    44,    92,
     144,   103,    -1,   132,    13,     5,    44,    92,   144,   103,
      -1,   132,    12,     5,    44,    92,   144,   103,    -1,   132,
      13,    12,     5,    44,    92,   144,   103,    -1,   132,    12,
      13,     5,    44,    92,   144,   103,    -1,    13,   132,    12,
       5,    44,    92,   144,   103,    -1,    12,   132,    13,     5,
      44,    92,   144,   103,    -1,   225,    91,    -1,   218,   225,
      91,    -1,    91,   225,    -1,   219,    91,   225,    -1,   225,
      -1,   224,    -1,   225,    91,    -1,    98,   175,    -1,    98,
     175,    91,    40,   175,    -1,    98,   175,   219,    -1,    98,
     175,   221,    -1,    98,   175,   219,   221,    -1,    98,   175,
     219,    91,    40,   175,    -1,    40,   175,    -1,   218,   225,
      -1,   218,   224,    -1,   218,   222,   224,    -1,   218,   225,
      91,    -1,   218,    98,   175,    -1,   218,    98,   175,    91,
      40,   175,    -1,   218,    98,   175,   219,    -1,   218,    98,
     175,   221,    -1,   218,    98,   175,   219,   221,    -1,   218,
      98,   175,   219,    91,    40,   175,    -1,   218,    40,   175,
      -1,   222,   224,    -1,    91,   224,    -1,   221,    91,   224,
      -1,   224,    91,    -1,   222,   224,    91,    -1,   175,   104,
      -1,   223,   175,    -1,   175,    -1,   175,   227,    -1,   227,
      -1,   228,    -1,    20,   210,    21,   177,    -1,    20,   210,
      21,   177,   226,    -1,    17,   177,    -1,    17,   177,   226,
      -1
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
     576,   577,   580,   581,   582,   584,   587,   591,   597,   603,
     607,   611,   617,   623,   629,   633,   640,   643,   681,   686,
     691,   696,   705,   711,   714,   743,   748,   752,   758,   764,
     774,   781,   790,   791,   794,   798,   806,   815,   819,   820,
     824,   829,   837,   846,   854,   862,   870,   878,   886,   894,
     902,   910,   918,   926,   934,   942,   950,   959,   964,   973,
     977,   984,   990,   995,  1000,  1006,  1015,  1018,  1023,  1029,
    1034,  1041,  1044,  1050,  1057,  1066,  1073,  1080,  1087,  1095,
    1100,  1106,  1109,  1113,  1118,  1126,  1135,  1142,  1150,  1159,
    1168,  1177,  1188,  1201,  1202,  1205,  1206,  1209,  1210,  1213,
    1219,  1227,  1235,  1238,  1245,  1249,  1253,  1254,  1257,  1258,
    1262,  1263,  1268,  1269,  1274,  1275,  1280,  1281,  1286,  1289,
    1292,  1297,  1303,  1307,  1314,  1318,  1319,  1324,  1325,  1326,
    1327,  1328,  1329,  1330,  1331,  1334,  1337,  1338,  1340,  1344,
    1347,  1348,  1351,  1352,  1355,  1356,  1359,  1360,  1363,  1364,
    1365,  1366,  1369,  1373,  1376,  1383,  1394,  1400,  1408,  1412,
    1422,  1427,  1432,  1437,  1438,  1443,  1448,  1452,  1455,  1456,
    1462,  1466,  1473,  1474,  1542,  1546,  1552,  1556,  1567,  1568,
    1571,  1572,  1575,  1576,  1577,  1584,  1585,  1592,  1593,  1619,
    1626,  1632,  1643,  1651,  1656,  1661,  1662,  1671,  1672,  1673,
    1680,  1689,  1693,  1694,  1697,  1700,  1701,  1704,  1708,  1709,
    1712,  1713,  1714,  1715,  1716,  1719,  1732,  1751,  1771,  1780,
    1781,  1784,  1785,  1788,  1789,  1794,  1795,  1796,  1799,  1802,
    1803,  1804,  1807,  1808,  1811,  1812,  1815,  1822,  1823,  1832,
    1835,  1843,  1854,  1855,  1856,  1866,  1876,  1877,  1880,  1881,
    1884,  1885,  1886,  1887,  1890,  1891,  1893,  1894,  1897,  1898,
    1899,  1900,  1901,  1902,  1903,  1904,  1905,  1906,  1908,  1913,
    1919,  1927,  1934,  1941,  1948,  1955,  1962,  1969,  1976,  1983,
    1990,  1997,  2004,  2011,  2018,  2025,  2032,  2040,  2047,  2054,
    2061,  2068,  2075,  2082,  2089,  2096,  2103,  2110,  2117,  2124,
    2131,  2138,  2145,  2152,  2159,  2166,  2173,  2180,  2187,  2194,
    2201,  2208,  2215,  2216,  2217,  2224,  2231,  2238,  2248,  2249,
    2254,  2255,  2262,  2265,  2267,  2269,  2279,  2294,  2304,  2314,
    2323,  2339,  2348,  2351,  2352,  2353,  2355,  2364,  2381,  2391,
    2400,  2409,  2426,  2433,  2437,  2438,  2441,  2442,  2444,  2450,
    2458,  2463,  2469,  2470,  2473,  2474,  2477,  2478
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
  "comma_test_star_seqJ", "augassign", "access", "print_stmt_header",
  "print_stmt", "del_stmt", "pass_stmt", "flow_stmt", "break_stmt",
  "continue_stmt", "return_stmt", "import_stmt", "import_name",
  "comma_dotted_as_name_seq", "dotted_as_names", "dotted_as_name",
  "dotted_name", "dotted_name_seq", "comma_name_seq", "global_stmt",
  "nonlocal_stmt", "compound_stmt", "vardef", "elif_seq",
  "elif_header_name", "elif_header", "else_stmt", "if_stmt",
  "if_header_name", "if_header", "while_stmt", "while_header_name",
  "while_header", "for_stmt", "for_header", "try_header", "try_stmt",
  "finally_stmt", "try_except_cla_seq", "with_seq", "with_stmt",
  "with_item", "except_clause", "list_stmt", "suite", "test", "or_seq",
  "or_test", "and_seq", "and_test", "not_test", "comp_op_seq",
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
       0,   113,   114,   115,   115,   115,   116,   116,   117,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   119,   120,   120,   121,   121,   122,   122,   123,   123,
     123,   123,   123,   123,   123,   123,   124,   124,   125,   125,
     125,   126,   126,   126,   126,   126,   127,   127,   127,   128,
     128,   128,   128,   128,   128,   128,   129,   129,   130,   130,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   132,   132,   132,   133,   134,   135,   136,   137,
     137,   137,   138,   139,   140,   140,   141,   142,   143,   143,
     144,   144,   145,   145,   146,   146,   147,   147,   148,   148,
     149,   149,   150,   150,   151,   151,   151,   151,   151,   151,
     151,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   153,   153,   154,
     155,   156,   157,   157,   157,   157,   158,   159,   159,   160,
     160,   161,   162,   162,   163,   163,   163,   163,   163,   164,
     164,   165,   165,   166,   166,   166,   166,   167,   167,   168,
     168,   168,   168,   169,   169,   170,   170,   171,   171,   172,
     172,   172,   173,   173,   174,   174,   174,   174,   175,   175,
     176,   176,   177,   177,   178,   178,   179,   179,   180,   180,
     181,   181,   182,   182,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   184,   185,   185,   186,   186,
     187,   187,   188,   188,   189,   189,   190,   190,   191,   191,
     191,   191,   192,   192,   193,   193,   193,   193,   194,   194,
     195,   195,   195,   195,   195,   195,   195,   195,   196,   196,
     197,   197,   197,   197,   198,   198,   199,   199,   199,   199,
     200,   200,   201,   201,   201,   201,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   201,   201,   201,   201,   201,
     201,   202,   202,   202,   202,   203,   203,   203,   203,   203,
     203,   203,   203,   203,   203,   204,   204,   204,   204,   205,
     205,   206,   206,   206,   206,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   208,   208,   209,   209,   209,   209,
     210,   210,   210,   210,   210,   210,   210,   210,   211,   211,
     212,   212,   212,   212,   213,   213,   214,   214,   215,   215,
     215,   215,   215,   215,   215,   215,   215,   215,   216,   216,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   218,   218,
     219,   219,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   221,   221,   222,   222,   223,   224,
     225,   225,   226,   226,   227,   227,   228,   228
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
       1,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     2,     2,     3,
       1,     2,     1,     3,     1,     2,     2,     3,     2,     3,
       2,     3,     2,     3,     1,     1,     1,     1,     1,     1,
       2,     2,     3,     3,     3,     4,     4,     4,     4,     5,
       5,     4,     4,     5,     5,     5,     5,     2,     3,     1,
       3,     2,     2,     3,     4,     5,     1,     3,     3,     2,
       5,     1,     3,     3,     3,     3,     6,     6,     6,     4,
       4,     2,     2,     3,     6,     5,     4,     2,     2,     3,
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
       5,     0,     0,   106,     7,     0,   114,   107,   110,   112,
     360,     0,     0,     0,     0,     0,     0,     1,     0,     0,
       0,     0,     0,     6,     0,     0,     0,   115,     0,   111,
       0,     0,   363,     0,     0,     0,     0,   362,     0,     0,
       0,     0,   361,     0,     0,     0,     0,     4,     3,   197,
     196,     0,     0,   156,   161,     0,     0,     0,   290,   289,
     282,   284,   283,   278,   287,     0,     0,   105,    95,     0,
     270,   288,    98,   285,   102,   103,    71,     0,     0,     0,
       0,     0,     0,     0,   129,     0,   192,    44,     0,    48,
      62,    79,    69,     0,    55,    49,    50,    51,    99,   100,
     101,    52,    53,    54,    45,    63,   124,     0,     0,   125,
       0,     0,   126,     0,     0,   127,   128,     0,   359,    73,
     198,   202,   206,   209,     0,   212,   228,   232,   236,   242,
     248,   258,   263,   286,   266,   358,   116,     0,   108,     0,
     113,   376,     0,     0,   365,     0,   366,     0,     0,   364,
       0,   367,     0,     0,   371,     0,   370,     0,   208,     0,
       0,   131,     0,   130,   332,   330,     0,   172,   171,   122,
       0,     0,     0,   187,    97,   340,   104,   120,    76,    77,
     272,   296,   301,     0,   274,     0,   260,   261,   225,   262,
     275,   354,     0,     8,    47,    46,    80,    81,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    82,     0,    65,
       0,    70,    78,    96,    64,     0,   152,     0,   159,     0,
       0,     0,   195,   194,   193,     0,    72,     0,     0,   203,
       0,   207,    75,     0,     0,   220,   221,   219,   216,   223,
     218,   217,   214,   215,   213,     0,     0,   229,     0,   233,
       0,   237,     0,     0,   243,     0,     0,   249,     0,     0,
       0,     0,   259,   271,     0,     0,   267,   264,   117,   109,
     392,   379,     0,     0,   369,     0,   375,   378,     0,     0,
     368,     0,   374,   377,     0,     0,   373,     0,   372,     0,
     134,     0,     0,   133,     0,    41,     0,     0,     0,     0,
     132,   336,   333,   334,   331,     0,     0,     0,   123,   279,
       0,   316,   315,     0,   311,     0,     0,     0,     0,   342,
     341,   121,     0,   298,   297,   295,   303,   302,   300,   273,
     276,   355,     0,   356,   353,   277,     0,    68,    67,    61,
     158,   157,     0,   149,   153,     0,     0,     0,   163,   162,
       0,   165,   164,     0,   189,     0,   173,     0,     0,   200,
       0,   204,     0,    74,   222,   224,     0,   210,   226,     0,
     230,     0,   234,     0,   238,   239,     0,     0,   244,   245,
       0,     0,   253,   250,   251,   252,     0,     0,     0,     0,
     269,   305,     0,   265,   395,   381,     0,     0,   383,     0,
       0,   394,   380,     0,     0,   382,     0,     0,   393,   387,
       0,     0,   386,     0,     0,   136,     0,     0,     0,   138,
     135,     0,     0,     0,   137,    43,     0,     0,   440,     0,
       0,     0,     0,   413,   412,     0,    11,     0,   142,     0,
     141,     0,   327,   326,   337,   335,   170,   169,   118,     0,
     280,   324,   321,   322,   317,   281,   313,   312,   183,   185,
       0,     0,   188,   338,   343,     0,   291,   292,   299,   304,
     346,   349,   357,     0,    66,   151,     0,     0,     0,   147,
     154,     0,     0,     0,   178,   177,   190,   176,     0,     0,
       0,     0,     0,     0,   201,   205,   211,   227,   231,   235,
     240,   241,   246,   247,   257,   254,   255,   256,    41,     0,
       0,   268,   397,   385,     0,   399,   391,     0,   396,   384,
       0,   398,   390,     0,   403,   389,     0,   402,   388,     0,
       0,   140,     0,    16,   146,     0,     0,   139,     0,    15,
     145,     0,   421,   415,   438,   441,     0,     0,     0,   423,
     422,    42,     0,   433,   439,   436,   408,     0,   144,     0,
     143,     0,     0,    12,   329,   328,   119,   325,   323,   318,
     319,   309,   314,   184,   186,   339,     0,   293,   294,   350,
     351,   348,   347,    58,    59,    60,     0,     0,   148,   155,
     150,   160,     0,     0,     0,     0,     0,   175,     0,     0,
     180,   179,   199,   306,     0,     0,   401,   407,   400,   406,
     405,   404,     0,    20,     0,     0,     0,     0,    24,     0,
      19,     0,     0,     0,     0,    23,     0,   417,   418,   432,
     426,   424,   409,   437,     9,     0,     0,    32,     0,     0,
      31,     0,   320,   310,   444,     0,   352,    57,     0,   167,
     168,   166,   191,   174,   182,   181,   308,   307,     0,     0,
      28,    14,     0,    40,     0,     0,     0,    27,    13,     0,
      39,     0,     0,   434,   410,     0,   419,     0,     0,   428,
     429,     0,    36,     0,     0,    35,     0,    10,     0,   445,
     442,   443,     0,     0,     0,    18,     0,     0,    21,    17,
       0,     0,    22,   416,     0,   411,   435,     0,     0,   430,
       0,    30,     0,    29,   446,   344,     0,    56,    26,    38,
      25,    37,   420,   427,     0,    34,    33,   447,   345,   431
};

/* YYPDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,     8,     9,    10,    94,    95,   306,   307,    96,    97,
      98,   347,   596,    99,   219,   100,   101,   102,   220,    11,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    13,
      39,    17,    18,    19,    37,   318,   112,   113,   114,   115,
     354,   355,   356,   357,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   365,   366,   327,   126,   182,   367,
     127,   128,   129,   239,   130,   241,   131,   132,   254,   133,
     255,   134,   257,   135,   259,   136,   261,   137,   264,   138,
     267,   139,   272,   140,   141,   276,   142,   143,   144,   334,
     193,   277,   467,   323,   324,   463,   312,   176,   330,   186,
     590,   343,   202,    14,    15,   439,   637,   440,   638,   441,
     442,   683,   684,   699,   700,   701
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -446
static const short int yypact[] =
{
     282,    31,    43,   374,   285,  -446,  -446,  -446,   200,  -446,
    -446,    72,    22,  -446,   363,    49,    14,  -446,   145,   195,
     208,   224,   427,   202,   255,   442,   100,  -446,   261,   230,
     298,   363,   363,  -446,   630,   630,   272,   220,    31,   240,
     316,    28,   286,   333,   385,   353,   395,   313,   365,   433,
     396,   470,   399,   443,   490,   455,   493,  -446,  -446,  -446,
    -446,  1170,   321,  -446,  -446,  1246,    56,   462,  -446,  -446,
    -446,  -446,  -446,   216,  -446,  1170,  1246,  1170,  -446,   468,
    -446,  -446,  -446,  -446,  -446,  -446,   904,   748,   789,  1284,
    1284,  1284,  1284,    24,  -446,   630,  -446,  -446,    73,  -446,
     684,  -446,   428,  1246,  -446,  -446,  -446,  -446,  -446,  -446,
    -446,  -446,  -446,  -446,  -446,   409,  -446,  1170,   630,  -446,
    1170,   630,  -446,    59,   630,  -446,  -446,   728,  -446,   430,
     501,   514,   515,  -446,   432,   207,   420,   421,   419,    34,
     217,     2,  -446,   465,    64,  -446,  -446,   494,  -446,    31,
    -446,  -446,   434,   149,   447,   498,   451,   502,   150,   457,
     504,   459,   506,   161,   471,   516,   472,   518,  -446,   368,
     389,   474,   467,  -446,   476,   477,    55,  -446,  -446,   478,
    1208,   942,    -8,   523,  -446,   481,  -446,   478,  -446,  -446,
    -446,   105,   146,   473,  -446,   463,  -446,  -446,  -446,  -446,
    -446,    95,   466,  -446,  -446,  -446,  -446,  -446,  -446,  -446,
    -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,   491,  -446,
    1170,   904,  -446,  -446,  -446,    60,   425,    63,   559,   630,
     630,   250,  -446,  -446,  -446,   904,   430,  1170,  1170,   569,
    1170,   570,   904,   489,   564,  -446,  -446,  -446,  -446,   576,
    -446,  -446,  -446,  -446,   207,  1284,  1284,   484,  1284,   485,
    1284,   483,  1284,  1284,    44,  1284,  1284,   244,  1284,  1284,
    1284,  1284,   386,  -446,  1284,   549,   158,  -446,  -446,  -446,
    -446,  -446,   492,   176,   507,   178,   511,  -446,   495,   179,
     513,   185,   517,  -446,   503,   188,   519,   189,   522,   352,
     474,   358,   415,   474,   422,   505,   828,    20,   456,   458,
     474,  1246,   524,  1246,   526,  1170,  1170,   552,   527,  -446,
     520,   980,   528,   510,   530,  1170,   630,   110,  1284,  1170,
     531,   527,  1246,   904,   533,  -446,   904,   534,  -446,  -446,
    -446,  1170,  1170,   535,  -446,  -446,   536,  -446,   409,  -446,
    -446,  -446,   539,  -446,   425,  1170,   630,   630,  -446,  -446,
     542,   613,   616,    69,  1170,   630,   246,    77,   617,  -446,
    1170,  -446,  1170,   904,  -446,  -446,  1284,  -446,  -446,  1284,
    -446,  1284,  -446,  1284,  -446,  -446,  1284,  1284,  -446,  -446,
    1284,  1284,  -446,  -446,  -446,  -446,  1284,  1284,  1284,  1284,
    -446,   330,  1284,  -446,  -446,  -446,   532,   201,  -446,   543,
     203,  -446,  -446,   545,   204,  -446,   550,   221,  -446,  -446,
     551,   249,  -446,   558,   252,   474,   307,    25,   325,   474,
     474,   401,    27,   416,   474,  -446,  1170,  1170,    26,   866,
     561,  1170,  1170,   546,   547,  1170,  -446,   449,   474,   452,
     474,    30,  -446,  -446,  1246,  1246,  -446,  -446,  -446,   621,
    -446,  1170,   565,  -446,   980,  -446,   942,   575,  -446,  -446,
    1170,   630,  -446,   579,  -446,   656,  -446,  -446,   904,   904,
    -446,   148,  1170,   454,  -446,  -446,   630,   630,   577,  -446,
    -446,   630,   581,    79,  -446,  -446,   631,  -446,   582,   630,
      80,   630,   630,  1170,  -446,  -446,  -446,  -446,  -446,  -446,
    -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,   583,   942,
    1246,  -446,  -446,  -446,   585,  -446,  -446,   586,  -446,  -446,
     587,  -446,  -446,   588,  -446,  -446,   589,  -446,  -446,   590,
      35,   474,  1170,  -446,   474,    62,    68,   474,  1170,  -446,
     474,    86,  -446,   594,  -446,  -446,  1170,  1170,  1170,   546,
     603,  -446,   591,   607,  -446,  -446,   596,   598,   474,    87,
     474,    89,  1170,  -446,  -446,  -446,  -446,  -446,  -446,   565,
    -446,  -446,   942,  -446,  -446,  -446,  1170,  -446,  -446,  1170,
     610,  -446,  -446,  -446,  -446,  -446,   599,    16,  -446,  -446,
    -446,  -446,   630,   630,   630,   663,   630,  -446,   630,   630,
    -446,  -446,  -446,  -446,   614,   605,  -446,  -446,  -446,  -446,
    -446,  -446,  1170,  -446,    90,   623,   102,  1170,  -446,  1170,
    -446,   104,   628,   117,  1170,  -446,  1018,   618,   640,  -446,
     642,   607,   632,  -446,  -446,   119,  1170,  -446,   124,  1170,
    -446,   634,  -446,  -446,   196,   635,  1170,  -446,   461,  -446,
    -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,   638,  1170,
    -446,  -446,  1170,  -446,   644,   647,  1170,  -446,  -446,  1170,
    -446,   649,  1170,  -446,  -446,  1056,   640,  1170,  1094,   653,
     640,  1170,  -446,   650,  1170,  -446,   652,  -446,  1170,  -446,
    -446,  -446,  1170,   654,   657,  -446,   655,   659,  -446,  -446,
     660,   661,  -446,  -446,  1170,  -446,  -446,  1170,  1132,   640,
     662,  -446,   666,  -446,   196,  -446,  1170,  -446,  -446,  -446,
    -446,  -446,  -446,  -446,  1170,  -446,  -446,  -446,  -446,  -446
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -446,  -446,  -446,    65,  -446,  -446,   354,   -76,   648,  -446,
    -446,  -446,   101,  -446,  -110,   563,   -86,    96,  -446,    33,
    -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,   765,  -446,
    -446,    32,     5,  -446,  -446,   595,  -446,  -446,  -446,  -446,
    -446,  -446,   423,   429,  -446,  -446,  -446,  -446,  -446,  -446,
    -446,  -446,  -446,  -446,   410,  -446,  -446,  -446,  -315,   418,
    -446,    54,   -75,  -446,  -236,  -446,  -223,   -53,  -446,  -446,
     544,   -62,  -446,   -56,  -446,  -235,  -446,  -225,  -446,  -220,
    -446,  -210,  -446,  -238,   -60,  -446,  -446,   314,  -446,   604,
     712,   529,  -446,   287,  -444,  -445,   633,   -72,   334,  -132,
    -446,  -446,  -446,   747,  -446,  -446,   170,  -446,  -281,   372,
    -446,  -299,  -300,    88,  -153,  -446
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -426
static const short int yytable[] =
{
     183,   368,   185,   174,   184,   224,   444,   443,   168,   175,
     468,   188,   191,   191,   174,   369,   222,   578,   201,   580,
     175,   378,   581,    31,   189,   192,   192,   388,   389,   196,
     197,   223,   199,   380,    61,   198,    23,    26,   335,   338,
     382,   174,   225,   148,   445,   227,   332,   175,   344,   542,
      34,   548,   384,   385,   572,    44,   315,   177,    49,   622,
     229,   350,    68,    69,   358,    70,    71,    72,    73,    74,
     494,   268,    16,   152,   204,    16,   316,    28,   501,    33,
     603,   608,   273,   325,    29,    30,   627,    20,   349,   145,
      80,    81,   629,   262,   326,   172,    57,    58,    83,   263,
     269,   270,   271,   386,   274,    50,   322,   658,   320,   387,
     634,   646,    51,   649,   669,   332,    87,    88,   174,    36,
      89,    90,   446,    32,   175,   332,   672,   543,   676,   549,
     554,   151,   573,    92,   652,    93,   200,   623,   653,   560,
     559,   679,   563,   691,   507,   185,   188,   504,   694,   203,
     222,    35,   512,   513,   279,   583,   508,   222,   178,   189,
     188,   230,   351,   509,   628,   359,   332,   188,   332,   275,
     630,   495,   226,   189,   205,   228,   510,   511,   231,   502,
     189,   604,   609,   456,   457,   282,   341,   371,   635,   647,
     288,   650,   670,    16,    16,   294,   333,   342,   402,   377,
      27,   470,   301,   304,   673,    16,   677,    45,   392,   393,
     394,   395,   471,   698,   400,    46,   332,   244,   245,   680,
      16,   692,    16,    16,   427,   236,   695,   432,   246,    16,
     243,   438,    16,    16,   451,    53,    38,   336,   484,   589,
     185,   185,    40,    54,   247,    16,   462,    16,    16,   452,
     183,   452,   281,   287,   473,   453,   248,   453,   476,   641,
     475,   476,   498,   275,   293,    16,   480,   481,    42,   363,
     174,   477,   472,   363,   477,   249,   175,   250,   251,   405,
     488,   408,   412,   361,   362,   555,     1,     2,   415,   496,
      24,   419,   422,    16,     3,     4,    16,    25,   188,    47,
      41,   252,   253,    55,   523,    52,   526,   529,   180,   181,
      56,   189,   155,   265,   266,   406,   146,   409,   364,   505,
     506,   413,   364,   416,   532,   147,     2,   420,   591,   423,
     157,   149,   426,   169,   170,   431,   514,   515,   516,   517,
     390,   391,   521,     5,     6,     7,     5,     6,     7,   540,
     654,   541,   535,   545,   546,   538,   686,    43,   551,   690,
     150,   552,   553,    45,   438,   171,   562,   564,     2,   544,
     567,   428,   569,    21,   571,     3,     4,   154,   153,    21,
     469,   299,     5,     6,     7,   715,   577,    22,   716,   579,
     155,   322,   574,   574,    24,   183,   425,   156,   575,   575,
     157,   302,   429,   587,   587,   158,   160,   592,   719,   159,
     489,   490,   300,     5,     6,     7,   588,   588,   715,   497,
      48,   162,   518,   519,     5,     6,     7,    50,   612,     5,
       6,     7,    43,   303,   433,     5,     6,     7,   160,   524,
     161,   352,   527,   353,   322,   547,   530,    48,   615,   533,
       5,     6,     7,   536,   165,   396,   539,   167,   174,   430,
     550,    53,   724,    55,   175,   624,   434,   625,   626,   447,
     449,   631,    28,   632,   633,   162,     5,     6,     7,   308,
     309,   639,   640,   562,   397,   398,   399,   164,     5,     6,
       7,   163,   645,   568,   648,   165,   570,   651,   167,   166,
     448,    61,   450,     5,     6,     7,   179,   322,   593,   594,
     595,   310,   187,   218,   655,   593,   594,   595,   237,   221,
      80,   235,   238,   242,   240,   584,   256,   260,   258,    68,
      69,   273,    70,    71,    72,    73,    74,   280,   278,   283,
     598,   599,   284,   285,   346,   601,   286,   668,   290,   289,
     292,   291,   674,   607,   675,   610,   611,    80,    81,   681,
     296,   438,   298,   295,   297,    83,   305,   311,   313,   317,
     328,   693,   329,   340,   696,   360,   339,   370,   345,   372,
     373,   703,    86,    87,    88,   374,   375,    89,    90,    91,
     379,   383,   381,   401,   706,   404,   458,   707,   411,   407,
      92,   710,    93,   410,   711,   414,   418,   713,   435,   417,
     438,   421,   562,   438,   424,   454,   720,   455,   459,   722,
     465,   466,   474,   460,   478,   479,   482,   725,   483,   492,
     464,    59,   493,   503,     1,   522,    60,   565,   566,   732,
      61,   485,   733,   438,   491,    62,   525,    63,   528,    64,
      65,   738,    66,   531,   534,    67,   659,   660,   661,   739,
     663,   537,   664,   665,   561,   576,   582,   461,    68,    69,
    -426,    70,    71,    72,    73,    74,    75,   586,   605,   600,
      76,    77,    78,   602,   606,   636,   613,    79,   616,   617,
     618,   619,   620,   621,   642,   554,    80,    81,   643,  -414,
     644,   656,   657,    82,    83,    84,    85,   662,   667,   685,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,    86,    87,    88,   666,   671,    89,    90,    91,   232,
     678,   687,     1,   688,   233,  -425,   697,   702,    61,    92,
     705,    93,   217,    62,   718,    63,   708,    64,    65,   709,
      66,   712,   721,    67,   723,   520,   726,   728,    61,   704,
     727,   729,   730,   731,   735,    12,    68,    69,   736,    70,
      71,    72,    73,    74,    75,   234,   499,   486,    76,    77,
      78,   348,   331,   487,   500,    79,    68,    69,   218,    70,
      71,    72,    73,    74,    80,    81,   337,   597,   376,    61,
     195,    82,    83,    84,    85,   403,   614,   585,   314,   173,
     689,   558,   737,     0,    80,    81,     0,     0,     0,    86,
      87,    88,    83,     0,    89,    90,    91,    68,    69,     0,
      70,    71,    72,    73,    74,     0,     0,    92,    61,    93,
      87,    88,     0,     0,    89,    90,    91,     0,     0,     0,
       0,   190,     0,     0,     0,    80,    81,    92,     0,    93,
       0,     0,     0,    83,     0,     0,    68,    69,   436,    70,
      71,    72,    73,    74,     0,     0,    61,     0,     0,     0,
       0,    87,    88,     0,     0,    89,    90,    91,     0,     0,
       0,     0,     0,     0,    80,    81,     0,     0,    92,   194,
      93,     0,    83,     0,    68,    69,   556,    70,    71,    72,
      73,    74,     0,     0,    61,     0,     0,     0,     0,     0,
      87,    88,     0,     0,    89,    90,   437,     0,     0,     0,
       0,     0,    80,    81,     0,     0,     0,    92,     0,    93,
      83,     0,    68,    69,     0,    70,    71,    72,    73,    74,
       0,     0,    61,     0,     0,     0,     0,     0,    87,    88,
       0,     0,    89,    90,   557,     0,     0,     0,     0,     0,
      80,    81,     0,     0,     0,    92,     0,    93,    83,     0,
      68,    69,     0,    70,    71,    72,    73,    74,     0,     0,
      61,     0,     0,     0,     0,     0,    87,    88,     0,     0,
      89,    90,    91,     0,     0,     0,     0,     0,    80,    81,
       0,     0,     0,    92,     0,    93,    83,     0,    68,    69,
       0,    70,    71,    72,    73,    74,     0,     0,    61,     0,
       0,     0,     0,     0,    87,    88,     0,     0,    89,    90,
       0,     0,     0,     0,   321,     0,    80,    81,     0,     0,
       0,    92,     0,    93,    83,     0,    68,    69,   682,    70,
      71,    72,    73,    74,     0,     0,    61,     0,     0,     0,
       0,     0,    87,    88,     0,     0,    89,    90,     0,     0,
       0,     0,   461,     0,    80,    81,     0,     0,     0,    92,
       0,    93,    83,     0,    68,    69,   714,    70,    71,    72,
      73,    74,     0,     0,    61,     0,     0,     0,     0,     0,
      87,    88,     0,     0,    89,    90,     0,     0,     0,     0,
       0,     0,    80,    81,     0,     0,     0,    92,     0,    93,
      83,     0,    68,    69,   717,    70,    71,    72,    73,    74,
       0,     0,    61,     0,     0,     0,     0,     0,    87,    88,
       0,     0,    89,    90,     0,     0,     0,     0,     0,     0,
      80,    81,     0,     0,     0,    92,     0,    93,    83,     0,
      68,    69,   734,    70,    71,    72,    73,    74,     0,     0,
      61,     0,     0,     0,     0,     0,    87,    88,     0,     0,
      89,    90,     0,     0,     0,     0,     0,     0,    80,    81,
       0,     0,     0,    92,     0,    93,    83,     0,    68,    69,
       0,    70,    71,    72,    73,    74,     0,     0,     0,     0,
       0,     0,     0,     0,    87,    88,     0,     0,    89,    90,
       0,     0,     0,     0,     0,     0,    80,    81,     0,     0,
       0,    92,     0,    93,    83,     0,    68,    69,     0,    70,
      71,    72,    73,    74,     0,     0,     0,     0,     0,     0,
       0,     0,    87,    88,     0,     0,    89,    90,     0,     0,
       0,     0,     0,     0,    80,    81,     0,     0,     0,    92,
       0,    93,    83,     0,    68,    69,     0,    70,    71,    72,
      73,    74,     0,     0,     0,     0,     0,     0,     0,     0,
      87,    88,     0,     0,    89,    90,    91,     0,     0,     0,
       0,   319,    80,    81,     0,     0,     0,    92,     0,    93,
      83,     0,    68,    69,     0,    70,    71,    72,    73,    74,
       0,     0,     0,     0,     0,     0,     0,     0,    87,    88,
       0,     0,    89,    90,    91,     0,     0,     0,     0,     0,
      80,    81,     0,     0,     0,    92,     0,    93,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,    88,     0,     0,
      89,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,     0,    93
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
       0,     0,     0,     0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0
};

static const short int yycheck[] =
{
      75,   237,    77,    65,    76,   115,   306,   306,    61,    65,
     325,    86,    87,    88,    76,   238,   102,   462,    93,   464,
      76,   256,   466,     1,    86,    87,    88,   265,   266,    89,
      90,   103,    92,   258,    10,    91,     3,     4,   191,   192,
     260,   103,   117,    38,    24,   120,    20,   103,   201,    24,
       1,    24,   262,   263,    24,    22,     1,     1,    25,    24,
       1,     1,    38,    39,     1,    41,    42,    43,    44,    45,
       1,    69,    44,    41,     1,    44,    21,     5,     1,    14,
       1,     1,    66,    91,    12,    13,    24,    44,   220,    35,
      66,    67,    24,    59,   102,    62,    31,    32,    74,    65,
      98,    99,   100,    59,    40,     5,   181,    91,   180,    65,
      24,    24,    12,    24,    24,    20,    92,    93,   180,   105,
      96,    97,   102,   101,   180,    20,    24,   102,    24,   102,
     104,   103,   102,   109,   579,   111,   112,   102,   582,   439,
     439,    24,   441,    24,   379,   220,   221,   370,    24,    95,
     236,   102,   390,   391,   149,   470,   381,   243,   102,   221,
     235,   102,   102,   383,   102,   102,    20,   242,    20,   105,
     102,   102,   118,   235,   101,   121,   386,   387,   124,   102,
     242,   102,   102,   315,   316,   153,    91,   240,   102,   102,
     158,   102,   102,    44,    44,   163,    91,   102,    40,   255,
       0,    91,   169,   170,   102,    44,   102,     5,   268,   269,
     270,   271,   102,    17,   274,    13,    20,    10,    11,   102,
      44,   102,    44,    44,   300,   129,   102,   303,    21,    44,
     134,   306,    44,    44,   310,     5,    91,    91,   348,    91,
     315,   316,    47,    13,    37,    44,   321,    44,    44,   311,
     325,   313,   103,   103,   329,   311,    49,   313,   333,   558,
     332,   336,    16,   105,   103,    44,   341,   342,    44,    23,
     332,   333,   328,    23,   336,    68,   332,    70,    71,   103,
     355,   103,   103,   229,   230,   438,     4,     5,   103,   364,
       5,   103,   103,    44,    12,    13,    44,    12,   373,    44,
      92,    94,    95,     5,   103,    44,   103,   103,    92,    93,
      12,   373,     5,    96,    97,   283,    44,   285,    72,   372,
     376,   289,    72,   291,   103,   105,     5,   295,   481,   297,
       5,    91,   299,    12,    13,   302,   396,   397,   398,   399,
      96,    97,   402,    61,    62,    63,    61,    62,    63,   425,
     586,    44,   103,   429,   430,   103,   637,     5,   434,   640,
      44,   436,   437,     5,   439,    44,   441,   442,     5,    44,
     445,    13,   448,     5,   450,    12,    13,    44,    92,     5,
     326,    13,    61,    62,    63,   685,   461,    13,   687,   464,
       5,   466,   454,   455,     5,   470,    44,    44,   454,   455,
       5,    12,    44,   478,   479,    92,     5,   482,   689,    44,
     356,   357,    44,    61,    62,    63,   478,   479,   718,   365,
       5,     5,    92,    93,    61,    62,    63,     5,   503,    61,
      62,    63,     5,    44,    12,    61,    62,    63,     5,   407,
      44,    16,   410,    18,   519,    44,   414,     5,   520,   417,
      61,    62,    63,   421,     5,    69,   424,     5,   520,    44,
      44,     5,   698,     5,   520,   541,    44,   542,   544,    13,
      12,   547,     5,   548,   550,     5,    61,    62,    63,    12,
      13,   556,   557,   558,    98,    99,   100,    44,    61,    62,
      63,    92,   568,    44,   570,     5,    44,   572,     5,    44,
      44,    10,    44,    61,    62,    63,    44,   582,    54,    55,
      56,    44,    44,   104,   589,    54,    55,    56,    17,    91,
      66,    91,     8,    91,     9,   471,   106,   108,   107,    38,
      39,    66,    41,    42,    43,    44,    45,   103,    44,    92,
     486,   487,    44,    92,    53,   491,    44,   622,    44,    92,
      44,    92,   627,   499,   629,   501,   502,    66,    67,   634,
      44,   636,    44,    92,    92,    74,    92,    91,    91,    91,
      47,   646,    91,   110,   649,    16,   103,     8,   112,     9,
      91,   656,    91,    92,    93,    21,    10,    96,    97,    98,
     106,   108,   107,    44,   669,   103,    44,   672,   103,    92,
     109,   676,   111,    92,   679,    92,   103,   682,   103,    92,
     685,    92,   687,   688,    92,    91,   691,    91,    91,   694,
     110,    91,    91,   103,    91,    91,    91,   702,    92,    16,
     102,     1,    16,    16,     4,   103,     6,    91,    91,   714,
      10,   102,   717,   718,   102,    15,   103,    17,   103,    19,
      20,   726,    22,   103,   103,    25,   602,   603,   604,   734,
     606,   103,   608,   609,   103,    44,    91,   102,    38,    39,
      91,    41,    42,    43,    44,    45,    46,    21,    47,   102,
      50,    51,    52,   102,   102,    91,   103,    57,   103,   103,
     103,   103,   103,   103,    91,   104,    66,    67,    91,   103,
     102,    91,   103,    73,    74,    75,    76,    44,   103,    91,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    91,    92,    93,   110,   102,    96,    97,    98,     1,
     102,    91,     4,    91,     6,   103,   102,   102,    10,   109,
     102,   111,    58,    15,    91,    17,   102,    19,    20,   102,
      22,   102,   102,    25,   102,   401,   102,   102,    10,   658,
     103,   102,   102,   102,   102,     0,    38,    39,   102,    41,
      42,    43,    44,    45,    46,   127,   366,   354,    50,    51,
      52,   218,   187,   354,   366,    57,    38,    39,   104,    41,
      42,    43,    44,    45,    66,    67,   192,   483,   254,    10,
      88,    73,    74,    75,    76,   276,   519,   473,   175,    62,
     640,   439,   724,    -1,    66,    67,    -1,    -1,    -1,    91,
      92,    93,    74,    -1,    96,    97,    98,    38,    39,    -1,
      41,    42,    43,    44,    45,    -1,    -1,   109,    10,   111,
      92,    93,    -1,    -1,    96,    97,    98,    -1,    -1,    -1,
      -1,   103,    -1,    -1,    -1,    66,    67,   109,    -1,   111,
      -1,    -1,    -1,    74,    -1,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    -1,    -1,    10,    -1,    -1,    -1,
      -1,    92,    93,    -1,    -1,    96,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    67,    -1,    -1,   109,   110,
     111,    -1,    74,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,
      92,    93,    -1,    -1,    96,    97,    98,    -1,    -1,    -1,
      -1,    -1,    66,    67,    -1,    -1,    -1,   109,    -1,   111,
      74,    -1,    38,    39,    -1,    41,    42,    43,    44,    45,
      -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    92,    93,
      -1,    -1,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
      66,    67,    -1,    -1,    -1,   109,    -1,   111,    74,    -1,
      38,    39,    -1,    41,    42,    43,    44,    45,    -1,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,
      96,    97,    98,    -1,    -1,    -1,    -1,    -1,    66,    67,
      -1,    -1,    -1,   109,    -1,   111,    74,    -1,    38,    39,
      -1,    41,    42,    43,    44,    45,    -1,    -1,    10,    -1,
      -1,    -1,    -1,    -1,    92,    93,    -1,    -1,    96,    97,
      -1,    -1,    -1,    -1,   102,    -1,    66,    67,    -1,    -1,
      -1,   109,    -1,   111,    74,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    -1,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    92,    93,    -1,    -1,    96,    97,    -1,    -1,
      -1,    -1,   102,    -1,    66,    67,    -1,    -1,    -1,   109,
      -1,   111,    74,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,
      92,    93,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    67,    -1,    -1,    -1,   109,    -1,   111,
      74,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    92,    93,
      -1,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    67,    -1,    -1,    -1,   109,    -1,   111,    74,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,
      -1,    -1,    -1,   109,    -1,   111,    74,    -1,    38,    39,
      -1,    41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    -1,    -1,    96,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,    -1,
      -1,   109,    -1,   111,    74,    -1,    38,    39,    -1,    41,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    93,    -1,    -1,    96,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,   109,
      -1,   111,    74,    -1,    38,    39,    -1,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    93,    -1,    -1,    96,    97,    98,    -1,    -1,    -1,
      -1,   103,    66,    67,    -1,    -1,    -1,   109,    -1,   111,
      74,    -1,    38,    39,    -1,    41,    42,    43,    44,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,
      -1,    -1,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
      66,    67,    -1,    -1,    -1,   109,    -1,   111,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   109,    -1,   111
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     4,     5,    12,    13,    61,    62,    63,   114,   115,
     116,   132,   141,   142,   216,   217,    44,   144,   145,   146,
      44,     5,    13,   132,     5,    12,   132,     0,     5,    12,
      13,     1,   101,   116,     1,   102,   105,   147,    91,   143,
      47,    92,    44,     5,   132,     5,    13,    44,     5,   132,
       5,    12,    44,     5,    13,     5,    12,   116,   116,     1,
       6,    10,    15,    17,    19,    20,    22,    25,    38,    39,
      41,    42,    43,    44,    45,    46,    50,    51,    52,    57,
      66,    67,    73,    74,    75,    76,    91,    92,    93,    96,
      97,    98,   109,   111,   117,   118,   121,   122,   123,   126,
     128,   129,   130,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   149,   150,   151,   152,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   170,   173,   174,   175,
     177,   179,   180,   182,   184,   186,   188,   190,   192,   194,
     196,   197,   199,   200,   201,   174,    44,   105,   145,    91,
      44,   103,   144,    92,    44,     5,    44,     5,    92,    44,
       5,    44,     5,    92,    44,     5,    44,     5,   180,    12,
      13,    44,   132,   216,   184,   186,   210,     1,   102,    44,
      92,    93,   171,   175,   210,   175,   212,    44,   175,   184,
     103,   175,   184,   203,   110,   203,   197,   197,   186,   197,
     112,   175,   215,   174,     1,   101,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    58,   104,   127,
     131,    91,   129,   210,   127,   175,   174,   175,   174,     1,
     102,   174,     1,     6,   121,    91,   130,    17,     8,   176,
       9,   178,    91,   130,    10,    11,    21,    37,    49,    68,
      70,    71,    94,    95,   181,   183,   106,   185,   107,   187,
     108,   189,    59,    65,   191,    96,    97,   193,    69,    98,
      99,   100,   195,    66,    40,   105,   198,   204,    44,   145,
     103,   103,   144,    92,    44,    92,    44,   103,   144,    92,
      44,    92,    44,   103,   144,    92,    44,    92,    44,    13,
      44,   132,    12,    44,   132,    92,   119,   120,    12,    13,
      44,    91,   209,    91,   209,     1,    21,    91,   148,   103,
     210,   102,   175,   206,   207,    91,   102,   169,    47,    91,
     211,   148,    20,    91,   202,   227,    91,   202,   227,   103,
     110,    91,   102,   214,   227,   112,    53,   124,   128,   212,
       1,   102,    16,    18,   153,   154,   155,   156,     1,   102,
      16,   174,   174,    23,    72,   167,   168,   172,   177,   179,
       8,   180,     9,    91,    21,    10,   183,   186,   188,   106,
     190,   107,   192,   108,   194,   194,    59,    65,   196,   196,
      96,    97,   197,   197,   197,   197,    69,    98,    99,   100,
     197,    44,    40,   204,   103,   103,   144,    92,   103,   144,
      92,   103,   103,   144,    92,   103,   144,    92,   103,   103,
     144,    92,   103,   144,    92,    44,   132,   120,    13,    44,
      44,   132,   120,    12,    44,   103,    40,    98,   175,   218,
     220,   222,   223,   224,   225,    24,   102,    13,    44,    12,
      44,   120,   184,   186,    91,    91,   212,   212,    44,    91,
     103,   102,   175,   208,   102,   110,    91,   205,   171,   174,
      91,   102,   186,   175,    91,   210,   175,   184,    91,    91,
     175,   175,    91,    92,   127,   102,   155,   156,   175,   174,
     174,   102,    16,    16,     1,   102,   175,   174,    16,   167,
     172,     1,   102,    16,   179,   180,   186,   188,   190,   192,
     194,   194,   196,   196,   197,   197,   197,   197,    92,    93,
     119,   197,   103,   103,   144,   103,   103,   144,   103,   103,
     144,   103,   103,   144,   103,   103,   144,   103,   103,   144,
     120,    44,    24,   102,    44,   120,   120,    44,    24,   102,
      44,   120,   175,   175,   104,   227,    40,    98,   222,   224,
     225,   103,   175,   224,   175,    91,    91,   175,    44,   120,
      44,   120,    24,   102,   184,   186,    44,   175,   208,   175,
     208,   207,    91,   171,   174,   211,    21,   175,   184,    91,
     213,   227,   175,    54,    55,    56,   125,   200,   174,   174,
     102,   174,   102,     1,   102,    47,   102,   174,     1,   102,
     174,   174,   175,   103,   206,   210,   103,   103,   103,   103,
     103,   103,    24,   102,   120,   175,   120,    24,   102,    24,
     102,   120,   175,   120,    24,   102,    91,   219,   221,   175,
     175,   224,    91,    91,   102,   120,    24,   102,   120,    24,
     102,   175,   208,   207,   177,   175,    91,   103,    91,   174,
     174,   174,    44,   174,   174,   174,   110,   103,   175,    24,
     102,   102,    24,   102,   175,   175,    24,   102,   102,    24,
     102,   175,    40,   224,   225,    91,   221,    91,    91,   219,
     221,    24,   102,   175,    24,   102,   175,   102,    17,   226,
     227,   228,   102,   175,   125,   102,   175,   175,   102,   102,
     175,   175,   102,   175,    40,   225,   224,    40,    91,   221,
     175,   102,   175,   102,   177,   175,   102,   103,   102,   102,
     102,   102,   175,   175,    40,   102,   102,   226,   175,   175
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
#line 158 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 179 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"program : import_stmt ';' temp2 \n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn);}
    break;

  case 4:
/* Line 868 of glr.c  */
#line 180 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"program : import_stmt error temp2 \n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn);}
    break;

  case 5:
/* Line 868 of glr.c  */
#line 181 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"program : temp2 \n";}
    break;

  case 6:
/* Line 868 of glr.c  */
#line 185 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"temp2: classdef temp2\n";
							ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
							//cout<<"enter upper"<<endl;
							out_of_import=true;
						}
    break;

  case 7:
/* Line 868 of glr.c  */
#line 190 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"temp2: classdef \n";
							//ast->createClassNode();
							//cout<<"enter classdef"<<endl;
					}
    break;

  case 8:
/* Line 868 of glr.c  */
#line 207 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 219 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"funcheader:	DEF  NAME parameters ARROW test ':'  \n";}
    break;

  case 10:
/* Line 868 of glr.c  */
#line 220 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"funcheader:  DEF access NAME parameters ARROW test ':'  \n";}
    break;

  case 11:
/* Line 868 of glr.c  */
#line 221 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 232 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 242 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC NAME parameters ARROW test ':' \n";}
    break;

  case 14:
/* Line 868 of glr.c  */
#line 243 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL NAME parameters ARROW test ':' \n";}
    break;

  case 15:
/* Line 868 of glr.c  */
#line 244 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 253 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 262 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC FINAL NAME parameters ARROW test ':' \n";}
    break;

  case 18:
/* Line 868 of glr.c  */
#line 263 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 19:
/* Line 868 of glr.c  */
#line 264 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 273 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 282 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 291 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC access NAME parameters ARROW test ':'  \n";}
    break;

  case 23:
/* Line 868 of glr.c  */
#line 292 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 300 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 309 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC FINAL access NAME parameters ARROW test ':'  \n";}
    break;

  case 26:
/* Line 868 of glr.c  */
#line 310 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL STATIC access NAME parameters ARROW test ':'  \n";}
    break;

  case 27:
/* Line 868 of glr.c  */
#line 311 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 320 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 328 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 30:
/* Line 868 of glr.c  */
#line 329 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access FINAL NAME parameters ARROW test ':'  \n";}
    break;

  case 31:
/* Line 868 of glr.c  */
#line 330 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 339 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 348 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access STATIC FINAL NAME parameters ARROW test ':'  \n";}
    break;

  case 34:
/* Line 868 of glr.c  */
#line 349 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access FINAL STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 35:
/* Line 868 of glr.c  */
#line 350 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 359 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 367 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC access FINAL NAME parameters ARROW test ':'  \n";}
    break;

  case 38:
/* Line 868 of glr.c  */
#line 368 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL access STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 39:
/* Line 868 of glr.c  */
#line 369 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 377 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 387 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
					 inside_func=true;call_func=true; Streams::verbose() <<"inside_func:'(' ";
				 }
    break;

  case 42:
/* Line 868 of glr.c  */
#line 393 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"inside_func arglist ')'\n";}
    break;

  case 43:
/* Line 868 of glr.c  */
#line 394 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"parameters:'(' ')'\n";}
    break;

  case 44:
/* Line 868 of glr.c  */
#line 397 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {	((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);	Streams::verbose() <<"stmt:	simple_stmt \n";
						visit_num=0;
					}
    break;

  case 45:
/* Line 868 of glr.c  */
#line 400 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {	((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);cout<<"line num"<<yylval.r.lineNum<<endl;	Streams::verbose() <<"stmt: compound_stmt\n";
							visit_num=0;
						}
    break;

  case 46:
/* Line 868 of glr.c  */
#line 404 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
								Streams::verbose() <<"simple_stmt: small_stmt ';' \n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 47:
/* Line 868 of glr.c  */
#line 408 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
								Streams::verbose() <<"simple_stmt: small_stmt error \n";
													((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);
							  }
    break;

  case 48:
/* Line 868 of glr.c  */
#line 413 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							Streams::verbose() <<"small_stmt: expr_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 49:
/* Line 868 of glr.c  */
#line 417 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
						Streams::verbose() <<"small_stmt: del_stmt \n";
						((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
					  }
    break;

  case 50:
/* Line 868 of glr.c  */
#line 421 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							Streams::verbose() <<"small_stmt: pass_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
					   }
    break;

  case 51:
/* Line 868 of glr.c  */
#line 425 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							Streams::verbose() <<"small_stmt: flow_stmt \n";
							flowStmt = dynamic_cast<FlowStmtNode*>((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn));

							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
					   }
    break;

  case 52:
/* Line 868 of glr.c  */
#line 431 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							Streams::verbose() <<"small_stmt: import_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						 }
    break;

  case 53:
/* Line 868 of glr.c  */
#line 435 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							Streams::verbose() <<"small_stmt: global_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						 }
    break;

  case 54:
/* Line 868 of glr.c  */
#line 439 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: nonlocal_stmt \n";}
    break;

  case 55:
/* Line 868 of glr.c  */
#line 440 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							Streams::verbose() <<"small_stmt: print_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
							visit_num=0;
							constant=false;
						 }
    break;

  case 56:
/* Line 868 of glr.c  */
#line 448 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 461 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
									((*yyvalp).tn)=ast->createinputNode(NULL,my_input,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
									visit_num=0;
									constant=false;
								}
    break;

  case 58:
/* Line 868 of glr.c  */
#line 467 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							my_input=INT_input;
						}
    break;

  case 59:
/* Line 868 of glr.c  */
#line 470 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							my_input=FLOAT_input;
						}
    break;

  case 60:
/* Line 868 of glr.c  */
#line 473 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							my_input=STRING_input;
						}
    break;

  case 61:
/* Line 868 of glr.c  */
#line 477 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"expr_stmt:	testlist_star_expr augassign testlist \n";}
    break;

  case 62:
/* Line 868 of glr.c  */
#line 478 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"expr_stmt: testlist_star_expr \n";}
    break;

  case 63:
/* Line 868 of glr.c  */
#line 479 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
								Streams::verbose() <<"compound_stmt: vardef\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
								visit_num=0;
							}
    break;

  case 64:
/* Line 868 of glr.c  */
#line 484 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
								Streams::verbose() <<"compound_stmt: vardef\n";
								//$<tn>$=$<tn>1;
								visit_num=0;
								Node *il=new Node();
								if(v1)
								{
									v1->set_init(true);
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
#line 507 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 540 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"right_testlist: '=' testlist_star_expr right_testlist \n";}
    break;

  case 67:
/* Line 868 of glr.c  */
#line 541 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"right_testlist: '=' testlist_star_expr \n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 68:
/* Line 868 of glr.c  */
#line 542 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 69:
/* Line 868 of glr.c  */
#line 547 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: comma_test_star_seqJ \n";}
    break;

  case 70:
/* Line 868 of glr.c  */
#line 548 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: comma_test_star_seqJ ',' \n";}
    break;

  case 71:
/* Line 868 of glr.c  */
#line 549 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"',' \n";}
    break;

  case 72:
/* Line 868 of glr.c  */
#line 550 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: test comma_test_star_seqJ \n";}
    break;

  case 73:
/* Line 868 of glr.c  */
#line 551 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
								Streams::verbose() <<"testlist_star_expr: test \n"; 
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 74:
/* Line 868 of glr.c  */
#line 555 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: star_expr comma_test_star_seqJ ',' \n";}
    break;

  case 75:
/* Line 868 of glr.c  */
#line 556 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: star_expr ',' \n";}
    break;

  case 76:
/* Line 868 of glr.c  */
#line 559 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star : ',' test \n";}
    break;

  case 77:
/* Line 868 of glr.c  */
#line 560 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star : ',' star_expr \n";}
    break;

  case 78:
/* Line 868 of glr.c  */
#line 563 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seqJ : comma_test_star_seqJ comma_test_star \n";}
    break;

  case 79:
/* Line 868 of glr.c  */
#line 564 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seqJ : comma_test_star \n";}
    break;

  case 80:
/* Line 868 of glr.c  */
#line 566 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	PLUS_EQUAL \n";}
    break;

  case 81:
/* Line 868 of glr.c  */
#line 567 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MINUS_EQUAL \n";}
    break;

  case 82:
/* Line 868 of glr.c  */
#line 568 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	STAR_EQUAL \n";}
    break;

  case 83:
/* Line 868 of glr.c  */
#line 569 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	DIV_EQUAL \n";}
    break;

  case 84:
/* Line 868 of glr.c  */
#line 570 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MOD_EQUAL \n";}
    break;

  case 85:
/* Line 868 of glr.c  */
#line 571 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	AND_EQUAL \n";}
    break;

  case 86:
/* Line 868 of glr.c  */
#line 572 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	OR_EQUAL \n";}
    break;

  case 87:
/* Line 868 of glr.c  */
#line 573 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	SHAPOO_EQUAL \n";}
    break;

  case 88:
/* Line 868 of glr.c  */
#line 574 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	LESS_THAN_2_EQUAL \n";}
    break;

  case 89:
/* Line 868 of glr.c  */
#line 575 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MORE_THAN_2_EQUAL \n";}
    break;

  case 90:
/* Line 868 of glr.c  */
#line 576 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	STAR_2_EQUAL \n";}
    break;

  case 91:
/* Line 868 of glr.c  */
#line 577 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	DIV_2_EQUAL \n";}
    break;

  case 92:
/* Line 868 of glr.c  */
#line 580 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose()<<"access_modef: PRIVATE\n";acc_mod="private";pp=true;}
    break;

  case 93:
/* Line 868 of glr.c  */
#line 581 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {pp=false;Streams::verbose()<<"access_modef:	PUBLIC\n";acc_mod="public";pp=false;}
    break;

  case 94:
/* Line 868 of glr.c  */
#line 582 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {pro=true;Streams::verbose()<<"access_modef:	PROTECTED\n";acc_mod="protected";}
    break;

  case 95:
/* Line 868 of glr.c  */
#line 584 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
								visit_num++;
							}
    break;

  case 96:
/* Line 868 of glr.c  */
#line 587 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							Streams::verbose() <<"print_stmt: PRINT exprlist \n";
							((*yyvalp).tn) = ast->createPrintNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
						   }
    break;

  case 97:
/* Line 868 of glr.c  */
#line 591 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							Streams::verbose() <<"del_stmt:   DEL exprlist \n";
							((*yyvalp).tn) = ast->createDelNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
						 }
    break;

  case 98:
/* Line 868 of glr.c  */
#line 597 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
					Streams::verbose() <<"pass_stmt:	PASS \n";
					((*yyvalp).tn) = ast->createPassNode(NULL, NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
				 }
    break;

  case 99:
/* Line 868 of glr.c  */
#line 603 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
						Streams::verbose() <<"flow_stmt:	break_stmt \n";
						((*yyvalp).tn) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
					   }
    break;

  case 100:
/* Line 868 of glr.c  */
#line 607 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
								Streams::verbose() <<"flow_stmt: continue_stmt\n";
								((*yyvalp).tn) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 101:
/* Line 868 of glr.c  */
#line 611 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							Streams::verbose() <<"flow_stmt: return_stmt\n";
							((*yyvalp).tn) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						  }
    break;

  case 102:
/* Line 868 of glr.c  */
#line 617 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
					Streams::verbose() <<"break_stmt: BREAK \n";
					((*yyvalp).tn) = ast->createFlowStmtNode(NULL, NULL, breakNode, NULL,yylval.r.lineNum,yylval.r.colNum);
				  }
    break;

  case 103:
/* Line 868 of glr.c  */
#line 623 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							Streams::verbose() <<"continue_stmt:	CONTINUE \n";
							((*yyvalp).tn) = ast->createFlowStmtNode(NULL, NULL, continueNode, NULL,yylval.r.lineNum,yylval.r.colNum);
						 }
    break;

  case 104:
/* Line 868 of glr.c  */
#line 629 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
									Streams::verbose() <<"return_stmt:	RETURN testlist \n";
									((*yyvalp).tn) = ast->createReturnNode(testfunction,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
								}
    break;

  case 105:
/* Line 868 of glr.c  */
#line 633 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							Streams::verbose() <<"return_stmt:	RETURN \n";
							((*yyvalp).tn) = ast->createReturnNode(testfunction,NULL, NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
						}
    break;

  case 106:
/* Line 868 of glr.c  */
#line 640 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"import_stmt: import_name \n";}
    break;

  case 107:
/* Line 868 of glr.c  */
#line 643 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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

  case 108:
/* Line 868 of glr.c  */
#line 681 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_dotted_as_name_seq: ',' dotted_as_name \n";
														
														inhertance_list.push_back(temp_id_stack.top());
														temp_id_stack.pop();
												}
    break;

  case 109:
/* Line 868 of glr.c  */
#line 686 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_dotted_as_name_seq: comma_dotted_as_name_seq ',' dotted_as_name \n";
																					inhertance_list.push_back(temp_id_stack.top());
																				temp_id_stack.pop();
																		}
    break;

  case 110:
/* Line 868 of glr.c  */
#line 691 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
									Streams::verbose() <<"comma_dotted_as_name_seq: dotted_as_names: dotted_as_name \n";
									inhertance_list.push_back(temp_id_stack.top());
								temp_id_stack.pop();
					}
    break;

  case 111:
/* Line 868 of glr.c  */
#line 696 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
															Streams::verbose() <<"comma_dotted_as_name_seq: dotted_as_name comma_dotted_as_name_seq \n";
								inhertance_list.insert(inhertance_list.begin(),temp_id_stack.top());
								temp_id_stack.pop();
								temp_id="";
				 }
    break;

  case 112:
/* Line 868 of glr.c  */
#line 705 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"dotted_as_name: dotted_name \n";
								t_id=new char[10];
								strcpy(t_id,temp_id.c_str());
								temp_id_stack.push(t_id);
								temp_id="";
							}
    break;

  case 113:
/* Line 868 of glr.c  */
#line 711 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"dotted_as_name: dotted_name AS NAME\n";}
    break;

  case 114:
/* Line 868 of glr.c  */
#line 714 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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

  case 115:
/* Line 868 of glr.c  */
#line 743 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"dotted_name: NAME dotted_name_seq \n";
											temp_id=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.r.strVal)+temp_id;
									}
    break;

  case 116:
/* Line 868 of glr.c  */
#line 748 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							Streams::verbose() <<"dotted_name_seq: '.' NAME \n";
							temp_id=temp_id+"."+(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal);
						}
    break;

  case 117:
/* Line 868 of glr.c  */
#line 752 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
												Streams::verbose() <<"dotted_name_seq: dotted_name_seq '.' NAME \n";
					temp_id=temp_id+"."+(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal);
				 }
    break;

  case 118:
/* Line 868 of glr.c  */
#line 758 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
								Streams::verbose() <<"comma_name_seq :	',' NAME \n";
								((*yyvalp).var)=p->addVariableToGlobalScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal), yylval.r.lineNum, yylval.r.colNum);
								v = ((*yyvalp).var);
								((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
							 }
    break;

  case 119:
/* Line 868 of glr.c  */
#line 764 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
												Streams::verbose() <<"comma_name_seq :	comma_name_seq ',' NAME \n";
												((*yyvalp).var)=p->addVariableToGlobalScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal), yylval.r.lineNum, yylval.r.colNum);
												v = ((*yyvalp).var);
												Node* temp = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
												Node* seq = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn);
												seq->Next = temp;
											 }
    break;

  case 120:
/* Line 868 of glr.c  */
#line 774 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							Streams::verbose() <<"global_stmt: GLOBAL NAME \n";
							((*yyvalp).var)=p->addVariableToGlobalScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal), yylval.r.lineNum, yylval.r.colNum);
							v = ((*yyvalp).var);
							Node* temp = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
							((*yyvalp).tn) = ast->createGlobalNode(temp,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
						 }
    break;

  case 121:
/* Line 868 of glr.c  */
#line 781 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
											Streams::verbose() <<"global_stmt: GLOBAL NAME comma_name_seq\n";
											((*yyvalp).var)=p->addVariableToGlobalScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.strVal), yylval.r.lineNum, yylval.r.colNum);											
											v = ((*yyvalp).var);
											Node* temp = ast->createIDNode(v,0,(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),yylval.r.lineNum,yylval.r.colNum);
											((*yyvalp).tn) = ast->createGlobalNode(temp,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
										 }
    break;

  case 122:
/* Line 868 of glr.c  */
#line 790 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"nonlocal_stmt:	NONLOCAL NAME \n";}
    break;

  case 123:
/* Line 868 of glr.c  */
#line 791 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"nonlocal_stmt: NONLOCAL NAME comma_name_seq \n";}
    break;

  case 124:
/* Line 868 of glr.c  */
#line 794 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							Streams::verbose() <<"compound_stmt:  if_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 125:
/* Line 868 of glr.c  */
#line 798 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
								Streams::verbose() <<"compound_stmt: while_stmt\n";
								if(flowStmt!=NULL){
									flowStmt->setCompoundStmtNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn));
									flowStmt == NULL;
								}
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);									
							}
    break;

  case 126:
/* Line 868 of glr.c  */
#line 806 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
								Streams::verbose() <<"compound_stmt: for_stmt\n";
								if(flowStmt!=NULL){
									flowStmt->setCompoundStmtNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn));
									flowStmt == NULL;
								}
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
									
						   }
    break;

  case 127:
/* Line 868 of glr.c  */
#line 815 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
								Streams::verbose() <<"compound_stmt: try_stmt\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						   }
    break;

  case 128:
/* Line 868 of glr.c  */
#line 819 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: with_stmt\n";}
    break;

  case 129:
/* Line 868 of glr.c  */
#line 820 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {	
								Streams::verbose() <<"compound_stmt: funcdef\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 130:
/* Line 868 of glr.c  */
#line 824 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
									Streams::verbose() <<"compound_stmt: DEF classdef\n";
									((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
								}
    break;

  case 131:
/* Line 868 of glr.c  */
#line 829 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF NAME\n";
											((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,0,0);
											v=((*yyvalp).var);
											v1=new Variable();
											v1=v;
										((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
										visit_num++;
									}
    break;

  case 132:
/* Line 868 of glr.c  */
#line 837 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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

  case 133:
/* Line 868 of glr.c  */
#line 846 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF STATIC NAME\n";
											Streams::verbose()<<"var_declaration: STATIC NAME\n";
											((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false,false);
											v=((*yyvalp).var);
											v1=v;
											visit_num++;
											((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
										}
    break;

  case 134:
/* Line 868 of glr.c  */
#line 854 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF FINAL NAME\n";
												Streams::verbose()<<"var_declaration: FINAL NAME\n";
												((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													v1=v;
													visit_num++;
													((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
										}
    break;

  case 135:
/* Line 868 of glr.c  */
#line 862 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF STATIC FINAL NAME\n";
													Streams::verbose()<<"var_declaration: STATIC FINAL NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													visit_num++;
													v1=v;
													((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
												}
    break;

  case 136:
/* Line 868 of glr.c  */
#line 870 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF FINAL STATIC NAME\n";
													Streams::verbose()<<"var_declaration: STATIC FINAL NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													v1=v;
													visit_num++;
													((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
												}
    break;

  case 137:
/* Line 868 of glr.c  */
#line 878 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF STATIC access NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													acc_mod="";
													visit_num++;
													v1=v;
													((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
												}
    break;

  case 138:
/* Line 868 of glr.c  */
#line 886 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF FINAL access NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													acc_mod="";
													v1=v;
													visit_num++;
													((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
												}
    break;

  case 139:
/* Line 868 of glr.c  */
#line 894 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF STATIC FINAL access NAME\n";
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
#line 902 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF FINAL STATIC access NAME\n";
															((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
															v=((*yyvalp).var);
															acc_mod="";
															visit_num++;
															v1=v;
															((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
														}
    break;

  case 141:
/* Line 868 of glr.c  */
#line 910 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF access STATIC NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													visit_num++;
													acc_mod="";
													v1=v;
													((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
												}
    break;

  case 142:
/* Line 868 of glr.c  */
#line 918 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF access FINAL NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													acc_mod="";
													visit_num++;
													v1=v;
													((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
											}
    break;

  case 143:
/* Line 868 of glr.c  */
#line 926 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF access STATIC FINAL NAME\n";
														((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
														v=((*yyvalp).var);
														visit_num++;
														acc_mod="";
														v1=v;
														((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
													}
    break;

  case 144:
/* Line 868 of glr.c  */
#line 934 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF access FINAL STATIC NAME\n";
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
#line 942 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF STATIC access FINAL NAME\n";
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
#line 950 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF FINAL access STATIC NAME\n";
														((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
														v=((*yyvalp).var);
														acc_mod="";
														visit_num++;
														v1=v;
														((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
													}
    break;

  case 147:
/* Line 868 of glr.c  */
#line 959 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
									Streams::verbose() <<"elif_seq :  ELIF test ':' suite \n";
									((*yyvalp).tn) = ast->createElseIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);	
													
								}
    break;

  case 148:
/* Line 868 of glr.c  */
#line 964 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
											Streams::verbose() <<"elif_seq : elif_seq ELIF test ':' suite \n";
											Node* elseIfNode = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn);
											Node* temp = ast->createElseIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
											elseIfNode = ast->addNext(elseIfNode,temp);
											((*yyvalp).tn) = elseIfNode;		
																			
										  }
    break;

  case 149:
/* Line 868 of glr.c  */
#line 973 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							visit_num++;

}
    break;

  case 150:
/* Line 868 of glr.c  */
#line 977 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
									p->CloseScope();
									p->createNewScope();
									((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn);
									visit_num=0;
							}
    break;

  case 151:
/* Line 868 of glr.c  */
#line 984 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							p->CloseScope();
							p->createNewScope();
							visit_num=0;
						}
    break;

  case 152:
/* Line 868 of glr.c  */
#line 990 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
								Streams::verbose() <<"if_stmt:	IF test ':' suite \n";
								((*yyvalp).tn) = ast->createIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
								p->CloseScope();
							  }
    break;

  case 153:
/* Line 868 of glr.c  */
#line 995 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
											Streams::verbose() <<"if_stmt:	IF test ':' suite elif_seq \n";
											((*yyvalp).tn) = ast->createIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
											p->CloseScope();
										}
    break;

  case 154:
/* Line 868 of glr.c  */
#line 1000 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
												Streams::verbose() <<"if_stmt:	IF test ':' suite ELSE ':' suite \n";
												p->CloseScope();
												Node* elseNode = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
												((*yyvalp).tn) = ast->createIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.tn),elseNode,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
											  }
    break;

  case 155:
/* Line 868 of glr.c  */
#line 1006 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
														Streams::verbose() <<"if_stmt:	IF test ':' suite elif_seq ELSE ':' suite \n";
														Node* elseIfNode = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.tn);
														Node* elseNode = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
														elseIfNode=ast->addNext(elseIfNode,elseNode);
														((*yyvalp).tn) = ast->createIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.tn),elseIfNode,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
														p->CloseScope();
													   }
    break;

  case 156:
/* Line 868 of glr.c  */
#line 1015 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
						visit_num++;
					}
    break;

  case 157:
/* Line 868 of glr.c  */
#line 1018 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							p->createNewScope();
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn);
							visit_num=0;
						}
    break;

  case 158:
/* Line 868 of glr.c  */
#line 1023 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							p->createNewScope();
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn);
							visit_num=0;
						}
    break;

  case 159:
/* Line 868 of glr.c  */
#line 1029 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
									Streams::verbose() <<"while_stmt: WHILE test ':' suite \n";
									((*yyvalp).tn) = ast->createWhileNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
									p->CloseScope();
								 }
    break;

  case 160:
/* Line 868 of glr.c  */
#line 1034 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
													Streams::verbose() <<"while_stmt:  WHILE test ':' suite ELSE ':' suite \n";
													Node* whileNode= ast->createWhileNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
													whileNode->Next = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
													((*yyvalp).tn) = whileNode;
												 }
    break;

  case 161:
/* Line 868 of glr.c  */
#line 1041 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
								visit_num++;
							}
    break;

  case 162:
/* Line 868 of glr.c  */
#line 1044 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
								Streams::verbose() <<"while_header:  WHILE test ':' \n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn);//cout<<"in while"<<($<tn>2)->getNodeType()<<endl;
								p->createNewScope();
								visit_num=0;
							 }
    break;

  case 163:
/* Line 868 of glr.c  */
#line 1050 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
								Streams::verbose() <<"while_header:  WHILE test error \n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn);cout<<"in while"<<((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn))->getNodeType()<<endl;
								p->createNewScope();
								visit_num=0;
							 }
    break;

  case 164:
/* Line 868 of glr.c  */
#line 1057 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
												Streams::verbose() <<"for_stmt:   FOR exprlist IN testlist ':' suite \n";
												//$<tn>$ = ast->createForNode($<tn>6, NULL, lastNode, $<tn>4, NULL,yylval.r.lineNum,yylval.r.colNum);
												//Node* temp=ast->addNext(lastNode,$<tn>6);												
												Node* forNode = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn);
												forNode->Son->Next = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn);
												((*yyvalp).tn) = forNode;
												p->CloseScope();
											   }
    break;

  case 165:
/* Line 868 of glr.c  */
#line 1066 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
												Streams::verbose() <<"for_stmt:   FOR exprlist IN testlist error suite \n";
												Node* forNode = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn);
												forNode->Son->Next = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn);
												((*yyvalp).tn) = forNode;
												p->CloseScope();
											   }
    break;

  case 166:
/* Line 868 of glr.c  */
#line 1073 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
																Streams::verbose() <<"for_stmt:  FOR exprlist IN testlist ':' suite ELSE ':' suite\n";
													Node* forNode = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.tn);
													forNode->Son->Next = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.tn);													
													forNode->Next = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (6))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
																((*yyvalp).tn) = forNode;															
															   }
    break;

  case 167:
/* Line 868 of glr.c  */
#line 1080 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
																Streams::verbose() <<"for_stmt:  FOR exprlist IN testlist error suite ELSE ':' suite\n";
													Node* forNode = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.tn);
													forNode->Son->Next = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.tn);
													forNode->Next = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (6))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
																((*yyvalp).tn) = forNode;															
															   }
    break;

  case 168:
/* Line 868 of glr.c  */
#line 1087 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
																Streams::verbose() <<"for_stmt:  FOR exprlist IN testlist ':' suite ELSE error suite\n";
													Node* forNode = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.tn);
													forNode->Son->Next = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.tn);
													forNode->Next = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (6))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
																((*yyvalp).tn) = forNode;															
															   }
    break;

  case 169:
/* Line 868 of glr.c  */
#line 1095 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
					((*yyvalp).tn) = ast->createForNode(lastNode, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
					visit_num=0;
					p->createNewScope();
			}
    break;

  case 170:
/* Line 868 of glr.c  */
#line 1100 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
					((*yyvalp).tn) = ast->createForNode(lastNode, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
					visit_num=0;
					p->createNewScope();
			}
    break;

  case 171:
/* Line 868 of glr.c  */
#line 1106 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
										p->createNewScope();
					 }
    break;

  case 172:
/* Line 868 of glr.c  */
#line 1109 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
										p->createNewScope();
					 }
    break;

  case 173:
/* Line 868 of glr.c  */
#line 1113 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
												Streams::verbose() <<" try_stmt:   TRY ':' suite try_except_cla_seq\n";
												p->CloseScope();
												((*yyvalp).tn) = ast->createTryNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
											 }
    break;

  case 174:
/* Line 868 of glr.c  */
#line 1118 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
																p->CloseScope();
																Streams::verbose() <<" try_stmt: TRY ':' suite try_except_cla_seq ELSE ':' suite\n";
																Node* except = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.tn);
																Node* temp = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (6))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
																except = ast->addNext(except,temp);
																((*yyvalp).tn) = ast->createTryNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
															 }
    break;

  case 175:
/* Line 868 of glr.c  */
#line 1126 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
																	Streams::verbose() <<"try_stmt:  TRY ':' suite try_except_cla_seq FINALLY ':' suite\n";
																Node* except = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.tn);
																p->CloseScope();
																Node* temp = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
																except = ast->addNext(except,temp);
																except->Next = ast->createFinallyNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
																((*yyvalp).tn) = ast->createTryNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
																}
    break;

  case 176:
/* Line 868 of glr.c  */
#line 1135 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
												Streams::verbose() <<"try_stmt:  TRY ':' suite FINALLY ':' suite\n";
												p->CloseScope();
												Node* finally = ast->createFinallyNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
												((*yyvalp).tn) = ast->createTryNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.tn), finally, NULL,yylval.r.lineNum,yylval.r.colNum);
											 }
    break;

  case 177:
/* Line 868 of glr.c  */
#line 1142 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1150 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1159 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1168 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1177 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
																	Streams::verbose() <<"try_except_cla_seq: try_except_cla_seq except_clause ':' suite\n";
																	Node* except_a = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.tn);
																	Node* except_b = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.tn);
																	except_a = ast->addNext(except_a,except_b);
																	p->CloseScope();
																	p->createNewScope();
																	except_b->Son = (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.tn);
																	((*yyvalp).tn) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.tn);
																	from_except=true;
																}
    break;

  case 182:
/* Line 868 of glr.c  */
#line 1188 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
																	Streams::verbose() <<"try_except_cla_seq: try_except_cla_seq except_clause error suite\n";
																	Node* except_a = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.tn);
																	Node* except_b = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.tn);
																	except_a = ast->addNext(except_a,except_b);																	
																	p->CloseScope();
																	p->createNewScope();
																	except_b->Son = (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.tn);
																	((*yyvalp).tn) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.tn);
																	from_except=true;
																}
    break;

  case 183:
/* Line 868 of glr.c  */
#line 1201 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"with_seq:	',' with_item \n";}
    break;

  case 184:
/* Line 868 of glr.c  */
#line 1202 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"with_seq: with_seq ',' with_item\n";}
    break;

  case 185:
/* Line 868 of glr.c  */
#line 1205 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"with_stmt:  WITH with_item ':' suite \n";}
    break;

  case 186:
/* Line 868 of glr.c  */
#line 1206 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"with_stmt: WITH with_item with_seq ':' suite\n";}
    break;

  case 187:
/* Line 868 of glr.c  */
#line 1209 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<" with_item:  test\n";}
    break;

  case 188:
/* Line 868 of glr.c  */
#line 1210 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"with_item: test AS expr\n";}
    break;

  case 189:
/* Line 868 of glr.c  */
#line 1213 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
						p->CloseScope();
						p->createNewScope();
						Streams::verbose() <<"except_clause:  EXCEPT \n";
						((*yyvalp).tn) = ast->createExceptNode(NULL, NULL, NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
					   }
    break;

  case 190:
/* Line 868 of glr.c  */
#line 1219 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1227 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"except_clause:  EXCEPT test AS NAME\n";
												p->CloseScope();
												p->createNewScope();
												visit_num=0;
												lastNode=NULL;
										}
    break;

  case 192:
/* Line 868 of glr.c  */
#line 1235 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {	
						((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);	Streams:: verbose() <<"list_stmt : stmt\n";
				}
    break;

  case 193:
/* Line 868 of glr.c  */
#line 1238 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
								Streams:: verbose() <<"list_stmt : stmt list_stmt\n";
								ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);	
							}
    break;

  case 194:
/* Line 868 of glr.c  */
#line 1245 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							Streams::verbose() <<"suite:	list_stmt END\n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);	
						}
    break;

  case 195:
/* Line 868 of glr.c  */
#line 1249 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							Streams::verbose() <<"suite:	list_stmt error\n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);	
						}
    break;

  case 196:
/* Line 868 of glr.c  */
#line 1253 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {	((*yyvalp).tn)=NULL;	Streams::verbose() <<"suite:	END\n"; ((*yyvalp).tn)=NULL;}
    break;

  case 197:
/* Line 868 of glr.c  */
#line 1254 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {	((*yyvalp).tn)=NULL;	Streams::verbose() <<"suite:	error\n"; ((*yyvalp).tn)=NULL;}
    break;

  case 198:
/* Line 868 of glr.c  */
#line 1257 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"test:	or_test\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 199:
/* Line 868 of glr.c  */
#line 1258 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"or_test IF or_test ELSE test\n";
										((*yyvalp).tn)=ast->createShortIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
		}
    break;

  case 200:
/* Line 868 of glr.c  */
#line 1262 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"or_seq:	OR and_test \n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 201:
/* Line 868 of glr.c  */
#line 1263 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"or_seq: or_seq OR and_test \n";
								((*yyvalp).tn)=ast->createBooleanNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),OR_OP,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
							}
    break;

  case 202:
/* Line 868 of glr.c  */
#line 1268 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"or_test:	and_test\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 203:
/* Line 868 of glr.c  */
#line 1269 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"or_test:	and_test or_seq\n";
							((*yyvalp).tn)=ast->createBooleanNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),OR_OP,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
							}
    break;

  case 204:
/* Line 868 of glr.c  */
#line 1274 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"and_seq: AND not_test \n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 205:
/* Line 868 of glr.c  */
#line 1275 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"and_seq: and_seq AND not_test \n";
									((*yyvalp).tn)=ast->createBooleanNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),AND_OP,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
								}
    break;

  case 206:
/* Line 868 of glr.c  */
#line 1280 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"and_test:	not_test\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 207:
/* Line 868 of glr.c  */
#line 1281 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"and_test: not_test and_seq \n";
								((*yyvalp).tn)=ast->createBooleanNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),AND_OP,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
		  }
    break;

  case 208:
/* Line 868 of glr.c  */
#line 1286 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"not_test:	NOT not_test\n";
							((*yyvalp).tn)=ast->createBooleanNode(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NOT_OP,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
							}
    break;

  case 209:
/* Line 868 of glr.c  */
#line 1289 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"not_test:	comparison\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);cout<<((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn))->getNodeType()<<endl;}
    break;

  case 210:
/* Line 868 of glr.c  */
#line 1292 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
											Streams::verbose() <<"comp_op_seq: comp_op expr \n";
											((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
											lastNode=NULL;
										}
    break;

  case 211:
/* Line 868 of glr.c  */
#line 1297 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
											Streams::verbose() <<"comp_op_seq: comp_op_seq comp_op expr \n";
											((*yyvalp).tn)=ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn),NULL,comp_op,yylval.r.lineNum,yylval.r.colNum);	
										}
    break;

  case 212:
/* Line 868 of glr.c  */
#line 1303 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comparison: expr\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
													//cout<<($<tn>1)->getNodeType()<<" Comp"<<endl;

												}
    break;

  case 213:
/* Line 868 of glr.c  */
#line 1307 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
					Streams::verbose() <<"comparison: expr comp_op_seq\n";
					//cout <<"the comp operand is "<<comp_op<<endl;
						((*yyvalp).tn)=ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,comp_op,yylval.r.lineNum,yylval.r.colNum);
				}
    break;

  case 214:
/* Line 868 of glr.c  */
#line 1314 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {	
				Streams::verbose() <<"comp_op: '<' \n";
				comp_op=LESS;
			}
    break;

  case 215:
/* Line 868 of glr.c  */
#line 1318 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: '>' \n";comp_op=GREATHER;}
    break;

  case 216:
/* Line 868 of glr.c  */
#line 1319 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
					cout<<"enter to equal "<<endl;
					Streams::verbose() <<"comp_op: EQUAL \n";
					comp_op=EQUALS;
					}
    break;

  case 217:
/* Line 868 of glr.c  */
#line 1324 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: MORE_OR_EQUAL \n";comp_op=EQUALGREATHER;}
    break;

  case 218:
/* Line 868 of glr.c  */
#line 1325 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: LESS_OR_EQUAL \n";comp_op=EQUALLESS;}
    break;

  case 219:
/* Line 868 of glr.c  */
#line 1326 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: MORE_LESS \n";}
    break;

  case 220:
/* Line 868 of glr.c  */
#line 1327 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: NOT_EQUAL \n";comp_op=NOTEQUAL;}
    break;

  case 221:
/* Line 868 of glr.c  */
#line 1328 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IN \n";}
    break;

  case 222:
/* Line 868 of glr.c  */
#line 1329 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: NOT IN \n";}
    break;

  case 223:
/* Line 868 of glr.c  */
#line 1330 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IS \n";}
    break;

  case 224:
/* Line 868 of glr.c  */
#line 1331 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IS NOT \n";}
    break;

  case 225:
/* Line 868 of glr.c  */
#line 1334 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"star_expr: '*' expr \n";}
    break;

  case 226:
/* Line 868 of glr.c  */
#line 1337 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"or_xor_expr_seq: '|' xor_expr \n";}
    break;

  case 227:
/* Line 868 of glr.c  */
#line 1338 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"or_xor_expr_seq: or_xor_expr_seq '|' xor_expr\n";}
    break;

  case 228:
/* Line 868 of glr.c  */
#line 1340 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
					Streams::verbose() <<"expr: xor_expr\n";
					((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
				}
    break;

  case 229:
/* Line 868 of glr.c  */
#line 1344 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"expr: xor_expr or_xor_expr_seq\n";}
    break;

  case 230:
/* Line 868 of glr.c  */
#line 1347 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"sha_and_expr_seq: '^' and_expr \n";}
    break;

  case 231:
/* Line 868 of glr.c  */
#line 1348 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"sha_and_expr_seq: sha_and_expr_seq '^' and_expr\n";}
    break;

  case 232:
/* Line 868 of glr.c  */
#line 1351 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"xor_expr: and_expr\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 233:
/* Line 868 of glr.c  */
#line 1352 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"xor_expr: and_expr sha_and_expr_seq\n";}
    break;

  case 234:
/* Line 868 of glr.c  */
#line 1355 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"and_shift_expr_seq: '&' shift_expr \n";}
    break;

  case 235:
/* Line 868 of glr.c  */
#line 1356 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"and_shift_expr_seq: and_shift_expr_seq '&' shift_expr\n";}
    break;

  case 236:
/* Line 868 of glr.c  */
#line 1359 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"and_expr: shift_expr\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 237:
/* Line 868 of glr.c  */
#line 1360 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"and_expr: shift_expr and_shift_expr_seq\n";}
    break;

  case 238:
/* Line 868 of glr.c  */
#line 1363 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	LESS_THAN_2 arith_expr \n";}
    break;

  case 239:
/* Line 868 of glr.c  */
#line 1364 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	MORE_THAN_2 arith_expr \n";}
    break;

  case 240:
/* Line 868 of glr.c  */
#line 1365 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	arith_seq LESS_THAN_2 arith_expr \n";}
    break;

  case 241:
/* Line 868 of glr.c  */
#line 1366 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	arith_seq MORE_THAN_2 arith_expr \n";}
    break;

  case 242:
/* Line 868 of glr.c  */
#line 1369 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
							Streams::verbose() <<"shift_expr: arith_expr\n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 243:
/* Line 868 of glr.c  */
#line 1373 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"shift_expr: arith_expr arith_seq\n";}
    break;

  case 244:
/* Line 868 of glr.c  */
#line 1376 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1383 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1394 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : term_seq '+' term \n";//op=PLUS;
									k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
									((*yyvalp).operands)=PLUS;
									//op=$<operands>$;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,PLUS,yylval.r.lineNum,yylval.r.colNum);
								}
    break;

  case 247:
/* Line 868 of glr.c  */
#line 1400 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : term_seq '-' term \n";//op=MINUS;
									k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
									((*yyvalp).operands)=MINUS;
									//op=$<operands>$;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,MINUS,yylval.r.lineNum,yylval.r.colNum);
								}
    break;

  case 248:
/* Line 868 of glr.c  */
#line 1408 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"arith_expr: term\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
									((*yyvalp).operands)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.operands);
							}
    break;

  case 249:
/* Line 868 of glr.c  */
#line 1412 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
											Streams::verbose() <<"arith_expr: term term_seq\n";
											k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
											//cout<<"the value of op is "<<op<<endl;
											((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,PLUS/**op**/,yylval.r.lineNum,yylval.r.colNum);
											
										}
    break;

  case 250:
/* Line 868 of glr.c  */
#line 1422 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '*' factor \n";
							((*yyvalp).operands)=MULT;
							op=((*yyvalp).operands);
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 251:
/* Line 868 of glr.c  */
#line 1427 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '/' factor \n";
								((*yyvalp).operands)=DIV;
								op=((*yyvalp).operands);
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 252:
/* Line 868 of glr.c  */
#line 1432 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '%' factor \n";
								((*yyvalp).operands)=MOD;
								op=((*yyvalp).operands);
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 253:
/* Line 868 of glr.c  */
#line 1437 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: DIV_2 factor \n";}
    break;

  case 254:
/* Line 868 of glr.c  */
#line 1438 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '*' factor \n";
									k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
									op=MULT;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,op,yylval.r.lineNum,yylval.r.colNum);
									}
    break;

  case 255:
/* Line 868 of glr.c  */
#line 1443 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '/' factor \n";
									k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
									op=DIV;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,op,yylval.r.lineNum,yylval.r.colNum);
									}
    break;

  case 256:
/* Line 868 of glr.c  */
#line 1448 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '%' factor \n";
									op=MOD;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,op,yylval.r.lineNum,yylval.r.colNum);
									}
    break;

  case 257:
/* Line 868 of glr.c  */
#line 1452 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq DIV_2 factor \n";}
    break;

  case 258:
/* Line 868 of glr.c  */
#line 1455 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"term: 	factor\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 259:
/* Line 868 of glr.c  */
#line 1456 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"term: 	factor factor_seq\n";
								k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
								((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,op,yylval.r.lineNum,yylval.r.colNum);
							}
    break;

  case 260:
/* Line 868 of glr.c  */
#line 1462 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"factor: '+' factor \n";
						((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
						
					}
    break;

  case 261:
/* Line 868 of glr.c  */
#line 1466 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"factor: '-' factor \n";
						int* xx = new int (0);
						k = ast->createTypeNode((void*)xx,0,0,yylval.r.lineNum,yylval.r.colNum,INT);
						//k=ast->addNext(k,$<tn>2);
						((*yyvalp).tn) = ast->createExprNode(k,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,MINUS,yylval.r.lineNum,yylval.r.colNum);
						
						}
    break;

  case 262:
/* Line 868 of glr.c  */
#line 1473 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"factor: '~' factor \n";}
    break;

  case 263:
/* Line 868 of glr.c  */
#line 1474 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1542 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"trailer_seq: trailer \n";
										((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
										visit_num++;
									}
    break;

  case 265:
/* Line 868 of glr.c  */
#line 1546 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"trailer_seq: trailer_seq trailer \n";
										((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
										visit_num++;
									}
    break;

  case 266:
/* Line 868 of glr.c  */
#line 1552 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"power:	atom\n";
							//$<tn>$=ast->createCallVarNode(temp_id2.back(),NULL,NULL,NULL);
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 267:
/* Line 868 of glr.c  */
#line 1556 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1567 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"power: atom trailer_seq STAR_2 factor \n";}
    break;

  case 269:
/* Line 868 of glr.c  */
#line 1568 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"power: atom STAR_2 factor \n";}
    break;

  case 270:
/* Line 868 of glr.c  */
#line 1571 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"str_seq:	STRING \n"; cout<<"string is"<<((*yyvalp).r.strVal)<<endl;}
    break;

  case 271:
/* Line 868 of glr.c  */
#line 1572 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"str_seq:	str_seq STRING \n";}
    break;

  case 272:
/* Line 868 of glr.c  */
#line 1575 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'(' ')' \n";}
    break;

  case 273:
/* Line 868 of glr.c  */
#line 1576 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'(' testlist_comp ')' \n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn);cout<<((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn))->getNodeType()<<endl; inside_while_cond = true; arrayvec.clear();}
    break;

  case 274:
/* Line 868 of glr.c  */
#line 1577 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1584 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' '}' \n";}
    break;

  case 276:
/* Line 868 of glr.c  */
#line 1585 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atom: '[' testlist_comp ']' \n";
									((*yyvalp).tn)=ast->createArrayNode(arrayvec,0,0,yylval.r.lineNum,yylval.r.colNum);
									array_right=true;
									arr_node=static_cast<ArrayNode*>(((*yyvalp).tn));
									//is_list=true;
									arrayvec.clear();
									}
    break;

  case 277:
/* Line 868 of glr.c  */
#line 1592 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' dictorsetmaker '}' \n";}
    break;

  case 278:
/* Line 868 of glr.c  */
#line 1593 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1619 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1626 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    { Streams::verbose() <<"atom: NAME\n";
									//temp_id2.push_back($<r.strVal>1);
									visit_num++;
									((*yyvalp).tn)=ast->createCallTypeNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.strVal),parameters/*$<tn>3*/,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
									parameters.clear();
												}
    break;

  case 281:
/* Line 868 of glr.c  */
#line 1632 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1643 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1651 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_FLOAT\n"<<(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.floatVal)<<endl;
							constant=true;
							float* x=new float((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.floatVal));
							((*yyvalp).tn) = ast->createTypeNode((void*)x,0,0,yylval.r.lineNum,yylval.r.colNum,FLOAT);
						}
    break;

  case 284:
/* Line 868 of glr.c  */
#line 1656 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_FLOAT\n";
							long *xxx=new long((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.longVal));
							constant=true;
							((*yyvalp).tn) = ast->createTypeNode(&xxx,0,0,yylval.r.lineNum,yylval.r.colNum,LONG);
						}
    break;

  case 285:
/* Line 868 of glr.c  */
#line 1661 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atom: CHAR_VALUE\n";}
    break;

  case 286:
/* Line 868 of glr.c  */
#line 1662 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1671 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atom: DOT_3\n";}
    break;

  case 288:
/* Line 868 of glr.c  */
#line 1672 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"atom: NONE\n";}
    break;

  case 289:
/* Line 868 of glr.c  */
#line 1673 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1680 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1689 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: ',' test\n";
							arrayvec.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
							
							}
    break;

  case 292:
/* Line 868 of glr.c  */
#line 1693 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: ',' star_expr\n";}
    break;

  case 293:
/* Line 868 of glr.c  */
#line 1694 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: comma_test_star_seq ',' test\n";
														arrayvec.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
													}
    break;

  case 294:
/* Line 868 of glr.c  */
#line 1697 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: comma_test_star_seq ',' star_expr\n";}
    break;

  case 295:
/* Line 868 of glr.c  */
#line 1700 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test comp_for\n";}
    break;

  case 296:
/* Line 868 of glr.c  */
#line 1701 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test\n"; ((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
								arrayvec.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn));
							}
    break;

  case 297:
/* Line 868 of glr.c  */
#line 1704 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test   comma_test_star_seq\n";
												((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
												arrayvec.insert(arrayvec.begin(),(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn));
											}
    break;

  case 298:
/* Line 868 of glr.c  */
#line 1708 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 299:
/* Line 868 of glr.c  */
#line 1709 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";
													arrayvec.insert(arrayvec.begin(),(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn));
												}
    break;

  case 300:
/* Line 868 of glr.c  */
#line 1712 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 301:
/* Line 868 of glr.c  */
#line 1713 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 302:
/* Line 868 of glr.c  */
#line 1714 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 303:
/* Line 868 of glr.c  */
#line 1715 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 304:
/* Line 868 of glr.c  */
#line 1716 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 305:
/* Line 868 of glr.c  */
#line 1720 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1732 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1751 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1771 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
												Streams::verbose() <<"trailer:	'[' subscriptlist ']'\n";
												((*yyvalp).tn)=ast->createArrayElementNode(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
												dotvec.push_back(((*yyvalp).tn));
											}
    break;

  case 309:
/* Line 868 of glr.c  */
#line 1780 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_subscript_seq: ',' subscript\n";}
    break;

  case 310:
/* Line 868 of glr.c  */
#line 1781 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_subscript_seq: comma_subscript_seq ',' subscript\n";}
    break;

  case 311:
/* Line 868 of glr.c  */
#line 1784 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 312:
/* Line 868 of glr.c  */
#line 1785 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript comma_subscript_seq\n";
													((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
												}
    break;

  case 313:
/* Line 868 of glr.c  */
#line 1788 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript  ','\n";}
    break;

  case 314:
/* Line 868 of glr.c  */
#line 1789 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript comma_subscript_seq ','\n";
															((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn));
														}
    break;

  case 315:
/* Line 868 of glr.c  */
#line 1794 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 316:
/* Line 868 of glr.c  */
#line 1795 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':'\n";}
    break;

  case 317:
/* Line 868 of glr.c  */
#line 1796 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"subscript: test ':'\n";
							((*yyvalp).tn)=ast->createSubscriptNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),NULL,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
						}
    break;

  case 318:
/* Line 868 of glr.c  */
#line 1799 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' test\n";
								((*yyvalp).tn)=ast->createSubscriptNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
							}
    break;

  case 319:
/* Line 868 of glr.c  */
#line 1802 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' sliceop\n";}
    break;

  case 320:
/* Line 868 of glr.c  */
#line 1803 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' test sliceop\n";}
    break;

  case 321:
/* Line 868 of glr.c  */
#line 1804 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' test\n";
								((*yyvalp).tn)=ast->createSubscriptNode(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
						}
    break;

  case 322:
/* Line 868 of glr.c  */
#line 1807 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' sliceop\n";}
    break;

  case 323:
/* Line 868 of glr.c  */
#line 1808 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' test sliceop\n";}
    break;

  case 324:
/* Line 868 of glr.c  */
#line 1811 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"sliceop: ':'\n";}
    break;

  case 325:
/* Line 868 of glr.c  */
#line 1812 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"sliceop: ':' test\n";}
    break;

  case 326:
/* Line 868 of glr.c  */
#line 1815 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1822 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	',' star_expr \n";}
    break;

  case 328:
/* Line 868 of glr.c  */
#line 1823 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1832 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	comma_expr_star_seq ',' star_expr \n";}
    break;

  case 330:
/* Line 868 of glr.c  */
#line 1835 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1843 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1854 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr \n";}
    break;

  case 333:
/* Line 868 of glr.c  */
#line 1855 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr comma_expr_star_seq \n";}
    break;

  case 334:
/* Line 868 of glr.c  */
#line 1856 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1866 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1876 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr ',' \n";}
    break;

  case 337:
/* Line 868 of glr.c  */
#line 1877 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr  comma_expr_star_seq ',' \n";}
    break;

  case 338:
/* Line 868 of glr.c  */
#line 1880 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_test: ',' test \n";}
    break;

  case 339:
/* Line 868 of glr.c  */
#line 1881 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"',' test comma_test \n";}
    break;

  case 340:
/* Line 868 of glr.c  */
#line 1884 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	test \n";}
    break;

  case 341:
/* Line 868 of glr.c  */
#line 1885 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	test comma_test \n";}
    break;

  case 342:
/* Line 868 of glr.c  */
#line 1886 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	 test ','\n";}
    break;

  case 343:
/* Line 868 of glr.c  */
#line 1887 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	 test comma_test ','\n";}
    break;

  case 344:
/* Line 868 of glr.c  */
#line 1890 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_colon_test_seq:  ',' test ':' test \n";}
    break;

  case 345:
/* Line 868 of glr.c  */
#line 1891 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_colon_test_seq: comma_test_colon_test_seq ',' test ':' test\n";}
    break;

  case 346:
/* Line 868 of glr.c  */
#line 1893 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_seq: ',' test \n";}
    break;

  case 347:
/* Line 868 of glr.c  */
#line 1894 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_seq: comma_test_seq ',' test \n";}
    break;

  case 348:
/* Line 868 of glr.c  */
#line 1897 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comp_for \n";}
    break;

  case 349:
/* Line 868 of glr.c  */
#line 1898 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test \n";}
    break;

  case 350:
/* Line 868 of glr.c  */
#line 1899 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test ',' \n";}
    break;

  case 351:
/* Line 868 of glr.c  */
#line 1900 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comma_test_colon_test_seq \n";}
    break;

  case 352:
/* Line 868 of glr.c  */
#line 1901 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comma_test_colon_test_seq ','\n";}
    break;

  case 353:
/* Line 868 of glr.c  */
#line 1902 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test comp_for\n";}
    break;

  case 354:
/* Line 868 of glr.c  */
#line 1903 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test\n";}
    break;

  case 355:
/* Line 868 of glr.c  */
#line 1904 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ','\n";}
    break;

  case 356:
/* Line 868 of glr.c  */
#line 1905 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ','\n";}
    break;

  case 357:
/* Line 868 of glr.c  */
#line 1906 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test comma_test_seq ','\n";}
    break;

  case 358:
/* Line 868 of glr.c  */
#line 1908 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
								Streams::verbose() <<"classdef: classheader ':' suite\n";
								((*yyvalp).type)=p->finishTypeDeclaration(t);
								((*yyvalp).tn)=ast->createClassNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.type),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
							}
    break;

  case 359:
/* Line 868 of glr.c  */
#line 1913 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
								Streams::verbose() <<"classdef: classheader error suite\n";
								((*yyvalp).type)=p->finishTypeDeclaration(t);
								((*yyvalp).tn)=ast->createClassNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.type),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
							}
    break;

  case 360:
/* Line 868 of glr.c  */
#line 1919 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1927 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1934 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1941 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1948 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1955 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1962 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1969 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1976 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1983 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1990 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 1997 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2004 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2011 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2018 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2025 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2032 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2040 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2047 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2054 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2061 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2068 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2075 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2082 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2089 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2096 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2103 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2110 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2117 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2124 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2131 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2138 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2145 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2152 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2159 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2166 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2173 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2180 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2187 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2194 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2201 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2208 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2215 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS NAME '(' arglist ')' ':' \n";}
    break;

  case 403:
/* Line 868 of glr.c  */
#line 2216 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS NAME '(' arglist ')' ':' \n";}
    break;

  case 404:
/* Line 868 of glr.c  */
#line 2217 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2224 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2231 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2238 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2248 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"arg_comma_seq : argument ','\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 409:
/* Line 868 of glr.c  */
#line 2249 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"arg_comma_seq : arg_comma_seq argument ',' \n";
													//$<tn>$=ast->addNext($<tn>1,$<tn>2);
											}
    break;

  case 410:
/* Line 868 of glr.c  */
#line 2254 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_arg_seq:	',' argument\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 411:
/* Line 868 of glr.c  */
#line 2255 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_arg_seq:	comma_arg_seq ',' argument\n";
													((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn));
												}
    break;

  case 412:
/* Line 868 of glr.c  */
#line 2262 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"arglist: argument\n";
					((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
					}
    break;

  case 413:
/* Line 868 of glr.c  */
#line 2265 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"arglist: default_arg\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 414:
/* Line 868 of glr.c  */
#line 2267 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"arglist: argument ','\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 415:
/* Line 868 of glr.c  */
#line 2269 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2279 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2294 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2304 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2314 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2323 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2339 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2348 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq argument\n";
												//$<tn>$=ast->addNext($<tn>1,$<tn>2);
								}
    break;

  case 423:
/* Line 868 of glr.c  */
#line 2351 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq default_arg\n";}
    break;

  case 424:
/* Line 868 of glr.c  */
#line 2352 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq default_arg_comma_seq default_arg\n";}
    break;

  case 425:
/* Line 868 of glr.c  */
#line 2353 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq argument ','\n";}
    break;

  case 426:
/* Line 868 of glr.c  */
#line 2355 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2364 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2381 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2391 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2400 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2409 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2426 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2433 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"arglist: default_arg_comma_seq default_arg\n";}
    break;

  case 434:
/* Line 868 of glr.c  */
#line 2437 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_default_arg_seq: ',' default_arg\n";}
    break;

  case 435:
/* Line 868 of glr.c  */
#line 2438 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comma_default_arg_seq: comma_default_arg_seq ',' default_arg\n";}
    break;

  case 436:
/* Line 868 of glr.c  */
#line 2441 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"default_arg_comma_seq: default_arg ','\n";}
    break;

  case 437:
/* Line 868 of glr.c  */
#line 2442 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"default_arg_comma_seq: default_arg_comma_seq default_arg ','\n";}
    break;

  case 438:
/* Line 868 of glr.c  */
#line 2444 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {
					Streams::verbose() <<"in_default: '='\n";
					in_def=true;
					((*yyvalp).tn) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);
				}
    break;

  case 439:
/* Line 868 of glr.c  */
#line 2450 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
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
#line 2458 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {parameters.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal)); Streams::verbose() <<"argument: 	test\n";
					((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn); 
					if(strcmp((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal),"self")!=0)
						amer_par.push_back(my_node);
					}
    break;

  case 441:
/* Line 868 of glr.c  */
#line 2463 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {parameters.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.r.strVal));Streams::verbose() <<"argument: 	test comp_for\n";
					((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn); 
			}
    break;

  case 442:
/* Line 868 of glr.c  */
#line 2469 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comp_iter:  comp_for\n";}
    break;

  case 443:
/* Line 868 of glr.c  */
#line 2470 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comp_iter:  comp_if\n";}
    break;

  case 444:
/* Line 868 of glr.c  */
#line 2473 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comp_for: 	FOR exprlist IN or_test\n";}
    break;

  case 445:
/* Line 868 of glr.c  */
#line 2474 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comp_for: FOR exprlist IN or_test comp_iter\n";}
    break;

  case 446:
/* Line 868 of glr.c  */
#line 2477 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comp_if: IF or_test\n";}
    break;

  case 447:
/* Line 868 of glr.c  */
#line 2478 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"
    {Streams::verbose() <<"comp_if: IF or_test comp_iter\n";}
    break;


/* Line 868 of glr.c  */
#line 6346 "yacc.cpp"
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
  (!!((Yystate) == (-446)))

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
#line 2481 "D:\\Compiler_project\\compiler-project\\yaccFinal.y"

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