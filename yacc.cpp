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
     DEF = 266,
     ASSIGN = 267,
     STAR = 268,
     ELSE = 269,
     IF = 270,
     ELIF = 271,
     WHILE = 272,
     FOR = 273,
     IN = 274,
     TRY = 275,
     FINALLY = 276,
     MULTI = 277,
     EXPECT = 278,
     WITH = 279,
     AS = 280,
     ASSERT = 281,
     EQUAL = 282,
     DEL = 283,
     RETURN = 284,
     PRINT = 285,
     GLOBAL = 286,
     RAISE = 287,
     PRIVATE = 288,
     PUBLIC = 289,
     PROTECTED = 290,
     OPEN_D = 291,
     CLOSE_D = 292,
     RE_COT = 293,
     YIELD = 294,
     PRIMARY = 295,
     OR = 296,
     AND = 297,
     NOT = 298,
     PLUS = 299,
     MINUS = 300,
     DIV = 301,
     MOD = 302,
     NOT_EQUAL = 303,
     FINAL = 304,
     STATIC = 305,
     LESS_THAN = 306,
     LESS_OR_EQUAL = 307,
     MORE_THAN = 308,
     MORE_OR_EQUAL = 309,
     TRUE = 310,
     FALSE = 311,
     EXCEPT = 312,
     SEMICOLON = 313,
     NEW_LINE = 314,
     PASS = 315,
     CHAR_VALUE = 316,
     OPEN_S = 317,
     STRING_VALUE = 318,
     INTEGER_VALUE = 319,
     BREAK = 320,
     CONTINUE = 321,
     LONG_VALUE = 322,
     FLOAT_VALUE = 323,
     stmt_1_2 = 324,
     stmt_9 = 325,
     stmt_8 = 326,
     stmt_7 = 327,
     stmt_6 = 328,
     stmt_5 = 329,
     stmt_4 = 330,
     stmt_3 = 331,
     stmt_2 = 332,
     stmt_1 = 333
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
#define DEF 266
#define ASSIGN 267
#define STAR 268
#define ELSE 269
#define IF 270
#define ELIF 271
#define WHILE 272
#define FOR 273
#define IN 274
#define TRY 275
#define FINALLY 276
#define MULTI 277
#define EXPECT 278
#define WITH 279
#define AS 280
#define ASSERT 281
#define EQUAL 282
#define DEL 283
#define RETURN 284
#define PRINT 285
#define GLOBAL 286
#define RAISE 287
#define PRIVATE 288
#define PUBLIC 289
#define PROTECTED 290
#define OPEN_D 291
#define CLOSE_D 292
#define RE_COT 293
#define YIELD 294
#define PRIMARY 295
#define OR 296
#define AND 297
#define NOT 298
#define PLUS 299
#define MINUS 300
#define DIV 301
#define MOD 302
#define NOT_EQUAL 303
#define FINAL 304
#define STATIC 305
#define LESS_THAN 306
#define LESS_OR_EQUAL 307
#define MORE_THAN 308
#define MORE_OR_EQUAL 309
#define TRUE 310
#define FALSE 311
#define EXCEPT 312
#define SEMICOLON 313
#define NEW_LINE 314
#define PASS 315
#define CHAR_VALUE 316
#define OPEN_S 317
#define STRING_VALUE 318
#define INTEGER_VALUE 319
#define BREAK 320
#define CONTINUE 321
#define LONG_VALUE 322
#define FLOAT_VALUE 323
#define stmt_1_2 324
#define stmt_9 325
#define stmt_8 326
#define stmt_7 327
#define stmt_6 328
#define stmt_5 329
#define stmt_4 330
#define stmt_3 331
#define stmt_2 332
#define stmt_1 333




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
#line 294 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 306 "yacc.cpp"

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
#define YYLAST   1556

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  62
/* YYNRULES -- Number of rules. */
#define YYNRULES  243
/* YYNRULES -- Number of states. */
#define YYNSTATES  430

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   333

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
      75,    76,    77,    78
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
     734,   736,   740,   743,   746,   749,   753,   757,   761,   765,
     769,   771,   774,   779,   784,   789,   794,   799,   801,   803,
     807,   809,   813,   817,   821,   825,   829,   833,   837,   839,
     843,   848,   853,   857,   863,   870,   877,   879,   881,   883,
     885,   887,   889,   891
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
      80,     0,    -1,    80,    81,    -1,    81,    -1,     3,    85,
      82,    -1,    82,    -1,     3,    85,    49,    82,    -1,    49,
      82,    -1,     3,    85,    50,    82,    -1,    50,    82,    -1,
       3,    85,    49,    50,    82,    -1,    49,    50,    82,    -1,
       3,    85,    50,    49,    82,    -1,    50,    49,    82,    -1,
      83,    87,    -1,     4,     5,    -1,     4,     5,    62,     7,
      -1,     4,     5,    62,    85,     7,    -1,     4,     1,    -1,
       5,     1,     5,    -1,     5,     1,    -1,    84,     8,   137,
      -1,   137,    -1,    85,     8,    86,    -1,    86,    -1,    86,
       9,     5,    -1,     5,    -1,     6,    10,    -1,     6,    88,
      10,    -1,    10,    -1,    88,    10,    -1,    88,    11,    89,
      -1,    11,    89,    -1,    90,    58,    -1,    91,    -1,    82,
      -1,    49,    82,    -1,    50,    82,    -1,    49,    50,    82,
      -1,    50,    49,    82,    -1,    50,    90,    58,    -1,    50,
      91,    -1,    49,    90,    58,    -1,    49,    91,    -1,    50,
      49,    90,    58,    -1,    50,    49,    91,    -1,    49,    50,
      90,    58,    -1,    49,    50,    91,    -1,    90,     1,    -1,
     123,     5,    -1,     5,    -1,   123,     5,    12,   137,    -1,
       5,    12,   137,    -1,   123,     5,     5,     1,    -1,     5,
       5,     1,    -1,    92,    95,    -1,   123,     5,    62,    93,
       7,    -1,   123,     5,    62,     5,     7,    -1,     5,    62,
      93,     7,    -1,     5,    62,     5,     7,    -1,   123,     5,
      62,     7,    -1,     5,    62,     7,    -1,   123,     1,    62,
      93,     7,    -1,   123,     1,    62,     5,     7,    -1,     1,
      62,    93,     7,    -1,     1,    62,     5,     7,    -1,   123,
       5,     1,    93,     7,    -1,   123,     5,     1,     5,     7,
      -1,   123,     5,    62,    93,     1,    -1,   123,     5,    62,
       5,     1,    -1,    93,     8,    94,    -1,     5,     8,    94,
      -1,    93,     8,     5,    -1,     5,     8,     5,    -1,    94,
      -1,    13,     5,    -1,     5,    12,   137,    -1,    13,     5,
      12,   137,    -1,     6,    10,    -1,     6,    96,    10,    -1,
       1,    10,    -1,    96,    97,    -1,    97,    -1,    98,    -1,
     102,    -1,   104,    -1,   109,    -1,   112,    -1,    95,    -1,
     113,    58,    -1,     5,    58,    -1,     5,     9,     5,    58,
      -1,     5,     8,     5,     9,     5,     9,     5,    58,    -1,
       5,     9,     5,     8,     5,     9,     5,     9,     5,    58,
      -1,   100,    97,    -1,   100,    97,    14,    97,    -1,   100,
      97,    99,    -1,   100,    97,    99,    14,    97,    -1,   101,
      97,    99,    -1,   101,    97,    -1,    15,   137,    -1,    16,
     137,    -1,   103,    97,    -1,    17,   137,    -1,     5,     1,
     137,    -1,   105,    97,    -1,    18,   108,    19,    84,    -1,
      18,     5,     8,     5,    19,    84,    -1,    18,     5,    19,
      84,    -1,     5,     1,     5,    19,    84,    -1,   106,     8,
     107,    -1,     5,     8,   106,    -1,     5,     8,     5,    -1,
       5,     8,     5,     9,     5,    -1,     5,     9,     5,     8,
     106,    -1,     5,     9,     5,     8,     5,    -1,     5,     9,
       5,     8,     5,     9,     5,    -1,   107,    -1,   107,     9,
       5,    -1,     5,     9,     5,     9,     5,    -1,   108,     8,
     124,    -1,     5,     8,     5,     8,   124,    -1,   108,     8,
       5,    -1,     5,     8,     5,     8,     5,    -1,     5,     8,
     124,    -1,   124,    -1,    20,    97,   111,    -1,    20,    97,
     110,    -1,    21,    95,    -1,    57,    97,    -1,    57,   137,
      97,    -1,    24,   137,    -1,    24,   137,    25,   124,    -1,
      84,    -1,   114,    -1,   115,    -1,    60,    -1,   116,    -1,
     119,    -1,   117,    -1,   118,    -1,   122,    -1,    65,    -1,
      66,    -1,   106,    -1,   120,    -1,    26,   137,    -1,    26,
     137,     8,   137,    -1,   108,    12,    84,    -1,     5,     8,
       5,    12,    84,    -1,     5,    12,    84,    -1,   108,    12,
     134,    -1,     5,     8,     5,    12,   134,    -1,     5,    12,
     134,    -1,    28,   108,    -1,    28,     5,     8,     5,    -1,
      28,     5,    -1,    29,    -1,    29,    84,    -1,   134,    -1,
      30,    84,    -1,    30,    53,    53,    84,    -1,     5,     1,
      84,    -1,     5,    53,    53,    84,    -1,    31,   121,    -1,
      31,     1,    -1,     5,     8,   121,    -1,     5,    -1,    32,
      -1,    32,   137,    -1,    32,   137,     8,   137,    -1,    32,
     137,     8,     1,    -1,     5,     1,   137,     8,   137,    -1,
      33,    -1,    34,    -1,    35,    -1,    62,   108,     7,    -1,
      62,     5,     8,     5,     7,    -1,    62,     5,     7,    -1,
      36,   108,    37,    -1,    36,     5,     8,     5,    37,    -1,
      36,     5,    37,    -1,   125,    -1,   135,    -1,   126,     9,
       5,    -1,     5,     9,     5,    -1,   127,    -1,   125,    -1,
     135,    -1,   136,    -1,   129,    -1,   128,    -1,    63,    -1,
      64,    -1,    67,    -1,    68,    -1,    61,    -1,   130,    -1,
     131,    -1,   132,    -1,   133,    -1,    62,   137,     7,    -1,
      62,     7,    -1,     1,     7,    -1,    62,     1,    -1,     1,
     137,     7,    -1,    62,   137,     1,    -1,    36,    84,    37,
      -1,    38,    84,    38,    -1,    62,   134,     7,    -1,    39,
      -1,    39,    84,    -1,    40,    36,    84,    37,    -1,     5,
      36,    84,    37,    -1,    40,    36,    93,    37,    -1,    40,
      36,     5,    37,    -1,     5,    36,     5,    37,    -1,   138,
      -1,   128,    -1,   137,   140,   137,    -1,   139,    -1,   137,
       1,   137,    -1,   137,    27,   137,    -1,   137,    48,   137,
      -1,   137,    51,   137,    -1,   137,    52,   137,    -1,   137,
      53,   137,    -1,   137,    54,   137,    -1,     5,    -1,     5,
      62,     7,    -1,     5,    62,    84,     7,    -1,     5,    62,
     137,     7,    -1,   139,     9,     5,    -1,   139,     9,     5,
      62,     7,    -1,   139,     9,     5,    62,    84,     7,    -1,
     139,     9,     5,    62,   137,     7,    -1,    44,    -1,    45,
      -1,    46,    -1,    47,    -1,    41,    -1,    43,    -1,    22,
      -1,    42,    -1
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
     468,   471,   472,   473,   477,   481,   485,   492,   495,   498,
     501,   502,   505,   506,   509,   510,   511,   514,   515,   516,
     517,   518,   524,   525,   526,   527,   528,   529,   532,   533,
     534,   535,   536,   537,   538,   539,   542,   543,   544,   545,
     546,   547,   548,   549
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IMPORT", "CLASS", "ID", "COLON",
  "CLOSE_S", "COMMA", "DOT", "END", "DEF", "ASSIGN", "STAR", "ELSE", "IF",
  "ELIF", "WHILE", "FOR", "IN", "TRY", "FINALLY", "MULTI", "EXPECT",
  "WITH", "AS", "ASSERT", "EQUAL", "DEL", "RETURN", "PRINT", "GLOBAL",
  "RAISE", "PRIVATE", "PUBLIC", "PROTECTED", "OPEN_D", "CLOSE_D", "RE_COT",
  "YIELD", "PRIMARY", "OR", "AND", "NOT", "PLUS", "MINUS", "DIV", "MOD",
  "NOT_EQUAL", "FINAL", "STATIC", "LESS_THAN", "LESS_OR_EQUAL",
  "MORE_THAN", "MORE_OR_EQUAL", "TRUE", "FALSE", "EXCEPT", "SEMICOLON",
  "NEW_LINE", "PASS", "CHAR_VALUE", "OPEN_S", "STRING_VALUE",
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
  "atom", "literal", "enclosure", "parenth_form", "list_display",
  "string_conversion", "yield_atom", "yield_expression", "subscription",
  "call", "expr", "condition", "long_id", "op", 0
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
     325,   326,   327,   328,   329,   330,   331,   332,   333
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    79,    80,    80,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    82,    83,    83,    83,    83,    83,
      83,    84,    84,    85,    85,    86,    86,    87,    87,    87,
      87,    88,    88,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    90,
      90,    90,    90,    90,    90,    91,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      93,    93,    93,    93,    93,    94,    94,    94,    95,    95,
      95,    96,    96,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    98,    98,    98,    98,    99,    99,
     100,   101,   102,   103,   103,   104,   105,   105,   105,   105,
     106,   106,   106,   106,   106,   106,   106,   106,   107,   107,
     108,   108,   108,   108,   108,   108,   109,   109,   110,   111,
     111,   112,   112,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   114,   114,   115,   115,
     115,   115,   115,   115,   116,   116,   116,   117,   117,   118,
     119,   119,   119,   119,   120,   120,   121,   121,   122,   122,
     122,   122,   122,   123,   123,   123,   124,   124,   124,   124,
     124,   124,   124,   124,   125,   125,   126,   126,   126,   126,
     127,   127,   128,   128,   128,   128,   128,   129,   129,   129,
     129,   130,   130,   130,   130,   130,   130,   131,   132,   133,
     134,   134,   135,   135,   136,   136,   136,   137,   137,   137,
     137,   137,   138,   138,   138,   138,   138,   138,   139,   139,
     139,   139,   139,   139,   139,   139,   140,   140,   140,   140,
     140,   140,   140,   140
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
       1,     3,     2,     2,     2,     3,     3,     3,     3,     3,
       1,     2,     4,     4,     4,     4,     4,     1,     1,     3,
       1,     3,     3,     3,     3,     3,     3,     3,     1,     3,
       4,     4,     3,     5,     6,     6,     1,     1,     1,     1,
       1,     1,     1,     1
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
     228,   196,   192,   193,   194,   195,   218,    52,   217,   220,
       0,    61,     0,    38,     0,    47,    42,    39,     0,    45,
      40,    80,     0,     0,    78,     0,     0,     0,     0,     0,
       0,     0,   157,     0,     0,   168,     0,     0,   210,     0,
     136,     0,   142,   143,   133,    88,     0,    82,    83,     0,
      84,     0,    85,     0,   144,   117,     0,    86,    87,     0,
     134,   135,   137,   139,   140,   138,   145,   141,   125,   182,
       0,   186,   218,   190,   197,   198,   199,   200,   159,   183,
     189,     0,     0,     0,     0,     0,     0,    65,     0,     0,
      75,    64,     0,     0,     0,   242,     0,   240,   243,   241,
     236,   237,   238,   239,     0,     0,     0,     0,     0,     0,
       0,    59,    58,    46,    44,   203,     0,     0,     0,     0,
       0,     0,     0,    90,   100,   103,     0,     0,     0,   191,
       0,   131,     0,   156,   154,   158,     0,   160,   165,   167,
     164,     0,   228,     0,     0,     0,   211,     0,   204,   228,
     202,     0,     0,     0,     0,    79,    81,    94,   102,   105,
       0,     0,     0,     0,    89,     0,     0,     0,     0,     0,
      53,    51,     0,    60,     0,    73,    71,    76,     0,    72,
      70,   229,     0,     0,     0,   222,   223,   224,   225,   226,
     227,     0,   232,   205,   228,   162,   104,   112,   111,   124,
     185,   150,   153,   228,     0,     0,     0,     0,     0,     0,
       0,     0,   127,   126,     0,     0,     0,     0,     0,     0,
       0,   181,   207,   179,   208,   228,     0,     0,   178,     0,
     176,   209,   206,   201,    21,     0,     0,    96,     0,     0,
     110,   118,   122,   120,   148,   151,   184,    63,    62,    67,
      66,    69,    57,    68,    56,    77,   230,   231,     0,     0,
       0,     0,     0,     0,     0,     0,    91,   216,   213,   163,
       0,   185,   108,   106,   128,   129,     0,     0,   132,     0,
     155,   161,   166,   171,     0,     0,   215,   212,   214,     0,
      95,     0,     0,    99,     0,   233,     0,     0,   109,     0,
     112,   121,   185,   149,   152,   115,   114,   119,     0,     0,
       0,   130,   180,   177,    97,    98,     0,   234,   235,     0,
       0,     0,     0,     0,   123,   107,     0,   112,   185,   115,
     119,   116,     0,     0,    92,     0,   113,   116,   119,    93
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     6,     7,     8,     9,   134,    11,    12,    25,    26,
      46,    47,    48,    49,    87,    88,   135,   136,   137,   138,
     327,   139,   328,   140,   141,   142,   143,   144,   145,   146,
     147,   302,   303,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   230,   157,    50,   158,   159,   160,   161,    96,
     163,   164,   165,   166,   167,   168,   169,   170,   171,    98,
      99,   199
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -205
static const short int yypact[] =
{
     227,    26,   254,    44,    60,   102,    29,  -205,  -205,   796,
    -205,   459,    50,  -205,    61,   103,   177,  -205,   177,  -205,
    -205,  -205,   340,  -205,   267,  -205,   377,    26,    76,   161,
    -205,   124,     5,  -205,  -205,  -205,  -205,   408,    74,    10,
    -205,  -205,  -205,   869,  1503,  -205,  -205,     4,  -205,    37,
     260,  -205,   267,    50,   177,  -205,   177,  -205,  -205,  -205,
     427,  -205,    64,   138,   775,   391,   144,  -205,    27,  -205,
     144,  -205,   143,  -205,  -205,  -205,   186,   793,  -205,   152,
      35,  -205,  -205,  -205,  -205,   448,   198,   433,  -205,  -205,
     172,  -205,  -205,  -205,  -205,  -205,  -205,  1502,  -205,   215,
     661,  -205,   479,  -205,   188,  -205,  -205,  -205,   250,  -205,
    -205,  -205,    32,   453,  -205,   775,   775,   242,   929,   775,
     775,   844,   775,   100,   274,   775,   912,   775,   775,   220,
    -205,   155,  -205,  -205,   318,  -205,   861,  -205,  -205,   929,
    -205,   929,  -205,   929,   321,   343,   307,  -205,  -205,   309,
    -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,   364,
     380,  -205,   388,  -205,  -205,  -205,  -205,  -205,  -205,   399,
    -205,   521,   187,   222,   393,   775,   518,  -205,   294,   775,
     432,  -205,   315,   206,   775,  -205,   775,  -205,  -205,  -205,
    -205,  -205,  -205,  -205,   775,   775,   775,   775,   775,   775,
     415,  -205,  -205,  -205,  -205,  -205,  1413,   957,   965,   452,
     224,  1044,   413,  -205,  1502,  1502,   603,   245,    84,  -205,
     -13,  1446,  1189,   179,   461,   318,   419,   318,  -205,   466,
    -205,  1217,    80,    -2,    33,    86,   318,   108,   603,   304,
    -205,   547,   469,  1474,   775,  -205,  -205,   141,  -205,  -205,
     473,   483,   976,   224,  -205,   485,   729,   563,   808,   584,
    -205,  1502,   908,  -205,   288,   500,  -205,  1502,   775,   500,
    -205,  -205,   593,  1357,   317,   488,   488,   488,   488,   488,
     488,   385,   462,  -205,    47,   318,  1245,   285,   529,  -205,
      -1,   318,  -205,   -16,    46,   775,  1010,   535,   775,   775,
      37,   929,  -205,  -205,  1018,   775,  1029,   775,   537,    23,
    1063,  -205,  -205,  -205,  -205,   146,   162,   189,  -205,  1082,
    -205,  -205,   775,  -205,  1502,   929,   775,   530,   929,   571,
     343,  -205,   137,  -205,   318,  -205,  -205,  -205,  -205,  -205,
    -205,  -205,  -205,  -205,  -205,  1502,  -205,  -205,   671,   775,
     775,  1097,   541,   224,   551,   588,  -205,  -205,  -205,   318,
     832,  -205,   318,   318,  -205,  -205,   657,   137,  -205,  1273,
     494,   318,  -205,  -205,  1301,   212,  -205,  -205,  -205,   569,
    -205,   725,   929,   587,   607,  -205,   615,  1385,   318,  1329,
     590,  -205,    18,   318,  -205,   630,   529,  -205,  1116,   775,
      32,  -205,  -205,  -205,  -205,  -205,   605,  -205,  -205,   619,
     641,   643,   656,   675,   137,   318,   589,   636,    18,   651,
     624,   682,   687,   689,  -205,   709,   704,   704,   624,  -205
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -205,  -205,   710,  1158,  -205,  -109,   695,   701,  -205,   722,
     694,   663,   731,  -205,   -35,   194,   -48,  -205,  -116,  -205,
     365,  -205,  -205,  -205,  -205,  -205,  -205,  -204,   508,   683,
    -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,
    -205,  -205,   442,  -205,  -205,  -192,  -205,  -205,  -205,   -68,
    -205,  -205,  -205,  -205,  -205,  -128,  -205,  -205,   -64,  -205,
    -205,  -205
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -229
static const short int yytable[] =
{
      97,    78,   220,   242,   288,    74,   244,  -229,   300,   162,
      10,  -229,    59,   225,   227,    63,   289,   233,   235,   236,
     246,   357,    64,   247,   373,   248,  -229,   249,    90,    20,
     102,    10,     1,     2,     3,   312,  -229,    90,    76,   205,
     174,   252,   111,    77,   301,    15,   183,   175,   206,   219,
     162,   214,   215,   219,   244,   221,   222,   356,   162,    31,
     333,   231,    75,   162,     2,     3,   349,   243,   162,    85,
     313,   162,    65,   162,   272,   162,  -113,    86,     4,     5,
       2,     3,   292,   358,    91,   106,    92,    93,   310,   297,
      94,    95,   252,    91,   244,    92,    93,   176,   285,    94,
      95,   291,   294,   299,   289,    90,     2,     3,    33,   183,
      16,   261,   368,   315,   289,   267,   211,   311,   289,   273,
     274,    86,   275,    32,   314,   335,    54,   289,   316,    58,
     276,   277,   278,   279,   280,   281,    62,   257,   259,    89,
     219,   264,   183,   286,   334,    38,   297,   288,     2,    39,
     396,    18,   206,   226,   178,   325,   238,   326,   179,   391,
     239,    91,   240,    92,    93,     2,     3,    94,    95,    91,
     244,    92,    93,   211,   206,    94,    95,    40,    41,    42,
     324,     2,     3,   376,   219,   365,   359,   306,   297,   362,
     363,   126,   256,   127,   128,   129,   111,   182,   371,   377,
      86,   110,   317,   180,   345,   288,   391,   396,   183,   380,
      56,    90,   383,   271,   172,   211,    91,   131,    92,    93,
     398,   297,    94,    95,   200,   394,   378,   258,   219,    90,
       1,     2,     3,   162,   183,    86,   219,   366,   219,   386,
     388,   369,   219,   216,   393,   374,   203,   217,   211,   402,
     401,   219,   364,   296,   297,    13,   237,   162,   274,    14,
     162,    79,   381,   128,   298,    80,   404,    91,    38,    92,
      93,     2,    39,    94,    95,   228,     4,     5,   126,   229,
     127,   211,   129,   219,   387,    91,   389,    92,    93,   343,
     415,    94,    95,  -229,   352,   344,   182,   353,   162,   265,
      40,    41,    42,    91,   131,    92,    93,    86,   204,    94,
      95,   318,   319,   297,   162,   252,    43,    44,   184,   253,
     269,   211,  -221,  -221,  -221,  -221,   244,  -221,    86,   250,
     219,  -221,  -221,  -221,  -221,  -221,   416,  -221,  -221,   185,
     211,  -221,  -221,  -221,   186,  -221,  -221,  -221,  -221,  -221,
      36,    24,   251,  -221,  -221,  -221,  -221,  -221,   187,   188,
     189,   190,   191,   192,   193,   194,   183,   254,   195,   196,
     197,   198,   266,  -187,  -221,  -221,   270,  -221,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,   184,    51,    52,   255,
    -219,  -219,  -219,  -219,   260,  -219,   100,  -191,   101,  -219,
    -219,  -219,  -219,  -219,    86,  -219,  -219,   185,  -188,  -219,
    -219,  -219,   186,  -219,  -219,  -219,  -219,  -219,    61,    52,
     282,  -219,  -219,  -219,  -219,  -219,   187,   188,   189,   190,
     191,   192,   193,   194,    84,    27,   195,   196,   197,   198,
     181,   182,  -219,  -219,   268,  -219,  -219,  -219,  -219,  -219,
    -219,  -219,  -219,  -219,   207,   177,   178,   290,  -228,  -228,
     179,   208,   209,     2,     3,   210,   295,    27,  -228,   252,
    -228,  -228,   307,  -228,   308,  -228,   321,  -228,   329,  -228,
    -228,  -228,  -228,  -228,  -228,  -228,   202,   182,   331,   211,
     336,  -228,  -228,  -228,  -228,  -228,  -228,  -228,  -228,  -228,
    -228,  -228,   398,   297,  -228,  -228,   212,  -228,    28,    29,
     185,   213,   179,  -228,  -228,   183,  -228,  -228,  -228,  -228,
    -228,  -228,   184,   262,  -229,   263,   -22,   -22,   -22,   -22,
     211,    86,   190,   191,   192,   193,   -22,  -229,   -22,   -22,
     361,   -22,   229,   185,   382,   -22,   392,   -22,   186,   -22,
     -22,   -22,   -22,   -22,   320,   252,   395,   -22,   -22,   -22,
     -22,   -22,   187,   188,   189,   190,   191,   192,   193,   194,
     338,   182,   195,   196,   197,   198,   403,   398,   297,   -22,
     384,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,
     184,   340,   182,   397,  -221,  -221,   283,  -221,  -229,   410,
     346,   244,  -123,   326,  -221,   211,  -221,  -221,    90,  -221,
     205,   185,   406,  -221,   355,  -221,   186,  -221,  -221,  -221,
    -221,  -221,   407,   244,   417,  -221,   211,  -221,  -221,  -221,
     187,   188,   189,   190,   191,   192,   193,   194,  -229,   413,
     195,   196,   197,   198,  -229,   422,   418,  -221,   419,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,   400,  -229,
     423,   420,   113,    77,    91,   -22,    92,    93,   201,   178,
      94,    95,   115,   179,   116,   117,    90,   118,   385,   185,
     421,   119,  -229,   120,   186,   121,   122,   123,   124,   125,
    -229,   425,   426,   126,   427,   127,   128,   129,   187,   188,
     189,   190,   191,   192,   193,   194,    68,    72,   195,   196,
     197,   198,  -229,   355,   428,   -22,    21,   130,    91,   131,
      92,    93,   132,   133,    94,    95,   184,    60,    53,   104,
    -101,  -101,    91,   108,    92,    93,   337,   178,    94,    95,
    -101,   179,  -101,  -101,    37,  -101,    81,   185,   405,  -101,
     372,  -101,   186,  -101,  -101,  -101,  -101,  -101,   330,     0,
       0,  -101,     0,  -101,  -101,  -101,   187,   188,   189,   190,
     191,   192,   193,   194,    69,    73,   195,   196,   197,   198,
      90,     0,     0,     0,     0,  -101,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,   112,     0,     0,   105,   113,    77,
     218,   109,    22,   114,   224,     0,    23,    24,   115,   234,
     116,   117,     0,   118,   241,   339,   178,   119,     0,   120,
     179,   121,   122,   123,   124,   125,     0,     0,     0,   126,
       0,   127,   128,   129,     0,     0,    91,     0,    92,    93,
     398,   297,    94,    95,     0,   216,     0,     0,     0,   223,
       0,   399,     0,   130,    91,   131,    92,    93,   132,   133,
      94,    95,   112,     0,     0,     0,   113,    77,   211,     0,
      38,   245,     0,     2,    39,     0,   115,     0,   116,   117,
     126,   118,   127,     0,   129,   119,     0,   120,     0,   121,
     122,   123,   124,   125,     0,     0,     0,   126,     0,   127,
     128,   129,    40,    41,    42,    91,   131,    92,    93,   341,
       0,    94,    95,   216,     0,   342,   178,   232,     0,    66,
     179,   130,    91,   131,    92,    93,   132,   133,    94,    95,
     112,     0,     0,     0,   113,    77,     0,     0,     0,     0,
       0,     0,     0,     0,   115,     0,   116,   117,   126,   118,
     127,     0,   129,   119,     0,   120,     0,   121,   122,   123,
     124,   125,   284,     0,     0,   126,   216,   127,   128,   129,
     287,     0,     0,    91,   131,    92,    93,   216,     0,    94,
      95,   332,     0,     0,     0,     0,     0,     0,     0,   130,
      91,   131,    92,    93,   132,   133,    94,    95,     0,     0,
       0,   126,     0,   127,     0,   129,     0,     0,     0,     0,
       0,   216,   126,     0,   127,   360,   129,     0,    91,   216,
      92,    93,     0,   367,    94,    95,    91,   131,    92,    93,
     216,     0,    94,    95,   370,     0,     0,    91,   131,    92,
      93,     0,     0,    94,    95,     0,   126,     0,   127,   293,
     129,     0,     0,     0,   126,     0,   127,     0,   129,     0,
       0,     0,     0,     0,   216,   126,     0,   127,   375,   129,
       0,    91,   131,    92,    93,     0,     0,    94,    95,    91,
     131,    92,    93,   216,     0,    94,    95,   379,     0,     0,
      91,   131,    92,    93,     0,     0,    94,    95,   216,   126,
       0,   127,   390,   129,     0,    91,     0,    92,    93,     0,
       0,    94,    95,     0,     0,     0,     0,   216,   126,     0,
     127,   414,   129,     0,    91,   131,    92,    93,     0,     0,
      94,    95,     0,   126,     0,   127,     0,   129,     0,     0,
       0,     0,     0,    91,   131,    92,    93,     0,     0,    94,
      95,     0,   126,     0,   127,     0,   129,     0,    91,   131,
      92,    93,    17,    19,    94,    95,     0,     0,     0,    30,
       0,     0,     0,     0,    34,     0,    35,    91,   131,    92,
      93,     0,    45,    94,    95,     0,    55,    57,     0,     0,
     184,     0,     0,     0,     0,     0,     0,   305,     0,     0,
       0,    67,    71,     0,     0,     0,     0,     0,     0,     0,
      45,   185,    82,     0,    83,     0,   186,     0,   184,     0,
       0,     0,     0,     0,   103,   309,     0,     0,   107,     0,
     187,   188,   189,   190,   191,   192,   193,   194,     0,   185,
     195,   196,   197,   198,   186,     0,  -229,  -146,     0,     0,
       0,     0,     0,   350,     0,     0,     0,     0,   187,   188,
     189,   190,   191,   192,   193,   194,     0,   185,   195,   196,
     197,   198,   186,     0,   184,  -169,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   187,   188,   189,   190,
     191,   192,   193,   194,     0,   185,   195,   196,   197,   198,
     186,     0,   184,   -22,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   187,   188,   189,   190,   191,   192,
     193,   194,     0,   185,   195,   196,   197,   198,   186,     0,
     184,  -147,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   187,   188,   189,   190,   191,   192,   193,   194,
       0,   185,   195,   196,   197,   198,   186,     0,   184,  -170,
       0,     0,     0,     0,   347,   -22,     0,     0,     0,     0,
     187,   188,   189,   190,   191,   192,   193,   194,     0,   185,
     195,   196,   197,   198,   186,     0,   184,  -172,     0,     0,
       0,     0,   408,   -22,     0,     0,     0,     0,   187,   188,
     189,   190,   191,   192,   193,   194,     0,   185,   195,   196,
     197,   198,   186,     0,   184,     0,     0,     0,     0,     0,
     283,     0,     0,     0,     0,     0,   187,   188,   189,   190,
     191,   192,   193,   194,     0,   185,   195,   196,   197,   198,
     186,     0,     0,     0,     0,     0,     0,  -229,     0,     0,
       0,     0,     0,     0,   187,   188,   189,   190,   191,   192,
     193,   194,     0,     0,   195,   196,   197,   198,   185,     0,
       0,   304,     0,   186,     0,   322,     0,     0,     0,     0,
       0,   323,     0,     0,     0,     0,     0,   187,   188,   189,
     190,   191,   192,   193,   194,     0,   185,   195,   196,   197,
     198,   186,     0,  -229,    38,     0,     0,     2,    39,     0,
       0,     0,     0,     0,     0,   187,   188,   189,   190,   191,
     192,   193,   194,     0,   185,   195,   196,   197,   198,   186,
       0,     0,     0,     0,     0,     0,    40,    41,    42,     0,
       0,     0,     0,   187,   188,   189,   190,   191,   192,   193,
     194,     0,    70,   195,   196,   197,   198
};

static const short int yycheck[] =
{
      64,    49,   118,   131,   208,     1,     8,     8,    21,    77,
       5,     1,     7,   122,   123,     5,   208,   126,   127,   128,
     136,    37,    12,   139,     1,   141,     8,   143,     5,     0,
      65,     5,     3,     4,     5,    37,     1,     5,     1,     7,
       5,     8,    10,     6,    57,     1,    62,    12,   112,   117,
     118,   115,   116,   121,     8,   119,   120,    58,   126,     9,
     252,   125,    58,   131,     4,     5,    19,   131,   136,     5,
      37,   139,    62,   141,   183,   143,    58,    13,    49,    50,
       4,     5,   210,    37,    61,    58,    63,    64,     8,     9,
      67,    68,     8,    61,     8,    63,    64,    62,   207,    67,
      68,   210,   211,    19,   296,     5,     4,     5,     5,    62,
      50,   175,   304,     5,   306,   179,    36,    37,   310,   183,
     184,    13,   186,    62,    38,   253,    50,   319,   237,     5,
     194,   195,   196,   197,   198,   199,    62,   172,   173,     1,
     208,   176,    62,   207,   253,     1,     9,   351,     4,     5,
     354,    49,   216,    53,     8,    14,     1,    16,    12,   351,
       5,    61,     7,    63,    64,     4,     5,    67,    68,    61,
       8,    63,    64,    36,   238,    67,    68,    33,    34,    35,
     244,     4,     5,    37,   252,   301,   295,     8,     9,   298,
     299,    36,     5,    38,    39,    40,    10,     8,   307,    37,
      13,    58,   237,     5,   268,   409,   398,   411,    62,   325,
      49,     5,   328,     7,    62,    36,    61,    62,    63,    64,
       8,     9,    67,    68,     9,   353,    37,     5,   296,     5,
       3,     4,     5,   301,    62,    13,   304,   301,   306,   348,
     349,   305,   310,     1,   353,   309,    58,     5,    36,    37,
     366,   319,   300,     8,     9,     1,    36,   325,   322,     5,
     328,     1,   326,    39,    19,     5,   382,    61,     1,    63,
      64,     4,     5,    67,    68,     1,    49,    50,    36,     5,
      38,    36,    40,   351,   348,    61,   350,    63,    64,     1,
     399,    67,    68,     8,     9,     7,     8,    12,   366,     5,
      33,    34,    35,    61,    62,    63,    64,    13,    58,    67,
      68,     7,     8,     9,   382,     8,    49,    50,     1,    12,
       5,    36,     5,     6,     7,     8,     8,    10,    13,     8,
     398,    14,    15,    16,    17,    18,   400,    20,    21,    22,
      36,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,     9,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    62,    58,    51,    52,
      53,    54,   178,     9,    57,    58,   182,    60,    61,    62,
      63,    64,    65,    66,    67,    68,     1,    10,    11,     9,
       5,     6,     7,     8,     1,    10,     5,     9,     7,    14,
      15,    16,    17,    18,    13,    20,    21,    22,     9,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
       5,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     7,     8,    51,    52,    53,    54,
       7,     8,    57,    58,    12,    60,    61,    62,    63,    64,
      65,    66,    67,    68,     1,     7,     8,     5,     5,     6,
      12,     8,     9,     4,     5,    12,    53,     8,    15,     8,
      17,    18,    53,    20,     8,    22,     7,    24,     5,    26,
      27,    28,    29,    30,    31,    32,     7,     8,     5,    36,
       5,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     8,     9,    51,    52,    53,    54,    49,    50,
      22,    58,    12,    60,    61,    62,    63,    64,    65,    66,
      67,    68,     1,     5,    62,     7,     5,     6,     7,     8,
      36,    13,    44,    45,    46,    47,    15,     8,    17,    18,
       5,    20,     5,    22,    14,    24,     5,    26,    27,    28,
      29,    30,    31,    32,     7,     8,     5,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
       7,     8,    51,    52,    53,    54,     7,     8,     9,    58,
       9,    60,    61,    62,    63,    64,    65,    66,    67,    68,
       1,     7,     8,     5,     5,     6,     7,     8,     8,     9,
       7,     8,    12,    16,    15,    36,    17,    18,     5,    20,
       7,    22,     5,    24,     9,    26,    27,    28,    29,    30,
      31,    32,     7,     8,     5,    36,    36,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,     8,     9,
      51,    52,    53,    54,     8,     9,     5,    58,     5,    60,
      61,    62,    63,    64,    65,    66,    67,    68,     1,     8,
       9,     5,     5,     6,    61,     8,    63,    64,     7,     8,
      67,    68,    15,    12,    17,    18,     5,    20,     7,    22,
       5,    24,    58,    26,    27,    28,    29,    30,    31,    32,
       8,     9,     5,    36,     5,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    43,    44,    51,    52,
      53,    54,     8,     9,     5,    58,     6,    60,    61,    62,
      63,    64,    65,    66,    67,    68,     1,    32,    27,    66,
       5,     6,    61,    70,    63,    64,     7,     8,    67,    68,
      15,    12,    17,    18,    22,    20,    52,    22,   383,    24,
     308,    26,    27,    28,    29,    30,    31,    32,   250,    -1,
      -1,    36,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    43,    44,    51,    52,    53,    54,
       5,    -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    68,     1,    -1,    -1,    66,     5,     6,
     117,    70,     6,    10,   121,    -1,    10,    11,    15,   126,
      17,    18,    -1,    20,   131,     7,     8,    24,    -1,    26,
      12,    28,    29,    30,    31,    32,    -1,    -1,    -1,    36,
      -1,    38,    39,    40,    -1,    -1,    61,    -1,    63,    64,
       8,     9,    67,    68,    -1,     1,    -1,    -1,    -1,     5,
      -1,    19,    -1,    60,    61,    62,    63,    64,    65,    66,
      67,    68,     1,    -1,    -1,    -1,     5,     6,    36,    -1,
       1,    10,    -1,     4,     5,    -1,    15,    -1,    17,    18,
      36,    20,    38,    -1,    40,    24,    -1,    26,    -1,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    36,    -1,    38,
      39,    40,    33,    34,    35,    61,    62,    63,    64,     1,
      -1,    67,    68,     1,    -1,     7,     8,     5,    -1,    50,
      12,    60,    61,    62,    63,    64,    65,    66,    67,    68,
       1,    -1,    -1,    -1,     5,     6,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    -1,    17,    18,    36,    20,
      38,    -1,    40,    24,    -1,    26,    -1,    28,    29,    30,
      31,    32,     5,    -1,    -1,    36,     1,    38,    39,    40,
       5,    -1,    -1,    61,    62,    63,    64,     1,    -1,    67,
      68,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    -1,    -1,
      -1,    36,    -1,    38,    -1,    40,    -1,    -1,    -1,    -1,
      -1,     1,    36,    -1,    38,     5,    40,    -1,    61,     1,
      63,    64,    -1,     5,    67,    68,    61,    62,    63,    64,
       1,    -1,    67,    68,     5,    -1,    -1,    61,    62,    63,
      64,    -1,    -1,    67,    68,    -1,    36,    -1,    38,     5,
      40,    -1,    -1,    -1,    36,    -1,    38,    -1,    40,    -1,
      -1,    -1,    -1,    -1,     1,    36,    -1,    38,     5,    40,
      -1,    61,    62,    63,    64,    -1,    -1,    67,    68,    61,
      62,    63,    64,     1,    -1,    67,    68,     5,    -1,    -1,
      61,    62,    63,    64,    -1,    -1,    67,    68,     1,    36,
      -1,    38,     5,    40,    -1,    61,    -1,    63,    64,    -1,
      -1,    67,    68,    -1,    -1,    -1,    -1,     1,    36,    -1,
      38,     5,    40,    -1,    61,    62,    63,    64,    -1,    -1,
      67,    68,    -1,    36,    -1,    38,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    61,    62,    63,    64,    -1,    -1,    67,
      68,    -1,    36,    -1,    38,    -1,    40,    -1,    61,    62,
      63,    64,     4,     5,    67,    68,    -1,    -1,    -1,    11,
      -1,    -1,    -1,    -1,    16,    -1,    18,    61,    62,    63,
      64,    -1,    24,    67,    68,    -1,    28,    29,    -1,    -1,
       1,    -1,    -1,    -1,    -1,    -1,    -1,     8,    -1,    -1,
      -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    22,    54,    -1,    56,    -1,    27,    -1,     1,    -1,
      -1,    -1,    -1,    -1,    66,     8,    -1,    -1,    70,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    22,
      51,    52,    53,    54,    27,    -1,     1,    58,    -1,    -1,
      -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    22,    51,    52,
      53,    54,    27,    -1,     1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    22,    51,    52,    53,    54,
      27,    -1,     1,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    22,    51,    52,    53,    54,    27,    -1,
       1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    22,    51,    52,    53,    54,    27,    -1,     1,    58,
      -1,    -1,    -1,    -1,     7,     8,    -1,    -1,    -1,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    22,
      51,    52,    53,    54,    27,    -1,     1,    58,    -1,    -1,
      -1,    -1,     7,     8,    -1,    -1,    -1,    -1,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    22,    51,    52,
      53,    54,    27,    -1,     1,    -1,    -1,    -1,    -1,    -1,
       7,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    22,    51,    52,    53,    54,
      27,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    -1,    51,    52,    53,    54,    22,    -1,
      -1,    25,    -1,    27,    -1,     1,    -1,    -1,    -1,    -1,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    22,    51,    52,    53,
      54,    27,    -1,     1,     1,    -1,    -1,     4,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    22,    51,    52,    53,    54,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,
      -1,    -1,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    49,    51,    52,    53,    54
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,     4,     5,    49,    50,    80,    81,    82,    83,
       5,    85,    86,     1,     5,     1,    50,    82,    49,    82,
       0,    81,     6,    10,    11,    87,    88,     8,    49,    50,
      82,     9,    62,     5,    82,    82,    10,    88,     1,     5,
      33,    34,    35,    49,    50,    82,    89,    90,    91,    92,
     123,    10,    11,    86,    50,    82,    49,    82,     5,     7,
      85,    10,    62,     5,    12,    62,    50,    82,    90,    91,
      49,    82,    90,    91,     1,    58,     1,     6,    95,     1,
       5,    89,    82,    82,     7,     5,    13,    93,    94,     1,
       5,    61,    63,    64,    67,    68,   128,   137,   138,   139,
       5,     7,    93,    82,    90,    91,    58,    82,    90,    91,
      58,    10,     1,     5,    10,    15,    17,    18,    20,    24,
      26,    28,    29,    30,    31,    32,    36,    38,    39,    40,
      60,    62,    65,    66,    84,    95,    96,    97,    98,   100,
     102,   103,   104,   105,   106,   107,   108,   109,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   122,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,    62,     1,     5,    12,    62,     7,     8,    12,
       5,     7,     8,    62,     1,    22,    27,    41,    42,    43,
      44,    45,    46,    47,    48,    51,    52,    53,    54,   140,
       9,     7,     7,    58,    58,     7,   137,     1,     8,     9,
      12,    36,    53,    58,   137,   137,     1,     5,   108,   128,
      97,   137,   137,     5,   108,    84,    53,    84,     1,     5,
     121,   137,     5,    84,   108,    84,    84,    36,     1,     5,
       7,   108,   134,   137,     8,    10,    97,    97,    97,    97,
       8,     9,     8,    12,    58,     9,     5,    93,     5,    93,
       1,   137,     5,     7,    93,     5,    94,   137,    12,     5,
      94,     7,    84,   137,   137,   137,   137,   137,   137,   137,
     137,   137,     5,     7,     5,    84,   137,     5,   106,   124,
       5,    84,   134,     5,    84,    53,     8,     9,    19,    19,
      21,    57,   110,   111,    25,     8,     8,    53,     8,     8,
       8,    37,    37,    37,    38,     5,    84,    93,     7,     8,
       7,     7,     1,     7,   137,    14,    16,    99,   101,     5,
     107,     5,     5,   124,    84,   134,     5,     7,     7,     7,
       7,     1,     7,     1,     7,   137,     7,     7,    62,    19,
       8,     8,     9,    12,     8,     9,    58,    37,    37,    84,
       5,     5,    84,    84,    95,    97,   137,     5,   124,   137,
       5,    84,   121,     1,   137,     5,    37,    37,    37,     5,
      97,   137,    14,    97,     9,     7,    84,   137,    84,   137,
       5,   124,     5,    84,   134,     5,   106,     5,     8,    19,
       1,    97,    37,     7,    97,    99,     5,     7,     7,     8,
       9,     8,     9,     9,     5,    84,   137,     5,     5,     5,
       5,     5,     9,     9,    58,     9,     5,     5,     5,    58
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
    {Streams::verbose()<<"atom:	literal\n";;}
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
#line 471 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"parenth_form : 	OPEN_S expr CLOSE_S";;}
    break;

  case 202:
#line 472 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"parenth_form : 	OPEN_S  CLOSE_S";;}
    break;

  case 203:
#line 473 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-1,"Expected '(' ","");
								;}
    break;

  case 204:
#line 477 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected ')' ","");
										;}
    break;

  case 205:
#line 481 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
													err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))," Expected '(' ","");
												 ;}
    break;

  case 206:
#line 485 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
													err->errQ->enqueue((yyvsp[-2].r.lineNum),yylval.r.colNum-strlength(yylval.r.strVal)," Expected ')' ","");
												 ;}
    break;

  case 207:
#line 492 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"list_display:	OPEN_D  expr_list CLOSE_D\n";;}
    break;

  case 208:
#line 495 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"string_conversion:	RE_COT expr_list RE_COT\n";;}
    break;

  case 209:
#line 498 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"yield_atom:		OPEN_S yield_expression CLOSE_S\n";;}
    break;

  case 210:
#line 501 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"yield_expression:	YIELD\n";;}
    break;

  case 211:
#line 502 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"yield_expression:	YIELD expr_list\n";;}
    break;

  case 212:
#line 505 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"subscription:	PRIMARY OPEN_D expr_list CLOSE_D\n";;}
    break;

  case 213:
#line 506 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"subscription:	PRIMARY OPEN_D expr_list CLOSE_D\n";;}
    break;

  case 214:
#line 509 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"call:	PRIMARY OPEN_D args_list CLOSE_D\n";;}
    break;

  case 215:
#line 510 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"call:	PRIMARY OPEN_D ID CLOSE_D\n";;}
    break;

  case 216:
#line 511 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"call:	ID OPEN_D ID CLOSE_D\n";;}
    break;

  case 217:
#line 514 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"expr:	condition\n";;}
    break;

  case 218:
#line 515 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"expr:	literal\n";;}
    break;

  case 219:
#line 516 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"expr:	expr op expr\n";;}
    break;

  case 220:
#line 517 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"expr:	long_id\n";;}
    break;

  case 221:
#line 518 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected operand at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.lineNum)-strlength((yyvsp[-1].r.strVal))<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlen((yyvsp[-1].r.strVal)),"Expected operand ","");
									  ;}
    break;

  case 222:
#line 524 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"condition: expr EQUAL expr\n";;}
    break;

  case 223:
#line 525 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"condition: expr NOT_EQUAL expr\n";;}
    break;

  case 224:
#line 526 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"condition: expr LESS_THAN expr\n";;}
    break;

  case 225:
#line 527 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"condition: expr LESS_OR_EQUAL expr\n";;}
    break;

  case 226:
#line 528 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"condition: expr MORE_THAN expr\n";;}
    break;

  case 227:
#line 529 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"condition: expr MORE_OR_EQUAL expr\n";;}
    break;

  case 228:
#line 532 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"long_id:	\n";;}
    break;

  case 229:
#line 533 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"long_id:	ID OPEN_S CLOSE_S\n";;}
    break;

  case 230:
#line 534 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"long_id:	ID OPEN_S expr_list CLOSE_S\n";;}
    break;

  case 231:
#line 535 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"long_id:	ID OPEN_S expr	  CLOSE_S\n";;}
    break;

  case 232:
#line 536 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"long_id:	long_id DOT ID\n";;}
    break;

  case 233:
#line 537 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"long_id:	long_id DOT ID OPEN_S CLOSE_S\n";;}
    break;

  case 234:
#line 538 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"long_id:	long_id DOT ID OPEN_S expr_list CLOSE_S\n";;}
    break;

  case 235:
#line 539 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"long_id:	long_id DOT ID OPEN_S expr CLOSE_S\n";;}
    break;

  case 236:
#line 542 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :PLUS\n";;}
    break;

  case 237:
#line 543 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :MINUS\n";;}
    break;

  case 238:
#line 544 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :DIV\n";;}
    break;

  case 239:
#line 545 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :MOD\n";;}
    break;

  case 240:
#line 546 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :OR\n";;}
    break;

  case 241:
#line 547 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :NOT\n";;}
    break;

  case 242:
#line 548 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :MULTI\n";;}
    break;

  case 243:
#line 549 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :AND\n";;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 3259 "yacc.cpp"

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


#line 551 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"

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
