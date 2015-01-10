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
     LESS_THAN = 308,
     LESS_OR_EQUAL = 309,
     MORE_THAN = 310,
     MORE_OR_EQUAL = 311,
     TRUE = 312,
     FALSE = 313,
     EXCEPT = 314,
     SEMICOLON = 315,
     NEW_LINE = 316,
     PASS = 317,
     CHAR_VALUE = 318,
     OPEN_S = 319,
     STRING_VALUE = 320,
     INTEGER_VALUE = 321,
     BREAK = 322,
     CONTINUE = 323,
     LONG_VALUE = 324,
     FLOAT_VALUE = 325,
     stmt_1_2 = 326,
     stmt_11 = 327,
     stmt_10 = 328,
     stmt_9 = 329,
     stmt_7 = 330,
     stmt_6 = 331,
     stmt_5 = 332,
     stmt_4 = 333,
     stmt_3 = 334,
     stmt_2 = 335,
     stmt_1 = 336,
     stmt_8 = 337
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
#define LESS_THAN 308
#define LESS_OR_EQUAL 309
#define MORE_THAN 310
#define MORE_OR_EQUAL 311
#define TRUE 312
#define FALSE 313
#define EXCEPT 314
#define SEMICOLON 315
#define NEW_LINE 316
#define PASS 317
#define CHAR_VALUE 318
#define OPEN_S 319
#define STRING_VALUE 320
#define INTEGER_VALUE 321
#define BREAK 322
#define CONTINUE 323
#define LONG_VALUE 324
#define FLOAT_VALUE 325
#define stmt_1_2 326
#define stmt_11 327
#define stmt_10 328
#define stmt_9 329
#define stmt_7 330
#define stmt_6 331
#define stmt_5 332
#define stmt_4 333
#define stmt_3 334
#define stmt_2 335
#define stmt_1 336
#define stmt_8 337




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
	#include "MyParser.h"
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
#line 60 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 320 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 332 "yacc.cpp"

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
#define YYLAST   1882

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  83
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  73
/* YYNRULES -- Number of rules. */
#define YYNRULES  262
/* YYNRULES -- Number of states. */
#define YYNSTATES  481

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   337

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
      75,    76,    77,    78,    79,    80,    81,    82
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     6,     9,    11,    15,    18,    20,    23,
      27,    32,    37,    40,    44,    49,    55,    61,    68,    71,
      75,    78,    82,    84,    88,    90,    94,    96,    99,   103,
     105,   108,   112,   115,   118,   120,   122,   125,   128,   131,
     133,   138,   143,   147,   151,   155,   161,   167,   174,   181,
     186,   190,   193,   197,   201,   206,   211,   217,   223,   228,
     233,   237,   242,   247,   252,   257,   262,   267,   269,   271,
     275,   279,   283,   287,   291,   293,   296,   300,   304,   309,
     313,   315,   320,   325,   329,   334,   340,   347,   353,   356,
     360,   363,   366,   368,   370,   372,   374,   376,   378,   380,
     383,   386,   391,   400,   411,   414,   419,   423,   429,   433,
     436,   439,   442,   445,   448,   452,   455,   460,   465,   472,
     479,   484,   489,   495,   501,   505,   509,   513,   519,   525,
     531,   539,   541,   545,   551,   555,   561,   565,   571,   575,
     577,   581,   585,   588,   591,   595,   598,   603,   605,   607,
     609,   611,   613,   615,   617,   619,   621,   623,   625,   627,
     629,   632,   637,   639,   641,   643,   645,   649,   653,   659,
     662,   667,   670,   672,   675,   677,   680,   685,   689,   694,
     697,   700,   704,   706,   708,   711,   716,   721,   727,   729,
     731,   733,   735,   737,   741,   747,   751,   755,   761,   765,
     767,   769,   773,   777,   779,   781,   783,   785,   787,   789,
     791,   793,   795,   797,   799,   801,   803,   805,   807,   809,
     812,   816,   820,   823,   825,   829,   833,   836,   839,   842,
     846,   850,   854,   857,   861,   865,   867,   870,   875,   880,
     885,   887,   889,   893,   895,   899,   903,   907,   911,   915,
     919,   923,   925,   929,   931,   934,   936,   938,   940,   942,
     944,   946,   948
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
      84,     0,    -1,    85,     9,    -1,    85,    87,    -1,    87,
      -1,     3,    91,    60,    -1,    86,    88,    -1,    88,    -1,
      89,    93,    -1,   134,    89,    93,    -1,    52,    51,    89,
      93,    -1,    51,    52,    89,    93,    -1,     4,     5,    -1,
     133,     4,     5,    -1,     4,     5,    64,     7,    -1,   133,
       4,     5,    64,     7,    -1,     4,     5,    64,    91,     7,
      -1,   133,     4,     5,    64,    91,     7,    -1,     4,     1,
      -1,     5,     1,     5,    -1,     5,     1,    -1,    90,     8,
     151,    -1,   151,    -1,    91,     8,    92,    -1,    92,    -1,
      92,     9,     5,    -1,     5,    -1,     6,    10,    -1,     6,
      94,    10,    -1,    10,    -1,    94,    10,    -1,    94,    13,
      95,    -1,    13,    95,    -1,    96,    60,    -1,    97,    -1,
      88,    -1,    96,     1,    -1,   133,     5,    -1,   134,     5,
      -1,     5,    -1,   133,     5,    14,   151,    -1,   134,     5,
      14,   151,    -1,     5,    14,   151,    -1,   133,   134,     5,
      -1,   134,   133,     5,    -1,   133,   134,     5,    14,   151,
      -1,   134,   133,     5,    14,   151,    -1,    52,   133,    51,
       5,    14,   151,    -1,    51,   133,    52,     5,    14,   151,
      -1,   133,     5,     5,     1,    -1,     5,     5,     1,    -1,
      98,   104,    -1,   133,    98,   104,    -1,   134,    98,   104,
      -1,   133,   134,    98,   104,    -1,   134,   133,    98,   104,
      -1,    52,   133,    51,    98,   104,    -1,    51,   133,    52,
      98,   104,    -1,     5,    64,    99,     7,    -1,     5,    64,
       5,     7,    -1,     5,    64,     7,    -1,     1,    64,    99,
       7,    -1,     1,    64,     5,     7,    -1,     5,     1,    99,
       7,    -1,     5,     1,     5,     7,    -1,     5,    64,    99,
       1,    -1,     5,    64,     5,     1,    -1,   100,    -1,   102,
      -1,   100,     8,   102,    -1,   100,     8,   101,    -1,     5,
       8,   101,    -1,   100,     8,     5,    -1,     5,     8,     5,
      -1,   101,    -1,    15,     5,    -1,    15,    15,     5,    -1,
       5,    15,     1,    -1,     5,    15,    15,     1,    -1,   102,
       8,   103,    -1,   103,    -1,   102,     8,   100,     1,    -1,
     102,     8,     5,     1,    -1,     5,    14,   151,    -1,    15,
       5,    14,   151,    -1,    15,    15,     5,    14,   151,    -1,
       5,    15,     1,    15,    14,   151,    -1,     5,    15,     1,
      14,   151,    -1,     6,    10,    -1,     6,   105,    10,    -1,
       1,    10,    -1,   105,   106,    -1,   106,    -1,   107,    -1,
     111,    -1,   113,    -1,   118,    -1,   121,    -1,   104,    -1,
     122,    60,    -1,     5,    60,    -1,     5,     9,     5,    60,
      -1,     5,     8,     5,     9,     5,     9,     5,    60,    -1,
       5,     9,     5,     8,     5,     9,     5,     9,     5,    60,
      -1,   109,   106,    -1,   109,   106,    16,   106,    -1,   109,
     106,   108,    -1,   109,   106,   108,    16,   106,    -1,   110,
     106,   108,    -1,   110,   106,    -1,    17,   151,    -1,    18,
     151,    -1,   112,   106,    -1,    19,   151,    -1,     5,     1,
     151,    -1,   114,   106,    -1,    20,   117,    21,    90,    -1,
      20,   117,    21,   145,    -1,    20,     5,     8,     5,    21,
      90,    -1,    20,     5,     8,     5,    21,   145,    -1,    20,
       5,    21,    90,    -1,    20,     5,    21,   145,    -1,     5,
       1,     5,    21,    90,    -1,     5,     1,     5,    21,   145,
      -1,   115,     8,   116,    -1,     5,     8,   115,    -1,     5,
       8,     5,    -1,     5,     8,     5,     9,     5,    -1,     5,
       9,     5,     8,   115,    -1,     5,     9,     5,     8,     5,
      -1,     5,     9,     5,     8,     5,     9,     5,    -1,   116,
      -1,   116,     9,     5,    -1,     5,     9,     5,     9,     5,
      -1,   117,     8,   135,    -1,     5,     8,     5,     8,   135,
      -1,   117,     8,     5,    -1,     5,     8,     5,     8,     5,
      -1,     5,     8,   135,    -1,   135,    -1,    22,   106,   120,
      -1,    22,   106,   119,    -1,    23,   104,    -1,    59,   106,
      -1,    59,   151,   106,    -1,    26,   151,    -1,    26,   151,
      27,   135,    -1,    90,    -1,   123,    -1,   125,    -1,    62,
      -1,   126,    -1,   129,    -1,   127,    -1,   128,    -1,   132,
      -1,    67,    -1,    68,    -1,   115,    -1,   130,    -1,    28,
     151,    -1,    28,   151,     8,   151,    -1,    90,    -1,   144,
      -1,   145,    -1,   141,    -1,   117,    14,   124,    -1,   153,
      14,   124,    -1,     5,     8,     5,    14,   124,    -1,    30,
     117,    -1,    30,     5,     8,     5,    -1,    30,     5,    -1,
      31,    -1,    31,    90,    -1,   148,    -1,    32,    90,    -1,
      32,    55,    55,    90,    -1,     5,     1,    90,    -1,     5,
      55,    55,    90,    -1,    33,   131,    -1,    33,     1,    -1,
       5,     8,   131,    -1,     5,    -1,    34,    -1,    34,   151,
      -1,    34,   151,     8,   151,    -1,    34,   151,     8,     1,
      -1,     5,     1,   151,     8,   151,    -1,    35,    -1,    36,
      -1,    37,    -1,    52,    -1,    51,    -1,    64,   117,     7,
      -1,    64,     5,     8,     5,     7,    -1,    64,     5,     7,
      -1,    38,   117,    39,    -1,    38,     5,     8,     5,    39,
      -1,    38,     5,    39,    -1,   136,    -1,   149,    -1,   137,
       9,     5,    -1,     5,     9,     5,    -1,   138,    -1,   136,
      -1,   149,    -1,   150,    -1,   140,    -1,   139,    -1,    65,
      -1,    66,    -1,    69,    -1,    70,    -1,    63,    -1,   144,
      -1,   145,    -1,   146,    -1,   147,    -1,   141,    -1,    11,
      12,    -1,    11,   142,    12,    -1,   142,     8,   143,    -1,
     142,     8,    -1,   143,    -1,   151,     6,   151,    -1,    64,
      90,     7,    -1,    64,     7,    -1,     1,     7,    -1,    64,
       1,    -1,     1,   151,     7,    -1,    64,    90,     1,    -1,
      38,    90,    39,    -1,    38,    39,    -1,    40,    90,    40,
      -1,    64,   148,     7,    -1,    41,    -1,    41,    90,    -1,
      42,    38,    90,    39,    -1,    42,    38,   100,    39,    -1,
      42,    38,     5,    39,    -1,   152,    -1,   139,    -1,   151,
     155,   151,    -1,   154,    -1,   151,     1,   151,    -1,   151,
      29,   151,    -1,   151,    50,   151,    -1,   151,    53,   151,
      -1,   151,    54,   151,    -1,   151,    55,   151,    -1,   151,
      56,   151,    -1,     5,    -1,   153,     9,     5,    -1,   153,
      -1,   153,   144,    -1,    46,    -1,    47,    -1,    48,    -1,
      49,    -1,    43,    -1,    45,    -1,    24,    -1,    44,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   101,   101,   108,   111,   119,   121,   122,   125,   126,
     127,   128,   131,   136,   142,   147,   153,   158,   164,   169,
     174,   181,   182,   185,   192,   201,   205,   213,   217,   220,
     226,   235,   236,   239,   240,   241,   242,   248,   254,   255,
     259,   264,   265,   269,   270,   271,   272,   273,   274,   275,
     279,   285,   286,   287,   288,   289,   290,   291,   295,   296,
     297,   298,   302,   306,   310,   314,   318,   326,   327,   328,
     330,   331,   332,   333,   334,   337,   343,   347,   351,   358,
     359,   360,   364,   370,   371,   377,   381,   385,   391,   392,
     393,   400,   401,   404,   405,   406,   407,   408,   409,   410,
     411,   412,   413,   414,   417,   418,   419,   420,   423,   424,
     427,   430,   433,   438,   439,   445,   448,   449,   450,   451,
     452,   453,   454,   458,   465,   466,   467,   468,   469,   470,
     471,   472,   476,   477,   481,   482,   483,   484,   485,   486,
     489,   490,   493,   496,   497,   500,   501,   504,   505,   506,
     508,   509,   510,   511,   512,   513,   514,   515,   516,   517,
     520,   521,   523,   524,   525,   526,   529,   530,   531,   537,
     538,   539,   542,   543,   546,   549,   550,   551,   555,   560,
     561,   567,   568,   571,   572,   573,   574,   578,   584,   585,
     586,   590,   591,   593,   594,   595,   596,   597,   598,   599,
     600,   603,   604,   607,   608,   609,   610,   613,   614,   617,
     618,   619,   620,   621,   624,   625,   626,   627,   628,   631,
     632,   634,   635,   636,   638,   641,   642,   643,   647,   651,
     655,   662,   663,   666,   669,   672,   673,   676,   680,   681,
     685,   686,   687,   688,   689,   695,   696,   697,   698,   699,
     700,   702,   703,   712,   713,   716,   717,   718,   719,   720,
     721,   722,   723
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
  "MINUS", "DIV", "MOD", "NOT_EQUAL", "FINAL", "STATIC", "LESS_THAN",
  "LESS_OR_EQUAL", "MORE_THAN", "MORE_OR_EQUAL", "TRUE", "FALSE", "EXCEPT",
  "SEMICOLON", "NEW_LINE", "PASS", "CHAR_VALUE", "OPEN_S", "STRING_VALUE",
  "INTEGER_VALUE", "BREAK", "CONTINUE", "LONG_VALUE", "FLOAT_VALUE",
  "stmt_1_2", "stmt_11", "stmt_10", "stmt_9", "stmt_7", "stmt_6", "stmt_5",
  "stmt_4", "stmt_3", "stmt_2", "stmt_1", "stmt_8", "$accept", "programes",
  "program", "import_stmt", "unit", "class_decl", "class_h", "expr_list",
  "unit_list", "unit_import", "class_body", "dm_list", "dm",
  "var_declaration", "method_declaration", "method_h", "arguments",
  "args_list", "arg", "default_args_list", "default_arg", "block_stmt",
  "stmt_list", "stmt", "if_stmt", "elif_stmt", "if_header", "elif_header",
  "while_stmt", "while_header", "for_stmt", "for_header", "import_list",
  "import", "target_list", "try_stmt", "finally_stmt", "except_stmt",
  "with_stmt", "simple_stmt_list", "assert_stmt", "left_assignment_side",
  "assignment_stmt", "del_stmt", "return_stmt", "yield_stmt", "print_stmt",
  "global_stmt", "id_list", "raise_stmt", "access_modef", "storage_modef",
  "target", "attributeref", "primary", "atom", "literal", "enclosure",
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
     335,   336,   337
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    83,    84,    85,    85,    86,    87,    87,    88,    88,
      88,    88,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    90,    90,    91,    91,    92,    92,    93,    93,    93,
      93,    94,    94,    95,    95,    95,    95,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    97,    97,    97,    97,    97,    97,    97,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    99,    99,    99,
     100,   100,   100,   100,   100,   101,   101,   101,   101,   102,
     102,   102,   102,   103,   103,   103,   103,   103,   104,   104,
     104,   105,   105,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   107,   107,   107,   107,   108,   108,
     109,   110,   111,   112,   112,   113,   114,   114,   114,   114,
     114,   114,   114,   114,   115,   115,   115,   115,   115,   115,
     115,   115,   116,   116,   117,   117,   117,   117,   117,   117,
     118,   118,   119,   120,   120,   121,   121,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     123,   123,   124,   124,   124,   124,   125,   125,   125,   126,
     126,   126,   127,   127,   128,   129,   129,   129,   129,   130,
     130,   131,   131,   132,   132,   132,   132,   132,   133,   133,
     133,   134,   134,   135,   135,   135,   135,   135,   135,   135,
     135,   136,   136,   137,   137,   137,   137,   138,   138,   139,
     139,   139,   139,   139,   140,   140,   140,   140,   140,   141,
     141,   142,   142,   142,   143,   144,   144,   144,   144,   144,
     144,   145,   145,   146,   147,   148,   148,   149,   150,   150,
     151,   151,   151,   151,   151,   152,   152,   152,   152,   152,
     152,   153,   153,   154,   154,   155,   155,   155,   155,   155,
     155,   155,   155
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     2,     2,     1,     3,     2,     1,     2,     3,
       4,     4,     2,     3,     4,     5,     5,     6,     2,     3,
       2,     3,     1,     3,     1,     3,     1,     2,     3,     1,
       2,     3,     2,     2,     1,     1,     2,     2,     2,     1,
       4,     4,     3,     3,     3,     5,     5,     6,     6,     4,
       3,     2,     3,     3,     4,     4,     5,     5,     4,     4,
       3,     4,     4,     4,     4,     4,     4,     1,     1,     3,
       3,     3,     3,     3,     1,     2,     3,     3,     4,     3,
       1,     4,     4,     3,     4,     5,     6,     5,     2,     3,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     4,     8,    10,     2,     4,     3,     5,     3,     2,
       2,     2,     2,     2,     3,     2,     4,     4,     6,     6,
       4,     4,     5,     5,     3,     3,     3,     5,     5,     5,
       7,     1,     3,     5,     3,     5,     3,     5,     3,     1,
       3,     3,     2,     2,     3,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     1,     1,     1,     1,     3,     3,     5,     2,
       4,     2,     1,     2,     1,     2,     4,     3,     4,     2,
       2,     3,     1,     1,     2,     4,     4,     5,     1,     1,
       1,     1,     1,     3,     5,     3,     3,     5,     3,     1,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     3,     2,     1,     3,     3,     2,     2,     2,     3,
       3,     3,     2,     3,     3,     1,     2,     4,     4,     4,
       1,     1,     3,     1,     3,     3,     3,     3,     3,     3,
       3,     1,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       0,     0,     0,     0,   188,   189,   190,   192,   191,     0,
       0,     0,     4,     7,     0,     0,     0,    26,     0,    24,
      18,    12,    20,     0,     0,     1,     2,     3,     6,     0,
      29,     0,     8,     0,     0,     0,     0,     5,     0,     0,
      19,     0,     0,    27,     0,     0,    39,   192,   191,    35,
      32,     0,    34,     0,     0,     0,    30,     0,    13,     9,
      23,    25,    14,     0,    11,    10,    28,     0,    20,     0,
       0,     0,     0,     0,    36,    33,     0,     0,    51,    37,
     192,   191,     0,     0,    38,     0,     0,    31,     0,    16,
       0,     0,     0,    67,    74,    68,    80,    19,     0,    50,
     251,   213,   209,   210,   211,   212,   241,    42,   240,     0,
     243,     0,    60,     0,     0,     0,    90,     0,     0,    88,
       0,     0,     0,     0,     0,     0,     0,     0,   172,     0,
       0,   183,     0,     0,   235,     0,   150,     0,   156,   157,
     147,    98,     0,    92,    93,     0,    94,     0,    95,     0,
     158,   131,     0,    96,    97,     0,   148,   149,   151,   153,
     154,   152,   159,   155,   139,   199,     0,   203,   241,   207,
     218,   214,   215,   216,   217,   174,   200,   206,     0,     0,
       0,     0,     0,    52,    43,     0,     0,    53,    44,     0,
      15,     0,    62,     0,     0,     0,    75,     0,    61,     0,
       0,    64,    63,     0,   261,     0,   259,   262,   260,   255,
     256,   257,   258,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   254,    66,    59,    65,    58,     0,     0,     0,
       0,   227,     0,     0,     0,     0,     0,   100,   219,     0,
     223,     0,   110,   113,     0,     0,   208,     0,   145,     0,
     171,   169,   173,     0,   175,   180,   182,   179,     0,   251,
     232,     0,     0,     0,   236,     0,   228,   251,   226,     0,
       0,     0,     0,    89,    91,   104,   112,   115,     0,     0,
       0,     0,    99,     0,     0,     0,    49,    40,     0,    54,
      41,     0,    55,    17,    73,     0,    71,    83,    77,     0,
       0,    76,    72,    70,    69,     0,     0,    79,     0,   245,
     246,   247,   248,   249,   250,     0,   252,   228,     0,    57,
       0,    56,   229,   251,   177,   114,   126,   125,   138,   202,
       0,   222,   220,     0,     0,     0,     0,     0,     0,     0,
     141,   140,     0,     0,     0,     0,     0,     0,     0,   198,
     231,   196,   233,   251,     0,     0,   195,     0,   230,   225,
     193,   234,    21,     0,     0,   106,     0,     0,   124,   132,
     136,   134,     0,   162,   166,   165,   163,   164,   201,   167,
      45,    46,     0,    75,     0,     0,     0,    78,    84,     0,
      82,    81,     0,    48,    47,     0,     0,     0,     0,     0,
       0,     0,   101,   178,   221,     0,     0,   202,   120,   121,
     116,   117,   142,   143,     0,     0,   146,     0,   170,   176,
     181,   186,     0,     0,   239,   237,   238,     0,   105,     0,
       0,   109,     0,    77,    76,    87,     0,    85,    72,   122,
     123,     0,   126,   135,   202,   168,   129,   128,   133,     0,
       0,     0,   144,   197,   194,   107,   108,     0,    86,     0,
       0,     0,     0,     0,   137,   118,   119,     0,   126,   202,
     129,   133,   130,     0,     0,   102,     0,   127,   130,   133,
     103
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     9,    10,    11,    12,    13,    14,   140,    18,    19,
      32,    33,    50,    51,    52,    53,    98,    93,    94,    95,
      96,   141,   142,   143,   144,   365,   145,   366,   146,   147,
     148,   149,   150,   151,   152,   153,   340,   341,   154,   155,
     156,   374,   157,   158,   159,   160,   161,   162,   257,   163,
      15,    16,   164,   165,   166,   167,   106,   169,   170,   239,
     240,   171,   172,   173,   174,   175,   176,   177,   178,   108,
     109,   110,   218
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -278
static const short int yypact[] =
{
    1455,    89,   242,    25,  -278,  -278,  -278,    58,    67,   166,
    1111,  1673,  -278,  -278,   329,   177,   625,  -278,    19,   215,
    -278,   214,   260,   625,   625,  -278,  -278,  -278,  -278,   126,
    -278,  1076,  -278,   604,   303,   329,    89,  -278,   322,    36,
    -278,   329,   329,  -278,   626,   283,   127,   296,   118,  -278,
    -278,    20,  -278,   362,   271,  1088,  -278,  1076,   307,  -278,
     215,  -278,  -278,   418,  -278,  -278,  -278,   125,   237,   300,
     295,   204,   388,   369,  -278,  -278,   443,   998,  -278,   198,
    -278,  -278,   362,   345,    35,   362,   729,  -278,   468,  -278,
     643,   281,   440,   466,  -278,   482,  -278,   692,   492,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  1826,  -278,   368,
    -278,   929,  -278,   282,   458,   528,  -278,   190,   578,  -278,
     175,   295,   295,  1220,  1138,   295,   295,  1232,   295,   244,
     580,   295,  1184,   295,   295,   472,  -278,  1176,  -278,  -278,
     514,  -278,  1068,  -278,  -278,  1138,  -278,  1138,  -278,  1138,
     537,   551,   184,  -278,  -278,   509,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,   571,   573,  -278,   579,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,   606,  -278,   648,   718,
     319,   612,   295,  -278,    56,   362,   295,  -278,    97,   362,
    -278,   536,  -278,   367,   295,    24,   621,   632,  -278,   378,
     414,  -278,  -278,   295,  -278,   295,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,   295,   295,   295,   295,   295,   295,   201,
     647,    39,  -278,  -278,  -278,  -278,  -278,   100,   362,   170,
     362,  -278,  1727,   980,  1266,   661,   614,  -278,  -278,   591,
    -278,  1760,  1826,  1826,   151,    54,  -278,     1,  1793,  1479,
     585,   663,   514,   618,   514,  -278,   667,  -278,  1512,    76,
    -278,    78,    87,    14,   514,   275,   201,   656,  -278,   488,
     676,   678,   295,  -278,  -278,   505,  -278,  -278,   700,   704,
    1277,    27,  -278,   717,    27,   692,  -278,  1826,   295,  -278,
    1826,   295,  -278,  -278,   710,   436,  -278,  1826,   706,   727,
     295,   722,   739,  -278,   482,   297,   209,  -278,   438,   755,
     755,   755,   755,   755,   755,   508,  -278,  -278,   295,  -278,
     295,  -278,  -278,   720,   514,  1545,   503,   723,  -278,    21,
     295,   295,  -278,   295,  1311,   734,   163,   163,   362,  1138,
    -278,  -278,  1322,   295,  1356,   295,   738,   120,  1367,  -278,
    -278,  -278,  -278,    98,   154,   186,  -278,  1401,  -278,  -278,
    -278,  -278,  1826,  1138,   295,   741,  1138,   736,   551,  -278,
     746,  -278,   286,   514,  -278,  -278,  -278,  -278,  -278,  -278,
    1826,  1826,    44,  -278,   772,   295,   778,  -278,  1826,   295,
    -278,  -278,   437,  1826,  1826,   163,   295,  1412,   795,    27,
     801,   804,  -278,   514,  -278,  1694,   308,  -278,   514,  -278,
     514,  -278,  -278,  -278,   858,   746,  -278,  1578,   761,   514,
    -278,  -278,  1611,   149,  -278,  -278,  -278,   396,  -278,   928,
    1138,   793,   808,  -278,  -278,  1826,   295,  1826,   710,   514,
    -278,  1644,   582,  -278,    40,  -278,   767,   723,  -278,  1446,
     163,   190,  -278,  -278,  -278,  -278,  -278,   806,  1826,   820,
     822,   840,   841,   842,   746,   514,  -278,   788,   782,    40,
     789,   800,   815,   844,   856,  -278,   857,   831,   831,   800,
    -278
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -278,  -278,  -278,  -278,   855,    72,   191,  -114,   -30,   832,
     524,   838,   813,  -278,  -278,   933,   534,  -199,  -188,   672,
     673,   -51,  -278,  -112,  -278,   441,  -278,  -278,  -278,  -278,
    -278,  -278,  -224,   596,   230,  -278,  -278,  -278,  -278,  -278,
    -278,  -276,  -278,  -278,  -278,  -278,  -278,  -278,   530,  -278,
     273,   182,  -192,  -278,  -278,  -278,   -60,  -278,  -277,  -278,
     548,  -106,  -268,  -278,  -278,   744,  -278,  -278,   -70,  -278,
     -71,  -278,  -278
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -254
static const short int yytable[] =
{
     107,   306,    78,   222,   375,   296,   179,   375,   379,    63,
     327,   303,   247,   377,   252,   254,   377,   168,   261,   263,
     264,    74,   272,   269,   338,   298,    22,    36,   219,  -254,
     274,   183,   100,   275,   187,   276,  -254,   277,   120,   299,
     317,    17,   328,    62,   100,   433,   268,   232,  -254,   186,
     241,   242,   243,   179,   352,   248,   249,  -254,   191,   299,
     339,   258,   280,   246,   168,   372,   355,   246,   409,   411,
     288,   179,   168,   222,   179,   337,   179,   168,   179,    37,
      75,   402,   168,    28,   348,   168,   272,   168,   371,   168,
     101,   221,   102,   103,    17,   280,   104,   105,  -254,    71,
    -127,   180,   101,    49,   102,   103,   193,   269,   104,   105,
      23,   291,   287,   382,   318,   349,   290,   350,    24,   324,
      71,   421,   375,   445,   297,   100,   351,   440,  -254,    49,
      90,   377,    69,   308,   289,   309,    43,   424,   292,    31,
      91,    70,   328,   310,   311,   312,   313,   314,   315,   232,
     416,   354,   328,     4,     5,     6,   328,   449,   335,   334,
     335,    71,   272,   325,    71,   328,    25,   373,   100,    24,
     373,   180,   336,   327,   246,   376,   447,   319,   376,   321,
     100,    34,   466,   101,   320,   102,   103,   238,   453,   104,
     105,    71,   280,   425,   392,   100,   232,   231,   281,  -254,
     116,   372,   362,   181,   303,   443,   100,    35,   231,   111,
     391,   112,   182,    55,    41,    42,   403,   392,   380,    91,
     246,   381,   408,   410,    38,   426,   101,   413,   102,   103,
     388,   419,   104,   105,    71,   327,    83,   447,   101,    55,
     102,   103,    97,    20,   104,   105,    35,    21,   393,   100,
     394,   428,    91,   101,   431,   102,   103,   443,   261,   104,
     105,   241,    71,   405,   101,    40,   102,   103,   179,   414,
     104,   105,    45,   417,   246,    34,    79,   422,    39,   168,
     353,   439,   246,   225,   246,   373,   196,   412,   246,   226,
     295,   100,   179,   376,   429,   179,   197,   246,   390,   253,
     100,    99,   452,   168,    54,   193,   168,   101,    58,   102,
     103,   194,   195,   104,   105,   435,   449,   335,   455,   437,
      72,    73,    80,    81,   285,   260,   441,    61,    86,   450,
      54,     4,     5,     6,    91,    29,   465,   246,   101,    30,
     102,   103,    31,   179,   104,   105,    45,    67,    23,   101,
     184,   102,   103,   245,   168,   104,   105,   251,   101,   179,
     102,   103,   262,    76,   104,   105,   458,   270,    77,   219,
     168,    88,   294,  -253,  -253,  -253,  -253,   220,  -253,  -253,
    -253,   467,   295,   302,  -253,  -253,  -253,  -253,  -253,   246,
    -253,  -253,  -253,    91,  -253,  -253,  -253,  -253,  -253,  -253,
    -253,  -253,  -253,   454,   449,   335,  -253,  -253,  -253,  -253,
    -253,  -253,  -253,  -253,  -253,  -253,  -253,  -253,  -253,   305,
     115,  -253,  -253,  -253,  -253,    89,    36,  -253,  -253,    91,
    -253,  -253,   221,  -253,  -253,  -253,  -253,  -253,  -253,   203,
     114,   383,   438,  -244,  -244,  -244,  -244,   198,  -244,  -244,
    -244,   384,   295,   116,  -244,  -244,  -244,  -244,  -244,    45,
    -244,  -244,   204,   227,  -244,  -244,  -244,   205,  -244,  -244,
    -244,  -244,  -244,    17,   199,   190,  -244,  -244,  -244,  -244,
    -244,   206,   207,   208,   209,   210,   211,   212,   213,   358,
     200,   214,   215,   216,   217,   359,   272,  -244,  -244,   202,
    -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,   203,
     265,  -254,   398,  -242,  -242,  -242,  -242,   399,  -242,  -242,
    -242,   363,   272,   364,  -242,  -242,  -242,  -242,  -242,    45,
    -242,  -242,   204,   229,  -242,  -242,  -242,   205,  -242,  -242,
    -242,  -242,  -242,   293,    36,   278,  -242,  -242,  -242,  -242,
    -242,   206,   207,   208,   209,   210,   211,   212,   213,    59,
     279,   214,   215,   216,   217,    64,    65,  -242,  -242,   282,
    -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,   233,
    -204,   255,   283,  -251,  -251,   256,   234,  -251,  -208,  -251,
    -254,   460,  -251,   344,   335,  -251,  -137,  -251,  -251,   331,
    -251,    92,  -251,   332,  -251,   113,  -251,  -251,  -251,  -251,
    -251,  -251,  -251,   286,    56,  -205,  -251,    57,  -251,  -251,
    -251,  -251,  -251,  -251,  -251,  -251,  -251,  -251,  -251,     2,
       3,  -251,  -251,   236,  -251,   300,    66,   301,   237,    57,
    -251,  -251,  -251,  -251,  -251,  -251,  -251,  -251,  -251,   203,
     192,   193,   316,   -22,   -22,   -22,   -22,   194,   195,   -22,
       4,     5,     6,   356,   357,   -22,   329,   -22,   -22,   330,
     -22,   280,   204,   345,   -22,   346,   -22,   205,   -22,   -22,
     -22,   -22,   -22,   360,   280,   361,   -22,   -22,   -22,   -22,
     -22,   206,   207,   208,   209,   210,   211,   212,   213,   201,
     193,   214,   215,   216,   217,   367,   194,   195,   -22,   369,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   219,
     385,   386,   378,  -253,  -253,   382,  -253,   220,   387,  -253,
      45,  -254,   284,    34,   188,  -253,   389,  -253,  -253,   407,
    -253,   395,  -253,   256,  -253,   432,  -253,  -253,  -253,  -253,
    -253,  -253,  -253,   194,   195,   335,  -253,   430,  -253,  -253,
    -253,  -253,  -253,  -253,  -253,  -253,  -253,  -253,  -253,   449,
     335,  -253,  -253,  -253,  -253,  -254,   463,   434,  -253,   204,
    -253,  -253,   221,  -253,  -253,  -253,  -253,  -253,  -253,   203,
    -254,   473,   436,  -244,  -244,   322,  -244,  -254,   474,  -244,
     444,   209,   210,   211,   212,  -244,   446,  -244,  -244,   448,
    -244,   364,   204,   457,  -244,   401,  -244,   205,  -244,  -244,
    -244,  -244,  -244,  -254,   476,   468,  -244,   469,  -244,  -244,
    -244,   206,   207,   208,   209,   210,   211,   212,   213,  -254,
     401,   214,   215,   216,   217,   470,   471,   472,  -244,   477,
    -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,   451,
    -254,   478,   479,   118,    77,    27,   -22,    44,    60,   120,
      87,   304,   456,   307,   368,   121,   420,   122,   123,   404,
     124,   271,   204,     0,   125,     0,   126,   205,   127,   128,
     129,   130,   131,     0,     0,     0,   132,     0,   133,   134,
     135,   206,   207,   208,   209,   210,   211,   212,   213,     0,
       0,   214,   215,   216,   217,     0,     0,     0,   -22,     0,
     136,   101,   137,   102,   103,   138,   139,   104,   105,   203,
     223,     0,     0,  -111,  -111,     0,   224,   193,     0,  -111,
       0,     0,     0,   194,   195,  -111,     0,  -111,  -111,     0,
    -111,     0,   204,     0,  -111,     0,  -111,   205,  -111,  -111,
    -111,  -111,  -111,     0,     0,     0,  -111,     0,  -111,  -111,
    -111,   206,   207,   208,   209,   210,   211,   212,   213,     0,
       0,   214,   215,   216,   217,   323,     0,    82,    85,     0,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,   117,
       0,     0,     0,   118,    77,     0,     0,     0,   119,   120,
       0,     0,     0,     0,     0,   121,   185,   122,   123,   189,
     124,     0,     0,     0,   125,     0,   126,     0,   127,   128,
     129,   130,   131,     0,     0,     0,   132,     0,   133,   134,
     135,     0,     0,   101,     0,   102,   103,   228,   230,   104,
     105,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     136,   101,   137,   102,   103,   138,   139,   104,   105,   117,
       0,     0,     0,   118,    77,     0,     0,    45,   273,   120,
       2,    46,     0,     0,     0,   121,     0,   122,   123,    45,
     124,     0,     2,    84,   125,     0,   126,     0,   127,   128,
     129,   130,   131,     0,     0,     0,   132,     0,   133,   134,
     135,     4,     5,     6,     1,     2,     3,     0,     0,     0,
      26,     0,     0,     4,     5,     6,     0,    47,    48,     0,
     136,   101,   137,   102,   103,   138,   139,   104,   105,   117,
       0,     0,     0,   118,    77,     0,     4,     5,     6,   120,
       0,     0,     0,     0,     0,   121,     0,   122,   123,     0,
     124,     0,     7,     8,   125,     0,   126,     0,   127,   128,
     129,   130,   131,     0,     0,     0,   132,   266,   133,   134,
     135,   267,     0,   268,     0,   219,     0,   120,     0,   259,
       0,     0,     0,     0,     0,   120,     0,     0,     0,     0,
     136,   101,   137,   102,   103,   138,   139,   104,   105,     0,
       0,     0,     0,     0,   132,     0,   133,   134,   135,     0,
       0,   219,   132,   260,   133,   244,   135,     0,     0,     0,
       0,   120,     0,   219,     0,     0,     0,   250,     0,   101,
     137,   102,   103,   120,     0,   104,   105,   101,   137,   102,
     103,     0,     0,   104,   105,     0,     0,     0,   132,     0,
     133,     0,   135,     0,     0,     0,     0,   219,     0,     0,
     132,   326,   133,     0,   135,     0,     0,   120,   219,     0,
       0,     0,   370,   101,   137,   102,   103,     0,   120,   104,
     105,     0,     0,     0,     0,   101,   137,   102,   103,     0,
       0,   104,   105,     0,   132,     0,   133,     0,   135,     0,
       0,     0,   219,     0,     0,   132,   406,   133,     0,   135,
       0,     0,   120,   219,     0,     0,     0,   415,     0,   101,
     137,   102,   103,   120,     0,   104,   105,     0,     0,     0,
     101,   137,   102,   103,     0,     0,   104,   105,     0,   132,
       0,   133,     0,   135,     0,     0,     0,   219,     0,     0,
     132,   418,   133,     0,   135,     0,     0,   120,   219,     0,
       0,     0,   423,     0,   101,   137,   102,   103,   120,     0,
     104,   105,     0,     0,     0,   101,   137,   102,   103,     0,
       0,   104,   105,     0,   132,     0,   133,     0,   135,     0,
       0,     0,   219,     0,     0,   132,   427,   133,     0,   135,
       0,     0,   120,   219,     0,     0,     0,   442,     0,   101,
     137,   102,   103,   120,     0,   104,   105,     0,     0,     0,
     101,   137,   102,   103,     0,     0,   104,   105,     0,   132,
       0,   133,     0,   135,     0,     0,     0,   219,     0,     0,
     132,   464,   133,     0,   135,     0,     0,   120,     1,     2,
       3,     0,     0,     0,   101,   137,   102,   103,     0,     0,
     104,   105,     0,     0,     0,   101,   137,   102,   103,     0,
     203,   104,   105,     0,   132,     0,   133,   343,   135,     0,
       4,     5,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   204,     0,     0,     7,     8,   205,   101,
     137,   102,   103,   203,     0,   104,   105,     0,     0,     0,
     347,     0,   206,   207,   208,   209,   210,   211,   212,   213,
       0,     0,   214,   215,   216,   217,   204,     0,     0,  -160,
       0,   205,     0,     0,     0,     0,  -254,     0,     0,     0,
       0,     0,     0,   396,     0,   206,   207,   208,   209,   210,
     211,   212,   213,     0,     0,   214,   215,   216,   217,   204,
       0,     0,  -184,     0,   205,     0,     0,     0,     0,   203,
       0,     0,     0,     0,     0,     0,     0,     0,   206,   207,
     208,   209,   210,   211,   212,   213,     0,     0,   214,   215,
     216,   217,   204,     0,     0,   -22,     0,   205,     0,     0,
       0,     0,   203,     0,     0,     0,     0,     0,     0,     0,
       0,   206,   207,   208,   209,   210,   211,   212,   213,     0,
       0,   214,   215,   216,   217,   204,     0,     0,  -161,     0,
     205,     0,     0,     0,     0,   203,     0,     0,     0,     0,
       0,     0,     0,     0,   206,   207,   208,   209,   210,   211,
     212,   213,     0,     0,   214,   215,   216,   217,   204,     0,
       0,  -185,     0,   205,     0,     0,     0,     2,     3,     0,
       0,     0,     0,     0,     0,     0,     0,   206,   207,   208,
     209,   210,   211,   212,   213,   203,     0,   214,   215,   216,
     217,     0,  -224,     0,  -187,     0,  -224,     0,     4,     5,
       6,     0,     0,     0,     0,     0,     0,     0,   204,     0,
       0,     0,     0,   205,     7,     8,     0,     0,   203,     0,
       0,     0,     0,     0,   322,     0,     0,   206,   207,   208,
     209,   210,   211,   212,   213,     0,     0,   214,   215,   216,
     217,   204,     0,     0,     0,     0,   205,     0,     0,     0,
       0,   203,     0,     0,     0,     0,   333,     0,     0,     0,
     206,   207,   208,   209,   210,   211,   212,   213,     0,     0,
     214,   215,   216,   217,   204,     0,     0,     0,     0,   205,
       0,     0,     0,     0,  -254,     0,     0,     0,     0,     0,
       0,     0,     0,   206,   207,   208,   209,   210,   211,   212,
     213,     0,     0,   214,   215,   216,   217,   204,     0,     0,
     342,     0,   205,     0,     0,     0,     0,  -254,     0,     0,
       0,     0,     0,     0,     0,     0,   206,   207,   208,   209,
     210,   211,   212,   213,     0,     0,   214,   215,   216,   217,
     204,     0,     0,     0,     0,   205,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   206,
     207,   208,   209,   210,   211,   212,   213,     0,     0,   214,
     215,   216,   217
};

static const short int yycheck[] =
{
      70,   200,    53,   109,   281,   193,    77,   284,   284,    39,
     234,   199,   124,   281,   128,   129,   284,    77,   132,   133,
     134,     1,     8,   137,    23,     1,     1,     8,     1,     8,
     142,    82,     5,   145,    85,   147,     1,   149,    11,    15,
       1,     5,   234,     7,     5,     1,     7,   117,     8,    14,
     120,   121,   122,   124,    40,   125,   126,     1,    88,    15,
      59,   131,     8,   123,   124,    38,   265,   127,   336,   337,
      14,   142,   132,   179,   145,    21,   147,   137,   149,    60,
      60,    60,   142,    11,     8,   145,     8,   147,   280,   149,
      63,    64,    65,    66,     5,     8,    69,    70,     1,    64,
      60,     1,    63,    31,    65,    66,     8,   221,    69,    70,
      52,    14,   182,    15,    14,    39,   186,    39,    51,   233,
      64,     1,   399,   399,   194,     5,    39,   395,     1,    57,
       5,   399,     5,   203,   185,   205,    10,    39,   189,    13,
      15,    14,   334,   213,   214,   215,   216,   217,   218,   219,
     342,   265,   344,    35,    36,    37,   348,     8,     9,     8,
       9,    64,     8,   233,    64,   357,     0,   281,     5,    51,
     284,     1,    21,   397,   234,   281,   400,   228,   284,   230,
       5,     4,   450,    63,    14,    65,    66,    12,    39,    69,
      70,    64,     8,    39,     8,     5,   266,     7,    14,     1,
      10,    38,   272,     5,   392,   397,     5,    16,     7,     5,
       1,     7,    14,    31,    23,    24,   330,     8,   288,    15,
     280,   291,   336,   337,     9,    39,    63,   339,    65,    66,
     300,   345,    69,    70,    64,   459,    54,   461,    63,    57,
      65,    66,     5,     1,    69,    70,    55,     5,   318,     5,
     320,   363,    15,    63,   366,    65,    66,   449,   372,    69,
      70,   331,    64,   333,    63,     5,    65,    66,   339,   339,
      69,    70,     1,   343,   334,     4,     5,   347,    64,   339,
       5,   395,   342,     1,   344,   399,     5,   338,   348,     7,
      15,     5,   363,   399,   364,   366,    15,   357,     1,    55,
       5,     1,   414,   363,    31,     8,   366,    63,     5,    65,
      66,    14,    15,    69,    70,   385,     8,     9,   430,   389,
      47,    48,    51,    52,     5,    39,   396,     5,    55,    21,
      57,    35,    36,    37,    15,     6,   450,   397,    63,    10,
      65,    66,    13,   414,    69,    70,     1,    64,    52,    63,
       5,    65,    66,   123,   414,    69,    70,   127,    63,   430,
      65,    66,   132,     1,    69,    70,   436,   137,     6,     1,
     430,    64,     5,     5,     6,     7,     8,     9,    10,    11,
      12,   451,    15,     5,    16,    17,    18,    19,    20,   449,
      22,    23,    24,    15,    26,    27,    28,    29,    30,    31,
      32,    33,    34,     7,     8,     9,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,     5,
      51,    53,    54,    55,    56,     7,     8,    59,    60,    15,
      62,    63,    64,    65,    66,    67,    68,    69,    70,     1,
      52,     5,     5,     5,     6,     7,     8,     7,    10,    11,
      12,    15,    15,    10,    16,    17,    18,    19,    20,     1,
      22,    23,    24,     5,    26,    27,    28,    29,    30,    31,
      32,    33,    34,     5,     8,     7,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,     1,
       8,    53,    54,    55,    56,     7,     8,    59,    60,     7,
      62,    63,    64,    65,    66,    67,    68,    69,    70,     1,
      38,     8,     9,     5,     6,     7,     8,    14,    10,    11,
      12,    16,     8,    18,    16,    17,    18,    19,    20,     1,
      22,    23,    24,     5,    26,    27,    28,    29,    30,    31,
      32,    33,    34,     7,     8,     8,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    35,
       9,    53,    54,    55,    56,    41,    42,    59,    60,    60,
      62,    63,    64,    65,    66,    67,    68,    69,    70,     1,
       9,     1,     9,     5,     6,     5,     8,     9,     9,    11,
       8,     9,    14,     8,     9,    17,    14,    19,    20,     8,
      22,    67,    24,    12,    26,    71,    28,    29,    30,    31,
      32,    33,    34,     1,    10,     9,    38,    13,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,     4,
       5,    53,    54,    55,    56,    14,    10,     5,    60,    13,
      62,    63,    64,    65,    66,    67,    68,    69,    70,     1,
       7,     8,     5,     5,     6,     7,     8,    14,    15,    11,
      35,    36,    37,     7,     8,    17,     5,    19,    20,    55,
      22,     8,    24,    55,    26,     8,    28,    29,    30,    31,
      32,    33,    34,     7,     8,     7,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,     7,
       8,    53,    54,    55,    56,     5,    14,    15,    60,     5,
      62,    63,    64,    65,    66,    67,    68,    69,    70,     1,
      14,    15,     5,     5,     6,    15,     8,     9,     1,    11,
       1,     8,    14,     4,     5,    17,    14,    19,    20,     5,
      22,    21,    24,     5,    26,     9,    28,    29,    30,    31,
      32,    33,    34,    14,    15,     9,    38,    16,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,     8,
       9,    53,    54,    55,    56,     8,     9,     5,    60,    24,
      62,    63,    64,    65,    66,    67,    68,    69,    70,     1,
       8,     9,    14,     5,     6,     7,     8,     8,     9,    11,
       5,    46,    47,    48,    49,    17,     5,    19,    20,     5,
      22,    18,    24,     5,    26,     9,    28,    29,    30,    31,
      32,    33,    34,     8,     9,     5,    38,     5,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,     8,
       9,    53,    54,    55,    56,     5,     5,     5,    60,     5,
      62,    63,    64,    65,    66,    67,    68,    69,    70,     1,
      60,     5,     5,     5,     6,    10,     8,    29,    36,    11,
      57,   199,   431,   200,   278,    17,   346,    19,    20,   331,
      22,   137,    24,    -1,    26,    -1,    28,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    38,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    53,    54,    55,    56,    -1,    -1,    -1,    60,    -1,
      62,    63,    64,    65,    66,    67,    68,    69,    70,     1,
       1,    -1,    -1,     5,     6,    -1,     7,     8,    -1,    11,
      -1,    -1,    -1,    14,    15,    17,    -1,    19,    20,    -1,
      22,    -1,    24,    -1,    26,    -1,    28,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    38,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    53,    54,    55,    56,     5,    -1,    54,    55,    -1,
      62,    63,    64,    65,    66,    67,    68,    69,    70,     1,
      -1,    -1,    -1,     5,     6,    -1,    -1,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    17,    83,    19,    20,    86,
      22,    -1,    -1,    -1,    26,    -1,    28,    -1,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    38,    -1,    40,    41,
      42,    -1,    -1,    63,    -1,    65,    66,   114,   115,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    63,    64,    65,    66,    67,    68,    69,    70,     1,
      -1,    -1,    -1,     5,     6,    -1,    -1,     1,    10,    11,
       4,     5,    -1,    -1,    -1,    17,    -1,    19,    20,     1,
      22,    -1,     4,     5,    26,    -1,    28,    -1,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    38,    -1,    40,    41,
      42,    35,    36,    37,     3,     4,     5,    -1,    -1,    -1,
       9,    -1,    -1,    35,    36,    37,    -1,    51,    52,    -1,
      62,    63,    64,    65,    66,    67,    68,    69,    70,     1,
      -1,    -1,    -1,     5,     6,    -1,    35,    36,    37,    11,
      -1,    -1,    -1,    -1,    -1,    17,    -1,    19,    20,    -1,
      22,    -1,    51,    52,    26,    -1,    28,    -1,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    38,     1,    40,    41,
      42,     5,    -1,     7,    -1,     1,    -1,    11,    -1,     5,
      -1,    -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    40,    41,    42,    -1,
      -1,     1,    38,    39,    40,     5,    42,    -1,    -1,    -1,
      -1,    11,    -1,     1,    -1,    -1,    -1,     5,    -1,    63,
      64,    65,    66,    11,    -1,    69,    70,    63,    64,    65,
      66,    -1,    -1,    69,    70,    -1,    -1,    -1,    38,    -1,
      40,    -1,    42,    -1,    -1,    -1,    -1,     1,    -1,    -1,
      38,     5,    40,    -1,    42,    -1,    -1,    11,     1,    -1,
      -1,    -1,     5,    63,    64,    65,    66,    -1,    11,    69,
      70,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    -1,
      -1,    69,    70,    -1,    38,    -1,    40,    -1,    42,    -1,
      -1,    -1,     1,    -1,    -1,    38,     5,    40,    -1,    42,
      -1,    -1,    11,     1,    -1,    -1,    -1,     5,    -1,    63,
      64,    65,    66,    11,    -1,    69,    70,    -1,    -1,    -1,
      63,    64,    65,    66,    -1,    -1,    69,    70,    -1,    38,
      -1,    40,    -1,    42,    -1,    -1,    -1,     1,    -1,    -1,
      38,     5,    40,    -1,    42,    -1,    -1,    11,     1,    -1,
      -1,    -1,     5,    -1,    63,    64,    65,    66,    11,    -1,
      69,    70,    -1,    -1,    -1,    63,    64,    65,    66,    -1,
      -1,    69,    70,    -1,    38,    -1,    40,    -1,    42,    -1,
      -1,    -1,     1,    -1,    -1,    38,     5,    40,    -1,    42,
      -1,    -1,    11,     1,    -1,    -1,    -1,     5,    -1,    63,
      64,    65,    66,    11,    -1,    69,    70,    -1,    -1,    -1,
      63,    64,    65,    66,    -1,    -1,    69,    70,    -1,    38,
      -1,    40,    -1,    42,    -1,    -1,    -1,     1,    -1,    -1,
      38,     5,    40,    -1,    42,    -1,    -1,    11,     3,     4,
       5,    -1,    -1,    -1,    63,    64,    65,    66,    -1,    -1,
      69,    70,    -1,    -1,    -1,    63,    64,    65,    66,    -1,
       1,    69,    70,    -1,    38,    -1,    40,     8,    42,    -1,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    -1,    -1,    51,    52,    29,    63,
      64,    65,    66,     1,    -1,    69,    70,    -1,    -1,    -1,
       8,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    53,    54,    55,    56,    24,    -1,    -1,    60,
      -1,    29,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,
      -1,    -1,    -1,     8,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    -1,    53,    54,    55,    56,    24,
      -1,    -1,    60,    -1,    29,    -1,    -1,    -1,    -1,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    53,    54,
      55,    56,    24,    -1,    -1,    60,    -1,    29,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    53,    54,    55,    56,    24,    -1,    -1,    60,    -1,
      29,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    53,    54,    55,    56,    24,    -1,
      -1,    60,    -1,    29,    -1,    -1,    -1,     4,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,     1,    -1,    53,    54,    55,
      56,    -1,     8,    -1,    60,    -1,    12,    -1,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    51,    52,    -1,    -1,     1,    -1,
      -1,    -1,    -1,    -1,     7,    -1,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    -1,    53,    54,    55,
      56,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    -1,
      53,    54,    55,    56,    24,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    53,    54,    55,    56,    24,    -1,    -1,
      27,    -1,    29,    -1,    -1,    -1,    -1,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    -1,    53,    54,    55,    56,
      24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      54,    55,    56
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,     4,     5,    35,    36,    37,    51,    52,    84,
      85,    86,    87,    88,    89,   133,   134,     5,    91,    92,
       1,     5,     1,    52,    51,     0,     9,    87,    88,     6,
      10,    13,    93,    94,     4,    89,     8,    60,     9,    64,
       5,    89,    89,    10,    94,     1,     5,    51,    52,    88,
      95,    96,    97,    98,   133,   134,    10,    13,     5,    93,
      92,     5,     7,    91,    93,    93,    10,    64,     1,     5,
      14,    64,   133,   133,     1,    60,     1,     6,   104,     5,
      51,    52,    98,   134,     5,    98,   133,    95,    64,     7,
       5,    15,    99,   100,   101,   102,   103,     5,    99,     1,
       5,    63,    65,    66,    69,    70,   139,   151,   152,   153,
     154,     5,     7,    99,    52,    51,    10,     1,     5,    10,
      11,    17,    19,    20,    22,    26,    28,    30,    31,    32,
      33,    34,    38,    40,    41,    42,    62,    64,    67,    68,
      90,   104,   105,   106,   107,   109,   111,   112,   113,   114,
     115,   116,   117,   118,   121,   122,   123,   125,   126,   127,
     128,   129,   130,   132,   135,   136,   137,   138,   139,   140,
     141,   144,   145,   146,   147,   148,   149,   150,   151,   153,
       1,     5,    14,   104,     5,    98,    14,   104,     5,    98,
       7,    91,     7,     8,    14,    15,     5,    15,     7,     8,
       8,     7,     7,     1,    24,    29,    43,    44,    45,    46,
      47,    48,    49,    50,    53,    54,    55,    56,   155,     1,
       9,    64,   144,     1,     7,     1,     7,     5,    98,     5,
      98,     7,   151,     1,     8,     9,    55,    60,    12,   142,
     143,   151,   151,   151,     5,   117,   139,   106,   151,   151,
       5,   117,    90,    55,    90,     1,     5,   131,   151,     5,
      39,    90,   117,    90,    90,    38,     1,     5,     7,    90,
     117,   148,     8,    10,   106,   106,   106,   106,     8,     9,
       8,    14,    60,     9,    14,     5,     1,   151,    14,   104,
     151,    14,   104,     7,     5,    15,   101,   151,     1,    15,
      14,     5,     5,   101,   102,     5,   100,   103,   151,   151,
     151,   151,   151,   151,   151,   151,     5,     1,    14,   104,
      14,   104,     7,     5,    90,   151,     5,   115,   135,     5,
      55,     8,    12,     6,     8,     9,    21,    21,    23,    59,
     119,   120,    27,     8,     8,    55,     8,     8,     8,    39,
      39,    39,    40,     5,    90,   100,     7,     8,     1,     7,
       7,     7,   151,    16,    18,   108,   110,     5,   116,     5,
       5,   135,    38,    90,   124,   141,   144,   145,     5,   124,
     151,   151,    15,     5,    15,    14,    15,     1,   151,    14,
       1,     1,     8,   151,   151,    21,     8,     8,     9,    14,
       8,     9,    60,    90,   143,   151,     5,     5,    90,   145,
      90,   145,   104,   106,   151,     5,   135,   151,     5,    90,
     131,     1,   151,     5,    39,    39,    39,     5,   106,   151,
      16,   106,     9,     1,     5,   151,    14,   151,     5,    90,
     145,   151,     5,   135,     5,   124,     5,   115,     5,     8,
      21,     1,   106,    39,     7,   106,   108,     5,   151,     8,
       9,     8,     9,     9,     5,    90,   145,   151,     5,     5,
       5,     5,     5,     9,     9,    60,     9,     5,     5,     5,
      60
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
#line 101 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() <<"prgram : program unit\n";
						p->check_inhertance_list();
						if(!p->errRecovery->errQ->isEmpty())
								p->errRecovery->printErrQueue();
						p->print_symbol();
						Streams::verbose().flush();						
						;}
    break;

  case 3:
#line 108 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {	Streams::verbose() <<"prgram : program unit\n";
						Streams::verbose().flush();						
					;}
    break;

  case 4:
#line 111 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
							
								Streams::verbose()<<"program: unit\n";
								Streams::verbose().flush();						
							;}
    break;

  case 5:
#line 119 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_stmt : IMPORT unit_list SEMICOLON \n";;}
    break;

  case 6:
#line 121 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"unit: import_stmt class_decl\n";;}
    break;

  case 7:
#line 122 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"unit: class_decl\n";;}
    break;

  case 8:
#line 125 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"class_decl: class_h class_body\n"; ;}
    break;

  case 9:
#line 126 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"class_decl: storage modef class_h class_body\n"; ;}
    break;

  case 10:
#line 127 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"class_decl: STATIC FINAL class_h class_body\n"; ;}
    break;

  case 11:
#line 128 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"class_decl: FINAL STATIC class_h class_body\n"; ;}
    break;

  case 12:
#line 131 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[0].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
					;}
    break;

  case 13:
#line 136 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[-1].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 14:
#line 142 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[0].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								;}
    break;

  case 15:
#line 147 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-1].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 16:
#line 153 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[0].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
											;}
    break;

  case 17:
#line 158 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-1].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-4].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 18:
#line 164 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {							
									colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected class name at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected class name","");
		;}
    break;

  case 19:
#line 169 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected Reserved word at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected Reserved word","");
							 ;}
    break;

  case 20:
#line 174 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected Reserved word at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected Reserved word","");
						 ;}
    break;

  case 21:
#line 181 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"expr_list: expr_list COMMA expr\n";;}
    break;

  case 22:
#line 182 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"expr_list: expr %prec stmt_1\n";;}
    break;

  case 23:
#line 185 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												t_id=new char[10];
												strcpy(t_id,temp_id.c_str());
												inhertance_list.push_back(t_id);	
												Streams::verbose()<<"unit_list:	unit_list COMMA unit_import\n";
												temp_id="";
												;}
    break;

  case 24:
#line 192 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {	
								t_id=new char[10];
								strcpy(t_id,temp_id.c_str());
								inhertance_list.push_back(t_id);
								Streams::verbose()<<"unit_list:	unit_import\n";
								temp_id="";
							;}
    break;

  case 25:
#line 201 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									temp_id=temp_id+"."+(yyvsp[0].r.strVal);
									Streams::verbose()<<"unit_import: unit_import DOT ID\n";
								;}
    break;

  case 26:
#line 205 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
					temp_id=temp_id+(yyvsp[0].r.strVal);
					Streams::verbose()<<"unit_import: ID\n";

				;}
    break;

  case 27:
#line 213 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"class_body:COLON END	\n";colonStack.pop();
								(yyval.type)=p->finishTypeDeclaration(t);
							;}
    break;

  case 28:
#line 217 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"class_body:COLON dm_list END\n";colonStack.pop();
										(yyval.type)=p->finishTypeDeclaration(t);
									;}
    break;

  case 29:
#line 220 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
					ColonStack* temp = colonStack.top();
					colonStack.pop();
					Streams::verbose()<<"Error: Expected ':' at Line No:"<<temp->lineNum<<" Column No:"<<temp->colNum<<endl;
					err->errQ->enqueue(temp->lineNum,temp->colNum,"Expected ':' ","");
				  ;}
    break;

  case 30:
#line 226 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
					ColonStack* temp = colonStack.top();
					colonStack.pop();
					Streams::verbose()<<"Error: Expected ':' at Line No:"<<temp->lineNum<<" Column No:"<<temp->colNum<<endl;
						(yyval.type)=p->finishTypeDeclaration(t);
					err->errQ->enqueue(temp->lineNum,temp->colNum,"Expected ':' ","");
				  ;}
    break;

  case 31:
#line 235 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dm_list: dm_list DEF dm\n";;}
    break;

  case 32:
#line 236 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dm_list: DEF dm\n";;}
    break;

  case 33:
#line 239 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dm:	var_declaration SEMICOLON\n";;}
    break;

  case 34:
#line 240 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dm:	method_declaration\n";;}
    break;

  case 35:
#line 241 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dm:	class_decl\n";;}
    break;

  case 36:
#line 242 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
							Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
							err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"Expected ';' ","");
						   ;}
    break;

  case 37:
#line 248 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"var_declaration: access_modef ID\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod, yylval.r.lineNum, yylval.r.colNum);
									v=(yyval.var);
									acc_mod="";
									;}
    break;

  case 38:
#line 254 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: storage_modef ID\n";;}
    break;

  case 39:
#line 255 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: ID\n";
										(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod, yylval.r.lineNum, yylval.r.colNum);
										v=(yyval.var);
									;}
    break;

  case 40:
#line 259 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: access_modef ID ASSIGN expr\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod, yylval.r.lineNum, yylval.r.colNum);
													v=(yyval.var);
													acc_mod="";
													;}
    break;

  case 41:
#line 264 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: storage_modef ID ASSIGN expr\n";;}
    break;

  case 42:
#line 265 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: ID ASSIGN expr\n";
										(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod, yylval.r.lineNum, yylval.r.colNum);
													v=(yyval.var);
										;}
    break;

  case 43:
#line 269 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: access_modef storage_modef ID\n";;}
    break;

  case 44:
#line 270 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: storage_modef access_modef ID\n";;}
    break;

  case 45:
#line 271 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: access_modef storage_modef ID ASSIGN expr\n";;}
    break;

  case 46:
#line 272 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: storage_modef access_modef ID ASSIGN expr\n";;}
    break;

  case 47:
#line 273 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: STATIC access_modef FINAL ID ASSIGN expr\n";;}
    break;

  case 48:
#line 274 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: FINAL access_modef FINAL ID ASSIGN expr\n";;}
    break;

  case 49:
#line 275 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
											Streams::verbose()<<"Error: UN Expected IDENTIFIER Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)-strlen((yyvsp[-1].r.strVal)),"UN Expected IDENTIFIER ","");
										  ;}
    break;

  case 50:
#line 279 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
							Streams::verbose()<<"Error: UN Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[0].r.colNum)-strlength((yyvsp[0].r.strVal))<<endl;
							err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[0].r.colNum)-strlen((yyvsp[0].r.strVal)),"UN Expected IDENTIFIER ","");						
						;}
    break;

  case 51:
#line 285 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false);parameters.clear();;}
    break;

  case 52:
#line 286 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false);parameters.clear();;}
    break;

  case 53:
#line 287 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: storage_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false);parameters.clear();;}
    break;

  case 54:
#line 288 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: access_modef storage_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false);parameters.clear();;}
    break;

  case 55:
#line 289 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: storage_modef access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false);parameters.clear();;}
    break;

  case 56:
#line 290 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: STATIC access_modef FINAL method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true);parameters.clear();;}
    break;

  case 57:
#line 291 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: FINAL access_modef STATIC method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true);parameters.clear();;}
    break;

  case 58:
#line 295 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S arguments CLOSE_S \n";testfunction = p->createTypeFunctionHeader(t,ss,pp,ff, (yyvsp[-3].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);pp=true;ff=false;ss=false;parameters.clear();;}
    break;

  case 59:
#line 296 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S ID CLOSE_S \n";parameters.push_back((yyvsp[-1].r.strVal));testfunction = p->createTypeFunctionHeader(t,ss,pp,ff, (yyvsp[-3].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);pp=true;ff=false;ss=false;parameters.clear();;}
    break;

  case 60:
#line 297 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S CLOSE_S \n";testfunction = p->createTypeFunctionHeader(t,ss,pp,ff, (yyvsp[-2].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);pp=true;ff=false;ss=false;parameters.clear();;}
    break;

  case 61:
#line 298 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
									  ;}
    break;

  case 62:
#line 302 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
									  ;}
    break;

  case 63:
#line 306 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)+1<<endl;
												err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)+1,"Expected '(' ","");
											   ;}
    break;

  case 64:
#line 310 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)+1<<endl;
												err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)+1,"Expected '(' ","");
											   ;}
    break;

  case 65:
#line 314 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue((yyvsp[-3].r.lineNum),yylval.r.colNum-strlength(yylval.r.strVal),"Expected ')' ","");
													 ;}
    break;

  case 66:
#line 318 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[0].r.colNum)+1<<endl;
														err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[0].r.colNum)+1,"Expected ')' ","");
													 ;}
    break;

  case 67:
#line 326 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"arguments:	args_list\n";;}
    break;

  case 68:
#line 327 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"arguments:	default_args_list\n";;}
    break;

  case 69:
#line 328 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"arguments:	args_list COMMA default_args_list\n";;}
    break;

  case 70:
#line 330 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"args_list:	args_list COMMA arg\n";;}
    break;

  case 71:
#line 331 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"args_list: ID COMMA arg \n"; parameters.push_back((yyvsp[-2].r.strVal));;}
    break;

  case 72:
#line 332 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"args_list:	args_list COMMA ID \n"; parameters.push_back((yyvsp[0].r.strVal));;}
    break;

  case 73:
#line 333 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"args_list:	ID COMMA ID \n"; parameters.push_back((yyvsp[-2].r.strVal)); parameters.push_back((yyvsp[0].r.strVal));;}
    break;

  case 74:
#line 334 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"args_list: arg \n";;}
    break;

  case 75:
#line 337 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
						Streams::verbose()<<"arg:	STAR ID \n";std::string tempstr((yyvsp[0].r.strVal));
						std::string erro("*" + tempstr);
						char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
					;}
    break;

  case 76:
#line 343 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"arg:	STAR STAR ID \n";std::string tempstr((yyvsp[0].r.strVal));
						std::string erro("**" + tempstr);
						char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);;}
    break;

  case 77:
#line 347 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
							Streams::verbose()<<"Error: Un Expected '*' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
							err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))," Un Expected '*' ","");
						;}
    break;

  case 78:
#line 351 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Un Expected '**' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))," Un Expected '**' ","");
							 ;}
    break;

  case 79:
#line 358 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"default_args_list: default_args_list COMMA default_arg\n";;}
    break;

  case 80:
#line 359 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"default_args_list: default_arg \n";;}
    break;

  case 81:
#line 360 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
														Streams::verbose()<<"Error: default argument not at end of parameter list at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"default argument not at end of parameter list","");					
														;}
    break;

  case 82:
#line 364 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
														Streams::verbose()<<"Error: default argument not at end of parameter list at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"default argument not at end of parameter list","");					
														;}
    break;

  case 83:
#line 370 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"default_arg:	ID ASSIGN expr \n";parameters.push_back((yyvsp[-2].r.strVal));;}
    break;

  case 84:
#line 371 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"arg:	STAR ID ASSIGN expr \n";std::string tempstr((yyvsp[-2].r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
									;}
    break;

  case 85:
#line 377 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"default_arg:	STAR STAR ID ASSIGN expr \n";std::string tempstr((yyvsp[-2].r.strVal));
										std::string erro("**" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);;}
    break;

  case 86:
#line 381 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
											Streams::verbose()<<"Error: Un Expected '**' at Line No:"<<(yyvsp[-5].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))," Un Expected '**' ","");
										;}
    break;

  case 87:
#line 385 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
											Streams::verbose()<<"Error: Un Expected '*' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))," Un Expected '*' ","");
										;}
    break;

  case 88:
#line 391 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"COLON  END \n";;}
    break;

  case 89:
#line 392 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"block_stmt: COLON stmt_list END \n";;}
    break;

  case 90:
#line 393 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
						Streams::verbose()<<"Error: Expected ':' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected ':' ","");			 
						;}
    break;

  case 91:
#line 400 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt_list:	stmt_list stmt \n";;}
    break;

  case 92:
#line 401 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt_list:	stmt \n";;}
    break;

  case 93:
#line 404 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt: 		if_stmt\n";;}
    break;

  case 94:
#line 405 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	while_stmt\n";;}
    break;

  case 95:
#line 406 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	for_stmt\n";;}
    break;

  case 96:
#line 407 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	try_stmt\n";;}
    break;

  case 97:
#line 408 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	with_stmt\n";;}
    break;

  case 98:
#line 409 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	block_stmt\n";;}
    break;

  case 99:
#line 410 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	simple_stmt_list\n";;}
    break;

  case 100:
#line 411 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	ID SEMICOLON\n";;}
    break;

  case 101:
#line 412 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	ID DOT ID SEMICOLON\n";;}
    break;

  case 102:
#line 413 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	ID COMMA ID DOT ID DOT ID SEMICOLON\n";;}
    break;

  case 103:
#line 414 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	ID DOT ID COMMA ID DOT ID DOT ID SEMICOLON\n";;}
    break;

  case 104:
#line 417 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt\n";;}
    break;

  case 105:
#line 418 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt ELSE stmt\n";;}
    break;

  case 106:
#line 419 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt elif_stmt\n";;}
    break;

  case 107:
#line 420 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt elif_stmt ELSE stmt\n";;}
    break;

  case 108:
#line 423 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"elif_stmt: 	elif_header stmt elif_stmt\n";;}
    break;

  case 109:
#line 424 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"elif_stmt:	elif_header stmt\n";;}
    break;

  case 110:
#line 427 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"if_header:	IF expr \n";;}
    break;

  case 111:
#line 430 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"elif_header:	ELIF expr \n";;}
    break;

  case 112:
#line 433 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"while_stmt: while_header stmt\n";;}
    break;

  case 113:
#line 438 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"while_header: WHILE expr \n";;}
    break;

  case 114:
#line 439 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    { 
						Streams::verbose()<<"Error: Expected reserved word 'while' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected reserved word 'while' ","");
					 ;}
    break;

  case 115:
#line 445 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_stmt: 	for_header stmt\n";;}
    break;

  case 116:
#line 448 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_header: FOR target_list IN expr_list \n";;}
    break;

  case 117:
#line 449 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_header: FOR target_list IN list_display \n";;}
    break;

  case 118:
#line 450 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID COMMA ID IN expr_list \n";;}
    break;

  case 119:
#line 451 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID COMMA ID IN list_display \n";;}
    break;

  case 120:
#line 452 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID IN expr_list \n";;}
    break;

  case 121:
#line 453 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID IN list_display \n";;}
    break;

  case 122:
#line 454 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 123:
#line 458 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 124:
#line 465 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list:	import_list COMMA import\n";;}
    break;

  case 125:
#line 466 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA import_list \n";;}
    break;

  case 126:
#line 467 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA ID \n";;}
    break;

  case 127:
#line 468 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA ID DOT ID \n";;}
    break;

  case 128:
#line 469 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA import_list \n";;}
    break;

  case 129:
#line 470 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA ID \n";;}
    break;

  case 130:
#line 471 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA ID DOT ID \n";;}
    break;

  case 131:
#line 472 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list:	import\n";;}
    break;

  case 132:
#line 476 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import: import DOT ID\n";;}
    break;

  case 133:
#line 477 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import:	ID DOT ID DOT ID;";}
    break;

  case 134:
#line 481 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target_list:	target_list COMMA target\n";;}
    break;

  case 135:
#line 482 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA ID COMMA target\n";;}
    break;

  case 136:
#line 483 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target_list:	target_list COMMA ID\n";;}
    break;

  case 137:
#line 484 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA ID COMMA ID\n";;}
    break;

  case 138:
#line 485 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA target\n";;}
    break;

  case 139:
#line 486 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target_list:	target\n";;}
    break;

  case 140:
#line 489 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"try_stmt: 	TRY  stmt except_stmt\n";;}
    break;

  case 141:
#line 490 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"try_stmt: 	TRY  stmt finally_stmt\n";;}
    break;

  case 142:
#line 493 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"finally_stmt: 	FINALLY COLON block_stmt\n";;}
    break;

  case 143:
#line 496 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"except_stmt:	EXCEPT  stmt\n";;}
    break;

  case 144:
#line 497 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"except_stmt:	EXCEPT  expr stmt\n";;}
    break;

  case 145:
#line 500 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"with_stmt:	WITH expr \n";;}
    break;

  case 146:
#line 501 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"with_stmt:	WITH expr AS target \n";;}
    break;

  case 147:
#line 504 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	expr_list\n";;}
    break;

  case 148:
#line 505 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	assert_stmt\n";;}
    break;

  case 149:
#line 506 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	assignment_stmt\n";;}
    break;

  case 150:
#line 508 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	PASS\n";;}
    break;

  case 151:
#line 509 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	del_stmt\n";;}
    break;

  case 152:
#line 510 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	print_stmt\n";;}
    break;

  case 153:
#line 511 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	return_stmt\n";;}
    break;

  case 154:
#line 512 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	yield_stmt\n";;}
    break;

  case 155:
#line 513 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	raise_stmt\n";;}
    break;

  case 156:
#line 514 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	BREAK\n";;}
    break;

  case 157:
#line 515 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	CONTINUE\n";;}
    break;

  case 158:
#line 516 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	import_list\n";;}
    break;

  case 159:
#line 517 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	global_stmt\n";;}
    break;

  case 160:
#line 520 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assert_stmt: 	ASSERT expr\n";;}
    break;

  case 161:
#line 521 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assert_stmt:	ASSERT expr COMMA expr\n";;}
    break;

  case 162:
#line 523 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : expr_list\n";;}
    break;

  case 163:
#line 524 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : parenth_form\n";;}
    break;

  case 164:
#line 525 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : list_display\n";;}
    break;

  case 165:
#line 526 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : dict_display\n";;}
    break;

  case 166:
#line 529 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	target_list ASSIGN expr_list\n";;}
    break;

  case 167:
#line 530 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	id_dot ASSIGN expr_list\n";;}
    break;

  case 168:
#line 531 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	ID COMMA ID ASSIGN expr_list\n";;}
    break;

  case 169:
#line 537 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL target_list\n";;}
    break;

  case 170:
#line 538 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID COMMA ID\n";;}
    break;

  case 171:
#line 539 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID\n";;}
    break;

  case 172:
#line 542 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"return_stmt:	RETURN\n";;}
    break;

  case 173:
#line 543 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"return_stmt:	RETURN expr_list\n";;}
    break;

  case 174:
#line 546 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"yield_stmt:		yield_expression\n";;}
    break;

  case 175:
#line 549 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"print_stmt: PRINT expr_list\n";;}
    break;

  case 176:
#line 550 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"print_stmt:	PRINT MORE_THAN MORE_THAN expr_list\n";;}
    break;

  case 177:
#line 551 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected reserved word 'print' ","");
								;}
    break;

  case 178:
#line 555 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
												err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal)),"Expected reserved word 'print' ","");
												;}
    break;

  case 179:
#line 560 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"global_stmt :GLOBAL id_list\n";;}
    break;

  case 180:
#line 561 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+(yyvsp[-1].r.strVal)<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected IDENTIFIER ","");
									   ;}
    break;

  case 181:
#line 567 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"id_list: 	ID COMMA id_list\n";;}
    break;

  case 182:
#line 568 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"id_list:	ID\n";;}
    break;

  case 183:
#line 571 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"raise_stmt: RAISE\n";;}
    break;

  case 184:
#line 572 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"raise_stmt:	RAISE expr\n";;}
    break;

  case 185:
#line 573 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"raise_stmt:	RAISE expr COMMA expr\n";;}
    break;

  case 186:
#line 574 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected expression at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
													err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected expression ","");
												 ;}
    break;

  case 187:
#line 578 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected reserved word 'raise' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
													err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'raise' ","");
												 ;}
    break;

  case 188:
#line 584 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"access_modef: PRIVATE\n";acc_mod="private";pp=true;;}
    break;

  case 189:
#line 585 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"access_modef:	PUBLIC\n";acc_mod="public";pp=false;}
    break;

  case 190:
#line 586 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"access_modef:	PROTECTED\n";acc_mod="protected";;}
    break;

  case 191:
#line 590 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"storage_modef: STATIC\n"; ss=true;;}
    break;

  case 192:
#line 591 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"storage_modef: FINAL\n"; ff=true;;}
    break;

  case 193:
#line 593 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S target_list CLOSE_S \n";;}
    break;

  case 194:
#line 594 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S ID COMMA ID CLOSE_S\n";;}
    break;

  case 195:
#line 595 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S ID CLOSE_S\n";;}
    break;

  case 196:
#line 596 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D target_list CLOSE_D\n";;}
    break;

  case 197:
#line 597 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D ID COMMA ID CLOSE_D\n";;}
    break;

  case 198:
#line 598 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D ID CLOSE_D\n";;}
    break;

  case 199:
#line 599 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	attributeref\n";;}
    break;

  case 200:
#line 600 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	subscription\n";;}
    break;

  case 201:
#line 603 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"attributeref: primary DOT ID\n";;}
    break;

  case 202:
#line 604 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"attributeref: ID DOT ID\n";;}
    break;

  case 203:
#line 607 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"primary: 	atom\n";;}
    break;

  case 204:
#line 608 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"primary:	attributeref\n";;}
    break;

  case 205:
#line 609 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"primary:	subscription\n";;}
    break;

  case 206:
#line 610 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"primary:	call\n";;}
    break;

  case 207:
#line 613 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"atom:	enclosure\n";;}
    break;

  case 208:
#line 614 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"atom:	literal\n";	;}
    break;

  case 209:
#line 617 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"literal:    STRING_VALUE\n";;}
    break;

  case 210:
#line 618 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"literal:	INTEGER_VALUE\n";;}
    break;

  case 211:
#line 619 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"literal:	LONG_VALUE\n";;}
    break;

  case 212:
#line 620 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"literal:	FLOAT_VALUE\n";;}
    break;

  case 213:
#line 621 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"literal:	CHAR_VALUE\n";;}
    break;

  case 214:
#line 624 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"enclosure:	parenth_form\n";;}
    break;

  case 215:
#line 625 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"enclosure:	list_display\n";;}
    break;

  case 216:
#line 626 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"enclosure:	string_conversion\n";;}
    break;

  case 217:
#line 627 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"enclosure:	yield_atom\n";;}
    break;

  case 218:
#line 628 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"enclosure:	dict_display\n";;}
    break;

  case 219:
#line 631 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dict_display: OPEN_C CLOSE_C \n";;}
    break;

  case 220:
#line 632 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dict_display: OPEN_C key_datum_list CLOSE_C \n";;}
    break;

  case 221:
#line 634 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum_list COMMA key_datum \n";;}
    break;

  case 222:
#line 635 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum_list COMMA\n";;}
    break;

  case 223:
#line 636 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum\n";;}
    break;

  case 224:
#line 638 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"key_datum : expr COLON expr\n";;}
    break;

  case 225:
#line 641 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"parenth_form : 	OPEN_S expr_list CLOSE_S\n";;}
    break;

  case 226:
#line 642 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"parenth_form : 	OPEN_S  CLOSE_S\n";;}
    break;

  case 227:
#line 643 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-1,"Expected '(' ","");
								;}
    break;

  case 228:
#line 647 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected ')' ","");
										;}
    break;

  case 229:
#line 651 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
													err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))," Expected '(' ","");
												 ;}
    break;

  case 230:
#line 655 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
													err->errQ->enqueue((yyvsp[-2].r.lineNum),yylval.r.colNum-strlength(yylval.r.strVal)," Expected ')' ","");
												 ;}
    break;

  case 231:
#line 662 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"list_display:	OPEN_D  expr_list CLOSE_D\n";;}
    break;

  case 232:
#line 663 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"list_display:	OPEN_D CLOSE_D\n";;}
    break;

  case 233:
#line 666 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"string_conversion:	RE_COT expr_list RE_COT\n";;}
    break;

  case 234:
#line 669 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"yield_atom:		OPEN_S yield_expression CLOSE_S\n";;}
    break;

  case 235:
#line 672 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"yield_expression:	YIELD\n";;}
    break;

  case 236:
#line 673 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"yield_expression:	YIELD expr_list\n";;}
    break;

  case 237:
#line 676 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"subscription:	PRIMARY OPEN_D expr_list CLOSE_D\n";;}
    break;

  case 238:
#line 680 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"call:	PRIMARY OPEN_D args_list CLOSE_D\n";;}
    break;

  case 239:
#line 681 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"call:	PRIMARY OPEN_D ID CLOSE_D\n";;}
    break;

  case 240:
#line 685 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"expr:	condition\n";;}
    break;

  case 241:
#line 686 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"expr:	literal\n";;}
    break;

  case 242:
#line 687 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"expr:	expr op expr\n";;}
    break;

  case 243:
#line 688 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"expr:	long_id\n";;}
    break;

  case 244:
#line 689 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected operand at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.lineNum)-strlength((yyvsp[-1].r.strVal))<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlen((yyvsp[-1].r.strVal)),"Expected operand ","");
									  ;}
    break;

  case 245:
#line 695 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"condition: expr EQUAL expr\n";;}
    break;

  case 246:
#line 696 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"condition: expr NOT_EQUAL expr\n";;}
    break;

  case 247:
#line 697 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"condition: expr LESS_THAN expr\n";;}
    break;

  case 248:
#line 698 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"condition: expr LESS_OR_EQUAL expr\n";;}
    break;

  case 249:
#line 699 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"condition: expr MORE_THAN expr\n";;}
    break;

  case 250:
#line 700 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"condition: expr MORE_OR_EQUAL expr\n";;}
    break;

  case 251:
#line 702 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"id_dot:	ID\n";;}
    break;

  case 252:
#line 703 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"id_dot:	id_dot DOT ID\n";;}
    break;

  case 253:
#line 712 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot\n";;}
    break;

  case 254:
#line 713 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot parenth_form\n";;}
    break;

  case 255:
#line 716 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :PLUS\n";;}
    break;

  case 256:
#line 717 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :MINUS\n";;}
    break;

  case 257:
#line 718 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :DIV\n";;}
    break;

  case 258:
#line 719 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :MOD\n";;}
    break;

  case 259:
#line 720 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :OR\n";;}
    break;

  case 260:
#line 721 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :NOT\n";;}
    break;

  case 261:
#line 722 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :MULTI\n";;}
    break;

  case 262:
#line 723 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :AND\n";;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 3586 "yacc.cpp"

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


#line 725 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"

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
