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
	int visit_num=0;//this variable for detected that if in right side in expretion
	char* i_type;
	bool exist;
	bool inside_func=false;
	bool inside_while_cond = false;
	Node* k;
	Node* root;
	char* t_id=new char[10];
	char* acc_mod=new char[8];
	vector<char*> sto_mod;
	bool ss=false;
	bool ff=false;
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
	operand op;
	operand comp_op;
	bool v_static,v_final;
	vector<char *>inhertance_list;
	vector<Node*>arrayvec;
	vector<Node*>dotvec;
	vector<Node*>amer_par;
	extern int lineNum;
	extern int colNum;
	vector<char *>ID_list;
	//vector<Node *>_par;
	vector<Node *>df_par;
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
	//common *c=new common();

/* Line 207 of glr.c  */
#line 158 "yacc.cpp"

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
#line 187 "yacc.cpp"

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
#define YYLAST   1444

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  109
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  109
/* YYNRULES -- Number of rules.  */
#define YYNRULES  421
/* YYNRULES -- Number of states.  */
#define YYNSTATES  745
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
     277,   279,   283,   286,   288,   290,   293,   295,   297,   299,
     301,   303,   305,   307,   309,   313,   315,   317,   320,   323,
     327,   330,   332,   335,   337,   340,   342,   346,   349,   352,
     355,   358,   360,   362,   364,   366,   368,   370,   372,   374,
     376,   378,   380,   382,   384,   386,   388,   390,   393,   396,
     398,   400,   402,   404,   406,   408,   411,   413,   415,   418,
     421,   425,   427,   430,   432,   436,   438,   441,   444,   448,
     451,   455,   458,   462,   465,   469,   471,   473,   475,   477,
     479,   481,   484,   487,   491,   495,   499,   504,   509,   514,
     519,   525,   531,   536,   541,   547,   553,   559,   565,   568,
     572,   576,   579,   582,   586,   591,   597,   601,   604,   610,
     614,   620,   629,   632,   635,   639,   646,   652,   657,   660,
     664,   669,   672,   676,   681,   687,   689,   693,   695,   698,
     703,   705,   708,   711,   713,   715,   721,   724,   728,   730,
     733,   736,   740,   742,   745,   748,   750,   753,   757,   759,
     762,   764,   766,   768,   770,   772,   774,   776,   778,   781,
     783,   786,   789,   792,   796,   798,   801,   804,   808,   810,
     813,   816,   820,   822,   825,   828,   831,   835,   839,   841,
     844,   847,   850,   854,   858,   860,   863,   866,   869,   872,
     875,   879,   883,   887,   891,   893,   896,   899,   902,   905,
     907,   909,   912,   914,   917,   922,   926,   928,   931,   934,
     938,   941,   944,   948,   952,   954,   958,   963,   968,   970,
     972,   974,   976,   978,   980,   982,   984,   986,   989,   992,
     996,  1000,  1003,  1005,  1008,  1011,  1015,  1018,  1020,  1023,
    1026,  1030,  1033,  1038,  1044,  1050,  1053,  1057,  1059,  1062,
    1065,  1069,  1071,  1073,  1076,  1080,  1084,  1089,  1092,  1095,
    1099,  1101,  1104,  1107,  1110,  1114,  1118,  1120,  1123,  1125,
    1128,  1131,  1135,  1138,  1142,  1145,  1149,  1151,  1154,  1157,
    1161,  1166,  1172,  1175,  1179,  1184,  1188,  1193,  1198,  1204,
    1207,  1209,  1212,  1215,  1219,  1222,  1226,  1231,  1236,  1241,
    1247,  1253,  1259,  1265,  1272,  1279,  1285,  1291,  1298,  1305,
    1312,  1319,  1325,  1332,  1339,  1346,  1354,  1362,  1370,  1378,
    1387,  1396,  1404,  1412,  1421,  1430,  1439,  1448,  1455,  1463,
    1471,  1479,  1488,  1497,  1506,  1515,  1525,  1535,  1544,  1553,
    1563,  1573,  1583,  1593,  1596,  1600,  1603,  1607,  1609,  1611,
    1614,  1617,  1623,  1627,  1631,  1636,  1643,  1646,  1649,  1652,
    1656,  1660,  1664,  1671,  1676,  1681,  1687,  1695,  1699,  1702,
    1705,  1709,  1712,  1716,  1720,  1722,  1725,  1727,  1729,  1734,
    1740,  1743
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const short int yyrhs[] =
{
     110,     0,    -1,   111,    -1,   134,    97,   112,    -1,   112,
      -1,   206,   112,    -1,   206,    -1,   114,   164,    -1,    15,
      44,   116,    24,   165,    98,    -1,    15,   126,    44,   116,
      24,   165,    98,    -1,    15,    44,   116,    98,    -1,    15,
     126,    44,   116,    98,    -1,    15,    13,    44,   116,    24,
     165,    98,    -1,    15,    12,    44,   116,    24,   165,    98,
      -1,    15,    13,    44,   116,    98,    -1,    15,    12,    44,
     116,    98,    -1,    15,    13,    12,    44,   116,    24,   165,
      98,    -1,    15,    12,    13,    44,   116,    24,   165,    98,
      -1,    15,    13,    12,    44,   116,    98,    -1,    15,    12,
      13,    44,   116,    98,    -1,    15,    12,   126,    44,   116,
      24,   165,    98,    -1,    15,    13,   126,    44,   116,    24,
     165,    98,    -1,    15,    13,   126,    44,   116,    98,    -1,
      15,    12,   126,    44,   116,    98,    -1,    15,    13,    12,
     126,    44,   116,    24,   165,    98,    -1,    15,    12,    13,
     126,    44,   116,    24,   165,    98,    -1,    15,    13,    12,
     126,    44,   116,    98,    -1,    15,    12,    13,   126,    44,
     116,    98,    -1,    15,   126,    13,    44,   116,    24,   165,
      98,    -1,    15,   126,    12,    44,   116,    24,   165,    98,
      -1,    15,   126,    13,    44,   116,    98,    -1,    15,   126,
      12,    44,   116,    98,    -1,    15,   126,    13,    12,    44,
     116,    24,   165,    98,    -1,    15,   126,    12,    13,    44,
     116,    24,   165,    98,    -1,    15,   126,    13,    12,    44,
     116,    98,    -1,    15,   126,    12,    13,    44,   116,    98,
      -1,    15,    13,   126,    12,    44,   116,    24,   165,    98,
      -1,    15,    12,   126,    13,    44,   116,    24,   165,    98,
      -1,    15,    13,   126,    12,    44,   116,    98,    -1,    15,
      12,   126,    13,    44,   116,    98,    -1,    88,    -1,   115,
     210,    99,    -1,    88,    99,    -1,   118,    -1,   144,    -1,
     119,    97,    -1,   120,    -1,   128,    -1,   129,    -1,   130,
      -1,   134,    -1,   142,    -1,   143,    -1,   127,    -1,   122,
     125,   202,    -1,   122,    -1,   145,    -1,   145,   121,    -1,
     122,   121,    -1,   100,   122,   121,    -1,   100,   122,    -1,
     124,    -1,   124,    87,    -1,    87,    -1,   165,   124,    -1,
     165,    -1,   174,   124,    87,    -1,   174,    87,    -1,    87,
     165,    -1,    87,   174,    -1,   124,   123,    -1,   123,    -1,
      26,    -1,    27,    -1,    54,    -1,    28,    -1,    29,    -1,
      30,    -1,    31,    -1,    32,    -1,    33,    -1,    34,    -1,
      35,    -1,    36,    -1,    57,    -1,    58,    -1,    59,    -1,
      52,   200,    -1,    50,   200,    -1,    69,    -1,   131,    -1,
     132,    -1,   133,    -1,    71,    -1,    72,    -1,    51,   202,
      -1,    51,    -1,   135,    -1,     4,   137,    -1,    87,   138,
      -1,   136,    87,   138,    -1,   138,    -1,   138,   136,    -1,
     139,    -1,   139,    47,    44,    -1,    44,    -1,    44,   140,
      -1,   101,    44,    -1,   140,   101,    44,    -1,    87,    44,
      -1,   141,    87,    44,    -1,    53,    44,    -1,    53,    44,
     141,    -1,    25,    44,    -1,    25,    44,   141,    -1,   149,
      -1,   151,    -1,   153,    -1,   156,    -1,   160,    -1,   113,
      -1,    15,   206,    -1,    15,    44,    -1,    15,   126,    44,
      -1,    15,    13,    44,    -1,    15,    12,    44,    -1,    15,
      13,    12,    44,    -1,    15,    12,    13,    44,    -1,    15,
      13,   126,    44,    -1,    15,    12,   126,    44,    -1,    15,
      13,    12,   126,    44,    -1,    15,    12,    13,   126,    44,
      -1,    15,   126,    13,    44,    -1,    15,   126,    12,    44,
      -1,    15,   126,    13,    12,    44,    -1,    15,   126,    12,
      13,    44,    -1,    15,    13,   126,    12,    44,    -1,    15,
      12,   126,    13,    44,    -1,   147,   164,    -1,   146,   147,
     164,    -1,    18,   165,    98,    -1,    16,    98,    -1,   150,
     164,    -1,   150,   164,   146,    -1,   150,   164,   148,   164,
      -1,   150,   164,   146,   148,   164,    -1,    17,   165,    98,
      -1,   152,   164,    -1,   152,   164,    16,    98,   164,    -1,
      19,   165,    98,    -1,   154,    21,   202,    98,   164,    -1,
     154,    21,   202,    98,   164,    16,    98,   164,    -1,    20,
     200,    -1,    22,    98,    -1,   155,   164,   158,    -1,   155,
     164,   158,    16,    98,   164,    -1,   155,   164,   158,   157,
     164,    -1,   155,   164,   157,   164,    -1,    23,    98,    -1,
     162,    98,   164,    -1,   158,   162,    98,   164,    -1,    87,
     161,    -1,   159,    87,   161,    -1,    46,   161,    98,   164,
      -1,    46,   161,   159,    98,   164,    -1,   165,    -1,   165,
      47,   176,    -1,    68,    -1,    68,   165,    -1,    68,   165,
      47,    44,    -1,   117,    -1,   163,   117,    -1,   163,     6,
      -1,     6,    -1,   167,    -1,   167,    17,   167,    16,   165,
      -1,     8,   169,    -1,   166,     8,   169,    -1,   169,    -1,
     169,   166,    -1,     9,   170,    -1,   168,     9,   170,    -1,
     170,    -1,   170,   168,    -1,    10,   170,    -1,   172,    -1,
     173,   176,    -1,   171,   173,   176,    -1,   176,    -1,   176,
     171,    -1,    90,    -1,    91,    -1,    49,    -1,    67,    -1,
      66,    -1,    37,    -1,    11,    -1,    21,    -1,    10,    21,
      -1,    64,    -1,    64,    10,    -1,    94,   176,    -1,   102,
     178,    -1,   175,   102,   178,    -1,   178,    -1,   178,   175,
      -1,   103,   180,    -1,   177,   103,   180,    -1,   180,    -1,
     180,   177,    -1,   104,   182,    -1,   179,   104,   182,    -1,
     182,    -1,   182,   179,    -1,    55,   184,    -1,    61,   184,
      -1,   181,    55,   184,    -1,   181,    61,   184,    -1,   184,
      -1,   184,   181,    -1,    92,   186,    -1,    93,   186,    -1,
     183,    92,   186,    -1,   183,    93,   186,    -1,   186,    -1,
     186,   183,    -1,    94,   187,    -1,    95,   187,    -1,    96,
     187,    -1,    65,   187,    -1,   185,    94,   187,    -1,   185,
      95,   187,    -1,   185,    96,   187,    -1,   185,    65,   187,
      -1,   187,    -1,   187,   185,    -1,    92,   187,    -1,    93,
     187,    -1,   105,   187,    -1,   189,    -1,   194,    -1,   188,
     194,    -1,   191,    -1,   191,   188,    -1,   191,   188,    40,
     187,    -1,   191,    40,   187,    -1,    62,    -1,   190,    62,
      -1,    88,    99,    -1,    88,   193,    99,    -1,    89,   106,
      -1,   107,   108,    -1,    89,   193,   106,    -1,   107,   205,
     108,    -1,    44,    -1,    44,    88,    99,    -1,    44,    88,
     210,    99,    -1,    44,    89,   196,   106,    -1,    41,    -1,
      43,    -1,    42,    -1,    70,    -1,   190,    -1,    45,    -1,
      63,    -1,    39,    -1,    38,    -1,    87,   165,    -1,    87,
     174,    -1,   192,    87,   165,    -1,   192,    87,   174,    -1,
     165,   216,    -1,   165,    -1,   165,   192,    -1,   165,    87,
      -1,   165,   192,    87,    -1,   174,   216,    -1,   174,    -1,
     174,   192,    -1,   174,    87,    -1,   174,   192,    87,    -1,
     101,    44,    -1,   101,    44,    88,    99,    -1,   101,    44,
      88,   200,    99,    -1,   101,    44,    89,   196,   106,    -1,
      87,   197,    -1,   195,    87,   197,    -1,   197,    -1,   197,
     195,    -1,   197,    87,    -1,   197,   195,    87,    -1,   165,
      -1,    98,    -1,   165,    98,    -1,   165,    98,   165,    -1,
     165,    98,   198,    -1,   165,    98,   165,   198,    -1,    98,
     165,    -1,    98,   198,    -1,    98,   165,   198,    -1,    98,
      -1,    98,   165,    -1,    87,   176,    -1,    87,   174,    -1,
     199,    87,   176,    -1,   199,    87,   174,    -1,   176,    -1,
     176,   199,    -1,   174,    -1,   174,   199,    -1,   176,    87,
      -1,   176,   199,    87,    -1,   174,    87,    -1,   174,   199,
      87,    -1,    87,   165,    -1,    87,   165,   201,    -1,   165,
      -1,   165,   201,    -1,   165,    87,    -1,   165,   201,    87,
      -1,    87,   165,    98,   165,    -1,   203,    87,   165,    98,
     165,    -1,    87,   165,    -1,   204,    87,   165,    -1,   165,
      98,   165,   216,    -1,   165,    98,   165,    -1,   165,    98,
     165,    87,    -1,   165,    98,   165,   203,    -1,   165,    98,
     165,   203,    87,    -1,   165,   216,    -1,   165,    -1,   165,
      87,    -1,   165,   204,    -1,   165,   204,    87,    -1,   207,
     164,    -1,     5,    44,    98,    -1,   126,     5,    44,    98,
      -1,    13,     5,    44,    98,    -1,    12,     5,    44,    98,
      -1,    13,    12,     5,    44,    98,    -1,    12,    13,     5,
      44,    98,    -1,    12,   126,     5,    44,    98,    -1,    13,
     126,     5,    44,    98,    -1,    13,    12,   126,     5,    44,
      98,    -1,    12,    13,   126,     5,    44,    98,    -1,   126,
      13,     5,    44,    98,    -1,   126,    12,     5,    44,    98,
      -1,   126,    13,    12,     5,    44,    98,    -1,   126,    12,
      13,     5,    44,    98,    -1,    13,   126,    12,     5,    44,
      98,    -1,    12,   126,    13,     5,    44,    98,    -1,     5,
      44,    88,    99,    98,    -1,   126,     5,    44,    88,    99,
      98,    -1,    13,     5,    44,    88,    99,    98,    -1,    12,
       5,    44,    88,    99,    98,    -1,    13,    12,     5,    44,
      88,    99,    98,    -1,    12,    13,     5,    44,    88,    99,
      98,    -1,    13,   126,     5,    44,    88,    99,    98,    -1,
      12,   126,     5,    44,    88,    99,    98,    -1,    13,    12,
     126,     5,    44,    88,    99,    98,    -1,    12,    13,   126,
       5,    44,    88,    99,    98,    -1,   126,    13,     5,    44,
      88,    99,    98,    -1,   126,    12,     5,    44,    88,    99,
      98,    -1,   126,    13,    12,     5,    44,    88,    99,    98,
      -1,   126,    12,    13,     5,    44,    88,    99,    98,    -1,
      13,   126,    12,     5,    44,    88,    99,    98,    -1,    12,
     126,    13,     5,    44,    88,    99,    98,    -1,     5,    44,
      88,   137,    99,    98,    -1,   126,     5,    44,    88,   137,
      99,    98,    -1,    13,     5,    44,    88,   137,    99,    98,
      -1,    12,     5,    44,    88,   137,    99,    98,    -1,    13,
      12,     5,    44,    88,   137,    99,    98,    -1,    12,    13,
       5,    44,    88,   137,    99,    98,    -1,    13,   126,     5,
      44,    88,   137,    99,    98,    -1,    12,   126,     5,    44,
      88,   137,    99,    98,    -1,    13,    12,   126,     5,    44,
      88,   137,    99,    98,    -1,    12,    13,   126,     5,    44,
      88,   137,    99,    98,    -1,   126,    13,     5,    44,    88,
     137,    99,    98,    -1,   126,    12,     5,    44,    88,   137,
      99,    98,    -1,   126,    13,    12,     5,    44,    88,   137,
      99,    98,    -1,   126,    12,    13,     5,    44,    88,   137,
      99,    98,    -1,    13,   126,    12,     5,    44,    88,   137,
      99,    98,    -1,    12,   126,    13,     5,    44,    88,   137,
      99,    98,    -1,   214,    87,    -1,   208,   214,    87,    -1,
      87,   214,    -1,   209,    87,   214,    -1,   214,    -1,   213,
      -1,   214,    87,    -1,    94,   165,    -1,    94,   165,    87,
      40,   165,    -1,    94,   165,   209,    -1,    94,   165,   211,
      -1,    94,   165,   209,   211,    -1,    94,   165,   209,    87,
      40,   165,    -1,    40,   165,    -1,   208,   214,    -1,   208,
     213,    -1,   208,   212,   213,    -1,   208,   214,    87,    -1,
     208,    94,   165,    -1,   208,    94,   165,    87,    40,   165,
      -1,   208,    94,   165,   209,    -1,   208,    94,   165,   211,
      -1,   208,    94,   165,   209,   211,    -1,   208,    94,   165,
     209,    87,    40,   165,    -1,   208,    40,   165,    -1,   212,
     213,    -1,    87,   213,    -1,   211,    87,   213,    -1,   213,
      87,    -1,   212,   213,    87,    -1,   165,   100,   165,    -1,
     165,    -1,   165,   216,    -1,   216,    -1,   217,    -1,    20,
     200,    21,   167,    -1,    20,   200,    21,   167,   215,    -1,
      17,   167,    -1,    17,   167,   215,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   151,   151,   167,   168,   172,   177,   194,   204,   205,
     206,   216,   225,   226,   227,   236,   245,   246,   247,   256,
     265,   274,   275,   283,   292,   293,   294,   303,   311,   312,
     313,   322,   331,   332,   333,   342,   350,   351,   352,   360,
     370,   373,   374,   377,   380,   384,   388,   392,   396,   400,
     404,   408,   412,   413,   420,   421,   422,   427,   450,   477,
     478,   481,   482,   483,   484,   485,   489,   490,   493,   494,
     497,   498,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   514,   515,   516,   518,   522,   528,
     534,   538,   542,   548,   554,   560,   564,   571,   574,   612,
     617,   622,   627,   636,   642,   645,   674,   679,   683,   689,
     695,   705,   712,   721,   722,   725,   729,   730,   734,   738,
     739,   743,   748,   756,   765,   773,   781,   789,   797,   805,
     813,   821,   829,   837,   845,   853,   861,   869,   878,   883,
     891,   897,   902,   907,   912,   918,   927,   932,   937,   944,
     950,   955,   962,   966,   969,   974,   983,   992,   999,  1007,
    1016,  1031,  1032,  1035,  1036,  1039,  1040,  1043,  1049,  1057,
    1065,  1068,  1081,  1085,  1088,  1089,  1093,  1094,  1099,  1100,
    1105,  1106,  1111,  1112,  1117,  1120,  1123,  1128,  1134,  1135,
    1141,  1145,  1146,  1150,  1151,  1152,  1153,  1154,  1155,  1156,
    1157,  1160,  1163,  1164,  1166,  1170,  1173,  1174,  1177,  1178,
    1181,  1182,  1185,  1186,  1189,  1190,  1191,  1192,  1195,  1199,
    1202,  1209,  1220,  1226,  1234,  1238,  1248,  1253,  1258,  1263,
    1264,  1269,  1274,  1278,  1281,  1282,  1288,  1292,  1299,  1300,
    1366,  1370,  1376,  1380,  1387,  1388,  1391,  1392,  1395,  1396,
    1397,  1403,  1404,  1409,  1410,  1427,  1433,  1439,  1445,  1453,
    1458,  1463,  1464,  1473,  1474,  1475,  1482,  1491,  1495,  1496,
    1499,  1502,  1503,  1506,  1510,  1511,  1514,  1515,  1516,  1517,
    1518,  1521,  1529,  1534,  1538,  1546,  1547,  1550,  1551,  1554,
    1555,  1560,  1561,  1562,  1565,  1568,  1569,  1570,  1573,  1574,
    1577,  1578,  1581,  1584,  1585,  1588,  1591,  1592,  1596,  1597,
    1598,  1601,  1604,  1605,  1608,  1609,  1612,  1613,  1614,  1615,
    1618,  1619,  1621,  1622,  1625,  1626,  1627,  1628,  1629,  1630,
    1631,  1632,  1633,  1634,  1636,  1642,  1650,  1657,  1664,  1671,
    1678,  1685,  1692,  1699,  1706,  1713,  1720,  1727,  1734,  1741,
    1748,  1755,  1763,  1770,  1777,  1784,  1791,  1798,  1805,  1812,
    1819,  1826,  1833,  1840,  1847,  1854,  1861,  1868,  1875,  1882,
    1889,  1896,  1903,  1910,  1917,  1924,  1931,  1938,  1939,  1940,
    1947,  1954,  1961,  1971,  1972,  1977,  1978,  1983,  1986,  1988,
    1990,  1998,  2010,  2018,  2027,  2035,  2047,  2054,  2057,  2058,
    2059,  2061,  2069,  2083,  2091,  2099,  2107,  2121,  2127,  2132,
    2133,  2136,  2137,  2140,  2147,  2151,  2157,  2158,  2161,  2162,
    2165,  2166
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
  "file_input", "program", "temp2", "funcdef", "funcheader", "inside_func",
  "parameters", "stmt", "simple_stmt", "small_stmt", "expr_stmt",
  "right_testlist", "testlist_star_expr", "comma_test_star",
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
     115,   116,   116,   117,   117,   118,   119,   119,   119,   119,
     119,   119,   119,   119,   120,   120,   120,   120,   120,   121,
     121,   122,   122,   122,   122,   122,   122,   122,   123,   123,
     124,   124,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   126,   126,   126,   127,   128,   129,
     130,   130,   130,   131,   132,   133,   133,   134,   135,   136,
     136,   137,   137,   138,   138,   139,   139,   140,   140,   141,
     141,   142,   142,   143,   143,   144,   144,   144,   144,   144,
     144,   144,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   146,   146,
     147,   148,   149,   149,   149,   149,   150,   151,   151,   152,
     153,   153,   154,   155,   156,   156,   156,   156,   157,   158,
     158,   159,   159,   160,   160,   161,   161,   162,   162,   162,
     163,   163,   164,   164,   165,   165,   166,   166,   167,   167,
     168,   168,   169,   169,   170,   170,   171,   171,   172,   172,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   174,   175,   175,   176,   176,   177,   177,   178,   178,
     179,   179,   180,   180,   181,   181,   181,   181,   182,   182,
     183,   183,   183,   183,   184,   184,   185,   185,   185,   185,
     185,   185,   185,   185,   186,   186,   187,   187,   187,   187,
     188,   188,   189,   189,   189,   189,   190,   190,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   192,   192,   192,
     192,   193,   193,   193,   193,   193,   193,   193,   193,   193,
     193,   194,   194,   194,   194,   195,   195,   196,   196,   196,
     196,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     198,   198,   199,   199,   199,   199,   200,   200,   200,   200,
     200,   200,   200,   200,   201,   201,   202,   202,   202,   202,
     203,   203,   204,   204,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   205,   206,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   208,   208,   209,   209,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   210,   210,   211,
     211,   212,   212,   213,   214,   214,   215,   215,   216,   216,
     217,   217
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     3,     1,     2,     1,     2,     6,     7,
       4,     5,     7,     7,     5,     5,     8,     8,     6,     6,
       8,     8,     6,     6,     9,     9,     7,     7,     8,     8,
       6,     6,     9,     9,     7,     7,     9,     9,     7,     7,
       1,     3,     2,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     2,     2,     3,
       2,     1,     2,     1,     2,     1,     3,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     2,     2,
       3,     1,     2,     1,     3,     1,     2,     2,     3,     2,
       3,     2,     3,     2,     3,     1,     1,     1,     1,     1,
       1,     2,     2,     3,     3,     3,     4,     4,     4,     4,
       5,     5,     4,     4,     5,     5,     5,     5,     2,     3,
       3,     2,     2,     3,     4,     5,     3,     2,     5,     3,
       5,     8,     2,     2,     3,     6,     5,     4,     2,     3,
       4,     2,     3,     4,     5,     1,     3,     1,     2,     4,
       1,     2,     2,     1,     1,     5,     2,     3,     1,     2,
       2,     3,     1,     2,     2,     1,     2,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       2,     2,     2,     3,     1,     2,     2,     3,     1,     2,
       2,     3,     1,     2,     2,     2,     3,     3,     1,     2,
       2,     2,     3,     3,     1,     2,     2,     2,     2,     2,
       3,     3,     3,     3,     1,     2,     2,     2,     2,     1,
       1,     2,     1,     2,     4,     3,     1,     2,     2,     3,
       2,     2,     3,     3,     1,     3,     4,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     3,
       3,     2,     1,     2,     2,     3,     2,     1,     2,     2,
       3,     2,     4,     5,     5,     2,     3,     1,     2,     2,
       3,     1,     1,     2,     3,     3,     4,     2,     2,     3,
       1,     2,     2,     2,     3,     3,     1,     2,     1,     2,
       2,     3,     2,     3,     2,     3,     1,     2,     2,     3,
       4,     5,     2,     3,     4,     3,     4,     4,     5,     2,
       1,     2,     2,     3,     2,     3,     4,     4,     4,     5,
       5,     5,     5,     6,     6,     5,     5,     6,     6,     6,
       6,     5,     6,     6,     6,     7,     7,     7,     7,     8,
       8,     7,     7,     8,     8,     8,     8,     6,     7,     7,
       7,     8,     8,     8,     8,     9,     9,     8,     8,     9,
       9,     9,     9,     2,     3,     2,     3,     1,     1,     2,
       2,     5,     3,     3,     4,     6,     2,     2,     2,     3,
       3,     3,     6,     4,     4,     5,     7,     3,     2,     2,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

/* YYDEFACT[S] -- default reduction number in state S.  Performed when
   YYTABLE doesn't specify something else to do.  Zero means the default
   is an error.  */
static const unsigned short int yydefact[] =
{
       0,     0,     0,     0,     0,    84,    85,    86,     0,     2,
       4,     0,     0,    97,     6,     0,   105,    98,   101,   103,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     0,
       0,     0,     5,   173,     0,     0,     0,     0,     0,     0,
       0,   266,   265,   258,   260,   259,   254,   263,     0,     0,
      96,     0,     0,   246,   264,    89,   261,    93,    94,    63,
       0,     0,     0,     0,     0,     0,     0,   120,     0,   170,
      43,     0,    46,    55,    71,    61,    53,    47,    48,    49,
      90,    91,    92,    50,    51,    52,    44,    56,   115,     0,
     116,     0,   117,     0,     0,   118,   119,     0,   334,    65,
     174,   178,   182,   185,     0,   188,   204,   208,   212,   218,
     224,   234,   239,   262,   242,     0,   106,     0,   102,     0,
       0,   335,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     3,   184,     0,
       0,   122,     0,   121,     0,     0,   308,   306,   152,   153,
     113,     0,     0,     0,   165,    88,   316,    95,    87,   111,
      68,    69,   248,   272,   277,     0,   250,     0,   236,   237,
     201,   238,   251,   330,     0,     7,    45,    72,    73,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    74,     0,
      58,     0,    62,    70,    57,   142,   147,     0,     0,   172,
     171,     0,    64,     0,     0,   179,     0,   183,    67,     0,
       0,   196,   197,   195,   192,   199,   194,   193,   190,   191,
     189,     0,     0,   205,     0,   209,     0,   213,     0,     0,
     219,     0,     0,   225,     0,     0,     0,     0,   235,   247,
       0,     0,   243,   240,   107,     0,    99,     0,   104,     0,
       0,     0,   338,     0,     0,     0,     0,     0,   337,     0,
       0,     0,     0,     0,   336,     0,     0,     0,     0,     0,
     125,     0,     0,   124,     0,    40,     0,     0,     0,     0,
     123,   146,   149,   312,   309,   310,   307,     0,   114,     0,
       0,   255,   414,     0,     0,     0,   388,   387,   292,   291,
       0,   287,     0,     0,     0,     0,   318,   317,   112,     0,
     274,   273,   271,   279,   278,   276,   249,   252,   331,     0,
     332,   329,   253,    60,    54,     0,     0,   143,     0,     0,
       0,     0,     0,   167,     0,   154,     0,     0,   176,     0,
     180,     0,    66,   198,   200,     0,   186,   202,     0,   206,
       0,   210,     0,   214,   215,     0,     0,   220,   221,     0,
       0,   229,   226,   227,   228,     0,     0,     0,     0,   245,
     281,     0,   241,   108,   100,   351,     0,     0,     0,     0,
     340,     0,     0,   341,     0,     0,     0,     0,   339,     0,
       0,   342,     0,     0,     0,     0,   346,     0,     0,   345,
       0,   127,     0,     0,     0,   129,   126,     0,     0,     0,
     128,    42,     0,     0,    10,     0,   133,     0,   132,     0,
     303,   302,   313,   311,   109,     0,   396,   390,     0,   415,
       0,     0,     0,   398,   397,   256,     0,   408,   411,   383,
     300,   297,   298,   293,   257,   289,   288,   161,   163,     0,
       0,   166,   314,   319,     0,   267,   268,   275,   280,   322,
     325,   333,    59,   141,     0,     0,     0,   138,   144,     0,
       0,   158,   168,   157,     0,     0,     0,     0,     0,   177,
     181,   187,   203,   207,   211,   216,   217,   222,   223,   233,
     230,   231,   232,     0,     0,   244,   367,   354,     0,     0,
       0,     0,   344,     0,     0,     0,   350,   353,     0,     0,
       0,     0,   343,     0,     0,     0,   349,   352,     0,     0,
       0,     0,   348,     0,     0,     0,   347,     0,   131,     0,
      15,   137,     0,     0,   130,     0,    14,   136,     0,    41,
       0,   135,     0,   134,     0,     0,    11,   305,   304,   110,
       0,   392,   393,   413,   407,   401,   399,   384,   412,   301,
     299,   294,   295,   285,   290,   162,   164,   315,     0,   269,
     270,   326,   327,   324,   323,   140,   139,   145,   148,   150,
       0,     0,   156,     0,   159,   175,   282,     0,     0,   370,
     356,     0,     0,     0,   358,     0,     0,     0,   369,   355,
       0,     0,     0,   357,     0,     0,     0,   368,   362,     0,
       0,     0,   361,     0,     0,     0,     0,    19,     0,     0,
       0,     0,    23,     0,    18,     0,     0,     0,     0,    22,
       8,     0,     0,    31,     0,     0,    30,     0,     0,   409,
     385,     0,   394,     0,     0,   403,   404,   296,   286,   418,
       0,   328,     0,   169,   155,   160,   283,   284,   372,   360,
       0,   374,   366,     0,   371,   359,     0,   373,   365,     0,
     378,   364,     0,   377,   363,     0,     0,     0,    27,    13,
       0,    39,     0,     0,     0,    26,    12,     0,    38,     0,
       0,    35,     0,     0,    34,     0,     9,   391,     0,   386,
     410,     0,     0,   405,     0,   419,   416,   417,     0,     0,
       0,   376,   382,   375,   381,   380,   379,    17,     0,     0,
      20,    16,     0,     0,    21,     0,    29,     0,    28,   395,
     402,     0,   420,   320,     0,   151,    25,    37,    24,    36,
      33,    32,   406,   421,   321
};

/* YYPDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,     8,     9,    10,    67,    68,   276,   277,    69,    70,
      71,    72,   190,    73,    74,    75,   191,    11,    76,    77,
      78,    79,    80,    81,    82,    83,    13,   118,    17,    18,
      19,   116,   288,    84,    85,    86,    87,   327,   328,   329,
      88,    89,    90,    91,    92,    93,    94,    95,   334,   335,
     304,    96,   153,   336,    97,    98,    99,   205,   100,   207,
     101,   102,   220,   103,   221,   104,   223,   105,   225,   106,
     227,   107,   230,   108,   233,   109,   238,   110,   111,   242,
     112,   113,   114,   311,   165,   243,   446,   300,   301,   442,
     284,   148,   307,   157,   572,   320,   174,    14,    15,   293,
     551,   294,   552,   295,   639,   297,   705,   706,   707
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -520
static const short int yypact[] =
{
     243,    47,    60,   312,   343,  -520,  -520,  -520,    87,  -520,
    -520,   451,   105,  -520,   306,   663,   144,  -520,   201,   244,
     135,   266,   327,    98,   269,   373,   328,  -520,   291,   302,
     477,   306,  -520,  -520,  1232,   489,  1232,  1232,  1304,   240,
     308,  -520,  -520,  -520,  -520,  -520,   128,  -520,  1232,  1304,
    1232,  1304,   310,  -520,  -520,  -520,  -520,  -520,  -520,   976,
     792,   830,  1337,  1337,  1337,  1337,    32,  -520,   663,  -520,
    -520,   282,  -520,   444,  -520,   270,  -520,  -520,  -520,  -520,
    -520,  -520,  -520,  -520,  -520,  -520,  -520,   299,  -520,   663,
    -520,   663,  -520,   413,   663,  -520,  -520,   754,  -520,   351,
     445,   473,   495,  -520,   421,   377,   409,   410,   408,    27,
     319,   389,  -520,   453,    28,   472,   416,    47,   434,   478,
      19,  -520,   191,   479,   519,   481,   521,   205,   483,   524,
     486,   526,   253,   488,   529,   492,   532,  -520,  -520,   315,
     324,   452,   214,  -520,   447,   454,   455,   456,  -520,  -520,
     462,   528,  1012,    -8,   503,  -520,   464,  -520,  -520,   462,
    -520,  -520,  -520,    64,    88,   457,  -520,   448,  -520,  -520,
    -520,  -520,  -520,    25,   449,  -520,  -520,  -520,  -520,  -520,
    -520,  -520,  -520,  -520,  -520,  -520,  -520,  -520,  -520,   868,
    -520,  1232,   976,  -520,  -520,   101,   537,  1232,    42,  -520,
    -520,   976,   351,  1232,  1232,   547,  1232,   549,   976,   474,
     538,  -520,  -520,  -520,  -520,   550,  -520,  -520,  -520,  -520,
     377,  1337,  1337,   460,  1337,   471,  1337,   459,  1337,  1337,
     336,  1337,  1337,   414,  1337,  1337,  1337,  1337,   396,  -520,
    1337,   520,    65,  -520,  -520,   531,  -520,    47,  -520,   467,
     480,    69,  -520,   278,   533,   305,   534,    70,  -520,   317,
     539,   318,   540,    86,  -520,   322,   542,   341,   544,   237,
     452,   187,   461,   452,   177,   482,   904,    -2,   255,   199,
     452,  -520,  -520,  1304,   502,  1304,   506,   551,   507,  1232,
    1232,  -520,     1,   940,   498,  1232,   513,   514,  1050,   484,
     470,   516,  1232,   663,   211,  1337,  1232,   517,   507,  1304,
     976,   522,  -520,   976,   523,  -520,  -520,  -520,  1232,  1232,
     525,  -520,  -520,   299,  -520,   508,  1232,   101,   663,   663,
     515,   527,   530,  1232,   663,   183,   536,   595,  -520,  1232,
    -520,  1232,   976,  -520,  -520,  1337,  -520,  -520,  1337,  -520,
    1337,  -520,  1337,  -520,  -520,  1337,  1337,  -520,  -520,  1337,
    1337,  -520,  -520,  -520,  -520,  1337,  1337,  1337,  1337,  -520,
     233,  1337,  -520,  -520,  -520,  -520,   541,   545,   543,    91,
    -520,   348,    94,  -520,   349,   548,   546,   106,  -520,   352,
     123,  -520,   398,   552,   553,   129,  -520,   399,   139,  -520,
     412,   452,   165,    24,   225,   452,   452,   227,    29,   229,
     452,  -520,   554,  1232,  -520,   231,   452,   280,   452,    33,
    -520,  -520,  1304,  1304,  -520,   570,  -520,   560,  1232,  -520,
    1232,  1232,  1232,   513,   562,  -520,   518,   568,  -520,   557,
    1232,   561,  -520,  1050,  -520,  1012,   571,  -520,  -520,  1232,
     663,  -520,   573,  -520,   598,  -520,  -520,   976,   976,  -520,
      89,  1232,  -520,  -520,   563,   663,   663,  -520,  -520,   663,
     663,  -520,   576,  -520,   565,   663,   566,   663,  1232,  -520,
    -520,  -520,  -520,  -520,  -520,  -520,  -520,  -520,  -520,  -520,
    -520,  -520,  -520,  1266,  1012,  -520,  -520,  -520,   572,   577,
     575,   140,  -520,   578,   580,   142,  -520,  -520,   579,   583,
     585,   147,  -520,   588,   590,   150,  -520,  -520,   589,   592,
     593,   164,  -520,   596,   594,   166,  -520,    34,   452,  1232,
    -520,   452,    35,    36,   452,  1232,  -520,   452,    43,  -520,
     599,   452,    48,   452,    54,  1232,  -520,  -520,  -520,  -520,
    1088,   584,   604,  -520,  -520,   609,   568,   600,  -520,  -520,
    -520,   561,  -520,  -520,  1012,  -520,  -520,  -520,  1232,  -520,
    -520,  1232,   613,  -520,  -520,  -520,  -520,  -520,  -520,   608,
     582,   663,  -520,   663,  -520,  -520,  -520,   611,   597,  -520,
    -520,   614,   619,   612,  -520,   620,   621,   622,  -520,  -520,
     624,   625,   628,  -520,   626,   630,   631,  -520,  -520,   633,
     638,   639,  -520,   641,   642,   643,  1232,  -520,    61,   645,
      62,  1232,  -520,  1232,  -520,    73,   646,    76,  1232,  -520,
    -520,    82,  1232,  -520,    83,  1232,  -520,   647,  1232,  -520,
    -520,  1124,   604,  1232,  1160,   650,   604,  -520,  -520,    49,
     648,  1232,   649,  -520,  -520,  -520,  -520,  -520,  -520,  -520,
     651,  -520,  -520,   655,  -520,  -520,   656,  -520,  -520,   661,
    -520,  -520,   664,  -520,  -520,   665,   667,  1232,  -520,  -520,
    1232,  -520,   668,   669,  1232,  -520,  -520,  1232,  -520,   674,
    1232,  -520,   677,  1232,  -520,   679,  -520,  -520,  1232,  -520,
    -520,  1232,  1196,   604,  1232,  -520,  -520,  -520,  1232,   680,
     663,  -520,  -520,  -520,  -520,  -520,  -520,  -520,   682,   683,
    -520,  -520,   684,   685,  -520,   686,  -520,   687,  -520,  -520,
    -520,  1232,    49,  -520,  1232,  -520,  -520,  -520,  -520,  -520,
    -520,  -520,  -520,  -520,  -520
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -520,  -520,  -520,    67,  -520,  -520,  -520,  -181,   535,  -520,
    -520,  -520,   -79,   440,   -60,   276,  -520,    58,  -520,  -520,
    -520,  -520,  -520,  -520,  -520,   636,  -520,  -520,   -56,  -104,
    -520,  -520,   602,  -520,  -520,  -520,  -520,  -520,   303,   304,
    -520,  -520,  -520,  -520,  -520,  -520,  -520,  -520,   385,  -520,
    -520,  -520,  -291,   394,  -520,   -42,   -36,  -520,  -201,  -520,
    -195,   -27,  -520,  -520,   417,    -5,  -520,   -33,  -520,  -194,
    -520,  -186,  -520,  -199,  -520,  -178,  -520,  -197,   -22,  -520,
    -520,  -520,  -520,   476,   725,   499,  -520,   254,  -428,  -404,
     491,   -45,   335,   260,  -520,  -520,  -520,   753,  -520,  -520,
     234,   556,  -519,   497,  -148,  -283,    59,  -144,  -520
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -401
static const short int yytable[] =
{
     144,   145,   337,   296,   155,   147,   158,   138,   194,   338,
     434,   447,   154,   246,   156,   193,   147,   563,   147,   312,
     315,   309,   413,   160,   163,   163,   175,   351,   347,   321,
     173,   170,   642,   146,   357,   358,   646,   560,   349,   562,
     168,   169,    34,   171,   146,   309,   146,   195,   529,   196,
     353,   354,   198,   535,   161,   164,   164,   545,   616,   621,
     623,    23,    26,    16,   250,   332,   704,   628,   240,   309,
      41,    42,   632,    43,    44,    45,    46,    47,   635,   302,
     124,    32,   228,   129,   309,   677,   680,    27,   229,   403,
     303,    16,   408,   142,    53,    54,   414,   684,   137,   419,
     687,   428,    56,   125,    20,   371,   690,   693,   309,   309,
     333,   126,   318,    16,    16,   292,   299,   325,   249,   326,
      60,    61,   530,   319,    62,    63,   703,   536,   296,   241,
      16,   546,   617,   622,   624,    16,   648,    65,    16,    66,
     172,   629,   193,   374,   479,   433,   633,   437,   429,   193,
      16,   310,   636,   484,   482,   156,   160,   647,   565,   678,
     681,   156,   487,   488,   483,   160,   241,    16,   377,   385,
     254,   685,   160,    16,   688,   313,   571,   485,   486,   340,
     691,   694,   130,    16,    16,   393,    16,   161,   346,   409,
     499,    16,   125,   503,    16,   378,   161,   271,   274,   474,
     404,   386,    31,   161,   135,   509,   332,   394,    16,   528,
      16,   417,   361,   362,   363,   364,   151,   152,   369,    28,
     527,   410,   513,   120,   532,   533,   278,   279,   519,   538,
     256,   405,   260,   121,   262,   542,   266,   544,   523,   592,
     292,   596,   123,   418,   462,   115,   601,     1,     2,   605,
     421,   333,   421,   426,   427,     3,     4,   292,   280,   436,
     133,   448,   441,   610,   454,   614,   154,   640,   415,   531,
     452,   534,   451,   537,   455,   541,   147,   455,   420,   251,
     420,   401,   459,   460,   556,   268,   467,   468,   117,   252,
     464,   119,   473,   257,     5,     6,     7,   472,   449,   416,
       5,     6,     7,   258,   146,   456,   160,   133,   456,   450,
     122,     2,   481,   127,   480,   134,   573,    21,     3,     4,
      21,   493,   494,   500,   543,    22,   504,   402,   269,    24,
     407,   510,   123,   130,   514,   132,   272,   161,   149,   520,
     131,   263,   524,   489,   490,   491,   492,   618,    24,   495,
     620,   264,   150,   625,   159,    25,   627,   192,   699,   270,
     631,   640,   634,     5,     6,     7,   379,   649,   273,     5,
       6,     7,     5,     6,     7,   202,   380,   540,   128,   176,
     209,     5,     6,     7,     5,     6,     7,   210,   211,   548,
     548,   355,   553,   382,   554,   555,   436,   356,   212,   189,
       5,     6,     7,   383,   559,   387,   390,   561,   566,   299,
     395,   231,   232,   154,   213,   388,   391,   547,   547,   699,
     396,   569,   569,   576,   577,   574,   214,   578,   579,   398,
       5,     6,     7,   582,   197,   584,   501,   505,   201,   399,
     511,   215,   585,   216,   217,   593,   502,   506,   587,   597,
     512,   324,   570,   570,   234,   602,    28,   331,   299,   606,
     147,   365,   203,    29,    30,   611,   128,   218,   219,   615,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   204,   135,   235,   236,   237,   515,   521,   146,   136,
     366,   367,   368,   619,     2,   700,   516,   522,   188,   626,
     525,   139,   140,   732,   206,   406,   359,   360,   208,   637,
     526,   222,   226,   224,   292,   239,   244,   245,     5,     6,
       7,   247,   248,   253,   254,   255,   256,   259,   299,   260,
     261,   262,   265,   141,   266,   650,   267,   268,    34,   654,
     275,   655,   283,   285,   189,   281,     5,     6,     7,   287,
     305,   306,   282,   330,   317,   339,   316,   322,   341,   343,
     344,   342,   348,   352,   370,   375,    41,    42,   289,    43,
      44,    45,    46,    47,   350,   373,   444,   381,   384,   376,
     676,   411,   443,   389,   392,   682,   397,   683,   400,   422,
      53,    54,   689,   423,   425,   424,   692,   435,    56,   695,
     438,   439,   697,   445,   453,   292,   463,   436,   292,   457,
     458,   478,   461,   469,   549,   709,    60,    61,   428,   568,
      62,    63,   290,   580,   652,   470,   653,   291,   471,   323,
     465,   466,   200,    65,   477,    66,    12,   345,   286,   496,
     314,   718,   498,   497,   719,   508,   507,   550,   722,   557,
     517,   723,   518,   539,   725,   558,  -389,   727,   564,   440,
    -401,   575,   729,   581,   583,   730,   292,     1,   735,    33,
     589,   641,   733,    34,   591,   590,   594,   598,    35,   595,
      36,   599,    37,    38,   600,    39,   603,   607,    40,   604,
     608,   643,   609,   613,   612,   742,   644,   630,   744,  -400,
     651,    41,    42,   657,    43,    44,    45,    46,    47,    48,
     656,   660,   658,    49,    50,    51,    52,   659,   661,   662,
     475,   663,   664,   665,   667,    53,    54,   666,   668,   476,
     669,   670,    55,    56,    57,    58,   671,   702,   672,   673,
     674,   372,   675,   679,   686,   696,   708,   710,   588,   711,
      59,    60,    61,   712,   713,    62,    63,    64,     1,   714,
     199,   308,   715,   716,    34,   717,   720,   721,    65,    35,
      66,    36,   724,    37,    38,   726,    39,   728,   734,    40,
     736,   737,   738,   739,   740,   741,   167,   567,   143,   645,
     432,   743,    41,    42,     0,    43,    44,    45,    46,    47,
      48,     0,    34,     0,    49,    50,    51,    52,     0,     0,
       0,     0,     0,     0,     0,     0,    53,    54,     0,     0,
       0,     0,     0,    55,    56,    57,    58,     0,     0,     0,
      41,    42,   412,    43,    44,    45,    46,    47,     0,     0,
      34,    59,    60,    61,     0,     0,    62,    63,    64,     0,
       0,     0,     0,     0,    53,    54,     0,     0,     0,    65,
       0,    66,    56,     0,     0,     0,     0,     0,    41,    42,
       0,    43,    44,    45,    46,    47,     0,     0,    34,     0,
      60,    61,     0,     0,    62,    63,    64,     0,     0,     0,
       0,   162,    53,    54,     0,     0,     0,    65,     0,    66,
      56,     0,     0,     0,     0,     0,    41,    42,     0,    43,
      44,    45,    46,    47,    34,     0,     0,     0,    60,    61,
       0,     0,    62,    63,    64,     0,     0,     0,     0,     0,
      53,    54,     0,     0,     0,    65,   166,    66,    56,     0,
       0,     0,    41,    42,   289,    43,    44,    45,    46,    47,
      34,     0,     0,     0,     0,    59,    60,    61,     0,     0,
      62,    63,    64,     0,     0,     0,    53,    54,     0,     0,
       0,     0,     0,    65,    56,    66,     0,     0,    41,    42,
     430,    43,    44,    45,    46,    47,    34,     0,     0,     0,
       0,     0,    60,    61,     0,     0,    62,    63,   290,     0,
       0,     0,    53,    54,     0,     0,     0,     0,     0,    65,
      56,    66,     0,     0,    41,    42,     0,    43,    44,    45,
      46,    47,    34,     0,     0,     0,     0,     0,    60,    61,
       0,     0,    62,    63,   431,     0,     0,     0,    53,    54,
       0,     0,     0,     0,     0,    65,    56,    66,     0,     0,
      41,    42,     0,    43,    44,    45,    46,    47,     0,     0,
      34,     0,     0,     0,    60,    61,     0,     0,    62,    63,
      64,     0,     0,     0,    53,    54,     0,     0,     0,     0,
       0,    65,    56,    66,     0,     0,     0,     0,    41,    42,
       0,    43,    44,    45,    46,    47,     0,     0,    34,     0,
      60,    61,     0,     0,    62,    63,     0,     0,     0,     0,
     298,     0,    53,    54,     0,     0,     0,    65,     0,    66,
      56,     0,     0,     0,     0,     0,    41,    42,   638,    43,
      44,    45,    46,    47,    34,     0,     0,     0,    60,    61,
       0,     0,    62,    63,     0,     0,     0,     0,   440,     0,
      53,    54,     0,     0,     0,    65,     0,    66,    56,     0,
       0,     0,    41,    42,   698,    43,    44,    45,    46,    47,
      34,     0,     0,     0,     0,     0,    60,    61,     0,     0,
      62,    63,     0,     0,     0,     0,    53,    54,     0,     0,
       0,     0,     0,    65,    56,    66,     0,     0,    41,    42,
     701,    43,    44,    45,    46,    47,    34,     0,     0,     0,
       0,     0,    60,    61,     0,     0,    62,    63,     0,     0,
       0,     0,    53,    54,     0,     0,     0,     0,     0,    65,
      56,    66,     0,     0,    41,    42,   731,    43,    44,    45,
      46,    47,    34,     0,     0,     0,     0,     0,    60,    61,
       0,     0,    62,    63,     0,     0,     0,     0,    53,    54,
       0,     0,     0,     0,     0,    65,    56,    66,     0,     0,
      41,    42,     0,    43,    44,    45,    46,    47,     0,     0,
       0,     0,     0,     0,    60,    61,     0,     0,    62,    63,
       0,     0,     0,     0,    53,    54,     0,     0,     0,     0,
       0,    65,    56,    66,    41,    42,     0,    43,    44,    45,
      46,    47,     0,     0,     0,     0,     0,     0,     0,     0,
      60,    61,     0,     0,    62,    63,     0,     0,    53,    54,
       0,     0,     0,     0,     0,     0,    56,    65,     0,    66,
       0,     0,    41,    42,     0,    43,    44,    45,    46,    47,
       0,     0,     0,     0,    60,    61,     0,     0,    62,    63,
      64,     0,     0,     0,     0,   586,    53,    54,     0,     0,
       0,    65,     0,    66,    56,    41,    42,     0,    43,    44,
      45,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    60,    61,     0,     0,    62,    63,    64,    53,
      54,     0,     0,     0,     0,     0,     0,    56,     0,    65,
       0,    66,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    60,    61,     0,     0,    62,
      63,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    65,     0,    66
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
       0,     0,     0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0
};

static const short int yycheck[] =
{
      36,    37,   203,   151,    49,    38,    51,    34,    87,   204,
     293,   302,    48,   117,    50,    75,    49,   445,    51,   163,
     164,    20,    24,    59,    60,    61,    68,   226,   222,   173,
      66,    64,   551,    38,   231,   232,   555,   441,   224,   443,
      62,    63,    10,    65,    49,    20,    51,    89,    24,    91,
     228,   229,    94,    24,    59,    60,    61,    24,    24,    24,
      24,     3,     4,    44,   120,    23,    17,    24,    40,    20,
      38,    39,    24,    41,    42,    43,    44,    45,    24,    87,
      22,    14,    55,    25,    20,    24,    24,     0,    61,   270,
      98,    44,   273,    35,    62,    63,    98,    24,    31,   280,
      24,   100,    70,     5,    44,    40,    24,    24,    20,    20,
      68,    13,    87,    44,    44,   151,   152,    16,    99,    18,
      88,    89,    98,    98,    92,    93,   645,    98,   276,   101,
      44,    98,    98,    98,    98,    44,   564,   105,    44,   107,
     108,    98,   202,   247,   339,   293,    98,   295,   292,   209,
      44,    87,    98,   352,   348,   191,   192,   561,   449,    98,
      98,   197,   359,   360,   350,   201,   101,    44,    99,    99,
       5,    98,   208,    44,    98,    87,    87,   355,   356,   206,
      98,    98,     5,    44,    44,    99,    44,   192,   221,    12,
      99,    44,     5,    99,    44,   251,   201,   139,   140,    16,
      13,   257,    97,   208,     5,    99,    23,   263,    44,    44,
      44,    12,   234,   235,   236,   237,    88,    89,   240,     5,
     401,    44,    99,    88,   405,   406,    12,    13,    99,   410,
       5,    44,     5,    98,     5,   416,     5,   418,    99,    99,
     276,    99,     5,    44,   323,   101,    99,     4,     5,    99,
     283,    68,   285,   289,   290,    12,    13,   293,    44,   295,
       5,   303,   298,    99,   309,    99,   302,   550,    13,    44,
     306,    44,   305,    44,   310,    44,   309,   313,   283,    88,
     285,    44,   318,   319,   432,     5,   328,   329,    87,    98,
     326,    47,   334,    88,    57,    58,    59,   333,    87,    44,
      57,    58,    59,    98,   309,   310,   342,     5,   313,    98,
      44,     5,   345,    44,   341,    13,   460,     5,    12,    13,
       5,    88,    89,   379,    44,    13,   382,   269,    13,     5,
     272,   387,     5,     5,   390,    44,    12,   342,    98,   395,
      12,    88,   398,   365,   366,   367,   368,   528,     5,   371,
     531,    98,    44,   534,    44,    12,   537,    87,   641,    44,
     541,   644,   543,    57,    58,    59,    88,   568,    44,    57,
      58,    59,    57,    58,    59,    99,    98,   413,     5,    97,
     104,    57,    58,    59,    57,    58,    59,    10,    11,   422,
     423,    55,   428,    88,   430,   431,   432,    61,    21,   100,
      57,    58,    59,    98,   440,    88,    88,   443,   450,   445,
      88,    92,    93,   449,    37,    98,    98,   422,   423,   702,
      98,   457,   458,   465,   466,   461,    49,   469,   470,    88,
      57,    58,    59,   475,    21,   477,    88,    88,    87,    98,
      88,    64,   478,    66,    67,   501,    98,    98,   493,   505,
      98,   191,   457,   458,    65,   511,     5,   197,   494,   515,
     493,    65,    17,    12,    13,   521,     5,    90,    91,   525,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,     8,     5,    94,    95,    96,    88,    88,   493,    12,
      94,    95,    96,   529,     5,   643,    98,    98,    54,   535,
      88,    12,    13,   704,     9,    44,    92,    93,    87,   545,
      98,   102,   104,   103,   550,    62,    44,   101,    57,    58,
      59,    87,    44,    44,     5,    44,     5,    44,   564,     5,
      44,     5,    44,    44,     5,   571,    44,     5,    10,   581,
      88,   583,    87,    87,   100,    98,    57,    58,    59,    87,
      47,    87,    98,    16,   106,     8,    99,   108,     9,    21,
      10,    87,   102,   104,    44,    98,    38,    39,    40,    41,
      42,    43,    44,    45,   103,    44,   106,    44,    44,    99,
     616,    99,    98,    44,    44,   621,    44,   623,    44,    87,
      62,    63,   628,    87,    87,    44,   632,    99,    70,   635,
      87,    87,   638,    87,    87,   641,    98,   643,   644,    87,
      87,    16,    87,    98,    44,   651,    88,    89,   100,    21,
      92,    93,    94,    47,    16,    98,    44,    99,    98,   189,
     327,   327,    97,   105,    98,   107,     0,   220,   147,    98,
     164,   677,    99,    98,   680,    99,    98,    87,   684,    87,
      98,   687,    99,    99,   690,    87,    99,   693,    87,    98,
      87,    98,   698,    98,    98,   701,   702,     4,   710,     6,
      98,    87,   708,    10,    99,    98,    98,    98,    15,    99,
      17,    98,    19,    20,    99,    22,    98,    98,    25,    99,
      98,    87,    99,    99,    98,   731,    87,    98,   734,    99,
      87,    38,    39,   106,    41,    42,    43,    44,    45,    46,
      99,    99,    98,    50,    51,    52,    53,    98,    98,    98,
     335,    99,    98,    98,    98,    62,    63,    99,    98,   335,
      99,    98,    69,    70,    71,    72,    98,    87,    99,    98,
      98,   242,    99,    98,    98,    98,    98,    98,   494,    98,
      87,    88,    89,    98,    98,    92,    93,    94,     4,    98,
       6,   159,    98,    98,    10,    98,    98,    98,   105,    15,
     107,    17,    98,    19,    20,    98,    22,    98,    98,    25,
      98,    98,    98,    98,    98,    98,    61,   452,    35,   555,
     293,   732,    38,    39,    -1,    41,    42,    43,    44,    45,
      46,    -1,    10,    -1,    50,    51,    52,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    -1,    -1,    -1,
      38,    39,   276,    41,    42,    43,    44,    45,    -1,    -1,
      10,    87,    88,    89,    -1,    -1,    92,    93,    94,    -1,
      -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,   105,
      -1,   107,    70,    -1,    -1,    -1,    -1,    -1,    38,    39,
      -1,    41,    42,    43,    44,    45,    -1,    -1,    10,    -1,
      88,    89,    -1,    -1,    92,    93,    94,    -1,    -1,    -1,
      -1,    99,    62,    63,    -1,    -1,    -1,   105,    -1,   107,
      70,    -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,
      42,    43,    44,    45,    10,    -1,    -1,    -1,    88,    89,
      -1,    -1,    92,    93,    94,    -1,    -1,    -1,    -1,    -1,
      62,    63,    -1,    -1,    -1,   105,   106,   107,    70,    -1,
      -1,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      10,    -1,    -1,    -1,    -1,    87,    88,    89,    -1,    -1,
      92,    93,    94,    -1,    -1,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,   105,    70,   107,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    10,    -1,    -1,    -1,
      -1,    -1,    88,    89,    -1,    -1,    92,    93,    94,    -1,
      -1,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,   105,
      70,   107,    -1,    -1,    38,    39,    -1,    41,    42,    43,
      44,    45,    10,    -1,    -1,    -1,    -1,    -1,    88,    89,
      -1,    -1,    92,    93,    94,    -1,    -1,    -1,    62,    63,
      -1,    -1,    -1,    -1,    -1,   105,    70,   107,    -1,    -1,
      38,    39,    -1,    41,    42,    43,    44,    45,    -1,    -1,
      10,    -1,    -1,    -1,    88,    89,    -1,    -1,    92,    93,
      94,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,    -1,
      -1,   105,    70,   107,    -1,    -1,    -1,    -1,    38,    39,
      -1,    41,    42,    43,    44,    45,    -1,    -1,    10,    -1,
      88,    89,    -1,    -1,    92,    93,    -1,    -1,    -1,    -1,
      98,    -1,    62,    63,    -1,    -1,    -1,   105,    -1,   107,
      70,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    10,    -1,    -1,    -1,    88,    89,
      -1,    -1,    92,    93,    -1,    -1,    -1,    -1,    98,    -1,
      62,    63,    -1,    -1,    -1,   105,    -1,   107,    70,    -1,
      -1,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      10,    -1,    -1,    -1,    -1,    -1,    88,    89,    -1,    -1,
      92,    93,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,   105,    70,   107,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    10,    -1,    -1,    -1,
      -1,    -1,    88,    89,    -1,    -1,    92,    93,    -1,    -1,
      -1,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,   105,
      70,   107,    -1,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    10,    -1,    -1,    -1,    -1,    -1,    88,    89,
      -1,    -1,    92,    93,    -1,    -1,    -1,    -1,    62,    63,
      -1,    -1,    -1,    -1,    -1,   105,    70,   107,    -1,    -1,
      38,    39,    -1,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    89,    -1,    -1,    92,    93,
      -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,    -1,
      -1,   105,    70,   107,    38,    39,    -1,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      88,    89,    -1,    -1,    92,    93,    -1,    -1,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    70,   105,    -1,   107,
      -1,    -1,    38,    39,    -1,    41,    42,    43,    44,    45,
      -1,    -1,    -1,    -1,    88,    89,    -1,    -1,    92,    93,
      94,    -1,    -1,    -1,    -1,    99,    62,    63,    -1,    -1,
      -1,   105,    -1,   107,    70,    38,    39,    -1,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    89,    -1,    -1,    92,    93,    94,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,   105,
      -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    89,    -1,    -1,    92,
      93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,   107
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     4,     5,    12,    13,    57,    58,    59,   110,   111,
     112,   126,   134,   135,   206,   207,    44,   137,   138,   139,
      44,     5,    13,   126,     5,    12,   126,     0,     5,    12,
      13,    97,   112,     6,    10,    15,    17,    19,    20,    22,
      25,    38,    39,    41,    42,    43,    44,    45,    46,    50,
      51,    52,    53,    62,    63,    69,    70,    71,    72,    87,
      88,    89,    92,    93,    94,   105,   107,   113,   114,   117,
     118,   119,   120,   122,   123,   124,   127,   128,   129,   130,
     131,   132,   133,   134,   142,   143,   144,   145,   149,   150,
     151,   152,   153,   154,   155,   156,   160,   163,   164,   165,
     167,   169,   170,   172,   174,   176,   178,   180,   182,   184,
     186,   187,   189,   190,   191,   101,   140,    87,   136,    47,
      88,    98,    44,     5,   126,     5,    13,    44,     5,   126,
       5,    12,    44,     5,    13,     5,    12,   112,   170,    12,
      13,    44,   126,   206,   165,   165,   174,   176,   200,    98,
      44,    88,    89,   161,   165,   200,   165,   202,   200,    44,
     165,   174,    99,   165,   174,   193,   106,   193,   187,   187,
     176,   187,   108,   165,   205,   164,    97,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    54,   100,
     121,   125,    87,   123,   121,   164,   164,    21,   164,     6,
     117,    87,   124,    17,     8,   166,     9,   168,    87,   124,
      10,    11,    21,    37,    49,    64,    66,    67,    90,    91,
     171,   173,   102,   175,   103,   177,   104,   179,    55,    61,
     181,    92,    93,   183,    65,    94,    95,    96,   185,    62,
      40,   101,   188,   194,    44,   101,   138,    87,    44,    99,
     137,    88,    98,    44,     5,    44,     5,    88,    98,    44,
       5,    44,     5,    88,    98,    44,     5,    44,     5,    13,
      44,   126,    12,    44,   126,    88,   115,   116,    12,    13,
      44,    98,    98,    87,   199,    87,   199,    87,   141,    40,
      94,    99,   165,   208,   210,   212,   213,   214,    98,   165,
     196,   197,    87,    98,   159,    47,    87,   201,   141,    20,
      87,   192,   216,    87,   192,   216,    99,   106,    87,    98,
     204,   216,   108,   122,   202,    16,    18,   146,   147,   148,
      16,   202,    23,    68,   157,   158,   162,   167,   169,     8,
     170,     9,    87,    21,    10,   173,   176,   178,   102,   180,
     103,   182,   104,   184,   184,    55,    61,   186,   186,    92,
      93,   187,   187,   187,   187,    65,    94,    95,    96,   187,
      44,    40,   194,    44,   138,    98,    99,    99,   137,    88,
      98,    44,    88,    98,    44,    99,   137,    88,    98,    44,
      88,    98,    44,    99,   137,    88,    98,    44,    88,    98,
      44,    44,   126,   116,    13,    44,    44,   126,   116,    12,
      44,    99,   210,    24,    98,    13,    44,    12,    44,   116,
     174,   176,    87,    87,    44,    87,   165,   165,   100,   216,
      40,    94,   212,   213,   214,    99,   165,   213,    87,    87,
      98,   165,   198,    98,   106,    87,   195,   161,   164,    87,
      98,   176,   165,    87,   200,   165,   174,    87,    87,   165,
     165,    87,   121,    98,   165,   147,   148,   164,   164,    98,
      98,    98,   165,   164,    16,   157,   162,    98,    16,   169,
     170,   176,   178,   180,   182,   184,   184,   186,   186,   187,
     187,   187,   187,    88,    89,   187,    98,    98,    99,    99,
     137,    88,    98,    99,   137,    88,    98,    98,    99,    99,
     137,    88,    98,    99,   137,    88,    98,    98,    99,    99,
     137,    88,    98,    99,   137,    88,    98,   116,    44,    24,
      98,    44,   116,   116,    44,    24,    98,    44,   116,    99,
     165,    44,   116,    44,   116,    24,    98,   174,   176,    44,
      87,   209,   211,   165,   165,   165,   213,    87,    87,   165,
     198,   165,   198,   197,    87,   161,   164,   201,    21,   165,
     174,    87,   203,   216,   165,    98,   164,   164,   164,   164,
      47,    98,   164,    98,   164,   165,    99,   200,   196,    98,
      98,    99,    99,   137,    98,    99,    99,   137,    98,    98,
      99,    99,   137,    98,    99,    99,   137,    98,    98,    99,
      99,   137,    98,    99,    99,   137,    24,    98,   116,   165,
     116,    24,    98,    24,    98,   116,   165,   116,    24,    98,
      98,   116,    24,    98,   116,    24,    98,   165,    40,   213,
     214,    87,   211,    87,    87,   209,   211,   198,   197,   167,
     165,    87,    16,    44,   164,   164,    99,   106,    98,    98,
      99,    98,    98,    99,    98,    98,    99,    98,    98,    99,
      98,    98,    99,    98,    98,    99,   165,    24,    98,    98,
      24,    98,   165,   165,    24,    98,    98,    24,    98,   165,
      24,    98,   165,    24,    98,   165,    98,   165,    40,   214,
     213,    40,    87,   211,    17,   215,   216,   217,    98,   165,
      98,    98,    98,    98,    98,    98,    98,    98,   165,   165,
      98,    98,   165,   165,    98,   165,    98,   165,    98,   165,
     165,    40,   167,   165,    98,   164,    98,    98,    98,    98,
      98,    98,   165,   215,   165
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
#line 151 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
						ast->generate_main(p->getMainFunction());
						}
						Streams::verbose().flush();	
								}
    break;

  case 3:
/* Line 868 of glr.c  */
#line 167 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"program : import_stmt ';' temp2 \n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn);}
    break;

  case 4:
/* Line 868 of glr.c  */
#line 168 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"program : temp2 \n";}
    break;

  case 5:
/* Line 868 of glr.c  */
#line 172 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"temp2: classdef temp2\n";
							ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
							cout<<"enter upper"<<endl;
							out_of_import=true;
						}
    break;

  case 6:
/* Line 868 of glr.c  */
#line 177 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"temp2: classdef \n";
							//ast->createClassNode();
							cout<<"enter classdef"<<endl;
					}
    break;

  case 7:
/* Line 868 of glr.c  */
#line 194 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
#line 204 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader:	DEF  NAME parameters ARROW test ':'  \n";}
    break;

  case 9:
/* Line 868 of glr.c  */
#line 205 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader:  DEF access NAME parameters ARROW test ':'  \n";}
    break;

  case 10:
/* Line 868 of glr.c  */
#line 206 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
											testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,ff, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
											inside_func=false;
											Streams::verbose() <<"funcheader: DEF NAME parameters ':' \n";
											
									   }
    break;

  case 11:
/* Line 868 of glr.c  */
#line 216 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    { 
												testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,ff, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											inside_func=false;
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
												Streams::verbose() <<"funcheader: DEF access NAME parameters ':' \n";
											  }
    break;

  case 12:
/* Line 868 of glr.c  */
#line 225 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC NAME parameters ARROW test ':' \n";}
    break;

  case 13:
/* Line 868 of glr.c  */
#line 226 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL NAME parameters ARROW test ':' \n";}
    break;

  case 14:
/* Line 868 of glr.c  */
#line 227 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
												testfunction = p->createTypeFunctionHeader(t,true,pp,pro,ff, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											inside_func=false;
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
												Streams::verbose() <<"funcheader: DEF STATIC NAME parameters ':' \n";
											 }
    break;

  case 15:
/* Line 868 of glr.c  */
#line 236 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
											testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											inside_func=false;
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
												Streams::verbose() <<"funcheader: DEF FINAL NAME parameters ':' \n";
											 }
    break;

  case 16:
/* Line 868 of glr.c  */
#line 245 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC FINAL NAME parameters ARROW test ':' \n";}
    break;

  case 17:
/* Line 868 of glr.c  */
#line 246 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 18:
/* Line 868 of glr.c  */
#line 247 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
														testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
											inside_func=false;
														Streams::verbose() <<"funcheader: DEF STATIC FINAL NAME parameters ':'  \n";
												    }
    break;

  case 19:
/* Line 868 of glr.c  */
#line 256 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
													testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
											inside_func=false;
													Streams::verbose() <<"funcheader: DEF FINAL STATIC NAME parameters ':'  \n";
													}
    break;

  case 20:
/* Line 868 of glr.c  */
#line 265 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
																testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
											inside_func=false;
																Streams::verbose() <<"funcheader: DEF FINAL access NAME parameters ARROW test ':'  \n";
															  }
    break;

  case 21:
/* Line 868 of glr.c  */
#line 274 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC access NAME parameters ARROW test ':'  \n";}
    break;

  case 22:
/* Line 868 of glr.c  */
#line 275 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
											testfunction = p->createTypeFunctionHeader(t,true,pp,pro,ff, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											inside_func=false;
											linefunc=yylval.r.lineNum;
														colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF STATIC access NAME parameters ':'  \n";
													}
    break;

  case 23:
/* Line 868 of glr.c  */
#line 283 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
														testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											inside_func=false;
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
														Streams::verbose() <<"funcheader: DEF STATIC access NAME parameters ':' ";
													}
    break;

  case 24:
/* Line 868 of glr.c  */
#line 292 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC FINAL access NAME parameters ARROW test ':'  \n";}
    break;

  case 25:
/* Line 868 of glr.c  */
#line 293 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL STATIC access NAME parameters ARROW test ':'  \n";}
    break;

  case 26:
/* Line 868 of glr.c  */
#line 294 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
											testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											inside_func=false;
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
															Streams::verbose() <<"funcheader: DEF STATIC FINAL access NAME parameters ':'  \n";
														  }
    break;

  case 27:
/* Line 868 of glr.c  */
#line 303 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											inside_func=false;
											linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF FINAL STATIC access NAME parameters ':'  \n";
														  }
    break;

  case 28:
/* Line 868 of glr.c  */
#line 311 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 29:
/* Line 868 of glr.c  */
#line 312 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access FINAL NAME parameters ARROW test ':'  \n";}
    break;

  case 30:
/* Line 868 of glr.c  */
#line 313 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
														testfunction = p->createTypeFunctionHeader(t,true,pp,pro,ff, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											inside_func=false;
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
														Streams::verbose() <<"funcheader: DEF access STATIC NAME parameters ':'  \n";
													}
    break;

  case 31:
/* Line 868 of glr.c  */
#line 322 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
														testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											inside_func=false;
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
														Streams::verbose() <<"funcheader: DEF access FINAL NAME parameters ':'  \n";
													}
    break;

  case 32:
/* Line 868 of glr.c  */
#line 331 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access STATIC FINAL NAME parameters ARROW test ':'  \n";}
    break;

  case 33:
/* Line 868 of glr.c  */
#line 332 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access FINAL STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 34:
/* Line 868 of glr.c  */
#line 333 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											inside_func=false;
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
															Streams::verbose() <<"funcheader: DEF access STATIC FINAL NAME parameters ':'  \n";
			   											  }
    break;

  case 35:
/* Line 868 of glr.c  */
#line 342 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											inside_func=false;
											linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF access FINAL STATIC NAME parameters ':'  \n";
			  											  }
    break;

  case 36:
/* Line 868 of glr.c  */
#line 350 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC access FINAL NAME parameters ARROW test ':'  \n";}
    break;

  case 37:
/* Line 868 of glr.c  */
#line 351 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL access STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 38:
/* Line 868 of glr.c  */
#line 352 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											inside_func=false;
											linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF STATIC access FINAL NAME parameters ':'  \n";
			  											  }
    break;

  case 39:
/* Line 868 of glr.c  */
#line 360 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											inside_func=false;
											linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF FINAL access STATIC NAME parameters ':'  \n";
														  }
    break;

  case 40:
/* Line 868 of glr.c  */
#line 370 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    { inside_func=true; Streams::verbose() <<"inside_func:'(' ";}
    break;

  case 41:
/* Line 868 of glr.c  */
#line 373 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"inside_func arglist ')'\n";}
    break;

  case 42:
/* Line 868 of glr.c  */
#line 374 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"parameters:'(' ')'\n";}
    break;

  case 43:
/* Line 868 of glr.c  */
#line 377 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {	((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);	Streams::verbose() <<"stmt:	simple_stmt \n";
						visit_num=0;
					}
    break;

  case 44:
/* Line 868 of glr.c  */
#line 380 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {	((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);cout<<"line num"<<yylval.r.lineNum<<endl;	Streams::verbose() <<"stmt: compound_stmt\n";
							visit_num=0;
						}
    break;

  case 45:
/* Line 868 of glr.c  */
#line 384 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"simple_stmt: small_stmt ';' \n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 46:
/* Line 868 of glr.c  */
#line 388 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"small_stmt: expr_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 47:
/* Line 868 of glr.c  */
#line 392 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
						Streams::verbose() <<"small_stmt: del_stmt \n";
						((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
					  }
    break;

  case 48:
/* Line 868 of glr.c  */
#line 396 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"small_stmt: pass_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
					   }
    break;

  case 49:
/* Line 868 of glr.c  */
#line 400 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"small_stmt: flow_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
					   }
    break;

  case 50:
/* Line 868 of glr.c  */
#line 404 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"small_stmt: import_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						 }
    break;

  case 51:
/* Line 868 of glr.c  */
#line 408 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"small_stmt: global_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						 }
    break;

  case 52:
/* Line 868 of glr.c  */
#line 412 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: nonlocal_stmt \n";}
    break;

  case 53:
/* Line 868 of glr.c  */
#line 413 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"small_stmt: print_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
							visit_num=0;
						 }
    break;

  case 54:
/* Line 868 of glr.c  */
#line 420 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"expr_stmt:	testlist_star_expr augassign testlist \n";}
    break;

  case 55:
/* Line 868 of glr.c  */
#line 421 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"expr_stmt: testlist_star_expr \n";}
    break;

  case 56:
/* Line 868 of glr.c  */
#line 422 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
								Streams::verbose() <<"compound_stmt: vardef\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
								visit_num=0;
							}
    break;

  case 57:
/* Line 868 of glr.c  */
#line 427 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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

  case 58:
/* Line 868 of glr.c  */
#line 450 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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
													if((v)&&(array_right))
													{
														v->set_isarray(true);
													}
													
													
													
												}
    break;

  case 59:
/* Line 868 of glr.c  */
#line 477 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"right_testlist: '=' testlist_star_expr right_testlist \n";}
    break;

  case 60:
/* Line 868 of glr.c  */
#line 478 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"right_testlist: '=' testlist_star_expr \n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 61:
/* Line 868 of glr.c  */
#line 481 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: comma_test_star_seqJ \n";}
    break;

  case 62:
/* Line 868 of glr.c  */
#line 482 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: comma_test_star_seqJ ',' \n";}
    break;

  case 63:
/* Line 868 of glr.c  */
#line 483 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"',' \n";}
    break;

  case 64:
/* Line 868 of glr.c  */
#line 484 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: test comma_test_star_seqJ \n";}
    break;

  case 65:
/* Line 868 of glr.c  */
#line 485 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
								Streams::verbose() <<"testlist_star_expr: test \n"; 
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 66:
/* Line 868 of glr.c  */
#line 489 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: star_expr comma_test_star_seqJ ',' \n";}
    break;

  case 67:
/* Line 868 of glr.c  */
#line 490 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: star_expr ',' \n";}
    break;

  case 68:
/* Line 868 of glr.c  */
#line 493 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star : ',' test \n";}
    break;

  case 69:
/* Line 868 of glr.c  */
#line 494 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star : ',' star_expr \n";}
    break;

  case 70:
/* Line 868 of glr.c  */
#line 497 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seqJ : comma_test_star_seqJ comma_test_star \n";}
    break;

  case 71:
/* Line 868 of glr.c  */
#line 498 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seqJ : comma_test_star \n";}
    break;

  case 72:
/* Line 868 of glr.c  */
#line 500 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	PLUS_EQUAL \n";}
    break;

  case 73:
/* Line 868 of glr.c  */
#line 501 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MINUS_EQUAL \n";}
    break;

  case 74:
/* Line 868 of glr.c  */
#line 502 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	STAR_EQUAL \n";}
    break;

  case 75:
/* Line 868 of glr.c  */
#line 503 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	DIV_EQUAL \n";}
    break;

  case 76:
/* Line 868 of glr.c  */
#line 504 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MOD_EQUAL \n";}
    break;

  case 77:
/* Line 868 of glr.c  */
#line 505 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	AND_EQUAL \n";}
    break;

  case 78:
/* Line 868 of glr.c  */
#line 506 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	OR_EQUAL \n";}
    break;

  case 79:
/* Line 868 of glr.c  */
#line 507 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	SHAPOO_EQUAL \n";}
    break;

  case 80:
/* Line 868 of glr.c  */
#line 508 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	LESS_THAN_2_EQUAL \n";}
    break;

  case 81:
/* Line 868 of glr.c  */
#line 509 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MORE_THAN_2_EQUAL \n";}
    break;

  case 82:
/* Line 868 of glr.c  */
#line 510 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	STAR_2_EQUAL \n";}
    break;

  case 83:
/* Line 868 of glr.c  */
#line 511 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	DIV_2_EQUAL \n";}
    break;

  case 84:
/* Line 868 of glr.c  */
#line 514 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose()<<"access_modef: PRIVATE\n";acc_mod="private";pp=true;}
    break;

  case 85:
/* Line 868 of glr.c  */
#line 515 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {pp=false;Streams::verbose()<<"access_modef:	PUBLIC\n";acc_mod="public";pp=false;}
    break;

  case 86:
/* Line 868 of glr.c  */
#line 516 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {pro=true;Streams::verbose()<<"access_modef:	PROTECTED\n";acc_mod="protected";}
    break;

  case 87:
/* Line 868 of glr.c  */
#line 518 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"print_stmt: PRINT exprlist \n";
							((*yyvalp).tn) = ast->createPrintNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
						   }
    break;

  case 88:
/* Line 868 of glr.c  */
#line 522 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"del_stmt:   DEL exprlist \n";
							((*yyvalp).tn) = ast->createDelNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
						 }
    break;

  case 89:
/* Line 868 of glr.c  */
#line 528 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
					Streams::verbose() <<"pass_stmt:	PASS \n";
					((*yyvalp).tn) = ast->createPassNode(NULL, NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
				 }
    break;

  case 90:
/* Line 868 of glr.c  */
#line 534 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
						Streams::verbose() <<"flow_stmt:	break_stmt \n";
						((*yyvalp).tn) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
					   }
    break;

  case 91:
/* Line 868 of glr.c  */
#line 538 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
								Streams::verbose() <<"flow_stmt: continue_stmt\n";
								((*yyvalp).tn) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 92:
/* Line 868 of glr.c  */
#line 542 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"flow_stmt: return_stmt\n";
							((*yyvalp).tn) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						  }
    break;

  case 93:
/* Line 868 of glr.c  */
#line 548 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
					Streams::verbose() <<"break_stmt: BREAK \n";
					((*yyvalp).tn) = ast->createFlowStmtNode(NULL, NULL, breakNode, NULL,yylval.r.lineNum,yylval.r.colNum);
				  }
    break;

  case 94:
/* Line 868 of glr.c  */
#line 554 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"continue_stmt:	CONTINUE \n";
							((*yyvalp).tn) = ast->createFlowStmtNode(NULL, NULL, continueNode, NULL,yylval.r.lineNum,yylval.r.colNum);
						 }
    break;

  case 95:
/* Line 868 of glr.c  */
#line 560 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
									Streams::verbose() <<"return_stmt:	RETURN testlist \n";
									((*yyvalp).tn) = ast->createReturnNode(testfunction,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
								}
    break;

  case 96:
/* Line 868 of glr.c  */
#line 564 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"return_stmt:	RETURN \n";
							((*yyvalp).tn) = ast->createReturnNode(testfunction,NULL, NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
						}
    break;

  case 97:
/* Line 868 of glr.c  */
#line 571 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"import_stmt: import_name \n";}
    break;

  case 98:
/* Line 868 of glr.c  */
#line 574 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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

  case 99:
/* Line 868 of glr.c  */
#line 612 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_dotted_as_name_seq: ',' dotted_as_name \n";
														
														inhertance_list.push_back(temp_id_stack.top());
														temp_id_stack.pop();
												}
    break;

  case 100:
/* Line 868 of glr.c  */
#line 617 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_dotted_as_name_seq: comma_dotted_as_name_seq ',' dotted_as_name \n";
																					inhertance_list.push_back(temp_id_stack.top());
																				temp_id_stack.pop();
																		}
    break;

  case 101:
/* Line 868 of glr.c  */
#line 622 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
									Streams::verbose() <<"comma_dotted_as_name_seq: dotted_as_names: dotted_as_name \n";
									inhertance_list.push_back(temp_id_stack.top());
								temp_id_stack.pop();
					}
    break;

  case 102:
/* Line 868 of glr.c  */
#line 627 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
															Streams::verbose() <<"comma_dotted_as_name_seq: dotted_as_name comma_dotted_as_name_seq \n";
								inhertance_list.insert(inhertance_list.begin(),temp_id_stack.top());
								temp_id_stack.pop();
								temp_id="";
				 }
    break;

  case 103:
/* Line 868 of glr.c  */
#line 636 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dotted_as_name: dotted_name \n";
								t_id=new char[10];
								strcpy(t_id,temp_id.c_str());
								temp_id_stack.push(t_id);
								temp_id="";
							}
    break;

  case 104:
/* Line 868 of glr.c  */
#line 642 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dotted_as_name: dotted_name AS NAME\n";}
    break;

  case 105:
/* Line 868 of glr.c  */
#line 645 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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

  case 106:
/* Line 868 of glr.c  */
#line 674 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dotted_name: NAME dotted_name_seq \n";
											temp_id=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.r.strVal)+temp_id;
									}
    break;

  case 107:
/* Line 868 of glr.c  */
#line 679 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"dotted_name_seq: '.' NAME \n";
							temp_id=temp_id+"."+(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal);
						}
    break;

  case 108:
/* Line 868 of glr.c  */
#line 683 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
												Streams::verbose() <<"dotted_name_seq: dotted_name_seq '.' NAME \n";
					temp_id=temp_id+"."+(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal);
				 }
    break;

  case 109:
/* Line 868 of glr.c  */
#line 689 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
								Streams::verbose() <<"comma_name_seq :	',' NAME \n";
								((*yyvalp).var)=p->addVariableToGlobalScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal), yylval.r.lineNum, yylval.r.colNum);
								v = ((*yyvalp).var);
								((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
							 }
    break;

  case 110:
/* Line 868 of glr.c  */
#line 695 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
												Streams::verbose() <<"comma_name_seq :	comma_name_seq ',' NAME \n";
												((*yyvalp).var)=p->addVariableToGlobalScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal), yylval.r.lineNum, yylval.r.colNum);
												v = ((*yyvalp).var);
												Node* temp = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
												Node* seq = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn);
												seq->Next = temp;
											 }
    break;

  case 111:
/* Line 868 of glr.c  */
#line 705 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"global_stmt: GLOBAL NAME \n";
							((*yyvalp).var)=p->addVariableToGlobalScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal), yylval.r.lineNum, yylval.r.colNum);
							v = ((*yyvalp).var);
							Node* temp = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
							((*yyvalp).tn) = ast->createGlobalNode(temp,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
						 }
    break;

  case 112:
/* Line 868 of glr.c  */
#line 712 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() <<"global_stmt: GLOBAL NAME comma_name_seq\n";
											((*yyvalp).var)=p->addVariableToGlobalScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.strVal), yylval.r.lineNum, yylval.r.colNum);											
											v = ((*yyvalp).var);
											Node* temp = ast->createIDNode(v,0,(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),yylval.r.lineNum,yylval.r.colNum);
											((*yyvalp).tn) = ast->createGlobalNode(temp,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
										 }
    break;

  case 113:
/* Line 868 of glr.c  */
#line 721 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"nonlocal_stmt:	NONLOCAL NAME \n";}
    break;

  case 114:
/* Line 868 of glr.c  */
#line 722 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"nonlocal_stmt: NONLOCAL NAME comma_name_seq \n";}
    break;

  case 115:
/* Line 868 of glr.c  */
#line 725 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"compound_stmt:  if_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 116:
/* Line 868 of glr.c  */
#line 729 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: while_stmt\n";}
    break;

  case 117:
/* Line 868 of glr.c  */
#line 730 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
								Streams::verbose() <<"compound_stmt: for_stmt\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						   }
    break;

  case 118:
/* Line 868 of glr.c  */
#line 734 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
								Streams::verbose() <<"compound_stmt: try_stmt\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						   }
    break;

  case 119:
/* Line 868 of glr.c  */
#line 738 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: with_stmt\n";}
    break;

  case 120:
/* Line 868 of glr.c  */
#line 739 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {	
								Streams::verbose() <<"compound_stmt: funcdef\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 121:
/* Line 868 of glr.c  */
#line 743 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
									Streams::verbose() <<"compound_stmt: DEF classdef\n";
									((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
								}
    break;

  case 122:
/* Line 868 of glr.c  */
#line 748 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF NAME\n";
											((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,0,0);
											v=((*yyvalp).var);
											v1=new Variable();
											v1=v;
										((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
										visit_num++;
									}
    break;

  case 123:
/* Line 868 of glr.c  */
#line 756 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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

  case 124:
/* Line 868 of glr.c  */
#line 765 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF STATIC NAME\n";
											Streams::verbose()<<"var_declaration: STATIC ID\n";
											((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false,false);
											v=((*yyvalp).var);
											v1=v;
											visit_num++;
											((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
										}
    break;

  case 125:
/* Line 868 of glr.c  */
#line 773 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF FINAL NAME\n";
												Streams::verbose()<<"var_declaration: FINAL ID\n";
												((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													v1=v;
													visit_num++;
													((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
										}
    break;

  case 126:
/* Line 868 of glr.c  */
#line 781 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF STATIC FINAL NAME\n";
													Streams::verbose()<<"var_declaration: STATIC FINAL ID\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													visit_num++;
													v1=v;
													((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
												}
    break;

  case 127:
/* Line 868 of glr.c  */
#line 789 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF FINAL STATIC NAME\n";
													Streams::verbose()<<"var_declaration: STATIC FINAL ID\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													v1=v;
													visit_num++;
													((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
												}
    break;

  case 128:
/* Line 868 of glr.c  */
#line 797 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF STATIC access NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													acc_mod="";
													visit_num++;
													v1=v;
													((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
												}
    break;

  case 129:
/* Line 868 of glr.c  */
#line 805 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF FINAL access NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													acc_mod="";
													v1=v;
													visit_num++;
													((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
												}
    break;

  case 130:
/* Line 868 of glr.c  */
#line 813 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF STATIC FINAL access NAME\n";
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
#line 821 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF FINAL STATIC access NAME\n";
															((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
															v=((*yyvalp).var);
															acc_mod="";
															visit_num++;
															v1=v;
															((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
														}
    break;

  case 132:
/* Line 868 of glr.c  */
#line 829 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF access STATIC NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													visit_num++;
													acc_mod="";
													v1=v;
													((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
												}
    break;

  case 133:
/* Line 868 of glr.c  */
#line 837 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF access FINAL NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													acc_mod="";
													visit_num++;
													v1=v;
													((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
											}
    break;

  case 134:
/* Line 868 of glr.c  */
#line 845 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF access STATIC FINAL NAME\n";
														((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
														v=((*yyvalp).var);
														visit_num++;
														acc_mod="";
														v1=v;
														((*yyvalp).tn) = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
													}
    break;

  case 135:
/* Line 868 of glr.c  */
#line 853 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF access FINAL STATIC NAME\n";
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
#line 861 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF STATIC access FINAL NAME\n";
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
#line 869 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atoms: DEF FINAL access STATIC NAME\n";
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
#line 878 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
									Streams::verbose() <<"elif_seq :  ELIF test ':' suite \n";
									((*yyvalp).tn) = ast->createElseIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);	
													
								}
    break;

  case 139:
/* Line 868 of glr.c  */
#line 883 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() <<"elif_seq : elif_seq ELIF test ':' suite \n";
											Node* elseIfNode = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn);
											elseIfNode->Next = ast->createElseIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
											((*yyvalp).tn) = elseIfNode;		
																			
										  }
    break;

  case 140:
/* Line 868 of glr.c  */
#line 891 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
									p->CloseScope();
									p->createNewScope();
									((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn);
									visit_num=0;
							}
    break;

  case 141:
/* Line 868 of glr.c  */
#line 897 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							p->CloseScope();
							p->createNewScope();
							visit_num=0;
						}
    break;

  case 142:
/* Line 868 of glr.c  */
#line 902 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
								Streams::verbose() <<"if_stmt:	IF test ':' suite \n";
								((*yyvalp).tn) = ast->createIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
								p->CloseScope();
							  }
    break;

  case 143:
/* Line 868 of glr.c  */
#line 907 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() <<"if_stmt:	IF test ':' suite elif_seq \n";
											((*yyvalp).tn) = ast->createIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
											p->CloseScope();
										}
    break;

  case 144:
/* Line 868 of glr.c  */
#line 912 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
												Streams::verbose() <<"if_stmt:	IF test ':' suite ELSE ':' suite \n";
												p->CloseScope();
												Node* elseNode = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
												((*yyvalp).tn) = ast->createIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.tn),elseNode,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
											  }
    break;

  case 145:
/* Line 868 of glr.c  */
#line 918 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
														Streams::verbose() <<"if_stmt:	IF test ':' suite elif_seq ELSE ':' suite \n";
														Node* elseIfNode = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.tn);
														Node* elseNode = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
														elseIfNode->Next = elseNode;
														((*yyvalp).tn) = ast->createIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.tn),elseIfNode,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
														p->CloseScope();
													   }
    break;

  case 146:
/* Line 868 of glr.c  */
#line 927 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							p->createNewScope();
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn);
							visit_num=0;
						}
    break;

  case 147:
/* Line 868 of glr.c  */
#line 932 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
									Streams::verbose() <<"while_stmt: WHILE test ':' suite \n";
									((*yyvalp).tn) = ast->createWhileNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
									p->CloseScope();
								 }
    break;

  case 148:
/* Line 868 of glr.c  */
#line 937 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() <<"while_stmt:  WHILE test ':' suite ELSE ':' suite \n";
													Node* whileNode= ast->createWhileNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
													whileNode->Next = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
													((*yyvalp).tn) = whileNode;
												 }
    break;

  case 149:
/* Line 868 of glr.c  */
#line 944 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
									Streams::verbose() <<"while_header:  WHILE test ':' \n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn);cout<<"in while"<<((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn))->getNodeType()<<endl;
								p->createNewScope();
								visit_num=0;
}
    break;

  case 150:
/* Line 868 of glr.c  */
#line 950 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
												Streams::verbose() <<"for_stmt:   FOR exprlist IN testlist ':' suite \n";
												((*yyvalp).tn) = ast->createForNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.tn), NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
												p->CloseScope();
											   }
    break;

  case 151:
/* Line 868 of glr.c  */
#line 955 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
																Streams::verbose() <<"for_stmt:  FOR exprlist IN testlist ':' suite ELSE ':' suite\n";
																Node* forNode = ast->createForNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.tn), NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (8))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
																forNode->Next = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (8))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
																((*yyvalp).tn) = forNode;															
															   }
    break;

  case 152:
/* Line 868 of glr.c  */
#line 962 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
													p->createNewScope();
													((*yyvalp).tn)= (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
											}
    break;

  case 153:
/* Line 868 of glr.c  */
#line 966 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
										p->createNewScope();
}
    break;

  case 154:
/* Line 868 of glr.c  */
#line 969 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
												Streams::verbose() <<" try_stmt:   TRY ':' suite try_except_cla_seq\n";
												p->CloseScope();
												((*yyvalp).tn) = ast->createTryNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
											 }
    break;

  case 155:
/* Line 868 of glr.c  */
#line 974 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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

  case 156:
/* Line 868 of glr.c  */
#line 983 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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

  case 157:
/* Line 868 of glr.c  */
#line 992 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
												Streams::verbose() <<"try_stmt:  TRY ':' suite FINALLY ':' suite\n";
												p->CloseScope();
												Node* finally = ast->createFinallyNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.tn), NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
												((*yyvalp).tn) = ast->createTryNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.tn), finally, NULL,yylval.r.lineNum,yylval.r.colNum);
											 }
    break;

  case 158:
/* Line 868 of glr.c  */
#line 999 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
								if(!from_except)
								{
									p->CloseScope();
									p->createNewScope();
								}
								from_except=false;
}
    break;

  case 159:
/* Line 868 of glr.c  */
#line 1007 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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

  case 160:
/* Line 868 of glr.c  */
#line 1016 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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

  case 161:
/* Line 868 of glr.c  */
#line 1031 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"with_seq:	',' with_item \n";}
    break;

  case 162:
/* Line 868 of glr.c  */
#line 1032 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"with_seq: with_seq ',' with_item\n";}
    break;

  case 163:
/* Line 868 of glr.c  */
#line 1035 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"with_stmt:  WITH with_item ':' suite \n";}
    break;

  case 164:
/* Line 868 of glr.c  */
#line 1036 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"with_stmt: WITH with_item with_seq ':' suite\n";}
    break;

  case 165:
/* Line 868 of glr.c  */
#line 1039 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<" with_item:  test\n";}
    break;

  case 166:
/* Line 868 of glr.c  */
#line 1040 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"with_item: test AS expr\n";}
    break;

  case 167:
/* Line 868 of glr.c  */
#line 1043 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
						p->CloseScope();
						p->createNewScope();
						Streams::verbose() <<"except_clause:  EXCEPT \n";
						((*yyvalp).tn) = ast->createExceptNode(NULL, NULL, NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
					   }
    break;

  case 168:
/* Line 868 of glr.c  */
#line 1049 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
								p->CloseScope();
								p->createNewScope();
								Streams::verbose() <<"except_clause:  EXCEPT test\n";
								((*yyvalp).tn) = ast->createExceptNode(NULL, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn), NULL,yylval.r.lineNum,yylval.r.colNum);
								visit_num=0;
								lastNode=NULL;
							 }
    break;

  case 169:
/* Line 868 of glr.c  */
#line 1057 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"except_clause:  EXCEPT test AS NAME\n";
												p->CloseScope();
												p->createNewScope();
												visit_num=0;
												lastNode=NULL;
										}
    break;

  case 170:
/* Line 868 of glr.c  */
#line 1065 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {	
						((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);	Streams:: verbose() <<"list_stmt : stmt\n";
				}
    break;

  case 171:
/* Line 868 of glr.c  */
#line 1068 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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

  case 172:
/* Line 868 of glr.c  */
#line 1081 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"suite:	list_stmt END\n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);	
						}
    break;

  case 173:
/* Line 868 of glr.c  */
#line 1085 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {	((*yyvalp).tn)=NULL;	Streams::verbose() <<"suite:	END\n"; ((*yyvalp).tn)=NULL;}
    break;

  case 174:
/* Line 868 of glr.c  */
#line 1088 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"test:	or_test\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 175:
/* Line 868 of glr.c  */
#line 1089 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_test IF or_test ELSE test\n";
										((*yyvalp).tn)=ast->createShortIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
		}
    break;

  case 176:
/* Line 868 of glr.c  */
#line 1093 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_seq:	OR and_test \n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 177:
/* Line 868 of glr.c  */
#line 1094 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_seq: or_seq OR and_test \n";
								((*yyvalp).tn)=ast->createBooleanNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),OR_OP,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
							}
    break;

  case 178:
/* Line 868 of glr.c  */
#line 1099 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_test:	and_test\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 179:
/* Line 868 of glr.c  */
#line 1100 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_test:	and_test or_seq\n";
							((*yyvalp).tn)=ast->createBooleanNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),OR_OP,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
							}
    break;

  case 180:
/* Line 868 of glr.c  */
#line 1105 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_seq: AND not_test \n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 181:
/* Line 868 of glr.c  */
#line 1106 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_seq: and_seq AND not_test \n";
									((*yyvalp).tn)=ast->createBooleanNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),AND_OP,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
								}
    break;

  case 182:
/* Line 868 of glr.c  */
#line 1111 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_test:	not_test\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 183:
/* Line 868 of glr.c  */
#line 1112 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_test: not_test and_seq \n";
								((*yyvalp).tn)=ast->createBooleanNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),AND_OP,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
		  }
    break;

  case 184:
/* Line 868 of glr.c  */
#line 1117 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"not_test:	NOT not_test\n";
							((*yyvalp).tn)=ast->createBooleanNode(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NOT_OP,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
							}
    break;

  case 185:
/* Line 868 of glr.c  */
#line 1120 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"not_test:	comparison\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);cout<<((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn))->getNodeType()<<endl;}
    break;

  case 186:
/* Line 868 of glr.c  */
#line 1123 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() <<"comp_op_seq: comp_op expr \n";
											((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
											lastNode=NULL;
										}
    break;

  case 187:
/* Line 868 of glr.c  */
#line 1128 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() <<"comp_op_seq: comp_op_seq comp_op expr \n";
											((*yyvalp).tn)=ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn),NULL,comp_op,yylval.r.lineNum,yylval.r.colNum);	
										}
    break;

  case 188:
/* Line 868 of glr.c  */
#line 1134 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comparison: expr\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);cout<<((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn))->getNodeType()<<" Comp"<<endl;}
    break;

  case 189:
/* Line 868 of glr.c  */
#line 1135 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
					Streams::verbose() <<"comparison: expr comp_op_seq\n";					
					((*yyvalp).tn)=ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,comp_op,yylval.r.lineNum,yylval.r.colNum);				
				}
    break;

  case 190:
/* Line 868 of glr.c  */
#line 1141 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {	
				Streams::verbose() <<"comp_op: '<' \n";
				comp_op=LESS;
			}
    break;

  case 191:
/* Line 868 of glr.c  */
#line 1145 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: '>' \n";comp_op=GREATHER;}
    break;

  case 192:
/* Line 868 of glr.c  */
#line 1146 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
					Streams::verbose() <<"comp_op: EQUAL \n";
					comp_op=EQUALS;
					}
    break;

  case 193:
/* Line 868 of glr.c  */
#line 1150 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: MORE_OR_EQUAL \n";comp_op=EQUALGREATHER;}
    break;

  case 194:
/* Line 868 of glr.c  */
#line 1151 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: LESS_OR_EQUAL \n";comp_op=EQUALLESS;}
    break;

  case 195:
/* Line 868 of glr.c  */
#line 1152 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: MORE_LESS \n";}
    break;

  case 196:
/* Line 868 of glr.c  */
#line 1153 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: NOT_EQUAL \n";comp_op=NOTEQUAL;}
    break;

  case 197:
/* Line 868 of glr.c  */
#line 1154 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IN \n";}
    break;

  case 198:
/* Line 868 of glr.c  */
#line 1155 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: NOT IN \n";}
    break;

  case 199:
/* Line 868 of glr.c  */
#line 1156 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IS \n";}
    break;

  case 200:
/* Line 868 of glr.c  */
#line 1157 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IS NOT \n";}
    break;

  case 201:
/* Line 868 of glr.c  */
#line 1160 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"star_expr: '*' expr \n";}
    break;

  case 202:
/* Line 868 of glr.c  */
#line 1163 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_xor_expr_seq: '|' xor_expr \n";}
    break;

  case 203:
/* Line 868 of glr.c  */
#line 1164 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_xor_expr_seq: or_xor_expr_seq '|' xor_expr\n";}
    break;

  case 204:
/* Line 868 of glr.c  */
#line 1166 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
					Streams::verbose() <<"expr: xor_expr\n";
					((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
				}
    break;

  case 205:
/* Line 868 of glr.c  */
#line 1170 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"expr: xor_expr or_xor_expr_seq\n";}
    break;

  case 206:
/* Line 868 of glr.c  */
#line 1173 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"sha_and_expr_seq: '^' and_expr \n";}
    break;

  case 207:
/* Line 868 of glr.c  */
#line 1174 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"sha_and_expr_seq: sha_and_expr_seq '^' and_expr\n";}
    break;

  case 208:
/* Line 868 of glr.c  */
#line 1177 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"xor_expr: and_expr\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 209:
/* Line 868 of glr.c  */
#line 1178 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"xor_expr: and_expr sha_and_expr_seq\n";}
    break;

  case 210:
/* Line 868 of glr.c  */
#line 1181 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_shift_expr_seq: '&' shift_expr \n";}
    break;

  case 211:
/* Line 868 of glr.c  */
#line 1182 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_shift_expr_seq: and_shift_expr_seq '&' shift_expr\n";}
    break;

  case 212:
/* Line 868 of glr.c  */
#line 1185 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_expr: shift_expr\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 213:
/* Line 868 of glr.c  */
#line 1186 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_expr: shift_expr and_shift_expr_seq\n";}
    break;

  case 214:
/* Line 868 of glr.c  */
#line 1189 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	LESS_THAN_2 arith_expr \n";}
    break;

  case 215:
/* Line 868 of glr.c  */
#line 1190 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	MORE_THAN_2 arith_expr \n";}
    break;

  case 216:
/* Line 868 of glr.c  */
#line 1191 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	arith_seq LESS_THAN_2 arith_expr \n";}
    break;

  case 217:
/* Line 868 of glr.c  */
#line 1192 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	arith_seq MORE_THAN_2 arith_expr \n";}
    break;

  case 218:
/* Line 868 of glr.c  */
#line 1195 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"shift_expr: arith_expr\n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 219:
/* Line 868 of glr.c  */
#line 1199 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"shift_expr: arith_expr arith_seq\n";}
    break;

  case 220:
/* Line 868 of glr.c  */
#line 1202 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : '+' term \n";
						op=PLUS;
						cout<<"op1= "<<op<<endl;
						((*yyvalp).operands)=op;
						cout<<"op = "<<((*yyvalp).operands)<<endl;
						((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 221:
/* Line 868 of glr.c  */
#line 1209 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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

  case 222:
/* Line 868 of glr.c  */
#line 1220 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : term_seq '+' term \n";//op=PLUS;
									k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
									((*yyvalp).operands)=PLUS;
									//op=$<operands>$;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,PLUS,yylval.r.lineNum,yylval.r.colNum);
								}
    break;

  case 223:
/* Line 868 of glr.c  */
#line 1226 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : term_seq '-' term \n";//op=MINUS;
									k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
									((*yyvalp).operands)=MINUS;
									//op=$<operands>$;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,MINUS,yylval.r.lineNum,yylval.r.colNum);
								}
    break;

  case 224:
/* Line 868 of glr.c  */
#line 1234 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arith_expr: term\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
									((*yyvalp).operands)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.operands);
							}
    break;

  case 225:
/* Line 868 of glr.c  */
#line 1238 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() <<"arith_expr: term term_seq\n";
											k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
											//cout<<"the value of op is "<<op<<endl;
											((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,PLUS/**op**/,yylval.r.lineNum,yylval.r.colNum);
											
										}
    break;

  case 226:
/* Line 868 of glr.c  */
#line 1248 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '*' factor \n";
							((*yyvalp).operands)=MULT;
							op=((*yyvalp).operands);
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 227:
/* Line 868 of glr.c  */
#line 1253 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '/' factor \n";
								((*yyvalp).operands)=DIV;
								op=((*yyvalp).operands);
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 228:
/* Line 868 of glr.c  */
#line 1258 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '%' factor \n";
								((*yyvalp).operands)=MOD;
								op=((*yyvalp).operands);
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 229:
/* Line 868 of glr.c  */
#line 1263 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: DIV_2 factor \n";}
    break;

  case 230:
/* Line 868 of glr.c  */
#line 1264 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '*' factor \n";
									k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
									op=MULT;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,op,yylval.r.lineNum,yylval.r.colNum);
									}
    break;

  case 231:
/* Line 868 of glr.c  */
#line 1269 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '/' factor \n";
									k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
									op=DIV;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,op,yylval.r.lineNum,yylval.r.colNum);
									}
    break;

  case 232:
/* Line 868 of glr.c  */
#line 1274 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '%' factor \n";
									op=MOD;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,op,yylval.r.lineNum,yylval.r.colNum);
									}
    break;

  case 233:
/* Line 868 of glr.c  */
#line 1278 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq DIV_2 factor \n";}
    break;

  case 234:
/* Line 868 of glr.c  */
#line 1281 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"term: 	factor\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 235:
/* Line 868 of glr.c  */
#line 1282 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"term: 	factor factor_seq\n";
								k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
								((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,op,yylval.r.lineNum,yylval.r.colNum);
							}
    break;

  case 236:
/* Line 868 of glr.c  */
#line 1288 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor: '+' factor \n";
						((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
						
					}
    break;

  case 237:
/* Line 868 of glr.c  */
#line 1292 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor: '-' factor \n";
						int* xx = new int (0);
						k = ast->createTypeNode((void*)xx,0,0,yylval.r.lineNum,yylval.r.colNum,INT);
						//k=ast->addNext(k,$<tn>2);
						((*yyvalp).tn) = ast->createExprNode(k,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,MINUS,yylval.r.lineNum,yylval.r.colNum);
						
						}
    break;

  case 238:
/* Line 868 of glr.c  */
#line 1299 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor: '~' factor \n";}
    break;

  case 239:
/* Line 868 of glr.c  */
#line 1300 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
		         if(!inside_func&&!inside_while_cond){
					visit_num++;
					Streams::verbose() <<"factor: power\n";
					exist=false;
					cout<<"visit num= "<<visit_num<<"  "<<yylval.r.lineNum<<endl;
					if((visit_num==1)&&(!constant))
					{
						((*yyvalp).var)=p->checkVariable(const_cast<char *>(temp_id2.back().c_str()),t,exist, yylval.r.lineNum, yylval.r.colNum,true,false,is_dic);
						v=((*yyvalp).var);
						v1=v;
						cout<<"exist is "<<exist<<yylval.r.lineNum<<endl;
						if((!exist)&&(v!=NULL))
						{
							//cout<<"hellow world  "<<v->get_name()<<endl;
							lastNode=ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
							cout<<"last node"<<endl;	
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
					constant=false;
				}else {
					((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
					inside_while_cond = false;
				}
			}
    break;

  case 240:
/* Line 868 of glr.c  */
#line 1366 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"trailer_seq: trailer \n";
										((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
										visit_num++;
									}
    break;

  case 241:
/* Line 868 of glr.c  */
#line 1370 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"trailer_seq: trailer_seq trailer \n";
										((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
										visit_num++;
									}
    break;

  case 242:
/* Line 868 of glr.c  */
#line 1376 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"power:	atom\n";
							//$<tn>$=ast->createCallVarNode(temp_id2.back(),NULL,NULL,NULL);
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 243:
/* Line 868 of glr.c  */
#line 1380 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"power: atom trailer_seq \n";
											cout<<"the top is "<<temp_id2.back()<<endl;
											((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
											dotvec.insert(dotvec.begin(),(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn));
											((*yyvalp).tn)=ast->createDotNode(dotvec,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
											dotvec.clear();
										}
    break;

  case 244:
/* Line 868 of glr.c  */
#line 1387 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"power: atom trailer_seq STAR_2 factor \n";}
    break;

  case 245:
/* Line 868 of glr.c  */
#line 1388 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"power: atom STAR_2 factor \n";}
    break;

  case 246:
/* Line 868 of glr.c  */
#line 1391 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"str_seq:	STRING \n"; cout<<"string is"<<((*yyvalp).r.strVal)<<endl;}
    break;

  case 247:
/* Line 868 of glr.c  */
#line 1392 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"str_seq:	str_seq STRING \n";}
    break;

  case 248:
/* Line 868 of glr.c  */
#line 1395 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'(' ')' \n";}
    break;

  case 249:
/* Line 868 of glr.c  */
#line 1396 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'(' testlist_comp ')' \n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn);cout<<((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn))->getNodeType()<<endl; inside_while_cond = true; arrayvec.clear();}
    break;

  case 250:
/* Line 868 of glr.c  */
#line 1397 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'[' ']' \n";
						arrayvec.clear();
						array_right=true;
						is_list=true;
						((*yyvalp).tn)=ast->createArrayNode(arrayvec,0,0,yylval.r.lineNum,yylval.r.colNum);
				}
    break;

  case 251:
/* Line 868 of glr.c  */
#line 1403 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' '}' \n";}
    break;

  case 252:
/* Line 868 of glr.c  */
#line 1404 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' '}' \n";
									((*yyvalp).tn)=ast->createArrayNode(arrayvec,0,0,yylval.r.lineNum,yylval.r.colNum);
									array_right=true;
									arrayvec.clear();
									}
    break;

  case 253:
/* Line 868 of glr.c  */
#line 1409 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' dictorsetmaker '}' \n";}
    break;

  case 254:
/* Line 868 of glr.c  */
#line 1410 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    { Streams::verbose() <<"atom: NAME\n";
		                            if(!inside_func){
									temp_id2.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal));
									
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
									((*yyvalp).tn)=ast->createCallVarNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal),NULL,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
					}
    break;

  case 255:
/* Line 868 of glr.c  */
#line 1427 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    { Streams::verbose() <<"atom: NAME()\n";
									//temp_id2.push_back($<r.strVal>1);
									visit_num++;
									parameters.clear();
									((*yyvalp).tn)=ast->createCallTypeNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.r.strVal),parameters,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
									}
    break;

  case 256:
/* Line 868 of glr.c  */
#line 1433 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    { Streams::verbose() <<"atom: NAME\n";
									//temp_id2.push_back($<r.strVal>1);
									visit_num++;
									((*yyvalp).tn)=ast->createCallTypeNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.strVal),parameters/*$<tn>3*/,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
									parameters.clear();
												}
    break;

  case 257:
/* Line 868 of glr.c  */
#line 1439 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"trailer:	'[' subscriptlist ']'\n";
											((*yyvalp).var)=p->checkVariable((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.strVal),t,exist, yylval.r.lineNum, yylval.r.colNum,false,true,is_dic);
											is_list=true;
											if(((*yyvalp).var))
												((*yyvalp).tn)=ast->createArrayElementNode(((*yyvalp).var),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.strVal));
												}
    break;

  case 258:
/* Line 868 of glr.c  */
#line 1445 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_INT "<<(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.intVal)<<endl;;
						int* xx = new int ((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.intVal));
						//cout<<"yhe number is"<<*xx<<endl;
						//cout<<"reference"<<xx<<endl;
						constant=true;
						((*yyvalp).tn) = ast->createTypeNode((void*)xx,0,0,yylval.r.lineNum,yylval.r.colNum,INT);
						//visit_num++;
														}
    break;

  case 259:
/* Line 868 of glr.c  */
#line 1453 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_FLOAT\n"<<(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.floatVal)<<endl;
							constant=true;
							float* x=new float((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.floatVal));
							((*yyvalp).tn) = ast->createTypeNode((void*)x,0,0,yylval.r.lineNum,yylval.r.colNum,FLOAT);
						}
    break;

  case 260:
/* Line 868 of glr.c  */
#line 1458 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_FLOAT\n";
							long *xxx=new long((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.longVal));
							constant=true;
							((*yyvalp).tn) = ast->createTypeNode(&xxx,0,0,yylval.r.lineNum,yylval.r.colNum,LONG);
						}
    break;

  case 261:
/* Line 868 of glr.c  */
#line 1463 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: CHAR_VALUE\n";}
    break;

  case 262:
/* Line 868 of glr.c  */
#line 1464 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: str_seq\n";
									char* x = new char[100];
									strcpy(x,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal));
									cout<<"x=   "<<x<<endl;
									string sd(x);
									cout<<"sd=== "<<sd<<endl;
									constant=true;
									((*yyvalp).tn) = ast->createTypeNode(reinterpret_cast<void*>(x),0,0,yylval.r.lineNum,yylval.r.colNum,STRINGS);
								}
    break;

  case 263:
/* Line 868 of glr.c  */
#line 1473 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DOT_3\n";}
    break;

  case 264:
/* Line 868 of glr.c  */
#line 1474 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: NONE\n";}
    break;

  case 265:
/* Line 868 of glr.c  */
#line 1475 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: TRUE\n";
					int* xx = new int (1);
						//cout<<"yhe number is"<<*xx<<endl;
						//cout<<"reference"<<xx<<endl;
						constant=true;
						((*yyvalp).tn) = ast->createTypeNode((void*)xx,0,0,yylval.r.lineNum,yylval.r.colNum,INT);
				}
    break;

  case 266:
/* Line 868 of glr.c  */
#line 1482 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: FALSE\n";
						int* xx = new int (0);
						//cout<<"yhe number is"<<*xx<<endl;
						//cout<<"reference"<<xx<<endl;
						constant=true;
						((*yyvalp).tn) = ast->createTypeNode((void*)xx,0,0,yylval.r.lineNum,yylval.r.colNum,INT);
				}
    break;

  case 267:
/* Line 868 of glr.c  */
#line 1491 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: ',' test\n";
							arrayvec.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
							
							}
    break;

  case 268:
/* Line 868 of glr.c  */
#line 1495 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: ',' star_expr\n";}
    break;

  case 269:
/* Line 868 of glr.c  */
#line 1496 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: comma_test_star_seq ',' test\n";
														arrayvec.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
													}
    break;

  case 270:
/* Line 868 of glr.c  */
#line 1499 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: comma_test_star_seq ',' star_expr\n";}
    break;

  case 271:
/* Line 868 of glr.c  */
#line 1502 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test comp_for\n";}
    break;

  case 272:
/* Line 868 of glr.c  */
#line 1503 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test\n"; ((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
								arrayvec.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn));
							}
    break;

  case 273:
/* Line 868 of glr.c  */
#line 1506 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test   comma_test_star_seq\n";
												((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
												arrayvec.insert(arrayvec.begin(),(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn));
											}
    break;

  case 274:
/* Line 868 of glr.c  */
#line 1510 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 275:
/* Line 868 of glr.c  */
#line 1511 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";
													arrayvec.insert(arrayvec.begin(),(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn));
												}
    break;

  case 276:
/* Line 868 of glr.c  */
#line 1514 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 277:
/* Line 868 of glr.c  */
#line 1515 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 278:
/* Line 868 of glr.c  */
#line 1516 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 279:
/* Line 868 of glr.c  */
#line 1517 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 280:
/* Line 868 of glr.c  */
#line 1518 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 281:
/* Line 868 of glr.c  */
#line 1521 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"trailer:	'.' NAME\n";
							temp_id=temp_id2.back();
							temp_id=temp_id+"."+(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal);
						temp_id2.pop_back();
						temp_id2.push_back(temp_id);	
						((*yyvalp).tn)=ast->createCallVarNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal),NULL,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
						dotvec.push_back(((*yyvalp).tn));
						}
    break;

  case 282:
/* Line 868 of glr.c  */
#line 1529 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
									Streams::verbose() <<"trailer:	'.' NAME()\n";
									((*yyvalp).tn)=ast->createCallFunctionNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.strVal),NULL,NULL,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
									dotvec.push_back(((*yyvalp).tn));
								}
    break;

  case 283:
/* Line 868 of glr.c  */
#line 1534 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
									((*yyvalp).tn)=ast->createCallFunctionNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.strVal),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.tn),NULL,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
									dotvec.push_back(((*yyvalp).tn));
								}
    break;

  case 284:
/* Line 868 of glr.c  */
#line 1538 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"trailer:	'[' subscriptlist ']'\n";
												((*yyvalp).tn)=ast->createArrayElementNode(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
												dotvec.push_back(((*yyvalp).tn));
											}
    break;

  case 285:
/* Line 868 of glr.c  */
#line 1546 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_subscript_seq: ',' subscript\n";}
    break;

  case 286:
/* Line 868 of glr.c  */
#line 1547 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_subscript_seq: comma_subscript_seq ',' subscript\n";}
    break;

  case 287:
/* Line 868 of glr.c  */
#line 1550 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 288:
/* Line 868 of glr.c  */
#line 1551 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript comma_subscript_seq\n";
													((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
												}
    break;

  case 289:
/* Line 868 of glr.c  */
#line 1554 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript  ','\n";}
    break;

  case 290:
/* Line 868 of glr.c  */
#line 1555 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript comma_subscript_seq ','\n";
															((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn));
														}
    break;

  case 291:
/* Line 868 of glr.c  */
#line 1560 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 292:
/* Line 868 of glr.c  */
#line 1561 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':'\n";}
    break;

  case 293:
/* Line 868 of glr.c  */
#line 1562 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript: test ':'\n";
							((*yyvalp).tn)=ast->createSubscriptNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),NULL,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
						}
    break;

  case 294:
/* Line 868 of glr.c  */
#line 1565 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' test\n";
								((*yyvalp).tn)=ast->createSubscriptNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
							}
    break;

  case 295:
/* Line 868 of glr.c  */
#line 1568 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' sliceop\n";}
    break;

  case 296:
/* Line 868 of glr.c  */
#line 1569 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' test sliceop\n";}
    break;

  case 297:
/* Line 868 of glr.c  */
#line 1570 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' test\n";
								((*yyvalp).tn)=ast->createSubscriptNode(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
						}
    break;

  case 298:
/* Line 868 of glr.c  */
#line 1573 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' sliceop\n";}
    break;

  case 299:
/* Line 868 of glr.c  */
#line 1574 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' test sliceop\n";}
    break;

  case 300:
/* Line 868 of glr.c  */
#line 1577 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"sliceop: ':'\n";}
    break;

  case 301:
/* Line 868 of glr.c  */
#line 1578 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"sliceop: ':' test\n";}
    break;

  case 302:
/* Line 868 of glr.c  */
#line 1581 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	',' expr \n";
										((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
									}
    break;

  case 303:
/* Line 868 of glr.c  */
#line 1584 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	',' star_expr \n";}
    break;

  case 304:
/* Line 868 of glr.c  */
#line 1585 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	comma_expr_star_seq ',' expr \n";
															((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn));
														}
    break;

  case 305:
/* Line 868 of glr.c  */
#line 1588 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	comma_expr_star_seq ',' star_expr \n";}
    break;

  case 306:
/* Line 868 of glr.c  */
#line 1591 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr \n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 307:
/* Line 868 of glr.c  */
#line 1592 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr comma_expr_star_seq \n";
											((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);
											((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
										}
    break;

  case 308:
/* Line 868 of glr.c  */
#line 1596 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr \n";}
    break;

  case 309:
/* Line 868 of glr.c  */
#line 1597 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr comma_expr_star_seq \n";}
    break;

  case 310:
/* Line 868 of glr.c  */
#line 1598 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr ',' \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 311:
/* Line 868 of glr.c  */
#line 1601 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr comma_expr_star_seq ',' \n";
												((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn));
											}
    break;

  case 312:
/* Line 868 of glr.c  */
#line 1604 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr ',' \n";}
    break;

  case 313:
/* Line 868 of glr.c  */
#line 1605 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr  comma_expr_star_seq ',' \n";}
    break;

  case 314:
/* Line 868 of glr.c  */
#line 1608 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test: ',' test \n";}
    break;

  case 315:
/* Line 868 of glr.c  */
#line 1609 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"',' test comma_test \n";}
    break;

  case 316:
/* Line 868 of glr.c  */
#line 1612 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	test \n";}
    break;

  case 317:
/* Line 868 of glr.c  */
#line 1613 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	test comma_test \n";}
    break;

  case 318:
/* Line 868 of glr.c  */
#line 1614 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	 test ','\n";}
    break;

  case 319:
/* Line 868 of glr.c  */
#line 1615 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	 test comma_test ','\n";}
    break;

  case 320:
/* Line 868 of glr.c  */
#line 1618 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_colon_test_seq:  ',' test ':' test \n";}
    break;

  case 321:
/* Line 868 of glr.c  */
#line 1619 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_colon_test_seq: comma_test_colon_test_seq ',' test ':' test\n";}
    break;

  case 322:
/* Line 868 of glr.c  */
#line 1621 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_seq: ',' test \n";}
    break;

  case 323:
/* Line 868 of glr.c  */
#line 1622 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_seq: comma_test_seq ',' test \n";}
    break;

  case 324:
/* Line 868 of glr.c  */
#line 1625 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comp_for \n";}
    break;

  case 325:
/* Line 868 of glr.c  */
#line 1626 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test \n";}
    break;

  case 326:
/* Line 868 of glr.c  */
#line 1627 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test ',' \n";}
    break;

  case 327:
/* Line 868 of glr.c  */
#line 1628 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comma_test_colon_test_seq \n";}
    break;

  case 328:
/* Line 868 of glr.c  */
#line 1629 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comma_test_colon_test_seq ','\n";}
    break;

  case 329:
/* Line 868 of glr.c  */
#line 1630 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test comp_for\n";}
    break;

  case 330:
/* Line 868 of glr.c  */
#line 1631 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test\n";}
    break;

  case 331:
/* Line 868 of glr.c  */
#line 1632 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ','\n";}
    break;

  case 332:
/* Line 868 of glr.c  */
#line 1633 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ','\n";}
    break;

  case 333:
/* Line 868 of glr.c  */
#line 1634 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test comma_test_seq ','\n";}
    break;

  case 334:
/* Line 868 of glr.c  */
#line 1636 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
								Streams::verbose() <<"classdef: classheader suite\n";
								((*yyvalp).type)=p->finishTypeDeclaration(t);
								((*yyvalp).tn)=ast->createClassNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.type),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL,yylval.r.lineNum,yylval.r.colNum);
							}
    break;

  case 335:
/* Line 868 of glr.c  */
#line 1642 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
								Streams::verbose() << "class_h: CLASS ID \n";
								colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);

								inhertance_list.clear();
					}
    break;

  case 336:
/* Line 868 of glr.c  */
#line 1650 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
									Streams::verbose() << "class_h: access_modef CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 337:
/* Line 868 of glr.c  */
#line 1657 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
									Streams::verbose() << "class_h: STATIC CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 338:
/* Line 868 of glr.c  */
#line 1664 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
									Streams::verbose() << "class_h: FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 339:
/* Line 868 of glr.c  */
#line 1671 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 340:
/* Line 868 of glr.c  */
#line 1678 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
												Streams::verbose() << "class_h: STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 341:
/* Line 868 of glr.c  */
#line 1685 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 342:
/* Line 868 of glr.c  */
#line 1692 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: STATIC access_modef CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 343:
/* Line 868 of glr.c  */
#line 1699 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 344:
/* Line 868 of glr.c  */
#line 1706 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 345:
/* Line 868 of glr.c  */
#line 1713 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: access_modef STATIC CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 346:
/* Line 868 of glr.c  */
#line 1720 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: access_modef FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 347:
/* Line 868 of glr.c  */
#line 1727 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 348:
/* Line 868 of glr.c  */
#line 1734 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 349:
/* Line 868 of glr.c  */
#line 1741 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 350:
/* Line 868 of glr.c  */
#line 1748 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 351:
/* Line 868 of glr.c  */
#line 1755 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
										Streams::verbose() << "class_h: CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
									t=((*yyvalp).type);
									inhertance_list.clear();
									temp_id="";
									acc_mod="";
								}
    break;

  case 352:
/* Line 868 of glr.c  */
#line 1763 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 353:
/* Line 868 of glr.c  */
#line 1770 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 354:
/* Line 868 of glr.c  */
#line 1777 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 355:
/* Line 868 of glr.c  */
#line 1784 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 356:
/* Line 868 of glr.c  */
#line 1791 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 357:
/* Line 868 of glr.c  */
#line 1798 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 358:
/* Line 868 of glr.c  */
#line 1805 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 359:
/* Line 868 of glr.c  */
#line 1812 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 360:
/* Line 868 of glr.c  */
#line 1819 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 361:
/* Line 868 of glr.c  */
#line 1826 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 362:
/* Line 868 of glr.c  */
#line 1833 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 363:
/* Line 868 of glr.c  */
#line 1840 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 364:
/* Line 868 of glr.c  */
#line 1847 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 365:
/* Line 868 of glr.c  */
#line 1854 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 366:
/* Line 868 of glr.c  */
#line 1861 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 367:
/* Line 868 of glr.c  */
#line 1868 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
														Streams::verbose() << "class_h: CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
												((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
												acc_mod="";
											}
    break;

  case 368:
/* Line 868 of glr.c  */
#line 1875 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
																Streams::verbose() << "class_h: access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 369:
/* Line 868 of glr.c  */
#line 1882 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 370:
/* Line 868 of glr.c  */
#line 1889 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 371:
/* Line 868 of glr.c  */
#line 1896 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
																	Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 372:
/* Line 868 of glr.c  */
#line 1903 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
																	Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 373:
/* Line 868 of glr.c  */
#line 1910 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
																		Streams::verbose() << "class_h: STATIC access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 374:
/* Line 868 of glr.c  */
#line 1917 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
																	Streams::verbose() << "class_h: FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 375:
/* Line 868 of glr.c  */
#line 1924 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 376:
/* Line 868 of glr.c  */
#line 1931 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 377:
/* Line 868 of glr.c  */
#line 1938 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS NAME '(' arglist ')' ':' \n";}
    break;

  case 378:
/* Line 868 of glr.c  */
#line 1939 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS NAME '(' arglist ')' ':' \n";}
    break;

  case 379:
/* Line 868 of glr.c  */
#line 1940 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 380:
/* Line 868 of glr.c  */
#line 1947 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 381:
/* Line 868 of glr.c  */
#line 1954 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 382:
/* Line 868 of glr.c  */
#line 1961 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 383:
/* Line 868 of glr.c  */
#line 1971 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arg_comma_seq : argument ','\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 384:
/* Line 868 of glr.c  */
#line 1972 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arg_comma_seq : arg_comma_seq argument ',' \n";
													//$<tn>$=ast->addNext($<tn>1,$<tn>2);
											}
    break;

  case 385:
/* Line 868 of glr.c  */
#line 1977 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_arg_seq:	',' argument\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 386:
/* Line 868 of glr.c  */
#line 1978 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_arg_seq:	comma_arg_seq ',' argument\n";
													((*yyvalp).tn)=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn));
												}
    break;

  case 387:
/* Line 868 of glr.c  */
#line 1983 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: argument\n";
					((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
					}
    break;

  case 388:
/* Line 868 of glr.c  */
#line 1986 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: default_arg\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 389:
/* Line 868 of glr.c  */
#line 1988 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: argument ','\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 390:
/* Line 868 of glr.c  */
#line 1990 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {    
						std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal));
						std::string erro("*" + tempstr);
						char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
						Streams::verbose() <<"arglist: '*' test\n";
				   }
    break;

  case 391:
/* Line 868 of glr.c  */
#line 1998 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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

  case 392:
/* Line 868 of glr.c  */
#line 2010 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
		 					   		    std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
										Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";
								 }
    break;

  case 393:
/* Line 868 of glr.c  */
#line 2018 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
										std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);

											Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";
										 }
    break;

  case 394:
/* Line 868 of glr.c  */
#line 2027 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
		 										std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
															Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";
													   }
    break;

  case 395:
/* Line 868 of glr.c  */
#line 2035 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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

  case 396:
/* Line 868 of glr.c  */
#line 2047 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
						std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("**" + tempstr);
										char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);Streams::verbose() <<"arglist: STAR_2 test\n";
					  }
    break;

  case 397:
/* Line 868 of glr.c  */
#line 2054 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq argument\n";
												//$<tn>$=ast->addNext($<tn>1,$<tn>2);
								}
    break;

  case 398:
/* Line 868 of glr.c  */
#line 2057 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq default_arg\n";}
    break;

  case 399:
/* Line 868 of glr.c  */
#line 2058 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq default_arg_comma_seq default_arg\n";}
    break;

  case 400:
/* Line 868 of glr.c  */
#line 2059 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq argument ','\n";}
    break;

  case 401:
/* Line 868 of glr.c  */
#line 2061 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {		
									std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
									Streams::verbose() <<"arglist: arg_comma_seq '*' test\n";
								  }
    break;

  case 402:
/* Line 868 of glr.c  */
#line 2069 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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

  case 403:
/* Line 868 of glr.c  */
#line 2083 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
												std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
												Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq\n";
											   }
    break;

  case 404:
/* Line 868 of glr.c  */
#line 2091 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
														std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
														Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_default_arg_seq\n";
													   }
    break;

  case 405:
/* Line 868 of glr.c  */
#line 2099 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {
																		std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
																		Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq comma_default_arg_seq\n";
																	 }
    break;

  case 406:
/* Line 868 of glr.c  */
#line 2107 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
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

  case 407:
/* Line 868 of glr.c  */
#line 2121 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {	std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("**" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
										Streams::verbose() <<"arglist: arg_comma_seq STAR_2 test\n";
								    }
    break;

  case 408:
/* Line 868 of glr.c  */
#line 2127 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: default_arg_comma_seq default_arg\n";}
    break;

  case 409:
/* Line 868 of glr.c  */
#line 2132 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_default_arg_seq: ',' default_arg\n";}
    break;

  case 410:
/* Line 868 of glr.c  */
#line 2133 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_default_arg_seq: comma_default_arg_seq ',' default_arg\n";}
    break;

  case 411:
/* Line 868 of glr.c  */
#line 2136 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"default_arg_comma_seq: default_arg ','\n";}
    break;

  case 412:
/* Line 868 of glr.c  */
#line 2137 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"default_arg_comma_seq: default_arg_comma_seq default_arg ','\n";}
    break;

  case 413:
/* Line 868 of glr.c  */
#line 2140 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {parameters.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.r.strVal));Streams::verbose() <<"default_arg: test in_default test\n";
							Node* o=ast->createAssignNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn),NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
							((*yyvalp).tn)=ast->addNext(my_node,o);
							amer_par.push_back(((*yyvalp).tn));
							df_par.push_back(((*yyvalp).tn));
							}
    break;

  case 414:
/* Line 868 of glr.c  */
#line 2147 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {parameters.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal)); Streams::verbose() <<"argument: 	test\n";
					((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn); 
					amer_par.push_back(my_node);
					}
    break;

  case 415:
/* Line 868 of glr.c  */
#line 2151 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {parameters.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.r.strVal));Streams::verbose() <<"argument: 	test comp_for\n";
					((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn); 
			}
    break;

  case 416:
/* Line 868 of glr.c  */
#line 2157 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_iter:  comp_for\n";}
    break;

  case 417:
/* Line 868 of glr.c  */
#line 2158 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_iter:  comp_if\n";}
    break;

  case 418:
/* Line 868 of glr.c  */
#line 2161 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_for: 	FOR exprlist IN or_test\n";}
    break;

  case 419:
/* Line 868 of glr.c  */
#line 2162 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_for: FOR exprlist IN or_test comp_iter\n";}
    break;

  case 420:
/* Line 868 of glr.c  */
#line 2165 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_if: IF or_test\n";}
    break;

  case 421:
/* Line 868 of glr.c  */
#line 2166 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_if: IF or_test comp_iter\n";}
    break;


/* Line 868 of glr.c  */
#line 5914 "yacc.cpp"
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
  (!!((Yystate) == (-520)))

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
  (!!((Yytable_value) == (-401)))

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
#line 2169 "C:\\Users\\Molham\\Documents\\Visual Studio 2013\\Projects\\compilerProject\\yaccFinal.y"

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