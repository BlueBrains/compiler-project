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
<<<<<<< HEAD
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
=======
     _BEGIN = 265,
     END = 266,
     DEF = 267,
     ASSIGN = 268,
     STAR = 269,
     ELSE = 270,
     IF = 271,
     ELIF = 272,
     WHILE = 273,
     FOR = 274,
     IN = 275,
     TRY = 276,
     FINALLY = 277,
     MULTI = 278,
     EXPECT = 279,
     WITH = 280,
     AS = 281,
     ASSERT = 282,
     EQUAL = 283,
     DEL = 284,
     RETURN = 285,
     PRINT = 286,
     GLOBAL = 287,
     RAISE = 288,
     PRIVATE = 289,
     PUBLIC = 290,
     PROTECTED = 291,
     OPEN_D = 292,
     CLOSE_D = 293,
     RE_COT = 294,
     YIELD = 295,
     PRIMARY = 296,
     OR = 297,
     AND = 298,
     NOT = 299,
     PLUS = 300,
     MINUS = 301,
     DIV = 302,
     MOD = 303,
     NOT_EQUAL = 304,
>>>>>>> a5e267863b8129c7117a38bd69d2f0980866b4a0
     LESS_THAN = 305,
     LESS_OR_EQUAL = 306,
     MORE_THAN = 307,
     MORE_OR_EQUAL = 308,
     TRUE = 309,
     FALSE = 310,
<<<<<<< HEAD
     EXCEPT = 311,
     SEMICOLON = 312,
     NEW_LINE = 313,
     PASS = 314,
     CHAR_VALUE = 315,
     OPEN_S = 316,
     STRING_VALUE = 317,
     INTEGER_VALUE = 318,
     BREAK = 319,
     CONTINUE = 320,
     LONG_VALUE = 321,
     FLOAT_VALUE = 322,
     stmt_1_2 = 323,
     stmt_9 = 324,
     stmt_8 = 325,
     stmt_7 = 326,
     stmt_6 = 327,
     stmt_5 = 328,
     stmt_4 = 329,
     stmt_3 = 330,
     stmt_2 = 331,
     stmt_1 = 332
=======
     XOR = 311,
     XNOT = 312,
     EXCEPT = 313,
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
     FLOOR = 324,
     stmt_1_2 = 325,
     stmt_8 = 326,
     stmt_7 = 327,
     stmt_6 = 328,
     stmt_5 = 329,
     stmt_4 = 330,
     stmt_3 = 331,
     stmt_2 = 332,
     stmt_1 = 333
>>>>>>> a5e267863b8129c7117a38bd69d2f0980866b4a0
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
<<<<<<< HEAD
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
=======
#define _BEGIN 265
#define END 266
#define DEF 267
#define ASSIGN 268
#define STAR 269
#define ELSE 270
#define IF 271
#define ELIF 272
#define WHILE 273
#define FOR 274
#define IN 275
#define TRY 276
#define FINALLY 277
#define MULTI 278
#define EXPECT 279
#define WITH 280
#define AS 281
#define ASSERT 282
#define EQUAL 283
#define DEL 284
#define RETURN 285
#define PRINT 286
#define GLOBAL 287
#define RAISE 288
#define PRIVATE 289
#define PUBLIC 290
#define PROTECTED 291
#define OPEN_D 292
#define CLOSE_D 293
#define RE_COT 294
#define YIELD 295
#define PRIMARY 296
#define OR 297
#define AND 298
#define NOT 299
#define PLUS 300
#define MINUS 301
#define DIV 302
#define MOD 303
#define NOT_EQUAL 304
>>>>>>> a5e267863b8129c7117a38bd69d2f0980866b4a0
#define LESS_THAN 305
#define LESS_OR_EQUAL 306
#define MORE_THAN 307
#define MORE_OR_EQUAL 308
#define TRUE 309
#define FALSE 310
<<<<<<< HEAD
#define EXCEPT 311
#define SEMICOLON 312
#define NEW_LINE 313
#define PASS 314
#define CHAR_VALUE 315
#define OPEN_S 316
#define STRING_VALUE 317
#define INTEGER_VALUE 318
#define BREAK 319
#define CONTINUE 320
#define LONG_VALUE 321
#define FLOAT_VALUE 322
#define stmt_1_2 323
#define stmt_9 324
#define stmt_8 325
#define stmt_7 326
#define stmt_6 327
#define stmt_5 328
#define stmt_4 329
#define stmt_3 330
#define stmt_2 331
#define stmt_1 332
=======
#define XOR 311
#define XNOT 312
#define EXCEPT 313
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
#define FLOOR 324
#define stmt_1_2 325
#define stmt_8 326
#define stmt_7 327
#define stmt_6 328
#define stmt_5 329
#define stmt_4 330
#define stmt_3 331
#define stmt_2 332
#define stmt_1 333
>>>>>>> a5e267863b8129c7117a38bd69d2f0980866b4a0




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
#line 42 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
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
<<<<<<< HEAD
#line 288 "yacc.cpp"
=======
#line 274 "yacc.cpp"
>>>>>>> a5e267863b8129c7117a38bd69d2f0980866b4a0
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
<<<<<<< HEAD
#line 300 "yacc.cpp"
=======
#line 286 "yacc.cpp"
>>>>>>> a5e267863b8129c7117a38bd69d2f0980866b4a0

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
<<<<<<< HEAD
#define YYLAST   1543

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  78
=======
#define YYLAST   1161

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  79
>>>>>>> a5e267863b8129c7117a38bd69d2f0980866b4a0
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  62
/* YYNRULES -- Number of rules. */
<<<<<<< HEAD
#define YYNRULES  229
/* YYNRULES -- Number of states. */
#define YYNSTATES  405

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   332
=======
#define YYNRULES  212
/* YYNRULES -- Number of states. */
#define YYNSTATES  368

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   333
>>>>>>> a5e267863b8129c7117a38bd69d2f0980866b4a0

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
<<<<<<< HEAD
      75,    76,    77
=======
      75,    76,    77,    78
>>>>>>> a5e267863b8129c7117a38bd69d2f0980866b4a0
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
<<<<<<< HEAD
       0,     0,     3,     6,     8,    12,    14,    17,    20,    25,
      31,    35,    41,    48,    51,    55,    58,    62,    67,    71,
      75,    77,    81,    83,    87,    89,    92,    96,    98,   101,
     105,   108,   111,   113,   115,   118,   121,   123,   128,   132,
     137,   141,   144,   150,   156,   161,   166,   171,   175,   181,
     187,   192,   197,   203,   209,   215,   221,   225,   229,   233,
     237,   239,   242,   246,   251,   254,   258,   261,   264,   266,
     268,   270,   272,   274,   276,   278,   281,   284,   289,   298,
     309,   312,   317,   321,   327,   331,   334,   337,   340,   343,
     346,   350,   353,   358,   365,   370,   376,   380,   384,   388,
     394,   400,   406,   414,   416,   420,   426,   430,   436,   440,
     446,   450,   452,   456,   460,   463,   466,   470,   473,   478,
     480,   482,   484,   486,   488,   490,   492,   494,   496,   498,
     500,   502,   504,   507,   512,   516,   522,   526,   530,   536,
     540,   543,   548,   551,   553,   556,   558,   561,   566,   570,
     575,   578,   581,   585,   587,   589,   592,   597,   602,   608,
     610,   612,   614,   618,   624,   628,   632,   638,   642,   644,
     646,   650,   654,   656,   658,   660,   662,   664,   666,   668,
     670,   672,   674,   676,   678,   680,   682,   684,   688,   691,
     694,   697,   701,   705,   709,   713,   717,   719,   722,   727,
     732,   737,   742,   747,   749,   751,   755,   757,   761,   765,
     769,   773,   777,   781,   785,   787,   791,   796,   801,   805,
     811,   818,   825,   827,   829,   831,   833,   835,   837,   839
=======
       0,     0,     3,     5,     8,    10,    14,    18,    24,    26,
      29,    33,    39,    46,    49,    53,    56,    59,    63,    65,
      69,    75,    81,    85,    93,    99,   103,   109,   113,   115,
     119,   125,   127,   130,   134,   137,   139,   141,   143,   146,
     148,   153,   157,   161,   164,   167,   174,   181,   187,   193,
     199,   204,   210,   215,   221,   227,   233,   237,   241,   245,
     249,   251,   254,   258,   263,   266,   270,   273,   275,   277,
     279,   281,   283,   285,   287,   289,   292,   297,   301,   307,
     311,   314,   318,   321,   325,   328,   332,   336,   339,   342,
     347,   354,   359,   364,   368,   374,   378,   384,   388,   390,
     395,   400,   405,   410,   414,   418,   423,   427,   433,   435,
     437,   439,   441,   443,   445,   447,   449,   451,   453,   455,
     457,   459,   462,   467,   471,   477,   481,   485,   491,   495,
     498,   503,   506,   508,   511,   513,   516,   521,   524,   527,
     529,   533,   535,   537,   540,   545,   549,   551,   553,   555,
     559,   565,   569,   573,   579,   583,   585,   587,   591,   595,
     597,   599,   601,   603,   605,   607,   609,   611,   613,   615,
     617,   619,   621,   623,   625,   629,   632,   635,   637,   640,
     644,   648,   652,   654,   657,   662,   667,   672,   674,   676,
     680,   682,   686,   690,   694,   698,   702,   706,   709,   713,
     718,   723,   727,   733,   740,   747,   749,   751,   753,   755,
     757,   759,   761
>>>>>>> a5e267863b8129c7117a38bd69d2f0980866b4a0
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
<<<<<<< HEAD
      79,     0,    -1,    79,    80,    -1,    80,    -1,     3,    84,
      81,    -1,    81,    -1,    82,    86,    -1,     4,     5,    -1,
       4,     5,    61,     7,    -1,     4,     5,    61,    84,     7,
      -1,    49,     4,     5,    -1,    49,     4,     5,    61,     7,
      -1,    49,     4,     5,    61,    84,     7,    -1,     4,     1,
      -1,     5,     1,     5,    -1,     5,     1,    -1,    49,     4,
       1,    -1,    49,     5,     1,     5,    -1,    49,     5,     1,
      -1,    83,     8,   136,    -1,   136,    -1,    84,     8,    85,
      -1,    85,    -1,    85,     9,     5,    -1,     5,    -1,     6,
      10,    -1,     6,    87,    10,    -1,    10,    -1,    87,    10,
      -1,    87,    11,    88,    -1,    11,    88,    -1,    89,    57,
      -1,    90,    -1,    81,    -1,    89,     1,    -1,   122,     5,
      -1,     5,    -1,   122,     5,    12,   136,    -1,     5,    12,
     136,    -1,   122,     5,     5,     1,    -1,     5,     5,     1,
      -1,    91,    94,    -1,   122,     5,    61,    92,     7,    -1,
     122,     5,    61,     5,     7,    -1,     5,    61,    92,     7,
      -1,     5,    61,     5,     7,    -1,   122,     5,    61,     7,
      -1,     5,    61,     7,    -1,   122,     1,    61,    92,     7,
      -1,   122,     1,    61,     5,     7,    -1,     1,    61,    92,
       7,    -1,     1,    61,     5,     7,    -1,   122,     5,     1,
      92,     7,    -1,   122,     5,     1,     5,     7,    -1,   122,
       5,    61,    92,     1,    -1,   122,     5,    61,     5,     1,
      -1,    92,     8,    93,    -1,     5,     8,    93,    -1,    92,
       8,     5,    -1,     5,     8,     5,    -1,    93,    -1,    13,
       5,    -1,     5,    12,   136,    -1,    13,     5,    12,   136,
      -1,     6,    10,    -1,     6,    95,    10,    -1,     1,    10,
      -1,    95,    96,    -1,    96,    -1,    97,    -1,   101,    -1,
     103,    -1,   108,    -1,   111,    -1,    94,    -1,   112,    57,
      -1,     5,    57,    -1,     5,     9,     5,    57,    -1,     5,
       8,     5,     9,     5,     9,     5,    57,    -1,     5,     9,
       5,     8,     5,     9,     5,     9,     5,    57,    -1,    99,
      96,    -1,    99,    96,    14,    96,    -1,    99,    96,    98,
      -1,    99,    96,    98,    14,    96,    -1,   100,    96,    98,
      -1,   100,    96,    -1,    15,   136,    -1,    16,   136,    -1,
     102,    96,    -1,    17,   136,    -1,     5,     1,   136,    -1,
     104,    96,    -1,    18,   107,    19,    83,    -1,    18,     5,
       8,     5,    19,    83,    -1,    18,     5,    19,    83,    -1,
       5,     1,     5,    19,    83,    -1,   105,     8,   106,    -1,
       5,     8,   105,    -1,     5,     8,     5,    -1,     5,     8,
       5,     9,     5,    -1,     5,     9,     5,     8,   105,    -1,
       5,     9,     5,     8,     5,    -1,     5,     9,     5,     8,
       5,     9,     5,    -1,   106,    -1,   106,     9,     5,    -1,
       5,     9,     5,     9,     5,    -1,   107,     8,   123,    -1,
       5,     8,     5,     8,   123,    -1,   107,     8,     5,    -1,
       5,     8,     5,     8,     5,    -1,     5,     8,   123,    -1,
     123,    -1,    20,    96,   110,    -1,    20,    96,   109,    -1,
      21,    94,    -1,    56,    96,    -1,    56,   136,    96,    -1,
      24,   136,    -1,    24,   136,    25,   123,    -1,    83,    -1,
     113,    -1,   114,    -1,    59,    -1,   115,    -1,   118,    -1,
     116,    -1,   117,    -1,   121,    -1,    64,    -1,    65,    -1,
     105,    -1,   119,    -1,    26,   136,    -1,    26,   136,     8,
     136,    -1,   107,    12,    83,    -1,     5,     8,     5,    12,
      83,    -1,     5,    12,    83,    -1,   107,    12,   133,    -1,
       5,     8,     5,    12,   133,    -1,     5,    12,   133,    -1,
      28,   107,    -1,    28,     5,     8,     5,    -1,    28,     5,
      -1,    29,    -1,    29,    83,    -1,   133,    -1,    30,    83,
      -1,    30,    52,    52,    83,    -1,     5,     1,    83,    -1,
       5,    52,    52,    83,    -1,    31,   120,    -1,    31,     1,
      -1,     5,     8,   120,    -1,     5,    -1,    32,    -1,    32,
     136,    -1,    32,   136,     8,   136,    -1,    32,   136,     8,
       1,    -1,     5,     1,   136,     8,   136,    -1,    33,    -1,
      34,    -1,    35,    -1,    61,   107,     7,    -1,    61,     5,
       8,     5,     7,    -1,    61,     5,     7,    -1,    36,   107,
      37,    -1,    36,     5,     8,     5,    37,    -1,    36,     5,
      37,    -1,   124,    -1,   134,    -1,   125,     9,     5,    -1,
       5,     9,     5,    -1,   126,    -1,   124,    -1,   134,    -1,
     135,    -1,   128,    -1,   127,    -1,    62,    -1,    63,    -1,
      66,    -1,    67,    -1,    60,    -1,   129,    -1,   130,    -1,
     131,    -1,   132,    -1,    61,   136,     7,    -1,    61,     7,
      -1,     1,     7,    -1,    61,     1,    -1,     1,   136,     7,
      -1,    61,   136,     1,    -1,    36,    83,    37,    -1,    38,
      83,    38,    -1,    61,   133,     7,    -1,    39,    -1,    39,
      83,    -1,    40,    36,    83,    37,    -1,     5,    36,    83,
      37,    -1,    40,    36,    92,    37,    -1,    40,    36,     5,
      37,    -1,     5,    36,     5,    37,    -1,   137,    -1,   127,
      -1,   136,   139,   136,    -1,   138,    -1,   136,     1,   136,
      -1,   136,    27,   136,    -1,   136,    48,   136,    -1,   136,
      50,   136,    -1,   136,    51,   136,    -1,   136,    52,   136,
      -1,   136,    53,   136,    -1,     5,    -1,     5,    61,     7,
      -1,     5,    61,    83,     7,    -1,     5,    61,   136,     7,
      -1,   138,     9,     5,    -1,   138,     9,     5,    61,     7,
      -1,   138,     9,     5,    61,    83,     7,    -1,   138,     9,
       5,    61,   136,     7,    -1,    44,    -1,    45,    -1,    46,
      -1,    47,    -1,    41,    -1,    43,    -1,    22,    -1,    42,
      -1
=======
      80,     0,    -1,    81,    -1,    81,    82,    -1,    82,    -1,
       3,    86,    83,    -1,     3,     5,    83,    -1,     3,     5,
       9,     5,    83,    -1,    83,    -1,    84,    88,    -1,     4,
       5,     6,    -1,     4,     5,    62,     7,     6,    -1,     4,
       5,    62,    85,     7,     6,    -1,     4,     6,    -1,     5,
       5,     6,    -1,     5,     6,    -1,     4,     5,    -1,    85,
       8,   136,    -1,   136,    -1,    86,     8,    87,    -1,     5,
       9,     5,     8,    87,    -1,    86,     8,     5,     9,     5,
      -1,    86,     8,     5,    -1,     5,     9,     5,     8,     5,
       9,     5,    -1,     5,     9,     5,     8,     5,    -1,     5,
       8,    87,    -1,     5,     8,     5,     9,     5,    -1,     5,
       8,     5,    -1,    87,    -1,    87,     9,     5,    -1,     5,
       9,     5,     9,     5,    -1,    11,    -1,    89,    11,    -1,
      89,    12,    90,    -1,    12,    90,    -1,    91,    -1,    92,
      -1,    83,    -1,   122,     5,    -1,     5,    -1,   122,     5,
      13,   136,    -1,     5,    13,   136,    -1,   122,     5,     5,
      -1,     5,     5,    -1,    93,    96,    -1,   122,     5,    62,
      94,     7,     6,    -1,   122,     5,    62,     5,     7,     6,
      -1,     5,    62,    94,     7,     6,    -1,     5,    62,     5,
       7,     6,    -1,   122,     5,    62,     7,     6,    -1,     5,
      62,     7,     6,    -1,   122,    62,    94,     7,     6,    -1,
      62,    94,     7,     6,    -1,   122,     5,    94,     7,     6,
      -1,   122,     5,    62,    94,     6,    -1,   122,     5,    62,
      94,     7,    -1,    94,     8,    95,    -1,     5,     8,    95,
      -1,    94,     8,     5,    -1,     5,     8,     5,    -1,    95,
      -1,    14,     5,    -1,     5,    13,   136,    -1,    14,     5,
      13,   136,    -1,    10,    11,    -1,    10,    97,    11,    -1,
      97,    98,    -1,    98,    -1,    99,    -1,   103,    -1,   105,
      -1,   108,    -1,   111,    -1,    96,    -1,   112,    -1,   101,
      98,    -1,   101,    98,    15,    98,    -1,   101,    98,   100,
      -1,   101,    98,   100,    15,    98,    -1,   102,    98,   100,
      -1,   102,    98,    -1,    16,   136,     6,    -1,    16,   136,
      -1,    17,   136,     6,    -1,   104,    98,    -1,    18,   136,
       6,    -1,     5,   136,     6,    -1,    18,   136,    -1,   106,
      98,    -1,    19,   107,    20,    85,    -1,    19,     5,     8,
       5,    20,    85,    -1,    19,     5,    20,    85,    -1,     5,
     107,    20,    85,    -1,   107,     8,   123,    -1,     5,     8,
       5,     8,   123,    -1,   107,     8,     5,    -1,     5,     8,
       5,     8,     5,    -1,     5,     8,   123,    -1,   123,    -1,
      21,     6,    98,   110,    -1,    21,     6,    98,   109,    -1,
      21,     6,    96,   110,    -1,    21,     6,    96,   109,    -1,
      22,     6,    96,    -1,    58,     6,    98,    -1,    58,     6,
     136,    98,    -1,    25,   136,     6,    -1,    25,   136,    26,
     123,     6,    -1,    85,    -1,   113,    -1,   114,    -1,    60,
      -1,   115,    -1,   118,    -1,   116,    -1,   117,    -1,   121,
      -1,    65,    -1,    66,    -1,    86,    -1,   119,    -1,    27,
     136,    -1,    27,   136,     8,   136,    -1,   107,    28,    85,
      -1,     5,     8,     5,    28,    85,    -1,     5,    28,    85,
      -1,   107,    28,   133,    -1,     5,     8,     5,    28,   133,
      -1,     5,    28,   133,    -1,    29,   107,    -1,    29,     5,
       8,     5,    -1,    29,     5,    -1,    30,    -1,    30,    85,
      -1,   133,    -1,    31,    85,    -1,    31,    52,    52,    85,
      -1,     5,    85,    -1,    32,   120,    -1,    32,    -1,     5,
       8,   120,    -1,     5,    -1,    33,    -1,    33,   136,    -1,
      33,   136,     8,   136,    -1,    33,   136,     8,    -1,    34,
      -1,    35,    -1,    36,    -1,    62,   107,     7,    -1,    62,
       5,     8,     5,     7,    -1,    62,     5,     7,    -1,    37,
     107,    38,    -1,    37,     5,     8,     5,    38,    -1,    37,
       5,    38,    -1,   124,    -1,   134,    -1,   125,     9,     5,
      -1,     5,     9,     5,    -1,   126,    -1,   124,    -1,   134,
      -1,   135,    -1,   127,    -1,   128,    -1,    63,    -1,    64,
      -1,    67,    -1,    68,    -1,    61,    -1,   129,    -1,   130,
      -1,   131,    -1,   132,    -1,    62,   136,     7,    -1,    62,
       7,    -1,    62,   136,    -1,    62,    -1,   136,     7,    -1,
      37,    85,    38,    -1,    39,    85,    39,    -1,    62,   133,
       7,    -1,    40,    -1,    40,    85,    -1,    41,    37,    85,
      38,    -1,    41,    37,    94,    38,    -1,    41,    37,     5,
      38,    -1,   137,    -1,   127,    -1,   136,   139,   136,    -1,
     138,    -1,   136,    28,   136,    -1,   136,    49,   136,    -1,
     136,    50,   136,    -1,   136,    51,   136,    -1,   136,    52,
     136,    -1,   136,    53,   136,    -1,     5,    62,    -1,     5,
      62,     7,    -1,     5,    62,    85,     7,    -1,     5,    62,
     136,     7,    -1,   138,     9,     5,    -1,   138,     9,     5,
      62,     7,    -1,   138,     9,     5,    62,    85,     7,    -1,
     138,     9,     5,    62,   136,     7,    -1,    45,    -1,    46,
      -1,    47,    -1,    48,    -1,    42,    -1,    44,    -1,    23,
      -1,    43,    -1
>>>>>>> a5e267863b8129c7117a38bd69d2f0980866b4a0
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
<<<<<<< HEAD
       0,    75,    75,    78,    83,    84,    87,    91,    92,    93,
      94,    95,    96,    97,   102,   107,   112,   117,   122,   129,
     130,   133,   134,   137,   138,   142,   143,   144,   150,   158,
     159,   162,   163,   164,   165,   171,   172,   173,   174,   175,
     179,   185,   188,   189,   190,   191,   192,   193,   194,   198,
     202,   206,   210,   214,   218,   222,   230,   231,   232,   233,
     234,   237,   238,   239,   242,   243,   244,   251,   252,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     268,   269,   270,   271,   274,   275,   278,   281,   284,   289,
     290,   296,   299,   300,   301,   302,   309,   310,   311,   312,
     313,   314,   315,   316,   320,   321,   325,   326,   327,   328,
     329,   330,   333,   334,   337,   340,   341,   344,   345,   348,
     349,   350,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   364,   365,   368,   369,   370,   371,   372,   373,
     376,   377,   378,   381,   382,   385,   388,   389,   390,   394,
     399,   400,   406,   407,   410,   411,   412,   413,   417,   423,
     424,   425,   428,   429,   430,   431,   432,   433,   434,   435,
     438,   439,   442,   443,   444,   445,   448,   449,   452,   453,
     454,   455,   456,   459,   460,   461,   462,   465,   466,   467,
     471,   475,   479,   486,   489,   492,   495,   496,   499,   500,
     503,   504,   505,   508,   509,   510,   511,   512,   518,   519,
     520,   521,   522,   523,   526,   527,   528,   529,   530,   531,
     532,   533,   536,   537,   538,   539,   540,   541,   542,   543
=======
       0,    59,    59,    65,    66,    69,    70,    71,    72,    75,
      77,    78,    80,    83,    87,    90,    93,    99,   100,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   114,   126,
     127,   131,   132,   135,   136,   139,   140,   141,   144,   145,
     146,   147,   148,   149,   152,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   169,   170,   171,   172,
     173,   176,   177,   178,   181,   182,   185,   186,   189,   190,
     191,   192,   193,   194,   195,   198,   199,   200,   201,   204,
     205,   208,   209,   212,   215,   220,   221,   222,   225,   228,
     229,   230,   231,   234,   235,   236,   237,   238,   239,   242,
     243,   244,   245,   248,   251,   252,   255,   256,   259,   260,
     261,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   275,   276,   279,   280,   281,   282,   283,   284,   287,
     288,   289,   292,   293,   296,   299,   300,   301,   303,   304,
     307,   308,   311,   312,   313,   314,   317,   318,   319,   322,
     323,   324,   325,   326,   327,   328,   329,   332,   333,   336,
     337,   338,   339,   342,   343,   346,   347,   348,   349,   350,
     353,   354,   355,   356,   359,   360,   361,   362,   363,   367,
     370,   373,   376,   377,   380,   383,   384,   387,   388,   389,
     390,   394,   395,   396,   397,   398,   399,   402,   403,   404,
     405,   406,   407,   408,   409,   412,   413,   414,   415,   416,
     417,   418,   419
>>>>>>> a5e267863b8129c7117a38bd69d2f0980866b4a0
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
<<<<<<< HEAD
  "$end", "error", "$undefined", "IMPORT", "CLASS", "ID", "COLON",
  "CLOSE_S", "COMMA", "DOT", "END", "DEF", "ASSIGN", "STAR", "ELSE", "IF",
  "ELIF", "WHILE", "FOR", "IN", "TRY", "FINALLY", "MULTI", "EXPECT",
  "WITH", "AS", "ASSERT", "EQUAL", "DEL", "RETURN", "PRINT", "GLOBAL",
  "RAISE", "PRIVATE", "PUBLIC", "PROTECTED", "OPEN_D", "CLOSE_D", "RE_COT",
  "YIELD", "PRIMARY", "OR", "AND", "NOT", "PLUS", "MINUS", "DIV", "MOD",
  "NOT_EQUAL", "FINAL", "LESS_THAN", "LESS_OR_EQUAL", "MORE_THAN",
  "MORE_OR_EQUAL", "TRUE", "FALSE", "EXCEPT", "SEMICOLON", "NEW_LINE",
  "PASS", "CHAR_VALUE", "OPEN_S", "STRING_VALUE", "INTEGER_VALUE", "BREAK",
  "CONTINUE", "LONG_VALUE", "FLOAT_VALUE", "stmt_1_2", "stmt_9", "stmt_8",
  "stmt_7", "stmt_6", "stmt_5", "stmt_4", "stmt_3", "stmt_2", "stmt_1",
  "$accept", "program", "unit", "class_decl", "class_h", "expr_list",
  "unit_list", "unit_import", "class_body", "dm_list", "dm",
  "var_declaration", "method_declaration", "method_h", "args_list", "arg",
  "block_stmt", "stmt_list", "stmt", "if_stmt", "elif_stmt", "if_header",
  "elif_header", "while_stmt", "while_header", "for_stmt", "for_header",
  "import_list", "import", "target_list", "try_stmt", "finally_stmt",
  "except_stmt", "with_stmt", "simple_stmt_list", "assert_stmt",
  "assignment_stmt", "del_stmt", "return_stmt", "yield_stmt", "print_stmt",
  "global_stmt", "id_list", "raise_stmt", "access_modef", "target",
  "attributeref", "primary", "atom", "literal", "enclosure",
  "parenth_form", "list_display", "string_conversion", "yield_atom",
  "yield_expression", "subscription", "call", "expr", "condition",
  "long_id", "op", 0
=======
  "$end", "error", "$undefined", "IMPORT", "CLASS", "ID", "SEMI_COLUMN",
  "CLOSE_S", "COMMA", "DOT", "_BEGIN", "END", "DEF", "ASSIGN", "STAR",
  "ELSE", "IF", "ELIF", "WHILE", "FOR", "IN", "TRY", "FINALLY", "MULTI",
  "EXPECT", "WITH", "AS", "ASSERT", "EQUAL", "DEL", "RETURN", "PRINT",
  "GLOBAL", "RAISE", "PRIVATE", "PUBLIC", "PROTECTED", "OPEN_D", "CLOSE_D",
  "RE_COT", "YIELD", "PRIMARY", "OR", "AND", "NOT", "PLUS", "MINUS", "DIV",
  "MOD", "NOT_EQUAL", "LESS_THAN", "LESS_OR_EQUAL", "MORE_THAN",
  "MORE_OR_EQUAL", "TRUE", "FALSE", "XOR", "XNOT", "EXCEPT", "NEW_LINE",
  "PASS", "CHAR_VALUE", "OPEN_S", "STRING_VALUE", "INTEGER_VALUE", "BREAK",
  "CONTINUE", "LONG_VALUE", "FLOAT_VALUE", "FLOOR", "stmt_1_2", "stmt_8",
  "stmt_7", "stmt_6", "stmt_5", "stmt_4", "stmt_3", "stmt_2", "stmt_1",
  "$accept", "program", "units", "unit", "class_decl", "class_h",
  "expr_list", "import_list", "import", "class_body", "dm_list", "dm",
  "var_declaration", "method_declaration", "method_h", "args_list", "arg",
  "block_stmt", "stmt_list", "stmt", "if_stmt", "elif_stmt", "if_header",
  "elif_header", "while_stmt", "while_header", "for_stmt", "for_header",
  "target_list", "try_stmt", "finally_stmt", "except_stmt", "with_stmt",
  "simple_stmt_list", "assert_stmt", "assignment_stmt", "del_stmt",
  "return_stmt", "yield_stmt", "print_stmt", "global_stmt", "id_list",
  "raise_stmt", "access_modef", "target", "attributeref", "primary",
  "atom", "literal", "enclosure", "parenth_form", "list_display",
  "string_conversion", "yield_atom", "yield_expression", "subscription",
  "call", "expr", "condition", "long_id", "op", 0
>>>>>>> a5e267863b8129c7117a38bd69d2f0980866b4a0
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
<<<<<<< HEAD
     325,   326,   327,   328,   329,   330,   331,   332
=======
     325,   326,   327,   328,   329,   330,   331,   332,   333
>>>>>>> a5e267863b8129c7117a38bd69d2f0980866b4a0
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
<<<<<<< HEAD
       0,    78,    79,    79,    80,    80,    81,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    83,
      83,    84,    84,    85,    85,    86,    86,    86,    86,    87,
      87,    88,    88,    88,    88,    89,    89,    89,    89,    89,
      89,    90,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    92,    92,    92,    92,
      92,    93,    93,    93,    94,    94,    94,    95,    95,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      97,    97,    97,    97,    98,    98,    99,   100,   101,   102,
     102,   103,   104,   104,   104,   104,   105,   105,   105,   105,
     105,   105,   105,   105,   106,   106,   107,   107,   107,   107,
     107,   107,   108,   108,   109,   110,   110,   111,   111,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   113,   113,   114,   114,   114,   114,   114,   114,
     115,   115,   115,   116,   116,   117,   118,   118,   118,   118,
     119,   119,   120,   120,   121,   121,   121,   121,   121,   122,
     122,   122,   123,   123,   123,   123,   123,   123,   123,   123,
     124,   124,   125,   125,   125,   125,   126,   126,   127,   127,
     127,   127,   127,   128,   128,   128,   128,   129,   129,   129,
     129,   129,   129,   130,   131,   132,   133,   133,   134,   134,
     135,   135,   135,   136,   136,   136,   136,   136,   137,   137,
     137,   137,   137,   137,   138,   138,   138,   138,   138,   138,
     138,   138,   139,   139,   139,   139,   139,   139,   139,   139
=======
       0,    79,    80,    81,    81,    82,    82,    82,    82,    83,
      84,    84,    84,    84,    84,    84,    84,    85,    85,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    87,
      87,    88,    88,    89,    89,    90,    90,    90,    91,    91,
      91,    91,    91,    91,    92,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    94,    94,    94,    94,
      94,    95,    95,    95,    96,    96,    97,    97,    98,    98,
      98,    98,    98,    98,    98,    99,    99,    99,    99,   100,
     100,   101,   101,   102,   103,   104,   104,   104,   105,   106,
     106,   106,   106,   107,   107,   107,   107,   107,   107,   108,
     108,   108,   108,   109,   110,   110,   111,   111,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   113,   113,   114,   114,   114,   114,   114,   114,   115,
     115,   115,   116,   116,   117,   118,   118,   118,   119,   119,
     120,   120,   121,   121,   121,   121,   122,   122,   122,   123,
     123,   123,   123,   123,   123,   123,   123,   124,   124,   125,
     125,   125,   125,   126,   126,   127,   127,   127,   127,   127,
     128,   128,   128,   128,   129,   129,   129,   129,   129,   130,
     131,   132,   133,   133,   134,   135,   135,   136,   136,   136,
     136,   137,   137,   137,   137,   137,   137,   138,   138,   138,
     138,   138,   138,   138,   138,   139,   139,   139,   139,   139,
     139,   139,   139
>>>>>>> a5e267863b8129c7117a38bd69d2f0980866b4a0
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
<<<<<<< HEAD
       0,     2,     2,     1,     3,     1,     2,     2,     4,     5,
       3,     5,     6,     2,     3,     2,     3,     4,     3,     3,
       1,     3,     1,     3,     1,     2,     3,     1,     2,     3,
       2,     2,     1,     1,     2,     2,     1,     4,     3,     4,
       3,     2,     5,     5,     4,     4,     4,     3,     5,     5,
       4,     4,     5,     5,     5,     5,     3,     3,     3,     3,
       1,     2,     3,     4,     2,     3,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     4,     8,    10,
       2,     4,     3,     5,     3,     2,     2,     2,     2,     2,
       3,     2,     4,     6,     4,     5,     3,     3,     3,     5,
       5,     5,     7,     1,     3,     5,     3,     5,     3,     5,
       3,     1,     3,     3,     2,     2,     3,     2,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     4,     3,     5,     3,     3,     5,     3,
       2,     4,     2,     1,     2,     1,     2,     4,     3,     4,
       2,     2,     3,     1,     1,     2,     4,     4,     5,     1,
       1,     1,     3,     5,     3,     3,     5,     3,     1,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     2,
       2,     3,     3,     3,     3,     3,     1,     2,     4,     4,
       4,     4,     4,     1,     1,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     1,     3,     4,     4,     3,     5,
       6,     6,     1,     1,     1,     1,     1,     1,     1,     1
=======
       0,     2,     1,     2,     1,     3,     3,     5,     1,     2,
       3,     5,     6,     2,     3,     2,     2,     3,     1,     3,
       5,     5,     3,     7,     5,     3,     5,     3,     1,     3,
       5,     1,     2,     3,     2,     1,     1,     1,     2,     1,
       4,     3,     3,     2,     2,     6,     6,     5,     5,     5,
       4,     5,     4,     5,     5,     5,     3,     3,     3,     3,
       1,     2,     3,     4,     2,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     4,     3,     5,     3,
       2,     3,     2,     3,     2,     3,     3,     2,     2,     4,
       6,     4,     4,     3,     5,     3,     5,     3,     1,     4,
       4,     4,     4,     3,     3,     4,     3,     5,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     4,     3,     5,     3,     3,     5,     3,     2,
       4,     2,     1,     2,     1,     2,     4,     2,     2,     1,
       3,     1,     1,     2,     4,     3,     1,     1,     1,     3,
       5,     3,     3,     5,     3,     1,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     2,     1,     2,     3,
       3,     3,     1,     2,     4,     4,     4,     1,     1,     3,
       1,     3,     3,     3,     3,     3,     3,     2,     3,     4,
       4,     3,     5,     6,     6,     1,     1,     1,     1,     1,
       1,     1,     1
>>>>>>> a5e267863b8129c7117a38bd69d2f0980866b4a0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
<<<<<<< HEAD
       0,     0,     0,     0,     0,     0,     3,     5,     0,    24,
       0,    22,    13,     7,    15,     0,     0,     1,     2,     0,
      27,     0,     6,     0,     0,     4,     0,     0,    14,    16,
      10,    18,    25,     0,     0,    36,   159,   160,   161,    33,
      30,     0,    32,     0,     0,    28,     0,    21,    23,     8,
       0,     0,    17,    26,     0,     0,     0,     0,    34,    31,
       0,     0,    41,     0,    35,    29,     9,    11,     0,     0,
       0,     0,    60,    40,   214,   182,   178,   179,   180,   181,
     204,    38,   203,   206,     0,    47,     0,    66,     0,     0,
      64,     0,     0,     0,     0,     0,     0,     0,   143,     0,
       0,   154,     0,     0,   196,     0,   122,     0,   128,   129,
     119,    74,     0,    68,    69,     0,    70,     0,    71,     0,
     130,   103,     0,    72,    73,     0,   120,   121,   123,   125,
     126,   124,   131,   127,   111,   168,     0,   172,   204,   176,
     183,   184,   185,   186,   145,   169,   175,     0,     0,     0,
       0,     0,     0,    12,    51,     0,     0,    61,    50,     0,
       0,     0,   228,     0,   226,   229,   227,   222,   223,   224,
     225,     0,     0,     0,     0,     0,     0,     0,    45,    44,
     189,     0,     0,     0,     0,     0,     0,     0,    76,    86,
      89,     0,     0,     0,   177,     0,   117,     0,   142,   140,
     144,     0,   146,   151,   153,   150,     0,   214,     0,     0,
       0,   197,     0,   190,   214,   188,     0,     0,     0,     0,
      65,    67,    80,    88,    91,     0,     0,     0,     0,    75,
       0,     0,     0,     0,     0,    39,    37,     0,    46,     0,
      59,    57,    62,     0,    58,    56,   215,     0,     0,     0,
     208,   209,   210,   211,   212,   213,     0,   218,   191,   214,
     148,    90,    98,    97,   110,   171,   136,   139,   214,     0,
       0,     0,     0,     0,     0,     0,     0,   113,   112,     0,
       0,     0,     0,     0,     0,     0,   167,   193,   165,   194,
     214,     0,     0,   164,     0,   162,   195,   192,   187,    19,
       0,     0,    82,     0,     0,    96,   104,   108,   106,   134,
     137,   170,    49,    48,    53,    52,    55,    43,    54,    42,
      63,   216,   217,     0,     0,     0,     0,     0,     0,     0,
       0,    77,   202,   199,   149,     0,   171,    94,    92,   114,
     115,     0,     0,   118,     0,   141,   147,   152,   157,     0,
       0,   201,   198,   200,     0,    81,     0,     0,    85,     0,
     219,     0,     0,    95,     0,    98,   107,   171,   135,   138,
     101,   100,   105,     0,     0,     0,   116,   166,   163,    83,
      84,     0,   220,   221,     0,     0,     0,     0,     0,   109,
      93,     0,    98,   171,   101,   105,   102,     0,     0,    78,
       0,    99,   102,   105,    79
=======
       0,     0,     0,     0,     0,     2,     4,     8,     0,     0,
       0,    28,    16,    13,     0,    15,     1,     3,    31,     0,
       9,     0,     0,     0,     6,     0,     5,     0,    10,     0,
      14,    39,   146,   147,   148,     0,    37,    34,    35,    36,
       0,     0,    32,     0,    27,    25,     0,    22,    19,    29,
       0,     0,   169,   165,   166,   167,   168,     0,   188,    18,
     187,   190,    43,     0,     0,     0,     0,     0,    60,     0,
      44,    38,     0,    33,     0,     0,     0,     7,     0,   197,
      11,     0,     0,   211,     0,   209,   212,   210,   205,   206,
     207,   208,     0,     0,     0,     0,     0,     0,     0,    41,
       0,     0,     0,     0,     0,    61,     0,     0,     0,    64,
       0,     0,     0,     0,     0,     0,     0,   132,     0,   139,
     142,     0,     0,   182,     0,   111,   177,   117,   118,   108,
     119,    73,     0,    67,    68,     0,    69,     0,    70,     0,
       0,    71,    72,    74,   109,   110,   112,   114,   115,   113,
     120,   116,    98,   155,     0,   159,   188,   164,   170,   171,
     172,   173,   134,   156,   162,    18,    42,     0,     0,     0,
       0,    26,    24,    20,    30,    21,   198,     0,    18,    12,
      17,   191,   192,   193,   194,   195,   196,   189,   201,     0,
      50,     0,    59,    57,    62,     0,    52,    58,    56,     0,
       0,     0,     0,   197,   137,     0,    18,    82,    87,     0,
       0,     0,     0,     0,   121,   131,   129,   133,     0,   135,
     141,   138,   143,     0,     0,     0,     0,   183,     0,     0,
     175,     0,     0,   176,    65,    66,    75,    84,    88,     0,
       0,     0,   178,    40,     0,     0,     0,     0,     0,     0,
     199,   200,     0,    48,    47,    63,     0,     0,    27,    97,
     158,   125,   128,   198,    18,     0,    86,    81,    85,     0,
       0,     0,     0,     0,   106,     0,     0,     0,     0,     0,
     145,     0,   154,   179,   152,   180,     0,     0,     0,   151,
       0,   149,   181,   174,     0,     0,    77,     0,    95,    93,
     123,   126,   157,     0,    49,    54,    55,    53,    51,    23,
     202,     0,    18,     0,   158,     0,     0,     0,   200,    92,
       0,    91,    89,     0,     0,   102,   101,   100,    99,     0,
       0,   122,   130,   136,   140,   144,     0,   186,   184,   185,
       0,    76,     0,     0,    80,    46,    45,   203,   204,    96,
      94,    26,   124,   127,     0,     0,     0,   107,   153,   150,
      83,    78,    79,    90,   103,   104,    18,   105
>>>>>>> a5e267863b8129c7117a38bd69d2f0980866b4a0
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
<<<<<<< HEAD
      -1,     5,     6,     7,     8,   110,    10,    11,    22,    23,
      40,    41,    42,    43,    71,    72,   111,   112,   113,   114,
     302,   115,   303,   116,   117,   118,   119,   120,   121,   122,
     123,   277,   278,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   205,   133,    44,   134,   135,   136,   137,    80,
     139,   140,   141,   142,   143,   144,   145,   146,   147,    82,
      83,   176
=======
      -1,     4,     5,     6,     7,     8,   129,   130,    11,    20,
      21,    37,    38,    39,    40,    67,    68,   131,   132,   133,
     134,   296,   135,   297,   136,   137,   138,   139,   140,   141,
     325,   326,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   221,   151,    41,   152,   153,   154,   155,    58,   157,
     158,   159,   160,   161,   162,   163,   164,    59,    60,    61,
      97
>>>>>>> a5e267863b8129c7117a38bd69d2f0980866b4a0
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
<<<<<<< HEAD
#define YYPACT_NINF -182
static const short int yypact[] =
{
      78,    10,   209,     4,   317,    88,  -182,  -182,   298,  -182,
     146,    12,  -182,   -43,    48,   237,   107,  -182,  -182,   369,
    -182,   983,  -182,   400,    10,  -182,    84,   249,  -182,  -182,
      50,   120,  -182,   421,    71,    19,  -182,  -182,  -182,  -182,
    -182,     3,  -182,   133,   328,  -182,   983,    12,  -182,  -182,
     381,   305,  -182,  -182,   160,   143,   222,   157,  -182,  -182,
     161,   779,  -182,   124,    63,  -182,  -182,  -182,   447,   271,
     173,   450,  -182,  -182,   188,  -182,  -182,  -182,  -182,  -182,
    -182,  1490,  -182,   144,   439,  -182,   470,  -182,    80,   444,
    -182,   222,   222,   896,   913,   222,   222,   945,   222,   117,
     363,   222,   959,   222,   222,   227,  -182,   829,  -182,  -182,
     263,  -182,   846,  -182,  -182,   913,  -182,   913,  -182,   913,
     272,   291,   378,  -182,  -182,   302,  -182,  -182,  -182,  -182,
    -182,  -182,  -182,  -182,  -182,   294,   335,  -182,   356,  -182,
    -182,  -182,  -182,  -182,  -182,   372,  -182,   511,   191,   194,
     411,   222,   169,  -182,  -182,   226,   222,   414,  -182,   246,
     126,   222,  -182,   222,  -182,  -182,  -182,  -182,  -182,  -182,
    -182,   222,   222,   222,   222,   222,   222,   430,  -182,  -182,
    -182,  1404,   592,   991,   443,   170,   659,   408,  -182,  1490,
    1490,   195,   182,    22,  -182,    -8,  1436,  1183,   491,   455,
     263,   413,   263,  -182,   459,  -182,  1215,   792,     6,    21,
      38,   263,   210,   195,     2,  -182,   506,   462,  1463,   222,
    -182,  -182,   329,  -182,  -182,   474,   488,   999,   170,  -182,
     497,   649,   517,   708,   537,  -182,  1490,   148,  -182,   267,
     469,  -182,  1490,   222,   469,  -182,  -182,   573,  1350,   310,
     476,   476,   476,   476,   476,   476,   377,   454,  -182,     0,
     263,  1242,   278,   522,  -182,    -1,   263,  -182,   -12,    91,
     222,  1008,   527,   222,   222,   133,   913,  -182,  -182,  1040,
     222,  1072,   222,   529,    11,  1080,  -182,  -182,  -182,  -182,
      42,   104,   122,  -182,  1088,  -182,  -182,   222,  -182,  1490,
     913,   222,   532,   913,   551,   291,  -182,    85,  -182,   263,
    -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,
    1490,  -182,  -182,   239,   222,   222,  1120,   531,   170,   560,
     564,  -182,  -182,  -182,   263,   812,  -182,   263,   263,  -182,
    -182,   645,    85,  -182,  1269,   558,   263,  -182,  -182,  1296,
     256,  -182,  -182,  -182,   287,  -182,   712,   913,   566,   587,
    -182,   582,  1377,   263,  1323,   579,  -182,     9,   263,  -182,
     603,   522,  -182,  1152,   222,    80,  -182,  -182,  -182,  -182,
    -182,   590,  -182,  -182,   596,   598,   608,   622,   629,    85,
     263,   578,   624,     9,   639,   609,   670,   631,   644,  -182,
     663,   691,   691,   609,  -182
=======
#define YYPACT_NINF -134
static const short int yypact[] =
{
     453,     9,   216,   247,    24,   453,  -134,  -134,   166,   727,
     405,    47,    -5,  -134,    56,  -134,  -134,  -134,  -134,   354,
    -134,   305,    61,    90,  -134,   103,  -134,   113,  -134,    97,
    -134,    85,  -134,  -134,  -134,    34,  -134,  -134,  -134,  -134,
     114,    13,  -134,   354,   132,    47,   758,   136,    47,  -134,
      91,   161,  -134,  -134,  -134,  -134,  -134,   323,  -134,  1108,
    -134,   181,    56,   410,   308,   126,   165,   337,  -134,   465,
    -134,    41,    34,  -134,   193,   208,   213,  -134,   227,   275,
    -134,   234,   410,  -134,   410,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,   410,   410,   410,   410,   410,   410,   241,  1108,
     282,   255,   342,   121,   410,   252,   264,   141,   163,  -134,
     410,   410,    -3,   266,   410,   410,    10,   538,   690,   271,
     538,   196,   410,   538,   244,  -134,   314,  -134,  -134,   277,
     279,  -134,   529,  -134,  -134,   593,  -134,   593,  -134,   593,
      79,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,   294,   300,  -134,   328,  -134,  -134,  -134,
    -134,  -134,  -134,   332,  -134,   941,   126,   410,   319,   349,
     377,   338,   355,    47,  -134,   338,  -134,   428,   972,  -134,
    1108,   356,   356,   356,   356,   356,   356,  -134,   229,   317,
    -134,   360,   357,  -134,  1108,   410,  -134,   357,  -134,    23,
     330,   369,   708,   238,   277,    21,   754,   817,   848,     8,
      25,   941,   593,   786,  1065,    60,   372,   277,   335,   277,
     387,  -134,  1096,   246,    45,    92,    -2,   277,   474,    35,
    -134,   452,   393,  1003,  -134,  -134,   192,  -134,  -134,   450,
     708,   400,  -134,  1108,   321,   406,   493,   412,   415,   402,
    -134,  -134,   723,  -134,  -134,  1108,   514,   418,   177,  -134,
     499,   277,  -134,   416,   910,   410,  -134,  -134,  -134,   578,
     410,   410,    93,    93,  -134,   611,   410,   626,   410,   271,
     410,   644,  -134,  -134,  -134,  -134,   206,   112,   151,  -134,
     659,  -134,  -134,  -134,   593,   410,   424,   593,    14,  -134,
     277,  -134,  -134,   466,  -134,  -134,   476,  -134,  -134,   338,
    -134,   502,  1034,   154,  -134,   677,   475,   708,   484,   277,
     242,   277,   277,   479,   497,  -134,  -134,  -134,  -134,    43,
     509,  1108,   172,   277,  -134,  1108,   258,  -134,  -134,  -134,
     186,  -134,   879,   593,   503,  -134,  -134,  -134,  -134,    14,
    -134,    -1,   277,  -134,   410,   114,   593,  -134,  -134,  -134,
    -134,  -134,  -134,   277,  -134,  -134,   401,  -134
>>>>>>> a5e267863b8129c7117a38bd69d2f0980866b4a0
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
<<<<<<< HEAD
    -182,  -182,   665,    92,  -182,   -76,    45,   656,  -182,   675,
     636,  -182,  -182,  -182,   -51,   241,   -40,  -182,   -50,  -182,
     343,  -182,  -182,  -182,  -182,  -182,  -182,  -181,   478,   115,
    -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,
    -182,  -182,   431,  -182,  -182,  -113,  -182,  -182,  -182,   -60,
    -182,  -182,  -182,  -182,  -182,   -99,  -182,  -182,   -56,  -182,
    -182,  -182
=======
    -134,  -134,  -134,   511,   353,  -134,   -29,   520,   -12,  -134,
    -134,   480,  -134,  -134,  -134,   -52,   -82,   -37,  -134,  -128,
    -134,   178,  -134,  -134,  -134,  -134,  -134,  -134,   -86,  -134,
     251,   263,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,   265,  -134,  -134,  -133,  -134,  -134,  -134,    71,  -134,
    -134,  -134,  -134,  -134,  -121,  -134,  -134,    17,  -134,  -134,
    -134
>>>>>>> a5e267863b8129c7117a38bd69d2f0980866b4a0
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
<<<<<<< HEAD
#define YYTABLE_NINF -215
static const short int yytable[] =
{
      81,   138,   263,    62,    58,    14,    86,  -215,   217,   293,
     294,   272,   348,   275,   219,     9,    74,  -215,    27,   324,
    -215,    26,   200,   202,    55,   332,   208,   210,   211,   227,
     227,    56,   181,   194,   138,   189,   190,   194,   186,   196,
     197,   274,   138,   287,   195,   206,   219,   138,   276,   160,
     155,   218,   138,    28,   156,   138,   331,   138,   288,   138,
      59,   160,   221,   160,  -215,   222,   -99,   223,   150,   224,
     264,    75,    50,    76,    77,   151,   289,    78,    79,   351,
      57,     1,     2,     3,   247,    74,   267,   180,    17,    48,
      87,     1,     2,     3,   272,   236,    68,   232,   234,   219,
     242,   239,    25,   160,   248,   249,   260,   250,    31,   266,
     269,    51,   219,    39,   308,   251,   252,   253,   254,   255,
     256,   186,    74,   194,   152,    52,   261,     4,   333,   310,
     159,    74,    54,   246,    60,   181,   291,     4,    39,    61,
      75,   352,    76,    77,    73,   263,    78,    79,   371,   316,
       2,     3,   309,   177,    24,   317,   155,   181,   264,   353,
     156,   292,    84,   299,    85,    69,   343,   194,   264,   201,
      70,    87,   264,    70,   237,    74,   238,    75,   157,    76,
      77,   264,    70,    78,    79,   148,    75,   320,    76,    77,
     271,   272,    78,    79,   334,     4,   231,   337,   338,   233,
      74,   273,   180,   263,    70,   371,   346,    70,   193,   104,
      12,   194,   199,   366,    13,   290,   138,   209,   186,   194,
     341,   194,   216,    70,   344,   194,   340,    74,   349,   369,
      75,   240,    76,    77,   194,   339,    78,    79,    29,    70,
     138,   249,    30,   138,    74,   356,   360,   361,   363,   160,
     355,   244,   368,   358,     9,    75,    49,    76,    77,    70,
     366,    78,    79,   212,   373,   272,   194,   362,   318,   364,
      75,   219,    76,    77,   319,   159,    78,    79,   154,   155,
     225,   138,    75,   156,    76,    77,  -215,   327,    78,    79,
     328,   376,   186,   377,   378,   373,   272,   138,   390,    75,
     226,    76,    77,  -173,    19,    78,    79,   379,    20,    21,
       9,   161,    67,   194,   186,  -207,  -207,  -207,  -207,   391,
    -207,    15,    16,   186,  -207,  -207,  -207,  -207,  -207,    63,
    -207,  -207,   162,    64,  -207,  -207,  -207,   163,  -207,  -207,
    -207,  -207,  -207,   300,   230,   301,  -207,  -207,  -207,  -207,
    -207,   164,   165,   166,   167,   168,   169,   170,   171,   229,
     172,   173,   174,   175,   203,  -177,  -207,  -207,   204,  -207,
    -207,  -207,  -207,  -207,  -207,  -207,  -207,  -207,   161,    32,
      21,  -174,  -205,  -205,  -205,  -205,   227,  -205,    66,    24,
     228,  -205,  -205,  -205,  -205,  -205,   241,  -205,  -205,   162,
     245,  -205,  -205,  -205,   163,  -205,  -205,  -205,  -205,  -205,
      45,    46,   235,  -205,  -205,  -205,  -205,  -205,   164,   165,
     166,   167,   168,   169,   170,   171,   243,   172,   173,   174,
     175,    53,    46,  -205,  -205,   257,  -205,  -205,  -205,  -205,
    -205,  -205,  -205,  -205,  -205,   182,   178,   155,   265,  -214,
    -214,   156,   183,   184,   153,    24,   185,   158,   159,  -214,
     270,  -214,  -214,   227,  -214,   282,  -214,   283,  -214,   296,
    -214,  -214,  -214,  -214,  -214,  -214,  -214,   179,   159,   304,
     186,   156,  -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,
    -214,  -214,  -214,   306,  -214,  -214,   187,  -214,   162,   281,
     272,   188,   311,  -214,  -214,   160,  -214,  -214,  -214,  -214,
    -214,  -214,   161,   295,   227,  -215,   -20,   -20,   -20,   -20,
     167,   168,   169,   170,   313,   159,   -20,   186,   -20,   -20,
    -215,   -20,   336,   162,   204,   -20,   367,   -20,   163,   -20,
     -20,   -20,   -20,   -20,   315,   159,   357,   -20,   -20,   -20,
     -20,   -20,   164,   165,   166,   167,   168,   169,   170,   171,
     359,   172,   173,   174,   175,   370,   373,   272,   -20,   372,
     -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   161,
     321,   219,   301,  -207,  -207,   258,  -207,  -215,   385,   382,
     219,  -109,   381,  -207,   186,  -207,  -207,   259,  -207,   330,
     162,   392,  -207,   393,  -207,   163,  -207,  -207,  -207,  -207,
    -207,  -215,   388,   394,  -207,   186,  -207,  -207,  -207,   164,
     165,   166,   167,   168,   169,   170,   171,   395,   172,   173,
     174,   175,  -215,   397,   396,  -207,   401,  -207,  -207,  -207,
    -207,  -207,  -207,  -207,  -207,  -207,   375,  -215,   398,   402,
      89,    61,    75,   -20,    76,    77,   312,   155,    78,    79,
      91,   156,    92,    93,   268,    94,  -215,   162,   403,    95,
      18,    96,   163,    97,    98,    99,   100,   101,  -215,   400,
      47,   102,    65,   103,   104,   105,   164,   165,   166,   167,
     168,   169,   170,   171,    33,   172,   173,   174,   175,  -215,
     330,   380,   -20,   305,   106,    75,   107,    76,    77,   108,
     109,    78,    79,   161,   347,   314,   155,   -87,   -87,    75,
     156,    76,    77,     0,     0,    78,    79,   -87,     0,   -87,
     -87,     0,   -87,     0,   162,     0,   -87,     0,   -87,   163,
     -87,   -87,   -87,   -87,   -87,     0,     0,     0,   -87,     0,
     -87,   -87,   -87,   164,   165,   166,   167,   168,   169,   170,
     171,     0,   172,   173,   174,   175,     0,     0,     0,     0,
       0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
      88,     0,     0,     0,    89,    61,     0,     0,     0,    90,
       0,     0,     0,     0,    91,     0,    92,    93,     0,    94,
     285,   272,     0,    95,     0,    96,     0,    97,    98,    99,
     100,   101,     0,     0,     0,   102,     0,   103,   104,   105,
     373,   272,     0,     0,     0,     0,     0,     0,   186,   286,
     213,   374,     0,     0,   214,     0,   215,     0,   106,    75,
     107,    76,    77,   108,   109,    78,    79,    88,   186,     0,
       0,    89,    61,   160,     0,     0,   220,     0,     0,     0,
       0,    91,     0,    92,    93,   102,    94,   103,   104,   105,
      95,     0,    96,     0,    97,    98,    99,   100,   101,     0,
       0,     0,   102,     0,   103,   104,   105,     0,     0,    75,
     107,    76,    77,     0,     0,    78,    79,   191,     0,     0,
       0,   192,     0,     0,     0,   106,    75,   107,    76,    77,
     108,   109,    78,    79,    88,     0,     0,     0,    89,    61,
       0,     0,     0,     0,     0,     0,     0,     0,    91,     0,
      92,    93,   102,    94,   103,     0,   105,    95,     0,    96,
       0,    97,    98,    99,   100,   101,   191,     0,     0,   102,
     198,   103,   104,   105,     0,     0,    75,   107,    76,    77,
     191,     0,    78,    79,   207,     0,     0,     0,     0,     0,
       0,     0,   106,    75,   107,    76,    77,   108,   109,    78,
      79,   102,     0,   103,    34,   105,     0,     2,    35,     0,
       0,     0,   191,     0,     0,   102,   262,   103,     0,   105,
     191,     0,     0,     0,   307,    75,   107,    76,    77,   191,
       0,    78,    79,   335,     0,     0,    36,    37,    38,    75,
     107,    76,    77,     0,     0,    78,    79,   102,     0,   103,
       0,   105,     4,     0,     0,   102,     0,   103,     0,   105,
       0,   191,     0,     0,   102,   342,   103,     0,   105,     0,
       0,    75,   107,    76,    77,     0,     0,    78,    79,    75,
     107,    76,    77,     0,     0,    78,    79,     0,    75,   107,
      76,    77,     0,   191,    78,    79,   102,   345,   103,     0,
     105,   191,     0,     0,     0,   350,     0,     0,     0,   191,
       0,     0,     0,   354,     0,     0,     0,     0,     0,     0,
      75,   107,    76,    77,     0,     0,    78,    79,   102,     0,
     103,     0,   105,     0,     0,     0,   102,     0,   103,     0,
     105,   191,     0,     0,   102,   365,   103,     0,   105,     0,
       0,     0,    75,   107,    76,    77,     0,     0,    78,    79,
      75,   107,    76,    77,     0,     0,    78,    79,    75,   107,
      76,    77,     0,   191,    78,    79,   102,   389,   103,     0,
     105,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,   107,    76,    77,   161,     0,    78,    79,   102,     0,
     103,   280,   105,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   162,     0,     0,     0,     0,
     163,     0,    75,   107,    76,    77,   161,     0,    78,    79,
       0,     0,     0,   284,   164,   165,   166,   167,   168,   169,
     170,   171,     0,   172,   173,   174,   175,   162,     0,     0,
    -132,     0,   163,  -215,     0,     0,     0,     0,     0,     0,
     325,     0,     0,     0,     0,     0,   164,   165,   166,   167,
     168,   169,   170,   171,   162,   172,   173,   174,   175,   163,
     161,     0,  -155,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   164,   165,   166,   167,   168,   169,   170,
     171,   162,   172,   173,   174,   175,   163,   161,     0,   -20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     164,   165,   166,   167,   168,   169,   170,   171,   162,   172,
     173,   174,   175,   163,   161,     0,  -133,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   164,   165,   166,
     167,   168,   169,   170,   171,   162,   172,   173,   174,   175,
     163,   161,     0,  -156,     0,     0,     0,   322,   -20,     0,
       0,     0,     0,     0,   164,   165,   166,   167,   168,   169,
     170,   171,   162,   172,   173,   174,   175,   163,   161,     0,
    -158,     0,     0,     0,   383,   -20,     0,     0,     0,     0,
       0,   164,   165,   166,   167,   168,   169,   170,   171,   162,
     172,   173,   174,   175,   163,   161,     0,     0,     0,     0,
       0,   258,     0,     0,     0,     0,     0,     0,   164,   165,
     166,   167,   168,   169,   170,   171,   162,   172,   173,   174,
     175,   163,     0,     0,     0,     0,     0,  -215,     0,     0,
       0,     0,     0,     0,     0,   164,   165,   166,   167,   168,
     169,   170,   171,     0,   172,   173,   174,   175,   162,     0,
       0,   279,     0,   163,   297,     0,     0,     0,     0,     0,
     298,     0,     0,     0,     0,     0,     0,   164,   165,   166,
     167,   168,   169,   170,   171,   162,   172,   173,   174,   175,
     163,  -215,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   164,   165,   166,   167,   168,   169,
     170,   171,   162,   172,   173,   174,   175,   163,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   164,   165,   166,   167,   168,   169,   170,   171,     0,
     172,   173,   174,   175
=======
#define YYTABLE_NINF -178
static const short int yytable[] =
{
      57,    28,   209,    70,   235,   232,    82,   236,    76,   237,
      45,   238,   102,    48,     9,   215,   269,   257,    71,   169,
     170,   193,   205,   257,    16,   198,   210,  -158,   270,   239,
     216,   256,   257,   239,   121,   225,   122,   285,   124,    65,
     231,   265,   289,   290,   257,   271,   166,   121,    66,   122,
     177,   124,   257,    82,   167,    66,    27,    29,    52,   126,
      53,    54,    30,   173,    55,    56,    44,   259,   277,   257,
      79,    52,   126,    53,    54,    72,  -178,    55,    56,   204,
      99,   262,   232,   283,   273,    79,   165,   239,   217,   219,
      62,    15,   224,   226,   227,    46,   178,    79,    63,   180,
     239,   181,    50,   168,    51,    79,   299,   240,    47,   182,
     183,   184,   185,   186,   187,   323,   246,   231,    49,   301,
      82,   194,  -178,   259,    69,   206,   192,   207,   208,   211,
     284,   213,   214,   211,   103,    66,   259,   222,   165,   104,
     156,    74,   330,   233,   259,    78,   197,    64,   259,   165,
     338,   324,   165,    79,   165,    66,   165,   259,    52,   107,
      53,    54,   315,   257,    55,    56,   341,    80,   199,   344,
     105,   200,   201,   261,   177,   272,   288,    18,    19,   156,
     315,   257,   350,   156,   243,   315,   316,   156,    45,   339,
      98,   202,   156,   359,   315,   257,   353,   156,   171,   287,
     121,   223,   122,   156,   124,   317,   156,   294,   156,   295,
     156,   300,   255,   172,   103,   361,    79,   211,   174,   104,
     264,    12,    13,   311,    52,   203,    53,    54,   365,   165,
      55,    56,   175,   121,  -178,   122,   319,   124,   367,    79,
     179,   321,   322,   229,   337,   263,   188,  -177,    79,   333,
     315,   257,    14,    15,   281,   257,   211,    52,   126,    53,
      54,   190,   354,    55,    56,   195,   315,   257,    79,   312,
     196,   156,   212,   211,   156,   121,   220,   122,   123,   124,
      50,   228,   176,   156,   282,    82,   211,    25,   352,   189,
     103,  -178,   211,   331,   211,   104,   358,   335,   211,    52,
     126,    53,    54,  -160,    79,    55,    56,   211,    79,   241,
     156,   165,   342,   100,   165,   101,    42,    43,   364,   229,
      79,   230,    66,   253,   244,   363,   245,   156,   303,   103,
      81,    82,   211,    66,   104,   258,    52,  -163,    53,    54,
     156,  -161,    55,    56,   106,   107,   156,    76,   156,   191,
     107,   121,   156,   122,   123,   124,   247,   107,     2,    31,
     165,   156,    24,    26,   249,   156,   254,   121,   156,   122,
     104,   124,    36,   366,   260,    52,   126,    53,    54,    83,
     239,    55,    56,   165,   248,   107,   156,   278,    32,    33,
      34,    52,   126,    53,    54,   279,    36,    55,    56,    77,
     292,    88,    89,    90,    91,   302,   108,   309,   242,     2,
       3,    69,   304,    25,   156,    50,    35,   110,   307,   111,
     112,   308,   113,   314,    83,  -175,   114,   156,   115,    84,
     116,   117,   118,   119,   120,   250,    82,   156,   121,   343,
     122,   123,   124,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,   298,     1,     2,     3,   291,
     239,   125,    52,   126,    53,    54,   127,   128,    55,    56,
     108,    52,   345,    53,    54,    69,   109,    55,    56,   286,
     351,   110,   346,   111,   112,   355,   113,   121,    66,   122,
     114,   124,   115,  -174,   116,   117,   118,   119,   120,   305,
     306,   107,   121,   356,   122,   123,   124,    75,    76,   347,
      82,    52,   126,    53,    54,   357,    17,    55,    56,   313,
     295,    10,   362,    73,   327,   125,    52,   126,    53,    54,
     127,   128,    55,    56,   108,    52,   328,    53,    54,    69,
     234,    55,    56,  -178,   334,   110,     0,   111,   112,     0,
     113,   121,     0,   122,   114,   124,   115,     0,   116,   117,
     118,   119,   120,     0,     0,     0,   121,     0,   122,   123,
     124,     0,     0,     0,     0,    52,   126,    53,    54,     0,
       0,    55,    56,   320,     0,     0,     0,     0,     0,   125,
      52,   126,    53,    54,   127,   128,    55,    56,   108,  -178,
       0,  -178,  -178,    69,     0,  -178,  -178,     0,     0,   110,
       0,   111,   112,     0,   113,   121,   329,   122,   114,   124,
     115,     0,   116,   117,   118,   119,   120,     0,     0,     0,
     121,   332,   122,   123,   124,     0,     0,     0,     0,    52,
     126,    53,    54,     0,     0,    55,    56,     0,   121,   336,
     122,     0,   124,   125,    52,   126,    53,    54,   127,   128,
      55,    56,     0,   121,   340,   122,     0,   124,     0,     0,
       0,     0,    52,   126,    53,    54,     0,     0,    55,    56,
       0,   121,   349,   122,     0,   124,     0,    52,   126,    53,
      54,     0,     0,    55,    56,    50,   121,     0,   122,     0,
     124,     0,     0,     0,     0,    52,   126,    53,    54,     0,
       0,    55,    56,    50,   121,     0,   122,     0,   124,     0,
      52,   126,    53,    54,     0,     0,    55,    56,    50,     0,
     310,     2,     3,     0,     0,    22,    23,     0,    52,   126,
      53,    54,   218,     0,    55,    56,     0,     0,   123,     0,
       0,    52,     0,    53,    54,     0,     0,    55,    56,     0,
     266,   242,     2,     3,     0,     0,    75,    76,     0,    52,
       0,    53,    54,     0,     0,    55,    56,    83,     0,     0,
       0,     0,    84,     0,    52,     0,    53,    54,     0,     0,
      55,    56,   274,     0,     0,     0,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,     0,    83,
       0,     0,   275,     0,    84,     0,     0,     0,     0,     0,
       0,     0,     0,   267,     0,     0,     0,     0,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      83,     0,     0,     0,     0,    84,     0,     0,     0,     0,
       0,     0,     0,     0,   268,     0,     0,     0,     0,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    83,     0,     0,     0,     0,    84,     0,     0,     0,
       0,     0,     0,     0,     0,   360,     0,     0,     0,     0,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    83,     0,     0,     0,     0,    84,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   318,     0,  -176,
       0,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    83,     0,     0,     0,     0,    84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   242,     0,
       0,     0,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    83,     0,     0,     0,     0,    84,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   251,
       0,     0,     0,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    83,     0,     0,     0,     0,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     293,     0,     0,     0,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    83,     0,     0,     0,
       0,    84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   348,     0,     0,     0,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    83,     0,     0,
       0,     0,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   276,     0,     0,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    83,     0,
       0,     0,     0,    84,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   280,     0,     0,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    83,
       0,     0,     0,     0,    84,     0,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,    84,     0,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96
>>>>>>> a5e267863b8129c7117a38bd69d2f0980866b4a0
};

static const short int yycheck[] =
{
<<<<<<< HEAD
      56,    61,   183,    43,     1,     1,    57,     8,   107,     7,
       8,     9,     1,    21,     8,     5,     5,     8,    61,    19,
       1,     9,    98,    99,     5,    37,   102,   103,   104,     8,
       8,    12,    88,    93,    94,    91,    92,    97,    36,    95,
      96,    19,   102,    37,    94,   101,     8,   107,    56,    61,
       8,   107,   112,     5,    12,   115,    57,   117,    37,   119,
      57,    61,   112,    61,     1,   115,    57,   117,     5,   119,
     183,    60,    27,    62,    63,    12,    38,    66,    67,    37,
      61,     3,     4,     5,   160,     5,   185,     7,     0,     5,
      10,     3,     4,     5,     9,   151,    51,   148,   149,     8,
     156,   152,    10,    61,   160,   161,   182,   163,     1,   185,
     186,    61,     8,    21,   227,   171,   172,   173,   174,   175,
     176,    36,     5,   183,    61,     5,   182,    49,    37,   228,
       8,     5,    61,     7,     1,   191,   212,    49,    46,     6,
      60,    37,    62,    63,     1,   326,    66,    67,   329,     1,
       4,     5,   228,     9,     8,     7,     8,   213,   271,    37,
      12,   212,     5,   219,     7,     5,   279,   227,   281,    52,
      13,    10,   285,    13,     5,     5,     7,    60,     5,    62,
      63,   294,    13,    66,    67,    61,    60,   243,    62,    63,
       8,     9,    66,    67,   270,    49,     5,   273,   274,     5,
       5,    19,     7,   384,    13,   386,   282,    13,    93,    39,
       1,   271,    97,   326,     5,     5,   276,   102,    36,   279,
     276,   281,   107,    13,   280,   285,   276,     5,   284,   328,
      60,     5,    62,    63,   294,   275,    66,    67,     1,    13,
     300,   297,     5,   303,     5,   301,     7,   323,   324,    61,
     300,     5,   328,   303,     5,    60,     7,    62,    63,    13,
     373,    66,    67,    36,     8,     9,   326,   323,     1,   325,
      60,     8,    62,    63,     7,     8,    66,    67,     7,     8,
       8,   341,    60,    12,    62,    63,     8,     9,    66,    67,
      12,   341,    36,    37,     7,     8,     9,   357,   374,    60,
       9,    62,    63,     9,     6,    66,    67,   357,    10,    11,
       5,     1,     7,   373,    36,     5,     6,     7,     8,   375,
      10,     4,     5,    36,    14,    15,    16,    17,    18,     1,
      20,    21,    22,     5,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    14,     9,    16,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    57,
      50,    51,    52,    53,     1,     9,    56,    57,     5,    59,
      60,    61,    62,    63,    64,    65,    66,    67,     1,    10,
      11,     9,     5,     6,     7,     8,     8,    10,     7,     8,
      12,    14,    15,    16,    17,    18,   155,    20,    21,    22,
     159,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,     1,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    12,    50,    51,    52,
      53,    10,    11,    56,    57,     5,    59,    60,    61,    62,
      63,    64,    65,    66,    67,     1,     7,     8,     5,     5,
       6,    12,     8,     9,     7,     8,    12,     7,     8,    15,
      52,    17,    18,     8,    20,    52,    22,     8,    24,     7,
      26,    27,    28,    29,    30,    31,    32,     7,     8,     5,
      36,    12,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     5,    50,    51,    52,    53,    22,     8,
       9,    57,     5,    59,    60,    61,    62,    63,    64,    65,
      66,    67,     1,     7,     8,    61,     5,     6,     7,     8,
      44,    45,    46,    47,     7,     8,    15,    36,    17,    18,
       8,    20,     5,    22,     5,    24,     5,    26,    27,    28,
      29,    30,    31,    32,     7,     8,    14,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
       9,    50,    51,    52,    53,     5,     8,     9,    57,     5,
      59,    60,    61,    62,    63,    64,    65,    66,    67,     1,
       7,     8,    16,     5,     6,     7,     8,     8,     9,     7,
       8,    12,     5,    15,    36,    17,    18,     5,    20,     9,
      22,     5,    24,     5,    26,    27,    28,    29,    30,    31,
      32,     8,     9,     5,    36,    36,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     5,    50,    51,
      52,    53,     8,     9,     5,    57,     5,    59,    60,    61,
      62,    63,    64,    65,    66,    67,     1,     8,     9,     5,
       5,     6,    60,     8,    62,    63,     7,     8,    66,    67,
      15,    12,    17,    18,     5,    20,    57,    22,     5,    24,
       5,    26,    27,    28,    29,    30,    31,    32,     8,     9,
      24,    36,    46,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    19,    50,    51,    52,    53,     8,
       9,   358,    57,   225,    59,    60,    61,    62,    63,    64,
      65,    66,    67,     1,   283,     7,     8,     5,     6,    60,
      12,    62,    63,    -1,    -1,    66,    67,    15,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    24,    -1,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    36,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    50,    51,    52,    53,    -1,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    64,    65,    66,    67,
       1,    -1,    -1,    -1,     5,     6,    -1,    -1,    -1,    10,
      -1,    -1,    -1,    -1,    15,    -1,    17,    18,    -1,    20,
       8,     9,    -1,    24,    -1,    26,    -1,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    36,    -1,    38,    39,    40,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,
       1,    19,    -1,    -1,     5,    -1,     7,    -1,    59,    60,
      61,    62,    63,    64,    65,    66,    67,     1,    36,    -1,
      -1,     5,     6,    61,    -1,    -1,    10,    -1,    -1,    -1,
      -1,    15,    -1,    17,    18,    36,    20,    38,    39,    40,
      24,    -1,    26,    -1,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    36,    -1,    38,    39,    40,    -1,    -1,    60,
      61,    62,    63,    -1,    -1,    66,    67,     1,    -1,    -1,
      -1,     5,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,     1,    -1,    -1,    -1,     5,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,    -1,
      17,    18,    36,    20,    38,    -1,    40,    24,    -1,    26,
      -1,    28,    29,    30,    31,    32,     1,    -1,    -1,    36,
       5,    38,    39,    40,    -1,    -1,    60,    61,    62,    63,
       1,    -1,    66,    67,     5,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    36,    -1,    38,     1,    40,    -1,     4,     5,    -1,
      -1,    -1,     1,    -1,    -1,    36,     5,    38,    -1,    40,
       1,    -1,    -1,    -1,     5,    60,    61,    62,    63,     1,
      -1,    66,    67,     5,    -1,    -1,    33,    34,    35,    60,
      61,    62,    63,    -1,    -1,    66,    67,    36,    -1,    38,
      -1,    40,    49,    -1,    -1,    36,    -1,    38,    -1,    40,
      -1,     1,    -1,    -1,    36,     5,    38,    -1,    40,    -1,
      -1,    60,    61,    62,    63,    -1,    -1,    66,    67,    60,
      61,    62,    63,    -1,    -1,    66,    67,    -1,    60,    61,
      62,    63,    -1,     1,    66,    67,    36,     5,    38,    -1,
      40,     1,    -1,    -1,    -1,     5,    -1,    -1,    -1,     1,
      -1,    -1,    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    61,    62,    63,    -1,    -1,    66,    67,    36,    -1,
      38,    -1,    40,    -1,    -1,    -1,    36,    -1,    38,    -1,
      40,     1,    -1,    -1,    36,     5,    38,    -1,    40,    -1,
      -1,    -1,    60,    61,    62,    63,    -1,    -1,    66,    67,
      60,    61,    62,    63,    -1,    -1,    66,    67,    60,    61,
      62,    63,    -1,     1,    66,    67,    36,     5,    38,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    61,    62,    63,     1,    -1,    66,    67,    36,    -1,
      38,     8,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,
      27,    -1,    60,    61,    62,    63,     1,    -1,    66,    67,
      -1,    -1,    -1,     8,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    50,    51,    52,    53,    22,    -1,    -1,
      57,    -1,    27,     1,    -1,    -1,    -1,    -1,    -1,    -1,
       8,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,
      45,    46,    47,    48,    22,    50,    51,    52,    53,    27,
       1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    22,    50,    51,    52,    53,    27,     1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    22,    50,
      51,    52,    53,    27,     1,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    22,    50,    51,    52,    53,
      27,     1,    -1,    57,    -1,    -1,    -1,     7,     8,    -1,
      -1,    -1,    -1,    -1,    41,    42,    43,    44,    45,    46,
      47,    48,    22,    50,    51,    52,    53,    27,     1,    -1,
      57,    -1,    -1,    -1,     7,     8,    -1,    -1,    -1,    -1,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    22,
      50,    51,    52,    53,    27,     1,    -1,    -1,    -1,    -1,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      43,    44,    45,    46,    47,    48,    22,    50,    51,    52,
      53,    27,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,    51,    52,    53,    22,    -1,
      -1,    25,    -1,    27,     1,    -1,    -1,    -1,    -1,    -1,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    22,    50,    51,    52,    53,
      27,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    42,    43,    44,    45,    46,
      47,    48,    22,    50,    51,    52,    53,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,    51,    52,    53
=======
      29,     6,     5,    40,   132,   126,     8,   135,     9,   137,
      22,   139,    64,    25,     5,     5,     8,     9,     5,    71,
      72,   103,   108,     9,     0,   107,   112,    28,    20,     8,
     116,     8,     9,     8,    37,   121,    39,    39,    41,     5,
     126,    20,     7,     8,     9,    20,     5,    37,    14,    39,
      79,    41,     9,     8,    13,    14,     9,    62,    61,    62,
      63,    64,     6,    75,    67,    68,     5,   200,     8,     9,
      62,    61,    62,    63,    64,    62,    62,    67,    68,   108,
      63,   202,   203,    38,   212,    62,    69,     8,   117,   118,
       5,     6,   121,   122,   123,     5,    79,    62,    13,    82,
       8,    84,     5,    62,     7,    62,   239,    28,     5,    92,
      93,    94,    95,    96,    97,    22,   168,   203,     5,   240,
       8,   104,    62,   256,    10,   108,     5,   110,   111,   112,
      38,   114,   115,   116,     8,    14,   269,   120,   121,    13,
      69,     9,   275,   126,   277,     9,     5,    62,   281,   132,
      38,    58,   135,    62,   137,    14,   139,   290,    61,     8,
      63,    64,     8,     9,    67,    68,   294,     6,     5,   297,
       5,     8,     9,   202,   203,   212,   228,    11,    12,   108,
       8,     9,   315,   112,   167,     8,     9,   116,   200,    38,
       9,    28,   121,     7,     8,     9,   317,   126,     5,   228,
      37,     5,    39,   132,    41,    28,   135,    15,   137,    17,
     139,   240,   195,     5,     8,   343,    62,   200,     5,    13,
     203,     5,     6,   252,    61,    62,    63,    64,   356,   212,
      67,    68,     5,    37,    62,    39,   265,    41,   366,    62,
       6,   270,   271,     5,    38,     7,     5,     9,    62,   278,
       8,     9,     5,     6,     8,     9,   239,    61,    62,    63,
      64,     6,    20,    67,    68,    13,     8,     9,    62,   252,
       6,   200,     6,   256,   203,    37,     5,    39,    40,    41,
       5,    37,     7,   212,    38,     8,   269,     8,   317,     7,
       8,    62,   275,   276,   277,    13,    38,   280,   281,    61,
      62,    63,    64,     9,    62,    67,    68,   290,    62,     9,
     239,   294,   295,     5,   297,     7,    11,    12,   355,     5,
      62,     7,    14,     6,     5,   354,     7,   256,     7,     8,
       7,     8,   315,    14,    13,     5,    61,     9,    63,    64,
     269,     9,    67,    68,     7,     8,   275,     9,   277,     7,
       8,    37,   281,    39,    40,    41,     7,     8,     4,     5,
     343,   290,     9,    10,     9,   294,     6,    37,   297,    39,
      13,    41,    19,   356,     5,    61,    62,    63,    64,    23,
       8,    67,    68,   366,     7,     8,   315,    52,    34,    35,
      36,    61,    62,    63,    64,     8,    43,    67,    68,    46,
       7,    45,    46,    47,    48,     5,     5,     5,     7,     4,
       5,    10,     6,     8,   343,     5,    62,    16,     6,    18,
      19,     6,    21,     5,    23,     9,    25,   356,    27,    28,
      29,    30,    31,    32,    33,     7,     8,   366,    37,    15,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,     5,     3,     4,     5,     7,
       8,    60,    61,    62,    63,    64,    65,    66,    67,    68,
       5,    61,     6,    63,    64,    10,    11,    67,    68,     5,
       5,    16,     6,    18,    19,     6,    21,    37,    14,    39,
      25,    41,    27,     9,    29,    30,    31,    32,    33,     6,
       7,     8,    37,     6,    39,    40,    41,     8,     9,     7,
       8,    61,    62,    63,    64,     6,     5,    67,    68,     5,
      17,     1,   344,    43,   273,    60,    61,    62,    63,    64,
      65,    66,    67,    68,     5,    61,   273,    63,    64,    10,
      11,    67,    68,     5,   279,    16,    -1,    18,    19,    -1,
      21,    37,    -1,    39,    25,    41,    27,    -1,    29,    30,
      31,    32,    33,    -1,    -1,    -1,    37,    -1,    39,    40,
      41,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    -1,
      -1,    67,    68,     5,    -1,    -1,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    67,    68,     5,    61,
      -1,    63,    64,    10,    -1,    67,    68,    -1,    -1,    16,
      -1,    18,    19,    -1,    21,    37,     5,    39,    25,    41,
      27,    -1,    29,    30,    31,    32,    33,    -1,    -1,    -1,
      37,     5,    39,    40,    41,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    -1,    67,    68,    -1,    37,     5,
      39,    -1,    41,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    -1,    37,     5,    39,    -1,    41,    -1,    -1,
      -1,    -1,    61,    62,    63,    64,    -1,    -1,    67,    68,
      -1,    37,     5,    39,    -1,    41,    -1,    61,    62,    63,
      64,    -1,    -1,    67,    68,     5,    37,    -1,    39,    -1,
      41,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    -1,
      -1,    67,    68,     5,    37,    -1,    39,    -1,    41,    -1,
      61,    62,    63,    64,    -1,    -1,    67,    68,     5,    -1,
       7,     4,     5,    -1,    -1,     8,     9,    -1,    61,    62,
      63,    64,    52,    -1,    67,    68,    -1,    -1,    40,    -1,
      -1,    61,    -1,    63,    64,    -1,    -1,    67,    68,    -1,
       6,     7,     4,     5,    -1,    -1,     8,     9,    -1,    61,
      -1,    63,    64,    -1,    -1,    67,    68,    23,    -1,    -1,
      -1,    -1,    28,    -1,    61,    -1,    63,    64,    -1,    -1,
      67,    68,     6,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    23,
      -1,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     6,    -1,    -1,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      23,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    23,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    23,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,     9,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    23,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    23,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,
      -1,    -1,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    23,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       7,    -1,    -1,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    23,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     7,    -1,    -1,    -1,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    23,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     8,    -1,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    23,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,    -1,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    23,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    28,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53
>>>>>>> a5e267863b8129c7117a38bd69d2f0980866b4a0
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
<<<<<<< HEAD
       0,     3,     4,     5,    49,    79,    80,    81,    82,     5,
      84,    85,     1,     5,     1,     4,     5,     0,    80,     6,
      10,    11,    86,    87,     8,    81,     9,    61,     5,     1,
       5,     1,    10,    87,     1,     5,    33,    34,    35,    81,
      88,    89,    90,    91,   122,    10,    11,    85,     5,     7,
      84,    61,     5,    10,    61,     5,    12,    61,     1,    57,
       1,     6,    94,     1,     5,    88,     7,     7,    84,     5,
      13,    92,    93,     1,     5,    60,    62,    63,    66,    67,
     127,   136,   137,   138,     5,     7,    92,    10,     1,     5,
      10,    15,    17,    18,    20,    24,    26,    28,    29,    30,
      31,    32,    36,    38,    39,    40,    59,    61,    64,    65,
      83,    94,    95,    96,    97,    99,   101,   102,   103,   104,
     105,   106,   107,   108,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   121,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,    61,     1,
       5,    12,    61,     7,     7,     8,    12,     5,     7,     8,
      61,     1,    22,    27,    41,    42,    43,    44,    45,    46,
      47,    48,    50,    51,    52,    53,   139,     9,     7,     7,
       7,   136,     1,     8,     9,    12,    36,    52,    57,   136,
     136,     1,     5,   107,   127,    96,   136,   136,     5,   107,
      83,    52,    83,     1,     5,   120,   136,     5,    83,   107,
      83,    83,    36,     1,     5,     7,   107,   133,   136,     8,
      10,    96,    96,    96,    96,     8,     9,     8,    12,    57,
       9,     5,    92,     5,    92,     1,   136,     5,     7,    92,
       5,    93,   136,    12,     5,    93,     7,    83,   136,   136,
     136,   136,   136,   136,   136,   136,   136,     5,     7,     5,
      83,   136,     5,   105,   123,     5,    83,   133,     5,    83,
      52,     8,     9,    19,    19,    21,    56,   109,   110,    25,
       8,     8,    52,     8,     8,     8,    37,    37,    37,    38,
       5,    83,    92,     7,     8,     7,     7,     1,     7,   136,
      14,    16,    98,   100,     5,   106,     5,     5,   123,    83,
     133,     5,     7,     7,     7,     7,     1,     7,     1,     7,
     136,     7,     7,    61,    19,     8,     8,     9,    12,     8,
       9,    57,    37,    37,    83,     5,     5,    83,    83,    94,
      96,   136,     5,   123,   136,     5,    83,   120,     1,   136,
       5,    37,    37,    37,     5,    96,   136,    14,    96,     9,
       7,    83,   136,    83,   136,     5,   123,     5,    83,   133,
       5,   105,     5,     8,    19,     1,    96,    37,     7,    96,
      98,     5,     7,     7,     8,     9,     8,     9,     9,     5,
      83,   136,     5,     5,     5,     5,     5,     9,     9,    57,
       9,     5,     5,     5,    57
=======
       0,     3,     4,     5,    80,    81,    82,    83,    84,     5,
      86,    87,     5,     6,     5,     6,     0,    82,    11,    12,
      88,    89,     8,     9,    83,     8,    83,     9,     6,    62,
       6,     5,    34,    35,    36,    62,    83,    90,    91,    92,
      93,   122,    11,    12,     5,    87,     5,     5,    87,     5,
       5,     7,    61,    63,    64,    67,    68,    85,   127,   136,
     137,   138,     5,    13,    62,     5,    14,    94,    95,    10,
      96,     5,    62,    90,     9,     8,     9,    83,     9,    62,
       6,     7,     8,    23,    28,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   139,     9,   136,
       5,     7,    94,     8,    13,     5,     7,     8,     5,    11,
      16,    18,    19,    21,    25,    27,    29,    30,    31,    32,
      33,    37,    39,    40,    41,    60,    62,    65,    66,    85,
      86,    96,    97,    98,    99,   101,   103,   104,   105,   106,
     107,   108,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   121,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,     5,    13,    62,    94,
      94,     5,     5,    87,     5,     5,     7,    85,   136,     6,
     136,   136,   136,   136,   136,   136,   136,   136,     5,     7,
       6,     7,     5,    95,   136,    13,     6,     5,    95,     5,
       8,     9,    28,    62,    85,   107,   136,   136,   136,     5,
     107,   136,     6,   136,   136,     5,   107,    85,    52,    85,
       5,   120,   136,     5,    85,   107,    85,    85,    37,     5,
       7,   107,   133,   136,    11,    98,    98,    98,    98,     8,
      28,     9,     7,   136,     5,     7,    94,     7,     7,     9,
       7,     7,    62,     6,     6,   136,     8,     9,     5,   123,
       5,    85,   133,     7,   136,    20,     6,     6,     6,     8,
      20,    20,    96,    98,     6,    26,     8,     8,    52,     8,
       8,     8,    38,    38,    38,    39,     5,    85,    94,     7,
       8,     7,     7,     7,    15,    17,   100,   102,     5,   123,
      85,   133,     5,     7,     6,     6,     7,     6,     6,     5,
       7,    85,   136,     5,     5,     8,     9,    28,     7,    85,
       5,    85,    85,    22,    58,   109,   110,   109,   110,     5,
     123,   136,     5,    85,   120,   136,     5,    38,    38,    38,
       5,    98,   136,    15,    98,     6,     6,     7,     7,     5,
     123,     5,    85,   133,    20,     6,     6,     6,    38,     7,
       6,    98,   100,    85,    96,    98,   136,    98
>>>>>>> a5e267863b8129c7117a38bd69d2f0980866b4a0
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
<<<<<<< HEAD
#line 75 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {	Streams::verbose() <<"prgram : program unit\n";
						Streams::verbose().flush();						
					  ;}
    break;

  case 3:
#line 78 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"program: unit\n";
								Streams::verbose().flush();						
							;}
    break;

  case 4:
#line 83 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"unit: IMPORT unit_list class_decl\n";;}
    break;

  case 5:
#line 84 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"unit: class_decl\n";;}
    break;

  case 6:
#line 87 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"class_decl: class_h class_body\n";
									;}
    break;

  case 7:
#line 91 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[0].r.colNum)+1));;}
    break;

  case 8:
#line 92 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[0].r.colNum)+1)); ;}
    break;

  case 9:
#line 93 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[0].r.colNum)+1));;}
    break;

  case 10:
#line 94 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID \n";colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[0].r.colNum)+1));;}
    break;

  case 11:
#line 95 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[0].r.colNum)+1));;}
    break;

  case 12:
#line 96 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h:FINAL CLASS ID OPEN_S unit_list CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[0].r.colNum)+1));;}
    break;

  case 13:
#line 97 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {							
									colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected class name at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected class name","");
=======
#line 59 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {                    cout <<"prgram : Units\n";
                    if(!err->errQ->isEmpty())						   
				    err->printErrQueue();
					//amer
					;}
    break;

  case 3:
#line 65 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<"units: unit\n";;}
    break;

  case 4:
#line 66 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<"units: unit\n";;}
    break;

  case 5:
#line 69 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 6:
#line 70 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 7:
#line 71 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 8:
#line 72 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 9:
#line 75 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout <<"class_decl: class_h class_body\n";;}
    break;

  case 10:
#line 77 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout << "class_h: CLASS ID SEMI_COLUMN\n";;}
    break;

  case 11:
#line 79 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 12:
#line 82 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout << "class_h:CLASS ID OPEN_S expr_list CLOSE_S SEMI_COLUMN\n";;}
    break;

  case 13:
#line 83 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {
				    
									err->errQ->enqueue((yyvsp[0].r.lineNum),(yyvsp[0].r.colNum)-strlen((yyvsp[0].r.strVal)),"CLASS NAME IS NOT FOUND ","");
>>>>>>> a5e267863b8129c7117a38bd69d2f0980866b4a0
		;}
    break;

  case 14:
<<<<<<< HEAD
#line 102 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected Reserved word at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected Reserved word","");
=======
#line 87 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {
									err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"REServed WORD CLASS NOT FOUND ","");
>>>>>>> a5e267863b8129c7117a38bd69d2f0980866b4a0
							 ;}
    break;

  case 15:
<<<<<<< HEAD
#line 107 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected Reserved word at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected Reserved word","");
							 ;}
    break;

  case 16:
#line 112 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {							
									colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected class name at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected class name","");
		;}
    break;

  case 17:
#line 117 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected Reserved word at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected Reserved word","");
							 ;}
    break;

  case 18:
#line 122 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected Reserved word at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected Reserved word","");
							 ;}
    break;

  case 19:
#line 129 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"expr_list: expr_list COMMA expr\n";;}
    break;

  case 20:
#line 130 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"expr_list: expr %prec stmt_1\n";;}
    break;

  case 21:
#line 133 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"unit_list:	unit_list COMMA unit_import\n";;}
    break;

  case 22:
#line 134 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"unit_list:	unit_import\n";;}
    break;

  case 23:
#line 137 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"unit_import: unit_import DOT ID\n";;}
    break;

  case 24:
#line 138 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"unit_import: ID\n";;}
    break;

  case 25:
#line 142 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"class_body:COLON END	\n";colonStack.pop();;}
    break;

  case 26:
#line 143 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"class_body:COLON dm_list END\n";colonStack.pop();;}
    break;

  case 27:
#line 144 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
					ColonStack* temp = colonStack.top();
					colonStack.pop();
					Streams::verbose()<<"Error: Expected ':' at Line No:"<<temp->lineNum<<" Column No:"<<temp->colNum<<endl;
					err->errQ->enqueue(temp->lineNum,temp->colNum,"Expected ':' ","");
				  ;}
    break;

  case 28:
#line 150 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
					ColonStack* temp = colonStack.top();
					colonStack.pop();
					Streams::verbose()<<"Error: Expected ':' at Line No:"<<temp->lineNum<<" Column No:"<<temp->colNum<<endl;
					err->errQ->enqueue(temp->lineNum,temp->colNum,"Expected ':' ","");
				  ;}
    break;

  case 29:
#line 158 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm_list: dm_list DEF dm\n";;}
    break;

  case 30:
#line 159 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm_list: DEF dm\n";;}
    break;

  case 31:
#line 162 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm:	var_declaration SEMICOLON\n";;}
    break;

  case 32:
#line 163 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm:	var_declaration\n";;}
    break;

  case 33:
#line 164 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm:	class_decl\n";;}
    break;

  case 34:
#line 165 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
							Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
							err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"Expected ';' ","");
						   ;}
    break;

  case 35:
#line 171 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: access_modef ID\n";;}
    break;

  case 36:
#line 172 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: ID\n";;}
    break;

  case 37:
#line 173 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: access_modef ID ASSIGN expr\n";;}
    break;

  case 38:
#line 174 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: ID ASSIGN expr\n";;}
    break;

  case 39:
#line 175 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
											Streams::verbose()<<"Error: UN Expected IDENTIFIER Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)-strlen((yyvsp[-1].r.strVal)),"UN Expected IDENTIFIER ","");
										  ;}
    break;

  case 40:
#line 179 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
							Streams::verbose()<<"Error: UN Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[0].r.colNum)-strlength((yyvsp[0].r.strVal))<<endl;
							err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[0].r.colNum)-strlen((yyvsp[0].r.strVal)),"UN Expected IDENTIFIER ","");						
						;}
    break;

  case 41:
#line 185 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_declaration: method_h block_stmt\n";;}
    break;

  case 42:
#line 188 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_h: access_modef ID OPEN_S args_list CLOSE_S \n";;}
    break;

  case 43:
#line 189 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_h: access_modef ID OPEN_S ID CLOSE_S \n";;}
    break;

  case 44:
#line 190 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S args_list CLOSE_S \n";;}
    break;

  case 45:
#line 191 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S ID CLOSE_S \n";;}
    break;

  case 46:
#line 192 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_h: access_modef ID OPEN_S  CLOSE_S \n";;}
    break;

  case 47:
#line 193 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S CLOSE_S COLON \n";;}
    break;

  case 48:
#line 194 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
														err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
												   ;}
    break;

  case 49:
#line 198 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
														err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
												   ;}
    break;

  case 50:
#line 202 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
									  ;}
    break;

  case 51:
#line 206 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
									  ;}
    break;

  case 52:
#line 210 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)+1<<endl;
												err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)+1,"Expected '(' ","");
											   ;}
    break;

  case 53:
#line 214 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)+1<<endl;
												err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)+1,"Expected '(' ","");
											   ;}
    break;

  case 54:
#line 218 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-(yylval.r.strVal)<<endl;
														err->errQ->enqueue((yyvsp[-4].r.lineNum),yylval.r.colNum-(yylval.r.strVal),"Expected ')' ","");
													 ;}
    break;

  case 55:
#line 222 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
														err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected ')' ","");
													 ;}
    break;

  case 56:
#line 230 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"args_list:	args_list COMMA arg\n";;}
    break;

  case 57:
#line 231 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"args_list: ID COMMA arg \n";;}
    break;

  case 58:
#line 232 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"args_list:	args_list COMMA ID \n";;}
    break;

  case 59:
#line 233 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"args_list:	ID COMMA ID \n";;}
    break;

  case 60:
#line 234 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"args_list: arg \n";;}
    break;

  case 61:
#line 237 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"arg:	STAR ID \n";;}
    break;

  case 62:
#line 238 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"arg:	ID ASSIGN expr \n";;}
    break;

  case 63:
#line 239 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"arg:	STAR ID ASSIGN expr \n";;}
    break;

  case 64:
#line 242 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"COLON  END \n";;}
    break;

  case 65:
#line 243 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"block_stmt:	stmt_list END \n";;}
    break;

  case 66:
#line 244 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
						Streams::verbose()<<"Error: Expected ':' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-(yyvsp[-1].r.strVal)<<endl;
						err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-(yyvsp[-1].r.strVal),"Expected ':' ","");			 
						;}
    break;

  case 67:
#line 251 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt_list:	stmt_list stmt \n";;}
    break;

  case 68:
#line 252 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt_list:	stmt \n";;}
    break;

  case 69:
#line 255 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt: 		if_stmt\n";;}
    break;

  case 70:
#line 256 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	while_stmt\n";;}
    break;

  case 71:
#line 257 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	for_stmt\n";;}
    break;

  case 72:
#line 258 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	try_stmt\n";;}
    break;

  case 73:
#line 259 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	with_stmt\n";;}
    break;

  case 74:
#line 260 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	block_stmt\n";;}
    break;

  case 75:
#line 261 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	simple_stmt_list\n";;}
    break;

  case 76:
#line 262 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	ID SEMICOLON\n";;}
    break;

  case 77:
#line 263 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	ID DOT ID SEMICOLON\n";;}
    break;

  case 78:
#line 264 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	ID COMMA ID DOT ID DOT ID SEMICOLON\n";;}
    break;

  case 79:
#line 265 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	ID DOT ID COMMA ID DOT ID DOT ID SEMICOLON\n";;}
    break;

  case 80:
#line 268 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt\n";;}
    break;

  case 81:
#line 269 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt ELSE stmt\n";;}
    break;

  case 82:
#line 270 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt elif_stmt\n";;}
    break;

  case 83:
#line 271 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt elif_stmt ELSE stmt\n";;}
    break;

  case 84:
#line 274 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"elif_stmt: 	elif_header stmt elif_stmt\n";;}
    break;

  case 85:
#line 275 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"elif_stmt:	elif_header stmt\n";;}
    break;

  case 86:
#line 278 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"if_header:	IF expr \n";;}
    break;

  case 87:
#line 281 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"elif_header:	ELIF expr \n";;}
    break;

  case 88:
#line 284 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"while_stmt: while_header stmt\n";;}
    break;

  case 89:
#line 289 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"while_header: WHILE expr \n";;}
    break;

  case 90:
#line 290 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    { 
						Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-(yyvsp[-2].r.strVal)<<endl;
						err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-(yyvsp[-2].r.strVal),"Expected reserved word 'while' ","");
					 ;}
    break;

  case 91:
#line 296 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"for_stmt: 	for_header stmt\n";;}
    break;

  case 92:
#line 299 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"for_header: FOR target_list IN expr_list \n";;}
    break;

  case 93:
#line 300 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID COMMA ID IN expr_list \n";;}
    break;

  case 94:
#line 301 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID IN expr_list \n";;}
    break;

  case 95:
#line 302 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-(yyvsp[-4].r.strVal)<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-(yyvsp[-4].r.strVal),"Expected reserved word 'for' ","");
								;}
    break;

  case 96:
#line 309 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list:	import_list COMMA import\n";;}
    break;

  case 97:
#line 310 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA import_list \n";;}
    break;

  case 98:
#line 311 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA ID \n";;}
=======
#line 90 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {
		                  err->errQ->enqueue((yyvsp[0].r.lineNum),(yyvsp[-1].r.colNum)-strlen((yyvsp[-1].r.strVal)),"REServed WORD CLASS NOT FOUND ","");
						 ;}
    break;

  case 16:
#line 93 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {
		            err->errQ->enqueue((yyvsp[0].r.lineNum),(yyvsp[0].r.colNum),"ERROR: SEMI_COLUMN NOT FOUND","");
		           ;}
    break;

  case 17:
#line 99 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 18:
#line 100 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 19:
#line 104 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 20:
#line 105 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 21:
#line 106 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 22:
#line 107 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 23:
#line 108 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 24:
#line 109 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 25:
#line 110 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 26:
#line 111 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 27:
#line 112 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 28:
#line 114 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 29:
#line 126 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 31:
#line 131 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<"class_body: END	\n";;}
    break;

  case 32:
#line 132 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 33:
#line 135 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 34:
#line 136 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 35:
#line 139 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 36:
#line 140 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 37:
#line 141 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 38:
#line 144 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 39:
#line 145 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 40:
#line 146 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 41:
#line 147 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 42:
#line 148 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[0].r.colNum)-strlen((yyvsp[0].r.strVal)),"unexpected Id ","");;}
    break;

  case 43:
#line 149 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {err->errQ->enqueue((yyvsp[0].r.lineNum),(yyvsp[0].r.colNum)-strlen((yyvsp[0].r.strVal)),"unexpected id ","");;}
    break;

  case 44:
#line 152 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 45:
#line 155 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 46:
#line 156 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 47:
#line 157 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 48:
#line 158 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 49:
#line 159 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 50:
#line 160 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 51:
#line 161 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"Expected ID ","");;}
    break;

  case 52:
#line 162 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"Expected ID ","");;}
    break;

  case 53:
#line 163 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"Expected ( ","");;}
    break;

  case 54:
#line 164 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[0].r.colNum)-strlen((yyvsp[0].r.strVal)),"Expected ( ","");;}
    break;

  case 55:
#line 165 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[0].r.colNum)-strlen((yyvsp[0].r.strVal)),"Expected : ","");;}
    break;

  case 56:
#line 169 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 57:
#line 170 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 58:
#line 171 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 59:
#line 172 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 60:
#line 173 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 61:
#line 176 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 62:
#line 177 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 63:
#line 178 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 64:
#line 181 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 65:
#line 182 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 66:
#line 185 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 67:
#line 186 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 68:
#line 189 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 69:
#line 190 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 70:
#line 191 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 71:
#line 192 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 72:
#line 193 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 73:
#line 194 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 74:
#line 195 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 75:
#line 198 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 76:
#line 199 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 77:
#line 200 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 78:
#line 201 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 79:
#line 204 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 80:
#line 205 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 81:
#line 208 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 82:
#line 209 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    { err->errQ->enqueue((yyvsp[0].r.lineNum),(yyvsp[0].r.colNum),"ERROR: Expected :","");;}
    break;

  case 83:
#line 212 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 84:
#line 215 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 85:
#line 220 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 86:
#line 221 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    { err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"ERROR: unexpected ID","");;}
    break;

  case 87:
#line 222 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {err->errQ->enqueue((yyvsp[0].r.lineNum),(yyvsp[-1].r.colNum),"ERROR: Expected :","");;}
    break;

  case 88:
#line 225 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 89:
#line 228 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 90:
#line 229 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 91:
#line 230 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 92:
#line 231 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"REServed WORD FOR Expected ","");;}
    break;

  case 93:
#line 234 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 94:
#line 235 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 95:
#line 236 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 96:
#line 237 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 97:
#line 238 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 98:
#line 239 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
>>>>>>> a5e267863b8129c7117a38bd69d2f0980866b4a0
    break;

  case 99:
#line 312 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA ID DOT ID \n";;}
    break;

  case 100:
<<<<<<< HEAD
#line 313 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA import_list \n";;}
    break;

  case 101:
#line 314 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA ID \n";;}
    break;

  case 102:
#line 315 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA ID DOT ID \n";;}
    break;

  case 103:
#line 316 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list:	import\n";;}
    break;

  case 104:
#line 320 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import: import DOT ID\n";;}
    break;

  case 105:
#line 321 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import:	ID DOT ID DOT ID;";}
=======
#line 243 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 101:
#line 244 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 102:
#line 245 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 103:
#line 248 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 104:
#line 251 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 105:
#line 252 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
>>>>>>> a5e267863b8129c7117a38bd69d2f0980866b4a0
    break;

  case 106:
#line 325 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target_list:	target_list COMMA target\n";;}
    break;

  case 107:
<<<<<<< HEAD
#line 326 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA ID COMMA target\n";;}
    break;

  case 108:
#line 327 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target_list:	target_list COMMA ID\n";;}
    break;

  case 109:
#line 328 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA ID COMMA ID\n";;}
    break;

  case 110:
#line 329 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA target\n";;}
=======
#line 256 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 108:
#line 259 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 109:
#line 260 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 110:
#line 261 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
>>>>>>> a5e267863b8129c7117a38bd69d2f0980866b4a0
    break;

  case 111:
#line 330 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target_list:	target\n";;}
    break;

  case 112:
<<<<<<< HEAD
#line 333 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"try_stmt: 	TRY  stmt except_stmt\n";;}
    break;

  case 113:
#line 334 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"try_stmt: 	TRY  stmt finally_stmt\n";;}
    break;

  case 114:
#line 337 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"finally_stmt: 	FINALLY COLON block_stmt\n";;}
    break;

  case 115:
#line 340 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"except_stmt:	EXCEPT  stmt\n";;}
    break;

  case 116:
#line 341 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"except_stmt:	EXCEPT  expr stmt\n";;}
    break;

  case 117:
#line 344 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"with_stmt:	WITH expr \n";;}
    break;

  case 118:
#line 345 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"with_stmt:	WITH expr AS target \n";;}
    break;

  case 119:
#line 348 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	expr_list\n";;}
    break;

  case 120:
#line 349 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	assert_stmt\n";;}
    break;

  case 121:
#line 350 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	assignment_stmt\n";;}
    break;

  case 122:
#line 352 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	PASS\n";;}
    break;

  case 123:
#line 353 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	del_stmt\n";;}
    break;

  case 124:
#line 354 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	print_stmt\n";;}
    break;

  case 125:
#line 355 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	return_stmt\n";;}
    break;

  case 126:
#line 356 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	yield_stmt\n";;}
    break;

  case 127:
#line 357 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	raise_stmt\n";;}
    break;

  case 128:
#line 358 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	BREAK\n";;}
    break;

  case 129:
#line 359 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	CONTINUE\n";;}
    break;

  case 130:
#line 360 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	import_list\n";;}
    break;

  case 131:
#line 361 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	global_stmt\n";;}
    break;

  case 132:
#line 364 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"assert_stmt: 	ASSERT expr\n";;}
    break;

  case 133:
#line 365 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"assert_stmt:	ASSERT expr COMMA expr\n";;}
    break;

  case 134:
#line 368 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	target_list ASSIGN expr_list\n";;}
    break;

  case 135:
#line 369 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	ID COMMA ID ASSIGN expr_list\n";;}
    break;

  case 136:
#line 370 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	ID ASSIGN expr_list\n";;}
    break;

  case 137:
#line 371 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	target_list ASSIGN yield_expression\n";;}
    break;

  case 138:
#line 372 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	ID COMMA ID ASSIGN yield_expression\n";;}
    break;

  case 139:
#line 373 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	ID ASSIGN yield_expression\n";;}
    break;

  case 140:
#line 376 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL target_list\n";;}
    break;

  case 141:
#line 377 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID COMMA ID\n";;}
    break;

  case 142:
#line 378 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID\n";;}
    break;

  case 143:
#line 381 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"return_stmt:	RETURN\n";;}
    break;

  case 144:
#line 382 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"return_stmt:	RETURN expr_list\n";;}
    break;

  case 145:
#line 385 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"yield_stmt:		yield_expression\n";;}
    break;

  case 146:
#line 388 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"print_stmt: PRINT expr_list\n";;}
    break;

  case 147:
#line 389 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"print_stmt:	PRINT MORE_THAN MORE_THAN expr_list\n";;}
    break;

  case 148:
#line 390 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-(yyvsp[-2].r.strVal)<<endl;
								err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-(yyvsp[-2].r.strVal),"Expected reserved word 'print' ","");
								;}
    break;

  case 149:
#line 394 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)-(yyvsp[-3].r.strVal)<<endl;
												err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-(yyvsp[-3].r.strVal),"Expected reserved word 'print' ","");
												;}
    break;

  case 150:
#line 399 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"global_stmt :GLOBAL id_list\n";;}
    break;

  case 151:
#line 400 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+(yyvsp[-1].r.strVal)<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected IDENTIFIER ","");
									   ;}
    break;

  case 152:
#line 406 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"id_list: 	ID COMMA id_list\n";;}
    break;

  case 153:
#line 407 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"id_list:	ID\n";;}
    break;

  case 154:
#line 410 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"raise_stmt: RAISE\n";;}
    break;

  case 155:
#line 411 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"raise_stmt:	RAISE expr\n";;}
    break;

  case 156:
#line 412 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"raise_stmt:	RAISE expr COMMA expr\n";;}
    break;

  case 157:
#line 413 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected expression at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
													err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected expression ","");
												 ;}
    break;

  case 158:
#line 417 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected reserved word 'raise' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-(yyvsp[-4].r.strVal)<<endl;
													err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-(yyvsp[-4].r.strVal),"Expected reserved word 'raise' ","");
												 ;}
    break;

  case 159:
#line 423 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"access_modef: PRIVATE\n";;}
    break;

  case 160:
#line 424 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"access_modef:	PUBLIC\n";;}
    break;

  case 161:
#line 425 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"access_modef:	PROTECTED\n";;}
    break;

  case 162:
#line 428 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S target_list CLOSE_S \n";;}
    break;

  case 163:
#line 429 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S ID COMMA ID CLOSE_S\n";;}
    break;

  case 164:
#line 430 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S ID CLOSE_S\n";;}
    break;

  case 165:
#line 431 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D target_list CLOSE_D\n";;}
    break;

  case 166:
#line 432 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D ID COMMA ID CLOSE_D\n";;}
    break;

  case 167:
#line 433 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D ID CLOSE_D\n";;}
    break;

  case 168:
#line 434 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	attributeref\n";;}
    break;

  case 169:
#line 435 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	subscription\n";;}
    break;

  case 170:
#line 438 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"attributeref: primary DOT ID\n";;}
    break;

  case 171:
#line 439 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"attributeref: ID DOT ID\n";;}
    break;

  case 172:
#line 442 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"primary: 	atom\n";;}
    break;

  case 173:
#line 443 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"primary:	attributeref\n";;}
    break;

  case 174:
#line 444 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"primary:	subscription\n";;}
    break;

  case 175:
#line 445 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"primary:	call\n";;}
    break;

  case 176:
#line 448 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"atom:	enclosure\n";;}
    break;

  case 177:
#line 449 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"atom:	literal\n";;}
    break;

  case 178:
#line 452 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"literal:    STRING_VALUE\n";;}
    break;

  case 179:
#line 453 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"literal:	INTEGER_VALUE\n";;}
    break;

  case 180:
#line 454 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"literal:	LONG_VALUE\n";;}
    break;

  case 181:
#line 455 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"literal:	FLOAT_VALUE\n";;}
    break;

  case 182:
#line 456 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"literal:	CHAR_VALUE\n";;}
    break;

  case 183:
#line 459 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"enclosure:	parenth_form\n";;}
    break;

  case 184:
#line 460 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"enclosure:	list_display\n";;}
    break;

  case 185:
#line 461 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"enclosure:	string_conversion\n";;}
    break;

  case 186:
#line 462 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"enclosure:	yield_atom\n";;}
    break;

  case 187:
#line 465 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"parenth_form : 	OPEN_S expr CLOSE_S";;}
    break;

  case 188:
#line 466 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"parenth_form : 	OPEN_S  CLOSE_S";;}
    break;

  case 189:
#line 467 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-1,"Expected '(' ","");
								;}
    break;

  case 190:
#line 471 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected ')' ","");
										;}
    break;

  case 191:
#line 475 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-(yyvsp[-2].r.strVal)<<endl;
													err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-(yyvsp[-2].r.strVal)," Expected '(' ","");
												 ;}
    break;

  case 192:
#line 479 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
													err->errQ->enqueue((yyvsp[-2].r.lineNum),yylval.r.colNum-strlength(yylval.r.strVal)," Expected ')' ","");
												 ;}
    break;

  case 193:
#line 486 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"list_display:	OPEN_D  expr_list CLOSE_D\n";;}
    break;

  case 194:
#line 489 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"string_conversion:	RE_COT expr_list RE_COT\n";;}
    break;

  case 195:
#line 492 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"yield_atom:		OPEN_S yield_expression CLOSE_S\n";;}
    break;

  case 196:
#line 495 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"yield_expression:	YIELD\n";;}
    break;

  case 197:
#line 496 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"yield_expression:	YIELD expr_list\n";;}
    break;

  case 198:
#line 499 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"subscription:	PRIMARY OPEN_D expr_list CLOSE_D\n";;}
    break;

  case 199:
#line 500 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"subscription:	PRIMARY OPEN_D expr_list CLOSE_D\n";;}
    break;

  case 200:
#line 503 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"call:	PRIMARY OPEN_D args_list CLOSE_D\n";;}
    break;

  case 201:
#line 504 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"call:	PRIMARY OPEN_D ID CLOSE_D\n";;}
    break;

  case 202:
#line 505 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"call:	ID OPEN_D ID CLOSE_D\n";;}
    break;

  case 203:
#line 508 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"expr:	condition\n";;}
    break;

  case 204:
#line 509 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"expr:	literal\n";;}
    break;

  case 205:
#line 510 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"expr:	expr op expr\n";;}
    break;

  case 206:
#line 511 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"expr:	long_id\n";;}
    break;

  case 207:
#line 512 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected operand at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.lineNum)-strlength((yyvsp[-1].r.strVal))<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlen((yyvsp[-1].r.strVal)),"Expected operand ","");
									  ;}
    break;

  case 208:
#line 518 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"condition: expr EQUAL expr\n";;}
    break;

  case 209:
#line 519 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"condition: expr NOT_EQUAL expr\n";;}
    break;

  case 210:
#line 520 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"condition: expr LESS_THAN expr\n";;}
    break;

  case 211:
#line 521 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"condition: expr LESS_OR_EQUAL expr\n";;}
    break;

  case 212:
#line 522 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"condition: expr MORE_THAN expr\n";;}
    break;

  case 213:
#line 523 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"condition: expr MORE_OR_EQUAL expr\n";;}
    break;

  case 214:
#line 526 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"long_id:	\n";;}
    break;

  case 215:
#line 527 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"long_id:	ID OPEN_S CLOSE_S\n";;}
    break;

  case 216:
#line 528 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"long_id:	ID OPEN_S expr_list CLOSE_S\n";;}
    break;

  case 217:
#line 529 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"long_id:	ID OPEN_S expr	  CLOSE_S\n";;}
    break;

  case 218:
#line 530 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"long_id:	long_id DOT ID\n";;}
    break;

  case 219:
#line 531 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"long_id:	long_id DOT ID OPEN_S CLOSE_S\n";;}
    break;

  case 220:
#line 532 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"long_id:	long_id DOT ID OPEN_S expr_list CLOSE_S\n";;}
    break;

  case 221:
#line 533 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"long_id:	long_id DOT ID OPEN_S expr CLOSE_S\n";;}
    break;

  case 222:
#line 536 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :PLUS\n";;}
    break;

  case 223:
#line 537 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :MINUS\n";;}
    break;

  case 224:
#line 538 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :DIV\n";;}
    break;

  case 225:
#line 539 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :MOD\n";;}
    break;

  case 226:
#line 540 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :OR\n";;}
    break;

  case 227:
#line 541 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :NOT\n";;}
    break;

  case 228:
#line 542 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :MULTI\n";;}
    break;

  case 229:
#line 543 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :AND\n";;}
=======
#line 264 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 113:
#line 265 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 114:
#line 266 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 115:
#line 267 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 116:
#line 268 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 117:
#line 269 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 118:
#line 270 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 119:
#line 271 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 120:
#line 272 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 121:
#line 275 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 122:
#line 276 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 123:
#line 279 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 124:
#line 280 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 125:
#line 281 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 126:
#line 282 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 127:
#line 283 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 128:
#line 284 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 129:
#line 287 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 130:
#line 288 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 131:
#line 289 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 132:
#line 292 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 133:
#line 293 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 134:
#line 296 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 135:
#line 299 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 136:
#line 300 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 137:
#line 301 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {err->errQ->enqueue((yyvsp[0].r.lineNum),(yyvsp[-1].r.colNum)-strlen((yyvsp[-1].r.strVal)),"Unexpected ID ","");;}
    break;

  case 138:
#line 303 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 139:
#line 304 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {err->errQ->enqueue((yyvsp[0].r.lineNum),(yyvsp[0].r.colNum),"expected ID ","");;}
    break;

  case 140:
#line 307 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 141:
#line 308 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 142:
#line 311 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 143:
#line 312 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 144:
#line 313 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 145:
#line 314 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[0].r.colNum),"expresion expected ","");;}
    break;

  case 146:
#line 317 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 147:
#line 318 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 148:
#line 319 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 149:
#line 322 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 150:
#line 323 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 151:
#line 324 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 152:
#line 325 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 153:
#line 326 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 154:
#line 327 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 155:
#line 328 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 156:
#line 329 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 157:
#line 332 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 158:
#line 333 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 159:
#line 336 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 160:
#line 337 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 161:
#line 338 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 162:
#line 339 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 163:
#line 342 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 164:
#line 343 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 165:
#line 346 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 166:
#line 347 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 167:
#line 348 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 168:
#line 349 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 169:
#line 350 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 170:
#line 353 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 171:
#line 354 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 172:
#line 355 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 173:
#line 356 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 174:
#line 359 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 175:
#line 360 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 176:
#line 361 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[0].r.colNum)," expected ) ","");;}
    break;

  case 177:
#line 362 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {err->errQ->enqueue((yyvsp[0].r.lineNum),(yyvsp[0].r.colNum)," expected ) ","");;}
    break;

  case 178:
#line 363 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)," expected ( ","");;}
    break;

  case 179:
#line 367 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 180:
#line 370 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 181:
#line 373 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 182:
#line 376 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 183:
#line 377 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 184:
#line 380 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 185:
#line 383 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 186:
#line 384 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 187:
#line 387 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 188:
#line 388 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 189:
#line 389 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 190:
#line 390 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 191:
#line 394 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 192:
#line 395 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 193:
#line 396 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 194:
#line 397 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 195:
#line 398 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 196:
#line 399 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 197:
#line 402 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 198:
#line 403 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 199:
#line 404 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 200:
#line 405 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 201:
#line 406 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 202:
#line 407 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 203:
#line 408 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 204:
#line 409 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 205:
#line 412 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 206:
#line 413 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 207:
#line 414 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 208:
#line 415 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 209:
#line 416 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 210:
#line 417 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 211:
#line 418 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 212:
#line 419 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
>>>>>>> a5e267863b8129c7117a38bd69d2f0980866b4a0
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
<<<<<<< HEAD
#line 3174 "yacc.cpp"
=======
#line 2870 "yacc.cpp"
>>>>>>> a5e267863b8129c7117a38bd69d2f0980866b4a0

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


<<<<<<< HEAD
#line 545 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
=======
#line 421 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
>>>>>>> a5e267863b8129c7117a38bd69d2f0980866b4a0

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
