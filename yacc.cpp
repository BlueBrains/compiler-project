/* A Bison parser, made by GNU Bison 2.1.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     END_OF_FILE = 258,
     IMPORT = 259,
     CLASS = 260,
     ID = 261,
     COLON = 262,
     CLOSE_S = 263,
     COMMA = 264,
     DOT = 265,
     END = 266,
     OPEN_C = 267,
     CLOSE_C = 268,
     DEF = 269,
     ASSIGN = 270,
     STAR = 271,
     ELSE = 272,
     IF = 273,
     ELIF = 274,
     WHILE = 275,
     FOR = 276,
     IN = 277,
     TRY = 278,
     FINALLY = 279,
     EXPECT = 280,
     WITH = 281,
     AS = 282,
     ASSERT = 283,
     EQUAL = 284,
     DEL = 285,
     RETURN = 286,
     PRINT = 287,
     GLOBAL = 288,
     AND_W = 289,
     OR_W = 290,
     RAISE = 291,
     PRIVATE = 292,
     PUBLIC = 293,
     PROTECTED = 294,
     OPEN_D = 295,
     CLOSE_D = 296,
     RE_COT = 297,
     YIELD = 298,
     PRIMARY = 299,
     OR = 300,
     AND = 301,
     NOT = 302,
     PLUS = 303,
     MINUS = 304,
     DIV = 305,
     MOD = 306,
     NOT_EQUAL = 307,
     FINAL = 308,
     STATIC = 309,
     SELF = 310,
     LESS_THAN = 311,
     LESS_OR_EQUAL = 312,
     MORE_THAN = 313,
     MORE_OR_EQUAL = 314,
     TRUE = 315,
     FALSE = 316,
     EXCEPT = 317,
     SEMICOLON = 318,
     NEW_LINE = 319,
     PASS = 320,
     CHAR_VALUE = 321,
     OPEN_S = 322,
     STRING_VALUE = 323,
     INTEGER_VALUE = 324,
     BREAK = 325,
     CONTINUE = 326,
     LONG_VALUE = 327,
     FLOAT_VALUE = 328,
     stmt_1_2 = 329,
     stmt_11 = 330,
     stmt_10 = 331,
     stmt_9 = 332,
     stmt_7 = 333,
     stmt_6 = 334,
     stmt_5 = 335,
     stmt_4 = 336,
     stmt_3 = 337,
     stmt_2 = 338,
     stmt_1 = 339,
     stmt_8 = 340,
     MULTI = 341
   };
#endif
/* Tokens.  */
#define END_OF_FILE 258
#define IMPORT 259
#define CLASS 260
#define ID 261
#define COLON 262
#define CLOSE_S 263
#define COMMA 264
#define DOT 265
#define END 266
#define OPEN_C 267
#define CLOSE_C 268
#define DEF 269
#define ASSIGN 270
#define STAR 271
#define ELSE 272
#define IF 273
#define ELIF 274
#define WHILE 275
#define FOR 276
#define IN 277
#define TRY 278
#define FINALLY 279
#define EXPECT 280
#define WITH 281
#define AS 282
#define ASSERT 283
#define EQUAL 284
#define DEL 285
#define RETURN 286
#define PRINT 287
#define GLOBAL 288
#define AND_W 289
#define OR_W 290
#define RAISE 291
#define PRIVATE 292
#define PUBLIC 293
#define PROTECTED 294
#define OPEN_D 295
#define CLOSE_D 296
#define RE_COT 297
#define YIELD 298
#define PRIMARY 299
#define OR 300
#define AND 301
#define NOT 302
#define PLUS 303
#define MINUS 304
#define DIV 305
#define MOD 306
#define NOT_EQUAL 307
#define FINAL 308
#define STATIC 309
#define SELF 310
#define LESS_THAN 311
#define LESS_OR_EQUAL 312
#define MORE_THAN 313
#define MORE_OR_EQUAL 314
#define TRUE 315
#define FALSE 316
#define EXCEPT 317
#define SEMICOLON 318
#define NEW_LINE 319
#define PASS 320
#define CHAR_VALUE 321
#define OPEN_S 322
#define STRING_VALUE 323
#define INTEGER_VALUE 324
#define BREAK 325
#define CONTINUE 326
#define LONG_VALUE 327
#define FLOAT_VALUE 328
#define stmt_1_2 329
#define stmt_11 330
#define stmt_10 331
#define stmt_9 332
#define stmt_7 333
#define stmt_6 334
#define stmt_5 335
#define stmt_4 336
#define stmt_3 337
#define stmt_2 338
#define stmt_1 339
#define stmt_8 340
#define MULTI 341




/* Copy the first part of user declarations.  */
#line 3 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"

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


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 66 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
typedef union YYSTYPE {
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
} YYSTYPE;
/* Line 196 of yacc.c.  */
#line 334 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 346 "yacc.cpp"

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T) && (defined (__STDC__) || defined (__cplusplus))
# include <stddef.h> /* INFRINGES ON USER NAME SPACE */
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if defined (__STDC__) || defined (__cplusplus)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     define YYINCLUDED_STDLIB_H
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2005 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM ((YYSIZE_T) -1)
#  endif
#  ifdef __cplusplus
extern "C" {
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if (! defined (malloc) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if (! defined (free) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifdef __cplusplus
}
#  endif
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short int yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short int) + sizeof (YYSTYPE))			\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short int yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  30
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2779

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  72
/* YYNRULES -- Number of rules. */
#define YYNRULES  411
/* YYNRULES -- Number of states. */
#define YYNSTATES  833

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   341

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
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
       0,     0,     3,     6,     9,    11,    15,    19,    22,    24,
      27,    30,    34,    38,    42,    47,    52,    58,    64,    69,
      74,    80,    86,    93,   100,   105,   110,   116,   122,   128,
     134,   140,   146,   152,   157,   163,   169,   175,   182,   189,
     197,   205,   212,   219,   227,   235,   244,   253,   260,   267,
     275,   283,   291,   299,   307,   315,   323,   331,   337,   344,
     351,   358,   366,   374,   383,   392,   400,   408,   417,   426,
     436,   446,   454,   462,   471,   480,   489,   498,   507,   516,
     525,   534,   537,   541,   544,   548,   550,   554,   556,   560,
     562,   565,   569,   572,   576,   579,   583,   587,   590,   592,
     595,   597,   599,   602,   605,   608,   611,   615,   619,   624,
     629,   631,   635,   639,   644,   649,   654,   660,   666,   673,
     680,   684,   688,   692,   697,   702,   708,   714,   719,   724,
     730,   736,   742,   748,   755,   762,   770,   778,   784,   790,
     797,   804,   812,   820,   827,   834,   842,   850,   855,   859,
     862,   866,   870,   874,   879,   884,   889,   894,   900,   906,
     912,   918,   925,   932,   939,   946,   953,   960,   965,   970,
     975,   979,   984,   989,   994,   998,  1003,  1008,  1013,  1017,
    1022,  1027,  1032,  1036,  1038,  1042,  1046,  1050,  1054,  1060,
    1066,  1070,  1075,  1080,  1084,  1088,  1092,  1094,  1097,  1101,
    1105,  1110,  1114,  1116,  1121,  1126,  1130,  1135,  1141,  1148,
    1154,  1157,  1161,  1164,  1168,  1171,  1175,  1178,  1180,  1182,
    1184,  1186,  1188,  1190,  1192,  1195,  1198,  1203,  1206,  1210,
    1214,  1219,  1228,  1239,  1242,  1247,  1252,  1256,  1262,  1266,
    1269,  1272,  1275,  1278,  1282,  1285,  1288,  1292,  1295,  1300,
    1305,  1312,  1319,  1324,  1329,  1335,  1341,  1347,  1353,  1358,
    1363,  1368,  1373,  1377,  1381,  1385,  1391,  1397,  1403,  1411,
    1413,  1417,  1423,  1427,  1433,  1437,  1443,  1447,  1449,  1455,
    1461,  1464,  1467,  1471,  1474,  1479,  1481,  1483,  1485,  1487,
    1489,  1491,  1493,  1495,  1497,  1499,  1501,  1503,  1505,  1508,
    1513,  1515,  1517,  1519,  1521,  1525,  1529,  1536,  1542,  1548,
    1554,  1557,  1562,  1565,  1571,  1579,  1585,  1591,  1599,  1605,
    1607,  1610,  1612,  1615,  1618,  1623,  1627,  1633,  1636,  1639,
    1643,  1645,  1647,  1650,  1655,  1660,  1666,  1668,  1670,  1672,
    1676,  1682,  1686,  1690,  1696,  1700,  1702,  1704,  1708,  1712,
    1714,  1716,  1718,  1720,  1722,  1724,  1726,  1728,  1730,  1732,
    1734,  1736,  1738,  1740,  1742,  1744,  1747,  1751,  1755,  1758,
    1760,  1764,  1768,  1771,  1774,  1777,  1781,  1785,  1789,  1792,
    1796,  1800,  1802,  1805,  1810,  1815,  1820,  1822,  1824,  1828,
    1830,  1834,  1838,  1842,  1846,  1850,  1854,  1856,  1860,  1862,
    1867,  1870,  1875,  1882,  1887,  1891,  1893,  1895,  1897,  1899,
    1901,  1903
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
      88,     0,    -1,    89,     3,    -1,    89,    91,    -1,    91,
      -1,     4,    95,    63,    -1,     4,    95,     1,    -1,    90,
      92,    -1,    92,    -1,    93,    97,    -1,     5,     6,    -1,
     137,     5,     6,    -1,    54,     5,     6,    -1,    53,     5,
       6,    -1,    54,    53,     5,     6,    -1,    53,    54,     5,
       6,    -1,    54,     1,    54,     5,     6,    -1,    53,     1,
      53,     5,     6,    -1,    54,   137,     5,     6,    -1,    53,
     137,     5,     6,    -1,    54,    53,   137,     5,     6,    -1,
      53,    54,   137,     5,     6,    -1,    54,     1,    54,   137,
       5,     6,    -1,    53,     1,    53,   137,     5,     6,    -1,
     137,    54,     5,     6,    -1,   137,    53,     5,     6,    -1,
     137,    54,    53,     5,     6,    -1,   137,    53,    54,     5,
       6,    -1,   137,    54,    54,     5,     6,    -1,   137,    53,
      53,     5,     6,    -1,    54,   137,    53,     5,     6,    -1,
      53,   137,    53,     5,     6,    -1,    54,   137,    54,     5,
       6,    -1,     5,     6,    67,     8,    -1,   137,     5,     6,
      67,     8,    -1,    54,     5,     6,    67,     8,    -1,    53,
       5,     6,    67,     8,    -1,    54,    53,     5,     6,    67,
       8,    -1,    53,    54,     5,     6,    67,     8,    -1,    54,
       1,    54,     5,     6,    67,     8,    -1,    53,     1,    53,
       5,     6,    67,     8,    -1,    54,   137,     5,     6,    67,
       8,    -1,    53,   137,     5,     6,    67,     8,    -1,    54,
      53,   137,     5,     6,    67,     8,    -1,    53,    54,   137,
       5,     6,    67,     8,    -1,    54,     1,    54,   137,     5,
       6,    67,     8,    -1,    53,     1,    53,   137,     5,     6,
      67,     8,    -1,   137,    54,     5,     6,    67,     8,    -1,
     137,    53,     5,     6,    67,     8,    -1,   137,    54,    53,
       5,     6,    67,     8,    -1,   137,    53,    54,     5,     6,
      67,     8,    -1,   137,    54,    54,     5,     6,    67,     8,
      -1,   137,    53,    53,     5,     6,    67,     8,    -1,    54,
     137,    53,     5,     6,    67,     8,    -1,    53,   137,    54,
       5,     6,    67,     8,    -1,    54,   137,    54,     5,     6,
      67,     8,    -1,    53,   137,    53,     5,     6,    67,     8,
      -1,     5,     6,    67,    95,     8,    -1,   137,     5,     6,
      67,    95,     8,    -1,    54,     5,     6,    67,    95,     8,
      -1,    53,     5,     6,    67,    95,     8,    -1,    54,    53,
       5,     6,    67,    95,     8,    -1,    53,    54,     5,     6,
      67,    95,     8,    -1,    54,     1,    54,     5,     6,    67,
      95,     8,    -1,    53,     1,    53,     5,     6,    67,    95,
       8,    -1,    54,   137,     5,     6,    67,    95,     8,    -1,
      53,   137,     5,     6,    67,    95,     8,    -1,    54,    53,
     137,     5,     6,    67,    95,     8,    -1,    53,    54,   137,
       5,     6,    67,    95,     8,    -1,    54,     1,    54,   137,
       5,     6,    67,    95,     8,    -1,    53,     1,    53,   137,
       5,     6,    67,    95,     8,    -1,   137,    54,     5,     6,
      67,    95,     8,    -1,   137,    53,     5,     6,    67,    95,
       8,    -1,   137,    54,    53,     5,     6,    67,    95,     8,
      -1,   137,    53,    54,     5,     6,    67,    95,     8,    -1,
     137,    54,    54,     5,     6,    67,    95,     8,    -1,   137,
      53,    53,     5,     6,    67,    95,     8,    -1,    53,   137,
      54,     5,     6,    67,    95,     8,    -1,    54,   137,    53,
       5,     6,    67,    95,     8,    -1,    54,   137,    54,     5,
       6,    67,    95,     8,    -1,    53,   137,    53,     5,     6,
      67,    95,     8,    -1,     5,     1,    -1,     6,     1,     6,
      -1,     6,     1,    -1,    94,     9,   154,    -1,   154,    -1,
      95,     9,    96,    -1,    96,    -1,    96,    10,     6,    -1,
       6,    -1,     7,    11,    -1,     7,    98,    11,    -1,     1,
      11,    -1,     1,    98,    11,    -1,     7,     1,    -1,     7,
      98,     1,    -1,    98,    14,    99,    -1,    14,    99,    -1,
      99,    -1,   100,    63,    -1,   101,    -1,    92,    -1,   100,
       1,    -1,   137,     6,    -1,    54,     6,    -1,    53,     6,
      -1,    54,    53,     6,    -1,    53,    54,     6,    -1,    54,
       1,    54,     6,    -1,    53,     1,    53,     6,    -1,     6,
      -1,    53,   137,     6,    -1,    54,   137,     6,    -1,   137,
       6,    15,   154,    -1,    54,     6,    15,   154,    -1,    53,
       6,    15,   154,    -1,    54,    53,     6,    15,   154,    -1,
      53,    54,     6,    15,   154,    -1,    54,     1,    54,     6,
      15,   154,    -1,    53,     1,    53,     6,    15,   154,    -1,
       6,    15,   154,    -1,   137,    54,     6,    -1,   137,    53,
       6,    -1,   137,    54,    53,     6,    -1,   137,    53,    54,
       6,    -1,   137,    54,     1,    54,     6,    -1,   137,    53,
       1,    53,     6,    -1,    54,    53,   137,     6,    -1,    53,
      54,   137,     6,    -1,    54,     1,    54,   137,     6,    -1,
      53,     1,    53,   137,     6,    -1,   137,    54,     6,    15,
     154,    -1,   137,    53,     6,    15,   154,    -1,   137,    54,
      53,     6,    15,   154,    -1,   137,    53,    54,     6,    15,
     154,    -1,   137,    54,     1,    54,     6,    15,   154,    -1,
     137,    53,     1,    53,     6,    15,   154,    -1,    54,   137,
       6,    15,   154,    -1,    53,   137,     6,    15,   154,    -1,
      54,    53,   137,     6,    15,   154,    -1,    53,    54,   137,
       6,    15,   154,    -1,    54,     1,    54,   137,     6,    15,
     154,    -1,    53,     1,    53,   137,     6,    15,   154,    -1,
      54,   137,    53,     6,    15,   154,    -1,    53,   137,    54,
       6,    15,   154,    -1,    54,   137,    54,     1,     6,    15,
     154,    -1,    53,   137,    53,     1,     6,    15,   154,    -1,
     137,     6,     6,     1,    -1,     6,     6,     1,    -1,   102,
     108,    -1,   137,   102,   108,    -1,    54,   102,   108,    -1,
      53,   102,   108,    -1,   137,    54,   102,   108,    -1,   137,
      53,   102,   108,    -1,    54,   137,   102,   108,    -1,    53,
     137,   102,   108,    -1,    54,   137,    53,   102,   108,    -1,
      53,   137,    54,   102,   108,    -1,    54,    53,   137,   102,
     108,    -1,    53,    54,   137,   102,   108,    -1,    53,   137,
      53,     1,   102,   108,    -1,    54,   137,    54,     1,   102,
     108,    -1,    54,    54,     1,   137,   102,   108,    -1,    53,
      53,     1,   137,   102,   108,    -1,   137,    53,     1,    53,
     102,   108,    -1,   137,    54,     1,    54,   102,   108,    -1,
       6,    67,    55,     8,    -1,     6,    67,     6,     8,    -1,
       6,    67,   103,     8,    -1,     6,    67,     8,    -1,     1,
      67,   103,     8,    -1,     1,    67,     6,     8,    -1,     1,
      67,    55,     8,    -1,     1,    67,     8,    -1,     6,     1,
     103,     8,    -1,     6,     1,     6,     8,    -1,     6,     1,
      55,     8,    -1,     6,     1,     8,    -1,     6,    67,   103,
       1,    -1,     6,    67,     6,     1,    -1,     6,    67,    55,
       1,    -1,     6,    67,     1,    -1,   104,    -1,    55,     9,
     104,    -1,    55,     9,     6,    -1,    55,     9,   106,    -1,
     104,     9,   106,    -1,    55,     9,   104,     9,   106,    -1,
      55,     9,     6,     9,   106,    -1,   104,     9,   105,    -1,
     104,     9,     1,    55,    -1,     6,     9,     1,    55,    -1,
       6,     9,   105,    -1,   104,     9,     6,    -1,     6,     9,
       6,    -1,   105,    -1,    16,     6,    -1,    16,    16,     6,
      -1,     6,    16,     1,    -1,     6,    16,    16,     1,    -1,
     106,     9,   107,    -1,   107,    -1,   106,     1,     9,   104,
      -1,   106,     1,     9,     6,    -1,     6,    15,   154,    -1,
      16,     6,    15,   154,    -1,    16,    16,     6,    15,   154,
      -1,     6,    16,     1,    16,    15,   154,    -1,     6,    16,
       1,    15,   154,    -1,     7,    11,    -1,     7,   109,    11,
      -1,     1,    11,    -1,     1,   109,    11,    -1,     7,     1,
      -1,     7,   109,     1,    -1,   109,   110,    -1,   110,    -1,
     111,    -1,   115,    -1,   117,    -1,   122,    -1,   125,    -1,
     108,    -1,   126,    63,    -1,   126,     1,    -1,    55,    10,
       6,    63,    -1,     6,    63,    -1,    54,     6,    63,    -1,
      53,     6,    63,    -1,     6,    10,     6,    63,    -1,     6,
       9,     6,    10,     6,    10,     6,    63,    -1,     6,    10,
       6,     9,     6,    10,     6,    10,     6,    63,    -1,   113,
     110,    -1,   113,   110,    17,   110,    -1,   113,   110,     1,
     110,    -1,   113,   110,   112,    -1,   113,   110,   112,    17,
     110,    -1,   114,   110,   112,    -1,   114,   110,    -1,   114,
       1,    -1,    18,   154,    -1,    19,   154,    -1,     1,     6,
     154,    -1,   116,   110,    -1,    20,   154,    -1,     1,     6,
     154,    -1,   118,   110,    -1,    21,   121,    22,    94,    -1,
      21,   121,    22,   148,    -1,    21,     6,     9,     6,    22,
      94,    -1,    21,     6,     9,     6,    22,   148,    -1,    21,
       6,    22,    94,    -1,    21,     6,    22,   148,    -1,     6,
       1,     6,    22,    94,    -1,     6,     1,     6,    22,   148,
      -1,     6,     1,   121,    22,    94,    -1,     6,     1,   121,
      22,   148,    -1,    21,     6,     1,    94,    -1,    21,     6,
       1,   148,    -1,    21,   121,     1,    94,    -1,    21,   121,
       1,   148,    -1,   119,     9,   120,    -1,     6,     9,   119,
      -1,     6,     9,     6,    -1,     6,     9,     6,    10,     6,
      -1,     6,    10,     6,     9,   119,    -1,     6,    10,     6,
       9,     6,    -1,     6,    10,     6,     9,     6,    10,     6,
      -1,   120,    -1,   120,    10,     6,    -1,     6,    10,     6,
      10,     6,    -1,   121,     9,   138,    -1,     6,     9,     6,
       9,   138,    -1,   121,     9,     6,    -1,     6,     9,     6,
       9,     6,    -1,     6,     9,   138,    -1,   138,    -1,    23,
     110,     7,   124,    11,    -1,    23,   110,     7,   123,    11,
      -1,    24,   108,    -1,    62,   110,    -1,    62,   154,   110,
      -1,    26,   154,    -1,    26,   154,    27,   138,    -1,    94,
      -1,   127,    -1,   129,    -1,    65,    -1,   130,    -1,   133,
      -1,   131,    -1,   132,    -1,   136,    -1,    70,    -1,    71,
      -1,   119,    -1,   134,    -1,    28,   154,    -1,    28,   154,
       9,   154,    -1,    94,    -1,   147,    -1,   148,    -1,   144,
      -1,   121,    15,   128,    -1,   156,    15,   128,    -1,   156,
      40,    94,    41,    15,   128,    -1,   156,    40,    41,    15,
     128,    -1,     6,     9,     6,    15,   128,    -1,    55,    10,
       6,    15,   128,    -1,    30,   121,    -1,    30,     6,     9,
       6,    -1,    30,     6,    -1,    30,     6,    40,   154,    41,
      -1,    30,     6,    40,   154,     7,   154,    41,    -1,    30,
       6,    40,     7,    41,    -1,    30,   121,    40,   154,    41,
      -1,    30,   121,    40,   154,     7,   154,    41,    -1,    30,
     121,    40,     7,    41,    -1,    31,    -1,    31,    94,    -1,
     151,    -1,    32,    94,    -1,    32,   121,    -1,    32,    58,
      58,    94,    -1,     6,     1,    94,    -1,     6,     1,    58,
      58,    94,    -1,    33,   135,    -1,    33,     1,    -1,     6,
       9,   135,    -1,     6,    -1,    36,    -1,    36,   154,    -1,
      36,   154,     9,   154,    -1,    36,   154,     9,     1,    -1,
       6,     1,   154,     9,   154,    -1,    37,    -1,    38,    -1,
      39,    -1,    67,   121,     8,    -1,    67,     6,     9,     6,
       8,    -1,    67,     6,     8,    -1,    40,   121,    41,    -1,
      40,     6,     9,     6,    41,    -1,    40,     6,    41,    -1,
     139,    -1,   152,    -1,   140,    10,     6,    -1,     6,    10,
       6,    -1,   141,    -1,   139,    -1,   152,    -1,   153,    -1,
     143,    -1,   142,    -1,    68,    -1,    69,    -1,    72,    -1,
      73,    -1,    66,    -1,   147,    -1,   148,    -1,   149,    -1,
     150,    -1,   144,    -1,    12,    13,    -1,    12,   145,    13,
      -1,   145,     9,   146,    -1,   145,     9,    -1,   146,    -1,
     154,     7,   154,    -1,    67,    94,     8,    -1,    67,     8,
      -1,     1,     8,    -1,    67,     1,    -1,     1,    94,     8,
      -1,    67,    94,     1,    -1,    40,    94,    41,    -1,    40,
      41,    -1,    42,    94,    42,    -1,    67,   151,     8,    -1,
      43,    -1,    43,    94,    -1,    44,    40,    94,    41,    -1,
      44,    40,   104,    41,    -1,    44,    40,     6,    41,    -1,
     155,    -1,   142,    -1,   154,   158,   154,    -1,   157,    -1,
     154,    29,   154,    -1,   154,    52,   154,    -1,   154,    56,
     154,    -1,   154,    57,   154,    -1,   154,    58,   154,    -1,
     154,    59,   154,    -1,     6,    -1,   156,    10,     6,    -1,
     156,    -1,    55,    10,     6,   147,    -1,   156,   147,    -1,
     156,    40,   154,    41,    -1,   156,    40,   154,     7,   154,
      41,    -1,   156,    40,     7,    41,    -1,    55,    10,     6,
      -1,    48,    -1,    49,    -1,    50,    -1,    51,    -1,    45,
      -1,    47,    -1,    46,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   107,   107,   115,   118,   126,   127,   132,   133,   136,
     139,   144,   150,   156,   162,   168,   174,   181,   188,   194,
     200,   206,   212,   219,   226,   232,   238,   244,   250,   258,
     266,   272,   280,   288,   295,   301,   307,   313,   319,   325,
     328,   331,   337,   343,   349,   355,   362,   369,   375,   381,
     387,   393,   401,   409,   415,   421,   429,   437,   443,   449,
     455,   461,   467,   473,   476,   479,   485,   491,   497,   503,
     510,   517,   523,   529,   535,   541,   549,   558,   564,   570,
     578,   586,   591,   596,   603,   604,   607,   614,   623,   627,
     635,   639,   642,   648,   655,   661,   669,   670,   671,   677,
     678,   679,   680,   686,   692,   697,   702,   707,   712,   716,
     720,   724,   730,   736,   741,   747,   753,   759,   766,   774,
     782,   788,   796,   805,   813,   821,   830,   840,   846,   853,
     857,   861,   870,   878,   886,   894,   901,   908,   916,   924,
     932,   940,   948,   955,   963,   971,   978,   985,   992,   998,
     999,  1000,  1001,  1002,  1003,  1004,  1005,  1006,  1007,  1008,
    1009,  1010,  1014,  1018,  1022,  1026,  1030,  1038,  1039,  1040,
    1041,  1042,  1046,  1050,  1054,  1058,  1062,  1066,  1070,  1074,
    1078,  1082,  1086,  1093,  1094,  1095,  1096,  1097,  1098,  1099,
    1101,  1102,  1106,  1110,  1111,  1112,  1113,  1116,  1122,  1126,
    1130,  1137,  1138,  1139,  1143,  1149,  1150,  1156,  1160,  1164,
    1170,  1171,  1172,  1176,  1180,  1184,  1191,  1192,  1195,  1196,
    1197,  1198,  1199,  1200,  1201,  1202,  1206,  1213,  1221,  1230,
    1238,  1239,  1240,  1243,  1244,  1245,  1249,  1250,  1253,  1254,
    1255,  1261,  1264,  1265,  1271,  1276,  1277,  1283,  1286,  1287,
    1288,  1289,  1295,  1300,  1305,  1309,  1313,  1317,  1321,  1325,
    1329,  1333,  1340,  1341,  1342,  1343,  1344,  1345,  1346,  1347,
    1351,  1352,  1356,  1357,  1358,  1359,  1360,  1361,  1364,  1365,
    1368,  1371,  1372,  1375,  1376,  1379,  1380,  1381,  1383,  1384,
    1385,  1386,  1387,  1388,  1389,  1390,  1391,  1392,  1395,  1396,
    1398,  1402,  1403,  1404,  1407,  1408,  1415,  1416,  1417,  1418,
    1433,  1434,  1435,  1436,  1437,  1438,  1439,  1440,  1441,  1444,
    1445,  1448,  1451,  1452,  1453,  1454,  1458,  1463,  1464,  1470,
    1471,  1474,  1475,  1476,  1477,  1481,  1487,  1488,  1489,  1494,
    1495,  1496,  1497,  1498,  1499,  1500,  1501,  1504,  1505,  1509,
    1510,  1511,  1512,  1515,  1516,  1519,  1520,  1521,  1522,  1523,
    1526,  1527,  1528,  1529,  1530,  1533,  1534,  1536,  1537,  1538,
    1540,  1543,  1544,  1545,  1549,  1553,  1557,  1564,  1565,  1568,
    1571,  1574,  1575,  1578,  1582,  1583,  1587,  1588,  1589,  1601,
    1612,  1613,  1614,  1615,  1616,  1617,  1619,  1622,  1636,  1641,
    1646,  1647,  1648,  1649,  1650,  1658,  1659,  1660,  1661,  1662,
    1663,  1664
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "END_OF_FILE", "IMPORT", "CLASS", "ID",
  "COLON", "CLOSE_S", "COMMA", "DOT", "END", "OPEN_C", "CLOSE_C", "DEF",
  "ASSIGN", "STAR", "ELSE", "IF", "ELIF", "WHILE", "FOR", "IN", "TRY",
  "FINALLY", "EXPECT", "WITH", "AS", "ASSERT", "EQUAL", "DEL", "RETURN",
  "PRINT", "GLOBAL", "AND_W", "OR_W", "RAISE", "PRIVATE", "PUBLIC",
  "PROTECTED", "OPEN_D", "CLOSE_D", "RE_COT", "YIELD", "PRIMARY", "OR",
  "AND", "NOT", "PLUS", "MINUS", "DIV", "MOD", "NOT_EQUAL", "FINAL",
  "STATIC", "SELF", "LESS_THAN", "LESS_OR_EQUAL", "MORE_THAN",
  "MORE_OR_EQUAL", "TRUE", "FALSE", "EXCEPT", "SEMICOLON", "NEW_LINE",
  "PASS", "CHAR_VALUE", "OPEN_S", "STRING_VALUE", "INTEGER_VALUE", "BREAK",
  "CONTINUE", "LONG_VALUE", "FLOAT_VALUE", "stmt_1_2", "stmt_11",
  "stmt_10", "stmt_9", "stmt_7", "stmt_6", "stmt_5", "stmt_4", "stmt_3",
  "stmt_2", "stmt_1", "stmt_8", "MULTI", "$accept", "programes", "program",
  "import_stmt", "unit", "class_decl", "class_h", "expr_list", "unit_list",
  "unit_import", "class_body", "dm_list", "dm", "var_declaration",
  "method_declaration", "method_h", "arguments", "args_list", "arg",
  "default_args_list", "default_arg", "block_stmt", "stmt_list", "stmt",
  "if_stmt", "elif_stmt", "if_header", "elif_header", "while_stmt",
  "while_header", "for_stmt", "for_header", "import_list", "import",
  "target_list", "try_stmt", "finally_stmt", "except_stmt", "with_stmt",
  "simple_stmt_list", "assert_stmt", "left_assignment_side",
  "assignment_stmt", "del_stmt", "return_stmt", "yield_stmt", "print_stmt",
  "global_stmt", "id_list", "raise_stmt", "access_modef", "target",
  "attributeref", "primary", "atom", "literal", "enclosure",
  "dict_display", "key_datum_list", "key_datum", "parenth_form",
  "list_display", "string_conversion", "yield_atom", "yield_expression",
  "subscription", "call", "expr", "condition", "id_dot", "long_id", "op", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short int yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    87,    88,    89,    89,    90,    90,    91,    91,    92,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    94,    94,    95,    95,    96,    96,
      97,    97,    97,    97,    97,    97,    98,    98,    98,    99,
      99,    99,    99,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   103,   103,   103,   103,   103,   103,   103,
     104,   104,   104,   104,   104,   104,   104,   105,   105,   105,
     105,   106,   106,   106,   106,   107,   107,   107,   107,   107,
     108,   108,   108,   108,   108,   108,   109,   109,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   111,   111,   111,   111,   111,   112,   112,
     112,   113,   114,   114,   115,   116,   116,   117,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   119,   119,   119,   119,   119,   119,   119,   119,
     120,   120,   121,   121,   121,   121,   121,   121,   122,   122,
     123,   124,   124,   125,   125,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   127,   127,
     128,   128,   128,   128,   129,   129,   129,   129,   129,   129,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   131,
     131,   132,   133,   133,   133,   133,   133,   134,   134,   135,
     135,   136,   136,   136,   136,   136,   137,   137,   137,   138,
     138,   138,   138,   138,   138,   138,   138,   139,   139,   140,
     140,   140,   140,   141,   141,   142,   142,   142,   142,   142,
     143,   143,   143,   143,   143,   144,   144,   145,   145,   145,
     146,   147,   147,   147,   147,   147,   147,   148,   148,   149,
     150,   151,   151,   152,   153,   153,   154,   154,   154,   154,
     155,   155,   155,   155,   155,   155,   156,   156,   157,   157,
     157,   157,   157,   157,   157,   158,   158,   158,   158,   158,
     158,   158
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     2,     2,     1,     3,     3,     2,     1,     2,
       2,     3,     3,     3,     4,     4,     5,     5,     4,     4,
       5,     5,     6,     6,     4,     4,     5,     5,     5,     5,
       5,     5,     5,     4,     5,     5,     5,     6,     6,     7,
       7,     6,     6,     7,     7,     8,     8,     6,     6,     7,
       7,     7,     7,     7,     7,     7,     7,     5,     6,     6,
       6,     7,     7,     8,     8,     7,     7,     8,     8,     9,
       9,     7,     7,     8,     8,     8,     8,     8,     8,     8,
       8,     2,     3,     2,     3,     1,     3,     1,     3,     1,
       2,     3,     2,     3,     2,     3,     3,     2,     1,     2,
       1,     1,     2,     2,     2,     2,     3,     3,     4,     4,
       1,     3,     3,     4,     4,     4,     5,     5,     6,     6,
       3,     3,     3,     4,     4,     5,     5,     4,     4,     5,
       5,     5,     5,     6,     6,     7,     7,     5,     5,     6,
       6,     7,     7,     6,     6,     7,     7,     4,     3,     2,
       3,     3,     3,     4,     4,     4,     4,     5,     5,     5,
       5,     6,     6,     6,     6,     6,     6,     4,     4,     4,
       3,     4,     4,     4,     3,     4,     4,     4,     3,     4,
       4,     4,     3,     1,     3,     3,     3,     3,     5,     5,
       3,     4,     4,     3,     3,     3,     1,     2,     3,     3,
       4,     3,     1,     4,     4,     3,     4,     5,     6,     5,
       2,     3,     2,     3,     2,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     4,     2,     3,     3,
       4,     8,    10,     2,     4,     4,     3,     5,     3,     2,
       2,     2,     2,     3,     2,     2,     3,     2,     4,     4,
       6,     6,     4,     4,     5,     5,     5,     5,     4,     4,
       4,     4,     3,     3,     3,     5,     5,     5,     7,     1,
       3,     5,     3,     5,     3,     5,     3,     1,     5,     5,
       2,     2,     3,     2,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     4,
       1,     1,     1,     1,     3,     3,     6,     5,     5,     5,
       2,     4,     2,     5,     7,     5,     5,     7,     5,     1,
       2,     1,     2,     2,     4,     3,     5,     2,     2,     3,
       1,     1,     2,     4,     4,     5,     1,     1,     1,     3,
       5,     3,     3,     5,     3,     1,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     3,     3,     2,     1,
       3,     3,     2,     2,     2,     3,     3,     3,     2,     3,
       3,     1,     2,     4,     4,     4,     1,     1,     3,     1,
       3,     3,     3,     3,     3,     3,     1,     3,     1,     4,
       2,     4,     6,     4,     3,     1,     1,     1,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       0,     0,     0,     0,   336,   337,   338,     0,     0,     0,
       0,     0,     4,     8,     0,     0,    89,     0,    87,    81,
      10,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     2,     3,     7,     0,     0,     9,     0,     0,     0,
       6,     0,     5,     0,     0,    82,     0,    13,     0,     0,
       0,     0,     0,     0,    12,     0,     0,     0,     0,     0,
       0,   110,    92,     0,     0,     0,   101,     0,    98,     0,
     100,     0,     0,    94,    90,     0,    11,     0,     0,     0,
       0,     0,     0,    86,    88,    33,     0,     0,     0,     0,
      15,     0,    19,     0,     0,     0,     0,     0,    14,     0,
      18,     0,     0,     0,    83,     0,     0,     0,    97,     0,
     105,     0,     0,     0,     0,     0,   104,     0,     0,     0,
       0,    93,     0,   102,    99,     0,     0,   149,   103,     0,
       0,     0,    95,    91,     0,    25,     0,     0,    24,     0,
       0,    57,    17,     0,    36,     0,     0,    21,     0,    31,
       0,    16,     0,    35,     0,     0,    20,     0,    30,    32,
       0,   174,     0,     0,     0,   183,   196,    82,   178,     0,
       0,   148,   396,     0,   359,   355,   356,   357,   358,   387,
     120,   386,     0,   389,   182,     0,   170,     0,     0,     0,
       0,     0,     0,   107,     0,   152,   111,     0,     0,     0,
       0,     0,   106,     0,     0,   151,   112,     0,     0,     0,
      96,     0,     0,   212,     0,     0,     0,     0,     0,     0,
       0,     0,   319,     0,     0,   331,     0,     0,   381,     0,
       0,     0,     0,   288,     0,   294,   295,   285,   223,     0,
     217,   218,     0,   219,     0,   220,     0,   296,   269,     0,
     221,   222,     0,   286,   287,   289,   291,   292,   290,   297,
     293,   277,   345,     0,   349,   387,   353,   364,   360,   361,
     362,   363,   321,   346,   352,    85,     0,   214,   210,     0,
       0,     0,     0,   122,     0,     0,     0,   121,     0,     0,
     150,    34,     0,     0,    29,    27,     0,    26,    28,     0,
      23,    60,    38,     0,     0,    42,     0,     0,     0,     0,
      22,    59,    37,     0,     0,    41,     0,     0,     0,   172,
       0,     0,   197,     0,   173,     0,   171,     0,   176,   177,
     175,     0,     0,   409,   411,   410,   405,   406,   407,   408,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     400,   180,   168,   181,   167,   179,   169,   109,     0,     0,
     115,     0,     0,   128,     0,     0,     0,     0,     0,   156,
     108,     0,   114,     0,   127,     0,     0,     0,     0,     0,
       0,   155,     0,   373,   285,     0,     0,     0,   227,   365,
       0,   369,     0,   241,   245,     0,     0,   354,     0,   283,
     298,   312,   310,   320,   396,     0,   322,   323,   328,   330,
     327,   332,   396,   378,     0,     0,     0,   382,     0,     0,
       0,     0,   374,   396,   372,     0,     0,     0,     0,   213,
     216,     0,   244,   247,     0,     0,     0,     0,   225,   224,
       0,     0,     0,   215,   211,   147,   113,     0,     0,   124,
     154,     0,     0,   123,   153,    58,    48,     0,     0,     0,
      47,     0,     0,     0,    40,     0,     0,    62,    44,     0,
      66,    56,     0,    54,     0,    39,     0,     0,    61,    43,
       0,    65,    53,     0,    55,     0,     0,   195,   193,   199,
       0,   198,   185,     0,   184,   186,   202,     0,   194,   190,
     187,     0,   390,   391,   392,   393,   394,   395,   388,     0,
     397,     0,     0,   374,     0,   130,     0,     0,   117,     0,
     160,   138,     0,     0,     0,   158,     0,   129,   116,     0,
     159,     0,   137,     0,   157,     0,     0,   246,   375,   396,
       0,   325,     0,    85,   264,   263,   276,   348,   368,   366,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   344,   377,
     342,   379,   396,     0,     0,   229,   228,     0,   341,     0,
     376,   371,   339,   380,    84,     0,     0,     0,   236,     0,
       0,   262,   270,   274,   272,     0,   300,   304,   303,   301,
     302,   347,   305,     0,     0,    85,   126,     0,   132,     0,
     125,     0,   131,     0,    72,    52,     0,    50,     0,    71,
      49,     0,    51,     0,    64,    46,     0,    68,    80,    77,
      63,    45,     0,    67,    78,    79,   192,   200,     0,     0,
       0,   197,     0,     0,     0,     0,   191,   399,   403,     0,
     401,   119,     0,   164,   140,     0,   161,   144,   118,     0,
     139,   163,   143,     0,   162,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   230,   367,   370,   258,   259,     0,
     348,   252,   253,   260,   261,   248,   249,     0,     0,     0,
       0,     0,   284,   299,   311,     0,     0,     0,     0,     0,
     324,   329,   334,   333,     0,   385,   383,     0,   384,     0,
     226,     0,     0,   235,   234,   242,     0,     0,     0,     0,
       0,     0,     0,   165,   134,     0,   166,   133,    76,    74,
      73,    75,    70,    69,   195,   189,   205,   199,     0,   198,
     188,     0,     0,     0,   201,     0,   142,   146,   141,   145,
     254,   255,   326,   256,   257,   335,   264,   273,   265,   308,
     267,   266,   271,     0,     0,   280,   281,     0,   279,   278,
     315,     0,   313,   318,     0,   316,   343,   194,   309,   340,
     243,   237,     0,   238,     0,   307,     0,   136,   135,     0,
       0,   206,     0,   204,   203,     0,     0,     0,   402,     0,
       0,     0,     0,     0,   275,   250,   251,   282,     0,     0,
       0,   306,   209,     0,   207,     0,     0,   264,   265,   267,
     271,   268,   314,   317,   208,     0,     0,   231,     0,   265,
     268,   271,   232
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     9,    10,    11,    12,    66,    14,   237,    17,    18,
      36,    67,    68,    69,    70,    71,   170,   165,   166,   495,
     496,   238,   239,   240,   241,   588,   242,   589,   243,   244,
     245,   246,   247,   248,   249,   250,   689,   690,   251,   252,
     253,   597,   254,   255,   256,   257,   258,   259,   410,   260,
      72,   261,   262,   263,   264,   179,   266,   267,   390,   391,
     268,   269,   270,   271,   272,   273,   274,   275,   181,   182,
     183,   345
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -432
static const short int yypact[] =
{
    1787,    11,    83,   122,  -432,  -432,  -432,   215,   336,    40,
     294,  1824,  -432,  -432,   456,    94,  -432,    42,   130,  -432,
      93,   172,   159,   223,   132,   134,   248,   254,   212,   178,
    -432,  -432,  -432,  -432,  1532,  1678,  -432,   343,   291,   311,
    -432,    11,  -432,   364,   531,  -432,   387,   371,   434,   447,
     514,   464,   492,   588,   501,   523,   550,   552,   592,   598,
     574,    48,  -432,  1240,  1606,  1751,  -432,   466,  -432,    13,
    -432,   541,   256,   574,  -432,   366,   584,   632,   659,   664,
     675,   679,   698,   130,  -432,  -432,   824,   718,   726,   784,
     685,   740,   693,   763,   778,   790,   804,   785,   761,   813,
     788,   852,   871,   257,   264,   881,  1430,   149,  -432,   140,
       4,   891,   546,   541,   334,   -31,     6,   605,   900,   541,
     353,  -432,  1240,  -432,  -432,  1597,  1670,  -432,    49,   430,
     520,   541,  -432,  -432,   791,   861,   925,   968,   911,   995,
     998,  -432,   954,  1026,  -432,   897,   802,   957,   810,   985,
     987,  1008,  1029,  -432,  1007,   823,  1010,   848,  1038,  1041,
     551,  -432,    12,  1009,  1105,  1031,  -432,   640,  -432,  1018,
    1117,  -432,  -432,  1140,  -432,  -432,  -432,  -432,  -432,  -432,
    2720,  -432,   794,  -432,  -432,   413,  -432,   579,    58,   615,
     305,  1430,   591,  1133,   674,  -432,    19,   656,   728,   541,
     750,  1430,  1152,   752,   591,  -432,    55,   765,   662,   541,
    -432,  1451,  1013,  -432,   462,  1430,  1430,    25,  1889,  1430,
    1430,  2128,  1430,   670,   397,  1430,  2197,  1430,  1430,  1136,
    1121,  1172,  1171,  -432,   654,  -432,  -432,  1177,  -432,  1743,
    -432,  -432,  1889,  -432,  1889,  -432,  1889,  1189,  1190,   583,
    -432,  -432,    37,  -432,  -432,  -432,  -432,  -432,  -432,  -432,
    -432,  -432,  1213,  1238,  -432,  1244,  -432,  -432,  -432,  -432,
    -432,  -432,  -432,  1246,  -432,  2720,   940,  1524,  -432,  1816,
    1220,  1430,   152,    59,  1024,   541,   227,    60,  1032,   541,
    -432,  -432,  1039,   863,  1192,  1194,   864,  1204,  1206,   875,
    1217,  -432,  -432,  1042,   883,  -432,  1065,   896,   921,   936,
    1225,  -432,  -432,  1080,   937,  -432,  1082,   945,   948,  -432,
     396,    41,  -432,  1236,  -432,   136,  -432,   488,  -432,  -432,
    -432,  1289,  1430,  -432,  -432,  -432,  -432,  -432,  -432,  -432,
    1430,  1430,  1430,  1430,  1430,  1430,   235,  1302,   695,   155,
    -432,  -432,  -432,  -432,  -432,  -432,  -432,  1300,  1091,   640,
    2720,   571,  1430,    67,   541,  1430,   611,    87,   541,  -432,
    1306,  1094,  2720,  1430,   105,   541,   571,  1430,   106,   541,
     644,  -432,  2108,  -432,  1102,   707,  2241,  1321,  -432,  -432,
     769,  -432,  2541,  2720,  2720,   463,   432,  -432,  1325,  2633,
    2572,   342,   103,  1177,  1331,  1276,  1177,  1335,  -432,  1337,
    -432,  2587,   189,  -432,   206,   246,    39,  1177,  1241,  1288,
    1292,  1375,   235,  1112,  -432,   606,  1115,  1380,  1430,  -432,
    -432,  1305,  -432,  -432,  1387,  1388,  2250,  2058,  -432,  -432,
    1394,  2058,   472,  1524,  -432,  -432,  2720,   729,  1430,  1390,
    -432,   771,  1430,  1392,  -432,  -432,  -432,  1138,   951,   956,
    -432,  1153,   959,   969,  -432,  1155,   973,  -432,  -432,  1161,
    -432,  -432,  1164,  -432,  1166,  -432,  1175,   994,  -432,  -432,
    1185,  -432,  -432,  1188,  -432,  1211,  1347,  1397,  -432,  -432,
    1402,  -432,   499,   350,  1406,   274,  -432,  1361,  1087,  -432,
     274,   867,   667,   667,   667,   667,   667,   667,  2720,  1102,
    -432,  1376,  2462,  -432,  1430,  1404,    10,   541,  2720,  1430,
    -432,  2720,   166,   541,  1430,  -432,  1430,  1409,  2720,  1430,
    -432,   541,  2720,  1430,  -432,   191,   541,  2720,  -432,   296,
    1369,  1177,   425,  2618,   663,  1419,  -432,    38,  1430,  -432,
    1430,  1314,  2285,  1428,  1314,  1314,  1314,    -9,  2294,  1430,
    2329,  1284,  1357,  2338,  1430,  1429,   377,  2373,  -432,  -432,
    -432,  -432,    95,   265,   316,  -432,  -432,  1086,  -432,  2382,
    -432,  -432,  -432,  -432,  2720,  1962,  1889,  1430,  1420,  2035,
    1431,  1190,  -432,  1432,  -432,  1533,  1177,  -432,  -432,  -432,
    -432,  -432,  -432,  1423,   321,  2462,   199,   541,  2720,  1430,
     210,   541,  2720,  1430,  -432,  -432,  1226,  -432,  1228,  -432,
    -432,  1258,  -432,  1261,  -432,  -432,  1272,  -432,  -432,  -432,
    -432,  -432,  1274,  -432,  -432,  -432,  -432,  -432,   555,  1430,
     116,  1424,  1434,   488,  1444,   378,  -432,  -432,  -432,  1430,
    -432,  2720,  1430,  -432,  2720,  1430,  -432,  2720,  2720,  1430,
    2720,  -432,  2720,  1430,  -432,  1314,  1430,  1314,  1430,  2417,
    1448,  2058,  1449,  1450,  -432,  -432,  2720,  1177,  -432,   478,
    -432,  1177,  -432,  1177,  -432,  1177,  -432,   541,  1889,  1453,
    1454,  1432,  -432,  2720,  1279,  1425,  2493,  1426,  2517,  1279,
    1177,  -432,  -432,  2720,   167,  -432,  -432,   563,  -432,  2058,
    -432,   683,  2177,  -432,  -432,  2720,  1889,  1232,  1378,  1455,
    2058,  1445,  1430,  -432,  2720,  1430,  -432,  2720,  -432,  -432,
    -432,  -432,  -432,  -432,  1087,   274,  2720,  1303,  1430,  1458,
     274,   442,  1327,   445,  -432,  2657,  2720,  2720,  2720,  2720,
    1177,  -432,  1177,  1177,  -432,  2720,   680,  -432,   690,  -432,
    1320,  1419,  -432,  2426,  1314,  -432,  -432,  1159,  -432,  -432,
    -432,  1430,  -432,  -432,  1430,  -432,  -432,  1397,  -432,  -432,
    2720,  -432,  1462,  -432,  1460,  -432,  2058,  2720,  2720,  1430,
    1461,  2720,  1430,   502,  1419,  1474,  1424,  1472,  -432,  1480,
    1482,  1483,  1484,  1486,  1432,  1177,  -432,  -432,  2681,  2705,
    1430,  -432,  2720,  1430,  2720,  1303,  1458,  1352,   690,  1356,
    1417,  1358,  -432,  -432,  2720,  1491,  1494,  -432,  1495,  1382,
    1382,  1417,  -432
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -432,  -432,  -432,  -432,  1497,   491,  -432,   -32,   282,  1467,
    -432,  1475,   -39,  -432,  -432,    15,   678,  -322,  -314,  -323,
     866,   -41,  1383,  -217,  -432,   795,  -432,  -432,  -432,  -432,
    -432,  -432,  -384,  1078,  -182,  -432,  -432,  -432,  -432,  -432,
    -432,  -431,  -432,  -432,  -432,  -432,  -432,  -432,   949,  -432,
     594,  -378,  -432,  -432,  -432,   -93,  -432,  -425,  -432,   967,
    -173,  -155,  -432,  -432,  1293,  -432,  -432,  -106,  -432,   -80,
    -432,  -432
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -405
static const short int yytable[] =
{
     180,   398,   545,   494,   500,  -405,   488,  -405,   546,   350,
     602,   190,   598,   499,   123,   687,   598,    16,   322,   191,
    -405,   201,   430,   200,   108,   431,   346,   432,   323,   433,
     127,   395,   265,   265,   365,   396,   103,   214,   438,   402,
      30,   407,   489,    40,   415,   276,   276,  -405,   428,  -405,
    -405,    41,   426,   688,   105,   280,  -405,   490,   594,   355,
    -405,  -405,   430,   106,   281,   226,   356,   227,  -405,   229,
     377,   107,   195,   107,   448,   452,   124,   107,   205,   113,
     119,   571,   519,   210,    19,   360,   107,   131,   190,    20,
     290,   174,   234,   175,   176,   372,   574,   177,   178,    37,
     439,   674,   524,   350,   320,    42,  -405,   190,   392,   393,
     394,   321,   436,   399,   400,   107,   107,   737,   265,   411,
     529,   533,   107,    21,   397,   265,   107,   107,   397,   199,
     265,   276,   490,   265,   107,   209,   705,    48,   276,    50,
      43,   265,   492,   562,   285,   289,   265,    38,    39,   265,
     184,   265,   493,   265,   107,   185,   513,   186,   369,   276,
      44,   172,   276,   424,   276,   162,   276,   190,   381,     4,
       5,     6,   107,   107,   546,   446,   763,   553,    45,   384,
     692,   655,   546,    57,   265,   546,   265,    51,    52,   546,
     403,   406,   190,   189,   414,   416,   417,   276,   567,   276,
    -405,   546,   425,   542,   187,   447,   663,   103,   776,   364,
     173,  -405,    46,   368,   722,   428,    22,    55,   375,   103,
      23,   174,   379,   175,   176,   725,   502,   177,   178,    47,
     568,    58,    59,   107,   503,   504,   505,   506,   507,   508,
     759,   172,   512,   383,   450,   384,   598,   569,   454,     4,
       5,     6,     4,     5,     6,   436,   518,    60,   107,   521,
      54,    37,   128,   160,   599,   161,   107,   528,   599,    24,
     167,   532,   168,   162,   428,  -405,   537,   107,   778,   543,
     162,   451,   600,   645,   598,   545,   600,   570,   761,   785,
     173,   757,   265,   397,   103,   598,    77,    31,     1,     2,
       3,   174,    53,   175,   176,   563,   706,   177,   178,   129,
     130,   359,   163,   168,   509,   735,    80,   425,   665,   169,
     740,   162,   584,   520,   488,   707,    86,   525,   647,   499,
     428,     4,     5,     6,   530,    60,   605,    26,   534,    50,
     196,    27,   608,   397,    78,    79,   612,     7,     8,    76,
     265,   560,   553,   541,    60,   811,   641,   708,    57,   206,
     169,   598,   721,   276,    81,    82,   642,   132,   713,   714,
      84,   145,   718,     4,     5,     6,   517,   133,   702,   154,
     122,   523,   561,   172,   742,   757,   573,   197,   198,    28,
     509,   531,    87,   499,   743,   536,   678,   486,   408,   682,
     684,   686,   487,   409,   647,   596,   207,   208,   651,   596,
     604,   384,   162,   654,   351,   545,   292,   761,   657,   794,
     658,   352,   320,   660,     4,     5,     6,   662,   303,   321,
     306,   282,   173,   555,   436,    77,   283,   313,    89,   316,
      90,   436,   392,   174,   676,   175,   176,   667,   793,   177,
     178,   796,    91,   693,   556,   696,   698,    34,   162,   397,
     703,   797,   607,    35,   551,   397,   611,   397,   172,    93,
     397,   766,   552,   553,   397,   389,   653,   121,   172,   511,
     122,   715,   656,    78,   284,   554,   397,   763,   553,   497,
     661,    13,   265,   265,   498,   664,   265,    94,   599,   781,
     764,    13,    33,   724,   493,   276,   276,   727,   638,   276,
     751,  -405,   754,   603,   639,   640,   600,   173,   321,   677,
      92,   286,   681,   683,   685,    80,   287,   173,   174,    98,
     175,   176,   700,   736,   177,   178,   599,    16,   174,    85,
     175,   176,   125,   745,   177,   178,   746,   599,   126,   747,
     807,    48,   193,   748,   600,    99,   486,   749,   100,   319,
     320,   734,   755,   414,   497,   600,   723,   321,    97,   777,
     726,   493,    60,   288,    82,   457,   397,   516,   461,   162,
     353,   465,   767,     4,     5,     6,   469,   354,   325,   472,
     474,   476,   436,    95,    15,   265,   480,   101,   437,   483,
     485,    25,    29,   102,    15,    15,   780,   580,   276,   806,
      55,   202,    60,   599,   581,   428,   787,   522,    49,   788,
      87,   357,    56,   265,   265,     4,     5,     6,     4,     5,
       6,   600,   791,   750,   752,   753,   276,   276,   135,   596,
      88,   103,     4,     5,     6,    60,   765,    96,   328,   320,
     535,   134,     4,     5,     6,   422,   321,   366,   114,   120,
     423,    93,   424,   380,   136,   808,   214,   102,   809,   137,
     397,   346,  -405,   670,   265,    60,   404,   596,   671,    91,
     363,   138,   214,   812,   139,   384,   814,   276,   596,  -405,
     800,   779,   763,   553,   226,  -275,   227,   228,   229,  -405,
    -348,   172,   511,   140,   780,  -348,   194,   824,   346,   173,
     226,   203,   227,   539,   229,   336,   337,   338,   339,   214,
     174,   234,   175,   176,   142,   173,   177,   178,   405,    60,
      60,   143,   805,    94,   367,   606,   174,   234,   175,   176,
     616,   618,   177,   178,   621,   623,   147,   226,   626,   227,
     173,   229,   146,    60,   596,    95,   370,    99,   374,   632,
     148,   174,   173,   175,   176,   540,    60,   177,   178,   149,
     101,   378,    60,   174,   234,   175,   176,   610,   548,   177,
     178,   164,   549,   358,   150,   188,   361,     4,     5,     6,
      16,    16,   144,   153,   371,   346,   151,    16,   376,   291,
    -398,  -398,  -398,  -398,   347,  -398,  -398,  -398,    16,   152,
     302,  -398,  -398,  -398,  -398,  -398,    16,  -398,   305,   156,
    -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,   155,    16,
    -398,   312,   141,    41,   348,  -398,  -398,  -398,  -398,  -398,
    -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,
    -398,  -398,  -398,  -398,    16,   157,   315,  -398,   158,  -398,
    -398,   349,  -398,  -398,  -398,  -398,  -398,  -398,   346,    16,
      16,   456,   460,  -404,  -404,  -404,  -404,   159,  -404,  -404,
    -404,    16,   171,   464,  -404,  -404,  -404,  -404,  -404,    16,
    -404,   468,   192,  -404,  -404,  -404,  -404,  -404,  -404,  -404,
    -404,   204,    16,  -404,   471,   301,    41,  -404,  -404,  -404,
    -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,
    -404,  -404,  -404,  -404,  -404,  -404,  -404,    16,   293,   473,
    -404,   294,  -404,  -404,   349,  -404,  -404,  -404,  -404,  -404,
    -404,   346,    16,    16,   475,   479,  -398,  -398,  -398,  -398,
     347,    16,  -398,   482,    16,   441,   484,    16,  -398,   615,
    -398,  -398,    16,  -398,   617,    16,  -398,   620,  -398,  -398,
    -398,  -398,  -398,  -398,   295,    16,  -398,   622,   296,    16,
     442,   625,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,
    -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,
      16,   297,   631,  -398,   298,  -398,  -398,   349,  -398,  -398,
    -398,  -398,  -398,  -398,   385,   311,    41,   324,   325,  -396,
    -396,   299,   386,  -396,   304,  -396,   329,   325,  -396,   137,
     449,  -396,   300,  -396,  -396,   310,  -396,   139,   453,  -396,
     327,  -396,  -396,  -396,  -396,  -396,  -396,   455,    41,  -396,
     467,    41,   307,  -396,   308,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,   470,    41,   309,   388,   314,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,   346,   478,    41,
     481,    41,  -404,  -404,  -404,  -404,   143,   515,  -404,   152,
     527,   709,   639,   640,  -404,   317,  -404,  -404,   318,  -404,
     538,   428,  -404,   326,  -404,  -404,  -404,  -404,  -404,  -404,
     578,   579,  -404,   582,   436,   330,  -404,   419,  -404,  -404,
    -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,
    -404,  -404,  -404,  -404,  -404,  -404,   614,    41,   362,   710,
     331,  -404,  -404,   349,  -404,  -404,  -404,  -404,  -404,  -404,
     211,   619,    41,   624,    41,   212,   126,   373,   -85,   627,
      41,   214,   628,    41,   629,    41,   418,   215,   420,   216,
     217,   421,   218,   630,    41,   219,   428,   220,   332,   221,
     222,   223,   224,   633,    41,   225,   634,    41,   434,   226,
     435,   227,   228,   229,   333,   334,   335,   336,   337,   338,
     339,   340,   230,   231,   232,   341,   342,   343,   344,   635,
      41,   445,   -85,  -350,   233,   174,   234,   175,   176,   235,
     236,   177,   178,   211,   728,    41,   729,    41,   382,   126,
     383,    60,   491,   213,   214,     2,    61,   572,   440,  -240,
     215,  -240,   216,   217,  -354,   218,  -351,   162,   219,   458,
     220,   459,   221,   222,   223,   224,   730,    41,   225,   731,
      41,   462,   226,   463,   227,   228,   229,     4,     5,     6,
     732,    41,   733,    41,   466,   230,   231,   232,   763,   553,
     172,   695,   477,    64,    65,   501,   173,   233,   174,   234,
     175,   176,   235,   236,   177,   178,   585,   174,   510,   175,
     176,  -233,  -233,   177,   178,   514,  -233,  -233,   789,   790,
     172,   526,   586,  -233,   587,  -233,  -233,   547,  -233,  -405,
     803,  -233,   557,  -233,   564,  -233,  -233,  -233,  -233,   173,
     563,  -233,   639,   795,   436,  -233,   565,  -233,  -233,  -233,
     174,   575,   175,   176,   595,   576,   177,   178,  -233,  -233,
    -233,  -405,   825,   172,   697,  -405,   826,  -405,   828,   173,
    -233,  -233,  -233,  -233,  -233,  -233,  -233,  -233,  -233,   782,
     174,   577,   175,   176,  -239,  -239,   177,   178,   583,  -239,
    -239,  -405,   673,   590,   592,  -239,  -239,   587,  -239,  -239,
     601,  -239,   636,   637,  -239,   609,  -239,   613,  -239,  -239,
    -239,  -239,   173,   321,  -239,   643,   646,   648,  -239,   652,
    -239,  -239,  -239,   174,   659,   175,   176,   666,  -405,   177,
     178,  -239,  -239,  -239,   680,   409,   172,   716,   720,   738,
     739,   719,   553,  -239,  -239,  -239,  -239,  -239,  -239,  -239,
    -239,  -239,   211,   741,   758,   760,   762,   382,   126,   383,
     786,   784,   213,   214,   768,   769,   770,   773,   810,   215,
     673,   216,   217,   792,   218,   815,   813,   219,   816,   220,
    -405,   221,   222,   223,   224,   173,   817,   225,   818,   819,
     820,   226,   821,   227,   228,   229,   174,   829,   175,   176,
     830,   831,   177,   178,   230,   231,   232,    32,    83,   279,
      75,   744,   591,   783,   701,   675,   233,   174,   234,   175,
     176,   235,   236,   177,   178,  -405,     0,   427,     0,     0,
    -405,  -405,   383,    60,     0,  -405,  -405,     2,    61,   172,
       0,     0,  -405,    62,  -405,  -405,    63,  -405,     0,     0,
    -405,     0,  -405,     0,  -405,  -405,  -405,  -405,     0,     0,
    -405,     0,     0,     0,  -405,     0,  -405,  -405,  -405,     4,
       5,     6,     0,     0,   413,     0,     0,  -405,  -405,  -405,
       0,     0,     0,     0,     0,    64,    65,     0,   173,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,   211,   174,
       0,   175,   176,   212,   126,   177,   178,   109,   213,   214,
       0,    23,   110,     0,     0,   215,     0,   216,   217,     0,
     218,     0,     0,   219,     0,   220,     0,   221,   222,   223,
     224,     0,     0,   225,     0,     0,     0,   226,     0,   227,
     228,   229,     0,     4,     5,     6,     0,     0,     0,     0,
     230,   231,   232,     0,     0,     0,     0,     0,     0,   111,
     112,     0,   233,   174,   234,   175,   176,   235,   236,   177,
     178,   277,     0,     0,     0,     0,   212,   126,     0,    73,
       0,   278,   214,     2,    61,     0,     0,     0,   215,    74,
     216,   217,    63,   218,     0,     0,   219,     0,   220,     0,
     221,   222,   223,   224,     0,     0,   225,     0,     0,     0,
     226,     0,   227,   228,   229,     4,     5,     6,     0,     0,
       0,     0,     0,   230,   231,   232,     0,     0,     0,     0,
       0,    64,    65,     0,     0,   233,   174,   234,   175,   176,
     235,   236,   177,   178,   211,     0,     0,     0,     0,   212,
     126,     0,   115,     0,   429,   214,    27,   116,     0,     0,
       0,   215,     0,   216,   217,     0,   218,     0,     0,   219,
       0,   220,     0,   221,   222,   223,   224,     0,     0,   225,
       0,     0,     0,   226,     0,   227,   228,   229,     4,     5,
       6,     1,     2,     3,     0,     0,   230,   231,   232,     0,
       0,     0,     0,     0,   117,   118,     0,     0,   233,   174,
     234,   175,   176,   235,   236,   177,   178,   443,     0,     0,
       0,     0,   212,   126,     4,     5,     6,   444,   214,     2,
       3,     0,     0,     0,   215,     0,   216,   217,     0,   218,
       7,     8,   219,     0,   220,     0,   221,   222,   223,   224,
       0,     0,   225,     0,     0,     0,   226,     0,   227,   228,
     229,     4,     5,     6,     0,     0,     0,     0,     0,   230,
     231,   232,     0,     0,     0,     0,     0,     7,     8,     0,
       0,   233,   174,   234,   175,   176,   235,   236,   177,   178,
     211,     0,     0,     0,     0,   212,   126,     0,     0,     0,
       0,   214,     0,     0,     0,     0,     0,   215,     0,   216,
     217,     0,   218,     0,     0,   219,     0,   220,     0,   221,
     222,   223,   224,     0,     0,   225,     0,     0,     0,   226,
       0,   227,   228,   229,     0,     0,     0,     0,     0,     0,
       0,     0,   230,   231,   232,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   233,   174,   234,   175,   176,   235,
     236,   177,   178,   211,     0,     0,     0,     0,   712,   126,
       0,     0,     0,     0,   214,     0,     0,     0,     0,     0,
     215,     0,   216,   217,     0,   218,     0,     0,   219,     0,
     220,     0,   221,   222,   223,   224,     0,     0,   225,     0,
       0,     0,   226,     0,   227,   228,   229,     0,     0,     0,
       0,     0,     0,     0,     0,   230,   231,   232,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   233,   174,   234,
     175,   176,   235,   236,   177,   178,   717,     0,     0,     0,
       0,   212,   126,     0,     0,     0,     0,   214,     0,     0,
       0,     0,     0,   215,     0,   216,   217,     0,   218,   346,
       0,   219,     0,   220,   172,   221,   222,   223,   224,     0,
     214,   225,     0,     0,     0,   226,     0,   227,   228,   229,
       0,     0,     0,     0,     0,     0,     0,     0,   230,   231,
     232,     0,     0,     0,     0,     0,     0,     0,   595,     0,
     233,   174,   234,   175,   176,   235,   236,   177,   178,   385,
       0,     0,     0,   173,   172,     0,  -396,   386,  -396,     0,
       0,     0,     0,  -396,   174,   349,   175,   176,     0,   346,
     177,   178,     0,     0,   401,     0,     0,  -396,     0,     0,
     214,     0,     0,     0,     0,     0,     0,     0,  -396,     0,
       0,     0,     0,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,     0,     0,   173,  -396,  -396,  -396,  -396,   226,     0,
     227,   388,   229,     0,   174,  -396,   175,   176,   385,     0,
     177,   178,     0,   172,     0,     0,   386,  -396,     0,     0,
       0,     0,  -396,     0,   174,   234,   175,   176,   346,     0,
     177,   178,     0,   412,     0,     0,  -396,     0,     0,   214,
       0,     0,     0,     0,     0,     0,     0,  -396,     0,     0,
       0,     0,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
       0,     0,   173,  -396,  -396,  -396,  -396,   226,   413,   227,
     388,   229,   346,   174,  -396,   175,   176,   544,     0,   177,
     178,   346,   173,   214,     0,     0,   593,     0,     0,     0,
       0,     0,   214,   174,   234,   175,   176,     0,     0,   177,
     178,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   226,     0,   227,     0,   229,   346,     0,     0,     0,
     226,   679,   227,     0,   229,   346,     0,   214,     0,     0,
     691,     0,     0,     0,     0,     0,   214,   174,   234,   175,
     176,     0,     0,   177,   178,     0,   174,   234,   175,   176,
       0,     0,   177,   178,     0,   226,     0,   227,     0,   229,
     346,     0,     0,     0,   226,   694,   227,     0,   229,   346,
       0,   214,     0,     0,   699,     0,     0,     0,     0,     0,
     214,   174,   234,   175,   176,     0,     0,   177,   178,     0,
     174,   234,   175,   176,     0,     0,   177,   178,     0,   226,
       0,   227,     0,   229,   346,     0,     0,     0,   226,   704,
     227,     0,   229,   346,     0,   214,     0,     0,   711,     0,
       0,     0,     0,     0,   214,   174,   234,   175,   176,     0,
       0,   177,   178,     0,   174,   234,   175,   176,     0,     0,
     177,   178,     0,   226,     0,   227,     0,   229,   346,     0,
       0,     0,   226,   756,   227,     0,   229,   346,     0,   214,
       0,     0,   804,     0,     0,     0,     0,     0,   214,   174,
     234,   175,   176,     0,     0,   177,   178,     0,   174,   234,
     175,   176,     0,     0,   177,   178,     0,   226,     0,   227,
       0,   229,     0,     0,     0,     0,   226,     0,   227,   649,
     229,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   174,   234,   175,   176,     0,     0,   177,
     178,   332,   174,   234,   175,   176,     0,     0,   177,   178,
     771,     0,     0,   650,     0,     0,     0,   333,   334,   335,
     336,   337,   338,   339,   340,     0,     0,     0,   341,   342,
     343,   344,   332,     0,   774,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   772,     0,     0,     0,   333,   334,
     335,   336,   337,   338,   339,   340,   332,     0,   550,   341,
     342,   343,   344,     0,     0,     0,     0,     0,   775,     0,
       0,     0,   333,   334,   335,   336,   337,   338,   339,   340,
     332,     0,     0,   341,   342,   343,   344,     0,     0,     0,
       0,   559,     0,     0,     0,     0,   333,   334,   335,   336,
     337,   338,   339,   340,     0,     0,   566,   341,   342,   343,
     344,   332,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   332,   333,   334,   335,
     336,   337,   338,   339,   340,     0,     0,   668,   341,   342,
     343,   344,   333,   334,   335,   336,   337,   338,   339,   340,
       0,     0,     0,   341,   342,   343,   344,   332,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     558,     0,   332,   333,   334,   335,   336,   337,   338,   339,
     340,     0,     0,     0,   341,   342,   343,   344,   333,   334,
     335,   336,   337,   338,   339,   340,   332,     0,     0,   341,
     342,   343,   344,     0,     0,     0,     0,     0,   798,     0,
       0,     0,   333,   334,   335,   336,   337,   338,   339,   340,
     332,     0,     0,   341,   342,   343,   344,     0,     0,     0,
       0,     0,   822,     0,     0,     0,   333,   334,   335,   336,
     337,   338,   339,   340,   332,     0,     0,   341,   342,   343,
     344,     0,     0,     0,     0,     0,   823,     0,     0,   332,
     333,   334,   335,   336,   337,   338,   339,   340,     0,     0,
       0,   341,   342,   343,   344,   333,   334,   335,   336,   337,
     338,   339,   340,     0,     0,     0,   341,   342,   343,   344
};

static const short int yycheck[] =
{
     106,   218,   386,   325,   327,     1,   320,     1,   386,   182,
     441,     1,   437,   327,     1,    24,   441,     6,     6,    15,
       1,    15,   239,    54,    63,   242,     1,   244,    16,   246,
      71,     6,   125,   126,    15,   217,    67,    12,     1,   221,
       0,   223,     1,     1,   226,   125,   126,     9,     9,     1,
       1,     9,   234,    62,     6,     6,     1,    16,   436,     1,
       1,     1,   279,    15,    15,    40,     8,    42,     1,    44,
      15,    67,   113,    67,    15,    15,    63,    67,   119,    64,
      65,    42,    15,   122,     1,   191,    67,    72,     1,     6,
     131,    66,    67,    68,    69,   201,   418,    72,    73,     5,
      63,    63,    15,   276,     9,    63,     1,     1,   214,   215,
     216,    16,     9,   219,   220,    67,    67,     1,   211,   225,
      15,    15,    67,     1,   217,   218,    67,    67,   221,   114,
     223,   211,    16,   226,    67,   120,    41,     5,   218,     5,
      10,   234,     6,    40,   129,   130,   239,    53,    54,   242,
       1,   244,    16,   246,    67,     6,     1,     8,   199,   239,
      67,     6,   242,     8,   244,    16,   246,     1,   209,    37,
      38,    39,    67,    67,   552,   281,     9,    10,     6,   211,
     558,    15,   560,     5,   277,   563,   279,    53,    54,   567,
     222,   223,     1,    53,   226,   227,   228,   277,     9,   279,
       1,   579,   234,   385,    55,    53,    15,    67,    41,   194,
      55,     1,    53,   198,    15,     9,     1,     5,   203,    67,
       5,    66,   207,    68,    69,    15,   332,    72,    73,     6,
      41,    53,    54,    67,   340,   341,   342,   343,   344,   345,
     671,     6,   348,     8,   285,   277,   671,    41,   289,    37,
      38,    39,    37,    38,    39,     9,   362,     1,    67,   365,
       6,     5,     6,     6,   437,     8,    67,   373,   441,    54,
       6,   377,     8,    16,     9,     1,   382,    67,   709,   385,
      16,    54,   437,     9,   709,   669,   441,    41,   672,   720,
      55,   669,   385,   386,    67,   720,     5,     3,     4,     5,
       6,    66,    54,    68,    69,     9,    41,    72,    73,    53,
      54,     6,    55,     8,   346,   638,     5,   349,    22,    55,
     643,    16,   428,   364,   638,     9,    44,   368,   501,   643,
       9,    37,    38,    39,   375,     1,   442,     1,   379,     5,
       6,     5,   448,   436,    53,    54,   452,    53,    54,     6,
     443,     9,    10,   385,     1,   786,     6,    41,     5,     6,
      55,   786,    41,   443,    53,    54,    16,     1,   585,   586,
       6,    89,   589,    37,    38,    39,   361,    11,     1,    97,
      14,   366,    40,     6,     6,   763,   418,    53,    54,    53,
     422,   376,     5,   707,    16,   380,   551,     1,     1,   554,
     555,   556,     6,     6,   577,   437,    53,    54,   514,   441,
     442,   443,    16,   519,     1,   799,   134,   801,   524,   741,
     526,     8,     9,   529,    37,    38,    39,   533,   146,    16,
     148,     1,    55,     1,     9,     5,     6,   155,    67,   157,
       6,     9,   548,    66,   550,    68,    69,    22,     6,    72,
      73,     6,     5,   559,    22,   561,   562,     1,    16,   552,
     566,    16,   447,     7,     1,   558,   451,   560,     6,     5,
     563,   688,     9,    10,   567,    13,   517,    11,     6,     7,
      14,   587,   523,    53,    54,    22,   579,     9,    10,     1,
     531,     0,   585,   586,     6,   536,   589,     5,   671,   716,
      22,    10,    11,   609,    16,   585,   586,   613,     9,   589,
     665,     9,   667,    41,    15,    16,   671,    55,    16,   551,
       6,     1,   554,   555,   556,     5,     6,    55,    66,     6,
      68,    69,   564,   639,    72,    73,   709,     6,    66,     8,
      68,    69,     1,   649,    72,    73,   652,   720,     7,   655,
     767,     5,     6,   659,   709,     5,     1,   663,     6,     8,
       9,     6,   668,   595,     1,   720,   607,    16,    67,     6,
     611,    16,     1,    53,    54,   293,   669,     6,   296,    16,
       1,   299,   688,    37,    38,    39,   304,     8,     9,   307,
     308,   309,     9,     5,     0,   688,   314,     5,    15,   317,
     318,     7,     8,     5,    10,    11,   712,     1,   688,   764,
       5,     6,     1,   786,     8,     9,   722,     6,    24,   725,
       5,     6,    28,   716,   717,    37,    38,    39,    37,    38,
      39,   786,   738,   665,   666,   667,   716,   717,     6,   671,
      46,    67,    37,    38,    39,     1,   687,    53,     8,     9,
       6,    67,    37,    38,    39,     1,    16,     1,    64,    65,
       6,     5,     8,     1,     5,   771,    12,     5,   774,     5,
     763,     1,     9,    10,   767,     1,     6,   709,    15,     5,
       6,     6,    12,   789,     5,   717,   792,   767,   720,     9,
      10,     8,     9,    10,    40,    15,    42,    43,    44,     9,
      10,     6,     7,     5,   810,    15,   112,   813,     1,    55,
      40,   117,    42,     6,    44,    48,    49,    50,    51,    12,
      66,    67,    68,    69,     6,    55,    72,    73,    58,     1,
       1,     5,   764,     5,     6,     6,    66,    67,    68,    69,
     458,   459,    72,    73,   462,   463,     6,    40,   466,    42,
      55,    44,    67,     1,   786,     5,     6,     5,     6,   477,
      67,    66,    55,    68,    69,    58,     1,    72,    73,     6,
       5,     6,     1,    66,    67,    68,    69,     6,     9,    72,
      73,   103,    13,   189,     6,   107,   192,    37,    38,    39,
       6,     6,     8,     8,   200,     1,     6,     6,   204,     8,
       6,     7,     8,     9,    10,    11,    12,    13,     6,     5,
       8,    17,    18,    19,    20,    21,     6,    23,     8,     6,
      26,    27,    28,    29,    30,    31,    32,    33,    67,     6,
      36,     8,     8,     9,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,     6,    67,     8,    63,     6,    65,
      66,    67,    68,    69,    70,    71,    72,    73,     1,     6,
       6,     8,     8,     6,     7,     8,     9,     6,    11,    12,
      13,     6,     1,     8,    17,    18,    19,    20,    21,     6,
      23,     8,     1,    26,    27,    28,    29,    30,    31,    32,
      33,     1,     6,    36,     8,     8,     9,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,     6,    67,     8,
      63,     6,    65,    66,    67,    68,    69,    70,    71,    72,
      73,     1,     6,     6,     8,     8,     6,     7,     8,     9,
      10,     6,    12,     8,     6,    15,     8,     6,    18,     8,
      20,    21,     6,    23,     8,     6,    26,     8,    28,    29,
      30,    31,    32,    33,     6,     6,    36,     8,    67,     6,
      40,     8,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
       6,     6,     8,    63,     6,    65,    66,    67,    68,    69,
      70,    71,    72,    73,     1,     8,     9,     8,     9,     6,
       7,    67,     9,    10,    67,    12,     8,     9,    15,     5,
       6,    18,     6,    20,    21,     6,    23,     5,     6,    26,
       9,    28,    29,    30,    31,    32,    33,     8,     9,    36,
       8,     9,    67,    40,    67,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,     8,     9,    67,    63,    67,    65,    66,
      67,    68,    69,    70,    71,    72,    73,     1,     8,     9,
       8,     9,     6,     7,     8,     9,     5,     6,    12,     5,
       6,    15,    15,    16,    18,    67,    20,    21,    67,    23,
       8,     9,    26,     8,    28,    29,    30,    31,    32,    33,
       8,     9,    36,     8,     9,     8,    40,     6,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,     8,     9,    15,    63,
      10,    65,    66,    67,    68,    69,    70,    71,    72,    73,
       1,     8,     9,     8,     9,     6,     7,    15,     9,     8,
       9,    12,     8,     9,     8,     9,    40,    18,     6,    20,
      21,    10,    23,     8,     9,    26,     9,    28,    29,    30,
      31,    32,    33,     8,     9,    36,     8,     9,     9,    40,
      10,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,     8,
       9,     1,    63,    10,    65,    66,    67,    68,    69,    70,
      71,    72,    73,     1,     8,     9,     8,     9,     6,     7,
       8,     1,     6,    11,    12,     5,     6,     6,    10,    17,
      18,    19,    20,    21,    10,    23,    10,    16,    26,    67,
      28,    67,    30,    31,    32,    33,     8,     9,    36,     8,
       9,    67,    40,    67,    42,    43,    44,    37,    38,    39,
       8,     9,     8,     9,    67,    53,    54,    55,     9,    10,
       6,     7,    67,    53,    54,     6,    55,    65,    66,    67,
      68,    69,    70,    71,    72,    73,     1,    66,     6,    68,
      69,     6,     7,    72,    73,    15,    11,    12,    15,    16,
       6,    15,    17,    18,    19,    20,    21,     6,    23,     9,
      10,    26,     7,    28,    58,    30,    31,    32,    33,    55,
       9,    36,    15,    16,     9,    40,     9,    42,    43,    44,
      66,    63,    68,    69,    40,    63,    72,    73,    53,    54,
      55,     9,    10,     6,     7,     9,    10,     9,    10,    55,
      65,    66,    67,    68,    69,    70,    71,    72,    73,     1,
      66,     6,    68,    69,     6,     7,    72,    73,     8,    11,
      12,     9,    10,     6,     6,    17,    18,    19,    20,    21,
       6,    23,    55,     1,    26,    15,    28,    15,    30,    31,
      32,    33,    55,    16,    36,     9,    55,    41,    40,    15,
      42,    43,    44,    66,    15,    68,    69,    58,     9,    72,
      73,    53,    54,    55,     6,     6,     6,    17,    15,    15,
       6,    10,    10,    65,    66,    67,    68,    69,    70,    71,
      72,    73,     1,     9,     6,     6,     6,     6,     7,     8,
      15,     6,    11,    12,    11,    11,    41,    41,     6,    18,
      10,    20,    21,    15,    23,     1,    15,    26,     6,    28,
      63,    30,    31,    32,    33,    55,     6,    36,     6,     6,
       6,    40,     6,    42,    43,    44,    66,     6,    68,    69,
       6,     6,    72,    73,    53,    54,    55,    10,    41,   126,
      35,   645,   434,   718,   565,   548,    65,    66,    67,    68,
      69,    70,    71,    72,    73,     1,    -1,   234,    -1,    -1,
       6,     7,     8,     1,    -1,    11,    12,     5,     6,     6,
      -1,    -1,    18,    11,    20,    21,    14,    23,    -1,    -1,
      26,    -1,    28,    -1,    30,    31,    32,    33,    -1,    -1,
      36,    -1,    -1,    -1,    40,    -1,    42,    43,    44,    37,
      38,    39,    -1,    -1,    41,    -1,    -1,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    53,    54,    -1,    55,    65,
      66,    67,    68,    69,    70,    71,    72,    73,     1,    66,
      -1,    68,    69,     6,     7,    72,    73,     1,    11,    12,
      -1,     5,     6,    -1,    -1,    18,    -1,    20,    21,    -1,
      23,    -1,    -1,    26,    -1,    28,    -1,    30,    31,    32,
      33,    -1,    -1,    36,    -1,    -1,    -1,    40,    -1,    42,
      43,    44,    -1,    37,    38,    39,    -1,    -1,    -1,    -1,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      54,    -1,    65,    66,    67,    68,    69,    70,    71,    72,
      73,     1,    -1,    -1,    -1,    -1,     6,     7,    -1,     1,
      -1,    11,    12,     5,     6,    -1,    -1,    -1,    18,    11,
      20,    21,    14,    23,    -1,    -1,    26,    -1,    28,    -1,
      30,    31,    32,    33,    -1,    -1,    36,    -1,    -1,    -1,
      40,    -1,    42,    43,    44,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    53,    54,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    72,    73,     1,    -1,    -1,    -1,    -1,     6,
       7,    -1,     1,    -1,    11,    12,     5,     6,    -1,    -1,
      -1,    18,    -1,    20,    21,    -1,    23,    -1,    -1,    26,
      -1,    28,    -1,    30,    31,    32,    33,    -1,    -1,    36,
      -1,    -1,    -1,    40,    -1,    42,    43,    44,    37,    38,
      39,     4,     5,     6,    -1,    -1,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    53,    54,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    72,    73,     1,    -1,    -1,
      -1,    -1,     6,     7,    37,    38,    39,    11,    12,     5,
       6,    -1,    -1,    -1,    18,    -1,    20,    21,    -1,    23,
      53,    54,    26,    -1,    28,    -1,    30,    31,    32,    33,
      -1,    -1,    36,    -1,    -1,    -1,    40,    -1,    42,    43,
      44,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    53,    54,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    72,    73,
       1,    -1,    -1,    -1,    -1,     6,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    18,    -1,    20,
      21,    -1,    23,    -1,    -1,    26,    -1,    28,    -1,    30,
      31,    32,    33,    -1,    -1,    36,    -1,    -1,    -1,    40,
      -1,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    72,    73,     1,    -1,    -1,    -1,    -1,     6,     7,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      18,    -1,    20,    21,    -1,    23,    -1,    -1,    26,    -1,
      28,    -1,    30,    31,    32,    33,    -1,    -1,    36,    -1,
      -1,    -1,    40,    -1,    42,    43,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    72,    73,     1,    -1,    -1,    -1,
      -1,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    18,    -1,    20,    21,    -1,    23,     1,
      -1,    26,    -1,    28,     6,    30,    31,    32,    33,    -1,
      12,    36,    -1,    -1,    -1,    40,    -1,    42,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      65,    66,    67,    68,    69,    70,    71,    72,    73,     1,
      -1,    -1,    -1,    55,     6,    -1,     8,     9,    10,    -1,
      -1,    -1,    -1,    15,    66,    67,    68,    69,    -1,     1,
      72,    73,    -1,    -1,     6,    -1,    -1,    29,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    -1,    55,    56,    57,    58,    59,    40,    -1,
      42,    63,    44,    -1,    66,    67,    68,    69,     1,    -1,
      72,    73,    -1,     6,    -1,    -1,     9,    10,    -1,    -1,
      -1,    -1,    15,    -1,    66,    67,    68,    69,     1,    -1,
      72,    73,    -1,     6,    -1,    -1,    29,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    -1,    55,    56,    57,    58,    59,    40,    41,    42,
      63,    44,     1,    66,    67,    68,    69,     6,    -1,    72,
      73,     1,    55,    12,    -1,    -1,     6,    -1,    -1,    -1,
      -1,    -1,    12,    66,    67,    68,    69,    -1,    -1,    72,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    42,    -1,    44,     1,    -1,    -1,    -1,
      40,     6,    42,    -1,    44,     1,    -1,    12,    -1,    -1,
       6,    -1,    -1,    -1,    -1,    -1,    12,    66,    67,    68,
      69,    -1,    -1,    72,    73,    -1,    66,    67,    68,    69,
      -1,    -1,    72,    73,    -1,    40,    -1,    42,    -1,    44,
       1,    -1,    -1,    -1,    40,     6,    42,    -1,    44,     1,
      -1,    12,    -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,
      12,    66,    67,    68,    69,    -1,    -1,    72,    73,    -1,
      66,    67,    68,    69,    -1,    -1,    72,    73,    -1,    40,
      -1,    42,    -1,    44,     1,    -1,    -1,    -1,    40,     6,
      42,    -1,    44,     1,    -1,    12,    -1,    -1,     6,    -1,
      -1,    -1,    -1,    -1,    12,    66,    67,    68,    69,    -1,
      -1,    72,    73,    -1,    66,    67,    68,    69,    -1,    -1,
      72,    73,    -1,    40,    -1,    42,    -1,    44,     1,    -1,
      -1,    -1,    40,     6,    42,    -1,    44,     1,    -1,    12,
      -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,    12,    66,
      67,    68,    69,    -1,    -1,    72,    73,    -1,    66,    67,
      68,    69,    -1,    -1,    72,    73,    -1,    40,    -1,    42,
      -1,    44,    -1,    -1,    -1,    -1,    40,    -1,    42,     7,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    68,    69,    -1,    -1,    72,
      73,    29,    66,    67,    68,    69,    -1,    -1,    72,    73,
       7,    -1,    -1,    41,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,    51,    52,    -1,    -1,    -1,    56,    57,
      58,    59,    29,    -1,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    29,    -1,     7,    56,
      57,    58,    59,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      29,    -1,    -1,    56,    57,    58,    59,    -1,    -1,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    -1,    -1,     9,    56,    57,    58,
      59,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    45,    46,    47,
      48,    49,    50,    51,    52,    -1,    -1,     9,    56,    57,
      58,    59,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    -1,    -1,    56,    57,    58,    59,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    29,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    -1,    -1,    56,    57,    58,    59,    45,    46,
      47,    48,    49,    50,    51,    52,    29,    -1,    -1,    56,
      57,    58,    59,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      29,    -1,    -1,    56,    57,    58,    59,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    29,    -1,    -1,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    29,
      45,    46,    47,    48,    49,    50,    51,    52,    -1,    -1,
      -1,    56,    57,    58,    59,    45,    46,    47,    48,    49,
      50,    51,    52,    -1,    -1,    -1,    56,    57,    58,    59
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     4,     5,     6,    37,    38,    39,    53,    54,    88,
      89,    90,    91,    92,    93,   137,     6,    95,    96,     1,
       6,     1,     1,     5,    54,   137,     1,     5,    53,   137,
       0,     3,    91,    92,     1,     7,    97,     5,    53,    54,
       1,     9,    63,    10,    67,     6,    53,     6,     5,   137,
       5,    53,    54,    54,     6,     5,   137,     5,    53,    54,
       1,     6,    11,    14,    53,    54,    92,    98,    99,   100,
     101,   102,   137,     1,    11,    98,     6,     5,    53,    54,
       5,    53,    54,    96,     6,     8,    95,     5,   137,    67,
       6,     5,     6,     5,     5,     5,   137,    67,     6,     5,
       6,     5,     5,    67,     1,     6,    15,    67,    99,     1,
       6,    53,    54,   102,   137,     1,     6,    53,    54,   102,
     137,    11,    14,     1,    63,     1,     7,   108,     6,    53,
      54,   102,     1,    11,    67,     6,     5,     5,     6,     5,
       5,     8,     6,     5,     8,    95,    67,     6,    67,     6,
       6,     6,     5,     8,    95,    67,     6,    67,     6,     6,
       6,     8,    16,    55,   103,   104,   105,     6,     8,    55,
     103,     1,     6,    55,    66,    68,    69,    72,    73,   142,
     154,   155,   156,   157,     1,     6,     8,    55,   103,    53,
       1,    15,     1,     6,   137,   108,     6,    53,    54,   102,
      54,    15,     6,   137,     1,   108,     6,    53,    54,   102,
      99,     1,     6,    11,    12,    18,    20,    21,    23,    26,
      28,    30,    31,    32,    33,    36,    40,    42,    43,    44,
      53,    54,    55,    65,    67,    70,    71,    94,   108,   109,
     110,   111,   113,   115,   116,   117,   118,   119,   120,   121,
     122,   125,   126,   127,   129,   130,   131,   132,   133,   134,
     136,   138,   139,   140,   141,   142,   143,   144,   147,   148,
     149,   150,   151,   152,   153,   154,   156,     1,    11,   109,
       6,    15,     1,     6,    54,   102,     1,     6,    53,   102,
     108,     8,    95,    67,     6,     6,    67,     6,     6,    67,
       6,     8,     8,    95,    67,     8,    95,    67,    67,    67,
       6,     8,     8,    95,    67,     8,    95,    67,    67,     8,
       9,    16,     6,    16,     8,     9,     8,     9,     8,     8,
       8,    10,    29,    45,    46,    47,    48,    49,    50,    51,
      52,    56,    57,    58,    59,   158,     1,    10,    40,    67,
     147,     1,     8,     1,     8,     1,     8,     6,   137,     6,
     154,   137,    15,     6,   102,    15,     1,     6,   102,   108,
       6,   137,   154,    15,     6,   102,   137,    15,     6,   102,
       1,   108,     6,     8,    94,     1,     9,    10,    63,    13,
     145,   146,   154,   154,   154,     6,   121,   142,   110,   154,
     154,     6,   121,    94,     6,    58,    94,   121,     1,     6,
     135,   154,     6,    41,    94,   121,    94,    94,    40,     6,
       6,    10,     1,     6,     8,    94,   121,   151,     9,    11,
     110,   110,   110,   110,     9,    10,     9,    15,     1,    63,
      10,    15,    40,     1,    11,     1,   154,    53,    15,     6,
     108,    54,    15,     6,   108,     8,     8,    95,    67,    67,
       8,    95,    67,    67,     8,    95,    67,     8,     8,    95,
       8,     8,    95,     8,    95,     8,    95,    67,     8,     8,
      95,     8,     8,    95,     8,    95,     1,     6,   105,     1,
      16,     6,     6,    16,   104,   106,   107,     1,     6,   105,
     106,     6,   154,   154,   154,   154,   154,   154,   154,    94,
       6,     7,   154,     1,    15,     6,     6,   102,   154,    15,
     108,   154,     6,   102,    15,   108,    15,     6,   154,    15,
     108,   102,   154,    15,   108,     6,   102,   154,     8,     6,
      58,    94,   121,   154,     6,   119,   138,     6,     9,    13,
       7,     1,     9,    10,    22,     1,    22,     7,    27,     9,
       9,    40,    40,     9,    58,     9,     9,     9,    41,    41,
      41,    42,     6,    94,   104,    63,    63,     6,     8,     9,
       1,     8,     8,     8,   154,     1,    17,    19,   112,   114,
       6,   120,     6,     6,   138,    40,    94,   128,   144,   147,
     148,     6,   128,    41,    94,   154,     6,   102,   154,    15,
       6,   102,   154,    15,     8,     8,    95,     8,    95,     8,
       8,    95,     8,    95,     8,     8,    95,     8,     8,     8,
       8,     8,    95,     8,     8,     8,    55,     1,     9,    15,
      16,     6,    16,     9,     1,     9,    55,   147,    41,     7,
      41,   154,    15,   108,   154,    15,   108,   154,   154,    15,
     154,   108,   154,    15,   108,    22,    58,    22,     9,     9,
      10,    15,     9,    10,    63,   146,   154,    94,   148,     6,
       6,    94,   148,    94,   148,    94,   148,    24,    62,   123,
     124,     6,   138,   154,     6,     7,   154,     7,   154,     6,
      94,   135,     1,   154,     6,    41,    41,     9,    41,    15,
      63,     6,     6,   110,   110,   154,    17,     1,   110,    10,
      15,    41,    15,   108,   154,    15,   108,   154,     8,     8,
       8,     8,     8,     8,     6,   106,   154,     1,    15,     6,
     106,     9,     6,    16,   107,   154,   154,   154,   154,   154,
      94,   148,    94,    94,   148,   154,     6,   138,     6,   128,
       6,   119,     6,     9,    22,   108,   110,   154,    11,    11,
      41,     7,    41,    41,     7,    41,    41,     6,   128,     8,
     154,   110,     1,   112,     6,   128,    15,   154,   154,    15,
      16,   154,    15,     6,   104,    16,     6,    16,    41,     9,
      10,     9,    10,    10,     6,    94,   148,   110,   154,   154,
       6,   128,   154,    15,   154,     1,     6,     6,     6,     6,
       6,     6,    41,    41,   154,    10,    10,    63,    10,     6,
       6,     6,    63
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (0)


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (N)								\
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (0)
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
              (Loc).first_line, (Loc).first_column,	\
              (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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
} while (0)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr,					\
                  Type, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short int *bottom, short int *top)
#else
static void
yy_stack_print (bottom, top)
    short int *bottom;
    short int *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname[yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
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
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
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
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

#endif /* YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);


# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
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
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()
    ;
#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short int yyssa[YYINITDEPTH];
  short int *yyss = yyssa;
  short int *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short int *yyss1 = yyss;


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
	short int *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a look-ahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to look-ahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
#line 107 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() <<"programes: program END_OF_FILE\n";
						p->check_inhertance_list();
						if(!p->errRecovery->errQ->isEmpty())
								p->errRecovery->printErrQueue();
						p->print_symbol();
						Streams::verbose().flush();						
						;}
    break;

  case 3:
#line 115 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {	Streams::verbose() <<"prgram : program unit\n";
						Streams::verbose().flush();						
					;}
    break;

  case 4:
#line 118 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
							
								Streams::verbose()<<"program: unit\n";
								Streams::verbose().flush();						
							;}
    break;

  case 5:
#line 126 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_stmt : IMPORT unit_list SEMICOLON \n";;}
    break;

  case 6:
#line 127 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
							Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum<<endl;
							err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum,"Expected ';' ","");
									  ;}
    break;

  case 7:
#line 132 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"unit: import_stmt class_decl\n";;}
    break;

  case 8:
#line 133 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"unit: class_decl\n";;}
    break;

  case 9:
#line 136 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"class_decl: class_h class_body\n"; ;}
    break;

  case 10:
#line 139 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[0].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
					;}
    break;

  case 11:
#line 144 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 12:
#line 150 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 13:
#line 156 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 14:
#line 162 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 15:
#line 168 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 16:
#line 174 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[0].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 17:
#line 181 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[0].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 18:
#line 188 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 19:
#line 194 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 20:
#line 200 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 21:
#line 206 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 22:
#line 212 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 23:
#line 219 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 24:
#line 226 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 25:
#line 232 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
							(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 26:
#line 238 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
							(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 27:
#line 244 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL STATIC CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 28:
#line 250 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");									
								  (yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								  ;}
    break;

  case 29:
#line 258 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");									
								  (yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 30:
#line 266 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 31:
#line 272 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
											Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");
											(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
											t=(yyval.type);
											inhertance_list.clear();
											acc_mod="";
										   ;}
    break;

  case 32:
#line 280 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
											Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");
											(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
											t=(yyval.type);
											inhertance_list.clear();
											acc_mod="";
										   ;}
    break;

  case 33:
#line 288 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[0].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								temp_id="";
										acc_mod="";
								;}
    break;

  case 34:
#line 295 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-1].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 35:
#line 301 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-1].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 36:
#line 307 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-1].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 37:
#line 313 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 38:
#line 319 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 39:
#line 325 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");
								;}
    break;

  case 40:
#line 328 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");
								;}
    break;

  case 41:
#line 331 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 42:
#line 337 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 43:
#line 343 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 44:
#line 349 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 45:
#line 355 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-6].r.colNum)-strlength((yyvsp[-6].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-6].r.colNum)-strlen((yyvsp[-6].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 46:
#line 362 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-6].r.colNum)-strlength((yyvsp[-6].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-6].r.colNum)-strlen((yyvsp[-6].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 47:
#line 369 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 48:
#line 375 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 49:
#line 381 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 50:
#line 387 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 51:
#line 393 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");									
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								  ;}
    break;

  case 52:
#line 401 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");									
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								  ;}
    break;

  case 53:
#line 409 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 54:
#line 415 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL access_modef STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 55:
#line 421 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
											Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
											(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
										   ;}
    break;

  case 56:
#line 429 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
											Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
										   (yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
										   ;}
    break;

  case 57:
#line 437 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[0].r.colNum)+1));
												(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
												acc_mod="";
											;}
    break;

  case 58:
#line 443 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-1].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 59:
#line 449 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-1].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 60:
#line 455 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-1].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 61:
#line 461 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 62:
#line 467 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 63:
#line 473 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-6].r.colNum)-strlength((yyvsp[-6].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-6].r.colNum)-strlen((yyvsp[-6].r.strVal)),"repeated modifier ","");
								;}
    break;

  case 64:
#line 476 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-6].r.colNum)-strlength((yyvsp[-6].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-6].r.colNum)-strlen((yyvsp[-6].r.strVal)),"repeated modifier ","");
								;}
    break;

  case 65:
#line 479 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 66:
#line 485 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 67:
#line 491 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 68:
#line 497 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 69:
#line 503 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-7].r.colNum)-strlength((yyvsp[-7].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-8].r.lineNum),(yyvsp[-7].r.colNum)-strlen((yyvsp[-7].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[-7].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 70:
#line 510 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-7].r.colNum)-strlength((yyvsp[-7].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-8].r.lineNum),(yyvsp[-7].r.colNum)-strlen((yyvsp[-7].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[-7].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 71:
#line 517 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 72:
#line 523 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 73:
#line 529 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 74:
#line 535 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 75:
#line 541 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");									
									(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
										t=(yyval.type);
										inhertance_list.clear();
										acc_mod="";
								  ;}
    break;

  case 76:
#line 549 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");									
									(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								 
								  ;}
    break;

  case 77:
#line 558 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL access_modef STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 78:
#line 564 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 79:
#line 570 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
											Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");
											(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
											t=(yyval.type);
											inhertance_list.clear();
											acc_mod="";
										   ;}
    break;

  case 80:
#line 578 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
											Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");
											(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
											t=(yyval.type);
											inhertance_list.clear();
											acc_mod="";
										   ;}
    break;

  case 81:
#line 586 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {							
									colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected class name at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected class name","");
		;}
    break;

  case 82:
#line 591 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
									colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected Reserved word at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected Reserved word","");
							 ;}
    break;

  case 83:
#line 596 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
									colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected Reserved word at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected Reserved word","");
						 ;}
    break;

  case 84:
#line 603 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"expr_list: expr_list COMMA expr\n";;}
    break;

  case 85:
#line 604 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"expr_list: expr %prec stmt_1\n";;}
    break;

  case 86:
#line 607 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
												t_id=new char[10];
												strcpy(t_id,temp_id.c_str());
												inhertance_list.push_back(t_id);	
												Streams::verbose()<<"unit_list:	unit_list COMMA unit_import\n";
												temp_id="";
												;}
    break;

  case 87:
#line 614 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {	
								t_id=new char[10];
								strcpy(t_id,temp_id.c_str());
								inhertance_list.push_back(t_id);
								Streams::verbose()<<"unit_list:	unit_import\n";
								temp_id="";
							;}
    break;

  case 88:
#line 623 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
									temp_id=temp_id+"."+(yyvsp[0].r.strVal);
									Streams::verbose()<<"unit_import: unit_import DOT ID\n";
								;}
    break;

  case 89:
#line 627 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
					temp_id=temp_id+(yyvsp[0].r.strVal);
					Streams::verbose()<<"unit_import: ID\n";

				;}
    break;

  case 90:
#line 635 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"class_body:COLON END	\n";colonStack.pop();
								(yyval.type)=p->finishTypeDeclaration(t);
							;}
    break;

  case 91:
#line 639 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"class_body:COLON dm_list END\n";colonStack.pop();
										(yyval.type)=p->finishTypeDeclaration(t);
									;}
    break;

  case 92:
#line 642 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
					ColonStack* temp = colonStack.top();
					colonStack.pop();
					Streams::verbose()<<"Error: Expected ':' at Line No:"<<temp->lineNum<<" Column No:"<<temp->colNum<<endl;
					err->errQ->enqueue(temp->lineNum,temp->colNum,"Expected ':' ","");
				  ;}
    break;

  case 93:
#line 648 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
					ColonStack* temp = colonStack.top();
					colonStack.pop();
					Streams::verbose()<<"Error: Expected ':' at Line No:"<<temp->lineNum<<" Column No:"<<temp->colNum<<endl;
						(yyval.type)=p->finishTypeDeclaration(t);
					err->errQ->enqueue(temp->lineNum,temp->colNum,"Expected ':' ","");
				  ;}
    break;

  case 94:
#line 655 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {					
					colonStack.pop();
					Streams::verbose()<<"Error: Expected 'end' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum<<endl;
					(yyval.type)=p->finishTypeDeclaration(t);
					err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum," Expected 'end' ","");									
				  ;}
    break;

  case 95:
#line 661 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
					colonStack.pop();
					Streams::verbose()<<"Error: Expected 'end' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum<<endl;
					(yyval.type)=p->finishTypeDeclaration(t);
					err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum," Expected 'end' ","");									
				  ;}
    break;

  case 96:
#line 669 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dm_list: dm_list DEF dm\n";;}
    break;

  case 97:
#line 670 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dm_list: DEF dm\n";;}
    break;

  case 98:
#line 671 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
						Streams::verbose()<<"Error: Expected 'def' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum<<endl;
						err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum," Expected 'def' ","");									
						;}
    break;

  case 99:
#line 677 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dm:	var_declaration SEMICOLON\n";;}
    break;

  case 100:
#line 678 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dm:	method_declaration\n";;}
    break;

  case 101:
#line 679 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dm:	class_decl\n";;}
    break;

  case 102:
#line 680 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
							Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
							err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"Expected ';' ","");
						   ;}
    break;

  case 103:
#line 686 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"var_declaration: access_modef ID\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false,false);
									v=(yyval.var);
									acc_mod="";
									;}
    break;

  case 104:
#line 692 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"var_declaration: STATIC ID\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false,false);
									v=(yyval.var);
							;}
    break;

  case 105:
#line 697 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"var_declaration: FINAL ID\n";
								(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
									v=(yyval.var);
								;}
    break;

  case 106:
#line 702 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"var_declaration: STATIC FINAL ID\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[-1].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
									v=(yyval.var);
									;}
    break;

  case 107:
#line 707 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"var_declaration: FINAL STATIC ID\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[-1].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
									v=(yyval.var);
									;}
    break;

  case 108:
#line 712 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 109:
#line 716 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 110:
#line 720 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: ID\n";
										(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,0,0);
										v=(yyval.var);
									;}
    break;

  case 111:
#line 724 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"var_declaration: FINAL access_modef ID\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=(yyval.var);
													acc_mod="";
											;}
    break;

  case 112:
#line 730 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"var_declaration: STATIC access_modef ID\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=(yyval.var);
													acc_mod="";
											;}
    break;

  case 113:
#line 736 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: access_modef ID ASSIGN expr\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,is_list,is_dic);
													v=(yyval.var);
													acc_mod="";
													;}
    break;

  case 114:
#line 741 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: STATIC ID ASSIGN expr\n";
											(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,is_list,is_dic);
											v=(yyval.var);
											is_dic=false;
											is_list=false;
										;}
    break;

  case 115:
#line 747 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: FINAL ID ASSIGN expr\n";
											(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,is_list,is_dic);
													v=(yyval.var);
													is_list=false;
													is_dic=false;
										;}
    break;

  case 116:
#line 753 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: STATIC FINAL ID ASSIGN expr\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,is_list,is_dic);
													v=(yyval.var);
													is_list=false;
													is_dic=false;
												;}
    break;

  case 117:
#line 759 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: FINAL STATIC ID ASSIGN expr\n";
				
														(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,is_list,is_dic);
													v=(yyval.var);
													is_list=false;
													is_dic=false;
													;}
    break;

  case 118:
#line 766 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");									
								  (yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,is_list,is_dic);
													v=(yyval.var);
													is_list=false;
													is_dic=false;
								  ;}
    break;

  case 119:
#line 774 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");									
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,is_list,is_dic);
													v=(yyval.var);
													is_list=false;
													is_dic=false;
								  ;}
    break;

  case 120:
#line 782 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: ID ASSIGN expr\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,is_list,is_dic);
													v=(yyval.var);
													is_list=false;
													is_dic=false;
										;}
    break;

  case 121:
#line 788 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
											Streams::verbose()<<"var_declaration: access_modef STATIC ID\n";
											(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,is_list,is_dic);
													v=(yyval.var);
													is_list=false;
													is_dic=false;
									acc_mod="";
											;}
    break;

  case 122:
#line 796 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
				
											Streams::verbose()<<"var_declaration: access_modef FINAL ID\n";
												(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,is_list,is_dic);
													v=(yyval.var);
													is_list=false;
													is_dic=false;
												acc_mod="";
											;}
    break;

  case 123:
#line 805 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"var_declaration: access_modef STATIC FINAL ID\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,is_list,is_dic);
													v=(yyval.var);
													is_list=false;
													is_dic=false;
												acc_mod="";
												;}
    break;

  case 124:
#line 813 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"var_declaration: access_modef FINAL STATIC ID\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,is_list,is_dic);
													v=(yyval.var);
													is_list=false;
													is_dic=false;
												acc_mod="";
												;}
    break;

  case 125:
#line 821 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,is_list,is_dic);
													v=(yyval.var);
													is_list=false;
													is_dic=false;
													acc_mod="";
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 126:
#line 830 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");	
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,is_list,is_dic);
													v=(yyval.var);
													is_list=false;
													is_dic=false;
													acc_mod="";								
								  ;}
    break;

  case 127:
#line 840 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"var_declaration: STATIC FINAL access_modef ID\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,0,0);
												v=(yyval.var);
												acc_mod="";
												;}
    break;

  case 128:
#line 846 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
													Streams::verbose()<<"var_declaration: FINAL STATIC access_modef ID\n";
														(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,0,0);
													v=(yyval.var);
													acc_mod="";
													
													;}
    break;

  case 129:
#line 853 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 130:
#line 857 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 131:
#line 861 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
				
															Streams::verbose()<<"var_declaration: access_modef STATIC ID ASSIGN expr\n";
															(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,is_list,is_dic);
													v=(yyval.var);
													is_list=false;
													is_dic=false;
																acc_mod="";
															;}
    break;

  case 132:
#line 870 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
														Streams::verbose()<<"var_declaration: access_modef FINAL ID ASSIGN expr\n";
															(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,is_list,is_dic);
													v=(yyval.var);
													is_list=false;
													is_dic=false;
														acc_mod="";
													;}
    break;

  case 133:
#line 878 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
																Streams::verbose()<<"var_declaration: access_modef STATIC FINAL ID ASSIGN expr\n";
																(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,is_list,is_dic);
													v=(yyval.var);
													is_list=false;
													is_dic=false;
																acc_mod="";
																;}
    break;

  case 134:
#line 886 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
																Streams::verbose()<<"var_declaration: access_modef FINAL STATIC ID ASSIGN expr\n";
																	(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,is_list,is_dic);
													v=(yyval.var);
													is_list=false;
													is_dic=false;
																	acc_mod="";
																;}
    break;

  case 135:
#line 894 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");									
									is_list=false;
													is_dic=false;
																	acc_mod="";
								  ;}
    break;

  case 136:
#line 901 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");									
								  is_list=false;
													is_dic=false;
																	acc_mod="";
								  ;}
    break;

  case 137:
#line 908 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
															Streams::verbose()<<"var_declaration: STATIC access_modef ID ASSIGN expr\n";
																	(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,is_list,is_dic);
													v=(yyval.var);
													is_list=false;
													is_dic=false;
																acc_mod="";
															;}
    break;

  case 138:
#line 916 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
														Streams::verbose()<<"var_declaration: FINAL access_modef ID ASSIGN expr\n";
																(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,is_list,is_dic);
													v=(yyval.var);
													is_list=false;
													is_dic=false;
															acc_mod="";
														;}
    break;

  case 139:
#line 924 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
																Streams::verbose()<<"var_declaration: STATIC FINAL access_modef ID ASSIGN expr\n";
																		(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,is_list,is_dic);
													v=(yyval.var);
													is_list=false;
													is_dic=false;
																	acc_mod="";
																;}
    break;

  case 140:
#line 932 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
																Streams::verbose()<<"var_declaration: FINAL STATIC access_modef ID ASSIGN expr\n";
																	(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,is_list,is_dic);
													v=(yyval.var);
													is_list=false;
													is_dic=false;
																acc_mod="";
																;}
    break;

  case 141:
#line 940 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");	
										is_list=false;
													is_dic=false;
																acc_mod="";								
								
								  ;}
    break;

  case 142:
#line 948 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");	
										is_list=false;
													is_dic=false;
																acc_mod="";								
								  ;}
    break;

  case 143:
#line 955 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
															Streams::verbose()<<"var_declaration: STATIC access_modef FINAL ID ASSIGN expr\n";
																	(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,is_list,is_dic);
													v=(yyval.var);
													is_list=false;
													is_dic=false;
																acc_mod="";
															;}
    break;

  case 144:
#line 963 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
																Streams::verbose()<<"var_declaration: FINAL access_modef FINAL ID ASSIGN expr\n";
																	(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,is_list,is_dic);
													v=(yyval.var);
													is_list=false;
													is_dic=false;
																acc_mod="";	
															;}
    break;

  case 145:
#line 971 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
																			is_list=false;
																		is_dic=false;
																					acc_mod="";
																;}
    break;

  case 146:
#line 978 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
																			is_list=false;
																			is_dic=false;
																						acc_mod="";
																;}
    break;

  case 147:
#line 985 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
											Streams::verbose()<<"Error: UN Expected IDENTIFIER Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)-strlen((yyvsp[-1].r.strVal)),"UN Expected IDENTIFIER ","");
												is_list=false;
													is_dic=false;
																acc_mod="";
										  ;}
    break;

  case 148:
#line 992 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
							Streams::verbose()<<"Error: UN Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[0].r.colNum)-strlength((yyvsp[0].r.strVal))<<endl;
							err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[0].r.colNum)-strlen((yyvsp[0].r.strVal)),"UN Expected IDENTIFIER ","");						
						;}
    break;

  case 149:
#line 998 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false,false,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 150:
#line 999 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false,false,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 151:
#line 1000 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: STATIC method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 152:
#line 1001 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: FINAL method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,false,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 153:
#line 1002 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: access_modef STATIC method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 154:
#line 1003 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: access_modef FINAL method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,false,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 155:
#line 1004 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: STATIC access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 156:
#line 1005 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: FINAL access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,false,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 157:
#line 1006 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: STATIC access_modef FINAL method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 158:
#line 1007 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: FINAL access_modef STATIC method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 159:
#line 1008 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: STATIC FINAL access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 160:
#line 1009 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: FINAL STATIC access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 161:
#line 1010 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
																		;}
    break;

  case 162:
#line 1014 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
																			;}
    break;

  case 163:
#line 1018 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
																			;}
    break;

  case 164:
#line 1022 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
																			;}
    break;

  case 165:
#line 1026 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
																			;}
    break;

  case 166:
#line 1030 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
																			;}
    break;

  case 167:
#line 1038 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S SELF CLOSE_S  \n";parameters.push_back("self");testfunction = p->createTypeFunctionHeader(t,ss,pp,ff, (yyvsp[-3].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);pp=true;ff=false;ss=false;parameters.clear();linefunc=yylval.r.lineNum;colmfunc=yylval.r.colNum;;}
    break;

  case 168:
#line 1039 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S ID CLOSE_S \n";parameters.push_back("self");testfunction = p->createTypeFunctionHeader(t,ss,pp,ff, (yyvsp[-3].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);pp=true;ff=false;ss=false;parameters.clear();linefunc=yylval.r.lineNum;colmfunc=yylval.r.colNum;;}
    break;

  case 169:
#line 1040 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S arguments CLOSE_S \n";testfunction = p->createTypeFunctionHeader(t,ss,pp,ff, (yyvsp[-3].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);pp=true;ff=false;ss=false;parameters.clear();linefunc=yylval.r.lineNum;colmfunc=yylval.r.colNum;;}
    break;

  case 170:
#line 1041 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S CLOSE_S \n";testfunction = p->createTypeFunctionHeader(t,ss,pp,ff, (yyvsp[-2].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);pp=true;ff=false;ss=false;parameters.clear();linefunc=yylval.r.lineNum;colmfunc=yylval.r.colNum;;}
    break;

  case 171:
#line 1042 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
									  ;}
    break;

  case 172:
#line 1046 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
									  ;}
    break;

  case 173:
#line 1050 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
									  ;}
    break;

  case 174:
#line 1054 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-1,"Expected IDENTIFIER ","");
									  ;}
    break;

  case 175:
#line 1058 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)+1<<endl;
												err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)+1,"Expected '(' ","");
											   ;}
    break;

  case 176:
#line 1062 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)+1<<endl;
												err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)+1,"Expected '(' ","");
											   ;}
    break;

  case 177:
#line 1066 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)+1<<endl;
												err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)+1,"Expected '(' ","");
											   ;}
    break;

  case 178:
#line 1070 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)+1<<endl;
												err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)+1,"Expected '(' ","");
											   ;}
    break;

  case 179:
#line 1074 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue((yyvsp[-3].r.lineNum),yylval.r.colNum-strlength(yylval.r.strVal),"Expected ')' ","");
													 ;}
    break;

  case 180:
#line 1078 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
														err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected ')' ","");
													 ;}
    break;

  case 181:
#line 1082 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
														err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected ')' ","");
													 ;}
    break;

  case 182:
#line 1086 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
														err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected ')' ","");
													 ;}
    break;

  case 183:
#line 1093 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"args_list %prec stmt_11\n";;}
    break;

  case 184:
#line 1094 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"arguments:	SELF COMMA args_list %prec stmt_11\n";parameters.push_back("self");;}
    break;

  case 185:
#line 1095 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"arguments:	SELF COMMA ID\n";parameters.push_back("self");parameters.push_back((yyvsp[0].r.strVal));;}
    break;

  case 186:
#line 1096 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"arguments:	SELF COMMA default_args_list\n";parameters.push_back("self");;}
    break;

  case 187:
#line 1097 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"arguments:	args_list COMMA default_args_list\n";;}
    break;

  case 188:
#line 1098 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"arguments:	SELF COMMA args_list COMMA default_args_list\n";parameters.push_back("self");;}
    break;

  case 189:
#line 1099 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"arguments:	SELF COMMA ID COMMA default_args_list\n";parameters.push_back("self");parameters.push_back((yyvsp[-2].r.strVal));;}
    break;

  case 190:
#line 1101 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"args_list: args_list COMMA arg\n";;}
    break;

  case 191:
#line 1102 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: self should come at the first of the arguments list"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Error: self should come at the first of the arguments list","");
									;}
    break;

  case 192:
#line 1106 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: self should come at the first of the arguments list"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Error: self should come at the first of the arguments list","");
									;}
    break;

  case 193:
#line 1110 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"args_list: ID COMMA arg \n"; parameters.push_back((yyvsp[-2].r.strVal));;}
    break;

  case 194:
#line 1111 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"args_list:	args_list COMMA ID \n"; parameters.push_back((yyvsp[0].r.strVal));;}
    break;

  case 195:
#line 1112 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"args_list:	ID COMMA ID \n"; parameters.push_back((yyvsp[-2].r.strVal)); parameters.push_back((yyvsp[0].r.strVal));;}
    break;

  case 196:
#line 1113 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"args_list: arg \n";;}
    break;

  case 197:
#line 1116 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
						Streams::verbose()<<"arg:	STAR ID \n";std::string tempstr((yyvsp[0].r.strVal));
						std::string erro("*" + tempstr);
						char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
					;}
    break;

  case 198:
#line 1122 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"arg:	STAR STAR ID \n";std::string tempstr((yyvsp[0].r.strVal));
						std::string erro("**" + tempstr);
						char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);;}
    break;

  case 199:
#line 1126 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
							Streams::verbose()<<"Error: Un Expected '*' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
							err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))," Un Expected '*' ","");
						;}
    break;

  case 200:
#line 1130 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Un Expected '**' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))," Un Expected '**' ","");
							 ;}
    break;

  case 201:
#line 1137 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"default_args_list: default_args_list COMMA default_arg\n";;}
    break;

  case 202:
#line 1138 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"default_args_list: default_arg \n";;}
    break;

  case 203:
#line 1139 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
														Streams::verbose()<<"Error: default argument not at end of parameter list at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"default argument not at end of parameter list","");					
														;}
    break;

  case 204:
#line 1143 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
														Streams::verbose()<<"Error: default argument not at end of parameter list at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"default argument not at end of parameter list","");					
														;}
    break;

  case 205:
#line 1149 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"default_arg:	ID ASSIGN expr \n";parameters.push_back((yyvsp[-2].r.strVal));;}
    break;

  case 206:
#line 1150 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"default_arg: STAR ID ASSIGN expr \n";std::string tempstr((yyvsp[-2].r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
									;}
    break;

  case 207:
#line 1156 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"default_arg:	STAR STAR ID ASSIGN expr \n";std::string tempstr((yyvsp[-2].r.strVal));
										std::string erro("**" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);;}
    break;

  case 208:
#line 1160 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
											Streams::verbose()<<"Error: Un Expected '**' at Line No:"<<(yyvsp[-5].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))," Un Expected '**' ","");
										;}
    break;

  case 209:
#line 1164 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
											Streams::verbose()<<"Error: Un Expected '*' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))," Un Expected '*' ","");
										;}
    break;

  case 210:
#line 1170 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"block_stmt: COLON  END \n";;}
    break;

  case 211:
#line 1171 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"block_stmt: COLON stmt_list END \n";;}
    break;

  case 212:
#line 1172 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
						Streams::verbose()<<"Error: Expected ':' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected ':' ","");			 
						;}
    break;

  case 213:
#line 1176 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
						Streams::verbose()<<"Error: Expected ':' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected ':' ","");			 
						;}
    break;

  case 214:
#line 1180 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
						Streams::verbose()<<"Error: Expected 'end' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
						err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected 'end' ","");			 
				;}
    break;

  case 215:
#line 1184 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
						Streams::verbose()<<"Error: Expected 'end' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<yylval.r.colNum<<endl;
						err->errQ->enqueue((yyvsp[-2].r.lineNum),yylval.r.colNum,"Expected 'end' ","");			 
				;}
    break;

  case 216:
#line 1191 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt_list:	stmt_list stmt \n";;}
    break;

  case 217:
#line 1192 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt_list:	stmt \n";;}
    break;

  case 218:
#line 1195 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt: if_stmt\n";;}
    break;

  case 219:
#line 1196 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	while_stmt\n";;}
    break;

  case 220:
#line 1197 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	for_stmt\n";;}
    break;

  case 221:
#line 1198 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	try_stmt\n";;}
    break;

  case 222:
#line 1199 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	with_stmt\n";;}
    break;

  case 223:
#line 1200 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	block_stmt %prec stmt_4\n";;}
    break;

  case 224:
#line 1201 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	simple_stmt_list SEMICOLON\n";;}
    break;

  case 225:
#line 1202 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected ';' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<yylval.r.colNum<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),yylval.r.colNum," Expected ';' ","");										
									;}
    break;

  case 226:
#line 1206 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"assignment_stmt:	self dot amer\n";
																		//cout<<"assignment list"<<endl;
																		(yyval.var)=p->addVariableToCurrentScope((yyvsp[-1].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,0,0,true);
																		v=(yyval.var);
																		acc_mod="";
										;}
    break;

  case 227:
#line 1213 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"stmt:	ID SEMICOLON\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[-1].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false,false);
																		v=(yyval.var);
																		acc_mod="";
																		is_list=false;
																		is_dic=false;
								;}
    break;

  case 228:
#line 1221 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
											Streams::verbose()<<"Error: illegal start of expression at Line No:"<<(yyvsp[-2].r.lineNum)<<endl;
										err->errQ->enqueue((yyvsp[-2].r.lineNum),yylval.r.colNum,"Error: illegal start of expression ","");										
										(yyval.var)=p->addVariableToCurrentScope((yyvsp[-1].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false,false);
																		v=(yyval.var);
																		acc_mod="";
																		is_list=false;
																		is_dic=false;
										;}
    break;

  case 229:
#line 1230 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"stmt:FINAL	ID SEMICOLON\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[-1].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
																		v=(yyval.var);
																		acc_mod="";
																		is_list=false;
																		is_dic=false;
										;}
    break;

  case 230:
#line 1238 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	ID DOT ID SEMICOLON\n";;}
    break;

  case 231:
#line 1239 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	ID COMMA ID DOT ID DOT ID SEMICOLON\n";;}
    break;

  case 232:
#line 1240 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	ID DOT ID COMMA ID DOT ID DOT ID SEMICOLON\n";;}
    break;

  case 233:
#line 1243 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt %prec stmt_3\n";;}
    break;

  case 234:
#line 1244 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt ELSE stmt\n";;}
    break;

  case 235:
#line 1245 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected 'else' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))," Expected 'else' ","");										
									;}
    break;

  case 236:
#line 1249 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt elif_stmt\n";;}
    break;

  case 237:
#line 1250 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt elif_stmt ELSE stmt\n";;}
    break;

  case 238:
#line 1253 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"elif_stmt: 	elif_header stmt elif_stmt\n";;}
    break;

  case 239:
#line 1254 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"elif_stmt:	elif_header stmt\n";;}
    break;

  case 240:
#line 1255 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected statement at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<yylval.r.colNum<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),yylval.r.colNum," Expected statement ","");										
											;}
    break;

  case 241:
#line 1261 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"if_header:	IF expr \n";;}
    break;

  case 242:
#line 1264 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"elif_header:	ELIF expr \n";;}
    break;

  case 243:
#line 1265 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    { 
						Streams::verbose()<<"Error: Expected reserved word at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected reserved word 'while' ","");
					 ;}
    break;

  case 244:
#line 1271 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"while_stmt: while_header stmt\n";;}
    break;

  case 245:
#line 1276 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"while_header: WHILE expr \n";;}
    break;

  case 246:
#line 1277 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    { 
						Streams::verbose()<<"Error: Expected reserved word at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected reserved word 'while' ","");
				;}
    break;

  case 247:
#line 1283 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_stmt: 	for_header stmt\n";;}
    break;

  case 248:
#line 1286 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_header: FOR target_list IN expr_list \n";;}
    break;

  case 249:
#line 1287 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_header: FOR target_list IN list_display \n";;}
    break;

  case 250:
#line 1288 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID COMMA ID IN expr_list \n";;}
    break;

  case 251:
#line 1289 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"for_header:	FOR ID COMMA ID IN list_display \n";
												(yyval.var)=p->checkVariable((yyvsp[-4].r.strVal),t, yylval.r.lineNum, yylval.r.colNum,true,is_list,is_dic);
												v=(yyval.var);
												temp_id="";
												;}
    break;

  case 252:
#line 1295 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID IN expr_list \n";
									(yyval.var)=p->checkVariable((yyvsp[-2].r.strVal),t, yylval.r.lineNum, yylval.r.colNum,true,is_list,is_dic);
																	v=(yyval.var);
																	temp_id="";
									;}
    break;

  case 253:
#line 1300 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
										(yyval.var)=p->checkVariable((yyvsp[-2].r.strVal),t, yylval.r.lineNum, yylval.r.colNum,true,is_list,is_dic);
																	v=(yyval.var);
																	temp_id="";
										Streams::verbose()<<"for_header:	FOR ID IN list_display \n";;}
    break;

  case 254:
#line 1305 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 255:
#line 1309 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 256:
#line 1313 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 257:
#line 1317 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 258:
#line 1321 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'in' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal)),"Expected reserved word 'in' ","");
								;}
    break;

  case 259:
#line 1325 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'in' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected reserved word 'in' ","");
								;}
    break;

  case 260:
#line 1329 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'in' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal)),"Expected reserved word 'in' ","");
								;}
    break;

  case 261:
#line 1333 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'in' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected reserved word 'in' ","");
								;}
    break;

  case 262:
#line 1340 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list:	import_list COMMA import\n";;}
    break;

  case 263:
#line 1341 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA import_list \n";;}
    break;

  case 264:
#line 1342 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA ID \n";;}
    break;

  case 265:
#line 1343 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA ID DOT ID \n";;}
    break;

  case 266:
#line 1344 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA import_list \n";;}
    break;

  case 267:
#line 1345 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA ID \n";;}
    break;

  case 268:
#line 1346 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA ID DOT ID \n";;}
    break;

  case 269:
#line 1347 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list:	import\n";;}
    break;

  case 270:
#line 1351 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import: import DOT ID\n";;}
    break;

  case 271:
#line 1352 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import:	ID DOT ID DOT ID;";}
    break;

  case 272:
#line 1356 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target_list:	target_list COMMA target\n";;}
    break;

  case 273:
#line 1357 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA ID COMMA target\n";;}
    break;

  case 274:
#line 1358 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target_list:	target_list COMMA ID\n";;}
    break;

  case 275:
#line 1359 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA ID COMMA ID\n";;}
    break;

  case 276:
#line 1360 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA target\n";;}
    break;

  case 277:
#line 1361 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target_list:	target\n";;}
    break;

  case 278:
#line 1364 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"try_stmt: TRY  stmt COLON except_stmt END\n";;}
    break;

  case 279:
#line 1365 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"try_stmt: TRY  stmt COLON finally_stmt END\n";;}
    break;

  case 280:
#line 1368 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"finally_stmt: 	FINALLY COLON block_stmt\n";;}
    break;

  case 281:
#line 1371 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"except_stmt:	EXCEPT  stmt\n";;}
    break;

  case 282:
#line 1372 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"except_stmt:	EXCEPT  expr stmt\n";;}
    break;

  case 283:
#line 1375 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"with_stmt:	WITH expr \n";;}
    break;

  case 284:
#line 1376 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"with_stmt:	WITH expr AS target \n";;}
    break;

  case 285:
#line 1379 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	expr_list\n";;}
    break;

  case 286:
#line 1380 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	assert_stmt\n";;}
    break;

  case 287:
#line 1381 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	assignment_stmt\n";;}
    break;

  case 288:
#line 1383 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	PASS\n";;}
    break;

  case 289:
#line 1384 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	del_stmt\n";;}
    break;

  case 290:
#line 1385 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	print_stmt\n";;}
    break;

  case 291:
#line 1386 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	return_stmt\n";;}
    break;

  case 292:
#line 1387 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	yield_stmt\n";;}
    break;

  case 293:
#line 1388 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	raise_stmt\n";;}
    break;

  case 294:
#line 1389 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	BREAK\n";;}
    break;

  case 295:
#line 1390 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	CONTINUE\n";;}
    break;

  case 296:
#line 1391 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	import_list\n";;}
    break;

  case 297:
#line 1392 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	global_stmt\n";;}
    break;

  case 298:
#line 1395 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assert_stmt: 	ASSERT expr\n";;}
    break;

  case 299:
#line 1396 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assert_stmt:	ASSERT expr COMMA expr\n";;}
    break;

  case 300:
#line 1398 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"left_assignment_side : expr_list\n";

									;}
    break;

  case 301:
#line 1402 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : parenth_form\n";;}
    break;

  case 302:
#line 1403 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : list_display\n";is_list=true;;}
    break;

  case 303:
#line 1404 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : dict_display\n";is_dic=true;;}
    break;

  case 304:
#line 1407 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	target_list ASSIGN left_assignment_side\n";;}
    break;

  case 305:
#line 1408 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	id_dot ASSIGN left_assignment_side\n";
																	(yyval.var)=p->checkVariable(const_cast<char *>(temp_id1.top().c_str()),t, yylval.r.lineNum, yylval.r.colNum,true,is_list,is_dic);
																	v=(yyval.var);
																	temp_id1.pop();
																	is_list=false;
																	is_dic=false;
																;}
    break;

  case 306:
#line 1415 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	id_dot OPEN_D expr_list CLOSE_D ASSIGN left_assignment_side\n";;}
    break;

  case 307:
#line 1416 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	id_dot OPEN_D CLOSE_D ASSIGN left_assignment_side\n";;}
    break;

  case 308:
#line 1417 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	ID COMMA ID ASSIGN left_assignment_side\n";;}
    break;

  case 309:
#line 1418 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
																		Streams::verbose()<<"assignment_stmt: SELF DOT ID ASSIGN left_assignment_side\n";
																		//cout<<"assignment list"<<endl;
																		(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,is_list,is_dic,true);
																		v=(yyval.var);
																		acc_mod="";
																		is_list=false;
																		is_dic=false;
																		temp_id="";
																	;}
    break;

  case 310:
#line 1433 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL target_list\n";;}
    break;

  case 311:
#line 1434 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID COMMA ID\n";;}
    break;

  case 312:
#line 1435 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID\n";;}
    break;

  case 313:
#line 1436 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID	OPEN_D expr CLOSE_D\n";;}
    break;

  case 314:
#line 1437 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID	OPEN_D expr COLON expr CLOSE_D\n";;}
    break;

  case 315:
#line 1438 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID	OPEN_D COLON CLOSE_D\n";;}
    break;

  case 316:
#line 1439 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL target_list	OPEN_D expr CLOSE_D\n";;}
    break;

  case 317:
#line 1440 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL target_list OPEN_D expr COLON expr CLOSE_D\n";;}
    break;

  case 318:
#line 1441 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL target_list OPEN_D COLON CLOSE_D\n";;}
    break;

  case 319:
#line 1444 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"return_stmt:	RETURN\n";;}
    break;

  case 320:
#line 1445 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"return_stmt:	RETURN expr_list\n";;}
    break;

  case 321:
#line 1448 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"yield_stmt:		yield_expression\n";;}
    break;

  case 322:
#line 1451 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"print_stmt: PRINT expr_list\n";;}
    break;

  case 323:
#line 1452 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"print_stmt: PRINT target_list\n";;}
    break;

  case 324:
#line 1453 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"print_stmt:	PRINT MORE_THAN MORE_THAN expr_list\n";;}
    break;

  case 325:
#line 1454 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected reserved word 'print' ","");
								;}
    break;

  case 326:
#line 1458 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
												err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'print' ","");
												;}
    break;

  case 327:
#line 1463 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"global_stmt :GLOBAL id_list\n";;}
    break;

  case 328:
#line 1464 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+(yyvsp[-1].r.strVal)<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected IDENTIFIER ","");
									   ;}
    break;

  case 329:
#line 1470 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"id_list: 	ID COMMA id_list\n";;}
    break;

  case 330:
#line 1471 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"id_list:	ID\n";;}
    break;

  case 331:
#line 1474 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"raise_stmt: RAISE\n";;}
    break;

  case 332:
#line 1475 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"raise_stmt:	RAISE expr\n";;}
    break;

  case 333:
#line 1476 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"raise_stmt:	RAISE expr COMMA expr\n";;}
    break;

  case 334:
#line 1477 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected expression at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
													err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected expression ","");
												 ;}
    break;

  case 335:
#line 1481 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected reserved word 'raise' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
													err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'raise' ","");
												 ;}
    break;

  case 336:
#line 1487 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"access_modef: PRIVATE\n";acc_mod="private";pp=true;;}
    break;

  case 337:
#line 1488 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"access_modef:	PUBLIC\n";acc_mod="public";pp=false;}
    break;

  case 338:
#line 1489 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"access_modef:	PROTECTED\n";acc_mod="protected";;}
    break;

  case 339:
#line 1494 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S target_list CLOSE_S \n";;}
    break;

  case 340:
#line 1495 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S ID COMMA ID CLOSE_S\n";;}
    break;

  case 341:
#line 1496 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S ID CLOSE_S\n";;}
    break;

  case 342:
#line 1497 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D target_list CLOSE_D\n";;}
    break;

  case 343:
#line 1498 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D ID COMMA ID CLOSE_D\n";;}
    break;

  case 344:
#line 1499 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D ID CLOSE_D\n";;}
    break;

  case 345:
#line 1500 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	attributeref\n";;}
    break;

  case 346:
#line 1501 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	subscription\n";;}
    break;

  case 347:
#line 1504 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"attributeref: primary DOT ID\n";;}
    break;

  case 348:
#line 1505 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"attributeref: ID DOT ID\n";;}
    break;

  case 349:
#line 1509 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"primary: 	atom\n";;}
    break;

  case 350:
#line 1510 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"primary:	attributeref\n";;}
    break;

  case 351:
#line 1511 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"primary:	subscription\n";;}
    break;

  case 352:
#line 1512 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"primary:	call\n";;}
    break;

  case 353:
#line 1515 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"atom:	enclosure\n";;}
    break;

  case 354:
#line 1516 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"atom:	literal\n";	;}
    break;

  case 355:
#line 1519 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"literal:    STRING_VALUE\n";;}
    break;

  case 356:
#line 1520 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"literal:	INTEGER_VALUE\n";;}
    break;

  case 357:
#line 1521 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"literal:	LONG_VALUE\n";;}
    break;

  case 358:
#line 1522 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"literal:	FLOAT_VALUE\n";;}
    break;

  case 359:
#line 1523 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"literal:	CHAR_VALUE\n";;}
    break;

  case 360:
#line 1526 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"enclosure:	parenth_form\n";;}
    break;

  case 361:
#line 1527 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"enclosure:	list_display\n";;}
    break;

  case 362:
#line 1528 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"enclosure:	string_conversion\n";;}
    break;

  case 363:
#line 1529 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"enclosure:	yield_atom\n";;}
    break;

  case 364:
#line 1530 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"enclosure:	dict_display\n";;}
    break;

  case 365:
#line 1533 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dict_display: OPEN_C CLOSE_C \n";;}
    break;

  case 366:
#line 1534 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dict_display: OPEN_C key_datum_list CLOSE_C \n";;}
    break;

  case 367:
#line 1536 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum_list COMMA key_datum \n";;}
    break;

  case 368:
#line 1537 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum_list COMMA\n";;}
    break;

  case 369:
#line 1538 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum\n";;}
    break;

  case 370:
#line 1540 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"key_datum : expr COLON expr\n";;}
    break;

  case 371:
#line 1543 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"parenth_form : 	OPEN_S expr_list CLOSE_S\n";;}
    break;

  case 372:
#line 1544 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"parenth_form : 	OPEN_S  CLOSE_S\n";;}
    break;

  case 373:
#line 1545 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-1,"Expected '(' ","");
								;}
    break;

  case 374:
#line 1549 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected ')' ","");
										;}
    break;

  case 375:
#line 1553 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
													err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))," Expected '(' ","");
												 ;}
    break;

  case 376:
#line 1557 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
													err->errQ->enqueue((yyvsp[-2].r.lineNum),yylval.r.colNum-strlength(yylval.r.strVal)," Expected ')' ","");
												 ;}
    break;

  case 377:
#line 1564 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"list_display:	OPEN_D  expr_list CLOSE_D\n";;}
    break;

  case 378:
#line 1565 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"list_display:	OPEN_D CLOSE_D\n";;}
    break;

  case 379:
#line 1568 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"string_conversion:	RE_COT expr_list RE_COT\n";;}
    break;

  case 380:
#line 1571 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"yield_atom:		OPEN_S yield_expression CLOSE_S\n";;}
    break;

  case 381:
#line 1574 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"yield_expression:	YIELD\n";;}
    break;

  case 382:
#line 1575 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"yield_expression:	YIELD expr_list\n";;}
    break;

  case 383:
#line 1578 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"subscription:	PRIMARY OPEN_D expr_list CLOSE_D\n";;}
    break;

  case 384:
#line 1582 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"call:	PRIMARY OPEN_D args_list CLOSE_D\n";;}
    break;

  case 385:
#line 1583 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"call:	PRIMARY OPEN_D ID CLOSE_D\n";;}
    break;

  case 386:
#line 1587 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"expr:	condition\n";;}
    break;

  case 387:
#line 1588 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"expr:	literal\n";;}
    break;

  case 388:
#line 1589 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"expr:	expr op expr\n";;}
    break;

  case 389:
#line 1601 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"expr:	long_id\n";
									
									;}
    break;

  case 390:
#line 1612 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"condition: expr EQUAL expr\n";;}
    break;

  case 391:
#line 1613 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"condition: expr NOT_EQUAL expr\n";;}
    break;

  case 392:
#line 1614 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"condition: expr LESS_THAN expr\n";;}
    break;

  case 393:
#line 1615 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"condition: expr LESS_OR_EQUAL expr\n";;}
    break;

  case 394:
#line 1616 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"condition: expr MORE_THAN expr\n";;}
    break;

  case 395:
#line 1617 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"condition: expr MORE_OR_EQUAL expr\n";;}
    break;

  case 396:
#line 1619 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"id_dot:	ID\n";
								temp_id1.push((yyvsp[0].r.strVal));
							;}
    break;

  case 397:
#line 1622 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"id_dot:	id_dot DOT ID\n";
							temp_id=temp_id1.top();
							temp_id=temp_id+"."+(yyvsp[0].r.strVal);
						temp_id1.pop();
						temp_id1.push(temp_id);	
						;}
    break;

  case 398:
#line 1636 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot\n";
										(yyval.var)=p->checkVariable(const_cast<char *>(temp_id1.top().c_str()),t, yylval.r.lineNum, yylval.r.colNum,false,is_list,is_dic);
										v=(yyval.var);
										temp_id1.pop();
								;}
    break;

  case 399:
#line 1641 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"long_id:	SELF DOT ID parenth_form\n";
										p->insert_func_Call(t,(yyvsp[-1].r.strVal),yylval.r.lineNum, yylval.r.colNum);
										//cout<<"hhhhhhhhh"<<endl;
									;}
    break;

  case 400:
#line 1646 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot parenth_form\n";temp_id1.pop();;}
    break;

  case 401:
#line 1647 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot OPEN_D expr CLOSE_D\n";;}
    break;

  case 402:
#line 1648 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot OPEN_D expr COLON expr CLOSE_D\n";;}
    break;

  case 403:
#line 1649 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot OPEN_D COLON CLOSE_D\n";;}
    break;

  case 404:
#line 1650 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"long_id:	SELF DOT ID\n";
									(yyval.var)=p->checkVariable((yyvsp[0].r.strVal),t, yylval.r.lineNum, yylval.r.colNum,false,is_list,is_dic,true);
																		v=(yyval.var);
																		acc_mod="";
									;}
    break;

  case 405:
#line 1658 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :PLUS\n";;}
    break;

  case 406:
#line 1659 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :MINUS\n";;}
    break;

  case 407:
#line 1660 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :DIV\n";;}
    break;

  case 408:
#line 1661 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :MOD\n";;}
    break;

  case 409:
#line 1662 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :OR\n";;}
    break;

  case 410:
#line 1663 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :NOT\n";;}
    break;

  case 411:
#line 1664 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :AND\n";;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 5553 "yacc.cpp"

  yyvsp -= yylen;
  yyssp -= yylen;


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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  int yytype = YYTRANSLATE (yychar);
	  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
	  YYSIZE_T yysize = yysize0;
	  YYSIZE_T yysize1;
	  int yysize_overflow = 0;
	  char *yymsg = 0;
#	  define YYERROR_VERBOSE_ARGS_MAXIMUM 5
	  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
	  int yyx;

#if 0
	  /* This is so xgettext sees the translatable formats that are
	     constructed on the fly.  */
	  YY_("syntax error, unexpected %s");
	  YY_("syntax error, unexpected %s, expecting %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
#endif
	  char *yyfmt;
	  char const *yyf;
	  static char const yyunexpected[] = "syntax error, unexpected %s";
	  static char const yyexpecting[] = ", expecting %s";
	  static char const yyor[] = " or %s";
	  char yyformat[sizeof yyunexpected
			+ sizeof yyexpecting - 1
			+ ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
			   * (sizeof yyor - 1))];
	  char const *yyprefix = yyexpecting;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 1;

	  yyarg[0] = yytname[yytype];
	  yyfmt = yystpcpy (yyformat, yyunexpected);

	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
		  {
		    yycount = 1;
		    yysize = yysize0;
		    yyformat[sizeof yyunexpected - 1] = '\0';
		    break;
		  }
		yyarg[yycount++] = yytname[yyx];
		yysize1 = yysize + yytnamerr (0, yytname[yyx]);
		yysize_overflow |= yysize1 < yysize;
		yysize = yysize1;
		yyfmt = yystpcpy (yyfmt, yyprefix);
		yyprefix = yyor;
	      }

	  yyf = YY_(yyformat);
	  yysize1 = yysize + yystrlen (yyf);
	  yysize_overflow |= yysize1 < yysize;
	  yysize = yysize1;

	  if (!yysize_overflow && yysize <= YYSTACK_ALLOC_MAXIMUM)
	    yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg)
	    {
	      /* Avoid sprintf, as that infringes on the user's name space.
		 Don't have undefined behavior even if the translation
		 produced a string with the wrong number of "%s"s.  */
	      char *yyp = yymsg;
	      int yyi = 0;
	      while ((*yyp = *yyf))
		{
		  if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		    {
		      yyp += yytnamerr (yyp, yyarg[yyi++]);
		      yyf += 2;
		    }
		  else
		    {
		      yyp++;
		      yyf++;
		    }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    {
	      yyerror (YY_("syntax error"));
	      goto yyexhaustedlab;
	    }
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror (YY_("syntax error"));
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
        {
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
        }
      else
	{
	  yydestruct ("Error: discarding", yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (0)
     goto yyerrorlab;

yyvsp -= yylen;
  yyssp -= yylen;
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
      if (yyn != YYPACT_NINF)
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


      yydestruct ("Error: popping", yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token. */
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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK;
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 1666 "C:\\Users\\Administrator.Sultan-PC\\Documents\\GitHub\\compiler-project\\yacc.y"

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
