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
     NONLOCAL = 280,
     PLUS_EQUAL = 281,
     MINUS_EQUAL = 282,
     DIV_EQUAL = 283,
     MOD_EQUAL = 284,
     AND_EQUAL = 285,
     OR_EQUAL = 286,
     SHAPOO_EQUAL = 287,
     LESS_THAN_2_EQUAL = 288,
     MORE_THAN_2_EQUAL = 289,
     STAR_2_EQUAL = 290,
     DIV_2_EQUAL = 291,
     MORE_LESS = 292,
     FALSE = 293,
     TRUE = 294,
     STAR_2 = 295,
     NUMBER_INT = 296,
     NUMBER_LONG = 297,
     NUMBER_FLOAT = 298,
     NAME = 299,
     DOT_3 = 300,
     EXPECT = 301,
     WITH = 302,
     AS = 303,
     ASSERT = 304,
     EQUAL = 305,
     DEL = 306,
     RETURN = 307,
     PRINT = 308,
     GLOBAL = 309,
     STAR_EQUAL = 310,
     LESS_THAN_2 = 311,
     RAISE = 312,
     PRIVATE = 313,
     PUBLIC = 314,
     PROTECTED = 315,
     YIELD = 316,
     MORE_THAN_2 = 317,
     STRING = 318,
     NONE = 319,
     IS = 320,
     DIV_2 = 321,
     LESS_OR_EQUAL = 322,
     MORE_OR_EQUAL = 323,
     EXCEPT = 324,
     PASS = 325,
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
#define NONLOCAL 280
#define PLUS_EQUAL 281
#define MINUS_EQUAL 282
#define DIV_EQUAL 283
#define MOD_EQUAL 284
#define AND_EQUAL 285
#define OR_EQUAL 286
#define SHAPOO_EQUAL 287
#define LESS_THAN_2_EQUAL 288
#define MORE_THAN_2_EQUAL 289
#define STAR_2_EQUAL 290
#define DIV_2_EQUAL 291
#define MORE_LESS 292
#define FALSE 293
#define TRUE 294
#define STAR_2 295
#define NUMBER_INT 296
#define NUMBER_LONG 297
#define NUMBER_FLOAT 298
#define NAME 299
#define DOT_3 300
#define EXPECT 301
#define WITH 302
#define AS 303
#define ASSERT 304
#define EQUAL 305
#define DEL 306
#define RETURN 307
#define PRINT 308
#define GLOBAL 309
#define STAR_EQUAL 310
#define LESS_THAN_2 311
#define RAISE 312
#define PRIVATE 313
#define PUBLIC 314
#define PROTECTED 315
#define YIELD 316
#define MORE_THAN_2 317
#define STRING 318
#define NONE 319
#define IS 320
#define DIV_2 321
#define LESS_OR_EQUAL 322
#define MORE_OR_EQUAL 323
#define EXCEPT 324
#define PASS 325
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
#line 3 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"

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
	bool pro= false;
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
#line 69 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
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
#line 339 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 351 "yacc.cpp"

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
#define YYFINAL  27
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1365

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  110
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  100
/* YYNRULES -- Number of rules. */
#define YYNRULES  407
/* YYNRULES -- Number of states. */
#define YYNSTATES  764

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
       0,     0,     3,     6,    10,    12,    15,    17,    20,    27,
      35,    40,    46,    54,    62,    68,    74,    83,    92,    99,
     106,   115,   124,   131,   138,   148,   158,   166,   174,   183,
     192,   199,   206,   216,   226,   234,   242,   252,   262,   270,
     278,   282,   285,   287,   289,   292,   294,   296,   298,   300,
     302,   304,   306,   308,   312,   314,   317,   321,   324,   326,
     329,   331,   334,   336,   340,   343,   346,   349,   352,   354,
     356,   358,   360,   362,   364,   366,   368,   370,   372,   374,
     376,   378,   380,   382,   384,   387,   390,   392,   394,   396,
     398,   400,   402,   405,   407,   409,   412,   415,   419,   421,
     424,   426,   430,   432,   435,   438,   442,   445,   449,   452,
     456,   459,   463,   465,   467,   469,   471,   473,   475,   478,
     483,   489,   494,   500,   508,   517,   522,   530,   537,   547,
     552,   560,   568,   575,   579,   584,   587,   591,   596,   602,
     604,   608,   610,   613,   618,   620,   623,   626,   628,   630,
     636,   639,   643,   645,   648,   651,   655,   657,   660,   663,
     665,   668,   672,   674,   677,   679,   681,   683,   685,   687,
     689,   691,   693,   696,   698,   701,   704,   707,   711,   713,
     716,   719,   723,   725,   728,   731,   735,   737,   740,   743,
     746,   750,   754,   756,   759,   762,   765,   769,   773,   775,
     778,   781,   784,   787,   790,   794,   798,   802,   806,   808,
     811,   814,   817,   820,   822,   824,   827,   829,   832,   837,
     841,   843,   846,   849,   853,   856,   859,   863,   867,   869,
     872,   876,   880,   884,   889,   894,   899,   904,   910,   916,
     921,   926,   932,   938,   944,   950,   952,   954,   956,   958,
     960,   962,   964,   966,   968,   971,   974,   978,   982,   985,
     987,   990,   993,   997,  1000,  1002,  1005,  1008,  1012,  1015,
    1019,  1023,  1026,  1029,  1033,  1035,  1038,  1041,  1045,  1047,
    1049,  1052,  1056,  1060,  1065,  1068,  1071,  1075,  1077,  1080,
    1083,  1086,  1090,  1094,  1096,  1099,  1101,  1104,  1107,  1111,
    1114,  1118,  1121,  1125,  1127,  1130,  1133,  1137,  1142,  1148,
    1151,  1155,  1160,  1164,  1169,  1174,  1180,  1183,  1185,  1188,
    1191,  1195,  1198,  1202,  1207,  1212,  1217,  1223,  1229,  1235,
    1241,  1248,  1255,  1261,  1267,  1274,  1281,  1288,  1295,  1301,
    1308,  1315,  1322,  1330,  1338,  1346,  1354,  1363,  1372,  1380,
    1388,  1397,  1406,  1415,  1424,  1431,  1439,  1447,  1455,  1464,
    1473,  1482,  1491,  1501,  1511,  1520,  1529,  1539,  1549,  1559,
    1569,  1572,  1576,  1579,  1583,  1585,  1587,  1590,  1593,  1599,
    1603,  1607,  1612,  1619,  1622,  1625,  1628,  1632,  1636,  1640,
    1647,  1652,  1657,  1663,  1671,  1675,  1678,  1682,  1685,  1689,
    1693,  1695,  1698,  1700,  1702,  1707,  1713,  1716
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     111,     0,    -1,   112,     3,    -1,   134,    98,   113,    -1,
     113,    -1,   198,   113,    -1,   198,    -1,   115,   156,    -1,
      15,    44,   116,    24,   157,    99,    -1,    15,   126,    44,
     116,    24,   157,    99,    -1,    15,    44,   116,    99,    -1,
      15,   126,    44,   116,    99,    -1,    15,    13,    44,   116,
      24,   157,    99,    -1,    15,    12,    44,   116,    24,   157,
      99,    -1,    15,    13,    44,   116,    99,    -1,    15,    12,
      44,   116,    99,    -1,    15,    13,    12,    44,   116,    24,
     157,    99,    -1,    15,    12,    13,    44,   116,    24,   157,
      99,    -1,    15,    13,    12,    44,   116,    99,    -1,    15,
      12,    13,    44,   116,    99,    -1,    15,    12,   126,    44,
     116,    24,   157,    99,    -1,    15,    13,   126,    44,   116,
      24,   157,    99,    -1,    15,    13,   126,    44,   116,    99,
      -1,    15,    12,   126,    44,   116,    99,    -1,    15,    13,
      12,   126,    44,   116,    24,   157,    99,    -1,    15,    12,
      13,   126,    44,   116,    24,   157,    99,    -1,    15,    13,
      12,   126,    44,   116,    99,    -1,    15,    12,    13,   126,
      44,   116,    99,    -1,    15,   126,    13,    44,   116,    24,
     157,    99,    -1,    15,   126,    12,    44,   116,    24,   157,
      99,    -1,    15,   126,    13,    44,   116,    99,    -1,    15,
     126,    12,    44,   116,    99,    -1,    15,   126,    13,    12,
      44,   116,    24,   157,    99,    -1,    15,   126,    12,    13,
      44,   116,    24,   157,    99,    -1,    15,   126,    13,    12,
      44,   116,    99,    -1,    15,   126,    12,    13,    44,   116,
      99,    -1,    15,    13,   126,    12,    44,   116,    24,   157,
      99,    -1,    15,    12,   126,    13,    44,   116,    24,   157,
      99,    -1,    15,    13,   126,    12,    44,   116,    99,    -1,
      15,    12,   126,    13,    44,   116,    99,    -1,    89,   202,
     100,    -1,    89,   100,    -1,   118,    -1,   144,    -1,   119,
      98,    -1,   120,    -1,   128,    -1,   129,    -1,   130,    -1,
     134,    -1,   142,    -1,   143,    -1,   127,    -1,   122,   125,
     194,    -1,   122,    -1,   122,   121,    -1,   101,   122,   121,
      -1,   101,   122,    -1,   124,    -1,   124,    88,    -1,    88,
      -1,   157,   124,    -1,   157,    -1,   166,   124,    88,    -1,
     166,    88,    -1,    88,   157,    -1,    88,   166,    -1,   124,
     123,    -1,   123,    -1,    26,    -1,    27,    -1,    55,    -1,
      28,    -1,    29,    -1,    30,    -1,    31,    -1,    32,    -1,
      33,    -1,    34,    -1,    35,    -1,    36,    -1,    58,    -1,
      59,    -1,    60,    -1,    53,   192,    -1,    51,   192,    -1,
      70,    -1,   131,    -1,   132,    -1,   133,    -1,    72,    -1,
      73,    -1,    52,   194,    -1,    52,    -1,   135,    -1,     4,
     137,    -1,    88,   138,    -1,   136,    88,   138,    -1,   138,
      -1,   138,   136,    -1,   139,    -1,   139,    48,    44,    -1,
      44,    -1,    44,   140,    -1,   102,    44,    -1,   140,   102,
      44,    -1,    88,    44,    -1,   141,    88,    44,    -1,    54,
      44,    -1,    54,    44,   141,    -1,    25,    44,    -1,    25,
      44,   141,    -1,   146,    -1,   147,    -1,   148,    -1,   149,
      -1,   152,    -1,   114,    -1,    15,   198,    -1,    18,   157,
      99,   156,    -1,   145,    18,   157,    99,   156,    -1,    17,
     157,    99,   156,    -1,    17,   157,    99,   156,   145,    -1,
      17,   157,    99,   156,    16,    99,   156,    -1,    17,   157,
      99,   156,   145,    16,    99,   156,    -1,    19,   157,    99,
     156,    -1,    19,   157,    99,   156,    16,    99,   156,    -1,
      20,   192,    21,   194,    99,   156,    -1,    20,   192,    21,
     194,    99,   156,    16,    99,   156,    -1,    22,    99,   156,
     150,    -1,    22,    99,   156,   150,    16,    99,   156,    -1,
      22,    99,   156,   150,    23,    99,   156,    -1,    22,    99,
     156,    23,    99,   156,    -1,   154,    99,   156,    -1,   150,
     154,    99,   156,    -1,    88,   153,    -1,   151,    88,   153,
      -1,    47,   153,    99,   156,    -1,    47,   153,   151,    99,
     156,    -1,   157,    -1,   157,    48,   168,    -1,    69,    -1,
      69,   157,    -1,    69,   157,    48,    44,    -1,   117,    -1,
     117,   155,    -1,   155,     6,    -1,     6,    -1,   159,    -1,
     159,    17,   159,    16,   157,    -1,     8,   161,    -1,   158,
       8,   161,    -1,   161,    -1,   161,   158,    -1,     9,   162,
      -1,   160,     9,   162,    -1,   162,    -1,   162,   160,    -1,
      10,   162,    -1,   164,    -1,   165,   168,    -1,   163,   165,
     168,    -1,   168,    -1,   168,   163,    -1,    91,    -1,    92,
      -1,    50,    -1,    68,    -1,    67,    -1,    37,    -1,    11,
      -1,    21,    -1,    10,    21,    -1,    65,    -1,    65,    10,
      -1,    95,   168,    -1,   103,   170,    -1,   167,   103,   170,
      -1,   170,    -1,   170,   167,    -1,   104,   172,    -1,   169,
     104,   172,    -1,   172,    -1,   172,   169,    -1,   105,   174,
      -1,   171,   105,   174,    -1,   174,    -1,   174,   171,    -1,
      56,   176,    -1,    62,   176,    -1,   173,    56,   176,    -1,
     173,    62,   176,    -1,   176,    -1,   176,   173,    -1,    93,
     178,    -1,    94,   178,    -1,   175,    93,   178,    -1,   175,
      94,   178,    -1,   178,    -1,   178,   175,    -1,    95,   179,
      -1,    96,   179,    -1,    97,   179,    -1,    66,   179,    -1,
     177,    95,   179,    -1,   177,    96,   179,    -1,   177,    97,
     179,    -1,   177,    66,   179,    -1,   179,    -1,   179,   177,
      -1,    93,   179,    -1,    94,   179,    -1,   106,   179,    -1,
     181,    -1,   186,    -1,   180,   186,    -1,   183,    -1,   183,
     180,    -1,   183,   180,    40,   179,    -1,   183,    40,   179,
      -1,    63,    -1,   182,    63,    -1,    89,   100,    -1,    89,
     185,   100,    -1,    90,   107,    -1,   108,   109,    -1,    90,
     185,   107,    -1,   108,   197,   109,    -1,    44,    -1,    15,
      44,    -1,    15,   126,    44,    -1,    15,    13,    44,    -1,
      15,    12,    44,    -1,    15,    13,    12,    44,    -1,    15,
      12,    13,    44,    -1,    15,    13,   126,    44,    -1,    15,
      12,   126,    44,    -1,    15,    13,    12,   126,    44,    -1,
      15,    12,    13,   126,    44,    -1,    15,   126,    13,    44,
      -1,    15,   126,    12,    44,    -1,    15,   126,    13,    12,
      44,    -1,    15,   126,    12,    13,    44,    -1,    15,    13,
     126,    12,    44,    -1,    15,    12,   126,    13,    44,    -1,
      41,    -1,    43,    -1,    42,    -1,    71,    -1,   182,    -1,
      45,    -1,    64,    -1,    39,    -1,    38,    -1,    88,   157,
      -1,    88,   166,    -1,   184,    88,   157,    -1,   184,    88,
     166,    -1,   157,   208,    -1,   157,    -1,   157,   184,    -1,
     157,    88,    -1,   157,   184,    88,    -1,   166,   208,    -1,
     166,    -1,   166,   184,    -1,   166,    88,    -1,   166,   184,
      88,    -1,    89,   100,    -1,    89,   202,   100,    -1,    90,
     188,   107,    -1,   102,    44,    -1,    88,   189,    -1,   187,
      88,   189,    -1,   189,    -1,   189,   187,    -1,   189,    88,
      -1,   189,   187,    88,    -1,   157,    -1,    99,    -1,   157,
      99,    -1,   157,    99,   157,    -1,   157,    99,   190,    -1,
     157,    99,   157,   190,    -1,    99,   157,    -1,    99,   190,
      -1,    99,   157,   190,    -1,    99,    -1,    99,   157,    -1,
      88,   168,    -1,    88,   166,    -1,   191,    88,   168,    -1,
     191,    88,   166,    -1,   168,    -1,   168,   191,    -1,   166,
      -1,   166,   191,    -1,   168,    88,    -1,   168,   191,    88,
      -1,   166,    88,    -1,   166,   191,    88,    -1,    88,   157,
      -1,    88,   157,   193,    -1,   157,    -1,   157,   193,    -1,
     157,    88,    -1,   157,   193,    88,    -1,    88,   157,    99,
     157,    -1,   195,    88,   157,    99,   157,    -1,    88,   157,
      -1,   196,    88,   157,    -1,   157,    99,   157,   208,    -1,
     157,    99,   157,    -1,   157,    99,   157,    88,    -1,   157,
      99,   157,   195,    -1,   157,    99,   157,   195,    88,    -1,
     157,   208,    -1,   157,    -1,   157,    88,    -1,   157,   196,
      -1,   157,   196,    88,    -1,   199,   156,    -1,     5,    44,
      99,    -1,   126,     5,    44,    99,    -1,    13,     5,    44,
      99,    -1,    12,     5,    44,    99,    -1,    13,    12,     5,
      44,    99,    -1,    12,    13,     5,    44,    99,    -1,    12,
     126,     5,    44,    99,    -1,    13,   126,     5,    44,    99,
      -1,    13,    12,   126,     5,    44,    99,    -1,    12,    13,
     126,     5,    44,    99,    -1,   126,    13,     5,    44,    99,
      -1,   126,    12,     5,    44,    99,    -1,   126,    13,    12,
       5,    44,    99,    -1,   126,    12,    13,     5,    44,    99,
      -1,    13,   126,    12,     5,    44,    99,    -1,    12,   126,
      13,     5,    44,    99,    -1,     5,    44,    89,   100,    99,
      -1,   126,     5,    44,    89,   100,    99,    -1,    13,     5,
      44,    89,   100,    99,    -1,    12,     5,    44,    89,   100,
      99,    -1,    13,    12,     5,    44,    89,   100,    99,    -1,
      12,    13,     5,    44,    89,   100,    99,    -1,    13,   126,
       5,    44,    89,   100,    99,    -1,    12,   126,     5,    44,
      89,   100,    99,    -1,    13,    12,   126,     5,    44,    89,
     100,    99,    -1,    12,    13,   126,     5,    44,    89,   100,
      99,    -1,   126,    13,     5,    44,    89,   100,    99,    -1,
     126,    12,     5,    44,    89,   100,    99,    -1,   126,    13,
      12,     5,    44,    89,   100,    99,    -1,   126,    12,    13,
       5,    44,    89,   100,    99,    -1,    13,   126,    12,     5,
      44,    89,   100,    99,    -1,    12,   126,    13,     5,    44,
      89,   100,    99,    -1,     5,    44,    89,   137,   100,    99,
      -1,   126,     5,    44,    89,   137,   100,    99,    -1,    13,
       5,    44,    89,   137,   100,    99,    -1,    12,     5,    44,
      89,   137,   100,    99,    -1,    13,    12,     5,    44,    89,
     137,   100,    99,    -1,    12,    13,     5,    44,    89,   137,
     100,    99,    -1,    13,   126,     5,    44,    89,   137,   100,
      99,    -1,    12,   126,     5,    44,    89,   137,   100,    99,
      -1,    13,    12,   126,     5,    44,    89,   137,   100,    99,
      -1,    12,    13,   126,     5,    44,    89,   137,   100,    99,
      -1,   126,    13,     5,    44,    89,   137,   100,    99,    -1,
     126,    12,     5,    44,    89,   137,   100,    99,    -1,   126,
      13,    12,     5,    44,    89,   137,   100,    99,    -1,   126,
      12,    13,     5,    44,    89,   137,   100,    99,    -1,    13,
     126,    12,     5,    44,    89,   137,   100,    99,    -1,    12,
     126,    13,     5,    44,    89,   137,   100,    99,    -1,   206,
      88,    -1,   200,   206,    88,    -1,    88,   206,    -1,   201,
      88,   206,    -1,   206,    -1,   205,    -1,   206,    88,    -1,
      95,   157,    -1,    95,   157,    88,    40,   157,    -1,    95,
     157,   201,    -1,    95,   157,   203,    -1,    95,   157,   201,
     203,    -1,    95,   157,   201,    88,    40,   157,    -1,    40,
     157,    -1,   200,   206,    -1,   200,   205,    -1,   200,   204,
     205,    -1,   200,   206,    88,    -1,   200,    95,   157,    -1,
     200,    95,   157,    88,    40,   157,    -1,   200,    95,   157,
     201,    -1,   200,    95,   157,   203,    -1,   200,    95,   157,
     201,   203,    -1,   200,    95,   157,   201,    88,    40,   157,
      -1,   200,    40,   157,    -1,    88,   205,    -1,   203,    88,
     205,    -1,   205,    88,    -1,   204,   205,    88,    -1,   157,
     101,   157,    -1,   157,    -1,   157,   208,    -1,   208,    -1,
     209,    -1,    20,   192,    21,   159,    -1,    20,   192,    21,
     159,   207,    -1,    17,   159,    -1,    17,   159,   207,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   109,   109,   118,   119,   123,   124,   138,   145,   146,
     147,   156,   164,   165,   166,   174,   182,   183,   184,   192,
     200,   208,   209,   216,   224,   225,   226,   234,   241,   242,
     243,   251,   259,   260,   261,   269,   276,   277,   278,   285,
     294,   295,   298,   299,   301,   303,   304,   305,   306,   307,
     308,   309,   310,   313,   314,   315,   318,   319,   322,   323,
     324,   325,   326,   327,   328,   331,   332,   335,   336,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   352,   353,   354,   356,   357,   360,   363,   364,   365,
     368,   371,   374,   375,   379,   382,   385,   386,   388,   395,
     405,   406,   409,   410,   413,   417,   423,   424,   427,   428,
     431,   432,   435,   436,   437,   438,   439,   440,   441,   444,
     445,   448,   449,   450,   451,   454,   455,   458,   459,   462,
     463,   464,   465,   468,   469,   472,   473,   476,   477,   480,
     481,   484,   485,   486,   489,   490,   493,   494,   497,   498,
     501,   502,   505,   506,   509,   510,   513,   514,   517,   518,
     521,   522,   525,   526,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   542,   545,   546,   548,   549,
     552,   553,   556,   557,   560,   561,   564,   565,   568,   569,
     570,   571,   574,   575,   578,   579,   580,   581,   584,   585,
     588,   589,   590,   591,   592,   593,   594,   595,   598,   599,
     602,   603,   604,   605,   608,   609,   612,   613,   614,   615,
     618,   619,   622,   623,   624,   625,   626,   627,   628,   629,
     630,   631,   632,   633,   634,   635,   636,   637,   638,   639,
     640,   641,   642,   643,   644,   645,   646,   647,   648,   649,
     650,   651,   652,   653,   656,   657,   658,   659,   662,   663,
     664,   665,   666,   667,   668,   669,   670,   671,   674,   675,
     676,   677,   680,   681,   684,   685,   686,   687,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   701,   702,   705,
     706,   707,   708,   711,   712,   713,   714,   715,   716,   717,
     718,   721,   722,   725,   726,   727,   728,   731,   732,   734,
     735,   738,   739,   740,   741,   742,   743,   744,   745,   746,
     747,   749,   754,   761,   768,   775,   782,   789,   796,   803,
     810,   817,   824,   831,   838,   845,   852,   859,   866,   874,
     881,   888,   895,   902,   909,   916,   923,   930,   937,   944,
     951,   958,   965,   972,   979,   986,   993,  1000,  1007,  1014,
    1021,  1028,  1035,  1042,  1049,  1050,  1051,  1058,  1065,  1072,
    1082,  1083,  1086,  1087,  1090,  1091,  1093,  1095,  1103,  1116,
    1125,  1134,  1142,  1154,  1161,  1162,  1163,  1164,  1166,  1174,
    1187,  1195,  1203,  1211,  1224,  1234,  1235,  1238,  1239,  1242,
    1244,  1245,  1249,  1250,  1253,  1254,  1257,  1258
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
  "ARROW", "NONLOCAL", "PLUS_EQUAL", "MINUS_EQUAL", "DIV_EQUAL",
  "MOD_EQUAL", "AND_EQUAL", "OR_EQUAL", "SHAPOO_EQUAL",
  "LESS_THAN_2_EQUAL", "MORE_THAN_2_EQUAL", "STAR_2_EQUAL", "DIV_2_EQUAL",
  "MORE_LESS", "FALSE", "TRUE", "STAR_2", "NUMBER_INT", "NUMBER_LONG",
  "NUMBER_FLOAT", "NAME", "DOT_3", "EXPECT", "WITH", "AS", "ASSERT",
  "EQUAL", "DEL", "RETURN", "PRINT", "GLOBAL", "STAR_EQUAL", "LESS_THAN_2",
  "RAISE", "PRIVATE", "PUBLIC", "PROTECTED", "YIELD", "MORE_THAN_2",
  "STRING", "NONE", "IS", "DIV_2", "LESS_OR_EQUAL", "MORE_OR_EQUAL",
  "EXCEPT", "PASS", "CHAR_VALUE", "BREAK", "CONTINUE", "stmt_14",
  "stmt_13", "stmt_12", "stmt_11", "stmt_10", "stmt_9", "stmt_8", "stmt_7",
  "stmt_6", "stmt_5", "stmt_4", "stmt_3", "stmt_2", "stmt_1", "','", "'('",
  "'['", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "';'", "':'",
  "')'", "'='", "'.'", "'|'", "'^'", "'&'", "'~'", "']'", "'{'", "'}'",
  "$accept", "file_input", "program", "temp2", "funcdef", "funcheader",
  "parameters", "stmt", "simple_stmt", "small_stmt", "expr_stmt",
  "right_testlist", "testlist_star_expr", "comma_test_star",
  "comma_test_star_seqJ", "augassign", "access", "print_stmt", "del_stmt",
  "pass_stmt", "flow_stmt", "break_stmt", "continue_stmt", "return_stmt",
  "import_stmt", "import_name", "comma_dotted_as_name_seq",
  "dotted_as_names", "dotted_as_name", "dotted_name", "dotted_name_seq",
  "comma_name_seq", "global_stmt", "nonlocal_stmt", "compound_stmt",
  "elif_seq", "if_stmt", "while_stmt", "for_stmt", "try_stmt",
  "try_except_cla_seq", "with_seq", "with_stmt", "with_item",
  "except_clause", "list_stmt", "suite", "test", "or_seq", "or_test",
  "and_seq", "and_test", "not_test", "comp_op_seq", "comparison",
  "comp_op", "star_expr", "or_xor_expr_seq", "expr", "sha_and_expr_seq",
  "xor_expr", "and_shift_expr_seq", "and_expr", "arith_seq", "shift_expr",
  "term_seq", "arith_expr", "factor_seq", "term", "factor", "trailer_seq",
  "power", "str_seq", "atom", "comma_test_star_seq", "testlist_comp",
  "trailer", "comma_subscript_seq", "subscriptlist", "subscript",
  "sliceop", "comma_expr_star_seq", "exprlist", "comma_test", "testlist",
  "comma_test_colon_test_seq", "comma_test_seq", "dictorsetmaker",
  "classdef", "classheader", "arg_comma_seq", "comma_arg_seq", "arglist",
  "comma_default_arg_seq", "default_arg_comma_seq", "default_arg",
  "argument", "comp_iter", "comp_for", "comp_if", 0
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
       0,   110,   111,   112,   112,   113,   113,   114,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     116,   116,   117,   117,   118,   119,   119,   119,   119,   119,
     119,   119,   119,   120,   120,   120,   121,   121,   122,   122,
     122,   122,   122,   122,   122,   123,   123,   124,   124,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   126,   126,   126,   127,   128,   129,   130,   130,   130,
     131,   132,   133,   133,   134,   135,   136,   136,   137,   137,
     138,   138,   139,   139,   140,   140,   141,   141,   142,   142,
     143,   143,   144,   144,   144,   144,   144,   144,   144,   145,
     145,   146,   146,   146,   146,   147,   147,   148,   148,   149,
     149,   149,   149,   150,   150,   151,   151,   152,   152,   153,
     153,   154,   154,   154,   155,   155,   156,   156,   157,   157,
     158,   158,   159,   159,   160,   160,   161,   161,   162,   162,
     163,   163,   164,   164,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   166,   167,   167,   168,   168,
     169,   169,   170,   170,   171,   171,   172,   172,   173,   173,
     173,   173,   174,   174,   175,   175,   175,   175,   176,   176,
     177,   177,   177,   177,   177,   177,   177,   177,   178,   178,
     179,   179,   179,   179,   180,   180,   181,   181,   181,   181,
     182,   182,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   184,   184,   184,   184,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   186,   186,
     186,   186,   187,   187,   188,   188,   188,   188,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   190,   190,   191,
     191,   191,   191,   192,   192,   192,   192,   192,   192,   192,
     192,   193,   193,   194,   194,   194,   194,   195,   195,   196,
     196,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   198,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     200,   200,   201,   201,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   203,   203,   204,   204,   205,
     206,   206,   207,   207,   208,   208,   209,   209
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     2,     3,     1,     2,     1,     2,     6,     7,
       4,     5,     7,     7,     5,     5,     8,     8,     6,     6,
       8,     8,     6,     6,     9,     9,     7,     7,     8,     8,
       6,     6,     9,     9,     7,     7,     9,     9,     7,     7,
       3,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     2,     3,     2,     1,     2,
       1,     2,     1,     3,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     2,     2,     3,     1,     2,
       1,     3,     1,     2,     2,     3,     2,     3,     2,     3,
       2,     3,     1,     1,     1,     1,     1,     1,     2,     4,
       5,     4,     5,     7,     8,     4,     7,     6,     9,     4,
       7,     7,     6,     3,     4,     2,     3,     4,     5,     1,
       3,     1,     2,     4,     1,     2,     2,     1,     1,     5,
       2,     3,     1,     2,     2,     3,     1,     2,     2,     1,
       2,     3,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     2,     2,     3,     1,     2,
       2,     3,     1,     2,     2,     3,     1,     2,     2,     2,
       3,     3,     1,     2,     2,     2,     3,     3,     1,     2,
       2,     2,     2,     2,     3,     3,     3,     3,     1,     2,
       2,     2,     2,     1,     1,     2,     1,     2,     4,     3,
       1,     2,     2,     3,     2,     2,     3,     3,     1,     2,
       3,     3,     3,     4,     4,     4,     4,     5,     5,     4,
       4,     5,     5,     5,     5,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     3,     3,     2,     1,
       2,     2,     3,     2,     1,     2,     2,     3,     2,     3,
       3,     2,     2,     3,     1,     2,     2,     3,     1,     1,
       2,     3,     3,     4,     2,     2,     3,     1,     2,     2,
       2,     3,     3,     1,     2,     1,     2,     2,     3,     2,
       3,     2,     3,     1,     2,     2,     3,     4,     5,     2,
       3,     4,     3,     4,     4,     5,     2,     1,     2,     2,
       3,     2,     3,     4,     4,     4,     5,     5,     5,     5,
       6,     6,     5,     5,     6,     6,     6,     6,     5,     6,
       6,     6,     7,     7,     7,     7,     8,     8,     7,     7,
       8,     8,     8,     8,     6,     7,     7,     7,     8,     8,
       8,     8,     9,     9,     8,     8,     9,     9,     9,     9,
       2,     3,     2,     3,     1,     1,     2,     2,     5,     3,
       3,     4,     6,     2,     2,     2,     3,     3,     3,     6,
       4,     4,     5,     7,     3,     2,     3,     2,     3,     3,
       1,     2,     1,     1,     4,     5,     2,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       0,     0,     0,     0,     0,    81,    82,    83,     0,     0,
       4,     0,     0,    94,     6,     0,   102,    95,    98,   100,
       0,     0,     0,     0,     0,     0,     0,     1,     2,     0,
       0,     0,     0,     5,   147,     0,     0,     0,     0,     0,
       0,     0,   253,   252,   245,   247,   246,   228,   250,     0,
       0,    93,     0,     0,   220,   251,    86,   248,    90,    91,
      60,     0,     0,     0,     0,     0,     0,     0,   117,     0,
     144,    42,     0,    45,    54,    68,    58,    52,    46,    47,
      48,    87,    88,    89,    49,    50,    51,    43,   112,   113,
     114,   115,   116,     0,   321,    62,   148,   152,   156,   159,
       0,   162,   178,   182,   186,   192,   198,   208,   213,   249,
     216,     0,   103,     0,    99,     0,     0,   322,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,     0,   158,     0,     0,   229,     0,
     118,     0,     0,   295,   293,     0,     0,   110,     0,   139,
      85,   303,    92,    84,   108,    65,    66,   222,   259,   264,
       0,   224,     0,   210,   211,   175,   212,   225,   317,     0,
       7,   145,    44,    69,    70,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    71,     0,    55,     0,    59,    67,
     146,     0,    61,     0,     0,   153,     0,   157,    64,     0,
       0,   170,   171,   169,   166,   173,   168,   167,   164,   165,
     163,     0,     0,   179,     0,   183,     0,   187,     0,     0,
     193,     0,     0,   199,     0,     0,     0,     0,   209,   221,
       0,     0,     0,     0,   217,   214,   104,     0,    96,     0,
     101,     0,     0,     0,   325,     0,     0,     0,     0,     0,
     324,     0,     0,     0,     0,     0,   323,     0,     0,     0,
       0,     0,     0,   229,     0,     0,   232,     0,     0,   231,
       0,     0,     0,     0,     0,   230,     0,     0,   299,   296,
     297,   294,     0,     0,     0,   111,     0,     0,     0,     0,
     305,   304,   109,     0,   261,   260,   258,   266,   265,   263,
     223,   226,   318,     0,   319,   316,   227,    57,    53,     0,
     150,     0,   154,     0,    63,   172,   174,     0,   160,   176,
       0,   180,     0,   184,     0,   188,   189,     0,     0,   194,
     195,     0,     0,   203,   200,   201,   202,     0,     0,     0,
       0,   219,     0,     0,   268,   400,     0,     0,   375,   374,
     279,   278,     0,   274,   271,     0,   215,   105,    97,   338,
       0,     0,     0,     0,   327,     0,     0,   328,     0,     0,
       0,     0,   326,     0,     0,   329,     0,     0,     0,     0,
     333,     0,     0,   332,     0,     0,   232,     0,     0,   231,
       0,     0,     0,   230,   234,     0,     0,     0,   236,   233,
       0,     0,     0,   235,    41,     0,     0,    10,     0,   240,
       0,   239,     0,   121,   125,   290,   289,   300,   298,     0,
       0,   141,   129,     0,   106,     0,   135,   137,     0,     0,
     140,   301,   306,     0,   254,   255,   262,   267,   309,   312,
     320,    56,     0,   151,   155,   161,   177,   181,   185,   190,
     191,   196,   197,   207,   204,   205,   206,   383,   377,     0,
     401,     0,     0,     0,   385,   384,   269,   370,   287,   284,
     285,   280,   270,   276,   275,   218,   354,   341,     0,     0,
       0,     0,   331,     0,     0,     0,   337,   340,     0,     0,
       0,     0,   330,     0,     0,     0,   336,   339,     0,     0,
       0,     0,   335,     0,     0,     0,   334,   234,     0,     0,
     236,   233,     0,     0,   235,     0,   240,     0,   239,     0,
     238,     0,    15,   244,     0,     0,   237,     0,    14,   243,
       0,    40,     0,   242,     0,   241,     0,     0,    11,     0,
       0,   122,     0,   292,   291,     0,     0,   142,     0,     0,
       0,     0,   107,   136,   138,     0,   302,     0,   256,   257,
     313,   314,   311,   310,   149,     0,   379,   380,   399,   394,
     388,     0,   386,   397,   371,   288,   286,   281,   282,   272,
     277,   357,   343,     0,     0,     0,   345,     0,     0,     0,
     356,   342,     0,     0,     0,   344,     0,     0,     0,   355,
     349,     0,     0,     0,   348,     0,     0,     0,   238,   244,
     237,   243,   242,   241,     0,    19,     0,     0,     0,     0,
      23,     0,    18,     0,     0,     0,     0,    22,     8,     0,
       0,    31,     0,     0,    30,     0,     0,     0,     0,     0,
       0,   127,   132,     0,     0,     0,     0,   133,   404,     0,
     315,     0,   395,   372,     0,   381,     0,     0,   390,   391,
     398,   283,   273,   359,   347,     0,   361,   353,     0,   358,
     346,     0,   360,   352,     0,   365,   351,     0,   364,   350,
       0,     0,     0,    27,    13,     0,    39,     0,     0,     0,
      26,    12,     0,    38,     0,     0,    35,     0,     0,    34,
       0,     9,   123,     0,     0,     0,   126,     0,   143,   130,
     131,   134,     0,   405,   402,   403,     0,     0,   378,     0,
     373,   396,     0,     0,   392,   363,   369,   362,   368,   367,
     366,    17,     0,     0,    20,    16,     0,     0,    21,     0,
      29,     0,    28,   119,   124,     0,     0,   406,   307,     0,
     382,   389,     0,    25,    37,    24,    36,    33,    32,   120,
     128,   407,   308,   393
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     8,     9,    10,    68,    69,   272,    70,    71,    72,
      73,   186,    74,    75,    76,   187,    11,    77,    78,    79,
      80,    81,    82,    83,    84,    13,   114,    17,    18,    19,
     112,   285,    85,    86,    87,   541,    88,    89,    90,    91,
     422,   288,    92,   148,   423,    93,    94,    95,   195,    96,
     197,    97,    98,   210,    99,   211,   100,   213,   101,   215,
     102,   217,   103,   220,   104,   223,   105,   228,   106,   107,
     234,   108,   109,   110,   295,   160,   235,   474,   352,   353,
     470,   279,   145,   291,   152,   561,   304,   169,    14,    15,
     346,   566,   347,   567,   463,   652,   349,   713,   714,   715
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -521
static const short int yypact[] =
{
     180,    16,    97,   357,   292,  -521,  -521,  -521,    79,    55,
    -521,   553,   -23,  -521,   287,   650,    -4,  -521,    68,   128,
     204,   154,   216,   427,   176,   318,    60,  -521,  -521,   179,
     452,    88,   287,  -521,  -521,  1221,   313,  1221,  1221,   403,
     145,   214,  -521,  -521,  -521,  -521,  -521,  -521,  -521,  1221,
     403,  1221,   403,   245,  -521,  -521,  -521,  -521,  -521,  -521,
     960,   807,   847,  1257,  1257,  1257,  1257,   690,  -521,   650,
     497,  -521,   222,  -521,   595,  -521,   277,  -521,  -521,  -521,
    -521,  -521,  -521,  -521,  -521,  -521,  -521,  -521,  -521,  -521,
    -521,  -521,  -521,   105,  -521,   286,   316,   377,   429,  -521,
     298,    34,   294,   352,   386,   407,   261,   355,  -521,   397,
      14,   451,   406,    16,   414,   469,    12,  -521,   209,   476,
     528,   515,   567,   290,   530,   573,   539,   583,   365,   550,
     593,   555,   596,  -521,    50,  -521,   323,   351,   511,   266,
    -521,   505,   507,   519,   520,   588,   650,   522,   125,   563,
    -521,   524,  -521,  -521,   522,  -521,  -521,  -521,    31,    33,
     518,  -521,   508,  -521,  -521,  -521,  -521,  -521,    32,   523,
    -521,  -521,  -521,  -521,  -521,  -521,  -521,  -521,  -521,  -521,
    -521,  -521,  -521,  -521,  -521,   888,  -521,  1221,   960,  -521,
    -521,   960,   286,  1221,  1221,   608,  1221,   624,   960,   546,
     614,  -521,  -521,  -521,  -521,   626,  -521,  -521,  -521,  -521,
      34,  1257,  1257,   534,  1257,   536,  1257,   537,  1257,  1257,
     432,  1257,  1257,   308,  1257,  1257,  1257,  1257,   409,  -521,
    1257,   726,   996,   597,    99,  -521,  -521,   599,  -521,    16,
    -521,   545,   547,    13,  -521,   372,   602,   379,   605,    17,
    -521,   383,   607,   388,   609,    42,  -521,   400,   613,   438,
     615,   224,   348,  -521,   170,   236,   511,   324,   257,   511,
     415,   766,    23,   391,   418,   511,   650,   650,   403,   574,
     403,   575,  1221,    45,   620,   578,  1221,   650,   203,  1257,
    1221,   580,   578,   403,   960,   585,  -521,   960,   586,  -521,
    -521,  -521,  1221,  1221,   589,  -521,  -521,   570,  -521,   660,
    -521,  1221,  -521,  1221,   960,  -521,  -521,  1257,  -521,  -521,
    1257,  -521,  1257,  -521,  1257,  -521,  -521,  1257,  1257,  -521,
    -521,  1257,  1257,  -521,  -521,  -521,  -521,  1257,  1257,  1257,
    1257,  -521,  1221,  1221,  -521,    29,   924,   584,  -521,   590,
    1036,   591,   576,   610,  -521,  1257,  -521,  -521,  -521,  -521,
     600,   611,   587,   102,  -521,   456,   115,  -521,   457,   612,
     606,   126,  -521,   458,   131,  -521,   463,   617,   618,   136,
    -521,   464,   142,  -521,   465,   466,  -521,   156,   471,  -521,
     165,   166,   295,  -521,   511,    71,    24,   173,   511,   511,
     242,    35,   370,   511,  -521,   619,  1221,  -521,   375,   511,
     393,   511,    46,   516,   691,  -521,  -521,   403,   403,   625,
     627,  1221,   265,   628,  -521,   664,  -521,  -521,  1221,   650,
    -521,   621,  -521,   696,  -521,  -521,   960,   960,  -521,    85,
    1221,  -521,  1221,  -521,  -521,  -521,  -521,  -521,  -521,  -521,
    -521,  -521,  -521,  -521,  -521,  -521,  -521,  -521,   637,  1221,
    -521,  1221,  1221,  1221,   642,   649,  -521,   646,  1221,   643,
    -521,  1036,  -521,   996,   659,  -521,  -521,  -521,   651,   652,
     648,   143,  -521,   653,   655,   146,  -521,  -521,   658,   661,
     662,   152,  -521,   673,   663,   155,  -521,  -521,   674,   675,
     677,   161,  -521,   676,   678,   164,  -521,  -521,   705,   715,
    -521,  -521,   738,   741,  -521,   742,  -521,   743,  -521,    53,
     511,  1221,  -521,   511,    54,    56,   511,  1221,  -521,   511,
      58,  -521,   689,   511,    59,   511,    61,  1221,  -521,   692,
    1221,   579,   693,  -521,  -521,   650,   650,   745,   695,   701,
     702,   650,  -521,  -521,  -521,  1221,  -521,  1221,  -521,  -521,
    1221,   707,  -521,  -521,  -521,  1077,   714,   724,  -521,  -521,
     725,   713,   730,  -521,   703,  -521,  -521,   643,  -521,  -521,
     996,  -521,  -521,   728,   729,   723,  -521,   732,   734,   735,
    -521,  -521,   737,   739,   740,  -521,   744,   748,   753,  -521,
    -521,   755,   759,   763,  -521,   765,   768,   769,  -521,  -521,
    -521,  -521,  -521,  -521,  1221,  -521,    63,   774,    64,  1221,
    -521,  1221,  -521,    66,   776,    67,  1221,  -521,  -521,    72,
    1221,  -521,    73,  1221,  -521,   777,   650,   778,   780,  1221,
     650,   808,  -521,   781,   650,   650,   650,  -521,   556,   782,
    1221,  1221,  -521,  -521,  1113,   724,  1221,  1149,   751,   724,
    -521,  -521,  -521,  -521,  -521,   783,  -521,  -521,   784,  -521,
    -521,   785,  -521,  -521,   788,  -521,  -521,   794,  -521,  -521,
     795,   796,  1221,  -521,  -521,  1221,  -521,   800,   805,  1221,
    -521,  -521,  1221,  -521,   806,  1221,  -521,   809,  1221,  -521,
     810,  -521,  -521,   650,   650,   813,  -521,   815,  -521,  -521,
    -521,  -521,  1221,  -521,  -521,  -521,  1221,   817,  -521,  1221,
    -521,  -521,  1221,  1185,   724,  -521,  -521,  -521,  -521,  -521,
    -521,  -521,   818,   820,  -521,  -521,   821,   822,  -521,   823,
    -521,   824,  -521,  -521,  -521,   650,   650,   556,  -521,  1221,
    -521,  -521,  1221,  -521,  -521,  -521,  -521,  -521,  -521,  -521,
    -521,  -521,  -521,  -521
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -521,  -521,  -521,    75,  -521,  -521,   -50,  -521,  -521,  -521,
    -521,   535,   656,   -59,   172,  -521,    70,  -521,  -521,  -521,
    -521,  -521,  -521,  -521,   844,  -521,  -521,   -52,  -107,  -521,
    -521,   711,  -521,  -521,  -521,  -521,  -521,  -521,  -521,  -521,
    -521,  -521,  -521,  -281,   446,   836,   -65,   -37,  -521,  -191,
    -521,  -183,   -28,  -521,  -521,   670,   -24,  -521,   -30,  -521,
    -193,  -521,  -187,  -521,  -195,  -521,  -179,  -521,  -188,     3,
    -521,  -521,  -521,  -521,   779,   862,   694,  -521,  -521,  -444,
    -453,   791,   -42,   494,  -145,  -521,  -521,  -521,   907,  -521,
    -521,   374,   679,  -520,  -521,  -228,  -333,   198,  -127,  -521
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -388
static const short int yytable[] =
{
     141,   142,   309,   348,   170,   426,   238,   135,   150,   144,
     153,   310,   149,   465,   151,   143,   576,   189,   578,   319,
     144,   323,   144,   155,   158,   158,   143,   321,   143,   579,
     168,   296,   299,   329,   330,   165,   156,   159,   159,   325,
     326,   305,   308,   348,   200,   201,   655,   406,   521,   293,
     659,   293,   293,   293,   230,   202,    16,    16,    28,   527,
      16,    16,   261,   262,   242,   126,   163,   164,   420,   166,
     537,   203,   127,    23,    26,    32,   246,   614,   619,    27,
     621,   283,   626,   630,   204,   633,    16,   682,   685,    33,
     689,   692,   120,   131,   263,   125,   695,   698,   111,   205,
     132,   206,   207,   231,   232,   293,   139,   133,     5,     6,
       7,   190,   241,   361,   421,   520,   233,   369,   464,   294,
     302,   297,   407,   522,   661,   208,   209,   446,   443,   448,
     459,   303,   358,   189,   528,   447,   662,   419,   724,   355,
     189,    20,   377,   451,   452,   538,    16,   553,   449,   450,
     151,   155,   615,   620,   155,   622,   113,   627,   631,    16,
     634,   155,   683,   686,   156,   690,   693,   156,   312,   509,
      16,   696,   699,   560,   156,    16,   115,   513,   248,   515,
      16,   318,   391,   392,     1,     2,    16,    16,   231,   232,
      16,   362,     3,     4,   345,   351,    16,   370,   118,    16,
     510,   233,   479,   378,   264,    16,   267,   270,    16,   514,
     516,   413,   414,   286,   393,   483,   396,   523,   460,   401,
     123,   119,   427,   128,   287,   412,   489,   333,   334,   335,
     336,   493,   653,   341,   345,   572,   499,   385,     5,     6,
       7,   119,   503,   584,   146,   151,   588,   252,   416,   149,
     416,   433,   593,   431,   415,   597,   415,   434,   147,   430,
     434,   602,   124,   144,   606,   438,   439,   192,   386,   143,
     435,    29,   199,   435,     5,     6,     7,   155,   273,   274,
     394,   548,     5,     6,     7,   444,   526,   445,   549,   154,
     156,   428,     2,   116,     5,     6,     7,    24,   243,     3,
       4,   399,   429,   117,    25,   457,   458,   517,   244,   345,
     275,   480,   562,   469,   484,     5,     6,     7,     2,   490,
     172,   720,   494,   124,   653,   136,   137,   500,    21,   121,
     504,   387,   390,   193,   421,   395,   265,   397,   400,   518,
     453,   454,   455,   456,   519,     5,     6,     7,   524,   525,
       5,     6,     7,   530,   221,   222,    24,   138,   475,   534,
     388,   536,    21,   268,   554,   188,   648,   266,   398,   532,
      22,     5,     6,     7,   191,   254,     5,     6,     7,   249,
     258,     5,     6,     7,   547,   194,   198,   544,   544,   250,
     720,   149,   389,   543,   543,   269,   129,   212,   260,   558,
     558,   331,   332,   563,   408,   564,     5,     6,     7,     5,
       6,     7,   559,   559,   529,     5,     6,     7,   134,   533,
     126,   224,   568,   131,   569,   570,   571,   402,   721,   585,
     410,   575,   121,   589,   577,   409,   351,   535,   196,   594,
     122,    42,    43,   598,    44,    45,    46,    47,    48,   603,
     225,   226,   227,   607,   255,   508,   214,   129,   512,   403,
     229,   363,   411,   218,   256,   130,    54,    55,   366,   219,
     616,   364,   371,   618,    57,   337,   623,   374,   367,   625,
     641,   642,   372,   629,   617,   632,   647,   375,   327,   379,
     624,   216,    61,    62,   328,   236,    63,    64,    65,   380,
     635,     1,   239,   637,   338,   339,   340,    35,   237,    66,
     507,    67,    36,   240,    37,   511,    38,    39,   431,    40,
     245,   747,    41,   649,     5,     6,     7,   382,   345,     5,
       6,     7,   539,   246,   540,    42,    43,   383,    44,    45,
      46,    47,    48,   351,    49,   481,   485,   491,    50,    51,
      52,    53,   495,   501,   505,   482,   486,   492,    29,   247,
      54,    55,   496,   502,   506,    30,    31,    56,    57,    58,
      59,   702,   248,   712,   251,   706,   293,   681,   252,   709,
     710,   711,   687,   253,   688,    60,    61,    62,   254,   694,
      63,    64,    65,   697,   257,   638,   700,   639,   258,   259,
     271,   260,   705,    66,   276,    67,   277,   278,   280,   282,
     284,   289,   290,   717,   718,   301,   311,   345,   300,   571,
     345,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   306,   313,   314,   315,   316,   320,   743,   744,
     322,   354,   324,   357,   359,   732,   365,   360,   733,   368,
     184,   373,   736,   376,     1,   737,    34,   381,   739,   384,
      35,   741,   417,   418,   424,    36,   425,    37,   432,    38,
      39,   185,    40,   436,   437,    41,   442,   440,   467,   748,
     759,   760,   750,   472,   466,   751,   345,   478,    42,    43,
     471,    44,    45,    46,    47,    48,   185,    49,   473,   476,
      35,    50,    51,    52,    53,   134,   488,   542,   552,  -388,
     477,   487,   762,    54,    55,   763,   497,   557,   498,   531,
      56,    57,    58,    59,   545,   565,   546,   551,    42,    43,
     573,    44,    45,    46,    47,    48,    35,   574,    60,    61,
      62,   134,   468,    63,    64,    65,  -376,   580,   583,   608,
     581,   582,   586,    54,    55,   587,    66,   590,    67,   609,
     591,    57,   592,   596,    42,    43,   342,    44,    45,    46,
      47,    48,   595,   599,   600,   604,    35,   601,   605,    61,
      62,   134,   610,    63,    64,   611,   612,   613,   628,    54,
      55,   636,   640,   643,   644,   650,    66,    57,    67,   167,
     645,   646,   654,  -387,    42,    43,   342,    44,    45,    46,
      47,    48,   656,   657,   459,    61,    62,    35,   660,    63,
      64,   343,   134,   665,   707,   708,   344,   663,   664,    54,
      55,   666,    66,   667,    67,   668,   669,    57,   670,   723,
     671,   307,   441,   672,    12,    42,    43,   673,    44,    45,
      46,    47,    48,   674,   675,    61,    62,    35,   676,    63,
      64,   343,   134,   677,   678,   292,   404,   679,   550,   680,
      54,    55,    66,   684,    67,   691,   701,   703,    57,   704,
     317,   716,   725,   726,   727,    42,    43,   728,    44,    45,
      46,    47,    48,   729,   730,   731,    61,    62,    35,   734,
      63,    64,    65,   134,   735,   738,   171,   157,   740,   742,
      54,    55,   745,    66,   746,    67,   749,   753,    57,   754,
     755,   756,   757,   758,   162,   556,    42,    43,   356,    44,
      45,    46,    47,    48,    35,   281,    61,    62,   298,   134,
      63,    64,    65,   140,   658,   761,     0,     0,     0,     0,
     405,    54,    55,    66,   161,    67,     0,     0,     0,    57,
       0,     0,    42,    43,   461,    44,    45,    46,    47,    48,
      35,     0,     0,     0,     0,   134,    60,    61,    62,     0,
       0,    63,    64,    65,     0,     0,     0,    54,    55,     0,
       0,     0,     0,     0,    66,    57,    67,     0,    42,    43,
       0,    44,    45,    46,    47,    48,    35,     0,     0,     0,
       0,   134,     0,    61,    62,     0,     0,    63,    64,   462,
       0,     0,     0,    54,    55,     0,     0,     0,     0,     0,
      66,    57,    67,     0,    42,    43,     0,    44,    45,    46,
      47,    48,     0,     0,     0,     0,    35,     0,     0,    61,
      62,   134,     0,    63,    64,    65,     0,     0,     0,    54,
      55,     0,     0,     0,     0,     0,    66,    57,    67,     0,
       0,     0,     0,     0,    42,    43,     0,    44,    45,    46,
      47,    48,     0,     0,     0,    61,    62,    35,     0,    63,
      64,     0,   134,     0,     0,   350,     0,     0,     0,    54,
      55,     0,    66,     0,    67,     0,     0,    57,     0,     0,
       0,     0,     0,     0,     0,    42,    43,   651,    44,    45,
      46,    47,    48,    35,     0,    61,    62,     0,   134,    63,
      64,     0,     0,     0,     0,   468,     0,     0,     0,     0,
      54,    55,    66,     0,    67,     0,     0,     0,    57,     0,
       0,    42,    43,   719,    44,    45,    46,    47,    48,    35,
       0,     0,     0,     0,   134,     0,    61,    62,     0,     0,
      63,    64,     0,     0,     0,     0,    54,    55,     0,     0,
       0,     0,     0,    66,    57,    67,     0,    42,    43,   722,
      44,    45,    46,    47,    48,    35,     0,     0,     0,     0,
     134,     0,    61,    62,     0,     0,    63,    64,     0,     0,
       0,     0,    54,    55,     0,     0,     0,     0,     0,    66,
      57,    67,     0,    42,    43,   752,    44,    45,    46,    47,
      48,    35,     0,     0,     0,     0,   134,     0,    61,    62,
       0,     0,    63,    64,     0,     0,     0,     0,    54,    55,
       0,     0,     0,     0,     0,    66,    57,    67,     0,    42,
      43,     0,    44,    45,    46,    47,    48,     0,     0,     0,
       0,     0,   134,     0,    61,    62,     0,     0,    63,    64,
       0,     0,     0,     0,    54,    55,     0,     0,     0,     0,
       0,    66,    57,    67,     0,    42,    43,     0,    44,    45,
      46,    47,    48,     0,     0,     0,     0,     0,     0,     0,
      61,    62,     0,     0,    63,    64,     0,     0,     0,     0,
      54,    55,     0,     0,     0,     0,     0,    66,    57,    67,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    61,    62,     0,     0,
      63,    64,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    66,     0,    67
};

static const short int yycheck[] =
{
      37,    38,   193,   231,    69,   286,   113,    35,    50,    39,
      52,   194,    49,   346,    51,    39,   469,    76,   471,   212,
      50,   216,    52,    60,    61,    62,    50,   214,    52,   473,
      67,   158,   159,   221,   222,    65,    60,    61,    62,   218,
     219,   168,   187,   271,    10,    11,   566,    24,    24,    20,
     570,    20,    20,    20,    40,    21,    44,    44,     3,    24,
      44,    44,    12,    13,   116,     5,    63,    64,    23,    66,
      24,    37,    12,     3,     4,    98,     5,    24,    24,     0,
      24,   146,    24,    24,    50,    24,    44,    24,    24,    14,
      24,    24,    22,     5,    44,    25,    24,    24,   102,    65,
      12,    67,    68,    89,    90,    20,    36,    32,    58,    59,
      60,     6,   100,   100,    69,    44,   102,   100,   346,    88,
      88,    88,    99,    99,   577,    91,    92,   320,   311,   324,
     101,    99,   239,   192,    99,   322,   580,   282,   658,    40,
     199,    44,   100,   331,   332,    99,    44,   428,   327,   328,
     187,   188,    99,    99,   191,    99,    88,    99,    99,    44,
      99,   198,    99,    99,   188,    99,    99,   191,   196,    13,
      44,    99,    99,    88,   198,    44,    48,    12,     5,    13,
      44,   211,    12,    13,     4,     5,    44,    44,    89,    90,
      44,   243,    12,    13,   231,   232,    44,   249,    44,    44,
      44,   102,   100,   255,   134,    44,   136,   137,    44,    44,
      44,   276,   277,    88,    44,   100,   266,    44,   345,   269,
      44,     5,   287,    44,    99,   275,   100,   224,   225,   226,
     227,   100,   565,   230,   271,   463,   100,    13,    58,    59,
      60,     5,   100,   100,    99,   282,   100,     5,   278,   286,
     280,   293,   100,   290,   278,   100,   280,   294,    44,   289,
     297,   100,     5,   293,   100,   302,   303,    95,    44,   293,
     294,     5,   100,   297,    58,    59,    60,   314,    12,    13,
      44,    16,    58,    59,    60,   313,    44,   317,    23,    44,
     314,    88,     5,    89,    58,    59,    60,     5,    89,    12,
      13,    44,    99,    99,    12,   342,   343,    12,    99,   346,
      44,   363,   439,   350,   366,    58,    59,    60,     5,   371,
      98,   654,   374,     5,   657,    12,    13,   379,     5,     5,
     382,   261,   262,    17,    69,   265,    13,    13,   268,    44,
     337,   338,   339,   340,   394,    58,    59,    60,   398,   399,
      58,    59,    60,   403,    93,    94,     5,    44,   355,   409,
      12,   411,     5,    12,   429,    88,   557,    44,    44,   406,
      13,    58,    59,    60,    88,     5,    58,    59,    60,    89,
       5,    58,    59,    60,   421,     8,    88,   417,   418,    99,
     723,   428,    44,   417,   418,    44,     5,   103,     5,   436,
     437,    93,    94,   440,    13,   442,    58,    59,    60,    58,
      59,    60,   436,   437,    44,    58,    59,    60,    15,    44,
       5,    66,   459,     5,   461,   462,   463,    12,   656,   481,
      12,   468,     5,   485,   471,    44,   473,    44,     9,   491,
      13,    38,    39,   495,    41,    42,    43,    44,    45,   501,
      95,    96,    97,   505,    89,   385,   104,     5,   388,    44,
      63,    89,    44,    56,    99,    13,    63,    64,    89,    62,
     520,    99,    89,   523,    71,    66,   526,    89,    99,   529,
     545,   546,    99,   533,   521,   535,   551,    99,    56,    89,
     527,   105,    89,    90,    62,    44,    93,    94,    95,    99,
     537,     4,    88,   540,    95,    96,    97,    10,   102,   106,
      44,   108,    15,    44,    17,    44,    19,    20,   555,    22,
      44,   712,    25,   560,    58,    59,    60,    89,   565,    58,
      59,    60,    16,     5,    18,    38,    39,    99,    41,    42,
      43,    44,    45,   580,    47,    89,    89,    89,    51,    52,
      53,    54,    89,    89,    89,    99,    99,    99,     5,    44,
      63,    64,    99,    99,    99,    12,    13,    70,    71,    72,
      73,   636,     5,    17,    44,   640,    20,   614,     5,   644,
     645,   646,   619,    44,   621,    88,    89,    90,     5,   626,
      93,    94,    95,   630,    44,    16,   633,    18,     5,    44,
      89,     5,   639,   106,    99,   108,    99,    88,    88,    21,
      88,    48,    88,   650,   651,   107,     8,   654,   100,   656,
     657,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,   109,     9,    88,    21,    10,   103,   703,   704,
     104,    44,   105,    44,    99,   682,    44,   100,   685,    44,
      55,    44,   689,    44,     4,   692,     6,    44,   695,    44,
      10,   698,    88,    88,    44,    15,    88,    17,    88,    19,
      20,   101,    22,    88,    88,    25,    16,    88,    88,   716,
     745,   746,   719,   107,   100,   722,   723,   100,    38,    39,
      99,    41,    42,    43,    44,    45,   101,    47,    88,    99,
      10,    51,    52,    53,    54,    15,   100,    16,    44,    88,
      99,    99,   749,    63,    64,   752,    99,    21,   100,   100,
      70,    71,    72,    73,    99,    88,    99,    99,    38,    39,
      88,    41,    42,    43,    44,    45,    10,    88,    88,    89,
      90,    15,    99,    93,    94,    95,   100,    88,   100,    44,
      99,    99,    99,    63,    64,   100,   106,    99,   108,    44,
      99,    71,   100,   100,    38,    39,    40,    41,    42,    43,
      44,    45,    99,    99,    99,    99,    10,   100,   100,    89,
      90,    15,    44,    93,    94,    44,    44,    44,    99,    63,
      64,    99,    99,    48,    99,    88,   106,    71,   108,   109,
      99,    99,    88,   100,    38,    39,    40,    41,    42,    43,
      44,    45,    88,    88,   101,    89,    90,    10,    88,    93,
      94,    95,    15,   100,    16,    44,   100,    99,    99,    63,
      64,    99,   106,    99,   108,   100,    99,    71,    99,    88,
     100,   185,   307,    99,     0,    38,    39,    99,    41,    42,
      43,    44,    45,   100,    99,    89,    90,    10,    99,    93,
      94,    95,    15,   100,    99,   154,   100,    99,   422,   100,
      63,    64,   106,    99,   108,    99,    99,    99,    71,    99,
     210,    99,    99,    99,    99,    38,    39,    99,    41,    42,
      43,    44,    45,    99,    99,    99,    89,    90,    10,    99,
      93,    94,    95,    15,    99,    99,    70,   100,    99,    99,
      63,    64,    99,   106,    99,   108,    99,    99,    71,    99,
      99,    99,    99,    99,    62,   431,    38,    39,   234,    41,
      42,    43,    44,    45,    10,   144,    89,    90,   159,    15,
      93,    94,    95,    36,   570,   747,    -1,    -1,    -1,    -1,
     271,    63,    64,   106,   107,   108,    -1,    -1,    -1,    71,
      -1,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      10,    -1,    -1,    -1,    -1,    15,    88,    89,    90,    -1,
      -1,    93,    94,    95,    -1,    -1,    -1,    63,    64,    -1,
      -1,    -1,    -1,    -1,   106,    71,   108,    -1,    38,    39,
      -1,    41,    42,    43,    44,    45,    10,    -1,    -1,    -1,
      -1,    15,    -1,    89,    90,    -1,    -1,    93,    94,    95,
      -1,    -1,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,
     106,    71,   108,    -1,    38,    39,    -1,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    10,    -1,    -1,    89,
      90,    15,    -1,    93,    94,    95,    -1,    -1,    -1,    63,
      64,    -1,    -1,    -1,    -1,    -1,   106,    71,   108,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    89,    90,    10,    -1,    93,
      94,    -1,    15,    -1,    -1,    99,    -1,    -1,    -1,    63,
      64,    -1,   106,    -1,   108,    -1,    -1,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    10,    -1,    89,    90,    -1,    15,    93,
      94,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
      63,    64,   106,    -1,   108,    -1,    -1,    -1,    71,    -1,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    10,
      -1,    -1,    -1,    -1,    15,    -1,    89,    90,    -1,    -1,
      93,    94,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,
      -1,    -1,    -1,   106,    71,   108,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    10,    -1,    -1,    -1,    -1,
      15,    -1,    89,    90,    -1,    -1,    93,    94,    -1,    -1,
      -1,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,   106,
      71,   108,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    10,    -1,    -1,    -1,    -1,    15,    -1,    89,    90,
      -1,    -1,    93,    94,    -1,    -1,    -1,    -1,    63,    64,
      -1,    -1,    -1,    -1,    -1,   106,    71,   108,    -1,    38,
      39,    -1,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    15,    -1,    89,    90,    -1,    -1,    93,    94,
      -1,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,    -1,
      -1,   106,    71,   108,    -1,    38,    39,    -1,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    90,    -1,    -1,    93,    94,    -1,    -1,    -1,    -1,
      63,    64,    -1,    -1,    -1,    -1,    -1,   106,    71,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    90,    -1,    -1,
      93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,   108
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     4,     5,    12,    13,    58,    59,    60,   111,   112,
     113,   126,   134,   135,   198,   199,    44,   137,   138,   139,
      44,     5,    13,   126,     5,    12,   126,     0,     3,     5,
      12,    13,    98,   113,     6,    10,    15,    17,    19,    20,
      22,    25,    38,    39,    41,    42,    43,    44,    45,    47,
      51,    52,    53,    54,    63,    64,    70,    71,    72,    73,
      88,    89,    90,    93,    94,    95,   106,   108,   114,   115,
     117,   118,   119,   120,   122,   123,   124,   127,   128,   129,
     130,   131,   132,   133,   134,   142,   143,   144,   146,   147,
     148,   149,   152,   155,   156,   157,   159,   161,   162,   164,
     166,   168,   170,   172,   174,   176,   178,   179,   181,   182,
     183,   102,   140,    88,   136,    48,    89,    99,    44,     5,
     126,     5,    13,    44,     5,   126,     5,    12,    44,     5,
      13,     5,    12,   113,    15,   162,    12,    13,    44,   126,
     198,   157,   157,   166,   168,   192,    99,    44,   153,   157,
     192,   157,   194,   192,    44,   157,   166,   100,   157,   166,
     185,   107,   185,   179,   179,   168,   179,   109,   157,   197,
     156,   155,    98,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    55,   101,   121,   125,    88,   123,
       6,    88,   124,    17,     8,   158,     9,   160,    88,   124,
      10,    11,    21,    37,    50,    65,    67,    68,    91,    92,
     163,   165,   103,   167,   104,   169,   105,   171,    56,    62,
     173,    93,    94,   175,    66,    95,    96,    97,   177,    63,
      40,    89,    90,   102,   180,   186,    44,   102,   138,    88,
      44,   100,   137,    89,    99,    44,     5,    44,     5,    89,
      99,    44,     5,    44,     5,    89,    99,    44,     5,    44,
       5,    12,    13,    44,   126,    13,    44,   126,    12,    44,
     126,    89,   116,    12,    13,    44,    99,    99,    88,   191,
      88,   191,    21,   156,    88,   141,    88,    99,   151,    48,
      88,   193,   141,    20,    88,   184,   208,    88,   184,   208,
     100,   107,    88,    99,   196,   208,   109,   122,   194,   159,
     161,     8,   162,     9,    88,    21,    10,   165,   168,   170,
     103,   172,   104,   174,   105,   176,   176,    56,    62,   178,
     178,    93,    94,   179,   179,   179,   179,    66,    95,    96,
      97,   179,    40,    95,   100,   157,   200,   202,   205,   206,
      99,   157,   188,   189,    44,    40,   186,    44,   138,    99,
     100,   100,   137,    89,    99,    44,    89,    99,    44,   100,
     137,    89,    99,    44,    89,    99,    44,   100,   137,    89,
      99,    44,    89,    99,    44,    13,    44,   126,    12,    44,
     126,    12,    13,    44,    44,   126,   116,    13,    44,    44,
     126,   116,    12,    44,   100,   202,    24,    99,    13,    44,
      12,    44,   116,   156,   156,   166,   168,    88,    88,   194,
      23,    69,   150,   154,    44,    88,   153,   156,    88,    99,
     168,   157,    88,   192,   157,   166,    88,    88,   157,   157,
      88,   121,    16,   161,   162,   168,   170,   172,   174,   176,
     176,   178,   178,   179,   179,   179,   179,   157,   157,   101,
     208,    40,    95,   204,   205,   206,   100,    88,    99,   157,
     190,    99,   107,    88,   187,   179,    99,    99,   100,   100,
     137,    89,    99,   100,   137,    89,    99,    99,   100,   100,
     137,    89,    99,   100,   137,    89,    99,    99,   100,   100,
     137,    89,    99,   100,   137,    89,    99,    44,   126,    13,
      44,    44,   126,    12,    44,    13,    44,    12,    44,   116,
      44,    24,    99,    44,   116,   116,    44,    24,    99,    44,
     116,   100,   157,    44,   116,    44,   116,    24,    99,    16,
      18,   145,    16,   166,   168,    99,    99,   157,    16,    23,
     154,    99,    44,   153,   156,    88,   193,    21,   157,   166,
      88,   195,   208,   157,   157,    88,   201,   203,   157,   157,
     157,   157,   205,    88,    88,   157,   190,   157,   190,   189,
      88,    99,    99,   100,   100,   137,    99,   100,   100,   137,
      99,    99,   100,   100,   137,    99,   100,   100,   137,    99,
      99,   100,   100,   137,    99,   100,   100,   137,    44,    44,
      44,    44,    44,    44,    24,    99,   116,   157,   116,    24,
      99,    24,    99,   116,   157,   116,    24,    99,    99,   116,
      24,    99,   116,    24,    99,   157,    99,   157,    16,    18,
      99,   156,   156,    48,    99,    99,    99,   156,   159,   157,
      88,    40,   205,   206,    88,   203,    88,    88,   201,   203,
      88,   190,   189,    99,    99,   100,    99,    99,   100,    99,
      99,   100,    99,    99,   100,    99,    99,   100,    99,    99,
     100,   157,    24,    99,    99,    24,    99,   157,   157,    24,
      99,    99,    24,    99,   157,    24,    99,   157,    24,    99,
     157,    99,   156,    99,    99,   157,   156,    16,    44,   156,
     156,   156,    17,   207,   208,   209,    99,   157,   157,    40,
     206,   205,    40,    88,   203,    99,    99,    99,    99,    99,
      99,    99,   157,   157,    99,    99,   157,   157,    99,   157,
      99,   157,    99,   156,   156,    99,    99,   159,   157,    99,
     157,   157,    40,    99,    99,    99,    99,    99,    99,   156,
     156,   207,   157,   157
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
#line 109 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"file_input: program ENDMARKER\n";
										p->check_inhertance_list();
										if(!p->errRecovery->errQ->isEmpty())
												p->errRecovery->printErrQueue();
										p->print_symbol();
										Streams::verbose().flush();	
								;}
    break;

  case 3:
#line 118 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"program : import_stmt ';' temp2 \n";;}
    break;

  case 4:
#line 119 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"program : temp2 \n";;}
    break;

  case 5:
#line 123 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"temp2: classdef temp2\n";;}
    break;

  case 6:
#line 124 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"temp2: classdef \n";;}
    break;

  case 7:
#line 138 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
							testfunction = p->finishFunctionDeclaration(testfunction,linefunc,colmfunc);
							parameters.clear();
							linefunc=0;colmfunc=0;
							Streams::verbose() <<"funcdef:	funcheader suite \n";
						  ;}
    break;

  case 8:
#line 145 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader:	DEF  NAME parameters ARROW test ':'  \n";;}
    break;

  case 9:
#line 146 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader:  DEF access NAME parameters ARROW test ':'  \n";;}
    break;

  case 10:
#line 147 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
											testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,ff, (yyvsp[-2].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
											Streams::verbose() <<"funcheader: DEF NAME parameters ':' \n";
											
									   ;}
    break;

  case 11:
#line 156 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    { 
												testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,ff, (yyvsp[-2].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
												pp=true;ff=false;ss=false;pro=false;
												parameters.clear();
												linefunc=yylval.r.lineNum;
												colmfunc=yylval.r.colNum;
												Streams::verbose() <<"funcheader: DEF access NAME parameters ':' \n";
											  ;}
    break;

  case 12:
#line 164 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC NAME parameters ARROW test ':' \n";;}
    break;

  case 13:
#line 165 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL NAME parameters ARROW test ':' \n";;}
    break;

  case 14:
#line 166 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
												testfunction = p->createTypeFunctionHeader(t,true,pp,pro,ff, (yyvsp[-2].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
												pp=true;ff=false;ss=false;pro=false;
												parameters.clear();
												linefunc=yylval.r.lineNum;
												colmfunc=yylval.r.colNum;
												Streams::verbose() <<"funcheader: DEF STATIC NAME parameters ':' \n";
											 ;}
    break;

  case 15:
#line 174 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
												testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,true, (yyvsp[-2].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
												pp=true;ff=false;ss=false;pro=false;
												parameters.clear();
												linefunc=yylval.r.lineNum;
												colmfunc=yylval.r.colNum;
												Streams::verbose() <<"funcheader: DEF FINAL NAME parameters ':' \n";
											 ;}
    break;

  case 16:
#line 182 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC FINAL NAME parameters ARROW test ':' \n";;}
    break;

  case 17:
#line 183 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL STATIC NAME parameters ARROW test ':'  \n";;}
    break;

  case 18:
#line 184 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
														testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (yyvsp[-2].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
														pp=true;ff=false;ss=false;pro=false;
														parameters.clear();
														linefunc=yylval.r.lineNum;
														colmfunc=yylval.r.colNum;
														Streams::verbose() <<"funcheader: DEF STATIC FINAL NAME parameters ':'  \n";
												    ;}
    break;

  case 19:
#line 192 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
													testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (yyvsp[-2].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
													pp=true;ff=false;ss=false;pro=false;
													parameters.clear();
													linefunc=yylval.r.lineNum;
													colmfunc=yylval.r.colNum;
													Streams::verbose() <<"funcheader: DEF FINAL STATIC NAME parameters ':'  \n";
													;}
    break;

  case 20:
#line 200 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
																testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,true, (yyvsp[-4].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
																pp=true;ff=false;ss=false;pro=false;
																parameters.clear();
																linefunc=yylval.r.lineNum;
																colmfunc=yylval.r.colNum;
																Streams::verbose() <<"funcheader: DEF FINAL access NAME parameters ARROW test ':'  \n";
															  ;}
    break;

  case 21:
#line 208 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC access NAME parameters ARROW test ':'  \n";;}
    break;

  case 22:
#line 209 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
														testfunction = p->createTypeFunctionHeader(t,true,pp,pro,ff, (yyvsp[-2].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
														pp=true;ff=false;ss=false;pro=false;
														parameters.clear();
														linefunc=yylval.r.lineNum;
														colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF STATIC access NAME parameters ':'  \n";
													;}
    break;

  case 23:
#line 216 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
														testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,true, (yyvsp[-2].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
														pp=true;ff=false;ss=false;pro=false;
														parameters.clear();
														linefunc=yylval.r.lineNum;
														colmfunc=yylval.r.colNum;
														Streams::verbose() <<"funcheader: DEF STATIC access NAME parameters ':' ";
													;}
    break;

  case 24:
#line 224 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC FINAL access NAME parameters ARROW test ':'  \n";;}
    break;

  case 25:
#line 225 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL STATIC access NAME parameters ARROW test ':'  \n";;}
    break;

  case 26:
#line 226 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (yyvsp[-2].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
															pp=true;ff=false;ss=false;pro=false;
															parameters.clear();
															linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;
															Streams::verbose() <<"funcheader: DEF STATIC FINAL access NAME parameters ':'  \n";
														  ;}
    break;

  case 27:
#line 234 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (yyvsp[-2].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
															pp=true;ff=false;ss=false;pro=false;
															parameters.clear();
															linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF FINAL STATIC access NAME parameters ':'  \n";
														  ;}
    break;

  case 28:
#line 241 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access STATIC NAME parameters ARROW test ':'  \n";;}
    break;

  case 29:
#line 242 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access FINAL NAME parameters ARROW test ':'  \n";;}
    break;

  case 30:
#line 243 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
														testfunction = p->createTypeFunctionHeader(t,true,pp,pro,ff, (yyvsp[-2].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
														pp=true;ff=false;ss=false;pro=false;
														parameters.clear();
														linefunc=yylval.r.lineNum;
														colmfunc=yylval.r.colNum;
														Streams::verbose() <<"funcheader: DEF access STATIC NAME parameters ':'  \n";
													;}
    break;

  case 31:
#line 251 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
														testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,true, (yyvsp[-2].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
														pp=true;ff=false;ss=false;pro=false;
														parameters.clear();
														linefunc=yylval.r.lineNum;
														colmfunc=yylval.r.colNum;
														Streams::verbose() <<"funcheader: DEF access FINAL NAME parameters ':'  \n";
													;}
    break;

  case 32:
#line 259 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access STATIC FINAL NAME parameters ARROW test ':'  \n";;}
    break;

  case 33:
#line 260 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access FINAL STATIC NAME parameters ARROW test ':'  \n";;}
    break;

  case 34:
#line 261 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (yyvsp[-2].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
															pp=true;ff=false;ss=false;pro=false;
															parameters.clear();
															linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;
															Streams::verbose() <<"funcheader: DEF access STATIC FINAL NAME parameters ':'  \n";
			   											  ;}
    break;

  case 35:
#line 269 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (yyvsp[-2].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
															pp=true;ff=false;ss=false;pro=false;
															parameters.clear();
															linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF access FINAL STATIC NAME parameters ':'  \n";
			  											  ;}
    break;

  case 36:
#line 276 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC access FINAL NAME parameters ARROW test ':'  \n";;}
    break;

  case 37:
#line 277 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL access STATIC NAME parameters ARROW test ':'  \n";;}
    break;

  case 38:
#line 278 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (yyvsp[-2].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
															pp=true;ff=false;ss=false;pro=false;
															parameters.clear();
															linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF STATIC access FINAL NAME parameters ':'  \n";
			  											  ;}
    break;

  case 39:
#line 285 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (yyvsp[-2].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
															pp=true;ff=false;ss=false;pro=false;
															parameters.clear();
															linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF FINAL access STATIC NAME parameters ':'  \n";
														  ;}
    break;

  case 40:
#line 294 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"parameters:'(' arglist ')'\n";;}
    break;

  case 41:
#line 295 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"parameters:'(' ')'\n";;}
    break;

  case 42:
#line 298 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"stmt:	simple_stmt \n";;}
    break;

  case 43:
#line 299 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"stmt: compound_stmt\n";;}
    break;

  case 44:
#line 301 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"simple_stmt: small_stmt ';' \n";;}
    break;

  case 45:
#line 303 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: expr_stmt \n";;}
    break;

  case 46:
#line 304 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: del_stmt \n";;}
    break;

  case 47:
#line 305 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: pass_stmt \n";;}
    break;

  case 48:
#line 306 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: flow_stmt \n";;}
    break;

  case 49:
#line 307 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: import_stmt \n";;}
    break;

  case 50:
#line 308 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: global_stmt \n";;}
    break;

  case 51:
#line 309 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: nonlocal_stmt \n";;}
    break;

  case 52:
#line 310 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: print_stmt \n";;}
    break;

  case 53:
#line 313 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"expr_stmt:	testlist_star_expr augassign testlist \n";;}
    break;

  case 54:
#line 314 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"expr_stmt: testlist_star_expr \n";;}
    break;

  case 55:
#line 315 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"expr_stmt: testlist_star_expr right_testlist \n";;}
    break;

  case 56:
#line 318 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"right_testlist: '=' testlist_star_expr right_testlist \n";;}
    break;

  case 57:
#line 319 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"right_testlist: '=' testlist_star_expr \n";;}
    break;

  case 58:
#line 322 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: comma_test_star_seqJ \n";;}
    break;

  case 59:
#line 323 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: comma_test_star_seqJ ',' \n";;}
    break;

  case 60:
#line 324 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"',' \n";;}
    break;

  case 61:
#line 325 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: test comma_test_star_seqJ \n";;}
    break;

  case 62:
#line 326 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: test \n";;}
    break;

  case 63:
#line 327 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: star_expr comma_test_star_seqJ ',' \n";;}
    break;

  case 64:
#line 328 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: star_expr ',' \n";;}
    break;

  case 65:
#line 331 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star : ',' test \n";;}
    break;

  case 66:
#line 332 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star : ',' star_expr \n";;}
    break;

  case 67:
#line 335 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seqJ : comma_test_star_seqJ comma_test_star \n";;}
    break;

  case 68:
#line 336 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seqJ : comma_test_star \n";;}
    break;

  case 69:
#line 338 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	PLUS_EQUAL \n";;}
    break;

  case 70:
#line 339 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MINUS_EQUAL \n";;}
    break;

  case 71:
#line 340 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	STAR_EQUAL \n";;}
    break;

  case 72:
#line 341 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	DIV_EQUAL \n";;}
    break;

  case 73:
#line 342 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MOD_EQUAL \n";;}
    break;

  case 74:
#line 343 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	AND_EQUAL \n";;}
    break;

  case 75:
#line 344 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	OR_EQUAL \n";;}
    break;

  case 76:
#line 345 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	SHAPOO_EQUAL \n";;}
    break;

  case 77:
#line 346 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	LESS_THAN_2_EQUAL \n";;}
    break;

  case 78:
#line 347 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MORE_THAN_2_EQUAL \n";;}
    break;

  case 79:
#line 348 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	STAR_2_EQUAL \n";;}
    break;

  case 80:
#line 349 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	DIV_2_EQUAL \n";;}
    break;

  case 81:
#line 352 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose()<<"access_modef: PRIVATE\n";acc_mod="private";pp=true;;}
    break;

  case 82:
#line 353 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {pp=false;Streams::verbose()<<"access_modef:	PUBLIC\n";acc_mod="public";pp=false;;}
    break;

  case 83:
#line 354 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {pro=true;Streams::verbose()<<"access_modef:	PROTECTED\n";acc_mod="protected";;}
    break;

  case 84:
#line 356 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"print_stmt: PRINT exprlist \n";;}
    break;

  case 85:
#line 357 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"del_stmt:   DEL exprlist \n";;}
    break;

  case 86:
#line 360 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"pass_stmt:	PASS \n";;}
    break;

  case 87:
#line 363 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"flow_stmt:	break_stmt \n";;}
    break;

  case 88:
#line 364 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"flow_stmt: continue_stmt\n";;}
    break;

  case 89:
#line 365 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"flow_stmt: return_stmt\n";;}
    break;

  case 90:
#line 368 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"break_stmt: BREAK \n";;}
    break;

  case 91:
#line 371 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"continue_stmt:	CONTINUE \n";;}
    break;

  case 92:
#line 374 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"return_stmt:	RETURN testlist \n";;}
    break;

  case 93:
#line 375 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"return_stmt:	RETURN \n";;}
    break;

  case 94:
#line 379 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"import_stmt: import_name \n";;}
    break;

  case 95:
#line 382 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"import_name: IMPORT dotted_as_names \n";;}
    break;

  case 96:
#line 385 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_dotted_as_name_seq: ',' dotted_as_name \n";;}
    break;

  case 97:
#line 386 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_dotted_as_name_seq: comma_dotted_as_name_seq ',' dotted_as_name \n";;}
    break;

  case 98:
#line 388 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
									Streams::verbose() <<"comma_dotted_as_name_seq: dotted_as_names: dotted_as_name \n";
									t_id=new char[10];
									strcpy(t_id,temp_id.c_str());
									inhertance_list.push_back(t_id);
									temp_id="";
								;}
    break;

  case 99:
#line 395 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
															Streams::verbose() <<"comma_dotted_as_name_seq: dotted_as_name comma_dotted_as_name_seq \n";
															t_id=new char[10];
															strcpy(t_id,temp_id.c_str());
															inhertance_list.push_back(t_id);
															temp_id="";
														  ;}
    break;

  case 100:
#line 405 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dotted_as_name: dotted_name \n";;}
    break;

  case 101:
#line 406 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dotted_as_name: dotted_name AS NAME\n";;}
    break;

  case 102:
#line 409 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dotted_name: NAME \n"; temp_id=temp_id+(yyvsp[0].r.strVal);;}
    break;

  case 103:
#line 410 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dotted_name: NAME dotted_name_seq \n";;}
    break;

  case 104:
#line 413 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"dotted_name_seq: '.' NAME \n";
							temp_id=temp_id+"."+(yyvsp[0].r.strVal);
						  ;}
    break;

  case 105:
#line 417 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
												Streams::verbose() <<"dotted_name_seq: dotted_name_seq '.' NAME \n";
												temp_id=temp_id+"."+(yyvsp[0].r.strVal);
						   				   ;}
    break;

  case 106:
#line 423 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_name_seq :	',' NAME \n";;}
    break;

  case 107:
#line 424 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_name_seq :	comma_name_seq ',' NAME \n";;}
    break;

  case 108:
#line 427 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"global_stmt: GLOBAL NAME \n";;}
    break;

  case 109:
#line 428 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"global_stmt: GLOBAL NAME comma_name_seq\n";;}
    break;

  case 110:
#line 431 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"nonlocal_stmt:	NONLOCAL NAME \n";;}
    break;

  case 111:
#line 432 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"nonlocal_stmt: NONLOCAL NAME comma_name_seq \n";;}
    break;

  case 112:
#line 435 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt:  if_stmt \n";;}
    break;

  case 113:
#line 436 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: while_stmt\n";;}
    break;

  case 114:
#line 437 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: for_stmt\n";;}
    break;

  case 115:
#line 438 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: try_stmt\n";;}
    break;

  case 116:
#line 439 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: with_stmt\n";;}
    break;

  case 117:
#line 440 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: funcdef\n";;}
    break;

  case 118:
#line 441 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: DEF classdef\n";;}
    break;

  case 119:
#line 444 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"elif_seq :  ELIF test ':' suite \n";;}
    break;

  case 120:
#line 445 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"elif_seq : elif_seq ELIF test ':' suite \n";;}
    break;

  case 121:
#line 448 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"if_stmt:	IF test ':' suite \n";;}
    break;

  case 122:
#line 449 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"if_stmt:	IF test ':' suite elif_seq \n";;}
    break;

  case 123:
#line 450 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"if_stmt:	IF test ':' suite ELSE ':' suite \n";;}
    break;

  case 124:
#line 451 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"if_stmt:	IF test ':' suite elif_seq ELSE ':' suite \n";;}
    break;

  case 125:
#line 454 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"while_stmt: WHILE test ':' suite \n";;}
    break;

  case 126:
#line 455 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"while_stmt:  WHILE test ':' suite ELSE ':' suite \n";;}
    break;

  case 127:
#line 458 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"for_stmt:   FOR exprlist IN testlist ':' suite \n";;}
    break;

  case 128:
#line 459 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"for_stmt:  FOR exprlist IN testlist ':' suite ELSE ':' suite\n";;}
    break;

  case 129:
#line 462 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<" try_stmt:   TRY ':' suite try_except_cla_seq\n";;}
    break;

  case 130:
#line 463 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<" try_stmt: TRY ':' suite try_except_cla_seq ELSE ':' suite\n";;}
    break;

  case 131:
#line 464 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"try_stmt:  TRY ':' suite try_except_cla_seq FINALLY ':' suite\n";;}
    break;

  case 132:
#line 465 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"try_stmt:  TRY ':' suite FINALLY ':' suite\n";;}
    break;

  case 133:
#line 468 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"try_except_cla_seq: except_clause ':' suite \n";;}
    break;

  case 134:
#line 469 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"try_except_cla_seq: try_except_cla_seq except_clause ':' suite\n";;}
    break;

  case 135:
#line 472 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"with_seq:	',' with_item \n";;}
    break;

  case 136:
#line 473 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"with_seq: with_seq ',' with_item\n";;}
    break;

  case 137:
#line 476 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"with_stmt:  WITH with_item ':' suite \n";;}
    break;

  case 138:
#line 477 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"with_stmt: WITH with_item with_seq ':' suite\n";;}
    break;

  case 139:
#line 480 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<" with_item:  test\n";;}
    break;

  case 140:
#line 481 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"with_item: test AS expr\n";;}
    break;

  case 141:
#line 484 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"except_clause:  EXCEPT \n";;}
    break;

  case 142:
#line 485 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"except_clause:  EXCEPT test\n";;}
    break;

  case 143:
#line 486 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"except_clause:  EXCEPT test AS NAME\n";;}
    break;

  case 144:
#line 489 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams:: verbose() <<"list_stmt : stmt\n";;}
    break;

  case 145:
#line 490 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams:: verbose() <<"list_stmt : stmt list_stmt\n";;}
    break;

  case 146:
#line 493 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"suite:	list_stmt END\n";;}
    break;

  case 147:
#line 494 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"suite:	END\n";;}
    break;

  case 148:
#line 497 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"test:	or_test\n";;}
    break;

  case 149:
#line 498 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_test IF or_test ELSE test\n";;}
    break;

  case 150:
#line 501 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_seq:	OR and_test \n";;}
    break;

  case 151:
#line 502 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_seq: or_seq OR and_test \n";;}
    break;

  case 152:
#line 505 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_test:	and_test\n";;}
    break;

  case 153:
#line 506 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_test:	and_test or_seq\n";;}
    break;

  case 154:
#line 509 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_seq: AND not_test \n";;}
    break;

  case 155:
#line 510 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_seq: and_seq AND not_test \n";;}
    break;

  case 156:
#line 513 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_test:	not_test\n";;}
    break;

  case 157:
#line 514 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_test: not_test and_seq \n";;}
    break;

  case 158:
#line 517 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"not_test:	NOT not_test\n";;}
    break;

  case 159:
#line 518 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"not_test:	comparison\n";;}
    break;

  case 160:
#line 521 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op_seq: comp_op expr \n";;}
    break;

  case 161:
#line 522 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op_seq: comp_op_seq comp_op expr \n";;}
    break;

  case 162:
#line 525 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comparison: expr\n";;}
    break;

  case 163:
#line 526 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comparison: expr comp_op_seq\n";;}
    break;

  case 164:
#line 529 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: '<' \n";;}
    break;

  case 165:
#line 530 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: '>' \n";;}
    break;

  case 166:
#line 531 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: EQUAL \n";;}
    break;

  case 167:
#line 532 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: MORE_OR_EQUAL \n";;}
    break;

  case 168:
#line 533 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: LESS_OR_EQUAL \n";;}
    break;

  case 169:
#line 534 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: MORE_LESS \n";;}
    break;

  case 170:
#line 535 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: NOT_EQUAL \n";;}
    break;

  case 171:
#line 536 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IN \n";;}
    break;

  case 172:
#line 537 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: NOT IN \n";;}
    break;

  case 173:
#line 538 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IS \n";;}
    break;

  case 174:
#line 539 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IS NOT \n";;}
    break;

  case 175:
#line 542 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"star_expr: '*' expr \n";;}
    break;

  case 176:
#line 545 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_xor_expr_seq: '|' xor_expr \n";;}
    break;

  case 177:
#line 546 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_xor_expr_seq: or_xor_expr_seq '|' xor_expr\n";;}
    break;

  case 178:
#line 548 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"expr: xor_expr\n";;}
    break;

  case 179:
#line 549 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"expr: xor_expr or_xor_expr_seq\n";;}
    break;

  case 180:
#line 552 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"sha_and_expr_seq: '^' and_expr \n";;}
    break;

  case 181:
#line 553 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"sha_and_expr_seq: sha_and_expr_seq '^' and_expr\n";;}
    break;

  case 182:
#line 556 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"xor_expr: and_expr\n";;}
    break;

  case 183:
#line 557 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"xor_expr: and_expr sha_and_expr_seq\n";;}
    break;

  case 184:
#line 560 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_shift_expr_seq: '&' shift_expr \n";;}
    break;

  case 185:
#line 561 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_shift_expr_seq: and_shift_expr_seq '&' shift_expr\n";;}
    break;

  case 186:
#line 564 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_expr: shift_expr\n";;}
    break;

  case 187:
#line 565 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_expr: shift_expr and_shift_expr_seq\n";;}
    break;

  case 188:
#line 568 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	LESS_THAN_2 arith_expr \n";;}
    break;

  case 189:
#line 569 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	MORE_THAN_2 arith_expr \n";;}
    break;

  case 190:
#line 570 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	arith_seq LESS_THAN_2 arith_expr \n";;}
    break;

  case 191:
#line 571 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	arith_seq MORE_THAN_2 arith_expr \n";;}
    break;

  case 192:
#line 574 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"shift_expr: arith_expr\n";;}
    break;

  case 193:
#line 575 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"shift_expr: arith_expr arith_seq\n";;}
    break;

  case 194:
#line 578 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : '+' term \n";;}
    break;

  case 195:
#line 579 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : '-' term \n";;}
    break;

  case 196:
#line 580 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : term_seq '+' term \n";;}
    break;

  case 197:
#line 581 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : term_seq '-' term \n";;}
    break;

  case 198:
#line 584 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arith_expr: term\n";;}
    break;

  case 199:
#line 585 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arith_expr: term term_seq\n";;}
    break;

  case 200:
#line 588 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '*' factor \n";;}
    break;

  case 201:
#line 589 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '/' factor \n";;}
    break;

  case 202:
#line 590 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '%' factor \n";;}
    break;

  case 203:
#line 591 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: DIV_2 factor \n";;}
    break;

  case 204:
#line 592 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '*' factor \n";;}
    break;

  case 205:
#line 593 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '/' factor \n";;}
    break;

  case 206:
#line 594 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '%' factor \n";;}
    break;

  case 207:
#line 595 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq DIV_2 factor \n";;}
    break;

  case 208:
#line 598 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"term: 	factor\n";;}
    break;

  case 209:
#line 599 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"term: 	factor factor_seq\n";;}
    break;

  case 210:
#line 602 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor: '+' factor \n";;}
    break;

  case 211:
#line 603 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor: '-' factor \n";;}
    break;

  case 212:
#line 604 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor: '~' factor \n";;}
    break;

  case 213:
#line 605 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor: power\n";;}
    break;

  case 214:
#line 608 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"trailer_seq: trailer \n";;}
    break;

  case 215:
#line 609 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"trailer_seq: trailer_seq trailer \n";;}
    break;

  case 216:
#line 612 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"power:	atom\n";;}
    break;

  case 217:
#line 613 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"power: atom trailer_seq \n";;}
    break;

  case 218:
#line 614 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"power: atom trailer_seq STAR_2 factor \n";;}
    break;

  case 219:
#line 615 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"power: atom STAR_2 factor \n";;}
    break;

  case 220:
#line 618 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"str_seq:	STRING \n";;}
    break;

  case 221:
#line 619 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"str_seq:	str_seq STRING \n";;}
    break;

  case 222:
#line 622 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'(' ')' \n";;}
    break;

  case 223:
#line 623 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'(' testlist_comp ')' \n";;}
    break;

  case 224:
#line 624 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'[' ']' \n";;}
    break;

  case 225:
#line 625 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' '}' \n";;}
    break;

  case 226:
#line 626 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' '}' \n";;}
    break;

  case 227:
#line 627 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' dictorsetmaker '}' \n";;}
    break;

  case 228:
#line 628 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    { Streams::verbose() <<"atom: NAME\n";;}
    break;

  case 229:
#line 629 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF NAME\n";;}
    break;

  case 230:
#line 630 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access NAME\n";;}
    break;

  case 231:
#line 631 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC NAME\n";;}
    break;

  case 232:
#line 632 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL NAME\n";;}
    break;

  case 233:
#line 633 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC FINAL NAME\n";;}
    break;

  case 234:
#line 634 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL STATIC NAME\n";;}
    break;

  case 235:
#line 635 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC access NAME\n";;}
    break;

  case 236:
#line 636 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL access NAME\n";;}
    break;

  case 237:
#line 637 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC FINAL access NAME\n";;}
    break;

  case 238:
#line 638 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL STATIC access NAME\n";;}
    break;

  case 239:
#line 639 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access STATIC NAME\n";;}
    break;

  case 240:
#line 640 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access FINAL NAME\n";;}
    break;

  case 241:
#line 641 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access STATIC FINAL NAME\n";;}
    break;

  case 242:
#line 642 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access FINAL STATIC NAME\n";;}
    break;

  case 243:
#line 643 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC access FINAL NAME\n";;}
    break;

  case 244:
#line 644 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL access STATIC NAME\n";;}
    break;

  case 245:
#line 645 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_INT\n";;}
    break;

  case 246:
#line 646 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_FLOAT\n";;}
    break;

  case 247:
#line 647 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_FLOAT\n";;}
    break;

  case 248:
#line 648 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: CHAR_VALUE\n";;}
    break;

  case 249:
#line 649 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: str_seq\n";;}
    break;

  case 250:
#line 650 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DOT_3\n";;}
    break;

  case 251:
#line 651 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: NONE\n";;}
    break;

  case 252:
#line 652 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: TRUE\n";;}
    break;

  case 253:
#line 653 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: FALSE\n";;}
    break;

  case 254:
#line 656 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: ',' test\n";;}
    break;

  case 255:
#line 657 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: ',' star_expr\n";;}
    break;

  case 256:
#line 658 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: comma_test_star_seq ',' test\n";;}
    break;

  case 257:
#line 659 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: comma_test_star_seq ',' star_expr\n";;}
    break;

  case 258:
#line 662 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test comp_for\n";;}
    break;

  case 259:
#line 663 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test\n";;}
    break;

  case 260:
#line 664 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test   comma_test_star_seq\n";;}
    break;

  case 261:
#line 665 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";;}
    break;

  case 262:
#line 666 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";;}
    break;

  case 263:
#line 667 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";;}
    break;

  case 264:
#line 668 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";;}
    break;

  case 265:
#line 669 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";;}
    break;

  case 266:
#line 670 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";;}
    break;

  case 267:
#line 671 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";;}
    break;

  case 268:
#line 674 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"trailer:	'('  ')'\n";;}
    break;

  case 269:
#line 675 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"trailer:	'(' arglist ')'\n";;}
    break;

  case 270:
#line 676 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"trailer:	'[' subscriptlist ']'\n";;}
    break;

  case 271:
#line 677 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"trailer:	'.' NAME\n";;}
    break;

  case 272:
#line 680 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_subscript_seq: ',' subscript\n";;}
    break;

  case 273:
#line 681 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_subscript_seq: comma_subscript_seq ',' subscript\n";;}
    break;

  case 274:
#line 684 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript\n";;}
    break;

  case 275:
#line 685 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript comma_subscript_seq\n";;}
    break;

  case 276:
#line 686 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript  ','\n";;}
    break;

  case 277:
#line 687 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript comma_subscript_seq ','\n";;}
    break;

  case 278:
#line 690 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test\n";;}
    break;

  case 279:
#line 691 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':'\n";;}
    break;

  case 280:
#line 692 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript: test ':'\n";;}
    break;

  case 281:
#line 693 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' test\n";;}
    break;

  case 282:
#line 694 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' sliceop\n";;}
    break;

  case 283:
#line 695 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' test sliceop\n";;}
    break;

  case 284:
#line 696 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' test\n";;}
    break;

  case 285:
#line 697 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' sliceop\n";;}
    break;

  case 286:
#line 698 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' test sliceop\n";;}
    break;

  case 287:
#line 701 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"sliceop: ':'\n";;}
    break;

  case 288:
#line 702 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"sliceop: ':' test\n";;}
    break;

  case 289:
#line 705 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	',' expr \n";;}
    break;

  case 290:
#line 706 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	',' star_expr \n";;}
    break;

  case 291:
#line 707 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	comma_expr_star_seq ',' expr \n";;}
    break;

  case 292:
#line 708 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	comma_expr_star_seq ',' star_expr \n";;}
    break;

  case 293:
#line 711 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr \n";;}
    break;

  case 294:
#line 712 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr comma_expr_star_seq \n";;}
    break;

  case 295:
#line 713 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr \n";;}
    break;

  case 296:
#line 714 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr comma_expr_star_seq \n";;}
    break;

  case 297:
#line 715 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr ',' \n";;}
    break;

  case 298:
#line 716 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr comma_expr_star_seq ',' \n";;}
    break;

  case 299:
#line 717 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr ',' \n";;}
    break;

  case 300:
#line 718 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr  comma_expr_star_seq ',' \n";;}
    break;

  case 301:
#line 721 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test: ',' test \n";;}
    break;

  case 302:
#line 722 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"',' test comma_test \n";;}
    break;

  case 303:
#line 725 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	test \n";;}
    break;

  case 304:
#line 726 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	test comma_test \n";;}
    break;

  case 305:
#line 727 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	 test ','\n";;}
    break;

  case 306:
#line 728 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	 test comma_test ','\n";;}
    break;

  case 307:
#line 731 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_colon_test_seq:  ',' test ':' test \n";;}
    break;

  case 308:
#line 732 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_colon_test_seq: comma_test_colon_test_seq ',' test ':' test\n";;}
    break;

  case 309:
#line 734 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_seq: ',' test \n";;}
    break;

  case 310:
#line 735 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_seq: comma_test_seq ',' test \n";;}
    break;

  case 311:
#line 738 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comp_for \n";;}
    break;

  case 312:
#line 739 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test \n";;}
    break;

  case 313:
#line 740 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test ',' \n";;}
    break;

  case 314:
#line 741 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comma_test_colon_test_seq \n";;}
    break;

  case 315:
#line 742 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comma_test_colon_test_seq ','\n";;}
    break;

  case 316:
#line 743 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test comp_for\n";;}
    break;

  case 317:
#line 744 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test\n";;}
    break;

  case 318:
#line 745 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ','\n";;}
    break;

  case 319:
#line 746 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ','\n";;}
    break;

  case 320:
#line 747 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test comma_test_seq ','\n";;}
    break;

  case 321:
#line 749 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
								Streams::verbose() <<"classdef: classheader suite\n";
								(yyval.type)=p->finishTypeDeclaration(t);
							;}
    break;

  case 322:
#line 754 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
								Streams::verbose() << "class_h: CLASS ID \n";
								colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[-1].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
							 ;}
    break;

  case 323:
#line 761 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
									Streams::verbose() << "class_h: access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
									(yyval.type)=p->createType((yyvsp[-1].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
									t=(yyval.type);
									inhertance_list.clear();
									acc_mod="";
								  ;}
    break;

  case 324:
#line 768 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
									Streams::verbose() << "class_h: STATIC CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
									(yyval.type)=p->createType((yyvsp[-1].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
									t=(yyval.type);
									inhertance_list.clear();
									acc_mod="";
								  ;}
    break;

  case 325:
#line 775 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
									Streams::verbose() << "class_h: FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
									(yyval.type)=p->createType((yyvsp[-1].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
									t=(yyval.type);
									inhertance_list.clear();
									acc_mod="";
								 ;}
    break;

  case 326:
#line 782 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
											(yyval.type)=p->createType((yyvsp[-1].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
											t=(yyval.type);
											inhertance_list.clear();
											acc_mod="";
										 ;}
    break;

  case 327:
#line 789 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
												Streams::verbose() << "class_h: STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
												(yyval.type)=p->createType((yyvsp[-1].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
												t=(yyval.type);
												inhertance_list.clear();
												acc_mod="";
											;}
    break;

  case 328:
#line 796 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
											(yyval.type)=p->createType((yyvsp[-1].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
											t=(yyval.type);
											inhertance_list.clear();
											acc_mod="";
										;}
    break;

  case 329:
#line 803 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: STATIC access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
											(yyval.type)=p->createType((yyvsp[-1].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
											t=(yyval.type);
											inhertance_list.clear();
											acc_mod="";
										 ;}
    break;

  case 330:
#line 810 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-1].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											   ;}
    break;

  case 331:
#line 817 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-1].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											   ;}
    break;

  case 332:
#line 824 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: access_modef STATIC CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
											(yyval.type)=p->createType((yyvsp[-1].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
											t=(yyval.type);
											inhertance_list.clear();
											acc_mod="";
										 ;}
    break;

  case 333:
#line 831 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: access_modef FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
											(yyval.type)=p->createType((yyvsp[-1].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
											t=(yyval.type);
											inhertance_list.clear();
											acc_mod="";
										;}
    break;

  case 334:
#line 838 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-1].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											   ;}
    break;

  case 335:
#line 845 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-1].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											   ;}
    break;

  case 336:
#line 852 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-1].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											   ;}
    break;

  case 337:
#line 859 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-1].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
												;}
    break;

  case 338:
#line 866 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
										Streams::verbose() << "class_h: CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-1].r.colNum)+1)); 
										(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
										t=(yyval.type);
										inhertance_list.clear();
										temp_id="";
										acc_mod="";
									;}
    break;

  case 339:
#line 874 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
											(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
											t=(yyval.type);
											inhertance_list.clear();
											acc_mod="";
										  ;}
    break;

  case 340:
#line 881 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
											(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
											t=(yyval.type);
											inhertance_list.clear();
											acc_mod="";
										  ;}
    break;

  case 341:
#line 888 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
											(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
											t=(yyval.type);
											inhertance_list.clear();
											acc_mod="";
										 ;}
    break;

  case 342:
#line 895 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
												;}
    break;

  case 343:
#line 902 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
												;}
    break;

  case 344:
#line 909 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
												  ;}
    break;

  case 345:
#line 916 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
												;}
    break;

  case 346:
#line 923 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-4].r.colNum)+1)); 
															(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
															t=(yyval.type);
															inhertance_list.clear();
															acc_mod="";
														;}
    break;

  case 347:
#line 930 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-4].r.colNum)+1)); 
															(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
															t=(yyval.type);
															inhertance_list.clear();
															acc_mod="";
														;}
    break;

  case 348:
#line 937 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
												;}
    break;

  case 349:
#line 944 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
												  ;}
    break;

  case 350:
#line 951 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-4].r.colNum)+1)); 
															(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
															t=(yyval.type);
															inhertance_list.clear();
															acc_mod="";
														 ;}
    break;

  case 351:
#line 958 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-4].r.colNum)+1)); 
															(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
															t=(yyval.type);
															inhertance_list.clear();
															acc_mod="";
														;}
    break;

  case 352:
#line 965 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-4].r.colNum)+1)); 
															(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
															t=(yyval.type);
															inhertance_list.clear();
															acc_mod="";
													 	 ;}
    break;

  case 353:
#line 972 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-4].r.colNum)+1)); 
															(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
															t=(yyval.type);
															inhertance_list.clear();
															acc_mod="";
														 ;}
    break;

  case 354:
#line 979 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
														Streams::verbose() << "class_h: CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-1].r.colNum)+1));
														(yyval.type)=p->createType((yyvsp[-4].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
														t=(yyval.type);
														inhertance_list.clear();
														acc_mod="";
													;}
    break;

  case 355:
#line 986 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
																Streams::verbose() << "class_h: access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
																(yyval.type)=p->createType((yyvsp[-4].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
																t=(yyval.type);
																inhertance_list.clear();
																acc_mod="";
														   ;}
    break;

  case 356:
#line 993 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
															(yyval.type)=p->createType((yyvsp[-4].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
															t=(yyval.type);
															inhertance_list.clear();
															acc_mod="";
														  ;}
    break;

  case 357:
#line 1000 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
															(yyval.type)=p->createType((yyvsp[-4].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
															t=(yyval.type);
															inhertance_list.clear();
															acc_mod="";
														 ;}
    break;

  case 358:
#line 1007 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
																	Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
																	(yyval.type)=p->createType((yyvsp[-4].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
																	t=(yyval.type);
																	inhertance_list.clear();
																	acc_mod="";
																;}
    break;

  case 359:
#line 1014 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
																	Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
																	(yyval.type)=p->createType((yyvsp[-4].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
																	t=(yyval.type);
																	inhertance_list.clear();
																	acc_mod="";
																;}
    break;

  case 360:
#line 1021 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
																		Streams::verbose() << "class_h: STATIC access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
																		(yyval.type)=p->createType((yyvsp[-4].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
																		t=(yyval.type);
																		acc_mod="";
																		inhertance_list.clear();
																  ;}
    break;

  case 361:
#line 1028 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
																	Streams::verbose() << "class_h: FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
																	(yyval.type)=p->createType((yyvsp[-4].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
																	t=(yyval.type);
																	acc_mod="";
																	inhertance_list.clear();
																 ;}
    break;

  case 362:
#line 1035 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-8].r.lineNum),(yyvsp[-4].r.colNum)+1));
																			(yyval.type)=p->createType((yyvsp[-4].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
																			t=(yyval.type);
																			acc_mod="";
																			inhertance_list.clear();
																		;}
    break;

  case 363:
#line 1042 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-8].r.lineNum),(yyvsp[-4].r.colNum)+1));
																			(yyval.type)=p->createType((yyvsp[-4].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
																			t=(yyval.type);
																			acc_mod="";
																			inhertance_list.clear();
																		;}
    break;

  case 364:
#line 1049 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS NAME '(' arglist ')' ':' \n";;}
    break;

  case 365:
#line 1050 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS NAME '(' arglist ')' ':' \n";;}
    break;

  case 366:
#line 1051 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-8].r.lineNum),(yyvsp[-4].r.colNum)+1));
																			(yyval.type)=p->createType((yyvsp[-4].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
																			t=(yyval.type);
																			acc_mod="";
																			inhertance_list.clear();
																		;}
    break;

  case 367:
#line 1058 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-8].r.lineNum),(yyvsp[-4].r.colNum)+1));
																			(yyval.type)=p->createType((yyvsp[-4].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
																			t=(yyval.type);
																			acc_mod="";
																			inhertance_list.clear();
																		;}
    break;

  case 368:
#line 1065 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-8].r.lineNum),(yyvsp[-4].r.colNum)+1));
																			(yyval.type)=p->createType((yyvsp[-4].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
																			t=(yyval.type);
																			acc_mod="";
																			inhertance_list.clear();
																	   ;}
    break;

  case 369:
#line 1072 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-8].r.lineNum),(yyvsp[-4].r.colNum)+1));
																			(yyval.type)=p->createType((yyvsp[-4].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
																			t=(yyval.type);
																			acc_mod="";
																			inhertance_list.clear();
																	    ;}
    break;

  case 370:
#line 1082 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arg_comma_seq : argument ','\n";;}
    break;

  case 371:
#line 1083 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arg_comma_seq : argument ',' arg_comma_seq\n";;}
    break;

  case 372:
#line 1086 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_arg_seq:	',' argument\n";;}
    break;

  case 373:
#line 1087 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_arg_seq:	comma_arg_seq ',' argument\n";;}
    break;

  case 374:
#line 1090 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: argument\n";;}
    break;

  case 375:
#line 1091 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: default_arg\n";;}
    break;

  case 376:
#line 1093 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: argument ','\n";;}
    break;

  case 377:
#line 1095 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {    
						std::string tempstr((yyvsp[0].r.strVal));
						std::string erro("*" + tempstr);
						char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
						Streams::verbose() <<"arglist: '*' test\n";
				   ;}
    break;

  case 378:
#line 1103 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
										std::string tempstr((yyvsp[-3].r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);										
										std::string tempstr1((yyvsp[0].r.strVal));
										std::string erro1("**" + tempstr1);
										char *cstr1 = new char[erro1.length() + 1];
										strcpy(cstr1, erro1.c_str()); parameters.push_back(cstr1);										
										
										Streams::verbose() <<"arglist: '*' test ',' STAR_2 test\n";
									;}
    break;

  case 379:
#line 1116 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
		 					   		    std::string tempstr((yyvsp[-1].r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
									    
										Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";
								 ;}
    break;

  case 380:
#line 1125 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
											std::string tempstr((yyvsp[-1].r.strVal));
											std::string erro("*" + tempstr);
											char *cstr = new char[erro.length() + 1];
											strcpy(cstr, erro.c_str()); parameters.push_back(cstr);

											Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";
										 ;}
    break;

  case 381:
#line 1134 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
		 													std::string tempstr((yyvsp[-2].r.strVal));
															std::string erro("*" + tempstr);
															char *cstr = new char[erro.length() + 1];
															strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
															Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";
													   ;}
    break;

  case 382:
#line 1142 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
													std::string tempstr((yyvsp[-4].r.strVal));
													std::string erro("*" + tempstr);
													char *cstr = new char[erro.length() + 1];
													strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
										
													std::string tempstr1((yyvsp[0].r.strVal));
													std::string erro1("**" + tempstr1);
													char *cstr1 = new char[erro1.length() + 1];
													strcpy(cstr1, erro1.c_str()); parameters.push_back(cstr1);Streams::verbose() <<"arglist: '*' test comma_arg_seq ',' STAR_2 test\n";
												  ;}
    break;

  case 383:
#line 1154 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
						std::string tempstr((yyvsp[0].r.strVal));
						std::string erro("**" + tempstr);
						char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);Streams::verbose() <<"arglist: STAR_2 test\n";
					  ;}
    break;

  case 384:
#line 1161 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq argument\n";;}
    break;

  case 385:
#line 1162 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq default_arg\n";;}
    break;

  case 386:
#line 1163 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq default_arg_comma_seq default_arg\n";;}
    break;

  case 387:
#line 1164 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq argument ','\n";;}
    break;

  case 388:
#line 1166 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {		
									std::string tempstr((yyvsp[0].r.strVal));
									std::string erro("*" + tempstr);
									char *cstr = new char[erro.length() + 1];
									strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
									Streams::verbose() <<"arglist: arg_comma_seq '*' test\n";
								  ;}
    break;

  case 389:
#line 1174 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
													std::string tempstr((yyvsp[-3].r.strVal));
													std::string erro("*" + tempstr);
													char *cstr = new char[erro.length() + 1];
													strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
										
													std::string tempstr1((yyvsp[0].r.strVal));
													std::string erro1("**" + tempstr1);
													char *cstr1 = new char[erro1.length() + 1];
													strcpy(cstr1, erro1.c_str()); parameters.push_back(cstr1);
													Streams::verbose() <<"arglist: arg_comma_seq '*' test ',' STAR_2 test\n";
												 ;}
    break;

  case 390:
#line 1187 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
												std::string tempstr((yyvsp[-1].r.strVal));
												std::string erro("*" + tempstr);
												char *cstr = new char[erro.length() + 1];
												strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
												Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq\n";
											   ;}
    break;

  case 391:
#line 1195 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
														std::string tempstr((yyvsp[-1].r.strVal));
														std::string erro("*" + tempstr);
														char *cstr = new char[erro.length() + 1];
														strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
														Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_default_arg_seq\n";
													   ;}
    break;

  case 392:
#line 1203 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
																		std::string tempstr((yyvsp[-2].r.strVal));
																		std::string erro("*" + tempstr);
																		char *cstr = new char[erro.length() + 1];
																		strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
																		Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq comma_default_arg_seq\n";
																	 ;}
    break;

  case 393:
#line 1211 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
																std::string tempstr((yyvsp[-4].r.strVal));
																std::string erro("*" + tempstr);
																char *cstr = new char[erro.length() + 1];
																strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
										
																std::string tempstr1((yyvsp[0].r.strVal));
																std::string erro1("**" + tempstr1);
																char *cstr1 = new char[erro1.length() + 1];
																strcpy(cstr1, erro1.c_str()); parameters.push_back(cstr1);
																Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq ',' STAR_2 test\n";
															   ;}
    break;

  case 394:
#line 1224 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {	std::string tempstr((yyvsp[0].r.strVal));
										std::string erro("**" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
										Streams::verbose() <<"arglist: arg_comma_seq STAR_2 test\n";
								    ;}
    break;

  case 395:
#line 1234 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_default_arg_seq: ',' default_arg\n";;}
    break;

  case 396:
#line 1235 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_default_arg_seq: comma_default_arg_seq ',' default_arg\n";;}
    break;

  case 397:
#line 1238 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"default_arg_comma_seq: default_arg ','\n";;}
    break;

  case 398:
#line 1239 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"default_arg_comma_seq: default_arg_comma_seq default_arg ','\n";;}
    break;

  case 399:
#line 1242 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {parameters.push_back((yyvsp[-2].r.strVal));Streams::verbose() <<"default_arg: test '=' test\n";;}
    break;

  case 400:
#line 1244 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {parameters.push_back((yyvsp[0].r.strVal)); Streams::verbose() <<"argument: 	test\n";;}
    break;

  case 401:
#line 1245 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {parameters.push_back((yyvsp[-1].r.strVal));Streams::verbose() <<"argument: 	test comp_for\n";;}
    break;

  case 402:
#line 1249 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_iter:  comp_for\n";;}
    break;

  case 403:
#line 1250 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_iter:  comp_if\n";;}
    break;

  case 404:
#line 1253 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_for: 	FOR exprlist IN or_test\n";;}
    break;

  case 405:
#line 1254 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_for: FOR exprlist IN or_test comp_iter\n";;}
    break;

  case 406:
#line 1257 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_if: IF or_test\n";;}
    break;

  case 407:
#line 1258 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_if: IF or_test comp_iter\n";;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 4785 "yacc.cpp"

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


#line 1261 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"

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
