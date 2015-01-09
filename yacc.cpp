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
     IMPORT = 258,
     CLASS = 259,
     ID = 260,
     COLON = 261,
     CLOSE_S = 262,
     COMMA = 263,
     DOT = 264,
     END = 265,
     OPEN_C = 266,
     CLOSE_C = 267,
     DEF = 268,
     ASSIGN = 269,
     STAR = 270,
     ELSE = 271,
     IF = 272,
     ELIF = 273,
     WHILE = 274,
     FOR = 275,
     IN = 276,
     TRY = 277,
     FINALLY = 278,
     MULTI = 279,
     EXPECT = 280,
     WITH = 281,
     AS = 282,
     ASSERT = 283,
     EQUAL = 284,
     DEL = 285,
     RETURN = 286,
     PRINT = 287,
     GLOBAL = 288,
     RAISE = 289,
     PRIVATE = 290,
     PUBLIC = 291,
     PROTECTED = 292,
     OPEN_D = 293,
     CLOSE_D = 294,
     RE_COT = 295,
     YIELD = 296,
     PRIMARY = 297,
     OR = 298,
     AND = 299,
     NOT = 300,
     PLUS = 301,
     MINUS = 302,
     DIV = 303,
     MOD = 304,
     NOT_EQUAL = 305,
     FINAL = 306,
     STATIC = 307,
     SELF = 308,
     LESS_THAN = 309,
     LESS_OR_EQUAL = 310,
     MORE_THAN = 311,
     MORE_OR_EQUAL = 312,
     TRUE = 313,
     FALSE = 314,
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
     stmt_8 = 338
   };
#endif
/* Tokens.  */
#define IMPORT 258
#define CLASS 259
#define ID 260
#define COLON 261
#define CLOSE_S 262
#define COMMA 263
#define DOT 264
#define END 265
#define OPEN_C 266
#define CLOSE_C 267
#define DEF 268
#define ASSIGN 269
#define STAR 270
#define ELSE 271
#define IF 272
#define ELIF 273
#define WHILE 274
#define FOR 275
#define IN 276
#define TRY 277
#define FINALLY 278
#define MULTI 279
#define EXPECT 280
#define WITH 281
#define AS 282
#define ASSERT 283
#define EQUAL 284
#define DEL 285
#define RETURN 286
#define PRINT 287
#define GLOBAL 288
#define RAISE 289
#define PRIVATE 290
#define PUBLIC 291
#define PROTECTED 292
#define OPEN_D 293
#define CLOSE_D 294
#define RE_COT 295
#define YIELD 296
#define PRIMARY 297
#define OR 298
#define AND 299
#define NOT 300
#define PLUS 301
#define MINUS 302
#define DIV 303
#define MOD 304
#define NOT_EQUAL 305
#define FINAL 306
#define STATIC 307
#define SELF 308
#define LESS_THAN 309
#define LESS_OR_EQUAL 310
#define MORE_THAN 311
#define MORE_OR_EQUAL 312
#define TRUE 313
#define FALSE 314
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




/* Copy the first part of user declarations.  */
#line 3 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"

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
	#include "C:\Users\AMER-HY\Source\Repos\compiler-project - Copy - Copy\compilerProject\MyParser.h"
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
#line 60 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
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
#line 322 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 334 "yacc.cpp"

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
#define YYFINAL  25
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2101

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  84
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  73
/* YYNRULES -- Number of rules. */
#define YYNRULES  273
/* YYNRULES -- Number of states. */
#define YYNSTATES  516

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   338

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
      75,    76,    77,    78,    79,    80,    81,    82,    83
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     6,     9,    11,    15,    18,    20,    23,
      27,    32,    37,    40,    44,    49,    55,    61,    68,    71,
      75,    78,    82,    84,    88,    90,    94,    96,    99,   103,
     105,   108,   112,   115,   118,   120,   122,   126,   129,   133,
     136,   141,   145,   150,   154,   157,   160,   163,   165,   170,
     175,   179,   183,   187,   193,   199,   206,   213,   218,   222,
     225,   229,   233,   238,   243,   249,   255,   260,   265,   269,
     274,   279,   284,   289,   294,   299,   301,   303,   307,   311,
     315,   319,   323,   325,   328,   332,   336,   341,   345,   347,
     352,   357,   361,   366,   372,   379,   385,   388,   392,   395,
     398,   400,   402,   404,   406,   408,   410,   412,   415,   418,
     423,   432,   443,   446,   451,   455,   461,   465,   468,   471,
     474,   477,   480,   484,   487,   492,   497,   504,   511,   516,
     521,   527,   533,   537,   541,   545,   551,   557,   563,   571,
     573,   577,   583,   587,   593,   597,   603,   607,   609,   613,
     617,   620,   623,   627,   630,   635,   637,   639,   641,   643,
     645,   647,   649,   651,   653,   655,   657,   659,   661,   664,
     669,   671,   673,   675,   677,   681,   685,   691,   697,   700,
     705,   708,   710,   713,   715,   718,   723,   727,   732,   735,
     738,   742,   744,   746,   749,   754,   759,   765,   767,   769,
     771,   773,   775,   779,   785,   789,   793,   799,   803,   805,
     807,   811,   815,   817,   819,   821,   823,   825,   827,   829,
     831,   833,   835,   837,   839,   841,   843,   845,   847,   850,
     854,   858,   861,   863,   867,   871,   874,   877,   880,   884,
     888,   892,   895,   899,   903,   905,   908,   913,   918,   923,
     925,   927,   931,   933,   937,   942,   946,   950,   954,   958,
     962,   966,   970,   972,   976,   978,   981,   983,   985,   987,
     989,   991,   993,   995
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
      85,     0,    -1,    86,     9,    -1,    86,    88,    -1,    88,
      -1,     3,    92,    61,    -1,    87,    89,    -1,    89,    -1,
      90,    94,    -1,   135,    90,    94,    -1,    52,    51,    90,
      94,    -1,    51,    52,    90,    94,    -1,     4,     5,    -1,
     134,     4,     5,    -1,     4,     5,    65,     7,    -1,   134,
       4,     5,    65,     7,    -1,     4,     5,    65,    92,     7,
      -1,   134,     4,     5,    65,    92,     7,    -1,     4,     1,
      -1,     5,     1,     5,    -1,     5,     1,    -1,    91,     8,
     152,    -1,   152,    -1,    92,     8,    93,    -1,    93,    -1,
      93,     9,     5,    -1,     5,    -1,     6,    10,    -1,     6,
      95,    10,    -1,    10,    -1,    95,    10,    -1,    95,    13,
      96,    -1,    13,    96,    -1,    97,    61,    -1,    98,    -1,
      89,    -1,    52,    97,    61,    -1,    52,    98,    -1,    51,
      97,    61,    -1,    51,    98,    -1,    52,    51,    97,    61,
      -1,    52,    51,    98,    -1,    51,    52,    97,    61,    -1,
      51,    52,    98,    -1,    97,     1,    -1,   134,     5,    -1,
     135,     5,    -1,     5,    -1,   134,     5,    14,   152,    -1,
     135,     5,    14,   152,    -1,     5,    14,   152,    -1,   134,
     135,     5,    -1,   135,   134,     5,    -1,   134,   135,     5,
      14,   152,    -1,   135,   134,     5,    14,   152,    -1,    52,
     134,    51,     5,    14,   152,    -1,    51,   134,    52,     5,
      14,   152,    -1,   134,     5,     5,     1,    -1,     5,     5,
       1,    -1,    99,   105,    -1,   134,    99,   105,    -1,   135,
      99,   105,    -1,   134,   135,    99,   105,    -1,   135,   134,
      99,   105,    -1,    52,   134,    51,    99,   105,    -1,    51,
     134,    52,    99,   105,    -1,     5,    65,   100,     7,    -1,
       5,    65,     5,     7,    -1,     5,    65,     7,    -1,     1,
      65,   100,     7,    -1,     1,    65,     5,     7,    -1,     5,
       1,   100,     7,    -1,     5,     1,     5,     7,    -1,     5,
      65,   100,     1,    -1,     5,    65,     5,     1,    -1,   101,
      -1,   103,    -1,   101,     8,   103,    -1,   101,     8,   102,
      -1,     5,     8,   102,    -1,   101,     8,     5,    -1,     5,
       8,     5,    -1,   102,    -1,    15,     5,    -1,    15,    15,
       5,    -1,     5,    15,     1,    -1,     5,    15,    15,     1,
      -1,   103,     8,   104,    -1,   104,    -1,   103,     8,   101,
       1,    -1,   103,     8,     5,     1,    -1,     5,    14,   152,
      -1,    15,     5,    14,   152,    -1,    15,    15,     5,    14,
     152,    -1,     5,    15,     1,    15,    14,   152,    -1,     5,
      15,     1,    14,   152,    -1,     6,    10,    -1,     6,   106,
      10,    -1,     1,    10,    -1,   106,   107,    -1,   107,    -1,
     108,    -1,   112,    -1,   114,    -1,   119,    -1,   122,    -1,
     105,    -1,   123,    61,    -1,     5,    61,    -1,     5,     9,
       5,    61,    -1,     5,     8,     5,     9,     5,     9,     5,
      61,    -1,     5,     9,     5,     8,     5,     9,     5,     9,
       5,    61,    -1,   110,   107,    -1,   110,   107,    16,   107,
      -1,   110,   107,   109,    -1,   110,   107,   109,    16,   107,
      -1,   111,   107,   109,    -1,   111,   107,    -1,    17,   152,
      -1,    18,   152,    -1,   113,   107,    -1,    19,   152,    -1,
       5,     1,   152,    -1,   115,   107,    -1,    20,   118,    21,
      91,    -1,    20,   118,    21,   146,    -1,    20,     5,     8,
       5,    21,    91,    -1,    20,     5,     8,     5,    21,   146,
      -1,    20,     5,    21,    91,    -1,    20,     5,    21,   146,
      -1,     5,     1,     5,    21,    91,    -1,     5,     1,     5,
      21,   146,    -1,   116,     8,   117,    -1,     5,     8,   116,
      -1,     5,     8,     5,    -1,     5,     8,     5,     9,     5,
      -1,     5,     9,     5,     8,   116,    -1,     5,     9,     5,
       8,     5,    -1,     5,     9,     5,     8,     5,     9,     5,
      -1,   117,    -1,   117,     9,     5,    -1,     5,     9,     5,
       9,     5,    -1,   118,     8,   136,    -1,     5,     8,     5,
       8,   136,    -1,   118,     8,     5,    -1,     5,     8,     5,
       8,     5,    -1,     5,     8,   136,    -1,   136,    -1,    22,
     107,   121,    -1,    22,   107,   120,    -1,    23,   105,    -1,
      60,   107,    -1,    60,   152,   107,    -1,    26,   152,    -1,
      26,   152,    27,   136,    -1,    91,    -1,   124,    -1,   126,
      -1,    63,    -1,   127,    -1,   130,    -1,   128,    -1,   129,
      -1,   133,    -1,    68,    -1,    69,    -1,   116,    -1,   131,
      -1,    28,   152,    -1,    28,   152,     8,   152,    -1,    91,
      -1,   145,    -1,   146,    -1,   142,    -1,   118,    14,   125,
      -1,   154,    14,   125,    -1,     5,     8,     5,    14,   125,
      -1,    53,     9,     5,    14,   125,    -1,    30,   118,    -1,
      30,     5,     8,     5,    -1,    30,     5,    -1,    31,    -1,
      31,    91,    -1,   149,    -1,    32,    91,    -1,    32,    56,
      56,    91,    -1,     5,     1,    91,    -1,     5,    56,    56,
      91,    -1,    33,   132,    -1,    33,     1,    -1,     5,     8,
     132,    -1,     5,    -1,    34,    -1,    34,   152,    -1,    34,
     152,     8,   152,    -1,    34,   152,     8,     1,    -1,     5,
       1,   152,     8,   152,    -1,    35,    -1,    36,    -1,    37,
      -1,    52,    -1,    51,    -1,    65,   118,     7,    -1,    65,
       5,     8,     5,     7,    -1,    65,     5,     7,    -1,    38,
     118,    39,    -1,    38,     5,     8,     5,    39,    -1,    38,
       5,    39,    -1,   137,    -1,   150,    -1,   138,     9,     5,
      -1,     5,     9,     5,    -1,   139,    -1,   137,    -1,   150,
      -1,   151,    -1,   141,    -1,   140,    -1,    66,    -1,    67,
      -1,    70,    -1,    71,    -1,    64,    -1,   145,    -1,   146,
      -1,   147,    -1,   148,    -1,   142,    -1,    11,    12,    -1,
      11,   143,    12,    -1,   143,     8,   144,    -1,   143,     8,
      -1,   144,    -1,   152,     6,   152,    -1,    65,    91,     7,
      -1,    65,     7,    -1,     1,     7,    -1,    65,     1,    -1,
       1,   152,     7,    -1,    65,    91,     1,    -1,    38,    91,
      39,    -1,    38,    39,    -1,    40,    91,    40,    -1,    65,
     149,     7,    -1,    41,    -1,    41,    91,    -1,    42,    38,
      91,    39,    -1,    42,    38,   101,    39,    -1,    42,    38,
       5,    39,    -1,   153,    -1,   140,    -1,   152,   156,   152,
      -1,   155,    -1,    53,     9,     5,    -1,    53,     9,     5,
     145,    -1,   152,     1,   152,    -1,   152,    29,   152,    -1,
     152,    50,   152,    -1,   152,    54,   152,    -1,   152,    55,
     152,    -1,   152,    56,   152,    -1,   152,    57,   152,    -1,
       5,    -1,   154,     9,     5,    -1,   154,    -1,   154,   145,
      -1,    46,    -1,    47,    -1,    48,    -1,    49,    -1,    43,
      -1,    45,    -1,    24,    -1,    44,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   101,   101,   108,   111,   119,   121,   122,   125,   126,
     137,   142,   148,   153,   159,   164,   170,   175,   181,   186,
     191,   198,   199,   202,   209,   218,   222,   230,   234,   237,
     243,   252,   253,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   273,   279,   293,   297,   302,
     303,   307,   308,   309,   310,   311,   312,   313,   317,   323,
     324,   325,   326,   327,   328,   329,   333,   334,   335,   336,
     340,   344,   348,   352,   356,   364,   365,   366,   368,   369,
     370,   371,   372,   375,   381,   385,   389,   396,   397,   398,
     402,   408,   409,   415,   419,   423,   429,   430,   431,   438,
     439,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   455,   456,   457,   458,   461,   462,   465,   468,
     471,   476,   477,   483,   486,   487,   488,   489,   490,   491,
     492,   496,   503,   504,   505,   506,   507,   508,   509,   510,
     514,   515,   519,   520,   521,   522,   523,   524,   527,   528,
     531,   534,   535,   538,   539,   542,   543,   544,   546,   547,
     548,   549,   550,   551,   552,   553,   554,   555,   558,   559,
     561,   562,   563,   564,   567,   568,   569,   570,   582,   583,
     584,   587,   588,   591,   594,   595,   596,   600,   605,   606,
     612,   613,   616,   617,   618,   619,   623,   629,   630,   631,
     635,   636,   638,   639,   640,   641,   642,   643,   644,   645,
     648,   649,   652,   653,   654,   655,   658,   659,   662,   663,
     664,   665,   666,   669,   670,   671,   672,   673,   676,   677,
     679,   680,   681,   683,   686,   687,   688,   692,   696,   700,
     707,   708,   711,   714,   717,   718,   721,   725,   726,   730,
     731,   732,   733,   737,   744,   748,   754,   755,   756,   757,
     758,   759,   761,   762,   771,   772,   775,   776,   777,   778,
     779,   780,   781,   782
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IMPORT", "CLASS", "ID", "COLON",
  "CLOSE_S", "COMMA", "DOT", "END", "OPEN_C", "CLOSE_C", "DEF", "ASSIGN",
  "STAR", "ELSE", "IF", "ELIF", "WHILE", "FOR", "IN", "TRY", "FINALLY",
  "MULTI", "EXPECT", "WITH", "AS", "ASSERT", "EQUAL", "DEL", "RETURN",
  "PRINT", "GLOBAL", "RAISE", "PRIVATE", "PUBLIC", "PROTECTED", "OPEN_D",
  "CLOSE_D", "RE_COT", "YIELD", "PRIMARY", "OR", "AND", "NOT", "PLUS",
  "MINUS", "DIV", "MOD", "NOT_EQUAL", "FINAL", "STATIC", "SELF",
  "LESS_THAN", "LESS_OR_EQUAL", "MORE_THAN", "MORE_OR_EQUAL", "TRUE",
  "FALSE", "EXCEPT", "SEMICOLON", "NEW_LINE", "PASS", "CHAR_VALUE",
  "OPEN_S", "STRING_VALUE", "INTEGER_VALUE", "BREAK", "CONTINUE",
  "LONG_VALUE", "FLOAT_VALUE", "stmt_1_2", "stmt_11", "stmt_10", "stmt_9",
  "stmt_7", "stmt_6", "stmt_5", "stmt_4", "stmt_3", "stmt_2", "stmt_1",
  "stmt_8", "$accept", "programes", "program", "import_stmt", "unit",
  "class_decl", "class_h", "expr_list", "unit_list", "unit_import",
  "class_body", "dm_list", "dm", "var_declaration", "method_declaration",
  "method_h", "arguments", "args_list", "arg", "default_args_list",
  "default_arg", "block_stmt", "stmt_list", "stmt", "if_stmt", "elif_stmt",
  "if_header", "elif_header", "while_stmt", "while_header", "for_stmt",
  "for_header", "import_list", "import", "target_list", "try_stmt",
  "finally_stmt", "except_stmt", "with_stmt", "simple_stmt_list",
  "assert_stmt", "left_assignment_side", "assignment_stmt", "del_stmt",
  "return_stmt", "yield_stmt", "print_stmt", "global_stmt", "id_list",
  "raise_stmt", "access_modef", "storage_modef", "target", "attributeref",
  "primary", "atom", "literal", "enclosure", "dict_display",
  "key_datum_list", "key_datum", "parenth_form", "list_display",
  "string_conversion", "yield_atom", "yield_expression", "subscription",
  "call", "expr", "condition", "id_dot", "long_id", "op", 0
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
     335,   336,   337,   338
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    84,    85,    86,    86,    87,    88,    88,    89,    89,
      89,    89,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    91,    91,    92,    92,    93,    93,    94,    94,    94,
      94,    95,    95,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    98,
      98,    98,    98,    98,    98,    98,    99,    99,    99,    99,
      99,    99,    99,    99,    99,   100,   100,   100,   101,   101,
     101,   101,   101,   102,   102,   102,   102,   103,   103,   103,
     103,   104,   104,   104,   104,   104,   105,   105,   105,   106,
     106,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   108,   108,   108,   108,   109,   109,   110,   111,
     112,   113,   113,   114,   115,   115,   115,   115,   115,   115,
     115,   115,   116,   116,   116,   116,   116,   116,   116,   116,
     117,   117,   118,   118,   118,   118,   118,   118,   119,   119,
     120,   121,   121,   122,   122,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   124,   124,
     125,   125,   125,   125,   126,   126,   126,   126,   127,   127,
     127,   128,   128,   129,   130,   130,   130,   130,   131,   131,
     132,   132,   133,   133,   133,   133,   133,   134,   134,   134,
     135,   135,   136,   136,   136,   136,   136,   136,   136,   136,
     137,   137,   138,   138,   138,   138,   139,   139,   140,   140,
     140,   140,   140,   141,   141,   141,   141,   141,   142,   142,
     143,   143,   143,   144,   145,   145,   145,   145,   145,   145,
     146,   146,   147,   148,   149,   149,   150,   151,   151,   152,
     152,   152,   152,   152,   152,   152,   153,   153,   153,   153,
     153,   153,   154,   154,   155,   155,   156,   156,   156,   156,
     156,   156,   156,   156
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     2,     2,     1,     3,     2,     1,     2,     3,
       4,     4,     2,     3,     4,     5,     5,     6,     2,     3,
       2,     3,     1,     3,     1,     3,     1,     2,     3,     1,
       2,     3,     2,     2,     1,     1,     3,     2,     3,     2,
       4,     3,     4,     3,     2,     2,     2,     1,     4,     4,
       3,     3,     3,     5,     5,     6,     6,     4,     3,     2,
       3,     3,     4,     4,     5,     5,     4,     4,     3,     4,
       4,     4,     4,     4,     4,     1,     1,     3,     3,     3,
       3,     3,     1,     2,     3,     3,     4,     3,     1,     4,
       4,     3,     4,     5,     6,     5,     2,     3,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     4,
       8,    10,     2,     4,     3,     5,     3,     2,     2,     2,
       2,     2,     3,     2,     4,     4,     6,     6,     4,     4,
       5,     5,     3,     3,     3,     5,     5,     5,     7,     1,
       3,     5,     3,     5,     3,     5,     3,     1,     3,     3,
       2,     2,     3,     2,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     4,
       1,     1,     1,     1,     3,     3,     5,     5,     2,     4,
       2,     1,     2,     1,     2,     4,     3,     4,     2,     2,
       3,     1,     1,     2,     4,     4,     5,     1,     1,     1,
       1,     1,     3,     5,     3,     3,     5,     3,     1,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       3,     2,     1,     3,     3,     2,     2,     2,     3,     3,
       3,     2,     3,     3,     1,     2,     4,     4,     4,     1,
       1,     3,     1,     3,     4,     3,     3,     3,     3,     3,
       3,     3,     1,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       0,     0,     0,     0,   197,   198,   199,   201,   200,     0,
       0,     0,     4,     7,     0,     0,     0,    26,     0,    24,
      18,    12,    20,     0,     0,     1,     2,     3,     6,     0,
      29,     0,     8,     0,     0,     0,     0,     5,     0,     0,
      19,     0,     0,    27,     0,     0,    47,     0,     0,    35,
      32,     0,    34,     0,     0,     0,    30,     0,    13,     9,
      23,    25,    14,     0,    11,    10,    28,     0,    20,     0,
       0,     0,     0,   201,     0,     0,    39,     0,     0,     0,
     200,     0,    37,     0,    44,    33,     0,     0,    59,    45,
     201,   200,     0,     0,    46,     0,     0,    31,     0,    16,
       0,     0,     0,    75,    82,    76,    88,    19,     0,    58,
     262,     0,   222,   218,   219,   220,   221,   250,    50,   249,
       0,   252,     0,    68,     0,     0,     0,     0,    43,     0,
      38,     0,     0,     0,     0,    41,     0,     0,    36,     0,
      98,     0,     0,    96,     0,     0,     0,     0,     0,     0,
       0,     0,   181,     0,     0,   192,     0,     0,   244,     0,
       0,   158,     0,   164,   165,   155,   106,     0,   100,   101,
       0,   102,     0,   103,     0,   166,   139,     0,   104,   105,
       0,   156,   157,   159,   161,   162,   160,   167,   163,   147,
     208,     0,   212,   250,   216,   227,   223,   224,   225,   226,
     183,   209,   215,     0,     0,     0,     0,    60,    51,     0,
       0,    61,    52,     0,    15,     0,    70,     0,     0,     0,
      83,     0,    69,     0,     0,    72,    71,     0,     0,   272,
       0,   270,   273,   271,   266,   267,   268,   269,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   265,    74,    67,
      73,    66,     0,     0,    42,     0,     0,    40,     0,     0,
       0,   236,     0,     0,     0,     0,     0,   108,   228,     0,
     232,     0,   118,   121,     0,     0,   217,     0,   153,     0,
     180,   178,   182,     0,   184,   189,   191,   188,     0,   262,
     241,     0,     0,     0,   245,     0,     0,   237,   262,   235,
       0,     0,     0,     0,    97,    99,   112,   120,   123,     0,
       0,     0,     0,   107,     0,     0,    57,    48,     0,    62,
      49,     0,    63,    17,    81,     0,    79,    91,    85,     0,
       0,    84,    80,    78,    77,     0,     0,    87,     0,     0,
     256,   257,   258,   259,   260,   261,     0,   263,   237,     0,
      65,     0,    64,   238,   262,   186,   122,   134,   133,   146,
     211,     0,   231,   229,     0,     0,     0,     0,     0,     0,
       0,   149,   148,     0,     0,     0,     0,     0,     0,     0,
     207,   240,   205,   242,   262,     0,     0,     0,   204,     0,
     239,   234,   202,   243,    21,     0,     0,   114,     0,     0,
     132,   140,   144,   142,     0,   170,   174,   173,   171,   172,
     210,   175,    53,    54,     0,    83,     0,     0,     0,    86,
      92,     0,    90,    89,     0,   254,    56,    55,     0,     0,
       0,     0,     0,     0,     0,   109,   187,   230,     0,     0,
     211,   128,   129,   124,   125,   150,   151,     0,     0,   154,
       0,   179,   185,   190,   195,     0,     0,   248,   246,   247,
       0,     0,   113,     0,     0,   117,     0,    85,    84,    95,
       0,    93,    80,   130,   131,     0,   134,   143,   211,   176,
     137,   136,   141,     0,     0,     0,   152,   206,   177,   203,
     115,   116,     0,    94,     0,     0,     0,     0,     0,   145,
     126,   127,     0,   134,   211,   137,   141,   138,     0,     0,
     110,     0,   135,   138,   141,   111
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     9,    10,    11,    12,    13,    14,   165,    18,    19,
      32,    33,    50,    51,    52,    53,   108,   103,   104,   105,
     106,   166,   167,   168,   169,   397,   170,   398,   171,   172,
     173,   174,   175,   176,   177,   178,   371,   372,   179,   180,
     181,   406,   182,   183,   184,   185,   186,   187,   287,   188,
      15,    93,   189,   190,   191,   192,   117,   194,   195,   269,
     270,   196,   197,   198,   199,   200,   201,   202,   203,   119,
     120,   121,   243
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -312
static const short int yypact[] =
{
    1202,    39,   150,    38,  -312,  -312,  -312,     4,    14,    86,
    2049,  2026,  -312,  -312,   769,   190,  1560,  -312,     1,   120,
    -312,   169,   201,  1560,  1560,  -312,  -312,  -312,  -312,   391,
    -312,  1271,  -312,   673,   240,   769,    39,  -312,   248,   210,
    -312,   769,   769,  -312,   698,   194,    19,  1617,  1639,  -312,
    -312,    11,  -312,    34,   162,  1376,  -312,  1271,   245,  -312,
     120,  -312,  -312,   130,  -312,  -312,  -312,   138,   141,   261,
    1643,   262,    17,   460,  1992,   222,  -312,   180,  1214,  1992,
     460,   244,  -312,   239,  -312,  -312,   317,  1192,  -312,    54,
    -312,  -312,    34,   273,    36,    34,   848,  -312,   512,  -312,
     455,   197,   334,   354,  -312,   376,  -312,   526,   346,  -312,
    -312,   402,  -312,  -312,  -312,  -312,  -312,  -312,  1991,  -312,
     411,  -312,  1122,  -312,    98,   223,   421,   423,  -312,   271,
    -312,   296,    59,   324,   457,  -312,   294,   493,  -312,   431,
    -312,  1571,   695,  -312,  1594,  1643,  1643,  1368,  1334,  1643,
    1643,  1377,  1643,  1561,   502,  1643,   343,  1643,  1643,   517,
     558,  -312,   327,  -312,  -312,   582,  -312,  1263,  -312,  -312,
    1334,  -312,  1334,  -312,  1334,   596,   606,   183,  -312,  -312,
     567,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,
     630,   652,  -312,   688,  -312,  -312,  -312,  -312,  -312,  -312,
    -312,   690,  -312,   766,   837,   632,  1643,  -312,    80,    34,
    1643,  -312,    82,    34,  -312,   395,  -312,   234,  1643,    42,
     668,   700,  -312,   249,   337,  -312,  -312,   705,  1643,  -312,
    1643,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  1643,  1643,
    1643,  1643,  1643,  1643,  1176,   711,   218,  -312,  -312,  -312,
    -312,  -312,   526,   296,  -312,    92,    34,  -312,   431,   125,
      34,  -312,  1899,  1658,  1385,   713,   664,  -312,  -312,   566,
    -312,  1928,  1991,  1991,   310,     2,  -312,    -8,  1962,  1691,
     417,   714,   582,   676,   582,  -312,   726,  -312,  1725,   115,
    -312,   153,   157,    13,   582,  1614,   750,  1176,   581,  -312,
     295,   619,   763,  1643,  -312,  -312,   550,  -312,  -312,   752,
     771,  1419,  1545,  -312,   773,  1545,  -312,  1991,  1643,  -312,
    1991,  1643,  -312,  -312,   774,   345,  -312,  1991,   623,   783,
    1643,   777,   645,  -312,   376,   272,   369,  -312,   482,   553,
     309,   309,   309,   309,   309,   309,   624,  -312,  -312,  1643,
    -312,  1643,  -312,  -312,   780,   582,  1754,   477,   779,  -312,
       5,  1643,  1643,  -312,  1643,  1435,   788,  1634,  1634,    34,
    1334,  -312,  -312,  1453,  1643,  1469,  1643,   797,   308,  1487,
    -312,  -312,  -312,  -312,   168,   170,   208,   908,  -312,  1503,
    -312,  -312,  -312,  -312,  1991,  1334,  1643,   787,  1334,   808,
     606,  -312,   809,  -312,  1247,   582,  -312,  -312,  -312,  -312,
    -312,  -312,  1991,  1991,   127,  -312,   819,  1643,   811,  -312,
    1991,  1643,  -312,  -312,   361,  -312,  1991,  1991,  1634,  1643,
    1521,   821,  1545,   823,   834,  -312,   582,  -312,  1870,   378,
    -312,   582,  -312,   582,  -312,  -312,  -312,  1050,   809,  -312,
    1783,   667,   582,  -312,  -312,  1812,   179,  -312,  -312,  -312,
    1545,   439,  -312,  1121,  1334,   822,   836,  -312,  -312,  1991,
    1643,  1991,   774,   582,  -312,  1841,   548,  -312,    30,  -312,
     722,   779,  -312,  1537,  1634,  1571,  -312,  -312,  -312,  -312,
    -312,  -312,   835,  1991,   842,   845,   850,   853,   855,   809,
     582,  -312,   979,   738,    30,   745,   801,   760,   859,   867,
    -312,   868,   772,   772,   801,  -312
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -312,  -312,  -312,  -312,   864,    87,   187,  -111,    -3,   840,
     570,   860,   831,    85,   316,   -29,   578,  -218,  -216,   672,
     675,   -34,  -312,  -140,  -312,   432,  -312,  -312,  -312,  -312,
    -312,  -312,  -253,   587,   551,  -312,  -312,  -312,  -312,  -312,
    -312,  -311,  -312,  -312,  -312,  -312,  -312,  -312,   533,  -312,
    2002,   189,  -248,  -312,  -312,  -312,   -59,  -312,  -310,  -312,
     549,  -117,  -298,  -312,  -312,   753,  -312,  -312,   -70,  -312,
     -58,  -312,  -312
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -265
static const short int yytable[] =
{
     118,   326,   407,   247,   411,   407,   336,   333,   277,    36,
     311,   358,    84,  -265,   409,   369,   359,   409,   125,    88,
    -265,   303,    69,   368,    69,    92,    95,   305,   193,   204,
     306,    70,   307,    70,   308,    86,    63,  -265,  -265,    22,
      87,   282,   284,   328,    17,   291,   293,   294,    92,    95,
     210,   300,   370,   383,    92,  -265,    23,   329,   207,   205,
     125,   211,    37,   403,   209,    24,   435,   213,   206,   442,
     444,   262,    85,   210,   271,   272,   273,   386,   -47,   278,
     279,  -265,    71,  -265,    71,   288,    25,   247,   276,   193,
     204,  -135,   276,   125,   318,   215,   321,   193,    28,   250,
      92,    71,   256,   193,   213,   251,   349,    92,   193,   204,
     260,   193,   204,   193,   204,   193,   204,   359,    49,    71,
     -46,   479,   407,   379,    71,   449,   125,   359,   467,    38,
     474,   359,    75,    81,   409,   300,   317,    99,    36,   351,
     320,   359,   329,   100,    49,    71,   107,    71,   327,   488,
     407,    20,   355,   101,   380,    21,   101,    71,   339,   127,
     340,   303,   409,    45,   134,   311,    34,    89,   341,   342,
     343,   344,   345,   346,   262,   319,   217,   358,   303,   322,
     481,    45,   477,   414,   385,    89,   501,   483,   366,    16,
      71,   311,   381,   356,    34,   408,   382,   312,   408,    16,
      16,   405,   220,    35,   405,   276,    40,   457,   333,   458,
      41,    42,   221,    90,    91,    17,   424,    62,   487,   348,
      55,   425,   350,   110,   256,   299,   352,   262,   252,   260,
     446,    90,   131,   394,    39,   477,    78,    78,   101,   324,
      45,   358,    35,   481,    89,    58,    55,   459,   412,   325,
     436,   413,   276,    61,   332,   462,   441,   443,   465,    67,
     420,    41,   109,    78,   101,   452,    42,   122,    78,   123,
     425,   111,    45,   422,    45,    34,    89,   101,   208,   426,
     217,   427,   112,   130,   113,   114,   218,   219,   115,   116,
     139,    91,   271,   291,   438,    45,   390,    45,    34,    89,
     447,   255,   391,   303,   450,   138,   276,   486,   455,   454,
      98,   193,   204,   110,   276,   408,   276,   473,   365,   366,
     276,   405,   139,    91,   490,    45,   463,   140,   297,   212,
     276,   367,   298,   229,   299,   445,   193,   204,   144,   193,
     204,   222,   335,   408,   244,    90,   131,   469,   289,   405,
     415,   471,   101,   226,   144,   234,   235,   236,   237,   475,
     416,   111,   223,    76,    82,   156,   472,   157,   158,   159,
     423,   276,   112,   500,   113,   114,   325,   424,   115,   116,
     111,   156,   290,   157,   224,   159,   483,   366,   193,   204,
     128,   112,   162,   113,   114,   135,   111,   115,   116,   484,
     493,    43,   323,    36,    31,   193,   204,   112,   162,   113,
     114,   227,   244,   115,   116,   502,  -264,  -264,  -264,  -264,
     245,  -264,  -264,  -264,   276,   375,   366,  -264,  -264,  -264,
    -264,  -264,    45,  -264,  -264,  -264,   259,  -264,  -264,  -264,
    -264,  -264,  -264,  -264,  -264,  -264,   489,   483,   366,  -264,
    -264,  -264,  -264,  -264,  -264,  -264,  -264,  -264,  -264,  -264,
    -264,  -264,   216,   217,  -264,  -264,  -264,  -264,  -264,   218,
     219,  -264,  -264,   253,  -264,  -264,   246,  -264,  -264,  -264,
    -264,  -264,  -264,   244,   254,  -265,   431,  -253,  -253,  -253,
    -253,   432,  -253,  -253,  -253,     4,     5,     6,  -253,  -253,
    -253,  -253,  -253,   285,  -253,  -253,  -253,   286,  -253,  -253,
    -253,  -253,  -253,  -253,  -253,  -253,  -253,    17,   257,   214,
    -253,  -253,  -253,  -253,  -253,  -253,  -253,  -253,  -253,  -253,
    -253,  -253,  -253,   225,   217,  -253,  -253,  -253,  -253,  -253,
     218,   219,  -253,  -253,   258,  -253,  -253,   246,  -253,  -253,
    -253,  -253,  -253,  -253,   228,   295,  -265,   495,  -255,  -255,
    -255,  -255,  -145,  -255,  -255,  -255,   395,   296,   396,  -255,
    -255,  -255,  -255,  -255,   362,  -255,  -255,   229,   363,  -255,
    -255,  -255,   230,  -255,  -255,  -255,  -255,  -255,   388,   389,
     303,  -255,  -255,  -255,  -255,  -255,   231,   232,   233,   234,
     235,   236,   237,   238,   309,    59,  -255,   239,   240,   241,
     242,    64,    65,  -255,  -255,   310,  -255,  -255,  -255,  -255,
    -255,  -255,  -255,  -255,  -255,   228,   392,   311,   313,  -251,
    -251,  -251,  -251,   316,  -251,  -251,  -251,   417,   418,  -213,
    -251,  -251,  -251,  -251,  -251,   102,  -251,  -251,   229,   124,
    -251,  -251,  -251,   230,  -251,  -251,  -251,  -251,  -251,   218,
     219,   314,  -251,  -251,  -251,  -251,  -251,   231,   232,   233,
     234,   235,   236,   237,   238,   483,   366,  -251,   239,   240,
     241,   242,   330,    56,  -251,  -251,    57,  -251,  -251,  -251,
    -251,  -251,  -251,  -251,  -251,  -251,   263,  -217,   275,  -214,
    -262,  -262,   281,   264,  -262,   331,  -262,   292,    66,  -262,
     338,    57,  -262,   301,  -262,  -262,   347,  -262,   360,  -262,
     361,  -262,   311,  -262,  -262,  -262,  -262,  -262,  -262,  -262,
    -265,   498,   376,  -262,   377,  -262,  -262,  -262,  -262,  -262,
    -262,  -262,  -262,  -262,  -262,  -262,  -265,   508,  -262,  -262,
    -262,   266,  -262,  -265,   509,   387,   267,   399,  -262,  -262,
    -262,  -262,  -262,  -262,  -262,  -262,  -262,   228,  -265,   511,
     393,   -22,   -22,   -22,   -22,    29,   401,   -22,   410,    30,
    -265,   434,    31,   -22,   419,   -22,   -22,  -265,   -22,   414,
     229,   421,   -22,   440,   -22,   230,   -22,   -22,   -22,   -22,
     -22,   428,   286,   464,   -22,   -22,   -22,   -22,   -22,   231,
     232,   233,   234,   235,   236,   237,   238,   466,   366,   -22,
     239,   240,   241,   242,   468,   470,   478,   -22,   480,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   244,   482,
     396,   492,  -264,  -264,   434,  -264,   245,   503,  -264,    45,
     504,   315,    34,   212,  -264,   505,  -264,  -264,   506,  -264,
     507,  -264,  -265,  -264,   512,  -264,  -264,  -264,  -264,  -264,
    -264,  -264,   513,   514,    27,  -264,    60,  -264,  -264,  -264,
    -264,  -264,  -264,  -264,  -264,  -264,  -264,  -264,    97,    44,
    -264,  -264,  -264,  -264,  -264,   334,   400,   491,  -264,   337,
    -264,  -264,   246,  -264,  -264,  -264,  -264,  -264,  -264,   244,
     453,   437,     0,  -253,  -253,   302,  -253,     0,     0,  -253,
       0,     0,   460,     0,     0,  -253,     0,  -253,  -253,     0,
    -253,     0,  -253,     0,  -253,     0,  -253,  -253,  -253,  -253,
    -253,  -253,  -253,     0,     0,     0,  -253,     0,  -253,  -253,
    -253,  -253,  -253,  -253,  -253,  -253,  -253,  -253,  -253,     0,
       0,  -253,  -253,  -253,  -253,  -253,     0,     0,     0,  -253,
       0,  -253,  -253,   246,  -253,  -253,  -253,  -253,  -253,  -253,
     228,     0,     0,     0,  -255,  -255,   353,  -255,     0,     0,
    -255,     0,     0,     0,     0,     0,  -255,     0,  -255,  -255,
       0,  -255,     0,   229,     0,  -255,     0,  -255,   230,  -255,
    -255,  -255,  -255,  -255,     0,     0,     0,  -255,     0,  -255,
    -255,  -255,   231,   232,   233,   234,   235,   236,   237,   238,
       0,     0,  -255,   239,   240,   241,   242,     0,     0,     0,
    -255,     0,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,
    -255,   485,     0,     0,     0,   142,    87,     0,   -22,     0,
       0,   144,     0,     0,     0,     0,     0,   145,     0,   146,
     147,     0,   148,     0,   229,     0,   149,     0,   150,   230,
     151,   152,   153,   154,   155,     0,     0,     0,   156,     0,
     157,   158,   159,   231,   232,   233,   234,   235,   236,   237,
     238,     0,     0,   160,   239,   240,   241,   242,     0,     0,
       0,   -22,     0,   161,   112,   162,   113,   114,   163,   164,
     115,   116,   228,   248,     0,     0,  -119,  -119,     0,   249,
     217,     0,  -119,     0,     0,     0,   218,   219,  -119,     0,
    -119,  -119,     0,  -119,     0,   229,     0,  -119,     0,  -119,
     230,  -119,  -119,  -119,  -119,  -119,     0,     0,     0,  -119,
       0,  -119,  -119,  -119,   231,   232,   233,   234,   235,   236,
     237,   238,     0,     0,  -119,   239,   240,   241,   242,     0,
       0,   110,     0,   261,  -119,  -119,  -119,  -119,  -119,  -119,
    -119,  -119,  -119,   141,     0,     0,     0,   142,    87,     0,
       0,     0,   143,   144,     0,     1,     2,     3,     0,   145,
       0,   146,   147,     0,   148,    45,     0,     0,   149,   132,
     150,     0,   151,   152,   153,   154,   155,     0,     0,   111,
     156,     0,   157,   158,   159,     0,     0,     4,     5,     6,
     112,     0,   113,   114,     0,   160,   115,   116,     0,     4,
       5,     6,   110,     7,     8,   161,   112,   162,   113,   114,
     163,   164,   115,   116,   141,     0,     0,     0,   142,    87,
       0,     0,    45,   304,   144,     2,    46,     0,     0,     0,
     145,     0,   146,   147,     0,   148,   290,     0,     0,   149,
       0,   150,     0,   151,   152,   153,   154,   155,     0,     0,
     111,   156,     0,   157,   158,   159,     4,     5,     6,     0,
       0,   112,     0,   113,   114,     0,   160,   115,   116,     0,
       0,     0,    47,    48,     0,     0,   161,   112,   162,   113,
     114,   163,   164,   115,   116,   141,     0,     0,     0,   142,
      87,     0,     0,     0,     0,   144,     0,     0,     0,     0,
       0,   145,     0,   146,   147,     0,   148,     0,     0,     0,
     149,     0,   150,     0,   151,   152,   153,   154,   155,   244,
       0,     0,   156,   274,   157,   158,   159,    45,   244,   144,
       2,    94,   280,     0,     0,     0,   244,   160,   144,     0,
     357,     0,     0,     0,     0,     0,   144,   161,   112,   162,
     113,   114,   163,   164,   115,   116,   156,     0,   157,     0,
     159,     4,     5,     6,     0,   156,     0,   157,     0,   159,
     244,     0,     0,   156,   402,   157,     0,   159,     0,     0,
     144,     0,   112,   162,   113,   114,   244,     0,   115,   116,
     439,   112,   162,   113,   114,     0,   144,   115,   116,   112,
     162,   113,   114,     0,   244,   115,   116,   156,   448,   157,
       0,   159,     0,     0,   144,     0,     0,     0,     0,     0,
     244,     0,     0,   156,   451,   157,     0,   159,     0,     0,
     144,     0,     0,   112,   162,   113,   114,     0,   244,   115,
     116,   156,   456,   157,     0,   159,     0,     0,   144,   112,
     162,   113,   114,     0,   244,   115,   116,   156,   461,   157,
       0,   159,     0,     0,   144,     0,     0,   112,   162,   113,
     114,     0,   244,   115,   116,   156,   476,   157,     0,   159,
       0,     0,   144,   112,   162,   113,   114,     0,   244,   115,
     116,   156,   499,   157,     0,   159,   244,     0,   144,     0,
     110,   112,   162,   113,   114,     0,   144,   115,   116,   156,
       0,   157,     0,   159,     2,     3,   110,   112,   162,   113,
     114,     0,     0,   115,   116,   156,   110,   157,   261,   159,
       0,   140,     0,   404,     0,   112,   162,   113,   114,     0,
       0,   115,   116,     0,     0,     4,     5,     6,   111,   110,
       0,   112,   162,   113,   114,     0,   268,   115,   116,   112,
     246,   113,   114,     0,   111,   115,   116,   283,    45,   384,
       0,  -201,    72,     0,   111,   112,     0,   113,   114,   325,
       0,   115,   116,     0,     0,   112,     0,   113,   114,   110,
      45,   115,   116,  -200,    72,     0,     0,   111,   110,     0,
       0,     0,     4,     5,     6,     0,     0,     0,   112,     0,
     113,   114,     0,   354,   115,   116,     0,   111,    73,    74,
       0,     0,   404,     0,     4,     5,     6,     0,   112,     0,
     113,   114,     0,     0,   115,   116,     0,   111,     0,     0,
      79,    80,   228,     0,     0,     0,   111,     0,   112,   374,
     113,   114,     0,     0,   115,   116,     0,   112,     0,   113,
     114,   111,     0,   115,   116,   229,     0,     0,     0,     0,
     230,     0,   112,     0,   113,   114,   228,     0,   115,   116,
       0,     0,     0,   378,   231,   232,   233,   234,   235,   236,
     237,   238,     0,     0,     0,   239,   240,   241,   242,   229,
       0,     0,  -168,     0,   230,  -265,     0,     0,     0,     0,
       0,     0,   429,     0,     0,     0,     0,     0,   231,   232,
     233,   234,   235,   236,   237,   238,     0,     0,   229,   239,
     240,   241,   242,   230,   228,     0,  -193,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   231,   232,   233,
     234,   235,   236,   237,   238,     0,     0,   229,   239,   240,
     241,   242,   230,   228,     0,   -22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   231,   232,   233,   234,
     235,   236,   237,   238,     0,     0,   229,   239,   240,   241,
     242,   230,   228,     0,  -169,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   231,   232,   233,   234,   235,
     236,   237,   238,     0,     0,   229,   239,   240,   241,   242,
     230,   228,     0,  -194,     0,     0,     0,     0,  -233,     0,
       0,     0,  -233,     0,   231,   232,   233,   234,   235,   236,
     237,   238,     0,     0,   229,   239,   240,   241,   242,   230,
     228,     0,  -196,     0,     0,     0,   353,     0,     0,     0,
       0,     0,     0,   231,   232,   233,   234,   235,   236,   237,
     238,     0,     0,   229,   239,   240,   241,   242,   230,   228,
       0,     0,     0,     0,   364,     0,     0,     0,     0,     0,
       0,     0,   231,   232,   233,   234,   235,   236,   237,   238,
       0,     0,   229,   239,   240,   241,   242,   230,     0,     0,
       0,     0,     0,  -265,     0,     0,     0,     0,     0,     0,
       0,   231,   232,   233,   234,   235,   236,   237,   238,     0,
       0,     0,   239,   240,   241,   242,   229,     0,     0,   373,
       0,   230,  -265,    45,     0,     0,     2,    46,     0,     0,
       0,     0,     0,     0,     0,   231,   232,   233,   234,   235,
     236,   237,   238,     0,     0,   229,   239,   240,   241,   242,
     230,     0,     0,     0,     0,     0,     0,     4,     5,     6,
       2,     3,     0,    54,   231,   232,   233,   234,   235,   236,
     237,   238,     0,    73,    80,   239,   240,   241,   242,    77,
      83,     0,     1,     2,     3,     0,     0,    96,    26,    54,
       0,     4,     5,     6,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   126,   129,     7,     8,     0,
     133,   136,   137,     0,     4,     5,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8
};

static const short int yycheck[] =
{
      70,   217,   312,   120,   315,   315,   224,   223,   148,     8,
       8,   264,     1,     8,   312,    23,   264,   315,     1,    53,
       1,     8,     5,    21,     5,    54,    55,   167,    87,    87,
     170,    14,   172,    14,   174,     1,    39,     1,     8,     1,
       6,   152,   153,     1,     5,   156,   157,   158,    77,    78,
      14,   162,    60,    40,    83,     1,    52,    15,    92,     5,
       1,    95,    61,   311,    93,    51,    61,    96,    14,   367,
     368,   141,    61,    14,   144,   145,   146,   295,    61,   149,
     150,     1,    65,     1,    65,   155,     0,   204,   147,   148,
     148,    61,   151,     1,    14,    98,    14,   156,    11,     1,
     129,    65,   131,   162,   133,     7,    14,   136,   167,   167,
     139,   170,   170,   172,   172,   174,   174,   365,    31,    65,
      61,   432,   432,     8,    65,   373,     1,   375,     1,     9,
     428,   379,    47,    48,   432,   246,   206,     7,     8,    14,
     210,   389,    15,     5,    57,    65,     5,    65,   218,   460,
     460,     1,   263,    15,    39,     5,    15,    65,   228,    74,
     230,     8,   460,     1,    79,     8,     4,     5,   238,   239,
     240,   241,   242,   243,   244,   209,     8,   430,     8,   213,
     433,     1,   430,    15,   295,     5,   484,     8,     9,     0,
      65,     8,    39,   263,     4,   312,    39,    14,   315,    10,
      11,   312,     5,    16,   315,   264,     5,    39,   424,    39,
      23,    24,    15,    51,    52,     5,     8,     7,    39,     1,
      31,   338,   256,     5,   253,     7,   260,   297,     5,   258,
     370,    51,    52,   303,    65,   483,    47,    48,    15,     5,
       1,   494,    55,   496,     5,     5,    57,    39,   318,    15,
     361,   321,   311,     5,     5,   395,   367,   368,   398,    65,
     330,    74,     1,    74,    15,   376,    79,     5,    79,     7,
     387,    53,     1,     1,     1,     4,     5,    15,     5,   349,
       8,   351,    64,    61,    66,    67,    14,    15,    70,    71,
      51,    52,   362,   404,   364,     1,     1,     1,     4,     5,
     370,     5,     7,     8,   374,    61,   365,   447,   378,     1,
      65,   370,   370,     5,   373,   432,   375,   428,     8,     9,
     379,   432,    51,    52,   464,     1,   396,    10,     1,     5,
     389,    21,     5,    24,     7,   369,   395,   395,    11,   398,
     398,     7,     5,   460,     1,    51,    52,   417,     5,   460,
       5,   421,    15,     7,    11,    46,    47,    48,    49,   429,
      15,    53,     8,    47,    48,    38,     5,    40,    41,    42,
       1,   430,    64,   484,    66,    67,    15,     8,    70,    71,
      53,    38,    39,    40,     8,    42,     8,     9,   447,   447,
      74,    64,    65,    66,    67,    79,    53,    70,    71,    21,
     470,    10,     7,     8,    13,   464,   464,    64,    65,    66,
      67,     9,     1,    70,    71,   485,     5,     6,     7,     8,
       9,    10,    11,    12,   483,     8,     9,    16,    17,    18,
      19,    20,     1,    22,    23,    24,     5,    26,    27,    28,
      29,    30,    31,    32,    33,    34,     7,     8,     9,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,     7,     8,    53,    54,    55,    56,    57,    14,
      15,    60,    61,    52,    63,    64,    65,    66,    67,    68,
      69,    70,    71,     1,    61,     8,     9,     5,     6,     7,
       8,    14,    10,    11,    12,    35,    36,    37,    16,    17,
      18,    19,    20,     1,    22,    23,    24,     5,    26,    27,
      28,    29,    30,    31,    32,    33,    34,     5,    61,     7,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,     7,     8,    53,    54,    55,    56,    57,
      14,    15,    60,    61,    51,    63,    64,    65,    66,    67,
      68,    69,    70,    71,     1,    38,     8,     9,     5,     6,
       7,     8,    14,    10,    11,    12,    16,     9,    18,    16,
      17,    18,    19,    20,     8,    22,    23,    24,    12,    26,
      27,    28,    29,    30,    31,    32,    33,    34,     7,     8,
       8,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,     8,    35,    53,    54,    55,    56,
      57,    41,    42,    60,    61,     9,    63,    64,    65,    66,
      67,    68,    69,    70,    71,     1,     7,     8,    61,     5,
       6,     7,     8,     1,    10,    11,    12,    14,    15,     9,
      16,    17,    18,    19,    20,    67,    22,    23,    24,    71,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    14,
      15,     9,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,     8,     9,    53,    54,    55,
      56,    57,    14,    10,    60,    61,    13,    63,    64,    65,
      66,    67,    68,    69,    70,    71,     1,     9,   147,     9,
       5,     6,   151,     8,     9,     5,    11,   156,    10,    14,
       5,    13,    17,   162,    19,    20,     5,    22,     5,    24,
      56,    26,     8,    28,    29,    30,    31,    32,    33,    34,
       8,     9,    56,    38,     8,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,     8,     9,    53,    54,
      55,    56,    57,     8,     9,     5,    61,     5,    63,    64,
      65,    66,    67,    68,    69,    70,    71,     1,     8,     9,
       7,     5,     6,     7,     8,     6,     5,    11,     5,    10,
       8,     9,    13,    17,     1,    19,    20,     8,    22,    15,
      24,    14,    26,     5,    28,    29,    30,    31,    32,    33,
      34,    21,     5,    16,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,     9,     9,    53,
      54,    55,    56,    57,     5,    14,     5,    61,     5,    63,
      64,    65,    66,    67,    68,    69,    70,    71,     1,     5,
      18,     5,     5,     6,     9,     8,     9,     5,    11,     1,
       5,    14,     4,     5,    17,     5,    19,    20,     5,    22,
       5,    24,    61,    26,     5,    28,    29,    30,    31,    32,
      33,    34,     5,     5,    10,    38,    36,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    57,    29,
      53,    54,    55,    56,    57,   223,   309,   465,    61,   224,
      63,    64,    65,    66,    67,    68,    69,    70,    71,     1,
     377,   362,    -1,     5,     6,   162,     8,    -1,    -1,    11,
      -1,    -1,    14,    -1,    -1,    17,    -1,    19,    20,    -1,
      22,    -1,    24,    -1,    26,    -1,    28,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    38,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    53,    54,    55,    56,    57,    -1,    -1,    -1,    61,
      -1,    63,    64,    65,    66,    67,    68,    69,    70,    71,
       1,    -1,    -1,    -1,     5,     6,     7,     8,    -1,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    17,    -1,    19,    20,
      -1,    22,    -1,    24,    -1,    26,    -1,    28,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    38,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    53,    54,    55,    56,    57,    -1,    -1,    -1,
      61,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      71,     1,    -1,    -1,    -1,     5,     6,    -1,     8,    -1,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    17,    -1,    19,
      20,    -1,    22,    -1,    24,    -1,    26,    -1,    28,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    38,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    53,    54,    55,    56,    57,    -1,    -1,
      -1,    61,    -1,    63,    64,    65,    66,    67,    68,    69,
      70,    71,     1,     1,    -1,    -1,     5,     6,    -1,     7,
       8,    -1,    11,    -1,    -1,    -1,    14,    15,    17,    -1,
      19,    20,    -1,    22,    -1,    24,    -1,    26,    -1,    28,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    38,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    53,    54,    55,    56,    57,    -1,
      -1,     5,    -1,     7,    63,    64,    65,    66,    67,    68,
      69,    70,    71,     1,    -1,    -1,    -1,     5,     6,    -1,
      -1,    -1,    10,    11,    -1,     3,     4,     5,    -1,    17,
      -1,    19,    20,    -1,    22,     1,    -1,    -1,    26,     5,
      28,    -1,    30,    31,    32,    33,    34,    -1,    -1,    53,
      38,    -1,    40,    41,    42,    -1,    -1,    35,    36,    37,
      64,    -1,    66,    67,    -1,    53,    70,    71,    -1,    35,
      36,    37,     5,    51,    52,    63,    64,    65,    66,    67,
      68,    69,    70,    71,     1,    -1,    -1,    -1,     5,     6,
      -1,    -1,     1,    10,    11,     4,     5,    -1,    -1,    -1,
      17,    -1,    19,    20,    -1,    22,    39,    -1,    -1,    26,
      -1,    28,    -1,    30,    31,    32,    33,    34,    -1,    -1,
      53,    38,    -1,    40,    41,    42,    35,    36,    37,    -1,
      -1,    64,    -1,    66,    67,    -1,    53,    70,    71,    -1,
      -1,    -1,    51,    52,    -1,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    71,     1,    -1,    -1,    -1,     5,
       6,    -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    17,    -1,    19,    20,    -1,    22,    -1,    -1,    -1,
      26,    -1,    28,    -1,    30,    31,    32,    33,    34,     1,
      -1,    -1,    38,     5,    40,    41,    42,     1,     1,    11,
       4,     5,     5,    -1,    -1,    -1,     1,    53,    11,    -1,
       5,    -1,    -1,    -1,    -1,    -1,    11,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    38,    -1,    40,    -1,
      42,    35,    36,    37,    -1,    38,    -1,    40,    -1,    42,
       1,    -1,    -1,    38,     5,    40,    -1,    42,    -1,    -1,
      11,    -1,    64,    65,    66,    67,     1,    -1,    70,    71,
       5,    64,    65,    66,    67,    -1,    11,    70,    71,    64,
      65,    66,    67,    -1,     1,    70,    71,    38,     5,    40,
      -1,    42,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    -1,    38,     5,    40,    -1,    42,    -1,    -1,
      11,    -1,    -1,    64,    65,    66,    67,    -1,     1,    70,
      71,    38,     5,    40,    -1,    42,    -1,    -1,    11,    64,
      65,    66,    67,    -1,     1,    70,    71,    38,     5,    40,
      -1,    42,    -1,    -1,    11,    -1,    -1,    64,    65,    66,
      67,    -1,     1,    70,    71,    38,     5,    40,    -1,    42,
      -1,    -1,    11,    64,    65,    66,    67,    -1,     1,    70,
      71,    38,     5,    40,    -1,    42,     1,    -1,    11,    -1,
       5,    64,    65,    66,    67,    -1,    11,    70,    71,    38,
      -1,    40,    -1,    42,     4,     5,     5,    64,    65,    66,
      67,    -1,    -1,    70,    71,    38,     5,    40,     7,    42,
      -1,    10,    -1,    38,    -1,    64,    65,    66,    67,    -1,
      -1,    70,    71,    -1,    -1,    35,    36,    37,    53,     5,
      -1,    64,    65,    66,    67,    -1,    12,    70,    71,    64,
      65,    66,    67,    -1,    53,    70,    71,    56,     1,     5,
      -1,     4,     5,    -1,    53,    64,    -1,    66,    67,    15,
      -1,    70,    71,    -1,    -1,    64,    -1,    66,    67,     5,
       1,    70,    71,     4,     5,    -1,    -1,    53,     5,    -1,
      -1,    -1,    35,    36,    37,    -1,    -1,    -1,    64,    -1,
      66,    67,    -1,     5,    70,    71,    -1,    53,    51,    52,
      -1,    -1,    38,    -1,    35,    36,    37,    -1,    64,    -1,
      66,    67,    -1,    -1,    70,    71,    -1,    53,    -1,    -1,
      51,    52,     1,    -1,    -1,    -1,    53,    -1,    64,     8,
      66,    67,    -1,    -1,    70,    71,    -1,    64,    -1,    66,
      67,    53,    -1,    70,    71,    24,    -1,    -1,    -1,    -1,
      29,    -1,    64,    -1,    66,    67,     1,    -1,    70,    71,
      -1,    -1,    -1,     8,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    -1,    54,    55,    56,    57,    24,
      -1,    -1,    61,    -1,    29,     1,    -1,    -1,    -1,    -1,
      -1,    -1,     8,    -1,    -1,    -1,    -1,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    24,    54,
      55,    56,    57,    29,     1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    -1,    24,    54,    55,
      56,    57,    29,     1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    -1,    24,    54,    55,    56,
      57,    29,     1,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    -1,    24,    54,    55,    56,    57,
      29,     1,    -1,    61,    -1,    -1,    -1,    -1,     8,    -1,
      -1,    -1,    12,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    24,    54,    55,    56,    57,    29,
       1,    -1,    61,    -1,    -1,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    24,    54,    55,    56,    57,    29,     1,
      -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    24,    54,    55,    56,    57,    29,    -1,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    -1,    54,    55,    56,    57,    24,    -1,    -1,    27,
      -1,    29,     1,     1,    -1,    -1,     4,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    -1,    24,    54,    55,    56,    57,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
       4,     5,    -1,    31,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    51,    52,    54,    55,    56,    57,    47,
      48,    -1,     3,     4,     5,    -1,    -1,    55,     9,    57,
      -1,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    51,    52,    -1,
      78,    79,    80,    -1,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,     4,     5,    35,    36,    37,    51,    52,    85,
      86,    87,    88,    89,    90,   134,   135,     5,    92,    93,
       1,     5,     1,    52,    51,     0,     9,    88,    89,     6,
      10,    13,    94,    95,     4,    90,     8,    61,     9,    65,
       5,    90,    90,    10,    95,     1,     5,    51,    52,    89,
      96,    97,    98,    99,   134,   135,    10,    13,     5,    94,
      93,     5,     7,    92,    94,    94,    10,    65,     1,     5,
      14,    65,     5,    51,    52,    97,    98,   134,   135,    51,
      52,    97,    98,   134,     1,    61,     1,     6,   105,     5,
      51,    52,    99,   135,     5,    99,   134,    96,    65,     7,
       5,    15,   100,   101,   102,   103,   104,     5,   100,     1,
       5,    53,    64,    66,    67,    70,    71,   140,   152,   153,
     154,   155,     5,     7,   100,     1,   134,    97,    98,   134,
      61,    52,     5,   134,    97,    98,   134,   134,    61,    51,
      10,     1,     5,    10,    11,    17,    19,    20,    22,    26,
      28,    30,    31,    32,    33,    34,    38,    40,    41,    42,
      53,    63,    65,    68,    69,    91,   105,   106,   107,   108,
     110,   112,   113,   114,   115,   116,   117,   118,   119,   122,
     123,   124,   126,   127,   128,   129,   130,   131,   133,   136,
     137,   138,   139,   140,   141,   142,   145,   146,   147,   148,
     149,   150,   151,   152,   154,     5,    14,   105,     5,    99,
      14,   105,     5,    99,     7,    92,     7,     8,    14,    15,
       5,    15,     7,     8,     8,     7,     7,     9,     1,    24,
      29,    43,    44,    45,    46,    47,    48,    49,    50,    54,
      55,    56,    57,   156,     1,     9,    65,   145,     1,     7,
       1,     7,     5,    52,    61,     5,    99,    61,    51,     5,
      99,     7,   152,     1,     8,     9,    56,    61,    12,   143,
     144,   152,   152,   152,     5,   118,   140,   107,   152,   152,
       5,   118,    91,    56,    91,     1,     5,   132,   152,     5,
      39,    91,   118,    91,    91,    38,     9,     1,     5,     7,
      91,   118,   149,     8,    10,   107,   107,   107,   107,     8,
       9,     8,    14,    61,     9,    14,     1,   152,    14,   105,
     152,    14,   105,     7,     5,    15,   102,   152,     1,    15,
      14,     5,     5,   102,   103,     5,   101,   104,     5,   152,
     152,   152,   152,   152,   152,   152,   152,     5,     1,    14,
     105,    14,   105,     7,     5,    91,   152,     5,   116,   136,
       5,    56,     8,    12,     6,     8,     9,    21,    21,    23,
      60,   120,   121,    27,     8,     8,    56,     8,     8,     8,
      39,    39,    39,    40,     5,    91,   101,     5,     7,     8,
       1,     7,     7,     7,   152,    16,    18,   109,   111,     5,
     117,     5,     5,   136,    38,    91,   125,   142,   145,   146,
       5,   125,   152,   152,    15,     5,    15,    14,    15,     1,
     152,    14,     1,     1,     8,   145,   152,   152,    21,     8,
       8,     9,    14,     8,     9,    61,    91,   144,   152,     5,
       5,    91,   146,    91,   146,   105,   107,   152,     5,   136,
     152,     5,    91,   132,     1,   152,     5,    39,    39,    39,
      14,     5,   107,   152,    16,   107,     9,     1,     5,   152,
      14,   152,     5,    91,   146,   152,     5,   136,     5,   125,
       5,   116,     5,     8,    21,     1,   107,    39,   125,     7,
     107,   109,     5,   152,     8,     9,     8,     9,     9,     5,
      91,   146,   152,     5,     5,     5,     5,     5,     9,     9,
      61,     9,     5,     5,     5,    61
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
#line 101 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() <<"prgram : program unit\n";
						p->check_inhertance_list();
						if(!p->errRecovery->errQ->isEmpty())
								p->errRecovery->printErrQueue();
						p->print_symbol();
						Streams::verbose().flush();						
						;}
    break;

  case 3:
#line 108 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {	Streams::verbose() <<"prgram : program unit\n";
						Streams::verbose().flush();						
					;}
    break;

  case 4:
#line 111 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
							
								Streams::verbose()<<"program: unit\n";
								Streams::verbose().flush();						
							;}
    break;

  case 5:
#line 119 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import_stmt : IMPORT unit_list SEMICOLON \n";;}
    break;

  case 6:
#line 121 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"unit: import_stmt class_decl\n";;}
    break;

  case 7:
#line 122 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"unit: class_decl\n";;}
    break;

  case 8:
#line 125 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"class_decl: class_h class_body\n"; ;}
    break;

  case 9:
#line 126 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
													if(strcmp(sto_mod.back(),"final")==0)
													{
														t->setIs_final(true);
													}
													else
													{
														t->setIs_static(true);
													}
													sto_mod.pop();
													Streams::verbose()<<"class_decl: storage modef class_h class_body\n"; ;}
    break;

  case 10:
#line 137 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
													Streams::verbose()<<"class_decl: STATIC FINAL class_h class_body\n"; 
													t->setIs_static(true);
													t->setIs_final(true);
													;}
    break;

  case 11:
#line 142 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
													t->setIs_static(true);
													t->setIs_final(true);
													Streams::verbose()<<"class_decl: FINAL STATIC class_h class_body\n"; ;}
    break;

  case 12:
#line 148 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[0].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
					;}
    break;

  case 13:
#line 153 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[-1].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 14:
#line 159 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[0].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								;}
    break;

  case 15:
#line 164 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-1].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 16:
#line 170 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[0].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
											;}
    break;

  case 17:
#line 175 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-1].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-4].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 18:
#line 181 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {							
									colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected class name at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected class name","");
		;}
    break;

  case 19:
#line 186 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected Reserved word at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected Reserved word","");
							 ;}
    break;

  case 20:
#line 191 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected Reserved word at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected Reserved word","");
						 ;}
    break;

  case 21:
#line 198 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"expr_list: expr_list COMMA expr\n";;}
    break;

  case 22:
#line 199 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"expr_list: expr %prec stmt_1\n";;}
    break;

  case 23:
#line 202 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
												t_id=new char[10];
												strcpy(t_id,temp_id.c_str());
												inhertance_list.push_back(t_id);	
												Streams::verbose()<<"unit_list:	unit_list COMMA unit_import\n";
												temp_id="";
												;}
    break;

  case 24:
#line 209 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {	
								t_id=new char[10];
								strcpy(t_id,temp_id.c_str());
								inhertance_list.push_back(t_id);
								Streams::verbose()<<"unit_list:	unit_import\n";
								temp_id="";
							;}
    break;

  case 25:
#line 218 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									temp_id=temp_id+"."+(yyvsp[0].r.strVal);
									Streams::verbose()<<"unit_import: unit_import DOT ID\n";
								;}
    break;

  case 26:
#line 222 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
					temp_id=temp_id+(yyvsp[0].r.strVal);
					Streams::verbose()<<"unit_import: ID\n";
				
				;}
    break;

  case 27:
#line 230 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
								Streams::verbose()<<"class_body:COLON END	\n";colonStack.pop();
								(yyval.type)=p->finishTypeDeclaration(t);
							;}
    break;

  case 28:
#line 234 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"class_body:COLON dm_list END\n";colonStack.pop();
										(yyval.type)=p->finishTypeDeclaration(t);
									;}
    break;

  case 29:
#line 237 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
					ColonStack* temp = colonStack.top();
					colonStack.pop();
					Streams::verbose()<<"Error: Expected ':' at Line No:"<<temp->lineNum<<" Column No:"<<temp->colNum<<endl;
					err->errQ->enqueue(temp->lineNum,temp->colNum,"Expected ':' ","");
				  ;}
    break;

  case 30:
#line 243 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
					ColonStack* temp = colonStack.top();
					colonStack.pop();
					Streams::verbose()<<"Error: Expected ':' at Line No:"<<temp->lineNum<<" Column No:"<<temp->colNum<<endl;
						(yyval.type)=p->finishTypeDeclaration(t);
					err->errQ->enqueue(temp->lineNum,temp->colNum,"Expected ':' ","");
				  ;}
    break;

  case 31:
#line 252 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm_list: dm_list DEF dm\n";;}
    break;

  case 32:
#line 253 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm_list: DEF dm\n";;}
    break;

  case 33:
#line 256 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm:	var_declaration SEMICOLON\n";;}
    break;

  case 34:
#line 257 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm:	method_declaration\n";;}
    break;

  case 35:
#line 258 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm:	class_decl\n";;}
    break;

  case 36:
#line 259 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm: STATIC var_declaration SEMICOLON\n";;}
    break;

  case 37:
#line 260 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm: STATIC	var_declaration\n";;}
    break;

  case 38:
#line 261 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm: FINAL var_declaration SEMICOLON\n";;}
    break;

  case 39:
#line 262 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm: FINAL var_declaration\n";;}
    break;

  case 40:
#line 263 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm: STATIC FINAL var_declaration SEMICOLON\n";;}
    break;

  case 41:
#line 264 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm:STATIC FINAL var_declaration\n";;}
    break;

  case 42:
#line 265 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm: FINAL STATIC var_declaration SEMICOLON\n";;}
    break;

  case 43:
#line 266 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm: FINAL STATIC var_declaration\n";;}
    break;

  case 44:
#line 267 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
							Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
							err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"Expected ';' ","");
						   ;}
    break;

  case 45:
#line 273 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									Streams::verbose()<<"var_declaration: access_modef ID\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod, yylval.r.lineNum, yylval.r.colNum);
									v=(yyval.var);
									acc_mod="";
									;}
    break;

  case 46:
#line 279 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"var_declaration: storage_modef ID\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod, yylval.r.lineNum, yylval.r.colNum);
									v=(yyval.var);
									if(strcmp(sto_mod.back(),"final")==0)
													{
														v->setIsConst(true);
													}
													else
													{
														v->set_static(true);
													}
									sto_mod.pop();
				
				;}
    break;

  case 47:
#line 293 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"var_declaration: ID\n";
										(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod, yylval.r.lineNum, yylval.r.colNum);
										v=(yyval.var);
									;}
    break;

  case 48:
#line 297 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"var_declaration: access_modef ID ASSIGN expr\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod, yylval.r.lineNum, yylval.r.colNum);
													v=(yyval.var);
													acc_mod="";
													;}
    break;

  case 49:
#line 302 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"var_declaration: storage_modef ID ASSIGN expr\n";;}
    break;

  case 50:
#line 303 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"var_declaration: ID ASSIGN expr\n";
										(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod, yylval.r.lineNum, yylval.r.colNum);
													v=(yyval.var);
										;}
    break;

  case 51:
#line 307 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"var_declaration: access_modef storage_modef ID\n";;}
    break;

  case 52:
#line 308 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"var_declaration: storage_modef access_modef ID\n";;}
    break;

  case 53:
#line 309 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"var_declaration: access_modef storage_modef ID ASSIGN expr\n";;}
    break;

  case 54:
#line 310 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"var_declaration: storage_modef access_modef ID ASSIGN expr\n";;}
    break;

  case 55:
#line 311 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"var_declaration: STATIC access_modef FINAL ID ASSIGN expr\n";;}
    break;

  case 56:
#line 312 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"var_declaration: FINAL access_modef FINAL ID ASSIGN expr\n";;}
    break;

  case 57:
#line 313 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
											Streams::verbose()<<"Error: UN Expected IDENTIFIER Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)-strlen((yyvsp[-1].r.strVal)),"UN Expected IDENTIFIER ","");
										  ;}
    break;

  case 58:
#line 317 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
							Streams::verbose()<<"Error: UN Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[0].r.colNum)-strlength((yyvsp[0].r.strVal))<<endl;
							err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[0].r.colNum)-strlen((yyvsp[0].r.strVal)),"UN Expected IDENTIFIER ","");						
						;}
    break;

  case 59:
#line 323 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_declaration: method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false);parameters.clear();;}
    break;

  case 60:
#line 324 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_declaration: access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false);parameters.clear();;}
    break;

  case 61:
#line 325 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_declaration: storage_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false);parameters.clear();;}
    break;

  case 62:
#line 326 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_declaration: access_modef storage_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false);parameters.clear();;}
    break;

  case 63:
#line 327 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_declaration: storage_modef access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false);parameters.clear();;}
    break;

  case 64:
#line 328 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_declaration: STATIC access_modef FINAL method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true);parameters.clear();;}
    break;

  case 65:
#line 329 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_declaration: FINAL access_modef STATIC method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true);parameters.clear();;}
    break;

  case 66:
#line 333 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S arguments CLOSE_S \n";testfunction = p->createTypeFunctionHeader(t,ss,pp,ff, (yyvsp[-3].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);pp=true;ff=false;ss=false;parameters.clear();;}
    break;

  case 67:
#line 334 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S ID CLOSE_S \n";parameters.push_back((yyvsp[-1].r.strVal));testfunction = p->createTypeFunctionHeader(t,ss,pp,ff, (yyvsp[-3].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);pp=true;ff=false;ss=false;parameters.clear();;}
    break;

  case 68:
#line 335 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S CLOSE_S \n";testfunction = p->createTypeFunctionHeader(t,ss,pp,ff, (yyvsp[-2].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);pp=true;ff=false;ss=false;parameters.clear();;}
    break;

  case 69:
#line 336 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
									  ;}
    break;

  case 70:
#line 340 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
									  ;}
    break;

  case 71:
#line 344 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)+1<<endl;
												err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)+1,"Expected '(' ","");
											   ;}
    break;

  case 72:
#line 348 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)+1<<endl;
												err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)+1,"Expected '(' ","");
											   ;}
    break;

  case 73:
#line 352 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue((yyvsp[-3].r.lineNum),yylval.r.colNum-strlength(yylval.r.strVal),"Expected ')' ","");
													 ;}
    break;

  case 74:
#line 356 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[0].r.colNum)+1<<endl;
														err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[0].r.colNum)+1,"Expected ')' ","");
													 ;}
    break;

  case 75:
#line 364 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"arguments:	args_list\n";;}
    break;

  case 76:
#line 365 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"arguments:	default_args_list\n";;}
    break;

  case 77:
#line 366 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"arguments:	args_list COMMA default_args_list\n";;}
    break;

  case 78:
#line 368 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"args_list:	args_list COMMA arg\n";;}
    break;

  case 79:
#line 369 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"args_list: ID COMMA arg \n"; parameters.push_back((yyvsp[-2].r.strVal));;}
    break;

  case 80:
#line 370 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"args_list:	args_list COMMA ID \n"; parameters.push_back((yyvsp[0].r.strVal));;}
    break;

  case 81:
#line 371 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"args_list:	ID COMMA ID \n"; parameters.push_back((yyvsp[-2].r.strVal)); parameters.push_back((yyvsp[0].r.strVal));;}
    break;

  case 82:
#line 372 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"args_list: arg \n";;}
    break;

  case 83:
#line 375 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
						Streams::verbose()<<"arg:	STAR ID \n";std::string tempstr((yyvsp[0].r.strVal));
						std::string erro("*" + tempstr);
						char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
					;}
    break;

  case 84:
#line 381 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"arg:	STAR STAR ID \n";std::string tempstr((yyvsp[0].r.strVal));
						std::string erro("**" + tempstr);
						char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);;}
    break;

  case 85:
#line 385 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
							Streams::verbose()<<"Error: Un Expected '*' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
							err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))," Un Expected '*' ","");
						;}
    break;

  case 86:
#line 389 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
								Streams::verbose()<<"Error: Un Expected '**' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))," Un Expected '**' ","");
							 ;}
    break;

  case 87:
#line 396 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"default_args_list: default_args_list COMMA default_arg\n";;}
    break;

  case 88:
#line 397 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"default_args_list: default_arg \n";;}
    break;

  case 89:
#line 398 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
														Streams::verbose()<<"Error: default argument not at end of parameter list at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"default argument not at end of parameter list","");					
														;}
    break;

  case 90:
#line 402 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
														Streams::verbose()<<"Error: default argument not at end of parameter list at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"default argument not at end of parameter list","");					
														;}
    break;

  case 91:
#line 408 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"default_arg:	ID ASSIGN expr \n";parameters.push_back((yyvsp[-2].r.strVal));;}
    break;

  case 92:
#line 409 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
										Streams::verbose()<<"arg:	STAR ID ASSIGN expr \n";std::string tempstr((yyvsp[-2].r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
									;}
    break;

  case 93:
#line 415 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"default_arg:	STAR STAR ID ASSIGN expr \n";std::string tempstr((yyvsp[-2].r.strVal));
										std::string erro("**" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);;}
    break;

  case 94:
#line 419 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
											Streams::verbose()<<"Error: Un Expected '**' at Line No:"<<(yyvsp[-5].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))," Un Expected '**' ","");
										;}
    break;

  case 95:
#line 423 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
											Streams::verbose()<<"Error: Un Expected '*' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))," Un Expected '*' ","");
										;}
    break;

  case 96:
#line 429 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"COLON  END \n";;}
    break;

  case 97:
#line 430 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"block_stmt: COLON stmt_list END \n";;}
    break;

  case 98:
#line 431 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
						Streams::verbose()<<"Error: Expected ':' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected ':' ","");			 
						;}
    break;

  case 99:
#line 438 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt_list:	stmt_list stmt \n";;}
    break;

  case 100:
#line 439 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt_list:	stmt \n";;}
    break;

  case 101:
#line 442 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt: 		if_stmt\n";;}
    break;

  case 102:
#line 443 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	while_stmt\n";;}
    break;

  case 103:
#line 444 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	for_stmt\n";;}
    break;

  case 104:
#line 445 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	try_stmt\n";;}
    break;

  case 105:
#line 446 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	with_stmt\n";;}
    break;

  case 106:
#line 447 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	block_stmt\n";;}
    break;

  case 107:
#line 448 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	simple_stmt_list\n";;}
    break;

  case 108:
#line 449 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	ID SEMICOLON\n";;}
    break;

  case 109:
#line 450 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	ID DOT ID SEMICOLON\n";;}
    break;

  case 110:
#line 451 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	ID COMMA ID DOT ID DOT ID SEMICOLON\n";;}
    break;

  case 111:
#line 452 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	ID DOT ID COMMA ID DOT ID DOT ID SEMICOLON\n";;}
    break;

  case 112:
#line 455 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt\n";;}
    break;

  case 113:
#line 456 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt ELSE stmt\n";;}
    break;

  case 114:
#line 457 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt elif_stmt\n";;}
    break;

  case 115:
#line 458 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt elif_stmt ELSE stmt\n";;}
    break;

  case 116:
#line 461 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"elif_stmt: 	elif_header stmt elif_stmt\n";;}
    break;

  case 117:
#line 462 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"elif_stmt:	elif_header stmt\n";;}
    break;

  case 118:
#line 465 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"if_header:	IF expr \n";;}
    break;

  case 119:
#line 468 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"elif_header:	ELIF expr \n";;}
    break;

  case 120:
#line 471 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"while_stmt: while_header stmt\n";;}
    break;

  case 121:
#line 476 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"while_header: WHILE expr \n";;}
    break;

  case 122:
#line 477 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    { 
						Streams::verbose()<<"Error: Expected reserved word 'while' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected reserved word 'while' ","");
					 ;}
    break;

  case 123:
#line 483 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"for_stmt: 	for_header stmt\n";;}
    break;

  case 124:
#line 486 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"for_header: FOR target_list IN expr_list \n";;}
    break;

  case 125:
#line 487 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"for_header: FOR target_list IN list_display \n";;}
    break;

  case 126:
#line 488 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID COMMA ID IN expr_list \n";;}
    break;

  case 127:
#line 489 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID COMMA ID IN list_display \n";;}
    break;

  case 128:
#line 490 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID IN expr_list \n";;}
    break;

  case 129:
#line 491 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID IN list_display \n";;}
    break;

  case 130:
#line 492 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 131:
#line 496 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 132:
#line 503 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import_list:	import_list COMMA import\n";;}
    break;

  case 133:
#line 504 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA import_list \n";;}
    break;

  case 134:
#line 505 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA ID \n";;}
    break;

  case 135:
#line 506 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA ID DOT ID \n";;}
    break;

  case 136:
#line 507 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA import_list \n";;}
    break;

  case 137:
#line 508 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA ID \n";;}
    break;

  case 138:
#line 509 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA ID DOT ID \n";;}
    break;

  case 139:
#line 510 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import_list:	import\n";;}
    break;

  case 140:
#line 514 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import: import DOT ID\n";;}
    break;

  case 141:
#line 515 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import:	ID DOT ID DOT ID;";}
    break;

  case 142:
#line 519 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target_list:	target_list COMMA target\n";;}
    break;

  case 143:
#line 520 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA ID COMMA target\n";;}
    break;

  case 144:
#line 521 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target_list:	target_list COMMA ID\n";;}
    break;

  case 145:
#line 522 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA ID COMMA ID\n";;}
    break;

  case 146:
#line 523 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA target\n";;}
    break;

  case 147:
#line 524 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target_list:	target\n";;}
    break;

  case 148:
#line 527 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"try_stmt: 	TRY  stmt except_stmt\n";;}
    break;

  case 149:
#line 528 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"try_stmt: 	TRY  stmt finally_stmt\n";;}
    break;

  case 150:
#line 531 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"finally_stmt: 	FINALLY COLON block_stmt\n";;}
    break;

  case 151:
#line 534 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"except_stmt:	EXCEPT  stmt\n";;}
    break;

  case 152:
#line 535 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"except_stmt:	EXCEPT  expr stmt\n";;}
    break;

  case 153:
#line 538 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"with_stmt:	WITH expr \n";;}
    break;

  case 154:
#line 539 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"with_stmt:	WITH expr AS target \n";;}
    break;

  case 155:
#line 542 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	expr_list\n";;}
    break;

  case 156:
#line 543 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	assert_stmt\n";;}
    break;

  case 157:
#line 544 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	assignment_stmt\n";;}
    break;

  case 158:
#line 546 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	PASS\n";;}
    break;

  case 159:
#line 547 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	del_stmt\n";;}
    break;

  case 160:
#line 548 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	print_stmt\n";;}
    break;

  case 161:
#line 549 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	return_stmt\n";;}
    break;

  case 162:
#line 550 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	yield_stmt\n";;}
    break;

  case 163:
#line 551 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	raise_stmt\n";;}
    break;

  case 164:
#line 552 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	BREAK\n";;}
    break;

  case 165:
#line 553 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	CONTINUE\n";;}
    break;

  case 166:
#line 554 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	import_list\n";;}
    break;

  case 167:
#line 555 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	global_stmt\n";;}
    break;

  case 168:
#line 558 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"assert_stmt: 	ASSERT expr\n";;}
    break;

  case 169:
#line 559 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"assert_stmt:	ASSERT expr COMMA expr\n";;}
    break;

  case 170:
#line 561 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : expr_list\n";;}
    break;

  case 171:
#line 562 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : parenth_form\n";;}
    break;

  case 172:
#line 563 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : list_display\n";;}
    break;

  case 173:
#line 564 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : dict_display\n";;}
    break;

  case 174:
#line 567 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	target_list ASSIGN expr_list\n";;}
    break;

  case 175:
#line 568 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	id_dot ASSIGN expr_list\n";;}
    break;

  case 176:
#line 569 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	ID COMMA ID ASSIGN expr_list\n";;}
    break;

  case 177:
#line 570 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
																		Streams::verbose()<<"assignment_stmt:	self dot amer\n";
																		cout<<"assignment list"<<endl;
																		(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod, yylval.r.lineNum, yylval.r.colNum,true);
																		v=(yyval.var);
																		acc_mod="";
																	;}
    break;

  case 178:
#line 582 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL target_list\n";;}
    break;

  case 179:
#line 583 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID COMMA ID\n";;}
    break;

  case 180:
#line 584 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID\n";;}
    break;

  case 181:
#line 587 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"return_stmt:	RETURN\n";;}
    break;

  case 182:
#line 588 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"return_stmt:	RETURN expr_list\n";;}
    break;

  case 183:
#line 591 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"yield_stmt:		yield_expression\n";;}
    break;

  case 184:
#line 594 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"print_stmt: PRINT expr_list\n";;}
    break;

  case 185:
#line 595 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"print_stmt:	PRINT MORE_THAN MORE_THAN expr_list\n";;}
    break;

  case 186:
#line 596 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected reserved word 'print' ","");
								;}
    break;

  case 187:
#line 600 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
												err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal)),"Expected reserved word 'print' ","");
												;}
    break;

  case 188:
#line 605 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"global_stmt :GLOBAL id_list\n";;}
    break;

  case 189:
#line 606 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+(yyvsp[-1].r.strVal)<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected IDENTIFIER ","");
									   ;}
    break;

  case 190:
#line 612 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"id_list: 	ID COMMA id_list\n";;}
    break;

  case 191:
#line 613 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"id_list:	ID\n";;}
    break;

  case 192:
#line 616 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"raise_stmt: RAISE\n";;}
    break;

  case 193:
#line 617 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"raise_stmt:	RAISE expr\n";;}
    break;

  case 194:
#line 618 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"raise_stmt:	RAISE expr COMMA expr\n";;}
    break;

  case 195:
#line 619 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected expression at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
													err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected expression ","");
												 ;}
    break;

  case 196:
#line 623 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected reserved word 'raise' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
													err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'raise' ","");
												 ;}
    break;

  case 197:
#line 629 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"access_modef: PRIVATE\n";acc_mod="private";pp=true;;}
    break;

  case 198:
#line 630 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"access_modef:	PUBLIC\n";acc_mod="public";pp=false;}
    break;

  case 199:
#line 631 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"access_modef:	PROTECTED\n";acc_mod="protected";;}
    break;

  case 200:
#line 635 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {sto_mod="static";Streams::verbose()<<"storage_modef: STATIC\n"; ss=true;;}
    break;

  case 201:
#line 636 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {sto_mod="final";Streams::verbose()<<"storage_modef: FINAL\n"; ff=true;;}
    break;

  case 202:
#line 638 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S target_list CLOSE_S \n";;}
    break;

  case 203:
#line 639 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S ID COMMA ID CLOSE_S\n";;}
    break;

  case 204:
#line 640 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S ID CLOSE_S\n";;}
    break;

  case 205:
#line 641 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D target_list CLOSE_D\n";;}
    break;

  case 206:
#line 642 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D ID COMMA ID CLOSE_D\n";;}
    break;

  case 207:
#line 643 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D ID CLOSE_D\n";;}
    break;

  case 208:
#line 644 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target: 	attributeref\n";;}
    break;

  case 209:
#line 645 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target: 	subscription\n";;}
    break;

  case 210:
#line 648 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"attributeref: primary DOT ID\n";;}
    break;

  case 211:
#line 649 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"attributeref: ID DOT ID\n";;}
    break;

  case 212:
#line 652 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"primary: 	atom\n";;}
    break;

  case 213:
#line 653 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"primary:	attributeref\n";;}
    break;

  case 214:
#line 654 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"primary:	subscription\n";;}
    break;

  case 215:
#line 655 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"primary:	call\n";;}
    break;

  case 216:
#line 658 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"atom:	enclosure\n";;}
    break;

  case 217:
#line 659 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"atom:	literal\n";	;}
    break;

  case 218:
#line 662 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"literal:    STRING_VALUE\n";;}
    break;

  case 219:
#line 663 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"literal:	INTEGER_VALUE\n";;}
    break;

  case 220:
#line 664 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"literal:	LONG_VALUE\n";;}
    break;

  case 221:
#line 665 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"literal:	FLOAT_VALUE\n";;}
    break;

  case 222:
#line 666 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"literal:	CHAR_VALUE\n";;}
    break;

  case 223:
#line 669 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"enclosure:	parenth_form\n";;}
    break;

  case 224:
#line 670 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"enclosure:	list_display\n";;}
    break;

  case 225:
#line 671 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"enclosure:	string_conversion\n";;}
    break;

  case 226:
#line 672 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"enclosure:	yield_atom\n";;}
    break;

  case 227:
#line 673 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"enclosure:	dict_display\n";;}
    break;

  case 228:
#line 676 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dict_display: OPEN_C CLOSE_C \n";;}
    break;

  case 229:
#line 677 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dict_display: OPEN_C key_datum_list CLOSE_C \n";;}
    break;

  case 230:
#line 679 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum_list COMMA key_datum \n";;}
    break;

  case 231:
#line 680 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum_list COMMA\n";;}
    break;

  case 232:
#line 681 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum\n";;}
    break;

  case 233:
#line 683 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"key_datum : expr COLON expr\n";;}
    break;

  case 234:
#line 686 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"parenth_form : 	OPEN_S expr_list CLOSE_S\n";;}
    break;

  case 235:
#line 687 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"parenth_form : 	OPEN_S  CLOSE_S\n";;}
    break;

  case 236:
#line 688 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-1,"Expected '(' ","");
								;}
    break;

  case 237:
#line 692 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected ')' ","");
										;}
    break;

  case 238:
#line 696 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
													err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))," Expected '(' ","");
												 ;}
    break;

  case 239:
#line 700 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
													err->errQ->enqueue((yyvsp[-2].r.lineNum),yylval.r.colNum-strlength(yylval.r.strVal)," Expected ')' ","");
												 ;}
    break;

  case 240:
#line 707 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"list_display:	OPEN_D  expr_list CLOSE_D\n";;}
    break;

  case 241:
#line 708 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"list_display:	OPEN_D CLOSE_D\n";;}
    break;

  case 242:
#line 711 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"string_conversion:	RE_COT expr_list RE_COT\n";;}
    break;

  case 243:
#line 714 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"yield_atom:		OPEN_S yield_expression CLOSE_S\n";;}
    break;

  case 244:
#line 717 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"yield_expression:	YIELD\n";;}
    break;

  case 245:
#line 718 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"yield_expression:	YIELD expr_list\n";;}
    break;

  case 246:
#line 721 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"subscription:	PRIMARY OPEN_D expr_list CLOSE_D\n";;}
    break;

  case 247:
#line 725 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"call:	PRIMARY OPEN_D args_list CLOSE_D\n";;}
    break;

  case 248:
#line 726 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"call:	PRIMARY OPEN_D ID CLOSE_D\n";;}
    break;

  case 249:
#line 730 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"expr:	condition\n";;}
    break;

  case 250:
#line 731 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"expr:	literal\n";;}
    break;

  case 251:
#line 732 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"expr:	expr op expr\n";;}
    break;

  case 252:
#line 733 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									Streams::verbose()<<"expr:	long_id\n";
									
									;}
    break;

  case 253:
#line 737 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									Streams::verbose()<<"expr:	self.id\n";
									cout<<"hhhhhhhhh"<<endl;
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod, yylval.r.lineNum, yylval.r.colNum,true);
																		v=(yyval.var);
																		acc_mod="";
									;}
    break;

  case 254:
#line 744 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
										Streams::verbose()<<"expr:	self.id()\n";
									cout<<"hhhhhhhhh"<<endl;
									;}
    break;

  case 255:
#line 748 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected operand at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.lineNum)-strlength((yyvsp[-1].r.strVal))<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlen((yyvsp[-1].r.strVal)),"Expected operand ","");
									  ;}
    break;

  case 256:
#line 754 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"condition: expr EQUAL expr\n";;}
    break;

  case 257:
#line 755 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"condition: expr NOT_EQUAL expr\n";;}
    break;

  case 258:
#line 756 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"condition: expr LESS_THAN expr\n";;}
    break;

  case 259:
#line 757 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"condition: expr LESS_OR_EQUAL expr\n";;}
    break;

  case 260:
#line 758 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"condition: expr MORE_THAN expr\n";;}
    break;

  case 261:
#line 759 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"condition: expr MORE_OR_EQUAL expr\n";;}
    break;

  case 262:
#line 761 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"id_dot:	ID\n";;}
    break;

  case 263:
#line 762 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"id_dot:	id_dot DOT ID\n";;}
    break;

  case 264:
#line 771 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot\n";;}
    break;

  case 265:
#line 772 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot parenth_form\n";;}
    break;

  case 266:
#line 775 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"op :PLUS\n";;}
    break;

  case 267:
#line 776 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"op :MINUS\n";;}
    break;

  case 268:
#line 777 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"op :DIV\n";;}
    break;

  case 269:
#line 778 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"op :MOD\n";;}
    break;

  case 270:
#line 779 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"op :OR\n";;}
    break;

  case 271:
#line 780 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"op :NOT\n";;}
    break;

  case 272:
#line 781 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"op :MULTI\n";;}
    break;

  case 273:
#line 782 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"op :AND\n";;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 3754 "yacc.cpp"

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


#line 784 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"

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
