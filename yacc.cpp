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
     ENDMARKER = 258,
     IMPORT = 259,
     CLASS = 260,
     END = 261,
     PRIMARY = 262,
     OR = 263,
     AND = 264,
     NOT = 265,
     NOT_EQUAL = 266,
     FINAL = 267,
     STATIC = 268,
     SELF = 269,
     DEF = 270,
     ELSE = 271,
     IF = 272,
     ELIF = 273,
     WHILE = 274,
     FOR = 275,
     IN = 276,
     TRY = 277,
     FINALLY = 278,
     ARROW = 279,
     PASS = 280,
     NONLOCAL = 281,
     PLUS_EQUAL = 282,
     MINUS_EQUAL = 283,
     DIV_EQUAL = 284,
     MOD_EQUAL = 285,
     AND_EQUAL = 286,
     OR_EQUAL = 287,
     SHAPOO_EQUAL = 288,
     LESS_THAN_2_EQUAL = 289,
     MORE_THAN_2_EQUAL = 290,
     STAR_2_EQUAL = 291,
     DIV_2_EQUAL = 292,
     MORE_LESS = 293,
     FALSE = 294,
     TRUE = 295,
     STAR_2 = 296,
     NUMBER_INT = 297,
     NUMBER_LONG = 298,
     NUMBER_FLOAT = 299,
     NAME = 300,
     DOT_3 = 301,
     EXPECT = 302,
     WITH = 303,
     AS = 304,
     ASSERT = 305,
     EQUAL = 306,
     DEL = 307,
     RETURN = 308,
     PRINT = 309,
     GLOBAL = 310,
     STAR_EQUAL = 311,
     LESS_THAN_2 = 312,
     RAISE = 313,
     PRIVATE = 314,
     PUBLIC = 315,
     PROTECTED = 316,
     YIELD = 317,
     MORE_THAN_2 = 318,
     STRING = 319,
     NONE = 320,
     IS = 321,
     DIV_2 = 322,
     LESS_OR_EQUAL = 323,
     MORE_OR_EQUAL = 324,
     EXCEPT = 325,
     CHAR_VALUE = 326,
     BREAK = 327,
     CONTINUE = 328,
     stmt_14 = 329,
     stmt_13 = 330,
     stmt_12 = 331,
     stmt_11 = 332,
     stmt_10 = 333,
     stmt_9 = 334,
     stmt_8 = 335,
     stmt_7 = 336,
     stmt_6 = 337,
     stmt_5 = 338,
     stmt_4 = 339,
     stmt_3 = 340,
     stmt_2 = 341,
     stmt_1 = 342
   };
#endif
/* Tokens.  */
#define ENDMARKER 258
#define IMPORT 259
#define CLASS 260
#define END 261
#define PRIMARY 262
#define OR 263
#define AND 264
#define NOT 265
#define NOT_EQUAL 266
#define FINAL 267
#define STATIC 268
#define SELF 269
#define DEF 270
#define ELSE 271
#define IF 272
#define ELIF 273
#define WHILE 274
#define FOR 275
#define IN 276
#define TRY 277
#define FINALLY 278
#define ARROW 279
#define PASS 280
#define NONLOCAL 281
#define PLUS_EQUAL 282
#define MINUS_EQUAL 283
#define DIV_EQUAL 284
#define MOD_EQUAL 285
#define AND_EQUAL 286
#define OR_EQUAL 287
#define SHAPOO_EQUAL 288
#define LESS_THAN_2_EQUAL 289
#define MORE_THAN_2_EQUAL 290
#define STAR_2_EQUAL 291
#define DIV_2_EQUAL 292
#define MORE_LESS 293
#define FALSE 294
#define TRUE 295
#define STAR_2 296
#define NUMBER_INT 297
#define NUMBER_LONG 298
#define NUMBER_FLOAT 299
#define NAME 300
#define DOT_3 301
#define EXPECT 302
#define WITH 303
#define AS 304
#define ASSERT 305
#define EQUAL 306
#define DEL 307
#define RETURN 308
#define PRINT 309
#define GLOBAL 310
#define STAR_EQUAL 311
#define LESS_THAN_2 312
#define RAISE 313
#define PRIVATE 314
#define PUBLIC 315
#define PROTECTED 316
#define YIELD 317
#define MORE_THAN_2 318
#define STRING 319
#define NONE 320
#define IS 321
#define DIV_2 322
#define LESS_OR_EQUAL 323
#define MORE_OR_EQUAL 324
#define EXCEPT 325
#define CHAR_VALUE 326
#define BREAK 327
#define CONTINUE 328
#define stmt_14 329
#define stmt_13 330
#define stmt_12 331
#define stmt_11 332
#define stmt_10 333
#define stmt_9 334
#define stmt_8 335
#define stmt_7 336
#define stmt_6 337
#define stmt_5 338
#define stmt_4 339
#define stmt_3 340
#define stmt_2 341
#define stmt_1 342




/* Copy the first part of user declarations.  */
#line 3 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"

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
#line 66 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
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
#line 336 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 348 "yacc.cpp"

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
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1693

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  110
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  98
/* YYNRULES -- Number of rules. */
#define YYNRULES  379
/* YYNRULES -- Number of states. */
#define YYNSTATES  728

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   342

#define YYTRANSLATE(YYX)						\
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
       0,     0,     3,     6,    10,    12,    17,    24,    32,    38,
      46,    55,    63,    72,    78,    85,    94,   103,   110,   117,
     127,   137,   145,   153,   163,   173,   181,   189,   200,   211,
     220,   229,   239,   249,   257,   265,   276,   287,   296,   305,
     316,   327,   336,   345,   349,   352,   354,   356,   359,   361,
     363,   365,   367,   369,   371,   373,   375,   379,   381,   384,
     388,   391,   393,   396,   398,   401,   403,   407,   410,   413,
     416,   419,   421,   423,   425,   427,   429,   431,   433,   435,
     437,   439,   441,   443,   445,   447,   449,   451,   454,   457,
     459,   461,   463,   465,   467,   469,   472,   474,   476,   479,
     482,   486,   488,   491,   493,   497,   499,   502,   505,   509,
     512,   516,   519,   523,   526,   530,   532,   534,   536,   538,
     540,   542,   545,   550,   556,   561,   567,   575,   584,   589,
     597,   604,   614,   619,   627,   635,   642,   646,   651,   654,
     658,   663,   669,   671,   675,   677,   680,   685,   687,   690,
     693,   695,   697,   703,   706,   710,   712,   715,   718,   722,
     724,   727,   730,   732,   735,   739,   741,   744,   746,   748,
     750,   752,   754,   756,   758,   760,   763,   765,   768,   771,
     774,   778,   780,   783,   786,   790,   792,   795,   798,   802,
     804,   807,   810,   813,   817,   821,   823,   826,   829,   832,
     836,   840,   842,   845,   848,   851,   854,   857,   861,   865,
     869,   873,   875,   878,   881,   884,   887,   889,   891,   894,
     896,   899,   904,   908,   910,   913,   916,   920,   923,   926,
     930,   934,   936,   939,   943,   947,   951,   956,   961,   966,
     971,   977,   983,   988,   993,   999,  1005,  1011,  1017,  1019,
    1021,  1023,  1025,  1027,  1029,  1031,  1033,  1035,  1038,  1041,
    1045,  1049,  1052,  1054,  1057,  1060,  1064,  1067,  1069,  1072,
    1075,  1079,  1082,  1086,  1090,  1093,  1096,  1100,  1102,  1105,
    1108,  1112,  1114,  1116,  1119,  1123,  1127,  1132,  1135,  1138,
    1142,  1144,  1147,  1150,  1153,  1157,  1161,  1163,  1166,  1168,
    1171,  1174,  1178,  1181,  1185,  1188,  1192,  1194,  1197,  1200,
    1204,  1209,  1215,  1218,  1222,  1227,  1231,  1236,  1241,  1247,
    1250,  1252,  1255,  1258,  1262,  1267,  1273,  1279,  1285,  1292,
    1299,  1306,  1313,  1321,  1329,  1336,  1343,  1351,  1359,  1367,
    1375,  1382,  1390,  1393,  1397,  1400,  1404,  1406,  1408,  1411,
    1414,  1420,  1424,  1428,  1433,  1440,  1443,  1446,  1449,  1453,
    1457,  1461,  1468,  1473,  1478,  1484,  1492,  1496,  1499,  1503,
    1506,  1510,  1514,  1516,  1519,  1521,  1523,  1528,  1534,  1537
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     111,     0,    -1,   112,     3,    -1,   133,    98,   113,    -1,
     113,    -1,     5,    45,    99,   155,    -1,     5,    45,    89,
     100,    99,   155,    -1,     5,    45,    89,   200,   100,    99,
     155,    -1,   125,     5,    45,    99,   155,    -1,   125,     5,
      45,    89,   100,    99,   155,    -1,   125,     5,    45,    89,
     200,   100,    99,   155,    -1,    15,    45,   115,    24,   156,
      99,   155,    -1,    15,   125,    45,   115,    24,   156,    99,
     155,    -1,    15,    45,   115,    99,   155,    -1,    15,   125,
      45,   115,    99,   155,    -1,    15,    13,    45,   115,    24,
     156,    99,   155,    -1,    15,    12,    45,   115,    24,   156,
      99,   155,    -1,    15,    13,    45,   115,    99,   155,    -1,
      15,    12,    45,   115,    99,   155,    -1,    15,    13,    12,
      45,   115,    24,   156,    99,   155,    -1,    15,    12,    13,
      45,   115,    24,   156,    99,   155,    -1,    15,    13,    12,
      45,   115,    99,   155,    -1,    15,    12,    13,    45,   115,
      99,   155,    -1,    15,    12,   125,    45,   115,    24,   156,
      99,   155,    -1,    15,    13,   125,    45,   115,    24,   156,
      99,   155,    -1,    15,    13,   125,    45,   115,    99,   155,
      -1,    15,    12,   125,    45,   115,    99,   155,    -1,    15,
      13,    12,   125,    45,   115,    24,   156,    99,   155,    -1,
      15,    12,    13,   125,    45,   115,    24,   156,    99,   155,
      -1,    15,    13,    12,   125,    45,   115,    99,   155,    -1,
      15,    12,    13,   125,    45,   115,    99,   155,    -1,    15,
     125,    13,    45,   115,    24,   156,    99,   155,    -1,    15,
     125,    12,    45,   115,    24,   156,    99,   155,    -1,    15,
     125,    13,    45,   115,    99,   155,    -1,    15,   125,    12,
      45,   115,    99,   155,    -1,    15,   125,    13,    12,    45,
     115,    24,   156,    99,   155,    -1,    15,   125,    12,    13,
      45,   115,    24,   156,    99,   155,    -1,    15,   125,    13,
      12,    45,   115,    99,   155,    -1,    15,   125,    12,    13,
      45,   115,    99,   155,    -1,    15,    13,   125,    12,    45,
     115,    24,   156,    99,   155,    -1,    15,    12,   125,    13,
      45,   115,    24,   156,    99,   155,    -1,    15,    13,   125,
      12,    45,   115,    99,   155,    -1,    15,    12,   125,    13,
      45,   115,    99,   155,    -1,    89,   200,   100,    -1,    89,
     100,    -1,   117,    -1,   143,    -1,   118,    98,    -1,   119,
      -1,   127,    -1,   128,    -1,   129,    -1,   133,    -1,   141,
      -1,   142,    -1,   126,    -1,   121,   124,   193,    -1,   121,
      -1,   121,   120,    -1,   101,   121,   120,    -1,   101,   121,
      -1,   123,    -1,   123,    88,    -1,    88,    -1,   156,   123,
      -1,   156,    -1,   165,   123,    88,    -1,   165,    88,    -1,
      88,   156,    -1,    88,   165,    -1,   123,   122,    -1,   122,
      -1,    27,    -1,    28,    -1,    56,    -1,    29,    -1,    30,
      -1,    31,    -1,    32,    -1,    33,    -1,    34,    -1,    35,
      -1,    36,    -1,    37,    -1,    59,    -1,    60,    -1,    61,
      -1,    54,   191,    -1,    52,   191,    -1,    25,    -1,   130,
      -1,   131,    -1,   132,    -1,    72,    -1,    73,    -1,    53,
     193,    -1,    53,    -1,   134,    -1,     4,   136,    -1,    88,
     137,    -1,   135,    88,   137,    -1,   137,    -1,   137,   135,
      -1,   138,    -1,   138,    49,    45,    -1,    45,    -1,    45,
     139,    -1,   102,    45,    -1,   139,   102,    45,    -1,    88,
      45,    -1,   140,    88,    45,    -1,    55,    45,    -1,    55,
      45,   140,    -1,    26,    45,    -1,    26,    45,   140,    -1,
     145,    -1,   146,    -1,   147,    -1,   148,    -1,   151,    -1,
     114,    -1,    15,   197,    -1,    18,   156,    99,   155,    -1,
     144,    18,   156,    99,   155,    -1,    17,   156,    99,   155,
      -1,    17,   156,    99,   155,   144,    -1,    17,   156,    99,
     155,    16,    99,   155,    -1,    17,   156,    99,   155,   144,
      16,    99,   155,    -1,    19,   156,    99,   155,    -1,    19,
     156,    99,   155,    16,    99,   155,    -1,    20,   191,    21,
     193,    99,   155,    -1,    20,   191,    21,   193,    99,   155,
      16,    99,   155,    -1,    22,    99,   155,   149,    -1,    22,
      99,   155,   149,    16,    99,   155,    -1,    22,    99,   155,
     149,    23,    99,   155,    -1,    22,    99,   155,    23,    99,
     155,    -1,   153,    99,   155,    -1,   149,   153,    99,   155,
      -1,    88,   152,    -1,   150,    88,   152,    -1,    48,   152,
      99,   155,    -1,    48,   152,   150,    99,   155,    -1,   156,
      -1,   156,    49,   167,    -1,    70,    -1,    70,   156,    -1,
      70,   156,    49,    45,    -1,   116,    -1,   116,   154,    -1,
     154,     6,    -1,     6,    -1,   158,    -1,   158,    17,   158,
      16,   156,    -1,     8,   160,    -1,   157,     8,   160,    -1,
     160,    -1,   160,   157,    -1,     9,   161,    -1,   159,     9,
     161,    -1,   161,    -1,   161,   159,    -1,    10,   161,    -1,
     163,    -1,   164,   167,    -1,   162,   164,   167,    -1,   167,
      -1,   167,   162,    -1,    91,    -1,    92,    -1,    51,    -1,
      69,    -1,    68,    -1,    38,    -1,    11,    -1,    21,    -1,
      10,    21,    -1,    66,    -1,    66,    10,    -1,    95,   167,
      -1,   103,   169,    -1,   166,   103,   169,    -1,   169,    -1,
     169,   166,    -1,   104,   171,    -1,   168,   104,   171,    -1,
     171,    -1,   171,   168,    -1,   105,   173,    -1,   170,   105,
     173,    -1,   173,    -1,   173,   170,    -1,    57,   175,    -1,
      63,   175,    -1,   172,    57,   175,    -1,   172,    63,   175,
      -1,   175,    -1,   175,   172,    -1,    93,   177,    -1,    94,
     177,    -1,   174,    93,   177,    -1,   174,    94,   177,    -1,
     177,    -1,   177,   174,    -1,    95,   178,    -1,    96,   178,
      -1,    97,   178,    -1,    67,   178,    -1,   176,    95,   178,
      -1,   176,    96,   178,    -1,   176,    97,   178,    -1,   176,
      67,   178,    -1,   178,    -1,   178,   176,    -1,    93,   178,
      -1,    94,   178,    -1,   106,   178,    -1,   180,    -1,   185,
      -1,   179,   185,    -1,   182,    -1,   182,   179,    -1,   182,
     179,    41,   178,    -1,   182,    41,   178,    -1,    64,    -1,
     181,    64,    -1,    89,   100,    -1,    89,   184,   100,    -1,
      90,   107,    -1,   108,   109,    -1,    90,   184,   107,    -1,
     108,   196,   109,    -1,    45,    -1,    15,    45,    -1,    15,
     125,    45,    -1,    15,    13,    45,    -1,    15,    12,    45,
      -1,    15,    13,    12,    45,    -1,    15,    12,    13,    45,
      -1,    15,    13,   125,    45,    -1,    15,    12,   125,    45,
      -1,    15,    13,    12,   125,    45,    -1,    15,    12,    13,
     125,    45,    -1,    15,   125,    13,    45,    -1,    15,   125,
      12,    45,    -1,    15,   125,    13,    12,    45,    -1,    15,
     125,    12,    13,    45,    -1,    15,    13,   125,    12,    45,
      -1,    15,    12,   125,    13,    45,    -1,    42,    -1,    44,
      -1,    43,    -1,    71,    -1,   181,    -1,    46,    -1,    65,
      -1,    40,    -1,    39,    -1,    88,   156,    -1,    88,   165,
      -1,   183,    88,   156,    -1,   183,    88,   165,    -1,   156,
     206,    -1,   156,    -1,   156,   183,    -1,   156,    88,    -1,
     156,   183,    88,    -1,   165,   206,    -1,   165,    -1,   165,
     183,    -1,   165,    88,    -1,   165,   183,    88,    -1,    89,
     100,    -1,    89,   200,   100,    -1,    90,   187,   107,    -1,
     102,    45,    -1,    88,   188,    -1,   186,    88,   188,    -1,
     188,    -1,   188,   186,    -1,   188,    88,    -1,   188,   186,
      88,    -1,   156,    -1,    99,    -1,   156,    99,    -1,   156,
      99,   156,    -1,   156,    99,   189,    -1,   156,    99,   156,
     189,    -1,    99,   156,    -1,    99,   189,    -1,    99,   156,
     189,    -1,    99,    -1,    99,   156,    -1,    88,   167,    -1,
      88,   165,    -1,   190,    88,   167,    -1,   190,    88,   165,
      -1,   167,    -1,   167,   190,    -1,   165,    -1,   165,   190,
      -1,   167,    88,    -1,   167,   190,    88,    -1,   165,    88,
      -1,   165,   190,    88,    -1,    88,   156,    -1,    88,   156,
     192,    -1,   156,    -1,   156,   192,    -1,   156,    88,    -1,
     156,   192,    88,    -1,    88,   156,    99,   156,    -1,   194,
      88,   156,    99,   156,    -1,    88,   156,    -1,   195,    88,
     156,    -1,   156,    99,   156,   206,    -1,   156,    99,   156,
      -1,   156,    99,   156,    88,    -1,   156,    99,   156,   194,
      -1,   156,    99,   156,   194,    88,    -1,   156,   206,    -1,
     156,    -1,   156,    88,    -1,   156,   195,    -1,   156,   195,
      88,    -1,     5,    45,    99,   155,    -1,     5,   125,    45,
      99,   155,    -1,     5,    13,    45,    99,   155,    -1,     5,
      12,    45,    99,   155,    -1,     5,    13,    12,    45,    99,
     155,    -1,     5,    12,    13,    45,    99,   155,    -1,     5,
      12,   125,    45,    99,   155,    -1,     5,    13,   125,    45,
      99,   155,    -1,     5,    13,    12,   125,    45,    99,   155,
      -1,     5,    12,    13,   125,    45,    99,   155,    -1,     5,
     125,    13,    45,    99,   155,    -1,     5,   125,    12,    45,
      99,   155,    -1,     5,   125,    13,    12,    45,    99,   155,
      -1,     5,   125,    12,    13,    45,    99,   155,    -1,     5,
      13,   125,    12,    45,    99,   155,    -1,     5,    12,   125,
      13,    45,    99,   155,    -1,     5,    45,    89,   100,    99,
     155,    -1,     5,    45,    89,   200,   100,    99,   155,    -1,
     204,    88,    -1,   198,   204,    88,    -1,    88,   204,    -1,
     199,    88,   204,    -1,   204,    -1,   203,    -1,   204,    88,
      -1,    95,   156,    -1,    95,   156,    88,    41,   156,    -1,
      95,   156,   199,    -1,    95,   156,   201,    -1,    95,   156,
     199,   201,    -1,    95,   156,   199,    88,    41,   156,    -1,
      41,   156,    -1,   198,   204,    -1,   198,   203,    -1,   198,
     202,   203,    -1,   198,   204,    88,    -1,   198,    95,   156,
      -1,   198,    95,   156,    88,    41,   156,    -1,   198,    95,
     156,   199,    -1,   198,    95,   156,   201,    -1,   198,    95,
     156,   199,   201,    -1,   198,    95,   156,   199,    88,    41,
     156,    -1,   198,    41,   156,    -1,    88,   203,    -1,   201,
      88,   203,    -1,   203,    88,    -1,   202,   203,    88,    -1,
     156,   101,   156,    -1,   156,    -1,   156,   206,    -1,   206,
      -1,   207,    -1,    20,   191,    21,   158,    -1,    20,   191,
      21,   158,   205,    -1,    17,   158,    -1,    17,   158,   205,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   106,   106,   109,   110,   113,   114,   115,   116,   117,
     118,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   159,   160,   163,   164,   166,   168,   169,
     170,   171,   172,   173,   174,   175,   178,   179,   180,   183,
     184,   187,   188,   189,   190,   191,   192,   193,   196,   197,
     200,   201,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   217,   218,   219,   221,   222,   225,
     228,   229,   230,   233,   236,   239,   240,   244,   247,   250,
     251,   253,   254,   258,   259,   262,   263,   266,   267,   270,
     271,   274,   275,   278,   279,   282,   283,   284,   285,   286,
     287,   288,   291,   292,   295,   296,   297,   298,   301,   302,
     305,   306,   309,   310,   311,   312,   315,   316,   319,   320,
     323,   324,   327,   328,   331,   332,   333,   336,   337,   340,
     341,   344,   345,   348,   349,   352,   353,   356,   357,   360,
     361,   364,   365,   368,   369,   372,   373,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,   389,   392,
     393,   395,   396,   399,   400,   403,   404,   407,   408,   411,
     412,   415,   416,   417,   418,   421,   422,   425,   426,   427,
     428,   431,   432,   435,   436,   437,   438,   439,   440,   441,
     442,   445,   446,   449,   450,   451,   452,   455,   456,   459,
     460,   461,   462,   465,   466,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,   480,   481,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,   503,   504,   505,
     506,   509,   510,   511,   512,   513,   514,   515,   516,   517,
     518,   521,   522,   523,   524,   527,   528,   531,   532,   533,
     534,   537,   538,   539,   540,   541,   542,   543,   544,   545,
     548,   549,   552,   553,   554,   555,   558,   559,   560,   561,
     562,   563,   564,   565,   568,   569,   572,   573,   574,   575,
     578,   579,   581,   582,   585,   586,   587,   588,   589,   590,
     591,   592,   593,   594,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,   611,   612,
     613,   614,   617,   618,   621,   622,   625,   626,   627,   628,
     629,   630,   631,   632,   633,   634,   635,   636,   637,   638,
     639,   640,   641,   642,   643,   644,   645,   648,   649,   652,
     653,   655,   657,   658,   662,   663,   666,   667,   670,   671
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ENDMARKER", "IMPORT", "CLASS", "END",
  "PRIMARY", "OR", "AND", "NOT", "NOT_EQUAL", "FINAL", "STATIC", "SELF",
  "DEF", "ELSE", "IF", "ELIF", "WHILE", "FOR", "IN", "TRY", "FINALLY",
  "ARROW", "PASS", "NONLOCAL", "PLUS_EQUAL", "MINUS_EQUAL", "DIV_EQUAL",
  "MOD_EQUAL", "AND_EQUAL", "OR_EQUAL", "SHAPOO_EQUAL",
  "LESS_THAN_2_EQUAL", "MORE_THAN_2_EQUAL", "STAR_2_EQUAL", "DIV_2_EQUAL",
  "MORE_LESS", "FALSE", "TRUE", "STAR_2", "NUMBER_INT", "NUMBER_LONG",
  "NUMBER_FLOAT", "NAME", "DOT_3", "EXPECT", "WITH", "AS", "ASSERT",
  "EQUAL", "DEL", "RETURN", "PRINT", "GLOBAL", "STAR_EQUAL", "LESS_THAN_2",
  "RAISE", "PRIVATE", "PUBLIC", "PROTECTED", "YIELD", "MORE_THAN_2",
  "STRING", "NONE", "IS", "DIV_2", "LESS_OR_EQUAL", "MORE_OR_EQUAL",
  "EXCEPT", "CHAR_VALUE", "BREAK", "CONTINUE", "stmt_14", "stmt_13",
  "stmt_12", "stmt_11", "stmt_10", "stmt_9", "stmt_8", "stmt_7", "stmt_6",
  "stmt_5", "stmt_4", "stmt_3", "stmt_2", "stmt_1", "','", "'('", "'['",
  "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "';'", "':'", "')'",
  "'='", "'.'", "'|'", "'^'", "'&'", "'~'", "']'", "'{'", "'}'", "$accept",
  "file_input", "program", "temp2", "funcdef", "parameters", "stmt",
  "simple_stmt", "small_stmt", "expr_stmt", "right_testlist",
  "testlist_star_expr", "comma_test_star", "comma_test_star_seqJ",
  "augassign", "access", "print_stmt", "del_stmt", "pass_stmt",
  "flow_stmt", "break_stmt", "continue_stmt", "return_stmt", "import_stmt",
  "import_name", "comma_dotted_as_name_seq", "dotted_as_names",
  "dotted_as_name", "dotted_name", "dotted_name_seq", "comma_name_seq",
  "global_stmt", "nonlocal_stmt", "compound_stmt", "elif_seq", "if_stmt",
  "while_stmt", "for_stmt", "try_stmt", "try_except_cla_seq", "with_seq",
  "with_stmt", "with_item", "except_clause", "list_stmt", "suite", "test",
  "or_seq", "or_test", "and_seq", "and_test", "not_test", "comp_op_seq",
  "comparison", "comp_op", "star_expr", "or_xor_expr_seq", "expr",
  "sha_and_expr_seq", "xor_expr", "and_shift_expr_seq", "and_expr",
  "arith_seq", "shift_expr", "term_seq", "arith_expr", "factor_seq",
  "term", "factor", "trailer_seq", "power", "str_seq", "atom",
  "comma_test_star_seq", "testlist_comp", "trailer", "comma_subscript_seq",
  "subscriptlist", "subscript", "sliceop", "comma_expr_star_seq",
  "exprlist", "comma_test", "testlist", "comma_test_colon_test_seq",
  "comma_test_seq", "dictorsetmaker", "classdef", "arg_comma_seq",
  "comma_arg_seq", "arglist", "comma_default_arg_seq",
  "default_arg_comma_seq", "default_arg", "argument", "comp_iter",
  "comp_for", "comp_if", 0
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
     335,   336,   337,   338,   339,   340,   341,   342,    44,    40,
      91,    60,    62,    43,    45,    42,    47,    37,    59,    58,
      41,    61,    46,   124,    94,    38,   126,    93,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,   110,   111,   112,   112,   113,   113,   113,   113,   113,
     113,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   115,   115,   116,   116,   117,   118,   118,
     118,   118,   118,   118,   118,   118,   119,   119,   119,   120,
     120,   121,   121,   121,   121,   121,   121,   121,   122,   122,
     123,   123,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   125,   125,   125,   126,   127,   128,
     129,   129,   129,   130,   131,   132,   132,   133,   134,   135,
     135,   136,   136,   137,   137,   138,   138,   139,   139,   140,
     140,   141,   141,   142,   142,   143,   143,   143,   143,   143,
     143,   143,   144,   144,   145,   145,   145,   145,   146,   146,
     147,   147,   148,   148,   148,   148,   149,   149,   150,   150,
     151,   151,   152,   152,   153,   153,   153,   154,   154,   155,
     155,   156,   156,   157,   157,   158,   158,   159,   159,   160,
     160,   161,   161,   162,   162,   163,   163,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   165,   166,
     166,   167,   167,   168,   168,   169,   169,   170,   170,   171,
     171,   172,   172,   172,   172,   173,   173,   174,   174,   174,
     174,   175,   175,   176,   176,   176,   176,   176,   176,   176,
     176,   177,   177,   178,   178,   178,   178,   179,   179,   180,
     180,   180,   180,   181,   181,   182,   182,   182,   182,   182,
     182,   182,   182,   182,   182,   182,   182,   182,   182,   182,
     182,   182,   182,   182,   182,   182,   182,   182,   182,   182,
     182,   182,   182,   182,   182,   182,   182,   183,   183,   183,
     183,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   185,   185,   185,   185,   186,   186,   187,   187,   187,
     187,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     189,   189,   190,   190,   190,   190,   191,   191,   191,   191,
     191,   191,   191,   191,   192,   192,   193,   193,   193,   193,
     194,   194,   195,   195,   196,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   198,   198,   199,   199,   200,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   201,   201,   202,
     202,   203,   204,   204,   205,   205,   206,   206,   207,   207
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     2,     3,     1,     4,     6,     7,     5,     7,
       8,     7,     8,     5,     6,     8,     8,     6,     6,     9,
       9,     7,     7,     9,     9,     7,     7,    10,    10,     8,
       8,     9,     9,     7,     7,    10,    10,     8,     8,    10,
      10,     8,     8,     3,     2,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     2,     3,
       2,     1,     2,     1,     2,     1,     3,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     2,     2,
       3,     1,     2,     1,     3,     1,     2,     2,     3,     2,
       3,     2,     3,     2,     3,     1,     1,     1,     1,     1,
       1,     2,     4,     5,     4,     5,     7,     8,     4,     7,
       6,     9,     4,     7,     7,     6,     3,     4,     2,     3,
       4,     5,     1,     3,     1,     2,     4,     1,     2,     2,
       1,     1,     5,     2,     3,     1,     2,     2,     3,     1,
       2,     2,     1,     2,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     2,     2,
       3,     1,     2,     2,     3,     1,     2,     2,     3,     1,
       2,     2,     2,     3,     3,     1,     2,     2,     2,     3,
       3,     1,     2,     2,     2,     2,     2,     3,     3,     3,
       3,     1,     2,     2,     2,     2,     1,     1,     2,     1,
       2,     4,     3,     1,     2,     2,     3,     2,     2,     3,
       3,     1,     2,     3,     3,     3,     4,     4,     4,     4,
       5,     5,     4,     4,     5,     5,     5,     5,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     3,
       3,     2,     1,     2,     2,     3,     2,     1,     2,     2,
       3,     2,     3,     3,     2,     2,     3,     1,     2,     2,
       3,     1,     1,     2,     3,     3,     4,     2,     2,     3,
       1,     2,     2,     2,     3,     3,     1,     2,     1,     2,
       2,     3,     2,     3,     2,     3,     1,     2,     2,     3,
       4,     5,     2,     3,     4,     3,     4,     4,     5,     2,
       1,     2,     2,     3,     4,     5,     5,     5,     6,     6,
       6,     6,     7,     7,     6,     6,     7,     7,     7,     7,
       6,     7,     2,     3,     2,     3,     1,     1,     2,     2,
       5,     3,     3,     4,     6,     2,     2,     2,     3,     3,
       3,     6,     4,     4,     5,     7,     3,     2,     3,     2,
       3,     3,     1,     2,     1,     1,     4,     5,     2,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       0,     0,     0,    84,    85,    86,     0,     0,     4,     0,
       0,    97,   105,    98,   101,   103,     0,     1,     2,     0,
       0,     0,   106,     0,   102,     0,     0,     0,     0,     3,
     107,     0,    99,     0,   104,     0,     0,   256,   255,     0,
     248,   250,   249,   231,   253,   223,   254,   251,     0,     0,
       0,     0,     0,     0,     0,     0,   372,   151,   155,   159,
     162,   165,   181,   185,   189,   195,   201,   211,   216,   252,
     219,     0,     0,   347,   346,   150,     0,     0,     0,     0,
       0,    89,     0,     0,     0,    96,     0,     0,    93,    94,
      63,     0,   120,   147,    45,     0,    48,    57,    71,    61,
      55,    49,    50,    51,    90,    91,    92,    52,    53,    54,
      46,   115,   116,   117,   118,   119,     0,     5,    65,     0,
       0,     0,   108,   100,   161,     0,     0,   232,     0,   355,
     225,   262,   267,     0,   227,     0,   213,   214,   349,     0,
     215,   228,   320,     0,     0,     0,   373,     0,     0,   156,
       0,   160,     0,   173,   174,   172,   169,   176,   171,   170,
     167,   168,   166,     0,     0,   182,     0,   186,     0,   190,
       0,     0,   196,     0,     0,   202,     0,     0,     0,     0,
     212,   224,     0,     0,     0,     0,   220,   217,     0,     0,
       0,   357,   356,     0,   342,     0,     0,     0,   232,     0,
     121,     0,     0,   298,   296,     0,     0,   113,     0,   142,
      88,   306,    95,    87,   111,    68,    69,   178,   148,    47,
      72,    73,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    74,     0,    58,     0,    62,    70,   149,     0,    64,
      67,     0,     0,     0,     8,     0,   235,     0,     0,   234,
       0,     0,     0,   233,   264,   263,   261,   269,   268,   266,
     226,   229,     0,   351,   352,     6,   321,     0,   322,   319,
     230,     0,   371,     0,   153,     0,   157,     0,   175,   177,
       0,   163,   179,     0,   183,     0,   187,     0,   191,   192,
       0,     0,   197,   198,     0,     0,   206,   203,   204,   205,
       0,     0,     0,     0,   222,   271,     0,   282,   281,     0,
     277,   274,     0,   218,   366,   360,     0,   358,   369,   343,
       0,     0,     0,     0,     0,     0,   235,     0,     0,   234,
       0,     0,     0,     0,     0,   233,     0,     0,   302,   299,
     300,   297,     0,     0,     0,   114,     0,     0,     0,     0,
     308,   307,   112,    60,    56,    66,     0,     0,   237,     0,
       0,   239,   236,     0,     0,   238,     0,   243,     0,   242,
     257,   258,   265,   270,     0,   367,   344,     0,   353,     0,
     312,   315,   323,     0,     0,   154,   158,   164,   180,   184,
     188,   193,   194,   199,   200,   210,   207,   208,   209,   272,
     290,   287,   288,   283,   273,   279,   278,   221,     0,   362,
     363,   370,     7,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   237,     0,     0,     0,   239,   236,
       0,     0,     0,   238,    44,     0,     0,     0,     0,   243,
       0,   242,     0,   124,   128,   293,   292,   303,   301,     0,
       0,   144,   132,     0,   109,     0,   138,   140,     0,     0,
     143,   304,   309,    59,     9,     0,   241,   247,   240,   246,
     245,   244,   259,   260,   350,     0,   345,   368,   316,   317,
     314,   313,   376,   152,   291,   289,   284,   285,   275,   280,
       0,     0,   364,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   324,     0,     0,     0,     0,
       0,     0,   241,     0,     0,   247,     0,     0,   240,     0,
       0,   246,     0,    43,     0,    13,   245,     0,   244,     0,
       0,     0,     0,     0,   125,     0,   295,   294,     0,     0,
     145,     0,     0,     0,     0,   110,   139,   141,     0,   305,
      10,   354,     0,   318,     0,   377,   374,   375,   286,   276,
     361,     0,     0,     0,   327,     0,     0,     0,     0,   326,
       0,     0,     0,     0,     0,     0,     0,     0,   325,     0,
       0,     0,     0,    18,     0,     0,     0,     0,     0,     0,
       0,    17,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    14,     0,     0,     0,     0,     0,   130,
     135,     0,     0,     0,     0,   136,     0,     0,   378,   365,
     329,     0,     0,   330,   328,     0,     0,   331,   340,     0,
       0,   335,     0,   334,     0,    22,     0,     0,     0,     0,
       0,     0,    26,     0,    21,     0,     0,     0,     0,     0,
       0,    25,    11,     0,     0,     0,    34,     0,     0,     0,
      33,     0,   126,     0,     0,     0,   129,     0,   146,   133,
     134,   137,   310,     0,   379,   333,   339,   332,   338,   341,
     337,   336,     0,     0,    30,    16,     0,    42,     0,     0,
       0,    29,    15,     0,    41,     0,     0,    38,     0,     0,
      37,     0,    12,   122,   127,     0,     0,   311,    20,     0,
       0,    23,    19,     0,     0,    24,     0,    32,     0,    31,
     123,   131,    28,    40,    27,    39,    36,    35
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     6,     7,     8,    92,   332,    93,    94,    95,    96,
     233,    97,    98,    99,   234,     9,   100,   101,   102,   103,
     104,   105,   106,   107,    11,    24,    13,    14,    15,    22,
     345,   108,   109,   110,   534,   111,   112,   113,   114,   452,
     348,   115,   208,   453,   116,   117,   118,   149,    57,   151,
      58,    59,   162,    60,   163,   119,   165,    61,   167,    62,
     169,    63,   172,    64,   175,    65,   180,    66,    67,   186,
      68,    69,    70,   255,   133,   187,   406,   309,   310,   402,
     339,   205,   351,   212,   479,   268,   143,   200,    71,   263,
      72,   264,   190,    73,    74,   555,   556,   557
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -381
static const short int yypact[] =
{
     195,    -4,    36,  -381,  -381,  -381,    85,    58,  -381,    88,
      -1,  -381,     8,  -381,    92,    78,   -31,  -381,  -381,   159,
      39,   176,   128,    -4,   151,   207,   906,   788,    13,  -381,
    -381,   219,  -381,    -4,  -381,  1514,   212,  -381,  -381,  1514,
    -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,  1096,  1134,
    1585,  1585,  1514,   189,  1585,   435,    10,   297,   307,   280,
    -381,   312,   215,   223,   231,   240,    91,   334,  -381,   264,
      93,  1172,   244,  -381,   249,  -381,   330,  1514,  1514,  1547,
     242,  -381,   310,  1514,  1547,  1514,  1547,   319,  -381,  -381,
    1248,  1585,  -381,   847,  -381,   259,  -381,   141,  -381,   277,
    -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,
    -381,  -381,  -381,  -381,  -381,  -381,   365,  -381,   288,   308,
     944,   788,  -381,  -381,  -381,   339,   201,  -381,   175,  -381,
    -381,    62,    63,   295,  -381,   298,  -381,  -381,   314,   788,
    -381,  -381,    17,   299,  1547,  1514,  -381,  1514,  1514,   401,
    1514,   397,   390,  -381,  -381,  -381,  -381,   406,  -381,  -381,
    -381,  -381,   312,  1585,  1585,   316,  1585,   313,  1585,   318,
    1585,  1585,   268,  1585,  1585,   165,  1585,  1585,  1585,  1585,
     351,  -381,  1585,   982,  1286,   392,   148,  -381,  1514,  1514,
    1514,   350,   352,   345,   360,   300,   375,   241,   362,   265,
    -381,   363,   368,   373,   378,   448,   788,   385,   -28,   436,
    -381,   400,  -381,  -381,   385,  -381,  -381,  -381,  -381,  -381,
    -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,
    -381,  -381,  1210,  -381,  1514,  1248,  -381,  -381,  1248,   288,
    1248,   407,   387,   389,  -381,   367,  -381,    61,   398,  -381,
     136,   177,   182,  -381,  1248,   408,  -381,  1248,   410,  -381,
    -381,  -381,  1324,   413,   414,  -381,  1514,  1514,   415,  -381,
    -381,   484,  -381,   495,  -381,  1514,  -381,  1514,  -381,  -381,
    1585,  -381,  -381,  1585,  -381,  1585,  -381,  1585,  -381,  -381,
    1585,  1585,  -381,  -381,  1585,  1585,  -381,  -381,  -381,  -381,
    1585,  1585,  1585,  1585,  -381,  -381,   412,  1362,   416,   409,
     425,  -381,  1585,  -381,  -381,   429,   417,   432,  -381,   419,
     788,   394,   309,    97,   272,   411,   362,   190,   423,   362,
     198,  1020,     4,   274,   221,   362,   788,   788,  1547,   433,
    1547,   438,  1514,   156,   478,   442,  1514,   788,   -12,  1585,
    1514,   443,   442,   437,  -381,  1248,   788,   434,  -381,   487,
     489,  -381,  -381,   492,   494,  -381,   500,  -381,   501,  -381,
    -381,  -381,  1248,  1248,  1514,  -381,  -381,  1400,   414,  1514,
    -381,    72,  1514,  1514,  1514,  -381,  -381,  -381,  -381,  -381,
    -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,
    1514,   441,  -381,  1362,  -381,  1286,   459,  -381,  1438,   460,
     414,  -381,  -381,   431,   450,   281,   449,   451,   235,  1058,
     788,   317,   237,   452,   362,   507,     9,   509,   362,   362,
     510,    15,   511,   362,  -381,   457,  1514,   788,   513,   362,
     515,   362,    16,   369,   546,  -381,  -381,  1547,  1547,   464,
     465,  1514,    47,   466,  -381,   521,  -381,  -381,  1514,   788,
    -381,   480,  -381,  -381,  -381,   788,  -381,  -381,  -381,  -381,
    -381,  -381,  -381,  -381,  -381,  1514,  -381,  -381,  1514,   481,
    -381,  -381,    69,  -381,  -381,  -381,   441,  -381,  -381,  1286,
    1514,  1476,   414,   471,   528,   788,   530,   477,   479,   534,
     788,   535,   483,   485,   486,  -381,   538,   490,   540,   493,
     788,    23,   362,  1514,   788,   362,    24,    25,   362,  1514,
     788,   362,    26,  -381,   496,  -381,   362,    29,   362,    30,
    1514,   788,   497,  1514,   376,   499,  -381,  -381,   788,   788,
     539,   502,   503,   504,   788,  -381,  -381,  -381,  1514,  -381,
    -381,  -381,   505,  1514,  1514,  -381,  -381,  -381,  -381,  -381,
    -381,  1514,   788,   506,  -381,   508,   788,   788,   512,  -381,
     518,   788,   788,   519,   524,   788,   525,   788,  -381,  1514,
     788,    31,   526,  -381,    32,  1514,   788,  1514,   788,    41,
     527,  -381,    42,  1514,   788,   788,    43,  1514,   788,    48,
    1514,   788,   529,  -381,   788,   531,   533,  1514,   788,   577,
    -381,   549,   788,   788,   788,  -381,  1514,   536,    69,  -381,
    -381,   788,   788,  -381,  -381,   788,   788,  -381,  -381,   788,
     788,  -381,   788,  -381,   537,  -381,  1514,   788,   788,  1514,
     788,   541,  -381,   542,  -381,  1514,   788,   788,  1514,   788,
     543,  -381,  -381,  1514,   788,   547,  -381,  1514,   788,   551,
    -381,   788,  -381,   788,   788,   552,  -381,   554,  -381,  -381,
    -381,  -381,  -381,  1514,  -381,  -381,  -381,  -381,  -381,  -381,
    -381,  -381,   788,   556,  -381,  -381,   557,  -381,   788,   788,
     559,  -381,  -381,   560,  -381,   788,   561,  -381,   788,   562,
    -381,   788,  -381,  -381,  -381,   788,   788,  -381,  -381,   788,
     788,  -381,  -381,   788,   788,  -381,   788,  -381,   788,  -381,
    -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -381,  -381,  -381,   579,  -381,  -222,  -381,  -381,  -381,  -381,
     247,   374,   -80,   157,  -381,   -30,  -381,  -381,  -381,  -381,
    -381,  -381,  -381,   609,  -381,  -381,  -381,   168,  -381,  -381,
     420,  -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,
    -381,  -381,  -322,   160,   544,    77,   -26,  -381,  -139,  -381,
    -143,   -32,  -381,  -381,   458,    -6,  -381,   -75,  -381,  -157,
    -381,  -152,  -381,  -148,  -381,  -136,  -381,  -142,   -33,  -381,
    -381,  -381,  -381,   482,   580,   447,  -381,  -381,  -380,  -365,
     462,    -7,   184,  -207,  -381,  -381,  -381,  -381,  -381,   323,
    -108,  -253,  -381,   -70,   -69,    44,   -41,  -381
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -360
static const short int yytable[] =
{
      56,   191,   192,   124,   204,   274,   128,   282,   273,   204,
     378,   204,   243,   129,   284,   146,   217,   136,   137,   236,
     286,   140,   131,   131,   456,   488,   138,   354,   436,   142,
     144,   292,   293,   513,   288,   289,   485,   144,   487,   519,
     530,    12,   132,   132,     2,    56,   199,   579,   585,   587,
     593,   201,   202,   597,   600,   636,   639,   209,    26,   211,
     346,    18,   410,   541,   215,   645,   648,   653,    27,   204,
     542,   347,   657,   203,   360,   306,   458,   210,   203,   213,
     203,    16,   144,   144,   216,    17,   554,   459,   281,   144,
     256,   259,   144,    19,    56,   247,   250,    20,     3,     4,
       5,   269,   120,   437,   426,   266,   361,   431,   514,   559,
      21,   145,   121,   442,   520,   531,   267,   451,   276,   272,
     317,   558,   580,   586,   588,   594,   388,    25,   598,   601,
     637,   640,   385,   389,   182,   449,   546,   271,   203,   390,
     646,   649,   654,   296,   297,   298,   299,   658,   364,   304,
     254,   257,   393,   394,   391,   392,   492,    56,   308,   236,
     478,   236,   314,   315,   316,   324,   327,   330,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   450,
      23,   365,   183,   184,   173,   174,   419,   251,   252,   312,
     366,    32,   375,   376,   368,   185,   420,   231,   244,     1,
       2,   123,   511,   427,    28,   387,   516,   517,   211,   215,
     432,   522,   215,   248,   215,   359,   265,   527,   363,   529,
     253,    30,   367,   435,   125,   126,   451,   369,   370,   216,
      31,   370,   216,   440,   216,   428,    56,   183,   184,    33,
     380,   381,   232,   433,   482,   386,   249,   501,   371,   508,
     185,   371,    34,   328,     3,     4,     5,   127,   294,   295,
       3,     4,     5,   446,   122,   446,   441,   395,   396,   397,
     398,     3,     4,     5,   460,   239,   241,   333,   334,   407,
     502,   401,   509,   343,   421,   422,   329,   438,   139,   150,
     581,   415,   418,   584,   496,   425,   589,   170,   430,   592,
       3,     4,     5,   171,   596,    56,   599,   375,   476,   477,
     335,   504,   321,   322,   147,   148,   211,   423,   164,   439,
     209,   416,   152,   153,   461,   290,   497,   166,   181,   215,
     506,   291,   445,   154,   445,   195,   168,   194,   375,   376,
     480,   206,   196,   197,   193,   323,   472,   472,   474,   216,
     155,    56,   245,   316,   417,   207,   481,   219,   483,     3,
       4,     5,   507,   156,   214,   235,   473,   473,     3,     4,
       5,   237,   537,   537,   484,   198,   238,   486,   157,   308,
     158,   159,    56,   494,   246,   532,   499,   533,   325,     3,
       4,     5,   606,    56,   607,   260,   240,   412,     3,     4,
       5,   176,   262,   160,   161,   261,   277,   413,   270,   275,
     524,   278,   358,   443,   444,   618,   279,   285,   300,   283,
     326,   375,   476,   287,   457,   540,     3,     4,     5,   177,
     178,   179,   209,   464,     3,     4,     5,   311,   318,   414,
     319,   536,   536,   362,   320,    35,   301,   302,   303,   551,
      36,   331,   552,     3,     4,     5,   424,     3,     4,     5,
    -348,   338,   336,   308,   560,    56,   340,   337,   429,   342,
       3,     4,     5,   344,    37,    38,   493,    40,    41,    42,
      43,    44,     3,     4,     5,   349,   356,   582,   350,   357,
       3,     4,     5,   590,   498,   355,   372,   505,   373,    45,
      46,   377,   379,   382,   602,   383,    47,   605,     3,     4,
       5,   384,   399,   405,   525,   403,   404,   408,   145,  -359,
     411,   447,   461,   454,    48,    49,   448,   617,    50,    51,
     455,   462,   466,   465,   467,   619,   547,   468,   232,   469,
     400,    54,   550,    55,   141,   470,   471,   489,   491,   495,
     500,   510,   512,   634,   515,   518,   521,   523,   526,   641,
     528,   643,   535,   538,   539,   544,   545,   650,  -360,   553,
     562,   655,   564,   563,   659,   565,   566,   569,   567,   568,
     570,   665,   571,   574,   572,   576,   573,   578,   611,   575,
     672,   583,   577,   667,   668,   595,   604,   591,   608,    29,
     463,   612,   613,   614,   616,   621,   353,   622,   603,    10,
     683,   625,   543,   686,   258,   609,   610,   626,   629,   690,
     280,   615,   693,   630,   632,   638,   647,   696,   661,   135,
     663,   699,   664,   313,   352,   673,   682,   218,   409,   620,
     688,   689,   695,   623,   624,   549,   698,   707,   627,   628,
     701,   705,   631,   706,   633,   709,   710,   635,   713,   714,
     716,   718,   674,   642,     0,   644,   341,     0,     0,     0,
       0,   651,   652,     0,     0,   656,     0,     0,   660,     0,
       0,   662,     0,     0,     0,   666,     0,     0,     0,   669,
     670,   671,     0,     0,     0,     0,     0,     0,   675,   676,
       0,     0,   677,   678,     0,     0,   679,   680,     0,   681,
       0,     0,     0,     0,   684,   685,     0,   687,     0,     0,
       0,     0,     0,   691,   692,     0,   694,     0,     0,     0,
       0,   697,     0,     0,     0,   700,     0,     0,   702,     0,
     703,   704,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   708,
       0,     0,     0,     0,     0,   711,   712,     0,     0,     0,
       0,     0,   715,     0,     0,   717,     0,     0,   719,     0,
       0,     0,   720,   721,     0,     0,   722,   723,     0,     0,
     724,   725,     1,   726,    75,   727,     0,     0,    35,     0,
       0,     0,     0,    76,     0,    77,     0,    78,    79,     0,
      80,     0,     0,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    37,    38,     0,
      40,    41,    42,    43,    44,     0,    83,     0,     0,     0,
      84,    85,    86,    87,     0,     0,     0,     0,     0,     0,
       0,     1,    45,    46,     0,     0,     0,    35,     0,    47,
      88,    89,    76,     0,    77,     0,    78,    79,     0,    80,
       0,     0,    81,    82,     0,     0,    90,    48,    49,     0,
       0,    50,    51,    91,     0,     0,    37,    38,     0,    40,
      41,    42,    43,    44,    54,    83,    55,     0,     0,    84,
      85,    86,    87,     0,     0,     0,     0,     0,     0,     0,
       0,    45,    46,     0,     0,     0,    35,     0,    47,    88,
      89,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    90,    48,    49,     0,     0,
      50,    51,    91,     0,     0,    37,    38,    39,    40,    41,
      42,    43,    44,    54,    35,    55,     0,     0,     0,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      45,    46,     0,     0,     0,     0,     0,    47,     0,     0,
       0,     0,     0,    37,    38,    39,    40,    41,    42,    43,
      44,     0,    35,     0,     0,    48,    49,    36,     0,    50,
      51,    52,     0,     0,     0,     0,    53,     0,    45,    46,
       0,     0,    54,     0,    55,    47,     0,     0,     0,     0,
       0,    37,    38,    39,    40,    41,    42,    43,    44,     0,
      35,     0,     0,    48,    49,    36,     0,    50,    51,    52,
       0,     0,     0,     0,   242,     0,    45,    46,     0,     0,
      54,     0,    55,    47,     0,     0,     0,     0,     0,    37,
      38,    39,    40,    41,    42,    43,    44,     0,    35,     0,
       0,    48,    49,    36,     0,    50,    51,    52,     0,     0,
       0,     0,   305,     0,    45,    46,     0,     0,    54,     0,
      55,    47,     0,     0,     0,     0,     0,    37,    38,    39,
      40,    41,    42,    43,    44,     0,    35,     0,     0,    48,
      49,    36,     0,    50,    51,    52,     0,     0,     0,     0,
     434,     0,    45,    46,     0,     0,    54,     0,    55,    47,
       0,     0,     0,     0,     0,    37,    38,     0,    40,    41,
      42,    43,    44,     0,    35,     0,     0,    48,    49,    36,
       0,    50,    51,    52,     0,     0,     0,     0,   503,     0,
      45,    46,     0,     0,    54,     0,    55,    47,     0,     0,
       0,     0,     0,    37,    38,     0,    40,    41,    42,    43,
      44,     0,    35,     0,     0,    48,    49,    36,     0,    50,
      51,    91,     0,     0,     0,     0,   130,     0,    45,    46,
       0,     0,    54,     0,    55,    47,     0,     0,     0,     0,
       0,    37,    38,   188,    40,    41,    42,    43,    44,     0,
      35,     0,     0,    48,    49,    36,     0,    50,    51,    91,
       0,     0,     0,     0,     0,     0,    45,    46,     0,     0,
      54,   134,    55,    47,     0,     0,     0,     0,     0,    37,
      38,     0,    40,    41,    42,    43,    44,     0,    35,     0,
       0,    48,    49,    36,     0,    50,    51,   189,     0,     0,
       0,     0,     0,     0,    45,    46,     0,     0,    54,     0,
      55,    47,     0,     0,     0,     0,     0,    37,    38,     0,
      40,    41,    42,    43,    44,     0,    35,     0,    90,    48,
      49,    36,     0,    50,    51,    91,     0,     0,     0,     0,
       0,     0,    45,    46,     0,     0,    54,     0,    55,    47,
       0,     0,     0,     0,     0,    37,    38,     0,    40,    41,
      42,    43,    44,     0,    35,     0,     0,    48,    49,    36,
       0,    50,    51,    91,     0,     0,     0,     0,     0,     0,
      45,    46,     0,     0,    54,     0,    55,    47,     0,     0,
       0,     0,     0,    37,    38,   374,    40,    41,    42,    43,
      44,     0,    35,     0,     0,    48,    49,    36,     0,    50,
      51,     0,     0,     0,     0,   307,     0,     0,    45,    46,
       0,     0,    54,     0,    55,    47,     0,     0,     0,     0,
       0,    37,    38,     0,    40,    41,    42,    43,    44,     0,
      35,     0,     0,    48,    49,    36,     0,    50,    51,     0,
       0,     0,     0,     0,     0,     0,    45,    46,     0,     0,
      54,     0,    55,    47,     0,     0,     0,     0,     0,    37,
      38,   475,    40,    41,    42,    43,    44,     0,    35,     0,
       0,    48,    49,    36,     0,    50,    51,     0,     0,     0,
       0,   400,     0,     0,    45,    46,     0,     0,    54,     0,
      55,    47,     0,     0,     0,     0,     0,    37,    38,   490,
      40,    41,    42,    43,    44,     0,    35,     0,     0,    48,
      49,    36,     0,    50,    51,     0,     0,     0,     0,     0,
       0,     0,    45,    46,     0,     0,    54,     0,    55,    47,
       0,     0,     0,     0,     0,    37,    38,   561,    40,    41,
      42,    43,    44,     0,    35,     0,     0,    48,    49,    36,
       0,    50,    51,     0,     0,     0,     0,     0,     0,     0,
      45,    46,     0,     0,    54,     0,    55,    47,     0,     0,
       0,     0,     0,    37,    38,     0,    40,    41,    42,    43,
      44,     0,    36,     0,     0,    48,    49,     0,     0,    50,
      51,     0,     0,     0,     0,     0,     0,     0,    45,    46,
       0,     0,    54,     0,    55,    47,    37,    38,     0,    40,
      41,    42,    43,    44,     0,     0,     0,     0,     0,     0,
      36,     0,     0,    48,    49,     0,     0,    50,    51,     0,
       0,    45,    46,     0,     0,     0,     0,     0,    47,     0,
      54,     0,    55,     0,    37,    38,     0,    40,    41,    42,
      43,    44,     0,     0,     0,     0,    48,    49,     0,     0,
      50,    51,    91,     0,     0,     0,     0,     0,     0,    45,
      46,     0,     0,    54,     0,    55,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,    49,     0,     0,    50,    51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    54,     0,    55
};

static const short int yycheck[] =
{
      26,    71,    71,    35,    79,   148,    36,   164,   147,    84,
     263,    86,   120,    39,   166,    56,    91,    50,    51,    99,
     168,    54,    48,    49,   346,   405,    52,   234,    24,    55,
      20,   173,   174,    24,   170,   171,   401,    20,   403,    24,
      24,    45,    48,    49,     5,    71,    76,    24,    24,    24,
      24,    77,    78,    24,    24,    24,    24,    83,    89,    85,
      88,     3,   315,    16,    90,    24,    24,    24,    99,   144,
      23,    99,    24,    79,    13,   183,    88,    84,    84,    86,
      86,    45,    20,    20,    90,     0,    17,    99,   163,    20,
     131,   132,    20,     5,   120,   125,   126,    98,    59,    60,
      61,   142,    89,    99,   326,    88,    45,   329,    99,   489,
     102,   101,    99,   335,    99,    99,    99,    70,   150,   145,
     190,   486,    99,    99,    99,    99,   283,    49,    99,    99,
      99,    99,   275,   285,    41,   342,   458,   144,   144,   287,
      99,    99,    99,   176,   177,   178,   179,    99,    12,   182,
      88,    88,   294,   295,   290,   291,   409,   183,   184,   239,
      88,   241,   188,   189,   190,   195,   196,   197,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    23,
      88,    45,    89,    90,    93,    94,    89,    12,    13,    41,
      13,    23,   262,   262,    12,   102,    99,    56,   121,     4,
       5,    33,   424,    13,    45,   280,   428,   429,   234,   235,
      12,   433,   238,    12,   240,   245,   139,   439,   248,   441,
      45,    45,    45,   331,    12,    13,    70,    45,   254,   235,
     102,   257,   238,    12,   240,    45,   262,    89,    90,    88,
     266,   267,   101,    45,   383,   277,    45,    12,   254,    12,
     102,   257,    45,    12,    59,    60,    61,    45,    93,    94,
      59,    60,    61,   338,    45,   340,    45,   300,   301,   302,
     303,    59,    60,    61,   349,   118,   119,    12,    13,   312,
      45,   307,    45,   206,    12,    13,    45,    13,    99,     9,
     512,   321,   322,   515,    13,   325,   518,    57,   328,   521,
      59,    60,    61,    63,   526,   331,   528,   377,   377,   379,
      45,   419,    12,    13,    17,     8,   342,    45,   103,    45,
     346,    12,    10,    11,   350,    57,    45,   104,    64,   355,
      13,    63,   338,    21,   340,     5,   105,    88,   408,   408,
     381,    99,    12,    13,   100,    45,   372,   373,   374,   355,
      38,   377,    13,   379,    45,    45,   382,    98,   384,    59,
      60,    61,    45,    51,    45,    88,   372,   373,    59,    60,
      61,     6,   447,   448,   400,    45,    88,   403,    66,   405,
      68,    69,   408,   413,    45,    16,   416,    18,    13,    59,
      60,    61,    16,   419,    18,   100,    88,   320,    59,    60,
      61,    67,    88,    91,    92,   107,     9,    13,   109,     8,
     436,    21,    45,   336,   337,   554,    10,   104,    67,   103,
      45,   491,   491,   105,   347,   451,    59,    60,    61,    95,
      96,    97,   458,   356,    59,    60,    61,    45,    88,    45,
      88,   447,   448,    45,    99,    10,    95,    96,    97,   475,
      15,    89,   478,    59,    60,    61,    45,    59,    60,    61,
     100,    88,    99,   489,   490,   491,    88,    99,    45,    21,
      59,    60,    61,    88,    39,    40,    45,    42,    43,    44,
      45,    46,    59,    60,    61,    49,    99,   513,    88,   100,
      59,    60,    61,   519,    45,    88,    88,   420,    88,    64,
      65,    88,    88,    88,   530,    21,    71,   533,    59,    60,
      61,    16,   100,    88,   437,    99,   107,    88,   101,   100,
      88,    88,   548,    45,    89,    90,    88,   553,    93,    94,
      88,    88,    45,    99,    45,   561,   459,    45,   101,    45,
      99,   106,   465,   108,   109,    45,    45,    88,    88,    99,
      99,    99,    45,   579,    45,    45,    45,   100,    45,   585,
      45,   587,    16,    99,    99,    99,    45,   593,    88,    88,
      99,   597,   495,    45,   600,    45,    99,   500,    99,    45,
      45,   607,    99,    45,    99,    45,   100,   510,    49,    99,
     616,   514,    99,    16,    45,    99,    99,   520,    99,    20,
     353,    99,    99,    99,    99,    99,   232,    99,   531,     0,
     636,    99,   452,   639,   132,   538,   539,    99,    99,   645,
     162,   544,   648,    99,    99,    99,    99,   653,    99,    49,
      99,   657,    99,   186,   214,    99,    99,    93,   315,   562,
      99,    99,    99,   566,   567,   461,    99,   673,   571,   572,
      99,    99,   575,    99,   577,    99,    99,   580,    99,    99,
      99,    99,   618,   586,    -1,   588,   204,    -1,    -1,    -1,
      -1,   594,   595,    -1,    -1,   598,    -1,    -1,   601,    -1,
      -1,   604,    -1,    -1,    -1,   608,    -1,    -1,    -1,   612,
     613,   614,    -1,    -1,    -1,    -1,    -1,    -1,   621,   622,
      -1,    -1,   625,   626,    -1,    -1,   629,   630,    -1,   632,
      -1,    -1,    -1,    -1,   637,   638,    -1,   640,    -1,    -1,
      -1,    -1,    -1,   646,   647,    -1,   649,    -1,    -1,    -1,
      -1,   654,    -1,    -1,    -1,   658,    -1,    -1,   661,    -1,
     663,   664,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   682,
      -1,    -1,    -1,    -1,    -1,   688,   689,    -1,    -1,    -1,
      -1,    -1,   695,    -1,    -1,   698,    -1,    -1,   701,    -1,
      -1,    -1,   705,   706,    -1,    -1,   709,   710,    -1,    -1,
     713,   714,     4,   716,     6,   718,    -1,    -1,    10,    -1,
      -1,    -1,    -1,    15,    -1,    17,    -1,    19,    20,    -1,
      22,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,
      42,    43,    44,    45,    46,    -1,    48,    -1,    -1,    -1,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     4,    64,    65,    -1,    -1,    -1,    10,    -1,    71,
      72,    73,    15,    -1,    17,    -1,    19,    20,    -1,    22,
      -1,    -1,    25,    26,    -1,    -1,    88,    89,    90,    -1,
      -1,    93,    94,    95,    -1,    -1,    39,    40,    -1,    42,
      43,    44,    45,    46,   106,    48,   108,    -1,    -1,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    65,    -1,    -1,    -1,    10,    -1,    71,    72,
      73,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    89,    90,    -1,    -1,
      93,    94,    95,    -1,    -1,    39,    40,    41,    42,    43,
      44,    45,    46,   106,    10,   108,    -1,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    10,    -1,    -1,    89,    90,    15,    -1,    93,
      94,    95,    -1,    -1,    -1,    -1,   100,    -1,    64,    65,
      -1,    -1,   106,    -1,   108,    71,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      10,    -1,    -1,    89,    90,    15,    -1,    93,    94,    95,
      -1,    -1,    -1,    -1,   100,    -1,    64,    65,    -1,    -1,
     106,    -1,   108,    71,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    10,    -1,
      -1,    89,    90,    15,    -1,    93,    94,    95,    -1,    -1,
      -1,    -1,   100,    -1,    64,    65,    -1,    -1,   106,    -1,
     108,    71,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    10,    -1,    -1,    89,
      90,    15,    -1,    93,    94,    95,    -1,    -1,    -1,    -1,
     100,    -1,    64,    65,    -1,    -1,   106,    -1,   108,    71,
      -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    42,    43,
      44,    45,    46,    -1,    10,    -1,    -1,    89,    90,    15,
      -1,    93,    94,    95,    -1,    -1,    -1,    -1,   100,    -1,
      64,    65,    -1,    -1,   106,    -1,   108,    71,    -1,    -1,
      -1,    -1,    -1,    39,    40,    -1,    42,    43,    44,    45,
      46,    -1,    10,    -1,    -1,    89,    90,    15,    -1,    93,
      94,    95,    -1,    -1,    -1,    -1,   100,    -1,    64,    65,
      -1,    -1,   106,    -1,   108,    71,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      10,    -1,    -1,    89,    90,    15,    -1,    93,    94,    95,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    -1,    -1,
     106,   107,   108,    71,    -1,    -1,    -1,    -1,    -1,    39,
      40,    -1,    42,    43,    44,    45,    46,    -1,    10,    -1,
      -1,    89,    90,    15,    -1,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    -1,    -1,   106,    -1,
     108,    71,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,
      42,    43,    44,    45,    46,    -1,    10,    -1,    88,    89,
      90,    15,    -1,    93,    94,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    65,    -1,    -1,   106,    -1,   108,    71,
      -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    42,    43,
      44,    45,    46,    -1,    10,    -1,    -1,    89,    90,    15,
      -1,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    -1,    -1,   106,    -1,   108,    71,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    10,    -1,    -1,    89,    90,    15,    -1,    93,
      94,    -1,    -1,    -1,    -1,    99,    -1,    -1,    64,    65,
      -1,    -1,   106,    -1,   108,    71,    -1,    -1,    -1,    -1,
      -1,    39,    40,    -1,    42,    43,    44,    45,    46,    -1,
      10,    -1,    -1,    89,    90,    15,    -1,    93,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    -1,    -1,
     106,    -1,   108,    71,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    10,    -1,
      -1,    89,    90,    15,    -1,    93,    94,    -1,    -1,    -1,
      -1,    99,    -1,    -1,    64,    65,    -1,    -1,   106,    -1,
     108,    71,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    10,    -1,    -1,    89,
      90,    15,    -1,    93,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    65,    -1,    -1,   106,    -1,   108,    71,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    10,    -1,    -1,    89,    90,    15,
      -1,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    -1,    -1,   106,    -1,   108,    71,    -1,    -1,
      -1,    -1,    -1,    39,    40,    -1,    42,    43,    44,    45,
      46,    -1,    15,    -1,    -1,    89,    90,    -1,    -1,    93,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      -1,    -1,   106,    -1,   108,    71,    39,    40,    -1,    42,
      43,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      15,    -1,    -1,    89,    90,    -1,    -1,    93,    94,    -1,
      -1,    64,    65,    -1,    -1,    -1,    -1,    -1,    71,    -1,
     106,    -1,   108,    -1,    39,    40,    -1,    42,    43,    44,
      45,    46,    -1,    -1,    -1,    -1,    89,    90,    -1,    -1,
      93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    -1,    -1,   106,    -1,   108,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    90,    -1,    -1,    93,    94,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     4,     5,    59,    60,    61,   111,   112,   113,   125,
     133,   134,    45,   136,   137,   138,    45,     0,     3,     5,
      98,   102,   139,    88,   135,    49,    89,    99,    45,   113,
      45,   102,   137,    88,    45,    10,    15,    39,    40,    41,
      42,    43,    44,    45,    46,    64,    65,    71,    89,    90,
      93,    94,    95,   100,   106,   108,   156,   158,   160,   161,
     163,   167,   169,   171,   173,   175,   177,   178,   180,   181,
     182,   198,   200,   203,   204,     6,    15,    17,    19,    20,
      22,    25,    26,    48,    52,    53,    54,    55,    72,    73,
      88,    95,   114,   116,   117,   118,   119,   121,   122,   123,
     126,   127,   128,   129,   130,   131,   132,   133,   141,   142,
     143,   145,   146,   147,   148,   151,   154,   155,   156,   165,
      89,    99,    45,   137,   161,    12,    13,    45,   125,   156,
     100,   156,   165,   184,   107,   184,   178,   178,   156,    99,
     178,   109,   156,   196,    20,   101,   206,    17,     8,   157,
       9,   159,    10,    11,    21,    38,    51,    66,    68,    69,
      91,    92,   162,   164,   103,   166,   104,   168,   105,   170,
      57,    63,   172,    93,    94,   174,    67,    95,    96,    97,
     176,    64,    41,    89,    90,   102,   179,   185,    41,    95,
     202,   203,   204,   100,    88,     5,    12,    13,    45,   125,
     197,   156,   156,   165,   167,   191,    99,    45,   152,   156,
     191,   156,   193,   191,    45,   156,   165,   167,   154,    98,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    56,   101,   120,   124,    88,   122,     6,    88,   123,
      88,   123,   100,   200,   155,    13,    45,   125,    12,    45,
     125,    12,    13,    45,    88,   183,   206,    88,   183,   206,
     100,   107,    88,   199,   201,   155,    88,    99,   195,   206,
     109,   191,   156,   158,   160,     8,   161,     9,    21,    10,
     164,   167,   169,   103,   171,   104,   173,   105,   175,   175,
      57,    63,   177,   177,    93,    94,   178,   178,   178,   178,
      67,    95,    96,    97,   178,   100,   200,    99,   156,   187,
     188,    45,    41,   185,   156,   156,   156,   203,    88,    88,
      99,    12,    13,    45,   125,    13,    45,   125,    12,    45,
     125,    89,   115,    12,    13,    45,    99,    99,    88,   190,
      88,   190,    21,   155,    88,   140,    88,    99,   150,    49,
      88,   192,   140,   121,   193,    88,    99,   100,    45,   125,
      13,    45,    45,   125,    12,    45,    13,    45,    12,    45,
     156,   165,    88,    88,    41,   203,   204,    88,   201,    88,
     156,   156,    88,    21,    16,   160,   161,   167,   169,   171,
     173,   175,   175,   177,   177,   178,   178,   178,   178,   100,
      99,   156,   189,    99,   107,    88,   186,   178,    88,   199,
     201,    88,   155,    13,    45,   125,    12,    45,   125,    89,
      99,    12,    13,    45,    45,   125,   115,    13,    45,    45,
     125,   115,    12,    45,   100,   200,    24,    99,    13,    45,
      12,    45,   115,   155,   155,   165,   167,    88,    88,   193,
      23,    70,   149,   153,    45,    88,   152,   155,    88,    99,
     167,   156,    88,   120,   155,    99,    45,    45,    45,    45,
      45,    45,   156,   165,   156,    41,   204,   203,    88,   194,
     206,   156,   158,   156,   156,   189,   156,   189,   188,    88,
      41,    88,   201,    45,   125,    99,    13,    45,    45,   125,
      99,    12,    45,   100,   200,   155,    13,    45,    12,    45,
      99,   115,    45,    24,    99,    45,   115,   115,    45,    24,
      99,    45,   115,   100,   156,   155,    45,   115,    45,   115,
      24,    99,    16,    18,   144,    16,   165,   167,    99,    99,
     156,    16,    23,   153,    99,    45,   152,   155,    88,   192,
     155,   156,   156,    88,    17,   205,   206,   207,   189,   188,
     156,    41,    99,    45,   155,    45,    99,    99,    45,   155,
      45,    99,    99,   100,    45,    99,    45,    99,   155,    24,
      99,   115,   156,   155,   115,    24,    99,    24,    99,   115,
     156,   155,   115,    24,    99,    99,   115,    24,    99,   115,
      24,    99,   156,   155,    99,   156,    16,    18,    99,   155,
     155,    49,    99,    99,    99,   155,    99,   156,   158,   156,
     155,    99,    99,   155,   155,    99,    99,   155,   155,    99,
      99,   155,    99,   155,   156,   155,    24,    99,    99,    24,
      99,   156,   155,   156,   155,    24,    99,    99,    24,    99,
     156,   155,   155,    24,    99,   156,   155,    24,    99,   156,
     155,    99,   155,    99,    99,   156,   155,    16,    45,   155,
     155,   155,   156,    99,   205,   155,   155,   155,   155,   155,
     155,   155,    99,   156,   155,   155,   156,   155,    99,    99,
     156,   155,   155,   156,   155,    99,   156,   155,    99,   156,
     155,    99,   155,   155,   155,    99,    99,   156,   155,    99,
      99,   155,   155,    99,    99,   155,    99,   155,    99,   155,
     155,   155,   155,   155,   155,   155,   155,   155
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
#line 106 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"file_input: program ENDMARKER\n";Streams::verbose().flush();;}
    break;

  case 3:
#line 109 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"program : import_stmt ';' temp2 \n";;}
    break;

  case 4:
#line 110 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"program : temp2 \n";;}
    break;

  case 5:
#line 113 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"temp2:  CLASS NAME ':' suite \n";;}
    break;

  case 6:
#line 114 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"temp2: CLASS NAME '(' ')' ':' suite \n";;}
    break;

  case 7:
#line 115 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"trmp2: CLASS NAME '(' arglist ')' ':' suite \n";;}
    break;

  case 8:
#line 116 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"temp2: access CLASS NAME ':' suite \n";;}
    break;

  case 9:
#line 117 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"temp2: access CLASS NAME '(' ')' ':' suite \n";;}
    break;

  case 10:
#line 118 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"access CLASS NAME '(' arglist ')' ':' suite \n";;}
    break;

  case 11:
#line 125 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcdef:	DEF  NAME parameters ARROW test ':' suite \n";;}
    break;

  case 12:
#line 126 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcdef:  DEF access NAME parameters ARROW test ':' suite \n";;}
    break;

  case 13:
#line 127 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcdef: DEF NAME parameters ':' suite\n";;}
    break;

  case 14:
#line 128 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcdef: DEF access NAME parameters ':' suite\n";;}
    break;

  case 15:
#line 129 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcdef: DEF STATIC NAME parameters ARROW test ':' suite\n";;}
    break;

  case 16:
#line 130 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcdef: DEF FINAL NAME parameters ARROW test ':' suite\n";;}
    break;

  case 17:
#line 131 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcdef: DEF STATIC NAME parameters ':' suite\n";;}
    break;

  case 18:
#line 132 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcdef: DEF FINAL NAME parameters ':' suite\n";;}
    break;

  case 19:
#line 133 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcdef: DEF STATIC FINAL NAME parameters ARROW test ':' suite\n";;}
    break;

  case 20:
#line 134 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcdef: DEF FINAL STATIC NAME parameters ARROW test ':' suite \n";;}
    break;

  case 21:
#line 135 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcdef: DEF STATIC FINAL NAME parameters ':' suite \n";;}
    break;

  case 22:
#line 136 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcdef: DEF FINAL STATIC NAME parameters ':' suite \n";;}
    break;

  case 23:
#line 137 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcdef: DEF FINAL access NAME parameters ARROW test ':' suite \n";;}
    break;

  case 24:
#line 138 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcdef: DEF STATIC access NAME parameters ARROW test ':' suite \n";;}
    break;

  case 25:
#line 139 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcdef: DEF STATIC access NAME parameters ':' suite \n";;}
    break;

  case 26:
#line 140 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcdef: DEF STATIC access NAME parameters ':' suite";;}
    break;

  case 27:
#line 141 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcdef: DEF STATIC FINAL access NAME parameters ARROW test ':' suite \n";;}
    break;

  case 28:
#line 142 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcdef: DEF FINAL STATIC access NAME parameters ARROW test ':' suite \n";;}
    break;

  case 29:
#line 143 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcdef: DEF STATIC FINAL access NAME parameters ':' suite \n";;}
    break;

  case 30:
#line 144 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcdef: DEF FINAL STATIC access NAME parameters ':' suite \n";;}
    break;

  case 31:
#line 145 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcdef: DEF access STATIC NAME parameters ARROW test ':' suite \n";;}
    break;

  case 32:
#line 146 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcdef: DEF access FINAL NAME parameters ARROW test ':' suite \n";;}
    break;

  case 33:
#line 147 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcdef: DEF access STATIC NAME parameters ':' suite \n";;}
    break;

  case 34:
#line 148 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcdef: DEF access FINAL NAME parameters ':' suite \n";;}
    break;

  case 35:
#line 149 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcdef: DEF access STATIC FINAL NAME parameters ARROW test ':' suite \n";;}
    break;

  case 36:
#line 150 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcdef: DEF access FINAL STATIC NAME parameters ARROW test ':' suite \n";;}
    break;

  case 37:
#line 151 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcdef: DEF access STATIC FINAL NAME parameters ':' suite \n";;}
    break;

  case 38:
#line 152 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcdef: DEF access FINAL STATIC NAME parameters ':' suite \n";;}
    break;

  case 39:
#line 153 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcdef: DEF STATIC access FINAL NAME parameters ARROW test ':' suite \n";;}
    break;

  case 40:
#line 154 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcdef: DEF FINAL access STATIC NAME parameters ARROW test ':' suite \n";;}
    break;

  case 41:
#line 155 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcdef: DEF STATIC access FINAL NAME parameters ':' suite \n";;}
    break;

  case 42:
#line 156 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcdef: DEF FINAL access STATIC NAME parameters ':' suite \n";;}
    break;

  case 43:
#line 159 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"parameters:'(' arglist ')'\n";;}
    break;

  case 44:
#line 160 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"parameters:'(' ')'\n";;}
    break;

  case 45:
#line 163 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"stmt:	simple_stmt \n";;}
    break;

  case 46:
#line 164 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"stmt: compound_stmt\n";;}
    break;

  case 47:
#line 166 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"simple_stmt: small_stmt ';' \n";;}
    break;

  case 48:
#line 168 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: expr_stmt \n";;}
    break;

  case 49:
#line 169 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: del_stmt \n";;}
    break;

  case 50:
#line 170 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: pass_stmt \n";;}
    break;

  case 51:
#line 171 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: flow_stmt \n";;}
    break;

  case 52:
#line 172 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: import_stmt \n";;}
    break;

  case 53:
#line 173 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: global_stmt \n";;}
    break;

  case 54:
#line 174 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: nonlocal_stmt \n";;}
    break;

  case 55:
#line 175 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: print_stmt \n";;}
    break;

  case 56:
#line 178 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"expr_stmt:	testlist_star_expr augassign testlist \n";;}
    break;

  case 57:
#line 179 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"expr_stmt: testlist_star_expr \n";;}
    break;

  case 58:
#line 180 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"expr_stmt: testlist_star_expr right_testlist \n";;}
    break;

  case 59:
#line 183 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"right_testlist: '=' testlist_star_expr right_testlist \n";;}
    break;

  case 60:
#line 184 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"right_testlist: '=' testlist_star_expr \n";;}
    break;

  case 61:
#line 187 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: comma_test_star_seqJ \n";;}
    break;

  case 62:
#line 188 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: comma_test_star_seqJ ',' \n";;}
    break;

  case 63:
#line 189 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"',' \n";;}
    break;

  case 64:
#line 190 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: test comma_test_star_seqJ \n";;}
    break;

  case 65:
#line 191 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: test \n";;}
    break;

  case 66:
#line 192 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: star_expr comma_test_star_seqJ ',' \n";;}
    break;

  case 67:
#line 193 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: star_expr ',' \n";;}
    break;

  case 68:
#line 196 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star : ',' test \n";;}
    break;

  case 69:
#line 197 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star : ',' star_expr \n";;}
    break;

  case 70:
#line 200 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seqJ : comma_test_star_seqJ comma_test_star \n";;}
    break;

  case 71:
#line 201 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seqJ : comma_test_star \n";;}
    break;

  case 72:
#line 203 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	PLUS_EQUAL \n";;}
    break;

  case 73:
#line 204 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MINUS_EQUAL \n";;}
    break;

  case 74:
#line 205 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	STAR_EQUAL \n";;}
    break;

  case 75:
#line 206 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	DIV_EQUAL \n";;}
    break;

  case 76:
#line 207 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MOD_EQUAL \n";;}
    break;

  case 77:
#line 208 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	AND_EQUAL \n";;}
    break;

  case 78:
#line 209 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	OR_EQUAL \n";;}
    break;

  case 79:
#line 210 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	SHAPOO_EQUAL \n";;}
    break;

  case 80:
#line 211 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	LESS_THAN_2_EQUAL \n";;}
    break;

  case 81:
#line 212 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MORE_THAN_2_EQUAL \n";;}
    break;

  case 82:
#line 213 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	STAR_2_EQUAL \n";;}
    break;

  case 83:
#line 214 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	DIV_2_EQUAL \n";;}
    break;

  case 84:
#line 217 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose()<<"access_modef: PRIVATE\n";acc_mod="private";pp=true;;}
    break;

  case 85:
#line 218 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose()<<"access_modef:	PUBLIC\n";acc_mod="public";pp=false;}
    break;

  case 86:
#line 219 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose()<<"access_modef:	PROTECTED\n";acc_mod="protected";;}
    break;

  case 87:
#line 221 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"print_stmt: PRINT exprlist \n";;}
    break;

  case 88:
#line 222 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"del_stmt:   DEL exprlist \n";;}
    break;

  case 89:
#line 225 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"pass_stmt:	PASS \n";;}
    break;

  case 90:
#line 228 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"flow_stmt:	break_stmt \n";;}
    break;

  case 91:
#line 229 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"flow_stmt: continue_stmt\n";;}
    break;

  case 92:
#line 230 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"flow_stmt: return_stmt\n";;}
    break;

  case 93:
#line 233 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"break_stmt: BREAK \n";;}
    break;

  case 94:
#line 236 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"continue_stmt:	CONTINUE \n";;}
    break;

  case 95:
#line 239 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"return_stmt:	RETURN testlist \n";;}
    break;

  case 96:
#line 240 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"return_stmt:	RETURN \n";;}
    break;

  case 97:
#line 244 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"import_stmt: import_name \n";;}
    break;

  case 98:
#line 247 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"import_name: IMPORT dotted_as_names \n";;}
    break;

  case 99:
#line 250 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_dotted_as_name_seq: ',' dotted_as_name \n";;}
    break;

  case 100:
#line 251 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_dotted_as_name_seq: comma_dotted_as_name_seq ',' dotted_as_name \n";;}
    break;

  case 101:
#line 253 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_dotted_as_name_seq: dotted_as_names: dotted_as_name \n";;}
    break;

  case 102:
#line 254 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_dotted_as_name_seq: dotted_as_name comma_dotted_as_name_seq \n";;}
    break;

  case 103:
#line 258 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dotted_as_name: dotted_name \n";;}
    break;

  case 104:
#line 259 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dotted_as_name: dotted_name AS NAME\n";;}
    break;

  case 105:
#line 262 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dotted_name: NAME \n";;}
    break;

  case 106:
#line 263 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dotted_name: NAME dotted_name_seq \n";;}
    break;

  case 107:
#line 266 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dotted_name_seq: '.' NAME \n";;}
    break;

  case 108:
#line 267 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dotted_name_seq: dotted_name_seq '.' NAME \n";;}
    break;

  case 109:
#line 270 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_name_seq :	',' NAME \n";;}
    break;

  case 110:
#line 271 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_name_seq :	comma_name_seq ',' NAME \n";;}
    break;

  case 111:
#line 274 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"global_stmt: GLOBAL NAME \n";;}
    break;

  case 112:
#line 275 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"global_stmt: GLOBAL NAME comma_name_seq\n";;}
    break;

  case 113:
#line 278 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"nonlocal_stmt:	NONLOCAL NAME \n";;}
    break;

  case 114:
#line 279 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"nonlocal_stmt: NONLOCAL NAME comma_name_seq \n";;}
    break;

  case 115:
#line 282 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt:  if_stmt \n";;}
    break;

  case 116:
#line 283 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: while_stmt\n";;}
    break;

  case 117:
#line 284 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: for_stmt\n";;}
    break;

  case 118:
#line 285 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: try_stmt\n";;}
    break;

  case 119:
#line 286 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: with_stmt\n";;}
    break;

  case 120:
#line 287 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: funcdef\n";;}
    break;

  case 121:
#line 288 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: DEF classdef\n";;}
    break;

  case 122:
#line 291 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"elif_seq :  ELIF test ':' suite \n";;}
    break;

  case 123:
#line 292 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"elif_seq : elif_seq ELIF test ':' suite \n";;}
    break;

  case 124:
#line 295 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"if_stmt:	IF test ':' suite \n";;}
    break;

  case 125:
#line 296 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"if_stmt:	IF test ':' suite elif_seq \n";;}
    break;

  case 126:
#line 297 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"if_stmt:	IF test ':' suite ELSE ':' suite \n";;}
    break;

  case 127:
#line 298 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"if_stmt:	IF test ':' suite elif_seq ELSE ':' suite \n";;}
    break;

  case 128:
#line 301 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"while_stmt: WHILE test ':' suite \n";;}
    break;

  case 129:
#line 302 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"while_stmt:  WHILE test ':' suite ELSE ':' suite \n";;}
    break;

  case 130:
#line 305 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"for_stmt:   FOR exprlist IN testlist ':' suite \n";;}
    break;

  case 131:
#line 306 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"for_stmt:  FOR exprlist IN testlist ':' suite ELSE ':' suite\n";;}
    break;

  case 132:
#line 309 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<" try_stmt:   TRY ':' suite try_except_cla_seq\n";;}
    break;

  case 133:
#line 310 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<" try_stmt: TRY ':' suite try_except_cla_seq ELSE ':' suite\n";;}
    break;

  case 134:
#line 311 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"try_stmt:  TRY ':' suite try_except_cla_seq FINALLY ':' suite\n";;}
    break;

  case 135:
#line 312 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"try_stmt:  TRY ':' suite FINALLY ':' suite\n";;}
    break;

  case 136:
#line 315 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"try_except_cla_seq: except_clause ':' suite \n";;}
    break;

  case 137:
#line 316 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"try_except_cla_seq: try_except_cla_seq except_clause ':' suite\n";;}
    break;

  case 138:
#line 319 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"with_seq:	',' with_item \n";;}
    break;

  case 139:
#line 320 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"with_seq: with_seq ',' with_item\n";;}
    break;

  case 140:
#line 323 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"with_stmt:  WITH with_item ':' suite \n";;}
    break;

  case 141:
#line 324 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"with_stmt: WITH with_item with_seq ':' suite\n";;}
    break;

  case 142:
#line 327 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<" with_item:  test\n";;}
    break;

  case 143:
#line 328 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"with_item: test AS expr\n";;}
    break;

  case 144:
#line 331 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"except_clause:  EXCEPT \n";;}
    break;

  case 145:
#line 332 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"except_clause:  EXCEPT test\n";;}
    break;

  case 146:
#line 333 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"except_clause:  EXCEPT test AS NAME\n";;}
    break;

  case 147:
#line 336 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams:: verbose() <<"list_stmt : stmt\n";;}
    break;

  case 148:
#line 337 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams:: verbose() <<"list_stmt : stmt list_stmt\n";;}
    break;

  case 149:
#line 340 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"suite:	list_stmt END\n";;}
    break;

  case 150:
#line 341 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"suite:	END\n";;}
    break;

  case 151:
#line 344 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"test:	or_test\n";;}
    break;

  case 152:
#line 345 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_test IF or_test ELSE test\n";;}
    break;

  case 153:
#line 348 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_seq:	OR and_test \n";;}
    break;

  case 154:
#line 349 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_seq: or_seq OR and_test \n";;}
    break;

  case 155:
#line 352 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_test:	and_test\n";;}
    break;

  case 156:
#line 353 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_test:	and_test or_seq\n";;}
    break;

  case 157:
#line 356 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_seq: AND not_test \n";;}
    break;

  case 158:
#line 357 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_seq: and_seq AND not_test \n";;}
    break;

  case 159:
#line 360 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_test:	not_test\n";;}
    break;

  case 160:
#line 361 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_test: not_test and_seq \n";;}
    break;

  case 161:
#line 364 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"not_test:	NOT not_test\n";;}
    break;

  case 162:
#line 365 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"not_test:	comparison\n";;}
    break;

  case 163:
#line 368 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op_seq: comp_op expr \n";;}
    break;

  case 164:
#line 369 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op_seq: comp_op_seq comp_op expr \n";;}
    break;

  case 165:
#line 372 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comparison: expr\n";}
    break;

  case 166:
#line 373 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comparison: expr comp_op_seq\n";}
    break;

  case 167:
#line 376 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: '<' \n";;}
    break;

  case 168:
#line 377 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: '>' \n";;}
    break;

  case 169:
#line 378 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: EQUAL \n";;}
    break;

  case 170:
#line 379 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: MORE_OR_EQUAL \n";;}
    break;

  case 171:
#line 380 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: LESS_OR_EQUAL \n";;}
    break;

  case 172:
#line 381 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: MORE_LESS \n";;}
    break;

  case 173:
#line 382 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: NOT_EQUAL \n";;}
    break;

  case 174:
#line 383 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IN \n";;}
    break;

  case 175:
#line 384 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: NOT IN \n";;}
    break;

  case 176:
#line 385 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IS \n";;}
    break;

  case 177:
#line 386 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IS NOT \n";;}
    break;

  case 178:
#line 389 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"star_expr: '*' expr \n";;}
    break;

  case 179:
#line 392 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_xor_expr_seq: '|' xor_expr \n";;}
    break;

  case 180:
#line 393 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_xor_expr_seq: or_xor_expr_seq '|' xor_expr\n";;}
    break;

  case 181:
#line 395 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"expr: xor_expr\n";}
    break;

  case 182:
#line 396 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"expr: xor_expr or_xor_expr_seq\n";;}
    break;

  case 183:
#line 399 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"sha_and_expr_seq: '^' and_expr \n";;}
    break;

  case 184:
#line 400 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"sha_and_expr_seq: sha_and_expr_seq '^' and_expr\n";;}
    break;

  case 185:
#line 403 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"xor_expr: and_expr\n";}
    break;

  case 186:
#line 404 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"xor_expr: and_expr sha_and_expr_seq\n";;}
    break;

  case 187:
#line 407 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_shift_expr_seq: '&' shift_expr \n";;}
    break;

  case 188:
#line 408 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_shift_expr_seq: and_shift_expr_seq '&' shift_expr\n";;}
    break;

  case 189:
#line 411 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_expr: shift_expr\n";}
    break;

  case 190:
#line 412 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_expr: shift_expr and_shift_expr_seq\n";;}
    break;

  case 191:
#line 415 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	LESS_THAN_2 arith_expr \n";;}
    break;

  case 192:
#line 416 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	MORE_THAN_2 arith_expr \n";;}
    break;

  case 193:
#line 417 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	arith_seq LESS_THAN_2 arith_expr \n";;}
    break;

  case 194:
#line 418 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	arith_seq MORE_THAN_2 arith_expr \n";;}
    break;

  case 195:
#line 421 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"shift_expr: arith_expr\n";}
    break;

  case 196:
#line 422 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"shift_expr: arith_expr arith_seq\n";}
    break;

  case 197:
#line 425 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : '+' term \n";;}
    break;

  case 198:
#line 426 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : '-' term \n";;}
    break;

  case 199:
#line 427 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : term_seq '+' term \n";;}
    break;

  case 200:
#line 428 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : term_seq '-' term \n";;}
    break;

  case 201:
#line 431 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arith_expr: term\n";}
    break;

  case 202:
#line 432 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arith_expr: term term_seq\n";}
    break;

  case 203:
#line 435 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '*' factor \n";;}
    break;

  case 204:
#line 436 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '/' factor \n";;}
    break;

  case 205:
#line 437 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '%' factor \n";;}
    break;

  case 206:
#line 438 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: DIV_2 factor \n";;}
    break;

  case 207:
#line 439 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '*' factor \n";;}
    break;

  case 208:
#line 440 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '/' factor \n";;}
    break;

  case 209:
#line 441 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '%' factor \n";;}
    break;

  case 210:
#line 442 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq DIV_2 factor \n";;}
    break;

  case 211:
#line 445 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"term: 	factor\n";}
    break;

  case 212:
#line 446 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"term: 	factor factor_seq\n";}
    break;

  case 213:
#line 449 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor: '+' factor \n";;}
    break;

  case 214:
#line 450 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor: '-' factor \n";;}
    break;

  case 215:
#line 451 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor: '~' factor \n";;}
    break;

  case 216:
#line 452 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor: power\n";}
    break;

  case 217:
#line 455 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"trailer_seq: trailer \n";;}
    break;

  case 218:
#line 456 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"trailer_seq: trailer_seq trailer \n";;}
    break;

  case 219:
#line 459 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"power:	atom\n";}
    break;

  case 220:
#line 460 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"power: atom trailer_seq \n";;}
    break;

  case 221:
#line 461 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"power: atom trailer_seq STAR_2 factor \n";;}
    break;

  case 222:
#line 462 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"power: atom STAR_2 factor \n";;}
    break;

  case 223:
#line 465 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"str_seq:	STRING \n";;}
    break;

  case 224:
#line 466 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"str_seq:	str_seq STRING \n";;}
    break;

  case 225:
#line 469 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'(' ')' \n";;}
    break;

  case 226:
#line 470 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'(' testlist_comp ')' \n";;}
    break;

  case 227:
#line 471 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'[' ']' \n";;}
    break;

  case 228:
#line 472 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' '}' \n";;}
    break;

  case 229:
#line 473 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' '}' \n";;}
    break;

  case 230:
#line 474 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' dictorsetmaker '}' \n";;}
    break;

  case 231:
#line 475 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: NAME\n";}
    break;

  case 232:
#line 476 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF NAME\n";}
    break;

  case 233:
#line 477 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access NAME\n";}
    break;

  case 234:
#line 478 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC NAME\n";}
    break;

  case 235:
#line 479 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL NAME\n";}
    break;

  case 236:
#line 480 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC FINAL NAME\n";}
    break;

  case 237:
#line 481 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL STATIC NAME\n";}
    break;

  case 238:
#line 482 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC access NAME\n";}
    break;

  case 239:
#line 483 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL access NAME\n";}
    break;

  case 240:
#line 484 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC FINAL access NAME\n";}
    break;

  case 241:
#line 485 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL STATIC access NAME\n";}
    break;

  case 242:
#line 486 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access STATIC NAME\n";}
    break;

  case 243:
#line 487 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access FINAL NAME\n";}
    break;

  case 244:
#line 488 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access STATIC FINAL NAME\n";}
    break;

  case 245:
#line 489 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access FINAL STATIC NAME\n";}
    break;

  case 246:
#line 490 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC access FINAL NAME\n";}
    break;

  case 247:
#line 491 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL access STATIC NAME\n";}
    break;

  case 248:
#line 492 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_INT\n";}
    break;

  case 249:
#line 493 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_FLOAT\n";}
    break;

  case 250:
#line 494 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_FLOAT\n";}
    break;

  case 251:
#line 495 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: CHAR_VALUE\n";}
    break;

  case 252:
#line 496 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: str_seq\n";}
    break;

  case 253:
#line 497 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DOT_3\n";}
    break;

  case 254:
#line 498 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: NONE\n";}
    break;

  case 255:
#line 499 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: TRUE\n";}
    break;

  case 256:
#line 500 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: FALSE\n";}
    break;

  case 257:
#line 503 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: ',' test\n";}
    break;

  case 258:
#line 504 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: ',' star_expr\n";}
    break;

  case 259:
#line 505 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: comma_test_star_seq ',' test\n";}
    break;

  case 260:
#line 506 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: comma_test_star_seq ',' star_expr\n";}
    break;

  case 261:
#line 509 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test comp_for\n";}
    break;

  case 262:
#line 510 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test\n";}
    break;

  case 263:
#line 511 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test   comma_test_star_seq\n";}
    break;

  case 264:
#line 512 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 265:
#line 513 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 266:
#line 514 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 267:
#line 515 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 268:
#line 516 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 269:
#line 517 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 270:
#line 518 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 271:
#line 521 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"trailer:	'('  ')'\n";}
    break;

  case 272:
#line 522 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"trailer:	'(' arglist ')'\n";}
    break;

  case 273:
#line 523 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"trailer:	'[' subscriptlist ']'\n";}
    break;

  case 274:
#line 524 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"trailer:	'.' NAME\n";}
    break;

  case 275:
#line 527 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_subscript_seq: ',' subscript\n";}
    break;

  case 276:
#line 528 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_subscript_seq: comma_subscript_seq ',' subscript\n";}
    break;

  case 277:
#line 531 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript\n";}
    break;

  case 278:
#line 532 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript comma_subscript_seq\n";}
    break;

  case 279:
#line 533 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript  ','\n";}
    break;

  case 280:
#line 534 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript comma_subscript_seq ','\n";}
    break;

  case 281:
#line 537 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test\n";}
    break;

  case 282:
#line 538 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':'\n";}
    break;

  case 283:
#line 539 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript: test ':'\n";}
    break;

  case 284:
#line 540 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' test\n";}
    break;

  case 285:
#line 541 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' sliceop\n";}
    break;

  case 286:
#line 542 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' test sliceop\n";}
    break;

  case 287:
#line 543 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' test\n";}
    break;

  case 288:
#line 544 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' sliceop\n";}
    break;

  case 289:
#line 545 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' test sliceop\n";}
    break;

  case 290:
#line 548 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"sliceop: ':'\n";}
    break;

  case 291:
#line 549 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"sliceop: ':' test\n";}
    break;

  case 292:
#line 552 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	',' expr \n";;}
    break;

  case 293:
#line 553 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	',' star_expr \n";;}
    break;

  case 294:
#line 554 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	comma_expr_star_seq ',' expr \n";;}
    break;

  case 295:
#line 555 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	comma_expr_star_seq ',' star_expr \n";;}
    break;

  case 296:
#line 558 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr \n";;}
    break;

  case 297:
#line 559 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr comma_expr_star_seq \n";;}
    break;

  case 298:
#line 560 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr \n";;}
    break;

  case 299:
#line 561 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr comma_expr_star_seq \n";;}
    break;

  case 300:
#line 562 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr ',' \n";;}
    break;

  case 301:
#line 563 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr comma_expr_star_seq ',' \n";;}
    break;

  case 302:
#line 564 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr ',' \n";;}
    break;

  case 303:
#line 565 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr  comma_expr_star_seq ',' \n";;}
    break;

  case 304:
#line 568 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test: ',' test \n";;}
    break;

  case 305:
#line 569 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"',' test comma_test \n";;}
    break;

  case 306:
#line 572 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	test \n";;}
    break;

  case 307:
#line 573 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	test comma_test \n";;}
    break;

  case 308:
#line 574 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	 test ','\n";;}
    break;

  case 309:
#line 575 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	 test comma_test ','\n";;}
    break;

  case 310:
#line 578 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_colon_test_seq:  ',' test ':' test \n";;}
    break;

  case 311:
#line 579 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_colon_test_seq: comma_test_colon_test_seq ',' test ':' test\n";;}
    break;

  case 312:
#line 581 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_seq: ',' test \n";;}
    break;

  case 313:
#line 582 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_seq: comma_test_seq ',' test \n";;}
    break;

  case 314:
#line 585 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comp_for \n";;}
    break;

  case 315:
#line 586 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test \n";;}
    break;

  case 316:
#line 587 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test ',' \n";;}
    break;

  case 317:
#line 588 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comma_test_colon_test_seq \n";;}
    break;

  case 318:
#line 589 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comma_test_colon_test_seq ','\n";;}
    break;

  case 319:
#line 590 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test comp_for\n";;}
    break;

  case 320:
#line 591 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test\n";;}
    break;

  case 321:
#line 592 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ','\n";;}
    break;

  case 322:
#line 593 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ','\n";;}
    break;

  case 323:
#line 594 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test comma_test_seq ','\n";;}
    break;

  case 324:
#line 597 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classdef: CLASS NAME ':' suite\n";;}
    break;

  case 325:
#line 598 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classdef: CLASS access NAME ':' suite\n";;}
    break;

  case 326:
#line 599 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classdef: CLASS STATIC NAME ':' suite\n";;}
    break;

  case 327:
#line 600 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classdef: CLASS FINAL NAME ':' suite\n";;}
    break;

  case 328:
#line 601 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classdef: CLASS STATIC FINAL NAME ':' suite\n";;}
    break;

  case 329:
#line 602 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classdef: CLASS FINAL STATIC NAME ':' suite\n";;}
    break;

  case 330:
#line 603 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classdef: CLASS FINAL access NAME ':' suite\n";;}
    break;

  case 331:
#line 604 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classdef: CLASS STATIC access NAME ':' suite\n";;}
    break;

  case 332:
#line 605 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classdef: CLASS STATIC FINAL access NAME ':' suite\n";;}
    break;

  case 333:
#line 606 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classdef: CLASS FINAL STATIC access NAME ':' suite\n";;}
    break;

  case 334:
#line 607 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classdef: CLASS access STATIC NAME ':' suite\n";;}
    break;

  case 335:
#line 608 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classdef: CLASS access FINAL NAME ':' suite\n";;}
    break;

  case 336:
#line 609 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classdef: CLASS access STATIC FINAL NAME ':' suite\n";;}
    break;

  case 337:
#line 610 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classdef: CLASS access FINAL STATIC NAME ':' suite\n";;}
    break;

  case 338:
#line 611 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classdef: CLASS STATIC access FINAL NAME ':' suite\n";;}
    break;

  case 339:
#line 612 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classdef: CLASS FINAL access STATIC NAME ':' suite\n";;}
    break;

  case 340:
#line 613 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classdef: CLASS NAME '(' ')' ':' suite\n";;}
    break;

  case 341:
#line 614 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classdef: CLASS NAME '(' arglist ')' ':' suite\n";;}
    break;

  case 342:
#line 617 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arg_comma_seq : argument ','\n";;}
    break;

  case 343:
#line 618 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arg_comma_seq : argument ',' arg_comma_seq\n";;}
    break;

  case 344:
#line 621 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_arg_seq:	',' argument\n";;}
    break;

  case 345:
#line 622 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_arg_seq:	comma_arg_seq ',' argument\n";;}
    break;

  case 346:
#line 625 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: argument\n";;}
    break;

  case 348:
#line 627 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: argument ','\n";;}
    break;

  case 349:
#line 628 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: '*' test\n";;}
    break;

  case 350:
#line 629 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: '*' test ',' STAR_2 test\n";;}
    break;

  case 351:
#line 630 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";;}
    break;

  case 352:
#line 631 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";;}
    break;

  case 353:
#line 632 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";;}
    break;

  case 354:
#line 633 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: '*' test comma_arg_seq ',' STAR_2 test\n";;}
    break;

  case 355:
#line 634 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: STAR_2 test\n";;}
    break;

  case 356:
#line 635 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq argument\n";;}
    break;

  case 357:
#line 636 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq default_arg\n";;}
    break;

  case 358:
#line 637 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq default_arg_comma_seq default_arg\n";;}
    break;

  case 359:
#line 638 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq argument ','\n";;}
    break;

  case 360:
#line 639 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq '*' test\n";;}
    break;

  case 361:
#line 640 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq '*' test ',' STAR_2 test\n";;}
    break;

  case 362:
#line 641 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq\n";;}
    break;

  case 363:
#line 642 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_default_arg_seq\n";;}
    break;

  case 364:
#line 643 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq comma_default_arg_seq\n";;}
    break;

  case 365:
#line 644 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq ',' STAR_2 test\n";;}
    break;

  case 366:
#line 645 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq STAR_2 test\n";;}
    break;

  case 367:
#line 648 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_default_arg_seq: ',' default_arg\n";;}
    break;

  case 368:
#line 649 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_default_arg_seq: comma_default_arg_seq ',' default_arg\n";;}
    break;

  case 369:
#line 652 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"default_arg_comma_seq: default_arg ','\n";;}
    break;

  case 370:
#line 653 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"default_arg_comma_seq: default_arg_comma_seq default_arg ','\n";;}
    break;

  case 371:
#line 655 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"default_arg: test '=' test\n";;}
    break;

  case 372:
#line 657 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"argument: 	test\n";;}
    break;

  case 373:
#line 658 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"argument: 	test comp_for\n";;}
    break;

  case 374:
#line 662 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_iter:  comp_for\n";;}
    break;

  case 375:
#line 663 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_iter:  comp_if\n";;}
    break;

  case 376:
#line 666 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_for: 	FOR exprlist IN or_test\n";;}
    break;

  case 377:
#line 667 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_for: FOR exprlist IN or_test comp_iter\n";;}
    break;

  case 378:
#line 670 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_if: IF or_test\n";;}
    break;

  case 379:
#line 671 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_if: IF or_test comp_iter\n";;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 4135 "yacc.cpp"

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


#line 674 "C:\\Users\\Molham\\Documents\\Visual Studio 2012\\Projects\\compilerProject\\yaccFinal.y"

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
