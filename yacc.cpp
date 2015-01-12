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
	char* i_type;
	char* t_id=new char[10];
	char* acc_mod=new char[8];
	vector<char*> sto_mod;
	bool ss=false;
	bool ff=false;
	bool pp=true;
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
#line 63 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 331 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 343 "yacc.cpp"

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
#define YYLAST   2769

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  73
/* YYNRULES -- Number of rules. */
#define YYNRULES  400
/* YYNRULES -- Number of states. */
#define YYNSTATES  808

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
     562,   565,   569,   572,   576,   579,   583,   587,   590,   593,
     595,   597,   600,   603,   606,   609,   613,   617,   622,   627,
     629,   633,   637,   642,   647,   652,   658,   664,   671,   678,
     682,   686,   690,   695,   700,   706,   712,   717,   722,   728,
     734,   740,   746,   753,   760,   768,   776,   782,   788,   795,
     802,   810,   818,   825,   832,   840,   848,   853,   857,   860,
     864,   868,   872,   877,   882,   887,   892,   898,   904,   910,
     916,   923,   930,   937,   944,   951,   958,   963,   968,   972,
     977,   982,   987,   992,   997,  1002,  1004,  1006,  1010,  1014,
    1018,  1022,  1026,  1028,  1030,  1034,  1038,  1040,  1044,  1048,
    1051,  1055,  1059,  1064,  1068,  1070,  1075,  1080,  1084,  1089,
    1095,  1102,  1108,  1111,  1115,  1118,  1121,  1123,  1125,  1127,
    1129,  1131,  1133,  1135,  1138,  1141,  1146,  1149,  1153,  1157,
    1162,  1171,  1182,  1185,  1190,  1195,  1199,  1205,  1209,  1212,
    1215,  1218,  1222,  1225,  1228,  1232,  1235,  1240,  1245,  1252,
    1259,  1264,  1269,  1275,  1281,  1287,  1293,  1298,  1303,  1308,
    1313,  1317,  1321,  1325,  1331,  1337,  1343,  1351,  1353,  1357,
    1363,  1367,  1373,  1377,  1383,  1387,  1389,  1395,  1401,  1404,
    1407,  1411,  1414,  1419,  1421,  1423,  1425,  1427,  1429,  1431,
    1433,  1435,  1437,  1439,  1441,  1443,  1445,  1448,  1453,  1455,
    1457,  1459,  1461,  1465,  1469,  1476,  1482,  1488,  1494,  1497,
    1502,  1505,  1511,  1519,  1525,  1531,  1539,  1545,  1547,  1550,
    1552,  1555,  1558,  1563,  1567,  1572,  1575,  1578,  1582,  1584,
    1586,  1589,  1594,  1599,  1605,  1607,  1609,  1611,  1615,  1621,
    1625,  1629,  1635,  1639,  1641,  1643,  1647,  1651,  1653,  1655,
    1657,  1659,  1661,  1663,  1665,  1667,  1669,  1671,  1673,  1675,
    1677,  1679,  1681,  1683,  1686,  1690,  1694,  1697,  1699,  1703,
    1707,  1710,  1713,  1716,  1720,  1724,  1728,  1731,  1735,  1739,
    1741,  1744,  1749,  1754,  1759,  1761,  1763,  1767,  1771,  1776,
    1778,  1782,  1786,  1790,  1794,  1798,  1802,  1806,  1808,  1812,
    1814,  1817,  1822,  1829,  1834,  1836,  1838,  1840,  1842,  1844,
    1846
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
      88,     0,    -1,    89,     3,    -1,    89,    91,    -1,    91,
      -1,     4,    95,    63,    -1,     4,    95,     1,    -1,    90,
      92,    -1,    92,    -1,    93,    97,    -1,     5,     6,    -1,
     138,     5,     6,    -1,    54,     5,     6,    -1,    53,     5,
       6,    -1,    54,    53,     5,     6,    -1,    53,    54,     5,
       6,    -1,    54,     1,    54,     5,     6,    -1,    53,     1,
      53,     5,     6,    -1,    54,   138,     5,     6,    -1,    53,
     138,     5,     6,    -1,    54,    53,   138,     5,     6,    -1,
      53,    54,   138,     5,     6,    -1,    54,     1,    54,   138,
       5,     6,    -1,    53,     1,    53,   138,     5,     6,    -1,
     138,    54,     5,     6,    -1,   138,    53,     5,     6,    -1,
     138,    54,    53,     5,     6,    -1,   138,    53,    54,     5,
       6,    -1,   138,    54,    54,     5,     6,    -1,   138,    53,
      53,     5,     6,    -1,    54,   138,    53,     5,     6,    -1,
      53,   138,    53,     5,     6,    -1,    54,   138,    54,     5,
       6,    -1,     5,     6,    67,     8,    -1,   138,     5,     6,
      67,     8,    -1,    54,     5,     6,    67,     8,    -1,    53,
       5,     6,    67,     8,    -1,    54,    53,     5,     6,    67,
       8,    -1,    53,    54,     5,     6,    67,     8,    -1,    54,
       1,    54,     5,     6,    67,     8,    -1,    53,     1,    53,
       5,     6,    67,     8,    -1,    54,   138,     5,     6,    67,
       8,    -1,    53,   138,     5,     6,    67,     8,    -1,    54,
      53,   138,     5,     6,    67,     8,    -1,    53,    54,   138,
       5,     6,    67,     8,    -1,    54,     1,    54,   138,     5,
       6,    67,     8,    -1,    53,     1,    53,   138,     5,     6,
      67,     8,    -1,   138,    54,     5,     6,    67,     8,    -1,
     138,    53,     5,     6,    67,     8,    -1,   138,    54,    53,
       5,     6,    67,     8,    -1,   138,    53,    54,     5,     6,
      67,     8,    -1,   138,    54,    54,     5,     6,    67,     8,
      -1,   138,    53,    53,     5,     6,    67,     8,    -1,    54,
     138,    53,     5,     6,    67,     8,    -1,    53,   138,    54,
       5,     6,    67,     8,    -1,    54,   138,    54,     5,     6,
      67,     8,    -1,    53,   138,    53,     5,     6,    67,     8,
      -1,     5,     6,    67,    95,     8,    -1,   138,     5,     6,
      67,    95,     8,    -1,    54,     5,     6,    67,    95,     8,
      -1,    53,     5,     6,    67,    95,     8,    -1,    54,    53,
       5,     6,    67,    95,     8,    -1,    53,    54,     5,     6,
      67,    95,     8,    -1,    54,     1,    54,     5,     6,    67,
      95,     8,    -1,    53,     1,    53,     5,     6,    67,    95,
       8,    -1,    54,   138,     5,     6,    67,    95,     8,    -1,
      53,   138,     5,     6,    67,    95,     8,    -1,    54,    53,
     138,     5,     6,    67,    95,     8,    -1,    53,    54,   138,
       5,     6,    67,    95,     8,    -1,    54,     1,    54,   138,
       5,     6,    67,    95,     8,    -1,    53,     1,    53,   138,
       5,     6,    67,    95,     8,    -1,   138,    54,     5,     6,
      67,    95,     8,    -1,   138,    53,     5,     6,    67,    95,
       8,    -1,   138,    54,    53,     5,     6,    67,    95,     8,
      -1,   138,    53,    54,     5,     6,    67,    95,     8,    -1,
     138,    54,    54,     5,     6,    67,    95,     8,    -1,   138,
      53,    53,     5,     6,    67,    95,     8,    -1,    53,   138,
      54,     5,     6,    67,    95,     8,    -1,    54,   138,    53,
       5,     6,    67,    95,     8,    -1,    54,   138,    54,     5,
       6,    67,    95,     8,    -1,    53,   138,    53,     5,     6,
      67,    95,     8,    -1,     5,     1,    -1,     6,     1,     6,
      -1,     6,     1,    -1,    94,     9,   155,    -1,   155,    -1,
      95,     9,    96,    -1,    96,    -1,    96,    10,     6,    -1,
       6,    -1,     7,    11,    -1,     7,    98,    11,    -1,     1,
      11,    -1,     1,    98,    11,    -1,     7,     1,    -1,     7,
      98,     1,    -1,    98,    14,    99,    -1,    14,    99,    -1,
     100,    63,    -1,   101,    -1,    92,    -1,   100,     1,    -1,
     138,     6,    -1,    54,     6,    -1,    53,     6,    -1,    54,
      53,     6,    -1,    53,    54,     6,    -1,    54,     1,    54,
       6,    -1,    53,     1,    53,     6,    -1,     6,    -1,    53,
     138,     6,    -1,    54,   138,     6,    -1,   138,     6,    15,
     155,    -1,    54,     6,    15,   155,    -1,    53,     6,    15,
     155,    -1,    54,    53,     6,    15,   155,    -1,    53,    54,
       6,    15,   155,    -1,    54,     1,    54,     6,    15,   155,
      -1,    53,     1,    53,     6,    15,   155,    -1,     6,    15,
     155,    -1,   138,    54,     6,    -1,   138,    53,     6,    -1,
     138,    54,    53,     6,    -1,   138,    53,    54,     6,    -1,
     138,    54,     1,    54,     6,    -1,   138,    53,     1,    53,
       6,    -1,    54,    53,   138,     6,    -1,    53,    54,   138,
       6,    -1,    54,     1,    54,   138,     6,    -1,    53,     1,
      53,   138,     6,    -1,   138,    54,     6,    15,   155,    -1,
     138,    53,     6,    15,   155,    -1,   138,    54,    53,     6,
      15,   155,    -1,   138,    53,    54,     6,    15,   155,    -1,
     138,    54,     1,    54,     6,    15,   155,    -1,   138,    53,
       1,    53,     6,    15,   155,    -1,    54,   138,     6,    15,
     155,    -1,    53,   138,     6,    15,   155,    -1,    54,    53,
     138,     6,    15,   155,    -1,    53,    54,   138,     6,    15,
     155,    -1,    54,     1,    54,   138,     6,    15,   155,    -1,
      53,     1,    53,   138,     6,    15,   155,    -1,    54,   138,
      53,     6,    15,   155,    -1,    53,   138,    54,     6,    15,
     155,    -1,    54,   138,    54,     1,     6,    15,   155,    -1,
      53,   138,    53,     1,     6,    15,   155,    -1,   138,     6,
       6,     1,    -1,     6,     6,     1,    -1,   102,   109,    -1,
     138,   102,   109,    -1,    54,   102,   109,    -1,    53,   102,
     109,    -1,   138,    54,   102,   109,    -1,   138,    53,   102,
     109,    -1,    54,   138,   102,   109,    -1,    53,   138,   102,
     109,    -1,    54,   138,    53,   102,   109,    -1,    53,   138,
      54,   102,   109,    -1,    54,    53,   138,   102,   109,    -1,
      53,    54,   138,   102,   109,    -1,    53,   138,    53,     1,
     102,   109,    -1,    54,   138,    54,     1,   102,   109,    -1,
      54,    54,     1,   138,   102,   109,    -1,    53,    53,     1,
     138,   102,   109,    -1,   138,    53,     1,    53,   102,   109,
      -1,   138,    54,     1,    54,   102,   109,    -1,     6,    67,
     103,     8,    -1,     6,    67,    55,     8,    -1,     6,    67,
       8,    -1,     1,    67,   103,     8,    -1,     1,    67,     6,
       8,    -1,     6,     1,   103,     8,    -1,     6,     1,     6,
       8,    -1,     6,    67,   103,     1,    -1,     6,    67,     6,
       1,    -1,   104,    -1,   107,    -1,   104,     9,   107,    -1,
     104,     9,   106,    -1,     6,     9,   106,    -1,   104,     9,
       6,    -1,     6,     9,     6,    -1,   106,    -1,   105,    -1,
      55,     9,   104,    -1,    55,     9,     6,    -1,    55,    -1,
     104,     9,    55,    -1,     6,     9,    55,    -1,    16,     6,
      -1,    16,    16,     6,    -1,     6,    16,     1,    -1,     6,
      16,    16,     1,    -1,   107,     9,   108,    -1,   108,    -1,
     107,     9,   104,     1,    -1,   107,     9,     6,     1,    -1,
       6,    15,   155,    -1,    16,     6,    15,   155,    -1,    16,
      16,     6,    15,   155,    -1,     6,    16,     1,    16,    15,
     155,    -1,     6,    16,     1,    15,   155,    -1,     7,    11,
      -1,     7,   110,    11,    -1,     1,    11,    -1,   110,   111,
      -1,   111,    -1,   112,    -1,   116,    -1,   118,    -1,   123,
      -1,   126,    -1,   109,    -1,   127,    63,    -1,   127,     1,
      -1,    55,    10,     6,    63,    -1,     6,    63,    -1,    54,
       6,    63,    -1,    53,     6,    63,    -1,     6,    10,     6,
      63,    -1,     6,     9,     6,    10,     6,    10,     6,    63,
      -1,     6,    10,     6,     9,     6,    10,     6,    10,     6,
      63,    -1,   114,   111,    -1,   114,   111,    17,   111,    -1,
     114,   111,     1,   111,    -1,   114,   111,   113,    -1,   114,
     111,   113,    17,   111,    -1,   115,   111,   113,    -1,   115,
     111,    -1,    18,   155,    -1,    19,   155,    -1,     1,     6,
     155,    -1,   117,   111,    -1,    20,   155,    -1,     6,     1,
     155,    -1,   119,   111,    -1,    21,   122,    22,    94,    -1,
      21,   122,    22,   149,    -1,    21,     6,     9,     6,    22,
      94,    -1,    21,     6,     9,     6,    22,   149,    -1,    21,
       6,    22,    94,    -1,    21,     6,    22,   149,    -1,     6,
       1,     6,    22,    94,    -1,     6,     1,     6,    22,   149,
      -1,     6,     1,   122,    22,    94,    -1,     6,     1,   122,
      22,   149,    -1,    21,     6,     1,    94,    -1,    21,     6,
       1,   149,    -1,    21,   122,     1,    94,    -1,    21,   122,
       1,   149,    -1,   120,     9,   121,    -1,     6,     9,   120,
      -1,     6,     9,     6,    -1,     6,     9,     6,    10,     6,
      -1,     6,    10,     6,     9,   120,    -1,     6,    10,     6,
       9,     6,    -1,     6,    10,     6,     9,     6,    10,     6,
      -1,   121,    -1,   121,    10,     6,    -1,     6,    10,     6,
      10,     6,    -1,   122,     9,   139,    -1,     6,     9,     6,
       9,   139,    -1,   122,     9,     6,    -1,     6,     9,     6,
       9,     6,    -1,     6,     9,   139,    -1,   139,    -1,    23,
     111,     7,   125,    11,    -1,    23,   111,     7,   124,    11,
      -1,    24,   109,    -1,    62,   111,    -1,    62,   155,   111,
      -1,    26,   155,    -1,    26,   155,    27,   139,    -1,    94,
      -1,   128,    -1,   130,    -1,    65,    -1,   131,    -1,   134,
      -1,   132,    -1,   133,    -1,   137,    -1,    70,    -1,    71,
      -1,   120,    -1,   135,    -1,    28,   155,    -1,    28,   155,
       9,   155,    -1,    94,    -1,   148,    -1,   149,    -1,   145,
      -1,   122,    15,   129,    -1,   157,    15,   129,    -1,   157,
      40,    94,    41,    15,   129,    -1,   157,    40,    41,    15,
     129,    -1,     6,     9,     6,    15,   129,    -1,    55,    10,
       6,    15,   129,    -1,    30,   122,    -1,    30,     6,     9,
       6,    -1,    30,     6,    -1,    30,     6,    40,   155,    41,
      -1,    30,     6,    40,   155,     7,   155,    41,    -1,    30,
       6,    40,     7,    41,    -1,    30,   122,    40,   155,    41,
      -1,    30,   122,    40,   155,     7,   155,    41,    -1,    30,
     122,    40,     7,    41,    -1,    31,    -1,    31,    94,    -1,
     152,    -1,    32,    94,    -1,    32,   122,    -1,    32,    58,
      58,    94,    -1,     6,     1,    94,    -1,     6,    58,    58,
      94,    -1,    33,   136,    -1,    33,     1,    -1,     6,     9,
     136,    -1,     6,    -1,    36,    -1,    36,   155,    -1,    36,
     155,     9,   155,    -1,    36,   155,     9,     1,    -1,     6,
       1,   155,     9,   155,    -1,    37,    -1,    38,    -1,    39,
      -1,    67,   122,     8,    -1,    67,     6,     9,     6,     8,
      -1,    67,     6,     8,    -1,    40,   122,    41,    -1,    40,
       6,     9,     6,    41,    -1,    40,     6,    41,    -1,   140,
      -1,   153,    -1,   141,    10,     6,    -1,     6,    10,     6,
      -1,   142,    -1,   140,    -1,   153,    -1,   154,    -1,   144,
      -1,   143,    -1,    68,    -1,    69,    -1,    72,    -1,    73,
      -1,    66,    -1,   148,    -1,   149,    -1,   150,    -1,   151,
      -1,   145,    -1,    12,    13,    -1,    12,   146,    13,    -1,
     146,     9,   147,    -1,   146,     9,    -1,   147,    -1,   155,
       7,   155,    -1,    67,    94,     8,    -1,    67,     8,    -1,
       1,     8,    -1,    67,     1,    -1,     1,   155,     8,    -1,
      67,    94,     1,    -1,    40,    94,    41,    -1,    40,    41,
      -1,    42,    94,    42,    -1,    67,   152,     8,    -1,    43,
      -1,    43,    94,    -1,    44,    40,    94,    41,    -1,    44,
      40,   104,    41,    -1,    44,    40,     6,    41,    -1,   156,
      -1,   143,    -1,   155,   159,   155,    -1,    55,    10,     6,
      -1,    55,    10,     6,   148,    -1,   158,    -1,   155,     1,
     155,    -1,   155,    29,   155,    -1,   155,    52,   155,    -1,
     155,    56,   155,    -1,   155,    57,   155,    -1,   155,    58,
     155,    -1,   155,    59,   155,    -1,     6,    -1,   157,    10,
       6,    -1,   157,    -1,   157,   148,    -1,   157,    40,   155,
      41,    -1,   157,    40,   155,     7,   155,    41,    -1,   157,
      40,     7,    41,    -1,    48,    -1,    49,    -1,    50,    -1,
      51,    -1,    45,    -1,    47,    -1,    46,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   104,   104,   112,   115,   123,   124,   129,   130,   133,
     136,   141,   147,   153,   159,   165,   171,   178,   185,   191,
     197,   203,   209,   216,   223,   229,   235,   241,   247,   255,
     263,   269,   277,   285,   291,   297,   303,   309,   315,   321,
     324,   327,   333,   339,   345,   351,   358,   365,   371,   377,
     383,   389,   397,   405,   411,   417,   425,   433,   439,   445,
     451,   457,   463,   469,   472,   475,   481,   487,   493,   499,
     506,   513,   519,   525,   531,   537,   545,   554,   560,   566,
     574,   582,   587,   592,   599,   600,   603,   610,   619,   623,
     631,   635,   638,   644,   651,   657,   665,   666,   669,   670,
     671,   672,   678,   684,   689,   694,   699,   704,   708,   712,
     716,   722,   728,   733,   734,   735,   736,   737,   741,   745,
     749,   755,   762,   768,   774,   778,   783,   789,   796,   800,
     804,   811,   817,   823,   829,   833,   837,   843,   849,   855,
     861,   865,   869,   875,   881,   885,   889,   893,   899,   900,
     901,   902,   903,   904,   905,   906,   907,   908,   909,   910,
     911,   915,   919,   923,   927,   931,   938,   939,   940,   941,
     945,   949,   953,   957,   961,   967,   968,   969,   971,   972,
     973,   974,   975,   976,   979,   980,   981,   982,   983,   985,
     991,   995,   999,  1006,  1007,  1008,  1012,  1018,  1019,  1025,
    1029,  1033,  1039,  1040,  1041,  1052,  1053,  1056,  1057,  1058,
    1059,  1060,  1061,  1062,  1063,  1067,  1074,  1080,  1084,  1090,
    1091,  1092,  1095,  1096,  1097,  1101,  1102,  1105,  1106,  1113,
    1116,  1117,  1123,  1128,  1133,  1139,  1142,  1143,  1144,  1145,
    1146,  1147,  1148,  1152,  1156,  1160,  1164,  1168,  1172,  1176,
    1183,  1184,  1185,  1186,  1187,  1188,  1189,  1190,  1194,  1195,
    1199,  1200,  1201,  1202,  1203,  1204,  1207,  1208,  1211,  1214,
    1215,  1218,  1219,  1222,  1223,  1224,  1226,  1227,  1228,  1229,
    1230,  1231,  1232,  1233,  1234,  1235,  1238,  1239,  1241,  1242,
    1243,  1244,  1247,  1248,  1249,  1250,  1251,  1252,  1264,  1265,
    1266,  1267,  1268,  1269,  1270,  1271,  1272,  1275,  1276,  1279,
    1282,  1283,  1284,  1285,  1289,  1294,  1295,  1301,  1302,  1305,
    1306,  1307,  1308,  1312,  1318,  1319,  1320,  1325,  1326,  1327,
    1328,  1329,  1330,  1331,  1332,  1335,  1336,  1339,  1340,  1341,
    1342,  1345,  1346,  1349,  1350,  1351,  1352,  1353,  1356,  1357,
    1358,  1359,  1360,  1363,  1364,  1366,  1367,  1368,  1370,  1373,
    1374,  1375,  1379,  1383,  1387,  1394,  1395,  1398,  1401,  1404,
    1405,  1408,  1412,  1413,  1417,  1418,  1419,  1420,  1426,  1431,
    1436,  1442,  1443,  1444,  1445,  1446,  1447,  1449,  1452,  1461,
    1466,  1467,  1468,  1469,  1472,  1473,  1474,  1475,  1476,  1477,
    1478
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
  "method_declaration", "method_h", "arguments", "args_list", "paraself",
  "arg", "default_args_list", "default_arg", "block_stmt", "stmt_list",
  "stmt", "if_stmt", "elif_stmt", "if_header", "elif_header", "while_stmt",
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
      97,    97,    97,    97,    97,    97,    98,    98,    99,    99,
      99,    99,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   103,   103,   103,   104,   104,
     104,   104,   104,   104,   105,   105,   105,   105,   105,   106,
     106,   106,   106,   107,   107,   107,   107,   108,   108,   108,
     108,   108,   109,   109,   109,   110,   110,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   112,   112,   112,   112,   112,   113,   113,   114,
     115,   115,   116,   117,   117,   118,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     120,   120,   120,   120,   120,   120,   120,   120,   121,   121,
     122,   122,   122,   122,   122,   122,   123,   123,   124,   125,
     125,   126,   126,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   128,   128,   129,   129,
     129,   129,   130,   130,   130,   130,   130,   130,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   132,   132,   133,
     134,   134,   134,   134,   134,   135,   135,   136,   136,   137,
     137,   137,   137,   137,   138,   138,   138,   139,   139,   139,
     139,   139,   139,   139,   139,   140,   140,   141,   141,   141,
     141,   142,   142,   143,   143,   143,   143,   143,   144,   144,
     144,   144,   144,   145,   145,   146,   146,   146,   147,   148,
     148,   148,   148,   148,   148,   149,   149,   150,   151,   152,
     152,   153,   154,   154,   155,   155,   155,   155,   155,   155,
     155,   156,   156,   156,   156,   156,   156,   157,   157,   158,
     158,   158,   158,   158,   159,   159,   159,   159,   159,   159,
     159
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
       2,     3,     2,     3,     2,     3,     3,     2,     2,     1,
       1,     2,     2,     2,     2,     3,     3,     4,     4,     1,
       3,     3,     4,     4,     4,     5,     5,     6,     6,     3,
       3,     3,     4,     4,     5,     5,     4,     4,     5,     5,
       5,     5,     6,     6,     7,     7,     5,     5,     6,     6,
       7,     7,     6,     6,     7,     7,     4,     3,     2,     3,
       3,     3,     4,     4,     4,     4,     5,     5,     5,     5,
       6,     6,     6,     6,     6,     6,     4,     4,     3,     4,
       4,     4,     4,     4,     4,     1,     1,     3,     3,     3,
       3,     3,     1,     1,     3,     3,     1,     3,     3,     2,
       3,     3,     4,     3,     1,     4,     4,     3,     4,     5,
       6,     5,     2,     3,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     4,     2,     3,     3,     4,
       8,    10,     2,     4,     4,     3,     5,     3,     2,     2,
       2,     3,     2,     2,     3,     2,     4,     4,     6,     6,
       4,     4,     5,     5,     5,     5,     4,     4,     4,     4,
       3,     3,     3,     5,     5,     5,     7,     1,     3,     5,
       3,     5,     3,     5,     3,     1,     5,     5,     2,     2,
       3,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     4,     1,     1,
       1,     1,     3,     3,     6,     5,     5,     5,     2,     4,
       2,     5,     7,     5,     5,     7,     5,     1,     2,     1,
       2,     2,     4,     3,     4,     2,     2,     3,     1,     1,
       2,     4,     4,     5,     1,     1,     1,     3,     5,     3,
       3,     5,     3,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     3,     2,     1,     3,     3,
       2,     2,     2,     3,     3,     3,     2,     3,     3,     1,
       2,     4,     4,     4,     1,     1,     3,     3,     4,     1,
       3,     3,     3,     3,     3,     3,     3,     1,     3,     1,
       2,     4,     6,     4,     1,     1,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       0,     0,     0,     0,   324,   325,   326,     0,     0,     0,
       0,     0,     4,     8,     0,     0,    89,     0,    87,    81,
      10,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     2,     3,     7,     0,     0,     9,     0,     0,     0,
       6,     0,     5,     0,     0,    82,     0,    13,     0,     0,
       0,     0,     0,     0,    12,     0,     0,     0,     0,     0,
      92,     0,     0,    94,    90,     0,    11,     0,     0,     0,
       0,     0,     0,    86,    88,    33,     0,     0,     0,     0,
      15,     0,    19,     0,     0,     0,     0,     0,    14,     0,
      18,     0,     0,     0,   109,     0,     0,   100,    97,     0,
      99,     0,     0,    93,     0,    95,    91,     0,    25,     0,
       0,    24,     0,     0,    57,    17,     0,    36,     0,     0,
      21,     0,    31,     0,    16,     0,    35,     0,     0,    20,
       0,    30,    32,     0,    83,     0,     0,     0,     0,   104,
       0,     0,     0,     0,     0,   103,     0,     0,     0,     0,
     101,    98,     0,     0,   148,   102,     0,     0,     0,    96,
      34,     0,     0,    29,    27,     0,    26,    28,     0,    23,
      60,    38,     0,     0,    42,     0,     0,     0,     0,    22,
      59,    37,     0,     0,    41,     0,     0,     0,     0,     0,
     186,     0,   175,   183,   182,   176,   194,    82,     0,   147,
     387,     0,   347,   343,   344,   345,   346,   375,   119,   374,
       0,   379,     0,   168,   186,     0,     0,     0,     0,     0,
     106,     0,   151,   110,     0,     0,     0,     0,     0,   105,
       0,     0,   150,   111,     0,     0,     0,   204,     0,     0,
     202,     0,     0,     0,     0,     0,     0,     0,     0,   307,
       0,     0,   319,     0,     0,   369,     0,     0,     0,     0,
     276,     0,   282,   283,   273,   212,     0,   206,   207,     0,
     208,     0,   209,     0,   284,   257,     0,   210,   211,     0,
     274,   275,   277,   279,   280,   278,   285,   281,   265,   333,
       0,   337,   375,   341,   352,   348,   349,   350,   351,   309,
     334,   340,     0,     0,     0,     0,     0,   121,     0,     0,
       0,   120,     0,     0,   149,    58,    48,     0,     0,     0,
      47,     0,     0,     0,    40,     0,     0,    62,    44,     0,
      66,    56,     0,    54,     0,    39,     0,     0,    61,    43,
       0,    65,    53,     0,    55,     0,   170,     0,     0,     0,
     189,     0,     0,   169,     0,     0,   172,   171,     0,     0,
       0,   398,   400,   399,   394,   395,   396,   397,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   390,   174,
     167,   173,   166,   108,     0,     0,   114,     0,     0,   127,
       0,     0,     0,     0,     0,   155,   107,     0,   113,     0,
     126,     0,     0,     0,     0,     0,     0,   154,   361,     0,
       0,     0,     0,     0,   216,   353,     0,   357,     0,   229,
     233,     0,     0,   342,     0,   271,   286,   300,   298,   308,
     387,     0,   310,   311,   316,   318,   315,   320,   387,   366,
       0,     0,     0,   370,     0,     0,     0,     0,   362,   387,
     360,     0,     0,     0,     0,   203,   205,     0,   232,   235,
       0,     0,     0,     0,   214,   213,     0,     0,     0,   146,
     112,     0,     0,   123,   153,     0,     0,   122,   152,    72,
      52,     0,    50,     0,    71,    49,     0,    51,     0,    64,
      46,     0,    68,    80,    77,    63,    45,     0,    67,    78,
      79,   181,     0,   188,   179,   197,   191,     0,     0,   190,
     185,   184,   180,   187,   178,   177,     0,     0,   193,     0,
       0,   381,   382,   383,   384,   385,   386,     0,   388,     0,
       0,   362,     0,   129,     0,     0,   116,     0,   159,   137,
       0,     0,     0,   157,     0,   128,   115,     0,   158,     0,
     136,     0,   156,     0,     0,   363,   387,   313,     0,   234,
     252,   251,   264,   336,     0,   356,   354,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   332,   365,   330,   367,   387,
     186,     0,     0,   218,   217,     0,   329,     0,   364,   359,
     327,   368,    84,     0,     0,     0,   225,     0,     0,   250,
     258,   262,   260,     0,   288,   292,   291,   289,   290,   335,
     293,     0,     0,     0,   125,     0,   131,     0,   124,     0,
     130,     0,    76,    74,    73,    75,    70,    69,     0,   189,
       0,     0,     0,   192,   198,     0,     0,   196,   195,   378,
     393,     0,   391,   118,     0,   163,   139,     0,   160,   143,
     117,     0,   138,   162,   142,     0,   161,     0,     0,     0,
       0,     0,     0,     0,     0,   219,   314,   355,     0,   246,
     247,     0,   336,   240,   241,   248,   249,   236,   237,     0,
       0,     0,     0,     0,   272,   287,   299,     0,     0,     0,
       0,     0,   312,   317,   322,   321,     0,   373,   371,   372,
       0,   215,     0,     0,   224,   223,     0,     0,     0,     0,
       0,     0,     0,   164,   133,     0,   165,   132,   191,   190,
     201,     0,   199,   180,     0,   141,   145,   140,   144,   242,
     243,   244,   245,   323,   252,   261,   253,   296,   255,   254,
     259,     0,     0,   268,   269,     0,   267,   266,   303,     0,
     301,   306,     0,   304,   331,   297,   328,   231,   226,     0,
     227,     0,   295,     0,   135,   134,   200,   392,     0,     0,
       0,     0,     0,   263,   238,   239,     0,   270,     0,     0,
       0,   294,   252,   253,   255,   259,   256,     0,   302,   305,
       0,     0,   220,     0,   253,   256,   259,   221
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     9,    10,    11,    12,    13,    14,   264,    17,    18,
      36,    62,    98,    99,   100,   101,   198,   192,   193,   194,
     195,   196,   265,   266,   267,   268,   606,   269,   607,   270,
     271,   272,   273,   274,   275,   276,   277,   691,   692,   278,
     279,   280,   615,   281,   282,   283,   284,   285,   286,   436,
     287,    15,   288,   289,   290,   291,   207,   293,   294,   416,
     417,   295,   296,   297,   298,   299,   300,   301,   302,   209,
     210,   211,   373
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -463
static const short int yypact[] =
{
    1898,    17,   191,    79,  -463,  -463,  -463,   356,   399,    59,
     741,  1643,  -463,  -463,   315,   280,  -463,    25,   171,  -463,
      77,   161,   197,   211,   619,   292,   274,   262,   752,   302,
    -463,  -463,  -463,  -463,   618,   313,  -463,   278,   330,   365,
    -463,    17,  -463,   362,    34,  -463,  1686,   323,   392,   427,
     433,   467,   499,  1727,   446,   528,   537,   546,   557,   605,
    -463,   518,   661,  -463,  -463,   402,   551,   616,   640,   659,
     667,   722,   734,   171,  -463,  -463,   217,   726,   744,   520,
     688,   756,   706,   771,   775,   782,   788,   586,   740,   795,
     745,   811,   815,   759,    30,  1789,  1862,  -463,  -463,    20,
    -463,   480,   154,  -463,   518,  -463,  -463,   595,   770,   851,
     890,   854,   924,   963,  -463,   926,   982,  -463,   570,   627,
     936,   714,   945,   972,  1000,  1036,  -463,   821,   717,  1006,
     727,  1023,  1046,   140,   164,  1060,  1687,   391,    -3,    18,
    1114,   462,   480,   505,   367,    48,   530,  1131,   480,   614,
    -463,  -463,  1135,  1708,  -463,    45,   635,   637,   480,  -463,
    -463,   839,   753,  1068,  1076,   768,  1084,  1096,   798,  1098,
    -463,  -463,  1008,   828,  -463,  1057,   848,   861,   921,  1119,
    -463,  -463,  1067,   934,  -463,  1077,   974,   975,   582,   408,
    1179,  1194,  1199,  -463,  -463,  1203,  -463,   685,  1208,  -463,
    -463,  1209,  -463,  -463,  -463,  -463,  -463,  -463,  2710,  -463,
     832,  -463,   654,  -463,  1080,   220,   568,   225,  1687,   855,
    1221,   819,  -463,    56,   295,   865,   480,   641,  1687,  1244,
     914,   855,  -463,    64,   938,   454,   480,  -463,   236,  1124,
    -463,   420,  1687,  1687,   121,  1854,  1687,  1687,  2073,  1687,
     742,   569,  1687,  2020,  1687,  1687,  1184,  1255,  1272,  1271,
    -463,   309,  -463,  -463,  1280,  -463,  1781,  -463,  -463,  1854,
    -463,  1854,  -463,  1854,  1283,  1287,   487,  -463,  -463,    76,
    -463,  -463,  -463,  -463,  -463,  -463,  -463,  -463,  -463,  1299,
    1301,  -463,  1322,  -463,  -463,  -463,  -463,  -463,  -463,  -463,
    1324,  -463,  1197,  1270,  1361,  1687,     9,    74,   678,   480,
     387,   133,   708,   480,  -463,  -463,  -463,  1103,   986,   994,
    -463,  1118,  1007,  1032,  -463,  1120,  1047,  -463,  -463,  1129,
    -463,  -463,  1132,  -463,  1140,  -463,  1150,  1048,  -463,  -463,
    1153,  -463,  -463,  1176,  -463,  1192,  -463,   237,  1687,    42,
    1355,  1345,   373,  -463,   406,   419,  -463,  -463,  1359,  1687,
    1687,  -463,  -463,  -463,  -463,  -463,  -463,  -463,  1687,  1687,
    1687,  1687,  1687,  1687,   750,  1371,   730,    85,  -463,  -463,
    -463,  -463,  -463,  1363,  1205,   685,  2710,   581,  1687,   135,
     480,  1687,   643,   137,   480,  -463,  1365,  1216,  2710,  1687,
     163,   480,   581,  1687,   184,   480,   675,  -463,  -463,  2499,
    2064,  2108,  1375,  1326,  -463,  -463,   485,  -463,  2532,  2710,
    2710,   538,   253,  -463,  1396,  2558,  2591,   333,    47,  1280,
    1373,  1346,  1280,  1398,  -463,  1409,  -463,  2617,    58,  -463,
      94,   134,    32,  1280,     0,  1342,  1356,  1414,   750,  1223,
    -463,   542,  1226,  1413,  1687,  -463,  -463,   698,  -463,  -463,
    1420,  1421,  2117,   319,  -463,  -463,  1423,   319,   593,  -463,
    2710,   697,  1687,  1415,  -463,   705,  1687,  1417,  -463,  -463,
    -463,  1249,  -463,  1264,  -463,  -463,  1266,  -463,  1275,  -463,
    -463,  1278,  -463,  -463,  -463,  -463,  -463,  1286,  -463,  -463,
    -463,  1419,   414,  -463,  -463,  2710,  1289,  1430,  1687,  1418,
     393,  1429,  1292,  -463,  -463,  1203,  1198,   200,  -463,   905,
     978,   859,   859,   859,   859,   859,   859,  1051,  -463,  1399,
    2388,  -463,  1687,  1426,    14,   480,  2710,  1687,  -463,  2710,
     190,   480,  1687,  -463,  1687,  1428,  2710,  1687,  -463,   480,
    2710,  1687,  -463,   205,   480,  -463,   358,  1280,   435,  2329,
     455,  1429,  -463,    35,  1687,  1687,  -463,  1687,   472,  2152,
    1444,   472,   472,   472,    28,  2161,  1687,  2196,  1498,  1571,
    2205,  1687,  1445,   210,  2240,  -463,  -463,  -463,  -463,   230,
    1321,   157,   162,  -463,  -463,  1343,  -463,  2249,  -463,  -463,
    -463,  -463,  2710,  1927,  1854,  1687,  1436,  1854,  1447,  1287,
    -463,  1466,  -463,  1644,  1280,  -463,  -463,  -463,  -463,  -463,
    -463,  1439,   218,  2362,   214,   480,  2710,  1687,   298,   480,
    2710,  1687,  -463,  -463,  -463,  -463,  -463,  -463,   287,  -463,
    1449,  1687,  1462,  -463,  2710,  1687,   442,  -463,  -463,  -463,
    -463,  1687,  -463,  2710,  1687,  -463,  2710,  1687,  -463,  2710,
    2710,  1687,  2710,  -463,  2710,  1687,  -463,   472,   472,  1687,
    2284,  1472,   319,  1474,  1485,  -463,  1280,  -463,  2414,  1280,
    -463,   338,  -463,  1280,  -463,  1280,  -463,  1280,  -463,   480,
    1854,  1481,  1482,  1466,  -463,  2710,  1336,  1453,  2447,  1456,
    2473,  1336,  1280,  -463,  -463,  2710,    29,  -463,  -463,  -463,
     319,  -463,   957,  2000,  -463,  -463,  1562,  1854,  1635,  1493,
     319,  1487,  1687,  -463,  2710,  1687,  -463,  2710,  -463,  -463,
    2710,  1687,  2710,  1419,  2643,  2710,  2710,  2710,  2710,  1280,
    -463,  1280,  -463,  2710,   507,  -463,   522,  -463,  1338,  1429,
    -463,  2293,   472,  -463,  -463,  1489,  -463,  -463,  -463,  1687,
    -463,  -463,  1687,  -463,  -463,  -463,  -463,  2710,  -463,  1494,
    -463,  1496,  -463,   319,  2710,  2710,  2710,  -463,  1497,  1502,
    1505,  1507,  1508,  1466,  1280,  -463,   236,  -463,  2669,  2695,
    1687,  -463,  1344,   522,  1347,  1460,  1350,  1416,  -463,  -463,
    1510,  1518,  -463,  1520,  1358,  1358,  1460,  -463
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -463,  -463,  -463,  -463,  1517,    -8,  -463,    40,   509,  1509,
    -463,  1495,  1424,  -463,  -463,   -48,   448,  -344,  -463,  -340,
    1195,  1196,   -64,  -463,  -241,  -463,   847,  -463,  -463,  -463,
    -463,  -463,  -463,  -409,  1112,  -226,  -463,  -463,  -463,  -463,
    -463,  -463,  -450,  -463,  -463,  -463,  -463,  -463,  -463,   991,
    -463,   556,  -401,  -463,  -463,  -463,  -124,  -463,  -462,  -463,
    1010,  -190,  -454,  -463,  -463,  1315,  -463,  -463,  -136,  -463,
    -141,  -463,  -463
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -390
static const short int yytable[] =
{
     208,   616,   561,    33,   424,   616,   589,   504,   511,   618,
     562,   517,   303,   618,   514,   217,   502,   620,   422,  -390,
     378,   150,   428,    16,   433,   456,    40,   441,   457,   292,
     458,  -390,   459,   218,    41,   452,   135,   154,   751,   570,
      16,   454,    75,   506,  -390,   136,  -390,   142,   148,  -390,
     216,   304,   689,    97,   158,   590,   462,  -390,   507,    30,
     305,   612,   471,   228,   133,  -390,   202,   584,   203,   204,
     764,   391,   205,   206,   588,  -390,   133,   464,   222,   403,
      21,   137,   386,   151,   232,   137,   531,   579,    42,   472,
     690,   200,   398,   450,   314,   226,    97,   137,   675,   585,
     592,   236,   409,   454,   303,   418,   419,   420,   309,   313,
     425,   426,   137,   378,   680,   137,   437,   684,   686,   688,
     423,   292,   374,   137,   423,   303,   292,   421,   303,   292,
     303,   137,   303,   241,  -390,   586,  -390,   292,   217,   465,
     201,   137,   292,   462,    44,   292,   188,   292,   476,   292,
     537,   202,   542,   203,   204,    93,   189,   205,   206,    37,
     155,   253,   395,   254,  -390,   256,   454,    45,   562,   470,
     197,   646,   407,   390,   694,   587,   562,   394,   547,   562,
     189,    43,   401,   562,   558,   217,   405,   202,   261,   203,
     204,   217,    19,   205,   206,   190,   562,    20,   708,   551,
     137,   648,   137,   709,   137,   657,   217,   156,   157,   646,
     616,   704,   505,   740,   742,  -390,   200,    47,   618,   190,
     665,   381,   747,   520,   521,   114,    41,   454,   382,   722,
     137,   385,   522,   523,   524,   525,   526,   527,   409,   347,
     530,   189,   200,   501,   408,   474,   638,   237,   616,   478,
      46,   137,   536,   502,   572,   539,   618,   137,   616,   721,
     765,   561,   462,   546,   749,   201,   618,   550,    54,   745,
     772,   707,   137,   617,   559,   573,   202,   617,   203,   204,
     190,   137,   205,   206,    66,    37,   292,   423,   728,   429,
     432,   201,   503,   440,   442,   443,   392,    50,   785,  -390,
      83,   451,   202,   507,   203,   204,   514,    57,   205,   206,
     448,   616,   409,   725,    63,   449,    34,   450,   602,   618,
     374,   241,    35,   791,    64,   200,   538,    61,    53,   649,
     543,   241,   623,    38,    39,    67,   626,   548,   423,   535,
     630,   552,   577,   570,   541,    51,    52,   751,   570,   253,
     745,   254,   255,   256,   549,    58,    59,    22,   554,   613,
     752,    23,   714,   715,   201,   137,   718,   580,    74,   561,
      70,   749,   644,   578,   201,   202,   261,   203,   204,   510,
     667,   205,   206,    68,    69,   202,   377,   203,   204,   502,
      79,   205,   206,     4,     5,     6,   653,   212,    80,   213,
      26,   656,  -390,   105,    27,   649,   659,   189,   660,   638,
      24,   662,   512,   106,   350,   664,   104,   451,    71,    72,
     639,   227,   189,   625,   351,   516,   200,   629,   190,   418,
     640,   678,    81,   415,   133,   189,     4,     5,     6,    82,
     695,   475,   698,   700,   462,   423,   214,   705,   733,   754,
     557,   423,    28,   423,   133,   406,   423,   668,   502,    92,
     423,   513,   303,   303,  -390,   671,   303,    48,   220,   716,
     672,   655,    83,   423,   190,   201,   768,   658,   200,   292,
     292,   152,   617,   292,   591,   663,   202,   153,   203,   204,
     666,   724,   205,   206,   565,   727,   462,   513,   566,     4,
       5,     6,   463,   614,    84,   730,    93,   614,   622,   732,
      50,   223,   613,    87,   787,   734,  -390,   779,   735,    93,
     617,   736,  -263,     2,    94,   737,    16,   201,   117,   738,
     617,  -390,  -336,   743,    88,    55,   229,  -336,   202,   568,
     203,   204,    89,   598,   205,   206,   423,   569,   570,   303,
     599,   454,    90,    76,   755,     4,     5,     6,   224,   225,
     571,   723,    91,    25,    29,   726,   292,     4,     5,     6,
     434,    95,    96,    77,   383,   435,   303,   767,   170,    41,
      49,   191,    93,   617,    56,   215,   774,   534,   118,   775,
     346,   347,    16,   292,   126,   776,   127,   348,   349,   200,
     529,    16,    78,   160,   676,     4,     5,     6,   679,    86,
      92,   683,   685,   687,   303,    93,   161,   102,   107,    57,
     233,   702,   108,   788,    48,   753,   789,   423,   172,    60,
     175,   292,    61,    16,   621,   171,   306,   182,   310,   185,
      67,   307,    70,   311,    93,   109,    85,   396,   201,   540,
     797,   143,   149,   440,   767,   379,     4,     5,     6,   202,
     102,   203,   204,   347,   110,   205,   206,   234,   235,   348,
     349,   317,   103,   111,   321,   104,    93,   325,     4,     5,
       6,   553,   329,   110,   473,   332,   334,   336,    68,   308,
     312,    72,   340,   356,   347,   343,   345,   221,    93,   603,
     348,   349,   230,   624,  -222,  -222,    93,   739,   741,  -222,
    -222,   628,   614,   112,   477,   604,  -222,   605,  -222,  -222,
      16,  -222,   174,    16,  -222,   181,  -222,   112,  -222,  -222,
    -222,  -222,   115,    16,  -222,   184,   200,   529,  -222,   113,
    -222,  -222,  -222,   374,    31,     1,     2,     3,   430,   116,
     614,  -222,  -222,  -222,   241,   119,   200,    55,   408,    16,
     614,   316,   120,  -222,  -222,  -222,  -222,  -222,  -222,  -222,
    -222,  -222,   384,   121,    16,   387,   320,   122,     4,     5,
       6,   123,   253,   397,   254,   201,   256,   402,   124,     4,
       5,     6,   784,   125,     7,     8,   202,   201,   203,   204,
     431,   129,   205,   206,    16,   201,   324,   128,   202,   261,
     203,   204,   130,   614,   205,   206,   202,   131,   203,   204,
      93,   132,   205,   206,    81,   389,   133,   481,   483,   180,
      41,   486,   488,   374,    16,   491,   328,   162,  -389,  -389,
    -389,  -389,   375,  -389,  -389,  -389,   497,   315,    41,  -389,
    -389,  -389,  -389,  -389,    16,  -389,   331,   163,  -389,  -389,
    -389,  -389,  -389,  -389,  -389,  -389,    93,    16,  -389,   333,
      84,   393,   376,  -389,  -389,  -389,  -389,  -389,  -389,  -389,
    -389,  -389,  -389,  -389,  -389,  -389,  -389,  -389,  -389,  -389,
    -389,  -389,     4,     5,     6,  -389,   164,  -389,  -389,   377,
    -389,  -389,  -389,  -389,  -389,  -389,   374,   364,   365,   366,
     367,  -377,  -377,  -377,  -377,    93,  -377,  -377,  -377,    89,
     400,   165,  -377,  -377,  -377,  -377,  -377,    16,  -377,   335,
     166,  -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,    93,
      16,  -377,   339,    91,   404,  -377,  -377,  -377,  -377,  -377,
    -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,
    -377,  -377,  -377,  -377,  -377,   766,   751,   570,  -377,   167,
    -377,  -377,   377,  -377,  -377,  -377,  -377,  -377,  -377,   359,
      16,    16,   342,   344,  -380,  -380,  -380,  -380,   169,  -380,
    -380,  -380,    16,   168,   480,  -380,  -380,  -380,  -380,  -380,
      16,  -380,   482,   173,  -380,  -380,  -380,   360,  -380,  -380,
    -380,  -380,   176,    16,  -380,   485,   327,    41,  -380,  -380,
    -380,  -380,  -380,   361,   362,   363,   364,   365,   366,   367,
     368,  -380,  -380,  -380,   369,   370,   371,   372,    16,   177,
     487,  -380,   179,  -380,  -380,  -380,  -380,  -380,  -380,  -380,
    -380,  -380,   359,    16,    16,   490,   496,  -376,  -376,  -376,
    -376,   199,  -376,  -376,  -376,   330,    41,   178,  -376,  -376,
    -376,  -376,  -376,   183,  -376,   338,    41,  -376,  -376,  -376,
     360,  -376,  -376,  -376,  -376,   341,    41,  -376,   380,   352,
     186,  -376,  -376,  -376,  -376,  -376,   361,   362,   363,   364,
     365,   366,   367,   368,  -376,  -376,  -376,   369,   370,   371,
     372,   479,    41,   187,  -376,   219,  -376,  -376,  -376,  -376,
    -376,  -376,  -376,  -376,  -376,   410,   484,    41,   489,    41,
    -387,  -387,   231,   411,  -387,   318,  -387,   492,    41,  -387,
     493,    41,  -387,   319,  -387,  -387,   237,  -387,   494,    41,
    -387,   322,  -387,  -387,  -387,  -387,  -387,  -387,   495,    41,
    -387,   498,    41,   323,  -387,   326,  -387,  -387,  -387,  -387,
    -387,  -387,  -387,  -387,  -387,  -387,  -387,  -387,  -387,  -387,
    -387,  -387,   413,  -387,   499,    41,   337,   414,   352,  -387,
    -387,  -387,  -387,  -387,  -387,  -387,  -387,  -387,   359,   647,
     500,    41,   353,   -85,   -85,   -85,   -85,   347,   354,   -85,
     116,   533,   355,   348,   349,   -85,   357,   -85,   -85,   358,
     -85,   125,   545,   -85,   444,   -85,   360,   -85,   -85,   -85,
     -85,   596,   597,   -85,   600,   462,   388,   -85,   -85,   -85,
     -85,   -85,   361,   362,   363,   364,   365,   366,   367,   368,
     -85,   -85,   -85,   369,   370,   371,   372,   632,    41,   399,
     -85,   445,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   374,   633,    41,   634,    41,  -389,  -389,   446,  -389,
     375,   447,  -389,   635,    41,   467,   636,    41,  -389,   454,
    -389,  -389,   460,  -389,   637,    41,  -389,   461,  -389,  -389,
    -389,  -389,  -389,  -389,   641,   642,  -389,   348,   349,  -338,
     468,   466,  -389,  -389,  -389,  -389,  -389,  -389,  -389,  -389,
    -389,  -389,  -389,  -389,  -389,  -389,  -389,  -389,  -389,  -389,
     352,   358,  -342,  -389,  -339,  -389,  -389,   377,  -389,  -389,
    -389,  -389,  -389,  -389,   374,   751,   570,  -390,   782,  -377,
    -377,   509,  -377,  -390,   800,  -377,  -390,   801,   710,  -390,
     803,  -377,   469,  -377,  -377,   519,  -377,  -390,   674,  -377,
     508,  -377,  -377,  -377,  -377,  -377,  -377,   528,   532,  -377,
     544,   563,   580,  -377,   564,  -377,  -377,  -377,  -377,  -377,
    -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,
    -377,  -377,  -377,   574,   581,   593,   711,   462,  -377,  -377,
     377,  -377,  -377,  -377,  -377,  -377,  -377,   359,   582,   594,
     595,   601,  -380,  -380,   555,  -380,   608,   610,  -380,   619,
     627,   643,   631,   645,  -380,   638,  -380,  -380,  -390,  -380,
     650,   654,  -380,   661,  -380,   360,  -380,  -380,  -380,  -380,
     682,   435,  -380,   717,   720,   729,  -380,   719,  -380,  -380,
    -380,   361,   362,   363,   364,   365,   366,   367,   368,  -380,
    -380,  -380,   369,   370,   371,   372,   570,   731,   746,  -380,
     748,  -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,
     786,   750,   756,   757,   758,   239,   153,   761,   -85,   771,
     790,   241,   773,   792,   200,   697,   674,   242,   793,   243,
     244,   794,   245,   795,   796,   246,   804,   247,   360,   248,
     249,   250,   251,  -390,   805,   252,   806,    32,   159,   253,
      65,   254,   255,   256,   361,   362,   363,   364,   365,   366,
     367,   368,   257,   258,   259,   369,   370,   371,   372,   515,
      73,   518,   -85,   201,   260,   202,   261,   203,   204,   262,
     263,   205,   206,   359,   202,   770,   203,   204,  -230,  -230,
     205,   206,   609,   703,  -230,   677,   453,   200,   699,     0,
    -230,     0,  -230,  -230,     0,  -230,     0,     0,  -230,     0,
    -230,   360,  -230,  -230,  -230,  -230,     0,     0,  -230,     0,
       0,     0,  -230,     0,  -230,  -230,  -230,   361,   362,   363,
     364,   365,   366,   367,   368,  -230,  -230,  -230,   369,   370,
     371,   372,     0,     0,     0,     0,   201,  -230,  -230,  -230,
    -230,  -230,  -230,  -230,  -230,  -230,   769,   202,     0,   203,
     204,  -228,  -228,   205,   206,     0,  -228,  -228,     2,     3,
     200,     0,  -228,  -228,   605,  -228,  -228,     0,  -228,     0,
       0,  -228,     0,  -228,     0,  -228,  -228,  -228,  -228,     0,
       0,  -228,     0,     0,     0,  -228,     0,  -228,  -228,  -228,
       4,     5,     6,     0,     0,   439,     0,     0,  -228,  -228,
    -228,    77,     0,   200,     0,     0,     7,     8,     0,   201,
    -228,  -228,  -228,  -228,  -228,  -228,  -228,  -228,  -228,   238,
     202,     0,   203,   204,   239,   153,   205,   206,     0,   240,
     241,     0,     0,     4,     5,     6,   242,     0,   243,   244,
       0,   245,    85,     0,   246,     0,   247,     0,   248,   249,
     250,   251,   201,     0,   252,     0,     0,     0,   253,     0,
     254,   255,   256,   202,     0,   203,   204,     0,     0,   205,
     206,   257,   258,   259,     4,     5,     6,     0,     0,     0,
       0,     0,     0,   260,   202,   261,   203,   204,   262,   263,
     205,   206,   238,     0,     0,     0,     0,   239,   153,     0,
     138,     0,   455,   241,    23,   139,     0,     0,     0,   242,
       0,   243,   244,     0,   245,     0,     0,   246,     0,   247,
       0,   248,   249,   250,   251,     0,     0,   252,     0,     0,
       0,   253,     0,   254,   255,   256,     4,     5,     6,     0,
       0,     0,     0,     0,   257,   258,   259,     0,     0,     0,
       0,     0,   140,   141,     0,     0,   260,   202,   261,   203,
     204,   262,   263,   205,   206,   238,     0,     0,     0,     0,
     239,   153,     0,   144,     0,     0,   241,    27,   145,     0,
       0,     0,   242,     0,   243,   244,     0,   245,     0,     0,
     246,     0,   247,     0,   248,   249,   250,   251,     0,     0,
     252,     0,     0,     0,   253,     0,   254,   255,   256,     4,
       5,     6,     1,     2,     3,     0,     0,   257,   258,   259,
       0,     0,     0,     0,     0,   146,   147,     0,     0,   260,
     202,   261,   203,   204,   262,   263,   205,   206,   238,     0,
       0,     0,     0,   713,   153,     4,     5,     6,     0,   241,
       0,     0,     0,     0,     0,   242,     0,   243,   244,     0,
     245,     7,     8,   246,     0,   247,     0,   248,   249,   250,
     251,     0,     0,   252,     0,     0,     0,   253,     0,   254,
     255,   256,     0,     0,     0,     0,     0,     0,     0,     0,
     257,   258,   259,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   260,   202,   261,   203,   204,   262,   263,   205,
     206,   410,     0,     0,     0,     0,   200,     0,     0,   411,
    -387,     0,     0,     0,     0,  -387,     0,     0,     0,     0,
       0,   374,     0,     0,     0,     0,   438,     0,     0,  -387,
       0,     0,   241,     0,     0,     0,     0,     0,     0,     0,
    -387,     0,     0,     0,     0,  -387,  -387,  -387,  -387,  -387,
    -387,  -387,  -387,     0,     0,   201,  -387,  -387,   413,  -387,
     253,   439,   254,   414,   256,   374,   202,  -387,   203,   204,
     556,     0,   205,   206,   374,   201,   241,     0,     0,   427,
       0,     0,     0,     0,     0,   241,   202,   261,   203,   204,
       0,     0,   205,   206,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   253,     0,   254,     0,   256,   374,
       0,     0,     0,   253,   560,   254,     0,   256,   374,   201,
     241,     0,     0,   611,     0,     0,     0,     0,     0,   241,
     202,   261,   203,   204,     0,     0,   205,   206,     0,   202,
     261,   203,   204,     0,     0,   205,   206,     0,   253,     0,
     254,     0,   256,   374,     0,     0,     0,   253,   681,   254,
       0,   256,   374,     0,   241,     0,     0,   693,     0,     0,
       0,     0,     0,   241,   202,   261,   203,   204,     0,     0,
     205,   206,     0,   202,   261,   203,   204,     0,     0,   205,
     206,     0,   253,     0,   254,     0,   256,   374,     0,     0,
       0,   253,   696,   254,     0,   256,   374,     0,   241,     0,
       0,   701,     0,     0,     0,     0,     0,   241,   202,   261,
     203,   204,     0,     0,   205,   206,     0,   202,   261,   203,
     204,     0,     0,   205,   206,     0,   253,     0,   254,     0,
     256,   374,     0,     0,     0,   253,   706,   254,     0,   256,
     374,     0,   241,     0,     0,   712,     0,     0,     0,     0,
       0,   241,   202,   261,   203,   204,     0,     0,   205,   206,
       0,   202,   261,   203,   204,     0,     0,   205,   206,     0,
     253,     0,   254,     0,   256,   374,     0,     0,     0,   253,
     744,   254,     0,   256,   374,     0,   241,     0,     0,   783,
       0,     0,     0,     0,     0,   241,   202,   261,   203,   204,
       0,     0,   205,   206,     0,   202,   261,   203,   204,     0,
       0,   205,   206,     0,   253,     0,   254,     0,   256,     0,
    -390,     0,     0,   253,     0,   254,     0,   256,   669,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     202,   261,   203,   204,     0,     0,   205,   206,   360,   202,
     261,   203,   204,   359,     0,   205,   206,     0,     0,   651,
       0,   -85,     0,     0,   361,   362,   363,   364,   365,   366,
     367,   368,     0,     0,     0,   369,   370,   371,   372,   359,
       0,   360,   -85,     0,     0,   651,     0,     0,     0,     0,
       0,     0,     0,   652,     0,     0,     0,   361,   362,   363,
     364,   365,   366,   367,   368,   359,     0,   360,   369,   370,
     371,   372,     0,  -358,     0,     0,     0,  -358,     0,   652,
       0,     0,     0,   361,   362,   363,   364,   365,   366,   367,
     368,     0,     0,   360,   369,   370,   371,   372,   359,     0,
       0,     0,     0,     0,   759,     0,     0,     0,     0,   361,
     362,   363,   364,   365,   366,   367,   368,     0,     0,     0,
     369,   370,   371,   372,   359,     0,   360,     0,     0,     0,
     762,     0,     0,     0,     0,     0,     0,     0,   760,     0,
       0,     0,   361,   362,   363,   364,   365,   366,   367,   368,
     359,     0,   360,   369,   370,   371,   372,   555,     0,     0,
       0,     0,     0,     0,   763,     0,     0,     0,   361,   362,
     363,   364,   365,   366,   367,   368,     0,     0,   360,   369,
     370,   371,   372,   359,     0,     0,     0,     0,     0,   567,
       0,     0,     0,     0,   361,   362,   363,   364,   365,   366,
     367,   368,     0,     0,     0,   369,   370,   371,   372,  -390,
       0,   360,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   361,   362,   363,
     364,   365,   366,   367,   368,   575,     0,   360,   369,   370,
     371,   372,  -390,     0,     0,     0,     0,     0,     0,     0,
     576,     0,     0,   361,   362,   363,   364,   365,   366,   367,
     368,     0,     0,     0,   369,   370,   371,   372,  -390,     0,
     360,     0,     0,     0,     0,     0,   583,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   361,   362,   363,   364,
     365,   366,   367,   368,   359,     0,   360,   369,   370,   371,
     372,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   361,   362,   363,   364,   365,   366,   367,   368,
     359,     0,   360,   369,   370,   371,   372,     0,     0,     0,
       0,     0,     0,     0,   777,     0,     0,     0,   361,   362,
     363,   364,   365,   366,   367,   368,   359,     0,   360,   369,
     370,   371,   372,     0,     0,     0,     0,     0,     0,     0,
     798,  -390,     0,     0,   361,   362,   363,   364,   365,   366,
     367,   368,     0,     0,   360,   369,   370,   371,   372,     0,
       0,     0,     0,     0,     0,     0,   799,     0,     0,   360,
     361,   362,   363,   364,   365,   366,   367,   368,     0,     0,
       0,   369,   370,   371,   372,   361,   362,   363,   364,   365,
     366,   367,   368,     0,     0,     0,   369,   370,   371,   372
};

static const short int yycheck[] =
{
     136,   463,   411,    11,   245,   467,     6,   347,   352,   463,
     411,   355,   153,   467,   354,     1,    16,   467,   244,     1,
     210,     1,   248,     6,   250,   266,     1,   253,   269,   153,
     271,     1,   273,    15,     9,   261,     6,   101,     9,    10,
       6,     9,     8,     1,     9,    15,     1,    95,    96,     1,
      53,     6,    24,    61,   102,    55,     9,     1,    16,     0,
      15,   462,    53,    15,    67,     1,    66,     9,    68,    69,
      41,    15,    72,    73,    42,     1,    67,     1,   142,    15,
       1,    67,   218,    63,   148,    67,     1,    40,    63,    15,
      62,     6,   228,     8,   158,   143,   104,    67,    63,    41,
     444,   149,   238,     9,   245,   241,   242,   243,   156,   157,
     246,   247,    67,   303,   568,    67,   252,   571,   572,   573,
     244,   245,     1,    67,   248,   266,   250,     6,   269,   253,
     271,    67,   273,    12,     1,    41,     1,   261,     1,    63,
      55,    67,   266,     9,    67,   269,     6,   271,    15,   273,
      15,    66,    15,    68,    69,     1,    16,    72,    73,     5,
       6,    40,   226,    42,     1,    44,     9,     6,   569,   305,
       6,     9,   236,   221,   575,    41,   577,   225,    15,   580,
      16,    10,   230,   584,   410,     1,   234,    66,    67,    68,
      69,     1,     1,    72,    73,    55,   597,     6,    41,    15,
      67,     1,    67,    41,    67,    15,     1,    53,    54,     9,
     672,     1,   348,   667,   668,     1,     6,     6,   672,    55,
      15,     1,   672,   359,   360,     8,     9,     9,     8,    15,
      67,     6,   368,   369,   370,   371,   372,   373,   374,     9,
     376,    16,     6,     6,     8,   309,    16,    11,   710,   313,
      53,    67,   388,    16,     1,   391,   710,    67,   720,    41,
     710,   670,     9,   399,   673,    55,   720,   403,     6,   670,
     720,    41,    67,   463,   410,    22,    66,   467,    68,    69,
      55,    67,    72,    73,     6,     5,   410,   411,     1,   249,
     250,    55,    55,   253,   254,   255,     1,     5,   752,     1,
       5,   261,    66,    16,    68,    69,   646,     5,    72,    73,
       1,   773,   448,    15,     1,     6,     1,     8,   454,   773,
       1,    12,     7,   773,    11,     6,   390,    14,    54,   519,
     394,    12,   468,    53,    54,     5,   472,   401,   462,   387,
     476,   405,     9,    10,   392,    53,    54,     9,    10,    40,
     751,    42,    43,    44,   402,    53,    54,     1,   406,    40,
      22,     5,   603,   604,    55,    67,   607,     9,     6,   778,
       5,   780,   508,    40,    55,    66,    67,    68,    69,     6,
      22,    72,    73,    53,    54,    66,    67,    68,    69,    16,
      67,    72,    73,    37,    38,    39,   532,     6,     6,     8,
       1,   537,     9,     1,     5,   595,   542,    16,   544,    16,
      54,   547,     6,    11,     6,   551,    14,   377,    53,    54,
       6,    54,    16,   471,    16,     6,     6,   475,    55,   565,
      16,   567,     5,    13,    67,    16,    37,    38,    39,     6,
     576,    54,   578,   579,     9,   569,    55,   583,     6,   690,
     410,   575,    53,   577,    67,     1,   580,    22,    16,     5,
     584,    55,   603,   604,     9,    10,   607,     5,     6,   605,
      15,   535,     5,   597,    55,    55,   717,   541,     6,   603,
     604,     1,   672,   607,   444,   549,    66,     7,    68,    69,
     554,   627,    72,    73,     9,   631,     9,    55,    13,    37,
      38,    39,    15,   463,     5,   641,     1,   467,   468,   645,
       5,     6,    40,    67,   755,   651,     9,    10,   654,     1,
     710,   657,    15,     5,     6,   661,     6,    55,     8,   665,
     720,     9,    10,   669,     6,     5,     6,    15,    66,     1,
      68,    69,     5,     1,    72,    73,   670,     9,    10,   690,
       8,     9,     6,    44,   690,    37,    38,    39,    53,    54,
      22,   625,     5,     7,     8,   629,   690,    37,    38,    39,
       1,    53,    54,     5,     6,     6,   717,   713,     8,     9,
      24,   133,     1,   773,    28,   137,   722,     6,    79,   725,
       8,     9,     6,   717,     8,   731,    87,    15,    16,     6,
       7,     6,    46,     8,   564,    37,    38,    39,   568,    53,
       5,   571,   572,   573,   755,     1,   107,    61,    67,     5,
       6,   581,     6,   759,     5,   689,   762,   751,   119,    11,
     121,   755,    14,     6,    41,     8,     1,   128,     1,   130,
       5,     6,     5,     6,     1,     5,     5,     6,    55,     6,
     786,    95,    96,   613,   790,     1,    37,    38,    39,    66,
     104,    68,    69,     9,     5,    72,    73,    53,    54,    15,
      16,   162,    11,     6,   165,    14,     1,   168,    37,    38,
      39,     6,   173,     5,     6,   176,   177,   178,    53,    54,
      53,    54,   183,     8,     9,   186,   187,   141,     1,     1,
      15,    16,   146,     6,     6,     7,     1,   667,   668,    11,
      12,     6,   672,     5,     6,    17,    18,    19,    20,    21,
       6,    23,     8,     6,    26,     8,    28,     5,    30,    31,
      32,    33,     6,     6,    36,     8,     6,     7,    40,     5,
      42,    43,    44,     1,     3,     4,     5,     6,     6,     5,
     710,    53,    54,    55,    12,    67,     6,     5,     8,     6,
     720,     8,     6,    65,    66,    67,    68,    69,    70,    71,
      72,    73,   216,    67,     6,   219,     8,     6,    37,    38,
      39,     6,    40,   227,    42,    55,    44,   231,     6,    37,
      38,    39,   752,     5,    53,    54,    66,    55,    68,    69,
      58,     6,    72,    73,     6,    55,     8,    67,    66,    67,
      68,    69,    67,   773,    72,    73,    66,     6,    68,    69,
       1,     6,    72,    73,     5,     6,    67,   318,   319,     8,
       9,   322,   323,     1,     6,   326,     8,    67,     6,     7,
       8,     9,    10,    11,    12,    13,   337,     8,     9,    17,
      18,    19,    20,    21,     6,    23,     8,     6,    26,    27,
      28,    29,    30,    31,    32,    33,     1,     6,    36,     8,
       5,     6,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    37,    38,    39,    63,     6,    65,    66,    67,
      68,    69,    70,    71,    72,    73,     1,    48,    49,    50,
      51,     6,     7,     8,     9,     1,    11,    12,    13,     5,
       6,    67,    17,    18,    19,    20,    21,     6,    23,     8,
       6,    26,    27,    28,    29,    30,    31,    32,    33,     1,
       6,    36,     8,     5,     6,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,     8,     9,    10,    63,     6,
      65,    66,    67,    68,    69,    70,    71,    72,    73,     1,
       6,     6,     8,     8,     6,     7,     8,     9,     6,    11,
      12,    13,     6,    67,     8,    17,    18,    19,    20,    21,
       6,    23,     8,    67,    26,    27,    28,    29,    30,    31,
      32,    33,    67,     6,    36,     8,     8,     9,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,     6,    67,
       8,    63,     6,    65,    66,    67,    68,    69,    70,    71,
      72,    73,     1,     6,     6,     8,     8,     6,     7,     8,
       9,     1,    11,    12,    13,     8,     9,    67,    17,    18,
      19,    20,    21,    67,    23,     8,     9,    26,    27,    28,
      29,    30,    31,    32,    33,     8,     9,    36,     8,     9,
      67,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,     8,     9,    67,    63,     1,    65,    66,    67,    68,
      69,    70,    71,    72,    73,     1,     8,     9,     8,     9,
       6,     7,     1,     9,    10,    67,    12,     8,     9,    15,
       8,     9,    18,    67,    20,    21,    11,    23,     8,     9,
      26,    67,    28,    29,    30,    31,    32,    33,     8,     9,
      36,     8,     9,    67,    40,    67,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,     8,     9,    67,    63,     9,    65,
      66,    67,    68,    69,    70,    71,    72,    73,     1,     1,
       8,     9,     8,     6,     7,     8,     9,     9,     9,    12,
       5,     6,     9,    15,    16,    18,     8,    20,    21,    10,
      23,     5,     6,    26,    40,    28,    29,    30,    31,    32,
      33,     8,     9,    36,     8,     9,    15,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,     8,     9,    15,
      63,     6,    65,    66,    67,    68,    69,    70,    71,    72,
      73,     1,     8,     9,     8,     9,     6,     7,     6,     9,
      10,    10,    12,     8,     9,    15,     8,     9,    18,     9,
      20,    21,     9,    23,     8,     9,    26,    10,    28,    29,
      30,    31,    32,    33,    15,    16,    36,    15,    16,    10,
      40,    10,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
       9,    10,    10,    63,    10,    65,    66,    67,    68,    69,
      70,    71,    72,    73,     1,     9,    10,     9,    10,     6,
       7,     6,     9,     9,    10,    12,     9,    10,    15,     9,
      10,    18,     1,    20,    21,     6,    23,     9,    10,    26,
      15,    28,    29,    30,    31,    32,    33,     6,    15,    36,
      15,     6,     9,    40,    58,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,     7,    58,    63,    63,     9,    65,    66,
      67,    68,    69,    70,    71,    72,    73,     1,     9,    63,
       6,     8,     6,     7,     8,     9,     6,     6,    12,     6,
      15,     1,    15,    15,    18,    16,    20,    21,     9,    23,
      41,    15,    26,    15,    28,    29,    30,    31,    32,    33,
       6,     6,    36,    17,    15,     6,    40,    10,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    10,    15,     6,    63,
       6,    65,    66,    67,    68,    69,    70,    71,    72,    73,
       1,     6,    11,    11,    41,     6,     7,    41,     9,     6,
       6,    12,    15,     6,     6,     7,    10,    18,     6,    20,
      21,     6,    23,     6,     6,    26,     6,    28,    29,    30,
      31,    32,    33,    63,     6,    36,     6,    10,   104,    40,
      35,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,   354,
      41,   355,    63,    55,    65,    66,    67,    68,    69,    70,
      71,    72,    73,     1,    66,   718,    68,    69,     6,     7,
      72,    73,   460,   582,    12,   565,   261,     6,     7,    -1,
      18,    -1,    20,    21,    -1,    23,    -1,    -1,    26,    -1,
      28,    29,    30,    31,    32,    33,    -1,    -1,    36,    -1,
      -1,    -1,    40,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    -1,    -1,    -1,    55,    65,    66,    67,
      68,    69,    70,    71,    72,    73,     1,    66,    -1,    68,
      69,     6,     7,    72,    73,    -1,    11,    12,     5,     6,
       6,    -1,    17,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    26,    -1,    28,    -1,    30,    31,    32,    33,    -1,
      -1,    36,    -1,    -1,    -1,    40,    -1,    42,    43,    44,
      37,    38,    39,    -1,    -1,    41,    -1,    -1,    53,    54,
      55,     5,    -1,     6,    -1,    -1,    53,    54,    -1,    55,
      65,    66,    67,    68,    69,    70,    71,    72,    73,     1,
      66,    -1,    68,    69,     6,     7,    72,    73,    -1,    11,
      12,    -1,    -1,    37,    38,    39,    18,    -1,    20,    21,
      -1,    23,     5,    -1,    26,    -1,    28,    -1,    30,    31,
      32,    33,    55,    -1,    36,    -1,    -1,    -1,    40,    -1,
      42,    43,    44,    66,    -1,    68,    69,    -1,    -1,    72,
      73,    53,    54,    55,    37,    38,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      72,    73,     1,    -1,    -1,    -1,    -1,     6,     7,    -1,
       1,    -1,    11,    12,     5,     6,    -1,    -1,    -1,    18,
      -1,    20,    21,    -1,    23,    -1,    -1,    26,    -1,    28,
      -1,    30,    31,    32,    33,    -1,    -1,    36,    -1,    -1,
      -1,    40,    -1,    42,    43,    44,    37,    38,    39,    -1,
      -1,    -1,    -1,    -1,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    53,    54,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    72,    73,     1,    -1,    -1,    -1,    -1,
       6,     7,    -1,     1,    -1,    -1,    12,     5,     6,    -1,
      -1,    -1,    18,    -1,    20,    21,    -1,    23,    -1,    -1,
      26,    -1,    28,    -1,    30,    31,    32,    33,    -1,    -1,
      36,    -1,    -1,    -1,    40,    -1,    42,    43,    44,    37,
      38,    39,     4,     5,     6,    -1,    -1,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    53,    54,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    72,    73,     1,    -1,
      -1,    -1,    -1,     6,     7,    37,    38,    39,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    18,    -1,    20,    21,    -1,
      23,    53,    54,    26,    -1,    28,    -1,    30,    31,    32,
      33,    -1,    -1,    36,    -1,    -1,    -1,    40,    -1,    42,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    72,
      73,     1,    -1,    -1,    -1,    -1,     6,    -1,    -1,     9,
      10,    -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    -1,     6,    -1,    -1,    29,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    -1,    -1,    55,    56,    57,    58,    59,
      40,    41,    42,    63,    44,     1,    66,    67,    68,    69,
       6,    -1,    72,    73,     1,    55,    12,    -1,    -1,     6,
      -1,    -1,    -1,    -1,    -1,    12,    66,    67,    68,    69,
      -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    44,     1,
      -1,    -1,    -1,    40,     6,    42,    -1,    44,     1,    55,
      12,    -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,    12,
      66,    67,    68,    69,    -1,    -1,    72,    73,    -1,    66,
      67,    68,    69,    -1,    -1,    72,    73,    -1,    40,    -1,
      42,    -1,    44,     1,    -1,    -1,    -1,    40,     6,    42,
      -1,    44,     1,    -1,    12,    -1,    -1,     6,    -1,    -1,
      -1,    -1,    -1,    12,    66,    67,    68,    69,    -1,    -1,
      72,    73,    -1,    66,    67,    68,    69,    -1,    -1,    72,
      73,    -1,    40,    -1,    42,    -1,    44,     1,    -1,    -1,
      -1,    40,     6,    42,    -1,    44,     1,    -1,    12,    -1,
      -1,     6,    -1,    -1,    -1,    -1,    -1,    12,    66,    67,
      68,    69,    -1,    -1,    72,    73,    -1,    66,    67,    68,
      69,    -1,    -1,    72,    73,    -1,    40,    -1,    42,    -1,
      44,     1,    -1,    -1,    -1,    40,     6,    42,    -1,    44,
       1,    -1,    12,    -1,    -1,     6,    -1,    -1,    -1,    -1,
      -1,    12,    66,    67,    68,    69,    -1,    -1,    72,    73,
      -1,    66,    67,    68,    69,    -1,    -1,    72,    73,    -1,
      40,    -1,    42,    -1,    44,     1,    -1,    -1,    -1,    40,
       6,    42,    -1,    44,     1,    -1,    12,    -1,    -1,     6,
      -1,    -1,    -1,    -1,    -1,    12,    66,    67,    68,    69,
      -1,    -1,    72,    73,    -1,    66,    67,    68,    69,    -1,
      -1,    72,    73,    -1,    40,    -1,    42,    -1,    44,    -1,
       1,    -1,    -1,    40,    -1,    42,    -1,    44,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    67,    68,    69,    -1,    -1,    72,    73,    29,    66,
      67,    68,    69,     1,    -1,    72,    73,    -1,    -1,     7,
      -1,     9,    -1,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    -1,    -1,    -1,    56,    57,    58,    59,     1,
      -1,    29,    63,    -1,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,    51,    52,     1,    -1,    29,    56,    57,
      58,    59,    -1,     9,    -1,    -1,    -1,    13,    -1,    41,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    -1,    29,    56,    57,    58,    59,     1,    -1,
      -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    -1,    -1,    -1,
      56,    57,    58,    59,     1,    -1,    29,    -1,    -1,    -1,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
       1,    -1,    29,    56,    57,    58,    59,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    -1,    -1,    29,    56,
      57,    58,    59,     1,    -1,    -1,    -1,    -1,    -1,     7,
      -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    -1,    -1,    -1,    56,    57,    58,    59,     1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,    51,    52,    27,    -1,    29,    56,    57,
      58,    59,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       9,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    -1,    -1,    56,    57,    58,    59,     1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,     1,    -1,    29,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
       1,    -1,    29,    56,    57,    58,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,     1,    -1,    29,    56,
      57,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,     1,    -1,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    -1,    -1,    29,    56,    57,    58,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    29,
      45,    46,    47,    48,    49,    50,    51,    52,    -1,    -1,
      -1,    56,    57,    58,    59,    45,    46,    47,    48,    49,
      50,    51,    52,    -1,    -1,    -1,    56,    57,    58,    59
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     4,     5,     6,    37,    38,    39,    53,    54,    88,
      89,    90,    91,    92,    93,   138,     6,    95,    96,     1,
       6,     1,     1,     5,    54,   138,     1,     5,    53,   138,
       0,     3,    91,    92,     1,     7,    97,     5,    53,    54,
       1,     9,    63,    10,    67,     6,    53,     6,     5,   138,
       5,    53,    54,    54,     6,     5,   138,     5,    53,    54,
      11,    14,    98,     1,    11,    98,     6,     5,    53,    54,
       5,    53,    54,    96,     6,     8,    95,     5,   138,    67,
       6,     5,     6,     5,     5,     5,   138,    67,     6,     5,
       6,     5,     5,     1,     6,    53,    54,    92,    99,   100,
     101,   102,   138,    11,    14,     1,    11,    67,     6,     5,
       5,     6,     5,     5,     8,     6,     5,     8,    95,    67,
       6,    67,     6,     6,     6,     5,     8,    95,    67,     6,
      67,     6,     6,    67,     1,     6,    15,    67,     1,     6,
      53,    54,   102,   138,     1,     6,    53,    54,   102,   138,
       1,    63,     1,     7,   109,     6,    53,    54,   102,    99,
       8,    95,    67,     6,     6,    67,     6,     6,    67,     6,
       8,     8,    95,    67,     8,    95,    67,    67,    67,     6,
       8,     8,    95,    67,     8,    95,    67,    67,     6,    16,
      55,   103,   104,   105,   106,   107,   108,     6,   103,     1,
       6,    55,    66,    68,    69,    72,    73,   143,   155,   156,
     157,   158,     6,     8,    55,   103,    53,     1,    15,     1,
       6,   138,   109,     6,    53,    54,   102,    54,    15,     6,
     138,     1,   109,     6,    53,    54,   102,    11,     1,     6,
      11,    12,    18,    20,    21,    23,    26,    28,    30,    31,
      32,    33,    36,    40,    42,    43,    44,    53,    54,    55,
      65,    67,    70,    71,    94,   109,   110,   111,   112,   114,
     116,   117,   118,   119,   120,   121,   122,   123,   126,   127,
     128,   130,   131,   132,   133,   134,   135,   137,   139,   140,
     141,   142,   143,   144,   145,   148,   149,   150,   151,   152,
     153,   154,   155,   157,     6,    15,     1,     6,    54,   102,
       1,     6,    53,   102,   109,     8,     8,    95,    67,    67,
       8,    95,    67,    67,     8,    95,    67,     8,     8,    95,
       8,     8,    95,     8,    95,     8,    95,    67,     8,     8,
      95,     8,     8,    95,     8,    95,     8,     9,    15,    16,
       6,    16,     9,     8,     9,     9,     8,     8,    10,     1,
      29,    45,    46,    47,    48,    49,    50,    51,    52,    56,
      57,    58,    59,   159,     1,    10,    40,    67,   148,     1,
       8,     1,     8,     6,   138,     6,   155,   138,    15,     6,
     102,    15,     1,     6,   102,   109,     6,   138,   155,    15,
       6,   102,   138,    15,     6,   102,     1,   109,     8,   155,
       1,     9,    10,    58,    63,    13,   146,   147,   155,   155,
     155,     6,   122,   143,   111,   155,   155,     6,   122,    94,
       6,    58,    94,   122,     1,     6,   136,   155,     6,    41,
      94,   122,    94,    94,    40,     6,     6,    10,     1,     6,
       8,    94,   122,   152,     9,    11,   111,   111,   111,   111,
       9,    10,     9,    15,     1,    63,    10,    15,    40,     1,
     155,    53,    15,     6,   109,    54,    15,     6,   109,     8,
       8,    95,     8,    95,     8,     8,    95,     8,    95,     8,
       8,    95,     8,     8,     8,     8,     8,    95,     8,     8,
       8,     6,    16,    55,   106,   155,     1,    16,    15,     6,
       6,   104,     6,    55,   106,   107,     6,   104,   108,     6,
     155,   155,   155,   155,   155,   155,   155,   155,     6,     7,
     155,     1,    15,     6,     6,   102,   155,    15,   109,   155,
       6,   102,    15,   109,    15,     6,   155,    15,   109,   102,
     155,    15,   109,     6,   102,     8,     6,    94,   122,   155,
       6,   120,   139,     6,    58,     9,    13,     7,     1,     9,
      10,    22,     1,    22,     7,    27,     9,     9,    40,    40,
       9,    58,     9,     9,     9,    41,    41,    41,    42,     6,
      55,    94,   104,    63,    63,     6,     8,     9,     1,     8,
       8,     8,   155,     1,    17,    19,   113,   115,     6,   121,
       6,     6,   139,    40,    94,   129,   145,   148,   149,     6,
     129,    41,    94,   155,     6,   102,   155,    15,     6,   102,
     155,    15,     8,     8,     8,     8,     8,     8,    16,     6,
      16,    15,    16,     1,   155,    15,     9,     1,     1,   148,
      41,     7,    41,   155,    15,   109,   155,    15,   109,   155,
     155,    15,   155,   109,   155,    15,   109,    22,    22,     9,
       9,    10,    15,     9,    10,    63,    94,   147,   155,    94,
     149,     6,     6,    94,   149,    94,   149,    94,   149,    24,
      62,   124,   125,     6,   139,   155,     6,     7,   155,     7,
     155,     6,    94,   136,     1,   155,     6,    41,    41,    41,
      15,    63,     6,     6,   111,   111,   155,    17,   111,    10,
      15,    41,    15,   109,   155,    15,   109,   155,     1,     6,
     155,    15,   155,     6,   155,   155,   155,   155,   155,    94,
     149,    94,   149,   155,     6,   139,     6,   129,     6,   120,
       6,     9,    22,   109,   111,   155,    11,    11,    41,     7,
      41,    41,     7,    41,    41,   129,     8,   155,   111,     1,
     113,     6,   129,    15,   155,   155,   155,    41,     9,    10,
       9,    10,    10,     6,    94,   149,     1,   111,   155,   155,
       6,   129,     6,     6,     6,     6,     6,   155,    41,    41,
      10,    10,    63,    10,     6,     6,     6,    63
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
#line 104 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() <<"programes: program END_OF_FILE\n";
						p->check_inhertance_list();
						if(!p->errRecovery->errQ->isEmpty())
								p->errRecovery->printErrQueue();
						p->print_symbol();
						Streams::verbose().flush();						
						;}
    break;

  case 3:
#line 112 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {	Streams::verbose() <<"prgram : program unit\n";
						Streams::verbose().flush();						
					;}
    break;

  case 4:
#line 115 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
							
								Streams::verbose()<<"program: unit\n";
								Streams::verbose().flush();						
							;}
    break;

  case 5:
#line 123 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_stmt : IMPORT unit_list SEMICOLON \n";;}
    break;

  case 6:
#line 124 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
							Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum<<endl;
							err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum,"Expected ';' ","");
									  ;}
    break;

  case 7:
#line 129 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"unit: import_stmt class_decl\n";;}
    break;

  case 8:
#line 130 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"unit: class_decl\n";;}
    break;

  case 9:
#line 133 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"class_decl: class_h class_body\n"; ;}
    break;

  case 10:
#line 136 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[0].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
					;}
    break;

  case 11:
#line 141 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 12:
#line 147 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 13:
#line 153 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 14:
#line 159 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 15:
#line 165 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 16:
#line 171 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[0].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 17:
#line 178 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[0].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 18:
#line 185 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 19:
#line 191 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 20:
#line 197 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 21:
#line 203 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 22:
#line 209 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 23:
#line 216 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 24:
#line 223 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 25:
#line 229 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
							(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 26:
#line 235 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
							(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 27:
#line 241 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL STATIC CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 28:
#line 247 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 255 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 263 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 31:
#line 269 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 277 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 285 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[0].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
										acc_mod="";
								;}
    break;

  case 34:
#line 291 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-1].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 35:
#line 297 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-1].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 36:
#line 303 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-1].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 37:
#line 309 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 38:
#line 315 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 39:
#line 321 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");
								;}
    break;

  case 40:
#line 324 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");
								;}
    break;

  case 41:
#line 327 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 42:
#line 333 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 43:
#line 339 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 44:
#line 345 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 45:
#line 351 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-6].r.colNum)-strlength((yyvsp[-6].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-6].r.colNum)-strlen((yyvsp[-6].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 46:
#line 358 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-6].r.colNum)-strlength((yyvsp[-6].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-6].r.colNum)-strlen((yyvsp[-6].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 47:
#line 365 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 48:
#line 371 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 49:
#line 377 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 50:
#line 383 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 51:
#line 389 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 397 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 405 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 54:
#line 411 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL access_modef STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 55:
#line 417 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 425 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 433 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[0].r.colNum)+1));
												(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
												acc_mod="";
											;}
    break;

  case 58:
#line 439 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-1].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 59:
#line 445 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-1].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 60:
#line 451 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-1].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 61:
#line 457 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 62:
#line 463 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 63:
#line 469 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-6].r.colNum)-strlength((yyvsp[-6].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-6].r.colNum)-strlen((yyvsp[-6].r.strVal)),"repeated modifier ","");
								;}
    break;

  case 64:
#line 472 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-6].r.colNum)-strlength((yyvsp[-6].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-6].r.colNum)-strlen((yyvsp[-6].r.strVal)),"repeated modifier ","");
								;}
    break;

  case 65:
#line 475 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 66:
#line 481 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 67:
#line 487 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 68:
#line 493 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 69:
#line 499 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-7].r.colNum)-strlength((yyvsp[-7].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-8].r.lineNum),(yyvsp[-7].r.colNum)-strlen((yyvsp[-7].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[-7].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 70:
#line 506 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-7].r.colNum)-strlength((yyvsp[-7].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-8].r.lineNum),(yyvsp[-7].r.colNum)-strlen((yyvsp[-7].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[-7].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 71:
#line 513 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 72:
#line 519 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 73:
#line 525 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 74:
#line 531 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 75:
#line 537 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 545 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 554 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL access_modef STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 78:
#line 560 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 79:
#line 566 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 574 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 582 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {							
									colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected class name at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected class name","");
		;}
    break;

  case 82:
#line 587 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected Reserved word at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected Reserved word","");
							 ;}
    break;

  case 83:
#line 592 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected Reserved word at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected Reserved word","");
						 ;}
    break;

  case 84:
#line 599 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"expr_list: expr_list COMMA expr\n";;}
    break;

  case 85:
#line 600 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"expr_list: expr %prec stmt_1\n";;}
    break;

  case 86:
#line 603 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												t_id=new char[10];
												strcpy(t_id,temp_id.c_str());
												inhertance_list.push_back(t_id);	
												Streams::verbose()<<"unit_list:	unit_list COMMA unit_import\n";
												temp_id="";
												;}
    break;

  case 87:
#line 610 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {	
								t_id=new char[10];
								strcpy(t_id,temp_id.c_str());
								inhertance_list.push_back(t_id);
								Streams::verbose()<<"unit_list:	unit_import\n";
								temp_id="";
							;}
    break;

  case 88:
#line 619 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									temp_id=temp_id+"."+(yyvsp[0].r.strVal);
									Streams::verbose()<<"unit_import: unit_import DOT ID\n";
								;}
    break;

  case 89:
#line 623 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
					temp_id=temp_id+(yyvsp[0].r.strVal);
					Streams::verbose()<<"unit_import: ID\n";

				;}
    break;

  case 90:
#line 631 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"class_body:COLON END	\n";colonStack.pop();
								(yyval.type)=p->finishTypeDeclaration(t);
							;}
    break;

  case 91:
#line 635 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"class_body:COLON dm_list END\n";colonStack.pop();
										(yyval.type)=p->finishTypeDeclaration(t);
									;}
    break;

  case 92:
#line 638 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
					ColonStack* temp = colonStack.top();
					colonStack.pop();
					Streams::verbose()<<"Error: Expected ':' at Line No:"<<temp->lineNum<<" Column No:"<<temp->colNum<<endl;
					err->errQ->enqueue(temp->lineNum,temp->colNum,"Expected ':' ","");
				  ;}
    break;

  case 93:
#line 644 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
					ColonStack* temp = colonStack.top();
					colonStack.pop();
					Streams::verbose()<<"Error: Expected ':' at Line No:"<<temp->lineNum<<" Column No:"<<temp->colNum<<endl;
						(yyval.type)=p->finishTypeDeclaration(t);
					err->errQ->enqueue(temp->lineNum,temp->colNum,"Expected ':' ","");
				  ;}
    break;

  case 94:
#line 651 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {					
					colonStack.pop();
					Streams::verbose()<<"Error: Expected 'end' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum<<endl;
					(yyval.type)=p->finishTypeDeclaration(t);
					err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum," Expected 'end' ","");									
				  ;}
    break;

  case 95:
#line 657 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
					colonStack.pop();
					Streams::verbose()<<"Error: Expected 'end' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum<<endl;
					(yyval.type)=p->finishTypeDeclaration(t);
					err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum," Expected 'end' ","");									
				  ;}
    break;

  case 96:
#line 665 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dm_list: dm_list DEF dm\n";;}
    break;

  case 97:
#line 666 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dm_list: DEF dm\n";;}
    break;

  case 98:
#line 669 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dm:	var_declaration SEMICOLON\n";;}
    break;

  case 99:
#line 670 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dm:	method_declaration\n";;}
    break;

  case 100:
#line 671 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dm:	class_decl\n";;}
    break;

  case 101:
#line 672 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
							Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
							err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"Expected ';' ","");
						   ;}
    break;

  case 102:
#line 678 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"var_declaration: access_modef ID\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum);
									v=(yyval.var);
									acc_mod="";
									;}
    break;

  case 103:
#line 684 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"var_declaration: STATIC ID\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum);
									v=(yyval.var);
							;}
    break;

  case 104:
#line 689 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"var_declaration: FINAL ID\n";
								(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum);
									v=(yyval.var);
								;}
    break;

  case 105:
#line 694 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"var_declaration: STATIC FINAL ID\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[-1].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
									v=(yyval.var);
									;}
    break;

  case 106:
#line 699 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"var_declaration: FINAL STATIC ID\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[-1].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
									v=(yyval.var);
									;}
    break;

  case 107:
#line 704 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 108:
#line 708 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 109:
#line 712 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: ID\n";
										(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum);
										v=(yyval.var);
									;}
    break;

  case 110:
#line 716 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"var_declaration: FINAL access_modef ID\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum);
													v=(yyval.var);
													acc_mod="";
											;}
    break;

  case 111:
#line 722 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"var_declaration: STATIC access_modef ID\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum);
													v=(yyval.var);
													acc_mod="";
											;}
    break;

  case 112:
#line 728 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: access_modef ID ASSIGN expr\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum);
													v=(yyval.var);
													acc_mod="";
													;}
    break;

  case 113:
#line 733 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: STATIC ID ASSIGN expr\n";;}
    break;

  case 114:
#line 734 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: FINAL ID ASSIGN expr\n";;}
    break;

  case 115:
#line 735 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: STATIC FINAL ID ASSIGN expr\n";;}
    break;

  case 116:
#line 736 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: FINAL STATIC ID ASSIGN expr\n";;}
    break;

  case 117:
#line 737 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 118:
#line 741 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 119:
#line 745 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: ID ASSIGN expr\n";
										(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum);
													v=(yyval.var);
										;}
    break;

  case 120:
#line 749 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
											Streams::verbose()<<"var_declaration: access_modef STATIC ID\n";
											(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum);
									v=(yyval.var);
									acc_mod="";
											;}
    break;

  case 121:
#line 755 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
				
											Streams::verbose()<<"var_declaration: access_modef FINAL ID\n";
												(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum);
												v=(yyval.var);
												acc_mod="";
											;}
    break;

  case 122:
#line 762 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"var_declaration: access_modef STATIC FINAL ID\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
												v=(yyval.var);
												acc_mod="";
												;}
    break;

  case 123:
#line 768 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"var_declaration: access_modef FINAL STATIC ID\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
												v=(yyval.var);
												acc_mod="";
												;}
    break;

  case 124:
#line 774 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 125:
#line 778 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 126:
#line 783 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"var_declaration: STATIC FINAL access_modef ID\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
												v=(yyval.var);
												acc_mod="";
												;}
    break;

  case 127:
#line 789 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
													Streams::verbose()<<"var_declaration: FINAL STATIC access_modef ID\n";
														(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
													v=(yyval.var);
													acc_mod="";
													
													;}
    break;

  case 128:
#line 796 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 129:
#line 800 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 130:
#line 804 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
				
															Streams::verbose()<<"var_declaration: access_modef STATIC ID ASSIGN expr\n";
																(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum);
																v=(yyval.var);
																acc_mod="";
															;}
    break;

  case 131:
#line 811 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
														Streams::verbose()<<"var_declaration: access_modef FINAL ID ASSIGN expr\n";
															(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum);
														v=(yyval.var);
														acc_mod="";
													;}
    break;

  case 132:
#line 817 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
																Streams::verbose()<<"var_declaration: access_modef STATIC FINAL ID ASSIGN expr\n";
																	(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
																v=(yyval.var);
																acc_mod="";
																;}
    break;

  case 133:
#line 823 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
																Streams::verbose()<<"var_declaration: access_modef FINAL STATIC ID ASSIGN expr\n";
																	(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
																	v=(yyval.var);
																	acc_mod="";
																;}
    break;

  case 134:
#line 829 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 135:
#line 833 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 136:
#line 837 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
															Streams::verbose()<<"var_declaration: STATIC access_modef ID ASSIGN expr\n";
																(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum);
																v=(yyval.var);
																acc_mod="";
															;}
    break;

  case 137:
#line 843 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
														Streams::verbose()<<"var_declaration: FINAL access_modef ID ASSIGN expr\n";
															(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum);
															v=(yyval.var);
															acc_mod="";
														;}
    break;

  case 138:
#line 849 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
																Streams::verbose()<<"var_declaration: STATIC FINAL access_modef ID ASSIGN expr\n";
																	(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
																	v=(yyval.var);
																	acc_mod="";
																;}
    break;

  case 139:
#line 855 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
																Streams::verbose()<<"var_declaration: FINAL STATIC access_modef ID ASSIGN expr\n";
																	(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
																v=(yyval.var);
																acc_mod="";
																;}
    break;

  case 140:
#line 861 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 141:
#line 865 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 142:
#line 869 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
															Streams::verbose()<<"var_declaration: STATIC access_modef FINAL ID ASSIGN expr\n";
																(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
																v=(yyval.var);
																acc_mod="";
															;}
    break;

  case 143:
#line 875 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
																Streams::verbose()<<"var_declaration: FINAL access_modef FINAL ID ASSIGN expr\n";
																(yyval.var)=p->addVariableToCurrentScope((yyvsp[-4].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
																v=(yyval.var);
																acc_mod="";	
															;}
    break;

  case 144:
#line 881 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
																;}
    break;

  case 145:
#line 885 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
																;}
    break;

  case 146:
#line 889 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
											Streams::verbose()<<"Error: UN Expected IDENTIFIER Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)-strlen((yyvsp[-1].r.strVal)),"UN Expected IDENTIFIER ","");
										  ;}
    break;

  case 147:
#line 893 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
							Streams::verbose()<<"Error: UN Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[0].r.colNum)-strlength((yyvsp[0].r.strVal))<<endl;
							err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[0].r.colNum)-strlen((yyvsp[0].r.strVal)),"UN Expected IDENTIFIER ","");						
						;}
    break;

  case 148:
#line 899 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false,false,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 149:
#line 900 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false,false,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 150:
#line 901 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: STATIC method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 151:
#line 902 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: FINAL method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,false,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 152:
#line 903 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: access_modef STATIC method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 153:
#line 904 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: access_modef FINAL method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,false,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 154:
#line 905 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: STATIC access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 155:
#line 906 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: FINAL access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,false,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 156:
#line 907 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: STATIC access_modef FINAL method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 157:
#line 908 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: FINAL access_modef STATIC method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 158:
#line 909 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: STATIC FINAL access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 159:
#line 910 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: FINAL STATIC access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 160:
#line 911 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
																		;}
    break;

  case 161:
#line 915 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
																			;}
    break;

  case 162:
#line 919 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
																			;}
    break;

  case 163:
#line 923 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
																			;}
    break;

  case 164:
#line 927 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
																			;}
    break;

  case 165:
#line 931 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
																			;}
    break;

  case 166:
#line 938 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S arguments CLOSE_S \n";testfunction = p->createTypeFunctionHeader(t,ss,pp,ff, (yyvsp[-3].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);pp=true;ff=false;ss=false;parameters.clear();linefunc=yylval.r.lineNum;colmfunc=yylval.r.colNum;;}
    break;

  case 167:
#line 939 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S ID CLOSE_S \n";parameters.push_back("self");testfunction = p->createTypeFunctionHeader(t,ss,pp,ff, (yyvsp[-3].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);pp=true;ff=false;ss=false;parameters.clear();linefunc=yylval.r.lineNum;colmfunc=yylval.r.colNum;;}
    break;

  case 168:
#line 940 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S CLOSE_S \n";testfunction = p->createTypeFunctionHeader(t,ss,pp,ff, (yyvsp[-2].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);pp=true;ff=false;ss=false;parameters.clear();linefunc=yylval.r.lineNum;colmfunc=yylval.r.colNum;;}
    break;

  case 169:
#line 941 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
									  ;}
    break;

  case 170:
#line 945 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
									  ;}
    break;

  case 171:
#line 949 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)+1<<endl;
												err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)+1,"Expected '(' ","");
											   ;}
    break;

  case 172:
#line 953 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)+1<<endl;
												err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)+1,"Expected '(' ","");
											   ;}
    break;

  case 173:
#line 957 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue((yyvsp[-3].r.lineNum),yylval.r.colNum-strlength(yylval.r.strVal),"Expected ')' ","");
													 ;}
    break;

  case 174:
#line 961 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[0].r.colNum)+1<<endl;
														err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[0].r.colNum)+1,"Expected ')' ","");
													 ;}
    break;

  case 175:
#line 967 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"arguments:	args_list\n";;}
    break;

  case 176:
#line 968 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"arguments:	default_args_list\n";;}
    break;

  case 177:
#line 969 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"arguments:	args_list COMMA default_args_list\n";;}
    break;

  case 178:
#line 971 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"args_list:	args_list COMMA arg\n";;}
    break;

  case 179:
#line 972 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"args_list: ID COMMA arg \n"; parameters.push_back((yyvsp[-2].r.strVal));;}
    break;

  case 180:
#line 973 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"args_list:	args_list COMMA ID \n"; parameters.push_back((yyvsp[0].r.strVal));;}
    break;

  case 181:
#line 974 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"args_list:	ID COMMA ID \n"; parameters.push_back((yyvsp[-2].r.strVal)); parameters.push_back((yyvsp[0].r.strVal));;}
    break;

  case 182:
#line 975 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"args_list: arg \n";;}
    break;

  case 183:
#line 976 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"args_list: paraself \n";;}
    break;

  case 184:
#line 979 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"paraself:	SELF COMMA args_list\n";parameters.push_back("self");;}
    break;

  case 185:
#line 980 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"paraself:	SELF COMMA ID \n"; parameters.push_back("self"); parameters.push_back((yyvsp[0].r.strVal));;}
    break;

  case 186:
#line 981 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"paraself:	SELF \n"; parameters.push_back("self");;}
    break;

  case 187:
#line 982 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"paraself:	args_list COMMA SELF \n"; parameters.push_back("self");;}
    break;

  case 188:
#line 983 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"paraself:	ID COMMA SELF \n"; parameters.push_back((yyvsp[-2].r.strVal)); parameters.push_back("self");;}
    break;

  case 189:
#line 985 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
						Streams::verbose()<<"arg:	STAR ID \n";std::string tempstr((yyvsp[0].r.strVal));
						std::string erro("*" + tempstr);
						char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
					;}
    break;

  case 190:
#line 991 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"arg:	STAR STAR ID \n";std::string tempstr((yyvsp[0].r.strVal));
						std::string erro("**" + tempstr);
						char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);;}
    break;

  case 191:
#line 995 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
							Streams::verbose()<<"Error: Un Expected '*' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
							err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))," Un Expected '*' ","");
						;}
    break;

  case 192:
#line 999 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Un Expected '**' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))," Un Expected '**' ","");
							 ;}
    break;

  case 193:
#line 1006 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"default_args_list: default_args_list COMMA default_arg\n";;}
    break;

  case 194:
#line 1007 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"default_args_list: default_arg \n";;}
    break;

  case 195:
#line 1008 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
														Streams::verbose()<<"Error: default argument not at end of parameter list at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"default argument not at end of parameter list","");					
														;}
    break;

  case 196:
#line 1012 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
														Streams::verbose()<<"Error: default argument not at end of parameter list at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"default argument not at end of parameter list","");					
														;}
    break;

  case 197:
#line 1018 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"default_arg:	ID ASSIGN expr \n";parameters.push_back((yyvsp[-2].r.strVal));;}
    break;

  case 198:
#line 1019 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"arg:	STAR ID ASSIGN expr \n";std::string tempstr((yyvsp[-2].r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
									;}
    break;

  case 199:
#line 1025 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"default_arg:	STAR STAR ID ASSIGN expr \n";std::string tempstr((yyvsp[-2].r.strVal));
										std::string erro("**" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);;}
    break;

  case 200:
#line 1029 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
											Streams::verbose()<<"Error: Un Expected '**' at Line No:"<<(yyvsp[-5].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))," Un Expected '**' ","");
										;}
    break;

  case 201:
#line 1033 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
											Streams::verbose()<<"Error: Un Expected '*' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))," Un Expected '*' ","");
										;}
    break;

  case 202:
#line 1039 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"COLON  END \n";;}
    break;

  case 203:
#line 1040 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"block_stmt: COLON stmt_list END \n";;}
    break;

  case 204:
#line 1041 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
						Streams::verbose()<<"Error: Expected ':' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected ':' ","");			 
						;}
    break;

  case 205:
#line 1052 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt_list:	stmt_list stmt \n";;}
    break;

  case 206:
#line 1053 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt_list:	stmt \n";;}
    break;

  case 207:
#line 1056 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt: 		if_stmt\n";;}
    break;

  case 208:
#line 1057 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	while_stmt\n";;}
    break;

  case 209:
#line 1058 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	for_stmt\n";;}
    break;

  case 210:
#line 1059 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	try_stmt\n";;}
    break;

  case 211:
#line 1060 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	with_stmt\n";;}
    break;

  case 212:
#line 1061 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	block_stmt\n";;}
    break;

  case 213:
#line 1062 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	simple_stmt_list\n";;}
    break;

  case 214:
#line 1063 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected ';' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<yylval.r.colNum<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),yylval.r.colNum," Expected ';' ","");										
									;}
    break;

  case 215:
#line 1067 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"assignment_stmt:	self dot amer\n";
																		//cout<<"assignment list"<<endl;
																		(yyval.var)=p->addVariableToCurrentScope((yyvsp[-1].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,true);
																		v=(yyval.var);
																		acc_mod="";
										;}
    break;

  case 216:
#line 1074 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"stmt:	ID SEMICOLON\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[-1].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
																		v=(yyval.var);
																		acc_mod="";
								;}
    break;

  case 217:
#line 1080 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
											Streams::verbose()<<"Error: illegal start of expression at Line No:"<<(yyvsp[-2].r.lineNum)<<endl;
										err->errQ->enqueue((yyvsp[-2].r.lineNum),yylval.r.colNum,"Error: illegal start of expression ","");										
										;}
    break;

  case 218:
#line 1084 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"stmt:	ID SEMICOLON\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[-1].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
																		v=(yyval.var);
																		acc_mod="";
										;}
    break;

  case 219:
#line 1090 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	ID DOT ID SEMICOLON\n";;}
    break;

  case 220:
#line 1091 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	ID COMMA ID DOT ID DOT ID SEMICOLON\n";;}
    break;

  case 221:
#line 1092 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	ID DOT ID COMMA ID DOT ID DOT ID SEMICOLON\n";;}
    break;

  case 222:
#line 1095 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt\n";;}
    break;

  case 223:
#line 1096 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt ELSE stmt\n";;}
    break;

  case 224:
#line 1097 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected 'else' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))," Expected 'else' ","");										
									;}
    break;

  case 225:
#line 1101 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt elif_stmt\n";;}
    break;

  case 226:
#line 1102 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt elif_stmt ELSE stmt\n";;}
    break;

  case 227:
#line 1105 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"elif_stmt: 	elif_header stmt elif_stmt\n";;}
    break;

  case 228:
#line 1106 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"elif_stmt:	elif_header stmt\n";;}
    break;

  case 229:
#line 1113 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"if_header:	IF expr \n";;}
    break;

  case 230:
#line 1116 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"elif_header:	ELIF expr \n";;}
    break;

  case 231:
#line 1117 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    { 
						Streams::verbose()<<"Error: Expected reserved word at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected reserved word 'while' ","");
					 ;}
    break;

  case 232:
#line 1123 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"while_stmt: while_header stmt\n";;}
    break;

  case 233:
#line 1128 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"while_header: WHILE expr \n";;}
    break;

  case 234:
#line 1133 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    { 
						Streams::verbose()<<"Error: Expected reserved word 'while' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected reserved word 'while' ","");
					 ;}
    break;

  case 235:
#line 1139 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_stmt: 	for_header stmt\n";;}
    break;

  case 236:
#line 1142 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_header: FOR target_list IN expr_list \n";;}
    break;

  case 237:
#line 1143 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_header: FOR target_list IN list_display \n";;}
    break;

  case 238:
#line 1144 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID COMMA ID IN expr_list \n";;}
    break;

  case 239:
#line 1145 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID COMMA ID IN list_display \n";;}
    break;

  case 240:
#line 1146 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID IN expr_list \n";;}
    break;

  case 241:
#line 1147 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID IN list_display \n";;}
    break;

  case 242:
#line 1148 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 243:
#line 1152 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 244:
#line 1156 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 245:
#line 1160 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 246:
#line 1164 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'in' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal)),"Expected reserved word 'in' ","");
								;}
    break;

  case 247:
#line 1168 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'in' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected reserved word 'in' ","");
								;}
    break;

  case 248:
#line 1172 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'in' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal)),"Expected reserved word 'in' ","");
								;}
    break;

  case 249:
#line 1176 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'in' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected reserved word 'in' ","");
								;}
    break;

  case 250:
#line 1183 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list:	import_list COMMA import\n";;}
    break;

  case 251:
#line 1184 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA import_list \n";;}
    break;

  case 252:
#line 1185 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA ID \n";;}
    break;

  case 253:
#line 1186 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA ID DOT ID \n";;}
    break;

  case 254:
#line 1187 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA import_list \n";;}
    break;

  case 255:
#line 1188 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA ID \n";;}
    break;

  case 256:
#line 1189 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA ID DOT ID \n";;}
    break;

  case 257:
#line 1190 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list:	import\n";;}
    break;

  case 258:
#line 1194 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import: import DOT ID\n";;}
    break;

  case 259:
#line 1195 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import:	ID DOT ID DOT ID;";}
    break;

  case 260:
#line 1199 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target_list:	target_list COMMA target\n";;}
    break;

  case 261:
#line 1200 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA ID COMMA target\n";;}
    break;

  case 262:
#line 1201 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target_list:	target_list COMMA ID\n";;}
    break;

  case 263:
#line 1202 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA ID COMMA ID\n";;}
    break;

  case 264:
#line 1203 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA target\n";;}
    break;

  case 265:
#line 1204 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target_list:	target\n";;}
    break;

  case 266:
#line 1207 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"try_stmt: 	TRY  stmt except_stmt\n";;}
    break;

  case 267:
#line 1208 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"try_stmt: 	TRY  stmt finally_stmt\n";;}
    break;

  case 268:
#line 1211 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"finally_stmt: 	FINALLY COLON block_stmt\n";;}
    break;

  case 269:
#line 1214 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"except_stmt:	EXCEPT  stmt\n";;}
    break;

  case 270:
#line 1215 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"except_stmt:	EXCEPT  expr stmt\n";;}
    break;

  case 271:
#line 1218 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"with_stmt:	WITH expr \n";;}
    break;

  case 272:
#line 1219 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"with_stmt:	WITH expr AS target \n";;}
    break;

  case 273:
#line 1222 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	expr_list\n";;}
    break;

  case 274:
#line 1223 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	assert_stmt\n";;}
    break;

  case 275:
#line 1224 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	assignment_stmt\n";;}
    break;

  case 276:
#line 1226 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	PASS\n";;}
    break;

  case 277:
#line 1227 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	del_stmt\n";;}
    break;

  case 278:
#line 1228 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	print_stmt\n";;}
    break;

  case 279:
#line 1229 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	return_stmt\n";;}
    break;

  case 280:
#line 1230 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	yield_stmt\n";;}
    break;

  case 281:
#line 1231 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	raise_stmt\n";;}
    break;

  case 282:
#line 1232 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	BREAK\n";;}
    break;

  case 283:
#line 1233 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	CONTINUE\n";;}
    break;

  case 284:
#line 1234 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	import_list\n";;}
    break;

  case 285:
#line 1235 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	global_stmt\n";;}
    break;

  case 286:
#line 1238 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assert_stmt: 	ASSERT expr\n";;}
    break;

  case 287:
#line 1239 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assert_stmt:	ASSERT expr COMMA expr\n";;}
    break;

  case 288:
#line 1241 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : expr_list\n";;}
    break;

  case 289:
#line 1242 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : parenth_form\n";;}
    break;

  case 290:
#line 1243 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : list_display\n";;}
    break;

  case 291:
#line 1244 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : dict_display\n";;}
    break;

  case 292:
#line 1247 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	target_list ASSIGN expr_list\n";;}
    break;

  case 293:
#line 1248 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	id_dot ASSIGN expr_list\n";;}
    break;

  case 294:
#line 1249 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	id_dot OPEN_D expr_list CLOSE_D ASSIGN expr_list\n";;}
    break;

  case 295:
#line 1250 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	id_dot OPEN_D expr_list CLOSE_D ASSIGN expr_list\n";;}
    break;

  case 296:
#line 1251 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	ID COMMA ID ASSIGN expr_list\n";;}
    break;

  case 297:
#line 1252 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
																		Streams::verbose()<<"assignment_stmt:	self dot amer\n";
																		//cout<<"assignment list"<<endl;
																		(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,true);
																		v=(yyval.var);
																		acc_mod="";
																	;}
    break;

  case 298:
#line 1264 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL target_list\n";;}
    break;

  case 299:
#line 1265 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID COMMA ID\n";;}
    break;

  case 300:
#line 1266 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID\n";;}
    break;

  case 301:
#line 1267 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID	OPEN_D expr CLOSE_D\n";;}
    break;

  case 302:
#line 1268 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID OPEN_D COLON CLOSE_D\n";;}
    break;

  case 303:
#line 1269 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID OPEN_D expr COLON expr CLOSE_D\n";;}
    break;

  case 304:
#line 1270 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL target_list	OPEN_D expr CLOSE_D\n";;}
    break;

  case 305:
#line 1271 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL target_list OPEN_D expr COLON expr CLOSE_D\n";;}
    break;

  case 306:
#line 1272 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL target_list OPEN_D COLON CLOSE_D\n";;}
    break;

  case 307:
#line 1275 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"return_stmt:	RETURN\n";;}
    break;

  case 308:
#line 1276 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"return_stmt:	RETURN expr_list\n";;}
    break;

  case 309:
#line 1279 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"yield_stmt:		yield_expression\n";;}
    break;

  case 310:
#line 1282 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"print_stmt: PRINT expr_list\n";;}
    break;

  case 311:
#line 1283 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"print_stmt: PRINT expr_list\n";;}
    break;

  case 312:
#line 1284 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"print_stmt:	PRINT MORE_THAN MORE_THAN expr_list\n";;}
    break;

  case 313:
#line 1285 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected reserved word 'print' ","");
								;}
    break;

  case 314:
#line 1289 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
												err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal)),"Expected reserved word 'print' ","");
												;}
    break;

  case 315:
#line 1294 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"global_stmt :GLOBAL id_list\n";;}
    break;

  case 316:
#line 1295 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+(yyvsp[-1].r.strVal)<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected IDENTIFIER ","");
									   ;}
    break;

  case 317:
#line 1301 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"id_list: 	ID COMMA id_list\n";;}
    break;

  case 318:
#line 1302 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"id_list:	ID\n";;}
    break;

  case 319:
#line 1305 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"raise_stmt: RAISE\n";;}
    break;

  case 320:
#line 1306 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"raise_stmt:	RAISE expr\n";;}
    break;

  case 321:
#line 1307 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"raise_stmt:	RAISE expr COMMA expr\n";;}
    break;

  case 322:
#line 1308 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected expression at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
													err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected expression ","");
												 ;}
    break;

  case 323:
#line 1312 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected reserved word 'raise' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
													err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'raise' ","");
												 ;}
    break;

  case 324:
#line 1318 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"access_modef: PRIVATE\n";acc_mod="private";pp=true;;}
    break;

  case 325:
#line 1319 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"access_modef:	PUBLIC\n";acc_mod="public";pp=false;}
    break;

  case 326:
#line 1320 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"access_modef:	PROTECTED\n";acc_mod="protected";;}
    break;

  case 327:
#line 1325 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S target_list CLOSE_S \n";;}
    break;

  case 328:
#line 1326 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S ID COMMA ID CLOSE_S\n";;}
    break;

  case 329:
#line 1327 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S ID CLOSE_S\n";;}
    break;

  case 330:
#line 1328 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D target_list CLOSE_D\n";;}
    break;

  case 331:
#line 1329 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D ID COMMA ID CLOSE_D\n";;}
    break;

  case 332:
#line 1330 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D ID CLOSE_D\n";;}
    break;

  case 333:
#line 1331 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	attributeref\n";;}
    break;

  case 334:
#line 1332 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	subscription\n";;}
    break;

  case 335:
#line 1335 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"attributeref: primary DOT ID\n";;}
    break;

  case 336:
#line 1336 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"attributeref: ID DOT ID\n";;}
    break;

  case 337:
#line 1339 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"primary: 	atom\n";;}
    break;

  case 338:
#line 1340 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"primary:	attributeref\n";;}
    break;

  case 339:
#line 1341 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"primary:	subscription\n";;}
    break;

  case 340:
#line 1342 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"primary:	call\n";;}
    break;

  case 341:
#line 1345 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"atom:	enclosure\n";;}
    break;

  case 342:
#line 1346 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"atom:	literal\n";	;}
    break;

  case 343:
#line 1349 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"literal:    STRING_VALUE\n";;}
    break;

  case 344:
#line 1350 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"literal:	INTEGER_VALUE\n";;}
    break;

  case 345:
#line 1351 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"literal:	LONG_VALUE\n";;}
    break;

  case 346:
#line 1352 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"literal:	FLOAT_VALUE\n";;}
    break;

  case 347:
#line 1353 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"literal:	CHAR_VALUE\n";;}
    break;

  case 348:
#line 1356 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"enclosure:	parenth_form\n";;}
    break;

  case 349:
#line 1357 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"enclosure:	list_display\n";;}
    break;

  case 350:
#line 1358 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"enclosure:	string_conversion\n";;}
    break;

  case 351:
#line 1359 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"enclosure:	yield_atom\n";;}
    break;

  case 352:
#line 1360 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"enclosure:	dict_display\n";;}
    break;

  case 353:
#line 1363 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dict_display: OPEN_C CLOSE_C \n";;}
    break;

  case 354:
#line 1364 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dict_display: OPEN_C key_datum_list CLOSE_C \n";;}
    break;

  case 355:
#line 1366 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum_list COMMA key_datum \n";;}
    break;

  case 356:
#line 1367 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum_list COMMA\n";;}
    break;

  case 357:
#line 1368 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum\n";;}
    break;

  case 358:
#line 1370 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"key_datum : expr COLON expr\n";;}
    break;

  case 359:
#line 1373 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"parenth_form : 	OPEN_S expr_list CLOSE_S\n";;}
    break;

  case 360:
#line 1374 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"parenth_form : 	OPEN_S  CLOSE_S\n";;}
    break;

  case 361:
#line 1375 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-1,"Expected '(' ","");
								;}
    break;

  case 362:
#line 1379 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected ')' ","");
										;}
    break;

  case 363:
#line 1383 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
													err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))," Expected '(' ","");
												 ;}
    break;

  case 364:
#line 1387 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
													err->errQ->enqueue((yyvsp[-2].r.lineNum),yylval.r.colNum-strlength(yylval.r.strVal)," Expected ')' ","");
												 ;}
    break;

  case 365:
#line 1394 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"list_display:	OPEN_D  expr_list CLOSE_D\n";;}
    break;

  case 366:
#line 1395 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"list_display:	OPEN_D CLOSE_D\n";;}
    break;

  case 367:
#line 1398 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"string_conversion:	RE_COT expr_list RE_COT\n";;}
    break;

  case 368:
#line 1401 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"yield_atom:		OPEN_S yield_expression CLOSE_S\n";;}
    break;

  case 369:
#line 1404 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"yield_expression:	YIELD\n";;}
    break;

  case 370:
#line 1405 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"yield_expression:	YIELD expr_list\n";;}
    break;

  case 371:
#line 1408 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"subscription:	PRIMARY OPEN_D expr_list CLOSE_D\n";;}
    break;

  case 372:
#line 1412 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"call:	PRIMARY OPEN_D args_list CLOSE_D\n";;}
    break;

  case 373:
#line 1413 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"call:	PRIMARY OPEN_D ID CLOSE_D\n";;}
    break;

  case 374:
#line 1417 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"expr:	condition\n";;}
    break;

  case 375:
#line 1418 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"expr:	literal\n";;}
    break;

  case 376:
#line 1419 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"expr:	expr op expr\n";;}
    break;

  case 377:
#line 1420 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"expr:	self.id\n";
									(yyval.var)=p->checkVariable((yyvsp[0].r.strVal),t, yylval.r.lineNum, yylval.r.colNum,true);
																		v=(yyval.var);
																		acc_mod="";
									;}
    break;

  case 378:
#line 1426 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"expr:	self.id()\n";
										p->insert_func_Call(t,(yyvsp[-1].r.strVal),yylval.r.lineNum, yylval.r.colNum);
										cout<<"hhhhhhhhh"<<endl;
									;}
    break;

  case 379:
#line 1431 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"expr:	long_id\n";
									
									;}
    break;

  case 380:
#line 1436 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected operand at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.lineNum)-strlength((yyvsp[-1].r.strVal))<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlen((yyvsp[-1].r.strVal)),"Expected operand ","");
									  ;}
    break;

  case 381:
#line 1442 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"condition: expr EQUAL expr\n";;}
    break;

  case 382:
#line 1443 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"condition: expr NOT_EQUAL expr\n";;}
    break;

  case 383:
#line 1444 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"condition: expr LESS_THAN expr\n";;}
    break;

  case 384:
#line 1445 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"condition: expr LESS_OR_EQUAL expr\n";;}
    break;

  case 385:
#line 1446 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"condition: expr MORE_THAN expr\n";;}
    break;

  case 386:
#line 1447 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"condition: expr MORE_OR_EQUAL expr\n";;}
    break;

  case 387:
#line 1449 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"id_dot:	ID\n";
								temp_id=temp_id+(yyvsp[0].r.strVal);
							;}
    break;

  case 388:
#line 1452 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"id_dot:	id_dot DOT ID\n";temp_id=temp_id+"."+(yyvsp[0].r.strVal);;}
    break;

  case 389:
#line 1461 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot\n";
										(yyval.var)=p->checkVariable(const_cast<char *>(temp_id.c_str()),t, yylval.r.lineNum, yylval.r.colNum);
										v=(yyval.var);
										temp_id="";
								;}
    break;

  case 390:
#line 1466 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot parenth_form\n";;}
    break;

  case 391:
#line 1467 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot OPEN_D expr CLOSE_D\n";;}
    break;

  case 392:
#line 1468 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot OPEN_D expr COLON expr CLOSE_D\n";;}
    break;

  case 393:
#line 1469 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot OPEN_D COLON CLOSE_D\n";;}
    break;

  case 394:
#line 1472 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :PLUS\n";;}
    break;

  case 395:
#line 1473 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :MINUS\n";;}
    break;

  case 396:
#line 1474 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :DIV\n";;}
    break;

  case 397:
#line 1475 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :MOD\n";;}
    break;

  case 398:
#line 1476 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :OR\n";;}
    break;

  case 399:
#line 1477 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :NOT\n";;}
    break;

  case 400:
#line 1478 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :AND\n";;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 5307 "yacc.cpp"

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


#line 1480 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"

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
