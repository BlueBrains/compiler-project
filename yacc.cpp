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
     EXCEPT = 315,
     SEMICOLON = 316,
     NEW_LINE = 317,
     PASS = 318,
     CHAR_VALUE = 319,
     OPEN_S = 320,
     STRING_VALUE = 321,
     INTEGER_VALUE = 322,
     BREAK = 323,
     CONTINUE = 324,
     LONG_VALUE = 325,
     FLOAT_VALUE = 326,
     stmt_1_2 = 327,
     stmt_11 = 328,
     stmt_10 = 329,
     stmt_9 = 330,
     stmt_7 = 331,
     stmt_6 = 332,
     stmt_5 = 333,
     stmt_4 = 334,
     stmt_3 = 335,
     stmt_2 = 336,
     stmt_1 = 337,
     stmt_8 = 338,
     MULTI = 339
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
#define EXCEPT 315
#define SEMICOLON 316
#define NEW_LINE 317
#define PASS 318
#define CHAR_VALUE 319
#define OPEN_S 320
#define STRING_VALUE 321
#define INTEGER_VALUE 322
#define BREAK 323
#define CONTINUE 324
#define LONG_VALUE 325
#define FLOAT_VALUE 326
#define stmt_1_2 327
#define stmt_11 328
#define stmt_10 329
#define stmt_9 330
#define stmt_7 331
#define stmt_6 332
#define stmt_5 333
#define stmt_4 334
#define stmt_3 335
#define stmt_2 336
#define stmt_1 337
#define stmt_8 338
#define MULTI 339




/* Copy the first part of user declarations.  */
#line 3 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"

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
#line 66 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 330 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 342 "yacc.cpp"

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
#define YYLAST   2764

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  85
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  72
/* YYNRULES -- Number of rules. */
#define YYNRULES  414
/* YYNRULES -- Number of states. */
#define YYNSTATES  839

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   339

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
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84
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
     912,   918,   924,   930,   937,   944,   951,   958,   965,   972,
     977,   982,   987,   991,   996,  1001,  1006,  1010,  1015,  1020,
    1025,  1029,  1034,  1039,  1044,  1048,  1050,  1054,  1058,  1062,
    1066,  1070,  1076,  1082,  1086,  1091,  1096,  1100,  1104,  1108,
    1110,  1113,  1117,  1121,  1126,  1130,  1132,  1137,  1142,  1146,
    1151,  1157,  1164,  1170,  1173,  1177,  1180,  1184,  1187,  1191,
    1194,  1196,  1198,  1200,  1202,  1204,  1206,  1208,  1211,  1214,
    1219,  1222,  1226,  1230,  1235,  1244,  1255,  1258,  1263,  1268,
    1272,  1278,  1282,  1285,  1288,  1291,  1294,  1298,  1301,  1304,
    1308,  1311,  1316,  1321,  1328,  1335,  1340,  1345,  1351,  1357,
    1363,  1369,  1374,  1379,  1384,  1389,  1393,  1397,  1401,  1407,
    1413,  1419,  1427,  1429,  1433,  1439,  1443,  1449,  1453,  1459,
    1463,  1465,  1471,  1477,  1480,  1483,  1487,  1490,  1495,  1497,
    1499,  1501,  1503,  1505,  1507,  1509,  1511,  1513,  1515,  1517,
    1519,  1521,  1524,  1529,  1531,  1533,  1535,  1537,  1541,  1545,
    1552,  1558,  1564,  1570,  1573,  1578,  1581,  1587,  1595,  1601,
    1607,  1615,  1621,  1623,  1626,  1628,  1631,  1634,  1639,  1643,
    1649,  1652,  1655,  1659,  1661,  1663,  1666,  1671,  1676,  1682,
    1684,  1686,  1688,  1692,  1698,  1702,  1706,  1712,  1716,  1718,
    1720,  1724,  1728,  1730,  1732,  1734,  1736,  1738,  1740,  1742,
    1744,  1746,  1748,  1750,  1752,  1754,  1756,  1758,  1760,  1763,
    1767,  1771,  1774,  1776,  1780,  1784,  1787,  1790,  1793,  1797,
    1801,  1805,  1808,  1812,  1816,  1818,  1821,  1826,  1831,  1836,
    1838,  1840,  1844,  1846,  1850,  1854,  1858,  1862,  1866,  1870,
    1872,  1876,  1878,  1883,  1886,  1891,  1898,  1903,  1907,  1909,
    1911,  1913,  1915,  1917,  1919
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
      86,     0,    -1,    87,     3,    -1,    87,    89,    -1,    89,
      -1,     4,    93,    61,    -1,     4,    93,     1,    -1,    88,
      90,    -1,    90,    -1,    91,    95,    -1,     5,     6,    -1,
     135,     5,     6,    -1,    54,     5,     6,    -1,    53,     5,
       6,    -1,    54,    53,     5,     6,    -1,    53,    54,     5,
       6,    -1,    54,     1,    54,     5,     6,    -1,    53,     1,
      53,     5,     6,    -1,    54,   135,     5,     6,    -1,    53,
     135,     5,     6,    -1,    54,    53,   135,     5,     6,    -1,
      53,    54,   135,     5,     6,    -1,    54,     1,    54,   135,
       5,     6,    -1,    53,     1,    53,   135,     5,     6,    -1,
     135,    54,     5,     6,    -1,   135,    53,     5,     6,    -1,
     135,    54,    53,     5,     6,    -1,   135,    53,    54,     5,
       6,    -1,   135,    54,    54,     5,     6,    -1,   135,    53,
      53,     5,     6,    -1,    54,   135,    53,     5,     6,    -1,
      53,   135,    53,     5,     6,    -1,    54,   135,    54,     5,
       6,    -1,     5,     6,    65,     8,    -1,   135,     5,     6,
      65,     8,    -1,    54,     5,     6,    65,     8,    -1,    53,
       5,     6,    65,     8,    -1,    54,    53,     5,     6,    65,
       8,    -1,    53,    54,     5,     6,    65,     8,    -1,    54,
       1,    54,     5,     6,    65,     8,    -1,    53,     1,    53,
       5,     6,    65,     8,    -1,    54,   135,     5,     6,    65,
       8,    -1,    53,   135,     5,     6,    65,     8,    -1,    54,
      53,   135,     5,     6,    65,     8,    -1,    53,    54,   135,
       5,     6,    65,     8,    -1,    54,     1,    54,   135,     5,
       6,    65,     8,    -1,    53,     1,    53,   135,     5,     6,
      65,     8,    -1,   135,    54,     5,     6,    65,     8,    -1,
     135,    53,     5,     6,    65,     8,    -1,   135,    54,    53,
       5,     6,    65,     8,    -1,   135,    53,    54,     5,     6,
      65,     8,    -1,   135,    54,    54,     5,     6,    65,     8,
      -1,   135,    53,    53,     5,     6,    65,     8,    -1,    54,
     135,    53,     5,     6,    65,     8,    -1,    53,   135,    54,
       5,     6,    65,     8,    -1,    54,   135,    54,     5,     6,
      65,     8,    -1,    53,   135,    53,     5,     6,    65,     8,
      -1,     5,     6,    65,    93,     8,    -1,   135,     5,     6,
      65,    93,     8,    -1,    54,     5,     6,    65,    93,     8,
      -1,    53,     5,     6,    65,    93,     8,    -1,    54,    53,
       5,     6,    65,    93,     8,    -1,    53,    54,     5,     6,
      65,    93,     8,    -1,    54,     1,    54,     5,     6,    65,
      93,     8,    -1,    53,     1,    53,     5,     6,    65,    93,
       8,    -1,    54,   135,     5,     6,    65,    93,     8,    -1,
      53,   135,     5,     6,    65,    93,     8,    -1,    54,    53,
     135,     5,     6,    65,    93,     8,    -1,    53,    54,   135,
       5,     6,    65,    93,     8,    -1,    54,     1,    54,   135,
       5,     6,    65,    93,     8,    -1,    53,     1,    53,   135,
       5,     6,    65,    93,     8,    -1,   135,    54,     5,     6,
      65,    93,     8,    -1,   135,    53,     5,     6,    65,    93,
       8,    -1,   135,    54,    53,     5,     6,    65,    93,     8,
      -1,   135,    53,    54,     5,     6,    65,    93,     8,    -1,
     135,    54,    54,     5,     6,    65,    93,     8,    -1,   135,
      53,    53,     5,     6,    65,    93,     8,    -1,    53,   135,
      54,     5,     6,    65,    93,     8,    -1,    54,   135,    53,
       5,     6,    65,    93,     8,    -1,    54,   135,    54,     5,
       6,    65,    93,     8,    -1,    53,   135,    53,     5,     6,
      65,    93,     8,    -1,     5,     1,    -1,     6,     1,     6,
      -1,     6,     1,    -1,    92,     9,   152,    -1,   152,    -1,
      93,     9,    94,    -1,    94,    -1,    94,    10,     6,    -1,
       6,    -1,     7,    11,    -1,     7,    96,    11,    -1,     1,
      11,    -1,     1,    96,    11,    -1,     7,     1,    -1,     7,
      96,     1,    -1,    96,    14,    97,    -1,    14,    97,    -1,
      97,    -1,    98,    61,    -1,    99,    -1,    90,    -1,    98,
       1,    -1,   135,     6,    -1,    54,     6,    -1,    53,     6,
      -1,    54,    53,     6,    -1,    53,    54,     6,    -1,    54,
       1,    54,     6,    -1,    53,     1,    53,     6,    -1,     6,
      -1,    53,   135,     6,    -1,    54,   135,     6,    -1,   135,
       6,    15,   152,    -1,    54,     6,    15,   152,    -1,    53,
       6,    15,   152,    -1,    54,    53,     6,    15,   152,    -1,
      53,    54,     6,    15,   152,    -1,    54,     1,    54,     6,
      15,   152,    -1,    53,     1,    53,     6,    15,   152,    -1,
       6,    15,   152,    -1,   135,    54,     6,    -1,   135,    53,
       6,    -1,   135,    54,    53,     6,    -1,   135,    53,    54,
       6,    -1,   135,    54,     1,    54,     6,    -1,   135,    53,
       1,    53,     6,    -1,    54,    53,   135,     6,    -1,    53,
      54,   135,     6,    -1,    54,     1,    54,   135,     6,    -1,
      53,     1,    53,   135,     6,    -1,   135,    54,     6,    15,
     152,    -1,   135,    53,     6,    15,   152,    -1,   135,    54,
      53,     6,    15,   152,    -1,   135,    53,    54,     6,    15,
     152,    -1,   135,    54,     1,    54,     6,    15,   152,    -1,
     135,    53,     1,    53,     6,    15,   152,    -1,    54,   135,
       6,    15,   152,    -1,    53,   135,     6,    15,   152,    -1,
      54,    53,   135,     6,    15,   152,    -1,    53,    54,   135,
       6,    15,   152,    -1,    54,     1,    54,   135,     6,    15,
     152,    -1,    53,     1,    53,   135,     6,    15,   152,    -1,
      54,   135,    53,     6,    15,   152,    -1,    53,   135,    54,
       6,    15,   152,    -1,    54,   135,    54,     1,     6,    15,
     152,    -1,    53,   135,    53,     1,     6,    15,   152,    -1,
     135,     6,     6,     1,    -1,     6,     6,     1,    -1,   100,
     106,    -1,   135,   100,   106,    -1,    54,   100,   106,    -1,
      53,   100,   106,    -1,   135,    54,   100,   106,    -1,   135,
      53,   100,   106,    -1,    54,   135,   100,   106,    -1,    53,
     135,   100,   106,    -1,    54,   135,    53,   100,   106,    -1,
      53,   135,    54,   100,   106,    -1,    54,    53,   135,   100,
     106,    -1,    53,    54,   135,   100,   106,    -1,   135,    54,
      53,   100,   106,    -1,   135,    53,    54,   100,   106,    -1,
      53,   135,    53,     1,   100,   106,    -1,    54,   135,    54,
       1,   100,   106,    -1,    54,    54,     1,   135,   100,   106,
      -1,    53,    53,     1,   135,   100,   106,    -1,   135,    53,
       1,    53,   100,   106,    -1,   135,    54,     1,    54,   100,
     106,    -1,     6,    65,    55,     8,    -1,     6,    65,     6,
       8,    -1,     6,    65,   101,     8,    -1,     6,    65,     8,
      -1,     1,    65,   101,     8,    -1,     1,    65,     6,     8,
      -1,     1,    65,    55,     8,    -1,     1,    65,     8,    -1,
       6,     1,   101,     8,    -1,     6,     1,     6,     8,    -1,
       6,     1,    55,     8,    -1,     6,     1,     8,    -1,     6,
      65,   101,     1,    -1,     6,    65,     6,     1,    -1,     6,
      65,    55,     1,    -1,     6,    65,     1,    -1,   102,    -1,
      55,     9,   102,    -1,    55,     9,     6,    -1,    55,     9,
     104,    -1,   102,     9,   104,    -1,     6,     9,   104,    -1,
      55,     9,   102,     9,   104,    -1,    55,     9,     6,     9,
     104,    -1,   102,     9,   103,    -1,   102,     9,     1,    55,
      -1,     6,     9,     1,    55,    -1,     6,     9,   103,    -1,
     102,     9,     6,    -1,     6,     9,     6,    -1,   103,    -1,
      16,     6,    -1,    16,    16,     6,    -1,     6,    16,     1,
      -1,     6,    16,    16,     1,    -1,   104,     9,   105,    -1,
     105,    -1,   104,     1,     9,   102,    -1,   104,     1,     9,
       6,    -1,     6,    15,   152,    -1,    16,     6,    15,   152,
      -1,    16,    16,     6,    15,   152,    -1,     6,    16,     1,
      16,    15,   152,    -1,     6,    16,     1,    15,   152,    -1,
       7,    11,    -1,     7,   107,    11,    -1,     1,    11,    -1,
       1,   107,    11,    -1,     7,     1,    -1,     7,   107,     1,
      -1,   107,   108,    -1,   108,    -1,   109,    -1,   113,    -1,
     115,    -1,   120,    -1,   123,    -1,   106,    -1,   124,    61,
      -1,   124,     1,    -1,    55,    10,     6,    61,    -1,     6,
      61,    -1,    54,     6,    61,    -1,    53,     6,    61,    -1,
       6,    10,     6,    61,    -1,     6,     9,     6,    10,     6,
      10,     6,    61,    -1,     6,    10,     6,     9,     6,    10,
       6,    10,     6,    61,    -1,   111,   108,    -1,   111,   108,
      17,   108,    -1,   111,   108,     1,   108,    -1,   111,   108,
     110,    -1,   111,   108,   110,    17,   108,    -1,   112,   108,
     110,    -1,   112,   108,    -1,   112,     1,    -1,    18,   152,
      -1,    19,   152,    -1,     1,     6,   152,    -1,   114,   108,
      -1,    20,   152,    -1,     1,     6,   152,    -1,   116,   108,
      -1,    21,   119,    22,    92,    -1,    21,   119,    22,   146,
      -1,    21,     6,     9,     6,    22,    92,    -1,    21,     6,
       9,     6,    22,   146,    -1,    21,     6,    22,    92,    -1,
      21,     6,    22,   146,    -1,     6,     1,     6,    22,    92,
      -1,     6,     1,     6,    22,   146,    -1,     6,     1,   119,
      22,    92,    -1,     6,     1,   119,    22,   146,    -1,    21,
       6,     1,    92,    -1,    21,     6,     1,   146,    -1,    21,
     119,     1,    92,    -1,    21,   119,     1,   146,    -1,   117,
       9,   118,    -1,     6,     9,   117,    -1,     6,     9,     6,
      -1,     6,     9,     6,    10,     6,    -1,     6,    10,     6,
       9,   117,    -1,     6,    10,     6,     9,     6,    -1,     6,
      10,     6,     9,     6,    10,     6,    -1,   118,    -1,   118,
      10,     6,    -1,     6,    10,     6,    10,     6,    -1,   119,
       9,   136,    -1,     6,     9,     6,     9,   136,    -1,   119,
       9,     6,    -1,     6,     9,     6,     9,     6,    -1,     6,
       9,   136,    -1,   136,    -1,    23,   108,     7,   122,    11,
      -1,    23,   108,     7,   121,    11,    -1,    24,   106,    -1,
      60,   108,    -1,    60,   152,   108,    -1,    26,   152,    -1,
      26,   152,    27,   136,    -1,    92,    -1,   125,    -1,   127,
      -1,    63,    -1,   128,    -1,   131,    -1,   129,    -1,   130,
      -1,   134,    -1,    68,    -1,    69,    -1,   117,    -1,   132,
      -1,    28,   152,    -1,    28,   152,     9,   152,    -1,    92,
      -1,   145,    -1,   146,    -1,   142,    -1,   119,    15,   126,
      -1,   154,    15,   126,    -1,   154,    40,    92,    41,    15,
     126,    -1,   154,    40,    41,    15,   126,    -1,     6,     9,
       6,    15,   126,    -1,    55,    10,     6,    15,   126,    -1,
      30,   119,    -1,    30,     6,     9,     6,    -1,    30,     6,
      -1,    30,     6,    40,   152,    41,    -1,    30,     6,    40,
     152,     7,   152,    41,    -1,    30,     6,    40,     7,    41,
      -1,    30,   119,    40,   152,    41,    -1,    30,   119,    40,
     152,     7,   152,    41,    -1,    30,   119,    40,     7,    41,
      -1,    31,    -1,    31,    92,    -1,   149,    -1,    32,    92,
      -1,    32,   119,    -1,    32,    58,    58,    92,    -1,     6,
       1,    92,    -1,     6,     1,    58,    58,    92,    -1,    33,
     133,    -1,    33,     1,    -1,     6,     9,   133,    -1,     6,
      -1,    36,    -1,    36,   152,    -1,    36,   152,     9,   152,
      -1,    36,   152,     9,     1,    -1,     6,     1,   152,     9,
     152,    -1,    37,    -1,    38,    -1,    39,    -1,    65,   119,
       8,    -1,    65,     6,     9,     6,     8,    -1,    65,     6,
       8,    -1,    40,   119,    41,    -1,    40,     6,     9,     6,
      41,    -1,    40,     6,    41,    -1,   137,    -1,   150,    -1,
     138,    10,     6,    -1,     6,    10,     6,    -1,   139,    -1,
     137,    -1,   150,    -1,   151,    -1,   141,    -1,   140,    -1,
      66,    -1,    67,    -1,    70,    -1,    71,    -1,    64,    -1,
     145,    -1,   146,    -1,   147,    -1,   148,    -1,   142,    -1,
      12,    13,    -1,    12,   143,    13,    -1,   143,     9,   144,
      -1,   143,     9,    -1,   144,    -1,   152,     7,   152,    -1,
      65,    92,     8,    -1,    65,     8,    -1,     1,     8,    -1,
      65,     1,    -1,     1,    92,     8,    -1,    65,    92,     1,
      -1,    40,    92,    41,    -1,    40,    41,    -1,    42,    92,
      42,    -1,    65,   149,     8,    -1,    43,    -1,    43,    92,
      -1,    44,    40,    92,    41,    -1,    44,    40,   102,    41,
      -1,    44,    40,     6,    41,    -1,   153,    -1,   140,    -1,
     152,   156,   152,    -1,   155,    -1,   152,    29,   152,    -1,
     152,    52,   152,    -1,   152,    56,   152,    -1,   152,    57,
     152,    -1,   152,    58,   152,    -1,   152,    59,   152,    -1,
       6,    -1,   154,    10,     6,    -1,   154,    -1,    55,    10,
       6,   145,    -1,   154,   145,    -1,   154,    40,   152,    41,
      -1,   154,    40,   152,     7,   152,    41,    -1,   154,    40,
       7,    41,    -1,    55,    10,     6,    -1,    48,    -1,    49,
      -1,    50,    -1,    51,    -1,    45,    -1,    47,    -1,    46,
      -1
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
    1009,  1010,  1011,  1012,  1016,  1020,  1024,  1028,  1032,  1040,
    1041,  1042,  1043,  1044,  1048,  1052,  1056,  1060,  1064,  1068,
    1072,  1076,  1080,  1084,  1088,  1095,  1096,  1097,  1098,  1099,
    1100,  1101,  1102,  1104,  1105,  1109,  1113,  1114,  1115,  1116,
    1119,  1125,  1129,  1133,  1140,  1141,  1142,  1146,  1152,  1153,
    1159,  1163,  1167,  1173,  1174,  1175,  1179,  1183,  1187,  1194,
    1195,  1198,  1199,  1200,  1201,  1202,  1203,  1204,  1205,  1209,
    1216,  1224,  1233,  1241,  1242,  1243,  1246,  1247,  1248,  1252,
    1253,  1256,  1257,  1258,  1264,  1267,  1268,  1274,  1279,  1280,
    1286,  1289,  1290,  1291,  1292,  1298,  1303,  1308,  1312,  1316,
    1320,  1324,  1328,  1332,  1336,  1343,  1344,  1345,  1346,  1347,
    1348,  1349,  1350,  1354,  1355,  1359,  1360,  1361,  1362,  1363,
    1364,  1367,  1368,  1371,  1374,  1375,  1378,  1379,  1382,  1383,
    1384,  1386,  1387,  1388,  1389,  1390,  1391,  1392,  1393,  1394,
    1395,  1398,  1399,  1401,  1405,  1406,  1407,  1410,  1411,  1418,
    1419,  1420,  1421,  1436,  1437,  1438,  1439,  1440,  1441,  1442,
    1443,  1444,  1447,  1448,  1451,  1454,  1455,  1456,  1457,  1461,
    1466,  1467,  1473,  1474,  1477,  1478,  1479,  1480,  1484,  1490,
    1491,  1492,  1497,  1498,  1499,  1500,  1501,  1502,  1503,  1504,
    1507,  1508,  1512,  1513,  1514,  1515,  1518,  1519,  1522,  1523,
    1524,  1525,  1526,  1529,  1530,  1531,  1532,  1533,  1536,  1537,
    1539,  1540,  1541,  1543,  1546,  1547,  1548,  1552,  1556,  1560,
    1567,  1568,  1571,  1574,  1577,  1578,  1581,  1585,  1586,  1590,
    1591,  1592,  1604,  1615,  1616,  1617,  1618,  1619,  1620,  1622,
    1625,  1639,  1644,  1649,  1650,  1651,  1652,  1653,  1661,  1662,
    1663,  1664,  1665,  1666,  1667
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
  "MORE_OR_EQUAL", "EXCEPT", "SEMICOLON", "NEW_LINE", "PASS", "CHAR_VALUE",
  "OPEN_S", "STRING_VALUE", "INTEGER_VALUE", "BREAK", "CONTINUE",
  "LONG_VALUE", "FLOAT_VALUE", "stmt_1_2", "stmt_11", "stmt_10", "stmt_9",
  "stmt_7", "stmt_6", "stmt_5", "stmt_4", "stmt_3", "stmt_2", "stmt_1",
  "stmt_8", "MULTI", "$accept", "programes", "program", "import_stmt",
  "unit", "class_decl", "class_h", "expr_list", "unit_list", "unit_import",
  "class_body", "dm_list", "dm", "var_declaration", "method_declaration",
  "method_h", "arguments", "args_list", "arg", "default_args_list",
  "default_arg", "block_stmt", "stmt_list", "stmt", "if_stmt", "elif_stmt",
  "if_header", "elif_header", "while_stmt", "while_header", "for_stmt",
  "for_header", "import_list", "import", "target_list", "try_stmt",
  "finally_stmt", "except_stmt", "with_stmt", "simple_stmt_list",
  "assert_stmt", "left_assignment_side", "assignment_stmt", "del_stmt",
  "return_stmt", "yield_stmt", "print_stmt", "global_stmt", "id_list",
  "raise_stmt", "access_modef", "target", "attributeref", "primary",
  "atom", "literal", "enclosure", "dict_display", "key_datum_list",
  "key_datum", "parenth_form", "list_display", "string_conversion",
  "yield_atom", "yield_expression", "subscription", "call", "expr",
  "condition", "id_dot", "long_id", "op", 0
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
     335,   336,   337,   338,   339
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    85,    86,    87,    87,    88,    88,    89,    89,    90,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    92,    92,    93,    93,    94,    94,
      95,    95,    95,    95,    95,    95,    96,    96,    96,    97,
      97,    97,    97,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   101,   101,   101,   101,   101,
     101,   101,   101,   102,   102,   102,   102,   102,   102,   102,
     103,   103,   103,   103,   104,   104,   104,   104,   105,   105,
     105,   105,   105,   106,   106,   106,   106,   106,   106,   107,
     107,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   109,   109,   109,   109,
     109,   110,   110,   110,   111,   112,   112,   113,   114,   114,
     115,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   117,   117,   117,   117,   117,
     117,   117,   117,   118,   118,   119,   119,   119,   119,   119,
     119,   120,   120,   121,   122,   122,   123,   123,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   125,   125,   126,   126,   126,   126,   127,   127,   127,
     127,   127,   127,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   129,   129,   130,   131,   131,   131,   131,   131,
     132,   132,   133,   133,   134,   134,   134,   134,   134,   135,
     135,   135,   136,   136,   136,   136,   136,   136,   136,   136,
     137,   137,   138,   138,   138,   138,   139,   139,   140,   140,
     140,   140,   140,   141,   141,   141,   141,   141,   142,   142,
     143,   143,   143,   144,   145,   145,   145,   145,   145,   145,
     146,   146,   147,   148,   149,   149,   150,   151,   151,   152,
     152,   152,   152,   153,   153,   153,   153,   153,   153,   154,
     154,   155,   155,   155,   155,   155,   155,   155,   156,   156,
     156,   156,   156,   156,   156
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
       5,     5,     5,     6,     6,     6,     6,     6,     6,     4,
       4,     4,     3,     4,     4,     4,     3,     4,     4,     4,
       3,     4,     4,     4,     3,     1,     3,     3,     3,     3,
       3,     5,     5,     3,     4,     4,     3,     3,     3,     1,
       2,     3,     3,     4,     3,     1,     4,     4,     3,     4,
       5,     6,     5,     2,     3,     2,     3,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     4,
       2,     3,     3,     4,     8,    10,     2,     4,     4,     3,
       5,     3,     2,     2,     2,     2,     3,     2,     2,     3,
       2,     4,     4,     6,     6,     4,     4,     5,     5,     5,
       5,     4,     4,     4,     4,     3,     3,     3,     5,     5,
       5,     7,     1,     3,     5,     3,     5,     3,     5,     3,
       1,     5,     5,     2,     2,     3,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     4,     1,     1,     1,     1,     3,     3,     6,
       5,     5,     5,     2,     4,     2,     5,     7,     5,     5,
       7,     5,     1,     2,     1,     2,     2,     4,     3,     5,
       2,     2,     3,     1,     1,     2,     4,     4,     5,     1,
       1,     1,     3,     5,     3,     3,     5,     3,     1,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       3,     2,     1,     3,     3,     2,     2,     2,     3,     3,
       3,     2,     3,     3,     1,     2,     4,     4,     4,     1,
       1,     3,     1,     3,     3,     3,     3,     3,     3,     1,
       3,     1,     4,     2,     4,     6,     4,     3,     1,     1,
       1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       0,     0,     0,     0,   339,   340,   341,     0,     0,     0,
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
       0,   176,     0,     0,     0,   185,   199,    82,   180,     0,
       0,   148,   399,     0,   362,   358,   359,   360,   361,   390,
     120,   389,     0,   392,   184,     0,   172,     0,     0,     0,
       0,     0,     0,   107,     0,   152,   111,     0,     0,     0,
       0,     0,   106,     0,     0,   151,   112,     0,     0,     0,
      96,     0,     0,   215,     0,     0,     0,     0,     0,     0,
       0,     0,   322,     0,     0,   334,     0,     0,   384,     0,
       0,     0,     0,   291,     0,   297,   298,   288,   226,     0,
     220,   221,     0,   222,     0,   223,     0,   299,   272,     0,
     224,   225,     0,   289,   290,   292,   294,   295,   293,   300,
     296,   280,   348,     0,   352,   390,   356,   367,   363,   364,
     365,   366,   324,   349,   355,    85,     0,   217,   213,     0,
       0,     0,     0,   122,     0,     0,     0,   121,     0,     0,
     150,    34,     0,     0,    29,    27,     0,    26,    28,     0,
      23,    60,    38,     0,     0,    42,     0,     0,     0,     0,
      22,    59,    37,     0,     0,    41,     0,     0,     0,   174,
       0,     0,   200,     0,   175,     0,   173,     0,   178,   179,
     177,     0,     0,   412,   414,   413,   408,   409,   410,   411,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     403,   182,   170,   183,   169,   181,   171,   109,     0,     0,
     115,     0,     0,   128,     0,     0,     0,     0,     0,   156,
     108,     0,   114,     0,   127,     0,     0,     0,     0,     0,
       0,   155,     0,   376,   288,     0,     0,     0,   230,   368,
       0,   372,     0,   244,   248,     0,     0,   357,     0,   286,
     301,   315,   313,   323,   399,     0,   325,   326,   331,   333,
     330,   335,   399,   381,     0,     0,     0,   385,     0,     0,
       0,     0,   377,   399,   375,     0,     0,     0,     0,   216,
     219,     0,   247,   250,     0,     0,     0,     0,   228,   227,
       0,     0,     0,   218,   214,   147,   113,     0,     0,   124,
       0,   154,     0,     0,   123,     0,   153,    58,    48,     0,
       0,     0,    47,     0,     0,     0,    40,     0,     0,    62,
      44,     0,    66,    56,     0,    54,     0,    39,     0,     0,
      61,    43,     0,    65,    53,     0,    55,     0,     0,   198,
       0,   196,   190,   205,   202,     0,   201,   187,   186,   188,
       0,   197,   193,   189,     0,   393,   394,   395,   396,   397,
     398,   391,     0,   400,     0,     0,   377,     0,   130,     0,
       0,   117,     0,   160,   138,     0,     0,     0,   158,     0,
     129,   116,     0,   159,     0,   137,     0,   157,     0,     0,
     249,   378,   399,     0,   328,     0,    85,   267,   266,   279,
     351,   371,   369,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   347,   380,   345,   382,   399,     0,     0,   232,   231,
       0,   344,     0,   379,   374,   342,   383,    84,     0,     0,
       0,   239,     0,     0,   265,   273,   277,   275,     0,   303,
     307,   306,   304,   305,   350,   308,     0,     0,    85,   126,
       0,   132,     0,   162,   125,     0,   131,     0,   161,    72,
      52,     0,    50,     0,    71,    49,     0,    51,     0,    64,
      46,     0,    68,    80,    77,    63,    45,     0,    67,    78,
      79,   195,     0,     0,   200,     0,     0,     0,   203,     0,
       0,   194,   402,   406,     0,   404,   119,     0,   166,   140,
       0,   163,   144,   118,     0,   139,   165,   143,     0,   164,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   233,
     370,   373,   261,   262,     0,   351,   255,   256,   263,   264,
     251,   252,     0,     0,     0,     0,     0,   287,   302,   314,
       0,     0,     0,     0,     0,   327,   332,   337,   336,     0,
       0,   388,   386,     0,   387,     0,   229,     0,     0,   238,
     237,   245,     0,     0,     0,     0,     0,     0,     0,   167,
     134,     0,   168,   133,    76,    74,    73,    75,    70,    69,
     208,   202,     0,   201,     0,     0,     0,   204,   192,   191,
       0,   142,   146,   141,   145,   257,   258,   329,   259,   260,
     338,   267,   276,   268,   311,   270,   269,   274,     0,     0,
     283,   284,     0,   282,   281,   318,     0,   316,   321,     0,
     319,   346,   198,   197,   312,   343,   246,   240,     0,   241,
       0,   310,     0,   136,   135,     0,     0,   209,     0,   207,
     206,     0,     0,     0,   405,     0,     0,     0,     0,     0,
     278,   253,   254,   285,     0,     0,     0,   309,   212,     0,
     210,     0,     0,   267,   268,   270,   274,   271,   317,   320,
     211,     0,     0,   234,     0,   268,   271,   274,   235
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     9,    10,    11,    12,    66,    14,   237,    17,    18,
      36,    67,    68,    69,    70,    71,   170,   165,   166,   492,
     493,   238,   239,   240,   241,   591,   242,   592,   243,   244,
     245,   246,   247,   248,   249,   250,   694,   695,   251,   252,
     253,   600,   254,   255,   256,   257,   258,   259,   410,   260,
      72,   261,   262,   263,   264,   179,   266,   267,   390,   391,
     268,   269,   270,   271,   272,   273,   274,   275,   181,   182,
     183,   345
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -428
static const short int yypact[] =
{
    1765,     1,   256,   149,  -428,  -428,  -428,   371,   177,   208,
    1694,  1447,  -428,  -428,   226,    49,  -428,    19,   181,  -428,
     205,   283,   220,   354,   182,   191,   317,   454,   836,   194,
    -428,  -428,  -428,  -428,  1518,  1589,  -428,   477,   267,   304,
    -428,     1,  -428,   537,   379,  -428,  1049,   280,   543,   574,
     628,   636,   647,  1120,   612,   668,   686,   688,   692,   698,
     649,    24,  -428,   263,  1305,  1376,  -428,   443,  -428,     3,
    -428,   436,   474,   649,  -428,    36,   673,   747,   742,   753,
     757,   783,   815,   181,  -428,  -428,    37,   818,   829,   411,
     765,   832,   781,   843,   846,   849,   858,   657,   811,   890,
     840,   903,   925,   380,   426,   957,  2106,   514,  -428,   198,
      42,   966,   605,   436,   540,    98,    47,   767,  1088,   436,
     551,  -428,   263,  -428,  -428,  1652,  1723,  -428,    34,   701,
     794,   436,  -428,  -428,   773,  1027,  1095,  1097,  1041,  1105,
    1113,  -428,  1056,  1138,  -428,    88,   825,  1081,   837,  1109,
    1112,  1129,  1154,  -428,   526,   887,  1131,   900,  1150,  1152,
     318,  -428,   307,   564,  1174,  1225,  -428,   651,  -428,   593,
    1235,  -428,  -428,  1238,  -428,  -428,  -428,  -428,  -428,  -428,
    2705,  -428,   871,  -428,  -428,   552,  -428,   606,   501,  1316,
     466,  2106,   685,  1230,   797,  -428,    51,   502,   822,   436,
    1387,  2106,  1250,   951,   685,  -428,    55,   975,   623,   436,
    -428,  1510,  1084,  -428,   614,  2106,  2106,   427,  1936,  2106,
    2106,  2216,  2106,   591,   569,  2106,   795,  2106,  2106,  1213,
    1261,  1280,  1278,  -428,   158,  -428,  -428,  1298,  -428,  1794,
    -428,  -428,  1936,  -428,  1936,  -428,  1936,  1310,  1314,   510,
    -428,  -428,     4,  -428,  -428,  -428,  -428,  -428,  -428,  -428,
    -428,  -428,  1328,  1366,  -428,  1380,  -428,  -428,  -428,  -428,
    -428,  -428,  -428,  1385,  -428,  2705,  1013,  1581,  -428,  1865,
    1325,  2106,   291,    58,  1046,   436,   178,    66,  1117,   436,
    -428,  -428,   609,   938,  1271,  1284,   939,  1313,  1332,   958,
    1342,  -428,  -428,   735,   971,  -428,   800,   996,  1009,  1010,
    1344,  -428,  -428,   807,  1018,  -428,  1100,  1021,  1024,  -428,
     345,    82,  -428,  1414,  -428,   373,  -428,   445,  -428,  -428,
    -428,  1435,  2106,  -428,  -428,  -428,  -428,  -428,  -428,  -428,
    2106,  2106,  2106,  2106,  2106,  2106,   327,  1436,   248,   139,
    -428,  -428,  -428,  -428,  -428,  -428,  -428,  1428,  1160,   651,
    2705,   620,  2106,    67,   436,  2106,   631,    73,   436,  -428,
    1429,  1163,  2705,  2106,    77,   436,   620,  2106,    78,   436,
     670,  -428,   719,  -428,  1171,  2181,  2225,  1441,  -428,  -428,
     674,  -428,  2526,  2705,  2705,   644,   522,  -428,  1442,  2618,
    2557,    95,    13,  1298,  1445,  1397,  1298,  1452,  -428,  1454,
    -428,  2572,   113,  -428,   148,   170,    35,  1298,   666,  1403,
    1405,  1462,   327,  1181,  -428,   708,  1184,  1440,  2106,  -428,
    -428,  1368,  -428,  -428,  1467,  1468,  2258,   240,  -428,  -428,
    1470,   240,    20,  1581,  -428,  -428,  2705,   725,  2106,   100,
     436,  -428,   734,  2106,   166,   436,  -428,  -428,  -428,  1220,
    1029,  1032,  -428,  1222,  1042,  1067,  -428,  1228,  1089,  -428,
    -428,  1231,  -428,  -428,  1233,  -428,  1242,  -428,  1252,  1092,
    -428,  -428,  1255,  -428,  -428,  1291,  -428,  1293,  1422,  1156,
     425,  -428,   147,  -428,  -428,  1477,  -428,   703,  1471,   147,
    1432,  1156,  -428,   147,   942,   820,   820,   820,   820,   820,
     820,  2705,  1171,  -428,  1448,  2454,  -428,  2106,  1473,    71,
     436,  2705,  2106,  -428,  2705,   175,   436,  2106,  -428,  2106,
    1475,  2705,  2106,  -428,   436,  2705,  2106,  -428,   259,   436,
    2705,  -428,   117,  1433,  1298,   152,  2603,   339,  1486,  -428,
       2,  2106,  -428,  2106,   446,  2267,  1490,   446,   446,   446,
       0,  2300,  2106,  2309,   755,   787,  2342,  2106,  1491,   211,
    2351,  -428,  -428,  -428,  -428,   128,   209,   244,  -428,  -428,
    1155,  -428,  2384,  -428,  -428,  -428,  -428,  2705,  2007,  1936,
    2106,  1481,  2078,  1489,  1314,  -428,  1502,  -428,  2096,  1298,
    -428,  -428,  -428,  -428,  -428,  -428,  1498,   289,  2454,   338,
     436,  2705,  2106,  -428,   340,   436,  2705,  2106,  -428,  -428,
    -428,  1304,  -428,  1323,  -428,  -428,  1326,  -428,  1337,  -428,
    -428,  1339,  -428,  -428,  -428,  -428,  -428,  1348,  -428,  -428,
    -428,  -428,  2106,   105,  1499,  1509,  1511,   434,  -428,   345,
     445,  -428,  -428,  -428,  2106,  -428,  2705,  2106,  -428,  2705,
    2106,  -428,  2705,  2705,  2106,  2705,  -428,  2705,  2106,  -428,
     446,  2106,   446,  2106,  2393,  1519,   240,  1520,  1521,  -428,
    -428,  2705,  1298,  -428,   392,  -428,  1298,  -428,  1298,  -428,
    1298,  -428,   436,  1936,  1523,  1524,  1502,  -428,  2705,  1361,
    1496,  2478,  1503,  2502,  1361,  1298,  -428,  -428,  2705,   403,
     570,  -428,  -428,   590,  -428,   240,  -428,   877,  2149,  -428,
    -428,  2705,  1936,  1297,  1439,  1533,   240,  1530,  2106,  -428,
    2705,  2106,  -428,  2705,  -428,  -428,  -428,  -428,  -428,  -428,
    2705,  1357,  2106,  1532,   460,  1390,   472,  -428,   147,   147,
    2642,  2705,  2705,  2705,  2705,  1298,  -428,  1298,  1298,  -428,
    2705,   741,  -428,   782,  -428,  1374,  1486,  -428,  2426,   446,
    -428,  -428,  1226,  -428,  -428,  -428,  2106,  -428,  -428,  2106,
    -428,  -428,  1535,  1535,  -428,  -428,  2705,  -428,  1542,  -428,
    1539,  -428,   240,  2705,  2705,  2106,  1543,  2705,  2106,   531,
    1486,  1558,  1499,  1554,  -428,  1555,  1556,  1560,  1561,  1562,
    1502,  1298,  -428,  -428,  2666,  2690,  2106,  -428,  2705,  2106,
    2705,  1357,  1532,  1393,   782,  1407,  1508,  1409,  -428,  -428,
    2705,  1564,  1577,  -428,  1578,  1418,  1418,  1508,  -428
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -428,  -428,  -428,  -428,  1575,   555,  -428,   141,   281,  1545,
    -428,  1563,   -46,  -428,  -428,   335,   711,  -324,  -318,  -312,
     944,    -2,  1479,  -208,  -428,   872,  -428,  -428,  -428,  -428,
    -428,  -428,  -383,  1172,  -205,  -428,  -428,  -428,  -428,  -428,
    -428,  -427,  -428,  -428,  -428,  -428,  -428,  -428,  1040,  -428,
     640,  -378,  -428,  -428,  -428,   -93,  -428,  -418,  -428,  1059,
    -176,  -386,  -428,  -428,  1363,  -428,  -428,  -106,  -428,   -84,
    -428,  -428
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -408
static const short int yytable[] =
{
     180,   498,   491,   548,   123,   438,   350,    16,   549,   502,
     398,  -408,   396,   499,   605,   503,   402,   108,   407,   601,
      40,   415,   436,   601,   692,  -408,   172,   514,    41,   426,
     105,   430,   265,   265,   431,  -408,   432,   132,   433,   106,
     280,   276,   276,  -408,   428,   141,    41,   133,  -408,   281,
     122,   603,  -408,   565,    37,   603,  -408,   191,   597,  -408,
     693,   606,   201,   679,   124,   439,   365,  -408,  -408,   127,
     377,   430,   190,   448,   190,   173,   210,   574,  -408,   190,
      42,   453,   522,   494,   174,   360,   175,   176,   527,   107,
     177,   178,   532,   536,   577,   372,   301,    41,   495,   107,
     350,  -408,    38,    39,   563,   556,   741,   107,   392,   393,
     394,   195,   107,   399,   400,   612,   107,   205,   265,   411,
     107,   495,   570,   107,   397,   265,   566,   276,   397,   290,
     265,   107,   107,   265,   276,   564,   107,   710,   107,   670,
     516,   265,   107,   107,   321,   172,   265,   424,  -408,   265,
      21,   265,   200,   265,   571,   276,   647,   428,   276,   422,
     276,   436,   276,   103,   423,   107,   424,  -408,   683,   711,
     214,   687,   689,   691,   672,   446,   190,   549,    26,   436,
     545,   617,    27,   697,   265,   549,   265,    48,   549,   572,
     660,    43,   549,   276,   173,   276,    50,   369,   226,    57,
     227,   228,   229,   174,   549,   175,   176,   381,    30,   177,
     178,   573,   707,   173,     4,     5,     6,   172,   428,     4,
       5,     6,   174,   234,   175,   176,   505,    34,   177,   178,
      28,   107,   452,    35,   506,   507,   508,   509,   510,   511,
     107,   346,   515,   103,    51,    52,   172,    58,    59,   764,
     712,   189,   214,   713,   172,   514,   521,    19,   601,   524,
     190,   602,    20,   103,    60,   602,   173,   531,     2,    61,
      44,   535,    77,    46,   668,   174,   540,   175,   176,   546,
     598,   177,   178,   451,   756,   714,   759,   456,   784,    45,
     603,   548,   265,   397,   766,   173,   762,   601,   428,   791,
       4,     5,     6,   173,   174,   349,   175,   176,   601,    80,
     177,   178,   174,   322,   175,   176,    64,    65,   177,   178,
      78,    79,   587,   323,   107,    86,   319,   320,   652,   603,
     727,   491,   502,   172,   321,   383,   608,   748,   749,  -408,
     603,  -408,   611,   397,   447,    89,   488,   616,  -408,   675,
     265,   489,   384,   728,   676,   731,   103,    81,    82,   276,
      47,   490,   523,   403,   406,   817,   528,   414,   416,   417,
     145,    53,    22,   533,   601,   425,    23,   537,   154,   497,
     719,   720,   173,   812,   724,    16,   160,    85,   161,   490,
     762,   174,   491,   175,   176,   502,   162,   177,   178,   113,
     119,   768,   556,   107,   652,   107,   603,   131,     4,     5,
       6,   656,   768,   556,   769,   292,   659,    16,   384,   144,
     800,   662,   548,   663,   766,    24,   665,   303,   346,   306,
     667,   644,   167,   395,   168,   163,   313,   125,   316,   214,
     745,   645,   162,   126,   781,   392,   500,   681,   613,   199,
     746,   501,   172,   618,   121,   209,   698,   122,   701,   703,
      54,   490,   397,   708,   285,   289,   799,   226,   397,   227,
     397,   229,   359,   397,   168,    60,   162,   397,   802,    37,
     128,   169,   162,    76,   721,   771,   598,   512,   803,   397,
     425,   174,   234,   175,   176,   265,   265,   177,   178,   265,
     602,   173,   355,   366,   276,   276,   730,    93,   276,   356,
     174,   733,   175,   176,   787,   184,   177,   178,   658,   436,
     185,   169,   186,   558,   661,   437,   544,   129,   130,   364,
     162,   436,   666,   368,   311,    41,   740,   669,   375,   602,
    -408,    60,   379,    84,   559,    50,   196,   321,   750,    90,
     602,   751,    60,   351,   752,    13,    57,   206,   753,   576,
     352,   320,   754,   512,   813,    13,    33,   760,   321,   187,
     408,   488,   324,   325,   459,   409,   782,   463,   599,    91,
     467,   397,   599,   607,   384,   471,   162,   772,   474,   476,
     478,   500,   346,   197,   198,   482,   783,   404,   485,   487,
     265,   329,   325,   214,   207,   208,   162,   353,   729,   276,
      48,   193,   786,   732,   354,   325,   602,   457,    41,   450,
     172,    60,   793,   455,   380,   794,   519,   389,   102,   265,
     265,   226,    60,   227,    92,   229,   797,   525,   276,   276,
      15,    93,     4,     5,     6,   554,   173,    25,    29,   405,
      15,    15,    94,   555,   556,   174,   234,   175,   176,   328,
     320,   177,   178,    16,    49,   153,   557,   321,    56,   173,
     814,    60,   575,   815,    98,   397,   538,    97,   174,   265,
     175,   176,   162,   551,   177,   178,    88,   552,   276,   818,
     770,    99,   820,    96,   100,   682,   520,   101,   686,   688,
     690,   526,   282,   102,   114,   120,    77,   283,   705,   583,
     786,   534,   649,   830,   103,   539,   584,   428,   642,   643,
     385,   173,     4,     5,     6,   172,    60,  -399,   386,  -399,
     174,   609,   175,   176,  -399,    60,   177,   178,   134,   414,
     614,   621,   623,   469,    41,   626,   628,   136,  -399,   631,
    -408,   806,   194,   135,    78,   284,  -278,   203,   137,  -399,
     637,   172,   700,   138,  -399,  -399,  -399,  -399,  -399,  -399,
    -399,  -399,    55,   202,   173,  -399,  -399,  -399,  -399,    16,
     388,   291,   610,   174,  -399,   175,   176,   615,   139,   177,
     178,  -408,  -351,   172,   702,   286,   346,  -351,    60,    80,
     287,   412,    91,   363,     4,     5,     6,   214,   472,    41,
     173,   755,   757,   758,   164,   480,    41,   599,   188,   174,
     140,   175,   176,    60,   142,   177,   178,    94,   367,   358,
     146,    16,   361,   302,   143,   226,   413,   227,   147,   229,
     371,    55,   173,    16,   376,   305,   148,   288,    82,   149,
     173,   174,   150,   175,   176,   151,   599,   177,   178,   174,
     234,   175,   176,   152,   384,   177,   178,   599,   336,   337,
     338,   339,   346,     4,     5,     6,   155,  -401,  -401,  -401,
    -401,   347,  -401,  -401,  -401,   785,   768,   556,  -401,  -401,
    -401,  -401,  -401,    16,  -401,   312,   156,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,   157,    16,  -401,   315,   158,
     811,   348,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,   159,  -401,   599,  -401,  -401,   349,  -401,  -401,  -401,
    -401,  -401,  -401,   346,    16,    16,   458,   462,  -407,  -407,
    -407,  -407,    60,  -407,  -407,  -407,    99,   374,   171,  -407,
    -407,  -407,  -407,  -407,    16,  -407,   466,   192,  -407,  -407,
    -407,  -407,  -407,  -407,  -407,  -407,    60,    16,  -407,   470,
     101,   378,  -407,  -407,  -407,  -407,  -407,  -407,  -407,  -407,
    -407,  -407,  -407,  -407,  -407,  -407,  -407,  -407,  -407,  -407,
    -407,  -407,    16,  -407,   473,  -407,  -407,   349,  -407,  -407,
    -407,  -407,  -407,  -407,   346,    16,    16,   475,   477,  -401,
    -401,  -401,  -401,   347,    16,  -401,   481,    16,   441,   484,
      16,  -401,   486,  -401,  -401,    16,  -401,   620,    16,  -401,
     622,  -401,  -401,  -401,  -401,  -401,  -401,    60,    16,  -401,
     625,   137,   449,   442,    87,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,    16,  -401,   627,  -401,  -401,   349,  -401,
    -401,  -401,  -401,  -401,  -401,   385,     4,     5,     6,   204,
    -399,  -399,   293,   386,  -399,    16,  -399,   630,    16,  -399,
     636,   294,  -399,   295,  -399,  -399,   296,  -399,   483,    41,
    -399,   297,  -399,  -399,  -399,  -399,  -399,  -399,    60,   298,
    -399,   299,   139,   454,  -399,    95,  -399,  -399,  -399,  -399,
    -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,
    -399,  -399,  -399,  -399,   300,   388,   304,  -399,  -399,  -399,
    -399,  -399,  -399,  -399,  -399,  -399,   346,     4,     5,     6,
     310,  -407,  -407,  -407,  -407,   143,   518,  -407,   152,   530,
     715,   642,   643,  -407,   307,  -407,  -407,   308,  -407,   541,
     428,  -407,   326,  -407,  -407,  -407,  -407,  -407,  -407,   581,
     582,  -407,   585,   436,   309,  -407,   314,  -407,  -407,  -407,
    -407,  -407,  -407,  -407,  -407,  -407,  -407,  -407,  -407,  -407,
    -407,  -407,  -407,  -407,  -407,   317,   716,   318,  -407,  -407,
     349,  -407,  -407,  -407,  -407,  -407,  -407,   211,   619,    41,
     624,    41,   212,   126,   327,   -85,   629,    41,   214,   632,
      41,   633,    41,   330,   215,   362,   216,   217,   331,   218,
     634,    41,   219,   418,   220,   332,   221,   222,   223,   224,
     635,    41,   225,   638,    41,   373,   226,   419,   227,   228,
     229,   333,   334,   335,   336,   337,   338,   339,   340,   230,
     231,   232,   341,   342,   343,   344,   420,   -85,   421,   233,
     174,   234,   175,   176,   235,   236,   177,   178,   211,   639,
      41,   640,    41,   382,   126,   383,   109,   428,   213,   214,
      23,   110,   734,    41,  -243,   215,  -243,   216,   217,   434,
     218,    87,   357,   219,   435,   220,   445,   221,   222,   223,
     224,   735,    41,   225,   736,    41,   460,   226,  -353,   227,
     228,   229,     4,     5,     6,   737,    41,   738,    41,   461,
     230,   231,   232,     4,     5,     6,   739,    41,   111,   112,
     233,   174,   234,   175,   176,   235,   236,   177,   178,   588,
     768,   556,   795,   796,  -236,  -236,   440,   115,   464,  -236,
    -236,    27,   116,  -408,   809,   589,  -236,   590,  -236,  -236,
    -357,  -236,    95,   370,  -236,  -354,  -236,   465,  -236,  -236,
    -236,  -236,  -408,   831,  -236,   642,   801,   468,  -236,   479,
    -236,  -236,  -236,     4,     5,     6,  -408,   832,  -408,   834,
     496,  -236,  -236,  -236,     4,     5,     6,  -408,   678,   117,
     118,  -236,  -236,  -236,  -236,  -236,  -236,  -236,  -236,  -236,
     788,   504,   513,   517,   529,  -242,  -242,   550,   586,   560,
    -242,  -242,     2,     3,   566,   567,  -242,  -242,   590,  -242,
    -242,   436,  -242,   568,   578,  -242,   579,  -242,   580,  -242,
    -242,  -242,  -242,   593,   595,  -242,   604,   641,   648,  -242,
     650,  -242,  -242,  -242,     4,     5,     6,   651,   657,   653,
     664,   671,  -242,  -242,  -242,  -408,   685,   409,   722,   725,
       7,     8,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,
    -242,   211,   556,   726,   742,   743,   382,   126,   383,    60,
     744,   213,   214,     2,    61,   763,   765,   767,   215,    62,
     216,   217,    63,   218,   773,   774,   219,   775,   220,   790,
     221,   222,   223,   224,   778,   792,   225,   798,   816,   678,
     226,   321,   227,   228,   229,     4,     5,     6,   819,   821,
     822,   823,   824,   230,   231,   232,   825,   826,   827,  -408,
     835,    64,    65,   233,   174,   234,   175,   176,   235,   236,
     177,   178,  -408,   836,   837,    32,    83,  -408,  -408,   383,
      73,   747,  -408,  -408,     2,    61,   789,   427,    75,  -408,
      74,  -408,  -408,    63,  -408,   279,   594,  -408,   706,  -408,
     680,  -408,  -408,  -408,  -408,     0,     0,  -408,     0,     0,
       0,  -408,     0,  -408,  -408,  -408,     4,     5,     6,     0,
       0,     0,     0,     0,  -408,  -408,  -408,     0,     0,     0,
       0,     0,    64,    65,  -408,  -408,  -408,  -408,  -408,  -408,
    -408,  -408,  -408,   211,     0,     0,     0,     0,   212,   126,
       0,     0,     0,   213,   214,     0,     0,     0,     0,     0,
     215,     0,   216,   217,     0,   218,     0,     0,   219,     0,
     220,     0,   221,   222,   223,   224,     0,     0,   225,     0,
       0,     0,   226,     0,   227,   228,   229,    31,     1,     2,
       3,     0,     0,     0,     0,   230,   231,   232,     0,     0,
       0,     0,     0,     0,     0,   233,   174,   234,   175,   176,
     235,   236,   177,   178,   277,     0,     0,     0,     0,   212,
     126,     4,     5,     6,   278,   214,     0,     0,     0,     0,
       0,   215,     0,   216,   217,     0,   218,     7,     8,   219,
       0,   220,     0,   221,   222,   223,   224,     0,     0,   225,
       0,     0,     0,   226,     0,   227,   228,   229,     0,     1,
       2,     3,     0,     0,     0,     0,   230,   231,   232,     0,
       0,     0,     0,     0,     0,     0,   233,   174,   234,   175,
     176,   235,   236,   177,   178,   211,     0,     0,     0,     0,
     212,   126,     4,     5,     6,   429,   214,     0,     0,     0,
       0,     0,   215,     0,   216,   217,     0,   218,     7,     8,
     219,     0,   220,     0,   221,   222,   223,   224,     0,     0,
     225,     0,     0,     0,   226,     0,   227,   228,   229,     0,
       0,     0,     0,     0,     0,     0,     0,   230,   231,   232,
       0,     0,     0,     0,     0,     0,     0,   233,   174,   234,
     175,   176,   235,   236,   177,   178,   443,     0,     0,     0,
       0,   212,   126,     0,     0,     0,   444,   214,     0,     0,
       0,     0,     0,   215,     0,   216,   217,     0,   218,     0,
       0,   219,     0,   220,     0,   221,   222,   223,   224,     0,
       0,   225,     0,     0,     0,   226,     0,   227,   228,   229,
       0,     0,     0,     0,     0,     0,     0,     0,   230,   231,
     232,     0,     0,     0,     0,     0,     0,     0,   233,   174,
     234,   175,   176,   235,   236,   177,   178,   211,     0,     0,
       0,     0,   212,   126,     0,     0,     0,     0,   214,     0,
       0,     0,     0,     0,   215,     0,   216,   217,     0,   218,
       0,     0,   219,     0,   220,     0,   221,   222,   223,   224,
       0,     0,   225,     0,     0,     0,   226,     0,   227,   228,
     229,     0,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,     0,     0,     0,     0,     0,     0,     0,   233,
     174,   234,   175,   176,   235,   236,   177,   178,   211,     0,
       0,     0,     0,   718,   126,     0,     0,     0,     0,   214,
       0,     0,     0,     0,     0,   215,     0,   216,   217,     0,
     218,     0,     0,   219,     0,   220,     0,   221,   222,   223,
     224,     0,     0,   225,     0,     0,     0,   226,     0,   227,
     228,   229,     0,     0,     0,     0,     0,     0,     0,     0,
     230,   231,   232,     0,     0,     0,     0,     0,     0,     0,
     233,   174,   234,   175,   176,   235,   236,   177,   178,   723,
       0,     0,     0,     0,   212,   126,     0,     0,     0,     0,
     214,     0,     0,     0,     0,     0,   215,     0,   216,   217,
       0,   218,   172,     0,   219,     0,   220,     0,   221,   222,
     223,   224,   172,     0,   225,     0,     0,     0,   226,     0,
     227,   228,   229,     0,     0,     0,     0,     0,     0,     0,
       0,   230,   231,   232,     0,     0,     0,   413,     0,     0,
       0,   233,   174,   234,   175,   176,   235,   236,   177,   178,
     385,   173,     0,     0,     0,   172,     0,     0,   386,  -399,
     174,   173,   175,   176,  -399,     0,   177,   178,     0,     0,
     174,     0,   175,   176,     0,     0,   177,   178,  -399,     0,
       0,     0,   346,     0,     0,     0,     0,   542,     0,  -399,
       0,     0,     0,   214,  -399,  -399,  -399,  -399,  -399,  -399,
    -399,  -399,     0,     0,   173,  -399,  -399,  -399,  -399,     0,
     388,     0,     0,   174,  -399,   175,   176,   346,     0,   177,
     178,   226,   401,   227,     0,   229,   346,     0,   214,     0,
       0,   547,     0,     0,     0,     0,   173,   214,     0,   543,
       0,     0,     0,     0,     0,   174,   234,   175,   176,     0,
       0,   177,   178,     0,     0,     0,   226,     0,   227,   346,
     229,     0,     0,     0,   596,   226,     0,   227,   346,   229,
     214,     0,     0,   684,     0,     0,     0,     0,     0,   214,
     174,   234,   175,   176,     0,     0,   177,   178,     0,   174,
     234,   175,   176,     0,     0,   177,   178,     0,   226,     0,
     227,   346,   229,     0,     0,     0,   696,   226,     0,   227,
     346,   229,   214,     0,     0,   699,     0,     0,     0,     0,
       0,   214,   174,   234,   175,   176,     0,     0,   177,   178,
       0,   174,   234,   175,   176,     0,     0,   177,   178,     0,
     226,     0,   227,   346,   229,     0,     0,     0,   704,   226,
       0,   227,   346,   229,   214,     0,     0,   709,     0,     0,
       0,     0,     0,   214,   174,   234,   175,   176,     0,     0,
     177,   178,     0,   174,   234,   175,   176,     0,     0,   177,
     178,     0,   226,     0,   227,   346,   229,     0,     0,     0,
     717,   226,     0,   227,   346,   229,   214,     0,     0,   761,
       0,     0,     0,     0,     0,   214,   174,   234,   175,   176,
       0,     0,   177,   178,     0,   174,   234,   175,   176,     0,
       0,   177,   178,     0,   226,     0,   227,   346,   229,     0,
       0,     0,   810,   226,     0,   227,     0,   229,   214,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   174,   234,
     175,   176,     0,     0,   177,   178,     0,   174,   234,   175,
     176,   654,     0,   177,   178,     0,   226,     0,   227,     0,
     229,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   332,     0,   776,     0,     0,     0,     0,
     174,   234,   175,   176,     0,   655,   177,   178,     0,   333,
     334,   335,   336,   337,   338,   339,   340,   332,     0,   779,
     341,   342,   343,   344,     0,     0,     0,     0,     0,   777,
       0,     0,     0,   333,   334,   335,   336,   337,   338,   339,
     340,   332,     0,   553,   341,   342,   343,   344,     0,     0,
       0,     0,     0,   780,     0,     0,     0,   333,   334,   335,
     336,   337,   338,   339,   340,   332,     0,     0,   341,   342,
     343,   344,     0,     0,     0,     0,   562,     0,     0,     0,
       0,   333,   334,   335,   336,   337,   338,   339,   340,     0,
       0,   569,   341,   342,   343,   344,   332,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   332,   333,   334,   335,   336,   337,   338,   339,   340,
       0,     0,   673,   341,   342,   343,   344,   333,   334,   335,
     336,   337,   338,   339,   340,     0,     0,     0,   341,   342,
     343,   344,   332,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   561,     0,   332,   333,   334,
     335,   336,   337,   338,   339,   340,     0,     0,     0,   341,
     342,   343,   344,   333,   334,   335,   336,   337,   338,   339,
     340,   332,     0,     0,   341,   342,   343,   344,     0,     0,
       0,     0,     0,   804,     0,     0,     0,   333,   334,   335,
     336,   337,   338,   339,   340,   332,     0,     0,   341,   342,
     343,   344,     0,     0,     0,     0,     0,   828,     0,     0,
       0,   333,   334,   335,   336,   337,   338,   339,   340,   332,
       0,     0,   341,   342,   343,   344,     0,     0,     0,     0,
       0,   829,     0,     0,   332,   333,   334,   335,   336,   337,
     338,   339,   340,     0,     0,     0,   341,   342,   343,   344,
     333,   334,   335,   336,   337,   338,   339,   340,     0,     0,
       0,   341,   342,   343,   344
};

static const short int yycheck[] =
{
     106,   325,   320,   386,     1,     1,   182,     6,   386,   327,
     218,     9,   217,   325,   441,   327,   221,    63,   223,   437,
       1,   226,     9,   441,    24,     1,     6,     7,     9,   234,
       6,   239,   125,   126,   242,     1,   244,     1,   246,    15,
       6,   125,   126,     1,     9,     8,     9,    11,     1,    15,
      14,   437,     1,    40,     5,   441,     1,    15,   436,     1,
      60,    41,    15,    61,    61,    61,    15,     1,     1,    71,
      15,   279,     1,    15,     1,    55,   122,    42,     1,     1,
      61,    15,    15,     1,    64,   191,    66,    67,    15,    65,
      70,    71,    15,    15,   418,   201,     8,     9,    16,    65,
     276,     1,    53,    54,     9,    10,     1,    65,   214,   215,
     216,   113,    65,   219,   220,    15,    65,   119,   211,   225,
      65,    16,     9,    65,   217,   218,     9,   211,   221,   131,
     223,    65,    65,   226,   218,    40,    65,     9,    65,    22,
       1,   234,    65,    65,    16,     6,   239,     8,     1,   242,
       1,   244,    54,   246,    41,   239,     9,     9,   242,     1,
     244,     9,   246,    65,     6,    65,     8,     1,   554,    41,
      12,   557,   558,   559,    22,   281,     1,   555,     1,     9,
     385,    15,     5,   561,   277,   563,   279,     5,   566,    41,
      15,    10,   570,   277,    55,   279,     5,   199,    40,     5,
      42,    43,    44,    64,   582,    66,    67,   209,     0,    70,
      71,    41,     1,    55,    37,    38,    39,     6,     9,    37,
      38,    39,    64,    65,    66,    67,   332,     1,    70,    71,
      53,    65,    54,     7,   340,   341,   342,   343,   344,   345,
      65,     1,   348,    65,    53,    54,     6,    53,    54,   676,
      41,    53,    12,     9,     6,     7,   362,     1,   676,   365,
       1,   437,     6,    65,     1,   441,    55,   373,     5,     6,
      65,   377,     5,    53,    15,    64,   382,    66,    67,   385,
      40,    70,    71,   285,   670,    41,   672,   289,   715,     6,
     676,   674,   385,   386,   677,    55,   674,   715,     9,   726,
      37,    38,    39,    55,    64,    65,    66,    67,   726,     5,
      70,    71,    64,     6,    66,    67,    53,    54,    70,    71,
      53,    54,   428,    16,    65,    44,     8,     9,   504,   715,
      41,   649,   650,     6,    16,     8,   442,   649,   650,     1,
     726,     1,   448,   436,    53,    65,     1,   453,     9,    10,
     443,     6,   211,    15,    15,    15,    65,    53,    54,   443,
       6,    16,   364,   222,   223,   792,   368,   226,   227,   228,
      89,    54,     1,   375,   792,   234,     5,   379,    97,     6,
     588,   589,    55,   769,   592,     6,     6,     8,     8,    16,
     768,    64,   710,    66,    67,   713,    16,    70,    71,    64,
      65,     9,    10,    65,   580,    65,   792,    72,    37,    38,
      39,   517,     9,    10,    22,   134,   522,     6,   277,     8,
     744,   527,   805,   529,   807,    54,   532,   146,     1,   148,
     536,     6,     6,     6,     8,    55,   155,     1,   157,    12,
       6,    16,    16,     7,    41,   551,     1,   553,   450,   114,
      16,     6,     6,   455,    11,   120,   562,    14,   564,   565,
       6,    16,   555,   569,   129,   130,     6,    40,   561,    42,
     563,    44,     6,   566,     8,     1,    16,   570,     6,     5,
       6,    55,    16,     6,   590,   693,    40,   346,    16,   582,
     349,    64,    65,    66,    67,   588,   589,    70,    71,   592,
     676,    55,     1,     1,   588,   589,   612,     5,   592,     8,
      64,   617,    66,    67,   722,     1,    70,    71,   520,     9,
       6,    55,     8,     1,   526,    15,   385,    53,    54,   194,
      16,     9,   534,   198,     8,     9,   642,   539,   203,   715,
       9,     1,   207,     6,    22,     5,     6,    16,   654,     6,
     726,   657,     1,     1,   660,     0,     5,     6,   664,   418,
       8,     9,   668,   422,   772,    10,    11,   673,    16,    55,
       1,     1,     8,     9,   293,     6,     6,   296,   437,     5,
     299,   674,   441,   442,   443,   304,    16,   693,   307,   308,
     309,     1,     1,    53,    54,   314,     6,     6,   317,   318,
     693,     8,     9,    12,    53,    54,    16,     1,   610,   693,
       5,     6,   718,   615,     8,     9,   792,     8,     9,   284,
       6,     1,   728,   288,     1,   731,     6,    13,     5,   722,
     723,    40,     1,    42,     6,    44,   742,     6,   722,   723,
       0,     5,    37,    38,    39,     1,    55,     7,     8,    58,
      10,    11,     5,     9,    10,    64,    65,    66,    67,     8,
       9,    70,    71,     6,    24,     8,    22,    16,    28,    55,
     776,     1,     6,   779,     6,   768,     6,    65,    64,   772,
      66,    67,    16,     9,    70,    71,    46,    13,   772,   795,
     692,     5,   798,    53,     6,   554,   361,     5,   557,   558,
     559,   366,     1,     5,    64,    65,     5,     6,   567,     1,
     816,   376,     9,   819,    65,   380,     8,     9,    15,    16,
       1,    55,    37,    38,    39,     6,     1,     8,     9,    10,
      64,     6,    66,    67,    15,     1,    70,    71,    65,   598,
       6,   460,   461,     8,     9,   464,   465,     5,    29,   468,
       9,    10,   112,     6,    53,    54,    15,   117,     5,    40,
     479,     6,     7,     6,    45,    46,    47,    48,    49,    50,
      51,    52,     5,     6,    55,    56,    57,    58,    59,     6,
      61,     8,   447,    64,    65,    66,    67,   452,     5,    70,
      71,     9,    10,     6,     7,     1,     1,    15,     1,     5,
       6,     6,     5,     6,    37,    38,    39,    12,     8,     9,
      55,   670,   671,   672,   103,     8,     9,   676,   107,    64,
       5,    66,    67,     1,     6,    70,    71,     5,     6,   189,
      65,     6,   192,     8,     5,    40,    41,    42,     6,    44,
     200,     5,    55,     6,   204,     8,    65,    53,    54,     6,
      55,    64,     6,    66,    67,     6,   715,    70,    71,    64,
      65,    66,    67,     5,   723,    70,    71,   726,    48,    49,
      50,    51,     1,    37,    38,    39,    65,     6,     7,     8,
       9,    10,    11,    12,    13,     8,     9,    10,    17,    18,
      19,    20,    21,     6,    23,     8,     6,    26,    27,    28,
      29,    30,    31,    32,    33,    65,     6,    36,     8,     6,
     769,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,     6,    61,   792,    63,    64,    65,    66,    67,    68,
      69,    70,    71,     1,     6,     6,     8,     8,     6,     7,
       8,     9,     1,    11,    12,    13,     5,     6,     1,    17,
      18,    19,    20,    21,     6,    23,     8,     1,    26,    27,
      28,    29,    30,    31,    32,    33,     1,     6,    36,     8,
       5,     6,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,     6,    61,     8,    63,    64,    65,    66,    67,
      68,    69,    70,    71,     1,     6,     6,     8,     8,     6,
       7,     8,     9,    10,     6,    12,     8,     6,    15,     8,
       6,    18,     8,    20,    21,     6,    23,     8,     6,    26,
       8,    28,    29,    30,    31,    32,    33,     1,     6,    36,
       8,     5,     6,    40,     5,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,     6,    61,     8,    63,    64,    65,    66,
      67,    68,    69,    70,    71,     1,    37,    38,    39,     1,
       6,     7,    65,     9,    10,     6,    12,     8,     6,    15,
       8,     6,    18,     6,    20,    21,    65,    23,     8,     9,
      26,     6,    28,    29,    30,    31,    32,    33,     1,     6,
      36,    65,     5,     6,    40,     5,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,     6,    61,    65,    63,    64,    65,
      66,    67,    68,    69,    70,    71,     1,    37,    38,    39,
       6,     6,     7,     8,     9,     5,     6,    12,     5,     6,
      15,    15,    16,    18,    65,    20,    21,    65,    23,     8,
       9,    26,     8,    28,    29,    30,    31,    32,    33,     8,
       9,    36,     8,     9,    65,    40,    65,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    65,    61,    65,    63,    64,
      65,    66,    67,    68,    69,    70,    71,     1,     8,     9,
       8,     9,     6,     7,     9,     9,     8,     9,    12,     8,
       9,     8,     9,     8,    18,    15,    20,    21,    10,    23,
       8,     9,    26,    40,    28,    29,    30,    31,    32,    33,
       8,     9,    36,     8,     9,    15,    40,     6,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,     6,    61,    10,    63,
      64,    65,    66,    67,    68,    69,    70,    71,     1,     8,
       9,     8,     9,     6,     7,     8,     1,     9,    11,    12,
       5,     6,     8,     9,    17,    18,    19,    20,    21,     9,
      23,     5,     6,    26,    10,    28,     1,    30,    31,    32,
      33,     8,     9,    36,     8,     9,    65,    40,    10,    42,
      43,    44,    37,    38,    39,     8,     9,     8,     9,    65,
      53,    54,    55,    37,    38,    39,     8,     9,    53,    54,
      63,    64,    65,    66,    67,    68,    69,    70,    71,     1,
       9,    10,    15,    16,     6,     7,    10,     1,    65,    11,
      12,     5,     6,     9,    10,    17,    18,    19,    20,    21,
      10,    23,     5,     6,    26,    10,    28,    65,    30,    31,
      32,    33,     9,    10,    36,    15,    16,    65,    40,    65,
      42,    43,    44,    37,    38,    39,     9,    10,     9,    10,
       6,    53,    54,    55,    37,    38,    39,     9,    10,    53,
      54,    63,    64,    65,    66,    67,    68,    69,    70,    71,
       1,     6,     6,    15,    15,     6,     7,     6,     8,     7,
      11,    12,     5,     6,     9,    58,    17,    18,    19,    20,
      21,     9,    23,     9,    61,    26,    61,    28,     6,    30,
      31,    32,    33,     6,     6,    36,     6,    55,     1,    40,
       9,    42,    43,    44,    37,    38,    39,    55,    15,    41,
      15,    58,    53,    54,    55,     9,     6,     6,    17,    10,
      53,    54,    63,    64,    65,    66,    67,    68,    69,    70,
      71,     1,    10,    15,    15,     6,     6,     7,     8,     1,
       9,    11,    12,     5,     6,     6,     6,     6,    18,    11,
      20,    21,    14,    23,    11,    11,    26,    41,    28,     6,
      30,    31,    32,    33,    41,    15,    36,    15,     6,    10,
      40,    16,    42,    43,    44,    37,    38,    39,    15,     1,
       6,     6,     6,    53,    54,    55,     6,     6,     6,    61,
       6,    53,    54,    63,    64,    65,    66,    67,    68,    69,
      70,    71,     1,     6,     6,    10,    41,     6,     7,     8,
       1,   647,    11,    12,     5,     6,   724,   234,    35,    18,
      11,    20,    21,    14,    23,   126,   434,    26,   568,    28,
     551,    30,    31,    32,    33,    -1,    -1,    36,    -1,    -1,
      -1,    40,    -1,    42,    43,    44,    37,    38,    39,    -1,
      -1,    -1,    -1,    -1,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    53,    54,    63,    64,    65,    66,    67,    68,
      69,    70,    71,     1,    -1,    -1,    -1,    -1,     6,     7,
      -1,    -1,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,
      18,    -1,    20,    21,    -1,    23,    -1,    -1,    26,    -1,
      28,    -1,    30,    31,    32,    33,    -1,    -1,    36,    -1,
      -1,    -1,    40,    -1,    42,    43,    44,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    71,     1,    -1,    -1,    -1,    -1,     6,
       7,    37,    38,    39,    11,    12,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    20,    21,    -1,    23,    53,    54,    26,
      -1,    28,    -1,    30,    31,    32,    33,    -1,    -1,    36,
      -1,    -1,    -1,    40,    -1,    42,    43,    44,    -1,     4,
       5,     6,    -1,    -1,    -1,    -1,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    71,     1,    -1,    -1,    -1,    -1,
       6,     7,    37,    38,    39,    11,    12,    -1,    -1,    -1,
      -1,    -1,    18,    -1,    20,    21,    -1,    23,    53,    54,
      26,    -1,    28,    -1,    30,    31,    32,    33,    -1,    -1,
      36,    -1,    -1,    -1,    40,    -1,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    71,     1,    -1,    -1,    -1,
      -1,     6,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,
      -1,    -1,    -1,    18,    -1,    20,    21,    -1,    23,    -1,
      -1,    26,    -1,    28,    -1,    30,    31,    32,    33,    -1,
      -1,    36,    -1,    -1,    -1,    40,    -1,    42,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    67,    68,    69,    70,    71,     1,    -1,    -1,
      -1,    -1,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    20,    21,    -1,    23,
      -1,    -1,    26,    -1,    28,    -1,    30,    31,    32,    33,
      -1,    -1,    36,    -1,    -1,    -1,    40,    -1,    42,    43,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    71,     1,    -1,
      -1,    -1,    -1,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    18,    -1,    20,    21,    -1,
      23,    -1,    -1,    26,    -1,    28,    -1,    30,    31,    32,
      33,    -1,    -1,    36,    -1,    -1,    -1,    40,    -1,    42,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,    65,    66,    67,    68,    69,    70,    71,     1,
      -1,    -1,    -1,    -1,     6,     7,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    18,    -1,    20,    21,
      -1,    23,     6,    -1,    26,    -1,    28,    -1,    30,    31,
      32,    33,     6,    -1,    36,    -1,    -1,    -1,    40,    -1,
      42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    54,    55,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    68,    69,    70,    71,
       1,    55,    -1,    -1,    -1,     6,    -1,    -1,     9,    10,
      64,    55,    66,    67,    15,    -1,    70,    71,    -1,    -1,
      64,    -1,    66,    67,    -1,    -1,    70,    71,    29,    -1,
      -1,    -1,     1,    -1,    -1,    -1,    -1,     6,    -1,    40,
      -1,    -1,    -1,    12,    45,    46,    47,    48,    49,    50,
      51,    52,    -1,    -1,    55,    56,    57,    58,    59,    -1,
      61,    -1,    -1,    64,    65,    66,    67,     1,    -1,    70,
      71,    40,     6,    42,    -1,    44,     1,    -1,    12,    -1,
      -1,     6,    -1,    -1,    -1,    -1,    55,    12,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    -1,
      -1,    70,    71,    -1,    -1,    -1,    40,    -1,    42,     1,
      44,    -1,    -1,    -1,     6,    40,    -1,    42,     1,    44,
      12,    -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,    12,
      64,    65,    66,    67,    -1,    -1,    70,    71,    -1,    64,
      65,    66,    67,    -1,    -1,    70,    71,    -1,    40,    -1,
      42,     1,    44,    -1,    -1,    -1,     6,    40,    -1,    42,
       1,    44,    12,    -1,    -1,     6,    -1,    -1,    -1,    -1,
      -1,    12,    64,    65,    66,    67,    -1,    -1,    70,    71,
      -1,    64,    65,    66,    67,    -1,    -1,    70,    71,    -1,
      40,    -1,    42,     1,    44,    -1,    -1,    -1,     6,    40,
      -1,    42,     1,    44,    12,    -1,    -1,     6,    -1,    -1,
      -1,    -1,    -1,    12,    64,    65,    66,    67,    -1,    -1,
      70,    71,    -1,    64,    65,    66,    67,    -1,    -1,    70,
      71,    -1,    40,    -1,    42,     1,    44,    -1,    -1,    -1,
       6,    40,    -1,    42,     1,    44,    12,    -1,    -1,     6,
      -1,    -1,    -1,    -1,    -1,    12,    64,    65,    66,    67,
      -1,    -1,    70,    71,    -1,    64,    65,    66,    67,    -1,
      -1,    70,    71,    -1,    40,    -1,    42,     1,    44,    -1,
      -1,    -1,     6,    40,    -1,    42,    -1,    44,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    -1,    -1,    70,    71,    -1,    64,    65,    66,
      67,     7,    -1,    70,    71,    -1,    40,    -1,    42,    -1,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,     7,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    -1,    41,    70,    71,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    29,    -1,     7,
      56,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    29,    -1,     7,    56,    57,    58,    59,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,    51,    52,    29,    -1,    -1,    56,    57,
      58,    59,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    50,    51,    52,    -1,
      -1,     9,    56,    57,    58,    59,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    -1,     9,    56,    57,    58,    59,    45,    46,    47,
      48,    49,    50,    51,    52,    -1,    -1,    -1,    56,    57,
      58,    59,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    29,    45,    46,
      47,    48,    49,    50,    51,    52,    -1,    -1,    -1,    56,
      57,    58,    59,    45,    46,    47,    48,    49,    50,    51,
      52,    29,    -1,    -1,    56,    57,    58,    59,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,    51,    52,    29,    -1,    -1,    56,    57,
      58,    59,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    50,    51,    52,    29,
      -1,    -1,    56,    57,    58,    59,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    29,    45,    46,    47,    48,    49,
      50,    51,    52,    -1,    -1,    -1,    56,    57,    58,    59,
      45,    46,    47,    48,    49,    50,    51,    52,    -1,    -1,
      -1,    56,    57,    58,    59
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     4,     5,     6,    37,    38,    39,    53,    54,    86,
      87,    88,    89,    90,    91,   135,     6,    93,    94,     1,
       6,     1,     1,     5,    54,   135,     1,     5,    53,   135,
       0,     3,    89,    90,     1,     7,    95,     5,    53,    54,
       1,     9,    61,    10,    65,     6,    53,     6,     5,   135,
       5,    53,    54,    54,     6,     5,   135,     5,    53,    54,
       1,     6,    11,    14,    53,    54,    90,    96,    97,    98,
      99,   100,   135,     1,    11,    96,     6,     5,    53,    54,
       5,    53,    54,    94,     6,     8,    93,     5,   135,    65,
       6,     5,     6,     5,     5,     5,   135,    65,     6,     5,
       6,     5,     5,    65,     1,     6,    15,    65,    97,     1,
       6,    53,    54,   100,   135,     1,     6,    53,    54,   100,
     135,    11,    14,     1,    61,     1,     7,   106,     6,    53,
      54,   100,     1,    11,    65,     6,     5,     5,     6,     5,
       5,     8,     6,     5,     8,    93,    65,     6,    65,     6,
       6,     6,     5,     8,    93,    65,     6,    65,     6,     6,
       6,     8,    16,    55,   101,   102,   103,     6,     8,    55,
     101,     1,     6,    55,    64,    66,    67,    70,    71,   140,
     152,   153,   154,   155,     1,     6,     8,    55,   101,    53,
       1,    15,     1,     6,   135,   106,     6,    53,    54,   100,
      54,    15,     6,   135,     1,   106,     6,    53,    54,   100,
      97,     1,     6,    11,    12,    18,    20,    21,    23,    26,
      28,    30,    31,    32,    33,    36,    40,    42,    43,    44,
      53,    54,    55,    63,    65,    68,    69,    92,   106,   107,
     108,   109,   111,   113,   114,   115,   116,   117,   118,   119,
     120,   123,   124,   125,   127,   128,   129,   130,   131,   132,
     134,   136,   137,   138,   139,   140,   141,   142,   145,   146,
     147,   148,   149,   150,   151,   152,   154,     1,    11,   107,
       6,    15,     1,     6,    54,   100,     1,     6,    53,   100,
     106,     8,    93,    65,     6,     6,    65,     6,     6,    65,
       6,     8,     8,    93,    65,     8,    93,    65,    65,    65,
       6,     8,     8,    93,    65,     8,    93,    65,    65,     8,
       9,    16,     6,    16,     8,     9,     8,     9,     8,     8,
       8,    10,    29,    45,    46,    47,    48,    49,    50,    51,
      52,    56,    57,    58,    59,   156,     1,    10,    40,    65,
     145,     1,     8,     1,     8,     1,     8,     6,   135,     6,
     152,   135,    15,     6,   100,    15,     1,     6,   100,   106,
       6,   135,   152,    15,     6,   100,   135,    15,     6,   100,
       1,   106,     6,     8,    92,     1,     9,    10,    61,    13,
     143,   144,   152,   152,   152,     6,   119,   140,   108,   152,
     152,     6,   119,    92,     6,    58,    92,   119,     1,     6,
     133,   152,     6,    41,    92,   119,    92,    92,    40,     6,
       6,    10,     1,     6,     8,    92,   119,   149,     9,    11,
     108,   108,   108,   108,     9,    10,     9,    15,     1,    61,
      10,    15,    40,     1,    11,     1,   152,    53,    15,     6,
     100,   106,    54,    15,     6,   100,   106,     8,     8,    93,
      65,    65,     8,    93,    65,    65,     8,    93,    65,     8,
       8,    93,     8,     8,    93,     8,    93,     8,    93,    65,
       8,     8,    93,     8,     8,    93,     8,    93,     1,     6,
      16,   103,   104,   105,     1,    16,     6,     6,   102,   104,
       1,     6,   103,   104,     6,   152,   152,   152,   152,   152,
     152,   152,    92,     6,     7,   152,     1,    15,     6,     6,
     100,   152,    15,   106,   152,     6,   100,    15,   106,    15,
       6,   152,    15,   106,   100,   152,    15,   106,     6,   100,
     152,     8,     6,    58,    92,   119,   152,     6,   117,   136,
       6,     9,    13,     7,     1,     9,    10,    22,     1,    22,
       7,    27,     9,     9,    40,    40,     9,    58,     9,     9,
       9,    41,    41,    41,    42,     6,    92,   102,    61,    61,
       6,     8,     9,     1,     8,     8,     8,   152,     1,    17,
      19,   110,   112,     6,   118,     6,     6,   136,    40,    92,
     126,   142,   145,   146,     6,   126,    41,    92,   152,     6,
     100,   152,    15,   106,     6,   100,   152,    15,   106,     8,
       8,    93,     8,    93,     8,     8,    93,     8,    93,     8,
       8,    93,     8,     8,     8,     8,     8,    93,     8,     8,
       8,    55,    15,    16,     6,    16,     1,     9,     1,     9,
       9,    55,   145,    41,     7,    41,   152,    15,   106,   152,
      15,   106,   152,   152,    15,   152,   106,   152,    15,   106,
      22,    58,    22,     9,     9,    10,    15,     9,    10,    61,
     144,   152,    92,   146,     6,     6,    92,   146,    92,   146,
      92,   146,    24,    60,   121,   122,     6,   136,   152,     6,
       7,   152,     7,   152,     6,    92,   133,     1,   152,     6,
       9,    41,    41,     9,    41,    15,    61,     6,     6,   108,
     108,   152,    17,     1,   108,    10,    15,    41,    15,   106,
     152,    15,   106,   152,     8,     8,     8,     8,     8,     8,
     152,     1,    15,     6,     9,     6,    16,   105,   104,   104,
     152,   152,   152,   152,   152,    92,   146,    92,    92,   146,
     152,     6,   136,     6,   126,     6,   117,     6,     9,    22,
     106,   108,   152,    11,    11,    41,     7,    41,    41,     7,
      41,    41,     6,     6,   126,     8,   152,   108,     1,   110,
       6,   126,    15,   152,   152,    15,    16,   152,    15,     6,
     102,    16,     6,    16,    41,     9,    10,     9,    10,    10,
       6,    92,   146,   108,   152,   152,     6,   126,   152,    15,
     152,     1,     6,     6,     6,     6,     6,     6,    41,    41,
     152,    10,    10,    61,    10,     6,     6,     6,    61
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
#line 107 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() <<"programes: program END_OF_FILE\n";
						p->check_inhertance_list();
						if(!p->errRecovery->errQ->isEmpty())
								p->errRecovery->printErrQueue();
						p->print_symbol();
						Streams::verbose().flush();						
						;}
    break;

  case 3:
#line 115 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {	Streams::verbose() <<"prgram : program unit\n";
						Streams::verbose().flush();						
					;}
    break;

  case 4:
#line 118 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
							
								Streams::verbose()<<"program: unit\n";
								Streams::verbose().flush();						
							;}
    break;

  case 5:
#line 126 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_stmt : IMPORT unit_list SEMICOLON \n";;}
    break;

  case 6:
#line 127 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
							Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum<<endl;
							err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum,"Expected ';' ","");
									  ;}
    break;

  case 7:
#line 132 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"unit: import_stmt class_decl\n";;}
    break;

  case 8:
#line 133 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"unit: class_decl\n";;}
    break;

  case 9:
#line 136 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"class_decl: class_h class_body\n"; ;}
    break;

  case 10:
#line 139 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[0].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
					;}
    break;

  case 11:
#line 144 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 12:
#line 150 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 13:
#line 156 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 14:
#line 162 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 15:
#line 168 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 16:
#line 174 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[0].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 17:
#line 181 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[0].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 18:
#line 188 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 19:
#line 194 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 20:
#line 200 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 21:
#line 206 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 22:
#line 212 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 23:
#line 219 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 24:
#line 226 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 25:
#line 232 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
							(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 26:
#line 238 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
							(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 27:
#line 244 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL STATIC CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 28:
#line 250 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 258 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 266 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 31:
#line 272 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 280 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 288 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[0].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								temp_id="";
										acc_mod="";
								;}
    break;

  case 34:
#line 295 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-1].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 35:
#line 301 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-1].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 36:
#line 307 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-1].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 37:
#line 313 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 38:
#line 319 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 39:
#line 325 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");
								;}
    break;

  case 40:
#line 328 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");
								;}
    break;

  case 41:
#line 331 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 42:
#line 337 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 43:
#line 343 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 44:
#line 349 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 45:
#line 355 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-6].r.colNum)-strlength((yyvsp[-6].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-6].r.colNum)-strlen((yyvsp[-6].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 46:
#line 362 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-6].r.colNum)-strlength((yyvsp[-6].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-6].r.colNum)-strlen((yyvsp[-6].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 47:
#line 369 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 48:
#line 375 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 49:
#line 381 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 50:
#line 387 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 51:
#line 393 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 401 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 409 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 54:
#line 415 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL access_modef STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 55:
#line 421 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 429 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 437 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[0].r.colNum)+1));
												(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
												acc_mod="";
											;}
    break;

  case 58:
#line 443 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-1].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 59:
#line 449 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-1].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 60:
#line 455 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-1].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 61:
#line 461 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 62:
#line 467 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 63:
#line 473 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-6].r.colNum)-strlength((yyvsp[-6].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-6].r.colNum)-strlen((yyvsp[-6].r.strVal)),"repeated modifier ","");
								;}
    break;

  case 64:
#line 476 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-6].r.colNum)-strlength((yyvsp[-6].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-6].r.colNum)-strlen((yyvsp[-6].r.strVal)),"repeated modifier ","");
								;}
    break;

  case 65:
#line 479 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 66:
#line 485 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 67:
#line 491 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 68:
#line 497 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 69:
#line 503 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-7].r.colNum)-strlength((yyvsp[-7].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-8].r.lineNum),(yyvsp[-7].r.colNum)-strlen((yyvsp[-7].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[-7].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 70:
#line 510 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-7].r.colNum)-strlength((yyvsp[-7].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-8].r.lineNum),(yyvsp[-7].r.colNum)-strlen((yyvsp[-7].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[-7].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 71:
#line 517 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 72:
#line 523 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 73:
#line 529 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 74:
#line 535 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 75:
#line 541 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 549 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 558 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL access_modef STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 78:
#line 564 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 79:
#line 570 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 578 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 586 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {							
									colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected class name at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected class name","");
		;}
    break;

  case 82:
#line 591 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected Reserved word at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected Reserved word","");
							 ;}
    break;

  case 83:
#line 596 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected Reserved word at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected Reserved word","");
						 ;}
    break;

  case 84:
#line 603 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"expr_list: expr_list COMMA expr\n";;}
    break;

  case 85:
#line 604 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"expr_list: expr %prec stmt_1\n";;}
    break;

  case 86:
#line 607 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												t_id=new char[10];
												strcpy(t_id,temp_id.c_str());
												inhertance_list.push_back(t_id);	
												Streams::verbose()<<"unit_list:	unit_list COMMA unit_import\n";
												temp_id="";
												;}
    break;

  case 87:
#line 614 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {	
								t_id=new char[10];
								strcpy(t_id,temp_id.c_str());
								inhertance_list.push_back(t_id);
								Streams::verbose()<<"unit_list:	unit_import\n";
								temp_id="";
							;}
    break;

  case 88:
#line 623 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									temp_id=temp_id+"."+(yyvsp[0].r.strVal);
									Streams::verbose()<<"unit_import: unit_import DOT ID\n";
								;}
    break;

  case 89:
#line 627 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
					temp_id=temp_id+(yyvsp[0].r.strVal);
					Streams::verbose()<<"unit_import: ID\n";

				;}
    break;

  case 90:
#line 635 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"class_body:COLON END	\n";colonStack.pop();
								(yyval.type)=p->finishTypeDeclaration(t);
							;}
    break;

  case 91:
#line 639 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"class_body:COLON dm_list END\n";colonStack.pop();
										(yyval.type)=p->finishTypeDeclaration(t);
									;}
    break;

  case 92:
#line 642 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
					ColonStack* temp = colonStack.top();
					colonStack.pop();
					Streams::verbose()<<"Error: Expected ':' at Line No:"<<temp->lineNum<<" Column No:"<<temp->colNum<<endl;
					err->errQ->enqueue(temp->lineNum,temp->colNum,"Expected ':' ","");
				  ;}
    break;

  case 93:
#line 648 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
					ColonStack* temp = colonStack.top();
					colonStack.pop();
					Streams::verbose()<<"Error: Expected ':' at Line No:"<<temp->lineNum<<" Column No:"<<temp->colNum<<endl;
						(yyval.type)=p->finishTypeDeclaration(t);
					err->errQ->enqueue(temp->lineNum,temp->colNum,"Expected ':' ","");
				  ;}
    break;

  case 94:
#line 655 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {					
					colonStack.pop();
					Streams::verbose()<<"Error: Expected 'end' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum<<endl;
					(yyval.type)=p->finishTypeDeclaration(t);
					err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum," Expected 'end' ","");									
				  ;}
    break;

  case 95:
#line 661 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
					colonStack.pop();
					Streams::verbose()<<"Error: Expected 'end' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum<<endl;
					(yyval.type)=p->finishTypeDeclaration(t);
					err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum," Expected 'end' ","");									
				  ;}
    break;

  case 96:
#line 669 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dm_list: dm_list DEF dm\n";;}
    break;

  case 97:
#line 670 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dm_list: DEF dm\n";;}
    break;

  case 98:
#line 671 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
						Streams::verbose()<<"Error: Expected 'def' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum<<endl;
						err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum," Expected 'def' ","");									
						;}
    break;

  case 99:
#line 677 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dm:	var_declaration SEMICOLON\n";;}
    break;

  case 100:
#line 678 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dm:	method_declaration\n";;}
    break;

  case 101:
#line 679 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dm:	class_decl\n";;}
    break;

  case 102:
#line 680 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
							Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
							err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"Expected ';' ","");
						   ;}
    break;

  case 103:
#line 686 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"var_declaration: access_modef ID\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false,false);
									v=(yyval.var);
									acc_mod="";
									;}
    break;

  case 104:
#line 692 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"var_declaration: STATIC ID\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false,false);
									v=(yyval.var);
							;}
    break;

  case 105:
#line 697 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"var_declaration: FINAL ID\n";
								(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
									v=(yyval.var);
								;}
    break;

  case 106:
#line 702 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"var_declaration: STATIC FINAL ID\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[-1].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
									v=(yyval.var);
									;}
    break;

  case 107:
#line 707 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"var_declaration: FINAL STATIC ID\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[-1].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
									v=(yyval.var);
									;}
    break;

  case 108:
#line 712 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 109:
#line 716 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 110:
#line 720 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: ID\n";
										(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,0,0);
										v=(yyval.var);
									;}
    break;

  case 111:
#line 724 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"var_declaration: FINAL access_modef ID\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=(yyval.var);
													acc_mod="";
											;}
    break;

  case 112:
#line 730 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"var_declaration: STATIC access_modef ID\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=(yyval.var);
													acc_mod="";
											;}
    break;

  case 113:
#line 736 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: access_modef ID ASSIGN expr\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,is_list,is_dic);
													v=(yyval.var);
													acc_mod="";
													;}
    break;

  case 114:
#line 741 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: STATIC ID ASSIGN expr\n";
											(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,is_list,is_dic);
											v=(yyval.var);
											is_dic=false;
											is_list=false;
										;}
    break;

  case 115:
#line 747 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: FINAL ID ASSIGN expr\n";
											(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,is_list,is_dic);
													v=(yyval.var);
													is_list=false;
													is_dic=false;
										;}
    break;

  case 116:
#line 753 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: STATIC FINAL ID ASSIGN expr\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,is_list,is_dic);
													v=(yyval.var);
													is_list=false;
													is_dic=false;
												;}
    break;

  case 117:
#line 759 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: FINAL STATIC ID ASSIGN expr\n";
				
														(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,is_list,is_dic);
													v=(yyval.var);
													is_list=false;
													is_dic=false;
													;}
    break;

  case 118:
#line 766 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 774 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 782 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: ID ASSIGN expr\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,is_list,is_dic);
													v=(yyval.var);
													is_list=false;
													is_dic=false;
										;}
    break;

  case 121:
#line 788 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 796 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 805 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 813 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 821 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 830 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 840 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"var_declaration: STATIC FINAL access_modef ID\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,0,0);
												v=(yyval.var);
												acc_mod="";
												;}
    break;

  case 128:
#line 846 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
													Streams::verbose()<<"var_declaration: FINAL STATIC access_modef ID\n";
														(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,0,0);
													v=(yyval.var);
													acc_mod="";
													
													;}
    break;

  case 129:
#line 853 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 130:
#line 857 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 131:
#line 861 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 870 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 878 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 886 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 894 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");									
									is_list=false;
													is_dic=false;
																	acc_mod="";
								  ;}
    break;

  case 136:
#line 901 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");									
								  is_list=false;
													is_dic=false;
																	acc_mod="";
								  ;}
    break;

  case 137:
#line 908 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 916 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 924 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 932 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 940 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");									
										is_list=false;
													is_dic=false;
																acc_mod="";								
								
								  ;}
    break;

  case 142:
#line 948 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");									
										is_list=false;
													is_dic=false;
																acc_mod="";								
								  ;}
    break;

  case 143:
#line 955 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 963 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 971 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
																			is_list=false;
																		is_dic=false;
																					acc_mod="";
																;}
    break;

  case 146:
#line 978 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
																			is_list=false;
																			is_dic=false;
																						acc_mod="";
																;}
    break;

  case 147:
#line 985 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
											Streams::verbose()<<"Error: UN Expected IDENTIFIER Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)-strlen((yyvsp[-1].r.strVal)),"UN Expected IDENTIFIER ","");
												is_list=false;
													is_dic=false;
																acc_mod="";
										  ;}
    break;

  case 148:
#line 992 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
							Streams::verbose()<<"Error: UN Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[0].r.colNum)-strlength((yyvsp[0].r.strVal))<<endl;
							err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[0].r.colNum)-strlen((yyvsp[0].r.strVal)),"UN Expected IDENTIFIER ","");						
						;}
    break;

  case 149:
#line 998 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false,false,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 150:
#line 999 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false,false,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 151:
#line 1000 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: STATIC method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 152:
#line 1001 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: FINAL method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,false,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 153:
#line 1002 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: access_modef STATIC method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 154:
#line 1003 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: access_modef FINAL method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,false,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 155:
#line 1004 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: STATIC access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 156:
#line 1005 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: FINAL access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,false,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 157:
#line 1006 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: STATIC access_modef FINAL method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 158:
#line 1007 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: FINAL access_modef STATIC method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 159:
#line 1008 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: STATIC FINAL access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 160:
#line 1009 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: FINAL STATIC access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 161:
#line 1010 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: access_modef STATIC FINAL method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 162:
#line 1011 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: access_modef FINAL STATIC method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 163:
#line 1012 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
																		;}
    break;

  case 164:
#line 1016 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
																			;}
    break;

  case 165:
#line 1020 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
																			;}
    break;

  case 166:
#line 1024 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
																			;}
    break;

  case 167:
#line 1028 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
																			;}
    break;

  case 168:
#line 1032 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
																			;}
    break;

  case 169:
#line 1040 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S SELF CLOSE_S  \n";parameters.push_back("self");testfunction = p->createTypeFunctionHeader(t,ss,pp,ff, (yyvsp[-3].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);pp=true;ff=false;ss=false;parameters.clear();linefunc=yylval.r.lineNum;colmfunc=yylval.r.colNum;;}
    break;

  case 170:
#line 1041 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S ID CLOSE_S \n";parameters.push_back((yyvsp[-1].r.strVal));testfunction = p->createTypeFunctionHeader(t,ss,pp,ff, (yyvsp[-3].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);pp=true;ff=false;ss=false;parameters.clear();linefunc=yylval.r.lineNum;colmfunc=yylval.r.colNum;;}
    break;

  case 171:
#line 1042 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S arguments CLOSE_S \n";testfunction = p->createTypeFunctionHeader(t,ss,pp,ff, (yyvsp[-3].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);pp=true;ff=false;ss=false;parameters.clear();linefunc=yylval.r.lineNum;colmfunc=yylval.r.colNum;;}
    break;

  case 172:
#line 1043 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S CLOSE_S \n";testfunction = p->createTypeFunctionHeader(t,ss,pp,ff, (yyvsp[-2].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);pp=true;ff=false;ss=false;parameters.clear();linefunc=yylval.r.lineNum;colmfunc=yylval.r.colNum;;}
    break;

  case 173:
#line 1044 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
									  ;}
    break;

  case 174:
#line 1048 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
									  ;}
    break;

  case 175:
#line 1052 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
									  ;}
    break;

  case 176:
#line 1056 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-1,"Expected IDENTIFIER ","");
									  ;}
    break;

  case 177:
#line 1060 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)+1<<endl;
												err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)+1,"Expected '(' ","");
											   ;}
    break;

  case 178:
#line 1064 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)+1<<endl;
												err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)+1,"Expected '(' ","");
											   ;}
    break;

  case 179:
#line 1068 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)+1<<endl;
												err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)+1,"Expected '(' ","");
											   ;}
    break;

  case 180:
#line 1072 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)+1<<endl;
												err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)+1,"Expected '(' ","");
											   ;}
    break;

  case 181:
#line 1076 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue((yyvsp[-3].r.lineNum),yylval.r.colNum-strlength(yylval.r.strVal),"Expected ')' ","");
													 ;}
    break;

  case 182:
#line 1080 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
														err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected ')' ","");
													 ;}
    break;

  case 183:
#line 1084 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
														err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected ')' ","");
													 ;}
    break;

  case 184:
#line 1088 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
														err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected ')' ","");
													 ;}
    break;

  case 185:
#line 1095 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"args_list %prec stmt_11\n";;}
    break;

  case 186:
#line 1096 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"arguments:	SELF COMMA args_list %prec stmt_11\n";parameters.push_back("self");;}
    break;

  case 187:
#line 1097 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"arguments:	SELF COMMA ID\n";parameters.push_back("self");parameters.push_back((yyvsp[0].r.strVal));;}
    break;

  case 188:
#line 1098 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"arguments:	SELF COMMA default_args_list\n";parameters.push_back("self");;}
    break;

  case 189:
#line 1099 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"arguments:	args_list COMMA default_args_list\n";;}
    break;

  case 190:
#line 1100 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"arguments:	ID COMMA default_args_list\n";;}
    break;

  case 191:
#line 1101 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"arguments:	SELF COMMA args_list COMMA default_args_list\n";parameters.push_back("self");;}
    break;

  case 192:
#line 1102 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"arguments:	SELF COMMA ID COMMA default_args_list\n";parameters.push_back("self");parameters.push_back((yyvsp[-2].r.strVal));;}
    break;

  case 193:
#line 1104 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"args_list: args_list COMMA arg\n";;}
    break;

  case 194:
#line 1105 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: self should come at the first of the arguments list"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Error: self should come at the first of the arguments list","");
									;}
    break;

  case 195:
#line 1109 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: self should come at the first of the arguments list"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Error: self should come at the first of the arguments list","");
									;}
    break;

  case 196:
#line 1113 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"args_list: ID COMMA arg \n"; parameters.push_back((yyvsp[-2].r.strVal));;}
    break;

  case 197:
#line 1114 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"args_list:	args_list COMMA ID \n"; parameters.push_back((yyvsp[0].r.strVal));;}
    break;

  case 198:
#line 1115 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"args_list:	ID COMMA ID \n"; parameters.push_back((yyvsp[-2].r.strVal)); parameters.push_back((yyvsp[0].r.strVal));;}
    break;

  case 199:
#line 1116 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"args_list: arg \n";;}
    break;

  case 200:
#line 1119 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
						Streams::verbose()<<"arg:	STAR ID \n";std::string tempstr((yyvsp[0].r.strVal));
						std::string erro("*" + tempstr);
						char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
					;}
    break;

  case 201:
#line 1125 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"arg:	STAR STAR ID \n";std::string tempstr((yyvsp[0].r.strVal));
						std::string erro("**" + tempstr);
						char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);;}
    break;

  case 202:
#line 1129 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
							Streams::verbose()<<"Error: Un Expected '*' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
							err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))," Un Expected '*' ","");
						;}
    break;

  case 203:
#line 1133 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Un Expected '**' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))," Un Expected '**' ","");
							 ;}
    break;

  case 204:
#line 1140 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"default_args_list: default_args_list COMMA default_arg\n";;}
    break;

  case 205:
#line 1141 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"default_args_list: default_arg \n";;}
    break;

  case 206:
#line 1142 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
														Streams::verbose()<<"Error: default argument not at end of parameter list at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"default argument not at end of parameter list","");					
														;}
    break;

  case 207:
#line 1146 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
														Streams::verbose()<<"Error: default argument not at end of parameter list at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"default argument not at end of parameter list","");					
														;}
    break;

  case 208:
#line 1152 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"default_arg:	ID ASSIGN expr \n";parameters.push_back((yyvsp[-2].r.strVal));;}
    break;

  case 209:
#line 1153 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"default_arg: STAR ID ASSIGN expr \n";std::string tempstr((yyvsp[-2].r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
									;}
    break;

  case 210:
#line 1159 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"default_arg:	STAR STAR ID ASSIGN expr \n";std::string tempstr((yyvsp[-2].r.strVal));
										std::string erro("**" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);;}
    break;

  case 211:
#line 1163 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
											Streams::verbose()<<"Error: Un Expected '**' at Line No:"<<(yyvsp[-5].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))," Un Expected '**' ","");
										;}
    break;

  case 212:
#line 1167 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
											Streams::verbose()<<"Error: Un Expected '*' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))," Un Expected '*' ","");
										;}
    break;

  case 213:
#line 1173 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"block_stmt: COLON  END \n";;}
    break;

  case 214:
#line 1174 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"block_stmt: COLON stmt_list END \n";;}
    break;

  case 215:
#line 1175 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
						Streams::verbose()<<"Error: Expected ':' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected ':' ","");			 
						;}
    break;

  case 216:
#line 1179 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
						Streams::verbose()<<"Error: Expected ':' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected ':' ","");			 
						;}
    break;

  case 217:
#line 1183 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
						Streams::verbose()<<"Error: Expected 'end' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
						err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected 'end' ","");			 
				;}
    break;

  case 218:
#line 1187 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
						Streams::verbose()<<"Error: Expected 'end' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<yylval.r.colNum<<endl;
						err->errQ->enqueue((yyvsp[-2].r.lineNum),yylval.r.colNum,"Expected 'end' ","");			 
				;}
    break;

  case 219:
#line 1194 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt_list:	stmt_list stmt \n";;}
    break;

  case 220:
#line 1195 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt_list:	stmt \n";;}
    break;

  case 221:
#line 1198 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt: if_stmt\n";;}
    break;

  case 222:
#line 1199 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	while_stmt\n";;}
    break;

  case 223:
#line 1200 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	for_stmt\n";;}
    break;

  case 224:
#line 1201 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	try_stmt\n";;}
    break;

  case 225:
#line 1202 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	with_stmt\n";;}
    break;

  case 226:
#line 1203 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	block_stmt %prec stmt_4\n";;}
    break;

  case 227:
#line 1204 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	simple_stmt_list SEMICOLON\n";;}
    break;

  case 228:
#line 1205 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected ';' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<yylval.r.colNum<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),yylval.r.colNum," Expected ';' ","");										
									;}
    break;

  case 229:
#line 1209 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"assignment_stmt:	self dot amer\n";
																		//cout<<"assignment list"<<endl;
																		(yyval.var)=p->addVariableToCurrentScope((yyvsp[-1].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,0,0,true);
																		v=(yyval.var);
																		acc_mod="";
										;}
    break;

  case 230:
#line 1216 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"stmt:	ID SEMICOLON\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[-1].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false,false);
																		v=(yyval.var);
																		acc_mod="";
																		is_list=false;
																		is_dic=false;
								;}
    break;

  case 231:
#line 1224 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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

  case 232:
#line 1233 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"stmt:FINAL	ID SEMICOLON\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[-1].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
																		v=(yyval.var);
																		acc_mod="";
																		is_list=false;
																		is_dic=false;
										;}
    break;

  case 233:
#line 1241 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	ID DOT ID SEMICOLON\n";;}
    break;

  case 234:
#line 1242 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	ID COMMA ID DOT ID DOT ID SEMICOLON\n";;}
    break;

  case 235:
#line 1243 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	ID DOT ID COMMA ID DOT ID DOT ID SEMICOLON\n";;}
    break;

  case 236:
#line 1246 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt %prec stmt_3\n";;}
    break;

  case 237:
#line 1247 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt ELSE stmt\n";;}
    break;

  case 238:
#line 1248 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected 'else' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))," Expected 'else' ","");										
									;}
    break;

  case 239:
#line 1252 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt elif_stmt\n";;}
    break;

  case 240:
#line 1253 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt elif_stmt ELSE stmt\n";;}
    break;

  case 241:
#line 1256 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"elif_stmt: 	elif_header stmt elif_stmt\n";;}
    break;

  case 242:
#line 1257 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"elif_stmt:	elif_header stmt\n";;}
    break;

  case 243:
#line 1258 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected statement at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<yylval.r.colNum<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),yylval.r.colNum," Expected statement ","");										
											;}
    break;

  case 244:
#line 1264 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"if_header:	IF expr \n";;}
    break;

  case 245:
#line 1267 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"elif_header:	ELIF expr \n";;}
    break;

  case 246:
#line 1268 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    { 
						Streams::verbose()<<"Error: Expected reserved word at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected reserved word 'while' ","");
					 ;}
    break;

  case 247:
#line 1274 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"while_stmt: while_header stmt\n";;}
    break;

  case 248:
#line 1279 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"while_header: WHILE expr \n";;}
    break;

  case 249:
#line 1280 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    { 
						Streams::verbose()<<"Error: Expected reserved word at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected reserved word 'while' ","");
				;}
    break;

  case 250:
#line 1286 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_stmt: 	for_header stmt\n";;}
    break;

  case 251:
#line 1289 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_header: FOR target_list IN expr_list \n";;}
    break;

  case 252:
#line 1290 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_header: FOR target_list IN list_display \n";;}
    break;

  case 253:
#line 1291 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID COMMA ID IN expr_list \n";;}
    break;

  case 254:
#line 1292 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"for_header:	FOR ID COMMA ID IN list_display \n";
												(yyval.var)=p->checkVariable((yyvsp[-4].r.strVal),t, yylval.r.lineNum, yylval.r.colNum,true,is_list,is_dic);
												v=(yyval.var);
												temp_id="";
												;}
    break;

  case 255:
#line 1298 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID IN expr_list \n";
									(yyval.var)=p->checkVariable((yyvsp[-2].r.strVal),t, yylval.r.lineNum, yylval.r.colNum,true,is_list,is_dic);
																	v=(yyval.var);
																	temp_id="";
									;}
    break;

  case 256:
#line 1303 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										(yyval.var)=p->checkVariable((yyvsp[-2].r.strVal),t, yylval.r.lineNum, yylval.r.colNum,true,is_list,is_dic);
																	v=(yyval.var);
																	temp_id="";
										Streams::verbose()<<"for_header:	FOR ID IN list_display \n";;}
    break;

  case 257:
#line 1308 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 258:
#line 1312 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 259:
#line 1316 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 260:
#line 1320 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 261:
#line 1324 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'in' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal)),"Expected reserved word 'in' ","");
								;}
    break;

  case 262:
#line 1328 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'in' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected reserved word 'in' ","");
								;}
    break;

  case 263:
#line 1332 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'in' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal)),"Expected reserved word 'in' ","");
								;}
    break;

  case 264:
#line 1336 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'in' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected reserved word 'in' ","");
								;}
    break;

  case 265:
#line 1343 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list:	import_list COMMA import\n";;}
    break;

  case 266:
#line 1344 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA import_list \n";;}
    break;

  case 267:
#line 1345 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA ID \n";;}
    break;

  case 268:
#line 1346 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA ID DOT ID \n";;}
    break;

  case 269:
#line 1347 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA import_list \n";;}
    break;

  case 270:
#line 1348 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA ID \n";;}
    break;

  case 271:
#line 1349 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA ID DOT ID \n";;}
    break;

  case 272:
#line 1350 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list:	import\n";;}
    break;

  case 273:
#line 1354 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import: import DOT ID\n";;}
    break;

  case 274:
#line 1355 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import:	ID DOT ID DOT ID;";}
    break;

  case 275:
#line 1359 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target_list:	target_list COMMA target\n";;}
    break;

  case 276:
#line 1360 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA ID COMMA target\n";;}
    break;

  case 277:
#line 1361 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target_list:	target_list COMMA ID\n";;}
    break;

  case 278:
#line 1362 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA ID COMMA ID\n";;}
    break;

  case 279:
#line 1363 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA target\n";;}
    break;

  case 280:
#line 1364 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target_list:	target\n";;}
    break;

  case 281:
#line 1367 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"try_stmt: TRY  stmt COLON except_stmt END\n";;}
    break;

  case 282:
#line 1368 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"try_stmt: TRY  stmt COLON finally_stmt END\n";;}
    break;

  case 283:
#line 1371 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"finally_stmt: 	FINALLY COLON block_stmt\n";;}
    break;

  case 284:
#line 1374 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"except_stmt:	EXCEPT  stmt\n";;}
    break;

  case 285:
#line 1375 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"except_stmt:	EXCEPT  expr stmt\n";;}
    break;

  case 286:
#line 1378 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"with_stmt:	WITH expr \n";;}
    break;

  case 287:
#line 1379 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"with_stmt:	WITH expr AS target \n";;}
    break;

  case 288:
#line 1382 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	expr_list\n";;}
    break;

  case 289:
#line 1383 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	assert_stmt\n";;}
    break;

  case 290:
#line 1384 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	assignment_stmt\n";;}
    break;

  case 291:
#line 1386 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	PASS\n";;}
    break;

  case 292:
#line 1387 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	del_stmt\n";;}
    break;

  case 293:
#line 1388 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	print_stmt\n";;}
    break;

  case 294:
#line 1389 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	return_stmt\n";;}
    break;

  case 295:
#line 1390 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	yield_stmt\n";;}
    break;

  case 296:
#line 1391 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	raise_stmt\n";;}
    break;

  case 297:
#line 1392 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	BREAK\n";;}
    break;

  case 298:
#line 1393 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	CONTINUE\n";;}
    break;

  case 299:
#line 1394 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	import_list\n";;}
    break;

  case 300:
#line 1395 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	global_stmt\n";;}
    break;

  case 301:
#line 1398 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assert_stmt: 	ASSERT expr\n";;}
    break;

  case 302:
#line 1399 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assert_stmt:	ASSERT expr COMMA expr\n";;}
    break;

  case 303:
#line 1401 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"left_assignment_side : expr_list\n";

									;}
    break;

  case 304:
#line 1405 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : parenth_form\n";;}
    break;

  case 305:
#line 1406 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : list_display\n";is_list=true;;}
    break;

  case 306:
#line 1407 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : dict_display\n";is_dic=true;;}
    break;

  case 307:
#line 1410 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	target_list ASSIGN left_assignment_side\n";;}
    break;

  case 308:
#line 1411 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	id_dot ASSIGN left_assignment_side\n";
																	(yyval.var)=p->checkVariable(const_cast<char *>(temp_id1.top().c_str()),t, yylval.r.lineNum, yylval.r.colNum,true,is_list,is_dic);
																	v=(yyval.var);
																	temp_id1.pop();
																	is_list=false;
																	is_dic=false;
																;}
    break;

  case 309:
#line 1418 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	id_dot OPEN_D expr_list CLOSE_D ASSIGN left_assignment_side\n";;}
    break;

  case 310:
#line 1419 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	id_dot OPEN_D CLOSE_D ASSIGN left_assignment_side\n";;}
    break;

  case 311:
#line 1420 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	ID COMMA ID ASSIGN left_assignment_side\n";;}
    break;

  case 312:
#line 1421 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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

  case 313:
#line 1436 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL target_list\n";;}
    break;

  case 314:
#line 1437 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID COMMA ID\n";;}
    break;

  case 315:
#line 1438 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID\n";;}
    break;

  case 316:
#line 1439 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID	OPEN_D expr CLOSE_D\n";;}
    break;

  case 317:
#line 1440 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID	OPEN_D expr COLON expr CLOSE_D\n";;}
    break;

  case 318:
#line 1441 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID	OPEN_D COLON CLOSE_D\n";;}
    break;

  case 319:
#line 1442 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL target_list	OPEN_D expr CLOSE_D\n";;}
    break;

  case 320:
#line 1443 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL target_list OPEN_D expr COLON expr CLOSE_D\n";;}
    break;

  case 321:
#line 1444 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL target_list OPEN_D COLON CLOSE_D\n";;}
    break;

  case 322:
#line 1447 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"return_stmt:	RETURN\n";;}
    break;

  case 323:
#line 1448 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"return_stmt:	RETURN expr_list\n";;}
    break;

  case 324:
#line 1451 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"yield_stmt:		yield_expression\n";;}
    break;

  case 325:
#line 1454 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"print_stmt: PRINT expr_list\n";;}
    break;

  case 326:
#line 1455 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"print_stmt: PRINT target_list\n";;}
    break;

  case 327:
#line 1456 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"print_stmt:	PRINT MORE_THAN MORE_THAN expr_list\n";;}
    break;

  case 328:
#line 1457 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected reserved word 'print' ","");
								;}
    break;

  case 329:
#line 1461 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
												err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'print' ","");
												;}
    break;

  case 330:
#line 1466 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"global_stmt :GLOBAL id_list\n";;}
    break;

  case 331:
#line 1467 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+(yyvsp[-1].r.strVal)<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected IDENTIFIER ","");
									   ;}
    break;

  case 332:
#line 1473 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"id_list: 	ID COMMA id_list\n";;}
    break;

  case 333:
#line 1474 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"id_list:	ID\n";;}
    break;

  case 334:
#line 1477 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"raise_stmt: RAISE\n";;}
    break;

  case 335:
#line 1478 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"raise_stmt:	RAISE expr\n";;}
    break;

  case 336:
#line 1479 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"raise_stmt:	RAISE expr COMMA expr\n";;}
    break;

  case 337:
#line 1480 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected expression at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
													err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected expression ","");
												 ;}
    break;

  case 338:
#line 1484 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected reserved word 'raise' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
													err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'raise' ","");
												 ;}
    break;

  case 339:
#line 1490 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"access_modef: PRIVATE\n";acc_mod="private";pp=true;;}
    break;

  case 340:
#line 1491 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"access_modef:	PUBLIC\n";acc_mod="public";pp=false;}
    break;

  case 341:
#line 1492 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"access_modef:	PROTECTED\n";acc_mod="protected";;}
    break;

  case 342:
#line 1497 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S target_list CLOSE_S \n";;}
    break;

  case 343:
#line 1498 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S ID COMMA ID CLOSE_S\n";;}
    break;

  case 344:
#line 1499 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S ID CLOSE_S\n";;}
    break;

  case 345:
#line 1500 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D target_list CLOSE_D\n";;}
    break;

  case 346:
#line 1501 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D ID COMMA ID CLOSE_D\n";;}
    break;

  case 347:
#line 1502 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D ID CLOSE_D\n";;}
    break;

  case 348:
#line 1503 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	attributeref\n";;}
    break;

  case 349:
#line 1504 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	subscription\n";;}
    break;

  case 350:
#line 1507 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"attributeref: primary DOT ID\n";;}
    break;

  case 351:
#line 1508 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"attributeref: ID DOT ID\n";;}
    break;

  case 352:
#line 1512 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"primary: 	atom\n";;}
    break;

  case 353:
#line 1513 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"primary:	attributeref\n";;}
    break;

  case 354:
#line 1514 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"primary:	subscription\n";;}
    break;

  case 355:
#line 1515 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"primary:	call\n";;}
    break;

  case 356:
#line 1518 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"atom:	enclosure\n";;}
    break;

  case 357:
#line 1519 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"atom:	literal\n";	;}
    break;

  case 358:
#line 1522 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"literal:    STRING_VALUE\n";;}
    break;

  case 359:
#line 1523 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"literal:	INTEGER_VALUE\n";;}
    break;

  case 360:
#line 1524 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"literal:	LONG_VALUE\n";;}
    break;

  case 361:
#line 1525 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"literal:	FLOAT_VALUE\n";;}
    break;

  case 362:
#line 1526 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"literal:	CHAR_VALUE\n";;}
    break;

  case 363:
#line 1529 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"enclosure:	parenth_form\n";;}
    break;

  case 364:
#line 1530 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"enclosure:	list_display\n";;}
    break;

  case 365:
#line 1531 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"enclosure:	string_conversion\n";;}
    break;

  case 366:
#line 1532 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"enclosure:	yield_atom\n";;}
    break;

  case 367:
#line 1533 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"enclosure:	dict_display\n";;}
    break;

  case 368:
#line 1536 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dict_display: OPEN_C CLOSE_C \n";;}
    break;

  case 369:
#line 1537 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dict_display: OPEN_C key_datum_list CLOSE_C \n";;}
    break;

  case 370:
#line 1539 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum_list COMMA key_datum \n";;}
    break;

  case 371:
#line 1540 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum_list COMMA\n";;}
    break;

  case 372:
#line 1541 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum\n";;}
    break;

  case 373:
#line 1543 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"key_datum : expr COLON expr\n";;}
    break;

  case 374:
#line 1546 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"parenth_form : 	OPEN_S expr_list CLOSE_S\n";;}
    break;

  case 375:
#line 1547 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"parenth_form : 	OPEN_S  CLOSE_S\n";;}
    break;

  case 376:
#line 1548 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-1,"Expected '(' ","");
								;}
    break;

  case 377:
#line 1552 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected ')' ","");
										;}
    break;

  case 378:
#line 1556 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
													err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))," Expected '(' ","");
												 ;}
    break;

  case 379:
#line 1560 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
													err->errQ->enqueue((yyvsp[-2].r.lineNum),yylval.r.colNum-strlength(yylval.r.strVal)," Expected ')' ","");
												 ;}
    break;

  case 380:
#line 1567 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"list_display:	OPEN_D  expr_list CLOSE_D\n";;}
    break;

  case 381:
#line 1568 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"list_display:	OPEN_D CLOSE_D\n";;}
    break;

  case 382:
#line 1571 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"string_conversion:	RE_COT expr_list RE_COT\n";;}
    break;

  case 383:
#line 1574 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"yield_atom:		OPEN_S yield_expression CLOSE_S\n";;}
    break;

  case 384:
#line 1577 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"yield_expression:	YIELD\n";;}
    break;

  case 385:
#line 1578 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"yield_expression:	YIELD expr_list\n";;}
    break;

  case 386:
#line 1581 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"subscription:	PRIMARY OPEN_D expr_list CLOSE_D\n";;}
    break;

  case 387:
#line 1585 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"call:	PRIMARY OPEN_D args_list CLOSE_D\n";;}
    break;

  case 388:
#line 1586 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"call:	PRIMARY OPEN_D ID CLOSE_D\n";;}
    break;

  case 389:
#line 1590 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"expr:	condition\n";;}
    break;

  case 390:
#line 1591 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"expr:	literal\n";;}
    break;

  case 391:
#line 1592 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"expr:	expr op expr\n";;}
    break;

  case 392:
#line 1604 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"expr:	long_id\n";
									
									;}
    break;

  case 393:
#line 1615 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"condition: expr EQUAL expr\n";;}
    break;

  case 394:
#line 1616 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"condition: expr NOT_EQUAL expr\n";;}
    break;

  case 395:
#line 1617 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"condition: expr LESS_THAN expr\n";;}
    break;

  case 396:
#line 1618 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"condition: expr LESS_OR_EQUAL expr\n";;}
    break;

  case 397:
#line 1619 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"condition: expr MORE_THAN expr\n";;}
    break;

  case 398:
#line 1620 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"condition: expr MORE_OR_EQUAL expr\n";;}
    break;

  case 399:
#line 1622 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"id_dot:	ID\n";
								temp_id1.push((yyvsp[0].r.strVal));
							;}
    break;

  case 400:
#line 1625 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"id_dot:	id_dot DOT ID\n";
							temp_id=temp_id1.top();
							temp_id=temp_id+"."+(yyvsp[0].r.strVal);
						temp_id1.pop();
						temp_id1.push(temp_id);	
							;}
    break;

  case 401:
#line 1639 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot\n";
										(yyval.var)=p->checkVariable(const_cast<char *>(temp_id1.top().c_str()),t, yylval.r.lineNum, yylval.r.colNum,false,is_list,is_dic);
										v=(yyval.var);
										temp_id1.pop();
								;}
    break;

  case 402:
#line 1644 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"long_id:	SELF DOT ID parenth_form\n";
										p->insert_func_Call(t,(yyvsp[-1].r.strVal),yylval.r.lineNum, yylval.r.colNum);
										//cout<<"hhhhhhhhh"<<endl;
									;}
    break;

  case 403:
#line 1649 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot parenth_form\n";temp_id1.pop();;}
    break;

  case 404:
#line 1650 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot OPEN_D expr CLOSE_D\n";;}
    break;

  case 405:
#line 1651 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot OPEN_D expr COLON expr CLOSE_D\n";;}
    break;

  case 406:
#line 1652 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot OPEN_D COLON CLOSE_D\n";;}
    break;

  case 407:
#line 1653 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"long_id:	SELF DOT ID\n";
									(yyval.var)=p->checkVariable((yyvsp[0].r.strVal),t, yylval.r.lineNum, yylval.r.colNum,false,is_list,is_dic,true);
																		v=(yyval.var);
																		acc_mod="";
									;}
    break;

  case 408:
#line 1661 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :PLUS\n";;}
    break;

  case 409:
#line 1662 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :MINUS\n";;}
    break;

  case 410:
#line 1663 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :DIV\n";;}
    break;

  case 411:
#line 1664 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :MOD\n";;}
    break;

  case 412:
#line 1665 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :OR\n";;}
    break;

  case 413:
#line 1666 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :NOT\n";;}
    break;

  case 414:
#line 1667 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :AND\n";;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 5563 "yacc.cpp"

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


#line 1669 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"

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
