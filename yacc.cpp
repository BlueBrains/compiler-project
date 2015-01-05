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
     stmt_9 = 327,
     stmt_8 = 328,
     stmt_7 = 329,
     stmt_6 = 330,
     stmt_5 = 331,
     stmt_4 = 332,
     stmt_3 = 333,
     stmt_2 = 334,
     stmt_1 = 335
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
#define stmt_9 327
#define stmt_8 328
#define stmt_7 329
#define stmt_6 330
#define stmt_5 331
#define stmt_4 332
#define stmt_3 333
#define stmt_2 334
#define stmt_1 335




/* Copy the first part of user declarations.  */
#line 3 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"

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
	
	char* i_type;
	char* acc_mod;
	vector<char *>inhertance_list;
	class Parser
	{
		public:
		int	parse()
		{
			return yyparse();
		}
	};


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
#line 46 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
typedef union YYSTYPE {
	struct R{
		int intVal;
		float floatVal;
		char charVal;
		char* strVal;
		int lineNum;
		int colNum;
	}r;
} YYSTYPE;
/* Line 196 of yacc.c.  */
#line 298 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 310 "yacc.cpp"

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
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1821

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  81
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  65
/* YYNRULES -- Number of rules. */
#define YYNRULES  250
/* YYNRULES -- Number of states. */
#define YYNSTATES  441

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   335

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
      75,    76,    77,    78,    79,    80
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     6,     8,    12,    14,    19,    22,    27,
      30,    36,    40,    46,    50,    53,    56,    61,    67,    70,
      74,    77,    81,    83,    87,    89,    93,    95,    98,   102,
     104,   107,   111,   114,   117,   119,   121,   124,   127,   131,
     135,   139,   142,   146,   149,   154,   158,   163,   167,   170,
     173,   175,   180,   184,   189,   193,   196,   202,   208,   213,
     218,   223,   227,   233,   239,   244,   249,   255,   261,   267,
     273,   277,   281,   285,   289,   291,   294,   298,   303,   306,
     310,   313,   316,   318,   320,   322,   324,   326,   328,   330,
     333,   336,   341,   350,   361,   364,   369,   373,   379,   383,
     386,   389,   392,   395,   398,   402,   405,   410,   417,   422,
     428,   432,   436,   440,   446,   452,   458,   466,   468,   472,
     478,   482,   488,   492,   498,   502,   504,   508,   512,   515,
     518,   522,   525,   530,   532,   534,   536,   538,   540,   542,
     544,   546,   548,   550,   552,   554,   556,   559,   564,   568,
     574,   578,   582,   588,   592,   595,   600,   603,   605,   608,
     610,   613,   618,   622,   627,   630,   633,   637,   639,   641,
     644,   649,   654,   660,   662,   664,   666,   670,   676,   680,
     684,   690,   694,   696,   698,   702,   706,   708,   710,   712,
     714,   716,   718,   720,   722,   724,   726,   728,   730,   732,
     734,   736,   738,   741,   745,   749,   752,   754,   758,   762,
     765,   768,   771,   775,   779,   783,   787,   791,   793,   796,
     801,   806,   811,   816,   821,   823,   825,   829,   831,   835,
     839,   843,   847,   851,   855,   859,   861,   865,   870,   875,
     879,   885,   892,   899,   901,   903,   905,   907,   909,   911,
     913
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
      82,     0,    -1,    82,    83,    -1,    83,    -1,     3,    87,
      84,    -1,    84,    -1,     3,    87,    51,    84,    -1,    51,
      84,    -1,     3,    87,    52,    84,    -1,    52,    84,    -1,
       3,    87,    51,    52,    84,    -1,    51,    52,    84,    -1,
       3,    87,    52,    51,    84,    -1,    52,    51,    84,    -1,
      85,    89,    -1,     4,     5,    -1,     4,     5,    64,     7,
      -1,     4,     5,    64,    87,     7,    -1,     4,     1,    -1,
       5,     1,     5,    -1,     5,     1,    -1,    86,     8,   142,
      -1,   142,    -1,    87,     8,    88,    -1,    88,    -1,    88,
       9,     5,    -1,     5,    -1,     6,    10,    -1,     6,    90,
      10,    -1,    10,    -1,    90,    10,    -1,    90,    13,    91,
      -1,    13,    91,    -1,    92,    60,    -1,    93,    -1,    84,
      -1,    51,    84,    -1,    52,    84,    -1,    51,    52,    84,
      -1,    52,    51,    84,    -1,    52,    92,    60,    -1,    52,
      93,    -1,    51,    92,    60,    -1,    51,    93,    -1,    52,
      51,    92,    60,    -1,    52,    51,    93,    -1,    51,    52,
      92,    60,    -1,    51,    52,    93,    -1,    92,     1,    -1,
     125,     5,    -1,     5,    -1,   125,     5,    14,   142,    -1,
       5,    14,   142,    -1,   125,     5,     5,     1,    -1,     5,
       5,     1,    -1,    94,    97,    -1,   125,     5,    64,    95,
       7,    -1,   125,     5,    64,     5,     7,    -1,     5,    64,
      95,     7,    -1,     5,    64,     5,     7,    -1,   125,     5,
      64,     7,    -1,     5,    64,     7,    -1,   125,     1,    64,
      95,     7,    -1,   125,     1,    64,     5,     7,    -1,     1,
      64,    95,     7,    -1,     1,    64,     5,     7,    -1,   125,
       5,     1,    95,     7,    -1,   125,     5,     1,     5,     7,
      -1,   125,     5,    64,    95,     1,    -1,   125,     5,    64,
       5,     1,    -1,    95,     8,    96,    -1,     5,     8,    96,
      -1,    95,     8,     5,    -1,     5,     8,     5,    -1,    96,
      -1,    15,     5,    -1,     5,    14,   142,    -1,    15,     5,
      14,   142,    -1,     6,    10,    -1,     6,    98,    10,    -1,
       1,    10,    -1,    98,    99,    -1,    99,    -1,   100,    -1,
     104,    -1,   106,    -1,   111,    -1,   114,    -1,    97,    -1,
     115,    60,    -1,     5,    60,    -1,     5,     9,     5,    60,
      -1,     5,     8,     5,     9,     5,     9,     5,    60,    -1,
       5,     9,     5,     8,     5,     9,     5,     9,     5,    60,
      -1,   102,    99,    -1,   102,    99,    16,    99,    -1,   102,
      99,   101,    -1,   102,    99,   101,    16,    99,    -1,   103,
      99,   101,    -1,   103,    99,    -1,    17,   142,    -1,    18,
     142,    -1,   105,    99,    -1,    19,   142,    -1,     5,     1,
     142,    -1,   107,    99,    -1,    20,   110,    21,    86,    -1,
      20,     5,     8,     5,    21,    86,    -1,    20,     5,    21,
      86,    -1,     5,     1,     5,    21,    86,    -1,   108,     8,
     109,    -1,     5,     8,   108,    -1,     5,     8,     5,    -1,
       5,     8,     5,     9,     5,    -1,     5,     9,     5,     8,
     108,    -1,     5,     9,     5,     8,     5,    -1,     5,     9,
       5,     8,     5,     9,     5,    -1,   109,    -1,   109,     9,
       5,    -1,     5,     9,     5,     9,     5,    -1,   110,     8,
     126,    -1,     5,     8,     5,     8,   126,    -1,   110,     8,
       5,    -1,     5,     8,     5,     8,     5,    -1,     5,     8,
     126,    -1,   126,    -1,    22,    99,   113,    -1,    22,    99,
     112,    -1,    23,    97,    -1,    59,    99,    -1,    59,   142,
      99,    -1,    26,   142,    -1,    26,   142,    27,   126,    -1,
      86,    -1,   116,    -1,   117,    -1,    62,    -1,   118,    -1,
     121,    -1,   119,    -1,   120,    -1,   124,    -1,    67,    -1,
      68,    -1,   108,    -1,   122,    -1,    28,   142,    -1,    28,
     142,     8,   142,    -1,   110,    14,    86,    -1,     5,     8,
       5,    14,    86,    -1,     5,    14,    86,    -1,   110,    14,
     139,    -1,     5,     8,     5,    14,   139,    -1,     5,    14,
     139,    -1,    30,   110,    -1,    30,     5,     8,     5,    -1,
      30,     5,    -1,    31,    -1,    31,    86,    -1,   139,    -1,
      32,    86,    -1,    32,    55,    55,    86,    -1,     5,     1,
      86,    -1,     5,    55,    55,    86,    -1,    33,   123,    -1,
      33,     1,    -1,     5,     8,   123,    -1,     5,    -1,    34,
      -1,    34,   142,    -1,    34,   142,     8,   142,    -1,    34,
     142,     8,     1,    -1,     5,     1,   142,     8,   142,    -1,
      35,    -1,    36,    -1,    37,    -1,    64,   110,     7,    -1,
      64,     5,     8,     5,     7,    -1,    64,     5,     7,    -1,
      38,   110,    39,    -1,    38,     5,     8,     5,    39,    -1,
      38,     5,    39,    -1,   127,    -1,   140,    -1,   128,     9,
       5,    -1,     5,     9,     5,    -1,   129,    -1,   127,    -1,
     140,    -1,   141,    -1,   131,    -1,   130,    -1,    65,    -1,
      66,    -1,    69,    -1,    70,    -1,    63,    -1,   135,    -1,
     136,    -1,   137,    -1,   138,    -1,   132,    -1,    11,    12,
      -1,    11,   133,    12,    -1,   133,     8,   134,    -1,   133,
       8,    -1,   134,    -1,   142,     6,   142,    -1,    64,   142,
       7,    -1,    64,     7,    -1,     1,     7,    -1,    64,     1,
      -1,     1,   142,     7,    -1,    64,   142,     1,    -1,    38,
      86,    39,    -1,    40,    86,    40,    -1,    64,   139,     7,
      -1,    41,    -1,    41,    86,    -1,    42,    38,    86,    39,
      -1,     5,    38,    86,    39,    -1,    42,    38,    95,    39,
      -1,    42,    38,     5,    39,    -1,     5,    38,     5,    39,
      -1,   143,    -1,   130,    -1,   142,   145,   142,    -1,   144,
      -1,   142,     1,   142,    -1,   142,    29,   142,    -1,   142,
      50,   142,    -1,   142,    53,   142,    -1,   142,    54,   142,
      -1,   142,    55,   142,    -1,   142,    56,   142,    -1,     5,
      -1,     5,    64,     7,    -1,     5,    64,    86,     7,    -1,
       5,    64,   142,     7,    -1,   144,     9,     5,    -1,   144,
       9,     5,    64,     7,    -1,   144,     9,     5,    64,    86,
       7,    -1,   144,     9,     5,    64,   142,     7,    -1,    46,
      -1,    47,    -1,    48,    -1,    49,    -1,    43,    -1,    45,
      -1,    24,    -1,    44,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,    79,    79,    82,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    99,   103,   104,   105,   106,   111,
     116,   123,   124,   127,   128,   131,   132,   136,   137,   138,
     144,   152,   153,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   177,
     178,   179,   180,   181,   185,   191,   194,   195,   196,   197,
     198,   199,   200,   204,   208,   212,   216,   220,   224,   228,
     236,   237,   238,   239,   240,   243,   244,   245,   248,   249,
     250,   257,   258,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   274,   275,   276,   277,   280,   281,
     284,   287,   290,   295,   296,   302,   305,   306,   307,   308,
     315,   316,   317,   318,   319,   320,   321,   322,   326,   327,
     331,   332,   333,   334,   335,   336,   339,   340,   343,   346,
     347,   350,   351,   354,   355,   356,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   370,   371,   374,   375,
     376,   377,   378,   379,   382,   383,   384,   387,   388,   391,
     394,   395,   396,   400,   405,   406,   412,   413,   416,   417,
     418,   419,   423,   429,   430,   431,   434,   435,   436,   437,
     438,   439,   440,   441,   444,   445,   448,   449,   450,   451,
     454,   455,   458,   459,   460,   461,   462,   465,   466,   467,
     468,   469,   472,   473,   475,   476,   477,   479,   482,   483,
     484,   488,   492,   496,   503,   506,   509,   512,   513,   516,
     517,   520,   521,   522,   525,   526,   527,   528,   529,   535,
     536,   537,   538,   539,   540,   543,   544,   545,   546,   547,
     548,   549,   550,   553,   554,   555,   556,   557,   558,   559,
     560
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
  "stmt_1_2", "stmt_9", "stmt_8", "stmt_7", "stmt_6", "stmt_5", "stmt_4",
  "stmt_3", "stmt_2", "stmt_1", "$accept", "program", "unit", "class_decl",
  "class_h", "expr_list", "unit_list", "unit_import", "class_body",
  "dm_list", "dm", "var_declaration", "method_declaration", "method_h",
  "args_list", "arg", "block_stmt", "stmt_list", "stmt", "if_stmt",
  "elif_stmt", "if_header", "elif_header", "while_stmt", "while_header",
  "for_stmt", "for_header", "import_list", "import", "target_list",
  "try_stmt", "finally_stmt", "except_stmt", "with_stmt",
  "simple_stmt_list", "assert_stmt", "assignment_stmt", "del_stmt",
  "return_stmt", "yield_stmt", "print_stmt", "global_stmt", "id_list",
  "raise_stmt", "access_modef", "target", "attributeref", "primary",
  "atom", "literal", "enclosure", "dict_display", "key_datum_list",
  "key_datum", "parenth_form", "list_display", "string_conversion",
  "yield_atom", "yield_expression", "subscription", "call", "expr",
  "condition", "long_id", "op", 0
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
     335
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    81,    82,    82,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    84,    85,    85,    85,    85,    85,
      85,    86,    86,    87,    87,    88,    88,    89,    89,    89,
      89,    90,    90,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    92,
      92,    92,    92,    92,    92,    93,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      95,    95,    95,    95,    95,    96,    96,    96,    97,    97,
      97,    98,    98,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,   100,   100,   100,   100,   101,   101,
     102,   103,   104,   105,   105,   106,   107,   107,   107,   107,
     108,   108,   108,   108,   108,   108,   108,   108,   109,   109,
     110,   110,   110,   110,   110,   110,   111,   111,   112,   113,
     113,   114,   114,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   116,   116,   117,   117,
     117,   117,   117,   117,   118,   118,   118,   119,   119,   120,
     121,   121,   121,   121,   122,   122,   123,   123,   124,   124,
     124,   124,   124,   125,   125,   125,   126,   126,   126,   126,
     126,   126,   126,   126,   127,   127,   128,   128,   128,   128,
     129,   129,   130,   130,   130,   130,   130,   131,   131,   131,
     131,   131,   132,   132,   133,   133,   133,   134,   135,   135,
     135,   135,   135,   135,   136,   137,   138,   139,   139,   140,
     140,   141,   141,   141,   142,   142,   142,   142,   142,   143,
     143,   143,   143,   143,   143,   144,   144,   144,   144,   144,
     144,   144,   144,   145,   145,   145,   145,   145,   145,   145,
     145
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     2,     1,     3,     1,     4,     2,     4,     2,
       5,     3,     5,     3,     2,     2,     4,     5,     2,     3,
       2,     3,     1,     3,     1,     3,     1,     2,     3,     1,
       2,     3,     2,     2,     1,     1,     2,     2,     3,     3,
       3,     2,     3,     2,     4,     3,     4,     3,     2,     2,
       1,     4,     3,     4,     3,     2,     5,     5,     4,     4,
       4,     3,     5,     5,     4,     4,     5,     5,     5,     5,
       3,     3,     3,     3,     1,     2,     3,     4,     2,     3,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     4,     8,    10,     2,     4,     3,     5,     3,     2,
       2,     2,     2,     2,     3,     2,     4,     6,     4,     5,
       3,     3,     3,     5,     5,     5,     7,     1,     3,     5,
       3,     5,     3,     5,     3,     1,     3,     3,     2,     2,
       3,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     4,     3,     5,
       3,     3,     5,     3,     2,     4,     2,     1,     2,     1,
       2,     4,     3,     4,     2,     2,     3,     1,     1,     2,
       4,     4,     5,     1,     1,     1,     3,     5,     3,     3,
       5,     3,     1,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     3,     3,     2,     1,     3,     3,     2,
       2,     2,     3,     3,     3,     3,     3,     1,     2,     4,
       4,     4,     4,     4,     1,     1,     3,     1,     3,     3,
       3,     3,     3,     3,     3,     1,     3,     4,     4,     3,
       5,     6,     6,     1,     1,     1,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     3,     5,     0,
      26,     0,    24,    18,    15,    20,     0,     7,     0,     9,
       1,     2,     0,    29,     0,    14,     0,     0,     0,     0,
       4,     0,     0,    19,    11,    13,    27,     0,     0,    50,
     173,   174,   175,     0,     0,    35,    32,     0,    34,     0,
       0,    30,     0,    23,     0,     6,     0,     8,    25,    16,
       0,    28,     0,     0,     0,     0,     0,    36,     0,    43,
       0,    37,     0,    41,    48,    33,     0,     0,    55,     0,
      49,    31,    10,    12,    17,     0,     0,     0,    74,    54,
     235,   196,   192,   193,   194,   195,   225,    52,   224,   227,
       0,    61,     0,    38,     0,    47,    42,    39,     0,    45,
      40,    80,     0,     0,    78,     0,     0,     0,     0,     0,
       0,     0,     0,   157,     0,     0,   168,     0,     0,   217,
       0,   136,     0,   142,   143,   133,    88,     0,    82,    83,
       0,    84,     0,    85,     0,   144,   117,     0,    86,    87,
       0,   134,   135,   137,   139,   140,   138,   145,   141,   125,
     182,     0,   186,   225,   190,   201,   197,   198,   199,   200,
     159,   183,   189,     0,     0,     0,     0,     0,     0,    65,
       0,     0,    75,    64,     0,     0,     0,   249,     0,   247,
     250,   248,   243,   244,   245,   246,     0,     0,     0,     0,
       0,     0,     0,    59,    58,    46,    44,   210,     0,     0,
       0,     0,     0,     0,     0,    90,   202,     0,   206,     0,
     100,   103,     0,     0,     0,   191,     0,   131,     0,   156,
     154,   158,     0,   160,   165,   167,   164,     0,   235,     0,
       0,     0,   218,     0,   211,   235,   209,     0,     0,     0,
       0,    79,    81,    94,   102,   105,     0,     0,     0,     0,
      89,     0,     0,     0,     0,     0,    53,    51,     0,    60,
       0,    73,    71,    76,     0,    72,    70,   236,     0,     0,
       0,   229,   230,   231,   232,   233,   234,     0,   239,   212,
     235,   162,   104,   112,   111,   124,   185,   150,   153,   235,
       0,     0,   205,   203,     0,     0,     0,     0,     0,     0,
       0,   127,   126,     0,     0,     0,     0,     0,     0,     0,
     181,   214,   179,   215,   235,     0,     0,   178,     0,   176,
     216,   213,   208,    21,     0,     0,    96,     0,     0,   110,
     118,   122,   120,   148,   151,   184,    63,    62,    67,    66,
      69,    57,    68,    56,    77,   237,   238,     0,     0,     0,
       0,     0,     0,     0,     0,    91,   223,   220,   163,   204,
       0,     0,   185,   108,   106,   128,   129,     0,     0,   132,
       0,   155,   161,   166,   171,     0,     0,   222,   219,   221,
       0,    95,     0,     0,    99,     0,   240,     0,     0,   109,
       0,   112,   121,   185,   149,   152,   115,   114,   119,     0,
       0,     0,   130,   180,   177,    97,    98,     0,   241,   242,
       0,     0,     0,     0,     0,   123,   107,     0,   112,   185,
     115,   119,   116,     0,     0,    92,     0,   113,   116,   119,
      93
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     6,     7,     8,     9,   135,    11,    12,    25,    26,
      46,    47,    48,    49,    87,    88,   136,   137,   138,   139,
     336,   140,   337,   141,   142,   143,   144,   145,   146,   147,
     148,   311,   312,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   236,   158,    50,   159,   160,   161,   162,    96,
     164,   165,   217,   218,   166,   167,   168,   169,   170,   171,
     172,   173,    98,    99,   201
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -208
static const short int yypact[] =
{
     358,    17,   126,    42,   103,     8,   269,  -208,  -208,   463,
    -208,   115,    46,  -208,    74,   146,    32,  -208,    32,  -208,
    -208,  -208,   265,  -208,   929,  -208,   471,    17,   135,    29,
    -208,   172,    88,  -208,  -208,  -208,  -208,   609,   144,     3,
    -208,  -208,  -208,   906,   170,  -208,  -208,     5,  -208,    23,
     236,  -208,   929,    46,    32,  -208,    32,  -208,  -208,  -208,
     104,  -208,   174,   222,   238,   253,   192,  -208,   196,  -208,
     192,  -208,   199,  -208,  -208,  -208,   267,   816,  -208,   230,
      30,  -208,  -208,  -208,  -208,   370,   278,   228,  -208,  -208,
     242,  -208,  -208,  -208,  -208,  -208,  -208,  1765,  -208,   314,
     391,  -208,   332,  -208,   281,  -208,  -208,  -208,   340,  -208,
    -208,  -208,    40,   466,  -208,    78,   238,   238,  1002,   956,
     238,   238,  1036,   238,    99,   313,   238,  1044,   238,   238,
     373,  -208,   994,  -208,  -208,   409,  -208,   886,  -208,  -208,
     956,  -208,   956,  -208,   956,   413,   444,   272,  -208,  -208,
     397,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,
     459,   461,  -208,   473,  -208,  -208,  -208,  -208,  -208,  -208,
    -208,   478,  -208,   536,   187,   194,   432,   238,   533,  -208,
     215,   238,   475,  -208,   227,   219,   238,  -208,   238,  -208,
    -208,  -208,  -208,  -208,  -208,  -208,   238,   238,   238,   238,
     238,   238,   486,  -208,  -208,  -208,  -208,  -208,  1633,   866,
    1078,   488,   246,  1232,   468,  -208,  -208,   318,  -208,  1666,
    1765,  1765,   259,   822,   108,  -208,    16,  1699,  1318,   176,
     531,   409,   502,   409,  -208,   551,  -208,  1352,   152,    10,
      38,    58,   409,  1196,   259,    33,  -208,   424,   554,  1732,
     238,  -208,  -208,   160,  -208,  -208,   558,   568,  1086,   246,
    -208,   588,   440,   495,   580,   510,  -208,  1765,   678,  -208,
     291,   581,  -208,  1765,   238,   581,  -208,  -208,   538,  1517,
     326,   503,   503,   503,   503,   503,   503,   396,   546,  -208,
      -1,   409,  1385,   225,   589,  -208,    13,   409,  -208,    86,
      50,   238,   238,  -208,   238,  1120,   613,   238,   238,    23,
     956,  -208,  -208,  1128,   238,  1162,   238,   615,    22,  1170,
    -208,  -208,  -208,  -208,    62,   134,   162,  -208,  1204,  -208,
    -208,   238,  -208,  1765,   956,   238,   608,   956,   618,   444,
    -208,     0,  -208,   409,  -208,  -208,  -208,  -208,  -208,  -208,
    -208,  -208,  -208,  -208,  1765,  -208,  -208,   798,   238,   238,
    1212,   624,   246,   626,   628,  -208,  -208,  -208,   409,  -208,
    1567,   831,  -208,   409,   409,  -208,  -208,   676,     0,  -208,
    1418,   516,   409,  -208,  -208,  1451,   173,  -208,  -208,  -208,
     210,  -208,   746,   956,   625,   660,  -208,   564,  1600,   409,
    1484,   607,  -208,    18,   409,  -208,   600,   589,  -208,  1246,
     238,    40,  -208,  -208,  -208,  -208,  -208,   658,  -208,  -208,
     673,   675,   685,   686,   689,     0,   409,   606,   633,    18,
     649,   623,   655,   692,   694,  -208,   696,   680,   680,   623,
    -208
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -208,  -208,   697,  1289,  -208,  -113,   679,   688,  -208,   690,
     661,   247,   435,  -208,   -60,   203,   -47,  -208,  -112,  -208,
     333,  -208,  -208,  -208,  -208,  -208,  -208,  -207,   472,   178,
    -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,
    -208,  -208,   416,  -208,  -208,  -156,  -208,  -208,  -208,   -58,
    -208,  -208,  -208,   433,  -208,  -208,  -208,  -208,  -131,  -208,
    -208,   -64,  -208,  -208,  -208
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -236
static const short int yytable[] =
{
      97,   248,    78,   294,  -236,   102,    74,   226,    63,   306,
     231,   233,     2,     3,   239,   241,   242,    64,   250,   163,
     358,  -236,    10,   384,    76,   252,  -236,    90,   253,    77,
     254,  -236,   255,     2,     3,   176,     2,     3,   213,   309,
     327,   328,   306,    15,   177,    90,   258,   207,   208,   321,
     111,   219,   220,   221,   295,    31,   227,   228,   250,    18,
     225,   163,   237,   185,   225,    75,   250,    65,   249,   163,
     180,   213,   278,   365,   163,   310,   181,   322,  -113,   163,
      56,   298,   163,    90,   163,    91,   163,    92,    93,   367,
     216,    94,    95,    10,   178,    59,   291,   185,   323,   297,
     300,   387,   342,    91,    90,    92,    93,     2,     3,    94,
      95,    84,    27,   267,   263,   265,   258,   273,   270,     2,
       3,   279,   280,    27,   281,   366,   185,    13,   344,   308,
     325,    14,   282,   283,   284,   285,   286,   287,    32,     2,
       3,    91,   250,    92,    93,   292,   343,    94,    95,   295,
     185,    33,   225,   294,   232,    16,   407,   379,   208,   295,
     319,   306,    91,   295,    92,    93,    28,    29,    94,    95,
     184,    38,   295,   388,     2,    39,   334,    58,   335,    85,
     208,   409,   306,   326,   315,   306,   333,    54,   368,    86,
     213,   320,   262,    38,   373,   374,     2,    39,   376,   264,
     225,   389,    86,   382,   402,    40,    41,    42,    62,    86,
     354,   213,   413,   294,   213,   407,   185,   414,   409,   306,
     271,    70,   391,    89,    90,   394,   277,    40,    41,    42,
      86,   405,   275,  -236,   361,   183,   184,    79,   219,   362,
     370,    80,    86,    90,   397,   399,   377,   225,   213,   404,
     380,    90,   163,   402,   385,   225,   106,   225,   100,   110,
     101,   225,   375,   213,    90,   412,   207,   280,    86,    20,
     225,   392,     1,     2,     3,    36,   163,   111,    24,   163,
     258,   415,    91,   182,    92,    93,   259,   129,    94,    95,
      68,    72,   352,   398,   174,   400,   224,   426,   353,   184,
     230,    91,   225,    92,    93,   240,   185,    94,    95,    91,
     247,    92,    93,   104,   234,    94,    95,   108,   235,   163,
       4,     5,    91,   202,    92,    93,   302,   186,    94,    95,
     303,  -228,  -228,  -228,  -228,   163,  -228,  -228,  -228,   204,
     184,   205,  -228,  -228,  -228,  -228,  -228,   427,  -228,  -228,
     187,   225,  -228,  -228,  -228,   188,  -228,  -228,  -228,  -228,
    -228,     1,     2,     3,  -228,  -228,  -228,  -228,  -228,   189,
     190,   191,   192,   193,   194,   195,   196,   179,   180,   197,
     198,   199,   200,   272,   181,  -228,  -228,   276,  -228,  -228,
    -228,  -228,  -228,  -228,  -228,  -228,  -228,   186,   203,   180,
     206,  -226,  -226,  -226,  -226,   181,  -226,  -226,  -226,     4,
       5,   243,  -226,  -226,  -226,  -226,  -226,   250,  -226,  -226,
     187,   256,  -226,  -226,  -226,   188,  -226,  -226,  -226,  -226,
    -226,   329,   258,   266,  -226,  -226,  -226,  -226,  -226,   189,
     190,   191,   192,   193,   194,   195,   196,   346,   180,   197,
     198,   199,   200,   257,   181,  -226,  -226,   260,  -226,  -226,
    -226,  -226,  -226,  -226,  -226,  -226,  -226,   209,  -187,    22,
     261,  -235,  -235,    23,   210,   211,    24,  -235,    69,    73,
     212,    51,  -191,  -235,    52,  -235,  -235,  -188,  -235,   274,
    -235,   288,  -235,   296,  -235,  -235,  -235,  -235,  -235,  -235,
    -235,   105,   347,   184,   213,   109,  -235,  -235,  -235,  -235,
    -235,  -235,  -235,  -235,  -235,  -235,  -235,   349,   184,  -235,
    -235,   214,  -235,   301,   409,   306,   215,   187,  -235,  -235,
     185,  -235,  -235,  -235,  -235,  -235,  -235,   186,   268,   258,
     269,   -22,   -22,   -22,   -22,   355,   250,   -22,    86,   192,
     193,   194,   195,   -22,   213,   -22,   -22,   316,   -22,   317,
     187,   330,   -22,   338,   -22,   188,   -22,   -22,   -22,   -22,
     -22,   418,   250,   340,   -22,   -22,   -22,   -22,   -22,   189,
     190,   191,   192,   193,   194,   195,   196,   348,   180,   197,
     198,   199,   200,   345,   181,   181,   -22,  -236,   -22,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,   186,  -236,   424,
    -236,  -228,  -228,   289,  -228,  -236,   421,  -228,   372,    61,
     235,  -123,    52,  -228,   393,  -228,  -228,   395,  -228,   403,
     187,   406,  -228,   408,  -228,   188,  -228,  -228,  -228,  -228,
    -228,  -236,   433,   335,  -228,   213,  -228,  -228,  -228,   189,
     190,   191,   192,   193,   194,   195,   196,  -236,   434,   197,
     198,   199,   200,  -236,   436,   417,  -228,   364,  -228,  -228,
    -228,  -228,  -228,  -228,  -228,  -228,  -228,   411,   428,   350,
     429,   113,    77,  -236,   -22,   351,   180,   115,  -236,   364,
     430,   431,   181,   116,   432,   117,   118,   437,   119,   438,
     187,   439,   120,    21,   121,   188,   122,   123,   124,   125,
     126,    60,    37,    81,   127,    53,   128,   129,   130,   189,
     190,   191,   192,   193,   194,   195,   196,   416,   339,   197,
     198,   199,   200,   383,     0,   369,   -22,     0,   131,    91,
     132,    92,    93,   133,   134,    94,    95,   186,     0,     0,
       0,  -101,  -101,     0,     0,     0,     0,  -101,     0,     0,
       0,     0,     0,  -101,     0,  -101,  -101,     0,  -101,     0,
     187,     0,  -101,     0,  -101,   188,  -101,  -101,  -101,  -101,
    -101,     0,     0,     0,  -101,     0,  -101,  -101,  -101,   189,
     190,   191,   192,   193,   194,   195,   196,     0,     0,   197,
     198,   199,   200,    90,     0,   396,     0,     0,  -101,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,  -101,   112,     0,     0,
       0,   113,    77,     0,     0,     0,   114,   115,     0,     0,
     305,   306,     0,   116,     0,   117,   118,     0,   119,   409,
     306,     0,   120,   307,   121,     0,   122,   123,   124,   125,
     126,     0,   410,     0,   127,     0,   128,   129,   130,     0,
     213,    91,     0,    92,    93,     0,     0,    94,    95,   213,
       0,   290,     0,     0,     0,     0,     0,     0,   131,    91,
     132,    92,    93,   133,   134,    94,    95,   112,     0,     0,
       0,   113,    77,     0,     0,     0,   251,   115,     0,     0,
       0,     0,     0,   116,     0,   117,   118,    38,   119,     0,
       2,    39,   120,     0,   121,     0,   122,   123,   124,   125,
     126,     0,     0,     0,   127,     0,   128,   129,   130,    91,
      38,    92,    93,     2,    39,    94,    95,     0,     0,     0,
       0,    40,    41,    42,     0,     0,     0,     0,   131,    91,
     132,    92,    93,   133,   134,    94,    95,   112,    66,     0,
       0,   113,    77,     0,    40,    41,    42,   115,     0,     0,
       0,     0,     0,   116,     0,   117,   118,     0,   119,     0,
      43,    44,   120,     0,   121,     0,   122,   123,   124,   125,
     126,     0,     0,     0,   127,   244,   128,   129,   130,   245,
       0,   246,     0,   222,     0,   115,     0,   223,     0,     0,
       0,     0,     0,   115,     0,     0,     0,     0,   131,    91,
     132,    92,    93,   133,   134,    94,    95,     0,     0,     0,
       0,     0,   127,     0,   128,   129,   130,   222,     0,     0,
     127,   229,   128,     0,   130,   222,     0,   115,     0,   238,
       0,     0,     0,     0,     0,   115,     0,    91,   132,    92,
      93,     0,     0,    94,    95,    91,   132,    92,    93,     0,
       0,    94,    95,     0,   127,     0,   128,     0,   130,   222,
       0,     0,   127,   293,   128,     0,   130,   222,     0,   115,
       0,   341,     0,     0,     0,     0,     0,   115,     0,    91,
     132,    92,    93,     0,     0,    94,    95,    91,   132,    92,
      93,     0,     0,    94,    95,     0,   127,     0,   128,     0,
     130,   222,     0,     0,   127,   371,   128,     0,   130,   222,
       0,   115,     0,   378,     0,     0,     0,     0,     0,   115,
       0,    91,   132,    92,    93,     0,     0,    94,    95,    91,
     132,    92,    93,     0,     0,    94,    95,     0,   127,     0,
     128,     0,   130,   222,     0,     0,   127,   381,   128,     0,
     130,   222,     0,   115,     0,   386,     0,     0,     0,     0,
       0,   115,     0,    91,   132,    92,    93,     0,     0,    94,
      95,    91,   132,    92,    93,     0,     0,    94,    95,     0,
     127,   324,   128,     0,   130,   222,     0,     0,   127,   390,
     128,    86,   130,   222,     0,   115,     0,   401,     0,     0,
       0,     0,     0,   115,     0,    91,   132,    92,    93,     0,
       0,    94,    95,    91,   132,    92,    93,   299,     0,    94,
      95,     0,   127,     0,   128,     0,   130,   222,     0,     0,
     127,   425,   128,     0,   130,     0,     0,   115,     0,    91,
       0,    92,    93,     0,     0,    94,    95,    91,   132,    92,
      93,     0,     0,    94,    95,    91,   132,    92,    93,     0,
       0,    94,    95,     0,   127,     0,   128,     0,   130,     0,
       0,     0,     0,    17,    19,    91,     0,    92,    93,     0,
      30,    94,    95,     0,     0,    34,     0,    35,     0,    91,
     132,    92,    93,    45,     0,    94,    95,    55,    57,   186,
       0,     0,     0,     0,     0,     0,   314,     0,     0,     0,
       0,     0,    67,    71,     0,     0,     0,     0,     0,     0,
       0,    45,   187,    82,     0,    83,     0,   188,     0,     0,
       0,     0,     0,   186,     0,   103,     0,     0,     0,   107,
     318,   189,   190,   191,   192,   193,   194,   195,   196,     0,
       0,   197,   198,   199,   200,     0,   187,     0,  -146,     0,
       0,   188,     0,     0,     0,     0,  -236,     0,     0,     0,
       0,     0,     0,   359,     0,   189,   190,   191,   192,   193,
     194,   195,   196,     0,     0,   197,   198,   199,   200,   187,
       0,     0,  -169,     0,   188,     0,     0,     0,     0,   186,
       0,     0,     0,     0,     0,     0,     0,     0,   189,   190,
     191,   192,   193,   194,   195,   196,     0,     0,   197,   198,
     199,   200,   187,     0,     0,   -22,     0,   188,     0,     0,
       0,     0,   186,     0,     0,     0,     0,     0,     0,     0,
       0,   189,   190,   191,   192,   193,   194,   195,   196,     0,
       0,   197,   198,   199,   200,   187,     0,     0,  -147,     0,
     188,     0,     0,     0,     0,   186,     0,     0,     0,     0,
       0,     0,     0,     0,   189,   190,   191,   192,   193,   194,
     195,   196,     0,     0,   197,   198,   199,   200,   187,     0,
       0,  -170,     0,   188,     0,     0,     0,     0,   186,     0,
       0,     0,     0,     0,   356,   -22,     0,   189,   190,   191,
     192,   193,   194,   195,   196,     0,     0,   197,   198,   199,
     200,   187,     0,     0,  -172,     0,   188,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     189,   190,   191,   192,   193,   194,   195,   196,   186,     0,
     197,   198,   199,   200,     0,  -207,     0,     0,     0,  -207,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   187,     0,     0,     0,     0,   188,     0,     0,     0,
       0,   186,     0,     0,     0,     0,     0,   419,   -22,     0,
     189,   190,   191,   192,   193,   194,   195,   196,     0,     0,
     197,   198,   199,   200,   187,     0,     0,     0,     0,   188,
       0,     0,     0,     0,   186,     0,     0,     0,     0,     0,
     289,     0,     0,   189,   190,   191,   192,   193,   194,   195,
     196,     0,     0,   197,   198,   199,   200,   187,     0,     0,
       0,     0,   188,     0,     0,     0,     0,   186,     0,     0,
       0,     0,   304,     0,     0,     0,   189,   190,   191,   192,
     193,   194,   195,   196,     0,     0,   197,   198,   199,   200,
     187,     0,     0,     0,     0,   188,     0,     0,     0,     0,
    -236,     0,     0,     0,     0,     0,     0,     0,     0,   189,
     190,   191,   192,   193,   194,   195,   196,     0,     0,   197,
     198,   199,   200,   187,     0,     0,   313,     0,   188,     0,
       0,     0,     0,   331,     0,     0,     0,     0,     0,   332,
       0,     0,   189,   190,   191,   192,   193,   194,   195,   196,
       0,     0,   197,   198,   199,   200,   187,     0,     0,     0,
       0,   188,     0,     0,     0,     0,  -236,     0,     0,     0,
       0,     0,     0,     0,     0,   189,   190,   191,   192,   193,
     194,   195,   196,     0,     0,   197,   198,   199,   200,   187,
       0,     0,     0,     0,   188,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   189,   190,
     191,   192,   193,   194,   195,   196,     0,     0,   197,   198,
     199,   200
};

static const short int yycheck[] =
{
      64,   132,    49,   210,     1,    65,     1,   119,     5,     9,
     123,   124,     4,     5,   127,   128,   129,    14,     8,    77,
      21,     8,     5,     1,     1,   137,     8,     5,   140,     6,
     142,     1,   144,     4,     5,     5,     4,     5,    38,    23,
       7,     8,     9,     1,    14,     5,     8,     7,   112,    39,
      10,   115,   116,   117,   210,     9,   120,   121,     8,    51,
     118,   119,   126,    64,   122,    60,     8,    64,   132,   127,
       8,    38,   185,    60,   132,    59,    14,    39,    60,   137,
      51,   212,   140,     5,   142,    63,   144,    65,    66,    39,
      12,    69,    70,     5,    64,     7,   209,    64,    40,   212,
     213,    39,   258,    63,     5,    65,    66,     4,     5,    69,
      70,     7,     8,   177,   174,   175,     8,   181,   178,     4,
       5,   185,   186,     8,   188,    39,    64,     1,   259,    21,
     243,     5,   196,   197,   198,   199,   200,   201,    64,     4,
       5,    63,     8,    65,    66,   209,   259,    69,    70,   305,
      64,     5,   210,   360,    55,    52,   363,   313,   222,   315,
       8,     9,    63,   319,    65,    66,    51,    52,    69,    70,
       8,     1,   328,    39,     4,     5,    16,     5,    18,     5,
     244,     8,     9,   243,     8,     9,   250,    52,   301,    15,
      38,    39,     5,     1,   307,   308,     4,     5,   310,     5,
     258,    39,    15,   316,   360,    35,    36,    37,    64,    15,
     274,    38,    39,   420,    38,   422,    64,     7,     8,     9,
       5,    51,   334,     1,     5,   337,     7,    35,    36,    37,
      15,   362,     5,     8,     9,     7,     8,     1,   302,    14,
     304,     5,    15,     5,   357,   358,   310,   305,    38,   362,
     314,     5,   310,   409,   318,   313,    60,   315,     5,    60,
       7,   319,   309,    38,     5,   377,     7,   331,    15,     0,
     328,   335,     3,     4,     5,    10,   334,    10,    13,   337,
       8,   393,    63,     5,    65,    66,    14,    41,    69,    70,
      43,    44,     1,   357,    64,   359,   118,   410,     7,     8,
     122,    63,   360,    65,    66,   127,    64,    69,    70,    63,
     132,    65,    66,    66,     1,    69,    70,    70,     5,   377,
      51,    52,    63,     9,    65,    66,     8,     1,    69,    70,
      12,     5,     6,     7,     8,   393,    10,    11,    12,     7,
       8,    60,    16,    17,    18,    19,    20,   411,    22,    23,
      24,   409,    26,    27,    28,    29,    30,    31,    32,    33,
      34,     3,     4,     5,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,     7,     8,    53,
      54,    55,    56,   180,    14,    59,    60,   184,    62,    63,
      64,    65,    66,    67,    68,    69,    70,     1,     7,     8,
      60,     5,     6,     7,     8,    14,    10,    11,    12,    51,
      52,    38,    16,    17,    18,    19,    20,     8,    22,    23,
      24,     8,    26,    27,    28,    29,    30,    31,    32,    33,
      34,     7,     8,     1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,     7,     8,    53,
      54,    55,    56,     9,    14,    59,    60,    60,    62,    63,
      64,    65,    66,    67,    68,    69,    70,     1,     9,     6,
       9,     5,     6,    10,     8,     9,    13,    11,    43,    44,
      14,    10,     9,    17,    13,    19,    20,     9,    22,    14,
      24,     5,    26,     5,    28,    29,    30,    31,    32,    33,
      34,    66,     7,     8,    38,    70,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,     7,     8,    53,
      54,    55,    56,    55,     8,     9,    60,    24,    62,    63,
      64,    65,    66,    67,    68,    69,    70,     1,     5,     8,
       7,     5,     6,     7,     8,     7,     8,    11,    15,    46,
      47,    48,    49,    17,    38,    19,    20,    55,    22,     8,
      24,     7,    26,     5,    28,    29,    30,    31,    32,    33,
      34,     7,     8,     5,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,     7,     8,    53,
      54,    55,    56,     5,    14,    14,    60,     8,    62,    63,
      64,    65,    66,    67,    68,    69,    70,     1,     8,     9,
      64,     5,     6,     7,     8,     8,     9,    11,     5,    10,
       5,    14,    13,    17,    16,    19,    20,     9,    22,     5,
      24,     5,    26,     5,    28,    29,    30,    31,    32,    33,
      34,     8,     9,    18,    38,    38,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,     8,     9,    53,
      54,    55,    56,     8,     9,     5,    60,     9,    62,    63,
      64,    65,    66,    67,    68,    69,    70,     1,     5,     1,
       5,     5,     6,    60,     8,     7,     8,    11,     8,     9,
       5,     5,    14,    17,     5,    19,    20,     5,    22,     5,
      24,     5,    26,     6,    28,    29,    30,    31,    32,    33,
      34,    32,    22,    52,    38,    27,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,   394,   256,    53,
      54,    55,    56,   317,    -1,   302,    60,    -1,    62,    63,
      64,    65,    66,    67,    68,    69,    70,     1,    -1,    -1,
      -1,     5,     6,    -1,    -1,    -1,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    17,    -1,    19,    20,    -1,    22,    -1,
      24,    -1,    26,    -1,    28,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    38,    -1,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      54,    55,    56,     5,    -1,     7,    -1,    -1,    62,    63,
      64,    65,    66,    67,    68,    69,    70,     1,    -1,    -1,
      -1,     5,     6,    -1,    -1,    -1,    10,    11,    -1,    -1,
       8,     9,    -1,    17,    -1,    19,    20,    -1,    22,     8,
       9,    -1,    26,    21,    28,    -1,    30,    31,    32,    33,
      34,    -1,    21,    -1,    38,    -1,    40,    41,    42,    -1,
      38,    63,    -1,    65,    66,    -1,    -1,    69,    70,    38,
      -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,
      64,    65,    66,    67,    68,    69,    70,     1,    -1,    -1,
      -1,     5,     6,    -1,    -1,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    17,    -1,    19,    20,     1,    22,    -1,
       4,     5,    26,    -1,    28,    -1,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    38,    -1,    40,    41,    42,    63,
       1,    65,    66,     4,     5,    69,    70,    -1,    -1,    -1,
      -1,    35,    36,    37,    -1,    -1,    -1,    -1,    62,    63,
      64,    65,    66,    67,    68,    69,    70,     1,    52,    -1,
      -1,     5,     6,    -1,    35,    36,    37,    11,    -1,    -1,
      -1,    -1,    -1,    17,    -1,    19,    20,    -1,    22,    -1,
      51,    52,    26,    -1,    28,    -1,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    38,     1,    40,    41,    42,     5,
      -1,     7,    -1,     1,    -1,    11,    -1,     5,    -1,    -1,
      -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    40,    41,    42,     1,    -1,    -1,
      38,     5,    40,    -1,    42,     1,    -1,    11,    -1,     5,
      -1,    -1,    -1,    -1,    -1,    11,    -1,    63,    64,    65,
      66,    -1,    -1,    69,    70,    63,    64,    65,    66,    -1,
      -1,    69,    70,    -1,    38,    -1,    40,    -1,    42,     1,
      -1,    -1,    38,     5,    40,    -1,    42,     1,    -1,    11,
      -1,     5,    -1,    -1,    -1,    -1,    -1,    11,    -1,    63,
      64,    65,    66,    -1,    -1,    69,    70,    63,    64,    65,
      66,    -1,    -1,    69,    70,    -1,    38,    -1,    40,    -1,
      42,     1,    -1,    -1,    38,     5,    40,    -1,    42,     1,
      -1,    11,    -1,     5,    -1,    -1,    -1,    -1,    -1,    11,
      -1,    63,    64,    65,    66,    -1,    -1,    69,    70,    63,
      64,    65,    66,    -1,    -1,    69,    70,    -1,    38,    -1,
      40,    -1,    42,     1,    -1,    -1,    38,     5,    40,    -1,
      42,     1,    -1,    11,    -1,     5,    -1,    -1,    -1,    -1,
      -1,    11,    -1,    63,    64,    65,    66,    -1,    -1,    69,
      70,    63,    64,    65,    66,    -1,    -1,    69,    70,    -1,
      38,     5,    40,    -1,    42,     1,    -1,    -1,    38,     5,
      40,    15,    42,     1,    -1,    11,    -1,     5,    -1,    -1,
      -1,    -1,    -1,    11,    -1,    63,    64,    65,    66,    -1,
      -1,    69,    70,    63,    64,    65,    66,     5,    -1,    69,
      70,    -1,    38,    -1,    40,    -1,    42,     1,    -1,    -1,
      38,     5,    40,    -1,    42,    -1,    -1,    11,    -1,    63,
      -1,    65,    66,    -1,    -1,    69,    70,    63,    64,    65,
      66,    -1,    -1,    69,    70,    63,    64,    65,    66,    -1,
      -1,    69,    70,    -1,    38,    -1,    40,    -1,    42,    -1,
      -1,    -1,    -1,     4,     5,    63,    -1,    65,    66,    -1,
      11,    69,    70,    -1,    -1,    16,    -1,    18,    -1,    63,
      64,    65,    66,    24,    -1,    69,    70,    28,    29,     1,
      -1,    -1,    -1,    -1,    -1,    -1,     8,    -1,    -1,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    24,    54,    -1,    56,    -1,    29,    -1,    -1,
      -1,    -1,    -1,     1,    -1,    66,    -1,    -1,    -1,    70,
       8,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    53,    54,    55,    56,    -1,    24,    -1,    60,    -1,
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
      -1,    60,    -1,    29,    -1,    -1,    -1,    -1,     1,    -1,
      -1,    -1,    -1,    -1,     7,     8,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    -1,    53,    54,    55,
      56,    24,    -1,    -1,    60,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,     1,    -1,
      53,    54,    55,    56,    -1,     8,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    -1,    -1,     7,     8,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    -1,
      53,    54,    55,    56,    24,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,
       7,    -1,    -1,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    53,    54,    55,    56,    24,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    -1,     1,    -1,    -1,
      -1,    -1,     6,    -1,    -1,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    -1,    53,    54,    55,    56,
      24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      54,    55,    56,    24,    -1,    -1,    27,    -1,    29,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,     7,
      -1,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    53,    54,    55,    56,    24,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    -1,    53,    54,    55,    56,    24,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    53,    54,
      55,    56
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,     4,     5,    51,    52,    82,    83,    84,    85,
       5,    87,    88,     1,     5,     1,    52,    84,    51,    84,
       0,    83,     6,    10,    13,    89,    90,     8,    51,    52,
      84,     9,    64,     5,    84,    84,    10,    90,     1,     5,
      35,    36,    37,    51,    52,    84,    91,    92,    93,    94,
     125,    10,    13,    88,    52,    84,    51,    84,     5,     7,
      87,    10,    64,     5,    14,    64,    52,    84,    92,    93,
      51,    84,    92,    93,     1,    60,     1,     6,    97,     1,
       5,    91,    84,    84,     7,     5,    15,    95,    96,     1,
       5,    63,    65,    66,    69,    70,   130,   142,   143,   144,
       5,     7,    95,    84,    92,    93,    60,    84,    92,    93,
      60,    10,     1,     5,    10,    11,    17,    19,    20,    22,
      26,    28,    30,    31,    32,    33,    34,    38,    40,    41,
      42,    62,    64,    67,    68,    86,    97,    98,    99,   100,
     102,   104,   105,   106,   107,   108,   109,   110,   111,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   124,   126,
     127,   128,   129,   130,   131,   132,   135,   136,   137,   138,
     139,   140,   141,   142,    64,     1,     5,    14,    64,     7,
       8,    14,     5,     7,     8,    64,     1,    24,    29,    43,
      44,    45,    46,    47,    48,    49,    50,    53,    54,    55,
      56,   145,     9,     7,     7,    60,    60,     7,   142,     1,
       8,     9,    14,    38,    55,    60,    12,   133,   134,   142,
     142,   142,     1,     5,   110,   130,    99,   142,   142,     5,
     110,    86,    55,    86,     1,     5,   123,   142,     5,    86,
     110,    86,    86,    38,     1,     5,     7,   110,   139,   142,
       8,    10,    99,    99,    99,    99,     8,     9,     8,    14,
      60,     9,     5,    95,     5,    95,     1,   142,     5,     7,
      95,     5,    96,   142,    14,     5,    96,     7,    86,   142,
     142,   142,   142,   142,   142,   142,   142,   142,     5,     7,
       5,    86,   142,     5,   108,   126,     5,    86,   139,     5,
      86,    55,     8,    12,     6,     8,     9,    21,    21,    23,
      59,   112,   113,    27,     8,     8,    55,     8,     8,     8,
      39,    39,    39,    40,     5,    86,    95,     7,     8,     7,
       7,     1,     7,   142,    16,    18,   101,   103,     5,   109,
       5,     5,   126,    86,   139,     5,     7,     7,     7,     7,
       1,     7,     1,     7,   142,     7,     7,    64,    21,     8,
       8,     9,    14,     8,     9,    60,    39,    39,    86,   134,
     142,     5,     5,    86,    86,    97,    99,   142,     5,   126,
     142,     5,    86,   123,     1,   142,     5,    39,    39,    39,
       5,    99,   142,    16,    99,     9,     7,    86,   142,    86,
     142,     5,   126,     5,    86,   139,     5,   108,     5,     8,
      21,     1,    99,    39,     7,    99,   101,     5,     7,     7,
       8,     9,     8,     9,     9,     5,    86,   142,     5,     5,
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
#line 79 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {	Streams::verbose() <<"prgram : program unit\n";
						Streams::verbose().flush();						
					;}
    break;

  case 3:
#line 82 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"program: unit\n";
								Streams::verbose().flush();						
							;}
    break;

  case 4:
#line 87 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"unit: IMPORT unit_list class_decl\n";;}
    break;

  case 5:
#line 88 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"unit: class_decl\n";;}
    break;

  case 6:
#line 89 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"unit: IMPORT unit_list FINAL class_decl\n";;}
    break;

  case 7:
#line 90 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"unit: FINAL class_decl\n";;}
    break;

  case 8:
#line 91 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"unit: IMPORT unit_list STATIC class_decl\n";;}
    break;

  case 9:
#line 92 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"unit: STATIC class_decl\n";;}
    break;

  case 10:
#line 93 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"unit: IMPORT unit_list FINAL STATIC class_decl\n";;}
    break;

  case 11:
#line 94 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"unit: FINAL STATIC class_decl\n";;}
    break;

  case 12:
#line 95 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"unit: IMPORT unit_list STATIC FINAL class_decl\n";;}
    break;

  case 13:
#line 96 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"unit: STATIC FINAL class_decl\n";;}
    break;

  case 14:
#line 99 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"class_decl: class_h class_body\n";
								;}
    break;

  case 15:
#line 103 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[0].r.colNum)+1));;}
    break;

  case 16:
#line 104 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[0].r.colNum)+1)); ;}
    break;

  case 17:
#line 105 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[0].r.colNum)+1));;}
    break;

  case 18:
#line 106 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {							
									colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected class name at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected class name","");
		;}
    break;

  case 19:
#line 111 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected Reserved word at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected Reserved word","");
							 ;}
    break;

  case 20:
#line 116 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected Reserved word at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected Reserved word","");
						 ;}
    break;

  case 21:
#line 123 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"expr_list: expr_list COMMA expr\n";;}
    break;

  case 22:
#line 124 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"expr_list: expr %prec stmt_1\n";;}
    break;

  case 23:
#line 127 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"unit_list:	unit_list COMMA unit_import\n";;}
    break;

  case 24:
#line 128 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"unit_list:	unit_import\n";;}
    break;

  case 25:
#line 131 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"unit_import: unit_import DOT ID\n";;}
    break;

  case 26:
#line 132 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"unit_import: ID\n";;}
    break;

  case 27:
#line 136 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"class_body:COLON END	\n";colonStack.pop();;}
    break;

  case 28:
#line 137 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"class_body:COLON dm_list END\n";colonStack.pop();;}
    break;

  case 29:
#line 138 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
					ColonStack* temp = colonStack.top();
					colonStack.pop();
					Streams::verbose()<<"Error: Expected ':' at Line No:"<<temp->lineNum<<" Column No:"<<temp->colNum<<endl;
					err->errQ->enqueue(temp->lineNum,temp->colNum,"Expected ':' ","");
				  ;}
    break;

  case 30:
#line 144 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
					ColonStack* temp = colonStack.top();
					colonStack.pop();
					Streams::verbose()<<"Error: Expected ':' at Line No:"<<temp->lineNum<<" Column No:"<<temp->colNum<<endl;
					err->errQ->enqueue(temp->lineNum,temp->colNum,"Expected ':' ","");
				  ;}
    break;

  case 31:
#line 152 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm_list: dm_list DEF dm\n";;}
    break;

  case 32:
#line 153 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm_list: DEF dm\n";;}
    break;

  case 33:
#line 156 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm:	var_declaration SEMICOLON\n";;}
    break;

  case 34:
#line 157 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm:	var_declaration\n";;}
    break;

  case 35:
#line 158 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm:	class_decl\n";;}
    break;

  case 36:
#line 159 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm: FINAL class_decl\n";;}
    break;

  case 37:
#line 160 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm: STATIC class_decl\n";;}
    break;

  case 38:
#line 161 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm: FINAL STATIC class_decl\n";;}
    break;

  case 39:
#line 162 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm: STATIC FINAL class_decl\n";;}
    break;

  case 40:
#line 163 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm: STATIC var_declaration SEMICOLON\n";;}
    break;

  case 41:
#line 164 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm: STATIC	var_declaration\n";;}
    break;

  case 42:
#line 165 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm: FINAL var_declaration SEMICOLON\n";;}
    break;

  case 43:
#line 166 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm: FINAL var_declaration\n";;}
    break;

  case 44:
#line 167 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm: STATIC FINAL var_declaration SEMICOLON\n";;}
    break;

  case 45:
#line 168 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm:STATIC FINAL var_declaration\n";;}
    break;

  case 46:
#line 169 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm: FINAL STATIC var_declaration SEMICOLON\n";;}
    break;

  case 47:
#line 170 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm: FINAL STATIC var_declaration\n";;}
    break;

  case 48:
#line 171 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
							Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
							err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"Expected ';' ","");
						   ;}
    break;

  case 49:
#line 177 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: access_modef ID\n";;}
    break;

  case 50:
#line 178 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: ID\n";;}
    break;

  case 51:
#line 179 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: access_modef ID ASSIGN expr\n";;}
    break;

  case 52:
#line 180 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: ID ASSIGN expr\n";;}
    break;

  case 53:
#line 181 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
											Streams::verbose()<<"Error: UN Expected IDENTIFIER Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)-strlen((yyvsp[-1].r.strVal)),"UN Expected IDENTIFIER ","");
										  ;}
    break;

  case 54:
#line 185 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
							Streams::verbose()<<"Error: UN Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[0].r.colNum)-strlength((yyvsp[0].r.strVal))<<endl;
							err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[0].r.colNum)-strlen((yyvsp[0].r.strVal)),"UN Expected IDENTIFIER ","");						
						;}
    break;

  case 55:
#line 191 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_declaration: method_h block_stmt\n";;}
    break;

  case 56:
#line 194 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_h: access_modef ID OPEN_S args_list CLOSE_S \n";;}
    break;

  case 57:
#line 195 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_h: access_modef ID OPEN_S ID CLOSE_S \n";;}
    break;

  case 58:
#line 196 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S args_list CLOSE_S \n";;}
    break;

  case 59:
#line 197 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S ID CLOSE_S \n";;}
    break;

  case 60:
#line 198 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_h: access_modef ID OPEN_S  CLOSE_S \n";;}
    break;

  case 61:
#line 199 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S CLOSE_S COLON \n";;}
    break;

  case 62:
#line 200 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
														err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
												   ;}
    break;

  case 63:
#line 204 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
														err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
												   ;}
    break;

  case 64:
#line 208 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
									  ;}
    break;

  case 65:
#line 212 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
									  ;}
    break;

  case 66:
#line 216 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)+1<<endl;
												err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)+1,"Expected '(' ","");
											   ;}
    break;

  case 67:
#line 220 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)+1<<endl;
												err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)+1,"Expected '(' ","");
											   ;}
    break;

  case 68:
#line 224 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue((yyvsp[-4].r.lineNum),yylval.r.colNum-strlength(yylval.r.strVal),"Expected ')' ","");
													 ;}
    break;

  case 69:
#line 228 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
														err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected ')' ","");
													 ;}
    break;

  case 70:
#line 236 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"args_list:	args_list COMMA arg\n";;}
    break;

  case 71:
#line 237 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"args_list: ID COMMA arg \n";;}
    break;

  case 72:
#line 238 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"args_list:	args_list COMMA ID \n";;}
    break;

  case 73:
#line 239 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"args_list:	ID COMMA ID \n";;}
    break;

  case 74:
#line 240 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"args_list: arg \n";;}
    break;

  case 75:
#line 243 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"arg:	STAR ID \n";;}
    break;

  case 76:
#line 244 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"arg:	ID ASSIGN expr \n";;}
    break;

  case 77:
#line 245 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"arg:	STAR ID ASSIGN expr \n";;}
    break;

  case 78:
#line 248 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"COLON  END \n";;}
    break;

  case 79:
#line 249 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"block_stmt:	stmt_list END \n";;}
    break;

  case 80:
#line 250 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
						Streams::verbose()<<"Error: Expected ':' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected ':' ","");			 
						;}
    break;

  case 81:
#line 257 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt_list:	stmt_list stmt \n";;}
    break;

  case 82:
#line 258 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt_list:	stmt \n";;}
    break;

  case 83:
#line 261 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt: 		if_stmt\n";;}
    break;

  case 84:
#line 262 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	while_stmt\n";;}
    break;

  case 85:
#line 263 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	for_stmt\n";;}
    break;

  case 86:
#line 264 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	try_stmt\n";;}
    break;

  case 87:
#line 265 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	with_stmt\n";;}
    break;

  case 88:
#line 266 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	block_stmt\n";;}
    break;

  case 89:
#line 267 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	simple_stmt_list\n";;}
    break;

  case 90:
#line 268 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	ID SEMICOLON\n";;}
    break;

  case 91:
#line 269 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	ID DOT ID SEMICOLON\n";;}
    break;

  case 92:
#line 270 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	ID COMMA ID DOT ID DOT ID SEMICOLON\n";;}
    break;

  case 93:
#line 271 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	ID DOT ID COMMA ID DOT ID DOT ID SEMICOLON\n";;}
    break;

  case 94:
#line 274 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt\n";;}
    break;

  case 95:
#line 275 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt ELSE stmt\n";;}
    break;

  case 96:
#line 276 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt elif_stmt\n";;}
    break;

  case 97:
#line 277 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt elif_stmt ELSE stmt\n";;}
    break;

  case 98:
#line 280 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"elif_stmt: 	elif_header stmt elif_stmt\n";;}
    break;

  case 99:
#line 281 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"elif_stmt:	elif_header stmt\n";;}
    break;

  case 100:
#line 284 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"if_header:	IF expr \n";;}
    break;

  case 101:
#line 287 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"elif_header:	ELIF expr \n";;}
    break;

  case 102:
#line 290 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"while_stmt: while_header stmt\n";;}
    break;

  case 103:
#line 295 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"while_header: WHILE expr \n";;}
    break;

  case 104:
#line 296 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    { 
						Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected reserved word 'while' ","");
					 ;}
    break;

  case 105:
#line 302 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"for_stmt: 	for_header stmt\n";;}
    break;

  case 106:
#line 305 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"for_header: FOR target_list IN expr_list \n";;}
    break;

  case 107:
#line 306 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID COMMA ID IN expr_list \n";;}
    break;

  case 108:
#line 307 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID IN expr_list \n";;}
    break;

  case 109:
#line 308 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 110:
#line 315 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list:	import_list COMMA import\n";;}
    break;

  case 111:
#line 316 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA import_list \n";;}
    break;

  case 112:
#line 317 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA ID \n";;}
    break;

  case 113:
#line 318 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA ID DOT ID \n";;}
    break;

  case 114:
#line 319 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA import_list \n";;}
    break;

  case 115:
#line 320 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA ID \n";;}
    break;

  case 116:
#line 321 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA ID DOT ID \n";;}
    break;

  case 117:
#line 322 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list:	import\n";;}
    break;

  case 118:
#line 326 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import: import DOT ID\n";;}
    break;

  case 119:
#line 327 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import:	ID DOT ID DOT ID;";}
    break;

  case 120:
#line 331 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target_list:	target_list COMMA target\n";;}
    break;

  case 121:
#line 332 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA ID COMMA target\n";;}
    break;

  case 122:
#line 333 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target_list:	target_list COMMA ID\n";;}
    break;

  case 123:
#line 334 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA ID COMMA ID\n";;}
    break;

  case 124:
#line 335 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA target\n";;}
    break;

  case 125:
#line 336 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target_list:	target\n";;}
    break;

  case 126:
#line 339 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"try_stmt: 	TRY  stmt except_stmt\n";;}
    break;

  case 127:
#line 340 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"try_stmt: 	TRY  stmt finally_stmt\n";;}
    break;

  case 128:
#line 343 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"finally_stmt: 	FINALLY COLON block_stmt\n";;}
    break;

  case 129:
#line 346 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"except_stmt:	EXCEPT  stmt\n";;}
    break;

  case 130:
#line 347 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"except_stmt:	EXCEPT  expr stmt\n";;}
    break;

  case 131:
#line 350 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"with_stmt:	WITH expr \n";;}
    break;

  case 132:
#line 351 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"with_stmt:	WITH expr AS target \n";;}
    break;

  case 133:
#line 354 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	expr_list\n";;}
    break;

  case 134:
#line 355 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	assert_stmt\n";;}
    break;

  case 135:
#line 356 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	assignment_stmt\n";;}
    break;

  case 136:
#line 358 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	PASS\n";;}
    break;

  case 137:
#line 359 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	del_stmt\n";;}
    break;

  case 138:
#line 360 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	print_stmt\n";;}
    break;

  case 139:
#line 361 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	return_stmt\n";;}
    break;

  case 140:
#line 362 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	yield_stmt\n";;}
    break;

  case 141:
#line 363 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	raise_stmt\n";;}
    break;

  case 142:
#line 364 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	BREAK\n";;}
    break;

  case 143:
#line 365 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	CONTINUE\n";;}
    break;

  case 144:
#line 366 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	import_list\n";;}
    break;

  case 145:
#line 367 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	global_stmt\n";;}
    break;

  case 146:
#line 370 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"assert_stmt: 	ASSERT expr\n";;}
    break;

  case 147:
#line 371 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"assert_stmt:	ASSERT expr COMMA expr\n";;}
    break;

  case 148:
#line 374 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	target_list ASSIGN expr_list\n";;}
    break;

  case 149:
#line 375 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	ID COMMA ID ASSIGN expr_list\n";;}
    break;

  case 150:
#line 376 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	ID ASSIGN expr_list\n";;}
    break;

  case 151:
#line 377 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	target_list ASSIGN yield_expression\n";;}
    break;

  case 152:
#line 378 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	ID COMMA ID ASSIGN yield_expression\n";;}
    break;

  case 153:
#line 379 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	ID ASSIGN yield_expression\n";;}
    break;

  case 154:
#line 382 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL target_list\n";;}
    break;

  case 155:
#line 383 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID COMMA ID\n";;}
    break;

  case 156:
#line 384 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID\n";;}
    break;

  case 157:
#line 387 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"return_stmt:	RETURN\n";;}
    break;

  case 158:
#line 388 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"return_stmt:	RETURN expr_list\n";;}
    break;

  case 159:
#line 391 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"yield_stmt:		yield_expression\n";;}
    break;

  case 160:
#line 394 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"print_stmt: PRINT expr_list\n";;}
    break;

  case 161:
#line 395 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"print_stmt:	PRINT MORE_THAN MORE_THAN expr_list\n";;}
    break;

  case 162:
#line 396 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected reserved word 'print' ","");
								;}
    break;

  case 163:
#line 400 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
												err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal)),"Expected reserved word 'print' ","");
												;}
    break;

  case 164:
#line 405 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"global_stmt :GLOBAL id_list\n";;}
    break;

  case 165:
#line 406 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+(yyvsp[-1].r.strVal)<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected IDENTIFIER ","");
									   ;}
    break;

  case 166:
#line 412 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"id_list: 	ID COMMA id_list\n";;}
    break;

  case 167:
#line 413 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"id_list:	ID\n";;}
    break;

  case 168:
#line 416 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"raise_stmt: RAISE\n";;}
    break;

  case 169:
#line 417 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"raise_stmt:	RAISE expr\n";;}
    break;

  case 170:
#line 418 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"raise_stmt:	RAISE expr COMMA expr\n";;}
    break;

  case 171:
#line 419 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected expression at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
													err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected expression ","");
												 ;}
    break;

  case 172:
#line 423 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected reserved word 'raise' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
													err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'raise' ","");
												 ;}
    break;

  case 173:
#line 429 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"access_modef: PRIVATE\n";;}
    break;

  case 174:
#line 430 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"access_modef:	PUBLIC\n";;}
    break;

  case 175:
#line 431 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"access_modef:	PROTECTED\n";;}
    break;

  case 176:
#line 434 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S target_list CLOSE_S \n";;}
    break;

  case 177:
#line 435 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S ID COMMA ID CLOSE_S\n";;}
    break;

  case 178:
#line 436 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S ID CLOSE_S\n";;}
    break;

  case 179:
#line 437 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D target_list CLOSE_D\n";;}
    break;

  case 180:
#line 438 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D ID COMMA ID CLOSE_D\n";;}
    break;

  case 181:
#line 439 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D ID CLOSE_D\n";;}
    break;

  case 182:
#line 440 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	attributeref\n";;}
    break;

  case 183:
#line 441 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	subscription\n";;}
    break;

  case 184:
#line 444 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"attributeref: primary DOT ID\n";;}
    break;

  case 185:
#line 445 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"attributeref: ID DOT ID\n";;}
    break;

  case 186:
#line 448 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"primary: 	atom\n";;}
    break;

  case 187:
#line 449 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"primary:	attributeref\n";;}
    break;

  case 188:
#line 450 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"primary:	subscription\n";;}
    break;

  case 189:
#line 451 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"primary:	call\n";;}
    break;

  case 190:
#line 454 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"atom:	enclosure\n";;}
    break;

  case 191:
#line 455 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"atom:	literal\n";	;}
    break;

  case 192:
#line 458 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"literal:    STRING_VALUE\n";;}
    break;

  case 193:
#line 459 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"literal:	INTEGER_VALUE\n";;}
    break;

  case 194:
#line 460 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"literal:	LONG_VALUE\n";;}
    break;

  case 195:
#line 461 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"literal:	FLOAT_VALUE\n";;}
    break;

  case 196:
#line 462 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"literal:	CHAR_VALUE\n";;}
    break;

  case 197:
#line 465 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"enclosure:	parenth_form\n";;}
    break;

  case 198:
#line 466 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"enclosure:	list_display\n";;}
    break;

  case 199:
#line 467 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"enclosure:	string_conversion\n";;}
    break;

  case 200:
#line 468 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"enclosure:	yield_atom\n";;}
    break;

  case 201:
#line 469 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"enclosure:	dict_display\n";;}
    break;

  case 202:
#line 472 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dict_display: OPEN_C CLOSE_C \n";;}
    break;

  case 203:
#line 473 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dict_display: OPEN_C key_datum_list CLOSE_C \n";;}
    break;

  case 204:
#line 475 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum_list COMMA key_datum \n";;}
    break;

  case 205:
#line 476 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum_list COMMA\n";;}
    break;

  case 206:
#line 477 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum\n";;}
    break;

  case 207:
#line 479 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"key_datum : expr COLON expr\n";;}
    break;

  case 208:
#line 482 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"parenth_form : 	OPEN_S expr CLOSE_S\n";;}
    break;

  case 209:
#line 483 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"parenth_form : 	OPEN_S  CLOSE_S\n";;}
    break;

  case 210:
#line 484 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-1,"Expected '(' ","");
								;}
    break;

  case 211:
#line 488 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected ')' ","");
										;}
    break;

  case 212:
#line 492 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
													err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))," Expected '(' ","");
												 ;}
    break;

  case 213:
#line 496 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
													err->errQ->enqueue((yyvsp[-2].r.lineNum),yylval.r.colNum-strlength(yylval.r.strVal)," Expected ')' ","");
												 ;}
    break;

  case 214:
#line 503 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"list_display:	OPEN_D  expr_list CLOSE_D\n";;}
    break;

  case 215:
#line 506 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"string_conversion:	RE_COT expr_list RE_COT\n";;}
    break;

  case 216:
#line 509 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"yield_atom:		OPEN_S yield_expression CLOSE_S\n";;}
    break;

  case 217:
#line 512 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"yield_expression:	YIELD\n";;}
    break;

  case 218:
#line 513 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"yield_expression:	YIELD expr_list\n";;}
    break;

  case 219:
#line 516 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"subscription:	PRIMARY OPEN_D expr_list CLOSE_D\n";;}
    break;

  case 220:
#line 517 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"subscription:	PRIMARY OPEN_D expr_list CLOSE_D\n";;}
    break;

  case 221:
#line 520 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"call:	PRIMARY OPEN_D args_list CLOSE_D\n";;}
    break;

  case 222:
#line 521 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"call:	PRIMARY OPEN_D ID CLOSE_D\n";;}
    break;

  case 223:
#line 522 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"call:	ID OPEN_D ID CLOSE_D\n";;}
    break;

  case 224:
#line 525 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"expr:	condition\n";;}
    break;

  case 225:
#line 526 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"expr:	literal\n";;}
    break;

  case 226:
#line 527 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"expr:	expr op expr\n";;}
    break;

  case 227:
#line 528 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"expr:	long_id\n";;}
    break;

  case 228:
#line 529 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected operand at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.lineNum)-strlength((yyvsp[-1].r.strVal))<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlen((yyvsp[-1].r.strVal)),"Expected operand ","");
									  ;}
    break;

  case 229:
#line 535 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"condition: expr EQUAL expr\n";;}
    break;

  case 230:
#line 536 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"condition: expr NOT_EQUAL expr\n";;}
    break;

  case 231:
#line 537 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"condition: expr LESS_THAN expr\n";;}
    break;

  case 232:
#line 538 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"condition: expr LESS_OR_EQUAL expr\n";;}
    break;

  case 233:
#line 539 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"condition: expr MORE_THAN expr\n";;}
    break;

  case 234:
#line 540 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"condition: expr MORE_OR_EQUAL expr\n";;}
    break;

  case 235:
#line 543 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"long_id:	\n";;}
    break;

  case 236:
#line 544 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"long_id:	ID OPEN_S CLOSE_S\n";;}
    break;

  case 237:
#line 545 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"long_id:	ID OPEN_S expr_list CLOSE_S\n";;}
    break;

  case 238:
#line 546 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"long_id:	ID OPEN_S expr	  CLOSE_S\n";;}
    break;

  case 239:
#line 547 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"long_id:	long_id DOT ID\n";;}
    break;

  case 240:
#line 548 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"long_id:	long_id DOT ID OPEN_S CLOSE_S\n";;}
    break;

  case 241:
#line 549 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"long_id:	long_id DOT ID OPEN_S expr_list CLOSE_S\n";;}
    break;

  case 242:
#line 550 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"long_id:	long_id DOT ID OPEN_S expr CLOSE_S\n";;}
    break;

  case 243:
#line 553 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :PLUS\n";;}
    break;

  case 244:
#line 554 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :MINUS\n";;}
    break;

  case 245:
#line 555 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :DIV\n";;}
    break;

  case 246:
#line 556 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :MOD\n";;}
    break;

  case 247:
#line 557 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :OR\n";;}
    break;

  case 248:
#line 558 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :NOT\n";;}
    break;

  case 249:
#line 559 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :MULTI\n";;}
    break;

  case 250:
#line 560 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :AND\n";;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 3366 "yacc.cpp"

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


#line 562 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"

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
