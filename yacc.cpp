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
     SEMI_COLUMN = 261,
     CLOSE_S = 262,
     COMMA = 263,
     DOT = 264,
     BEGIN = 265,
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
     LESS_THAN = 304,
     LESS_OR_EQUAL = 305,
     MORE_THAN = 306,
     MORE_OR_EQUAL = 307,
     TRUE = 308,
     FALSE = 309,
     NEW_LINE = 310,
     PASS = 311,
     CHAR_VALUE = 312,
     OPEN_S = 313,
     STRING_VALUE = 314,
     INTEGER_VALUE = 315,
     BREAK = 316,
     CONTINUE = 317,
     LONG_VALUE = 318,
     FLOAT_VALUE = 319,
     stmt_7 = 320,
     stmt_6 = 321,
     stmt_5 = 322,
     stmt_4 = 323,
     stmt_3 = 324,
     stmt_2 = 325,
     stmt_1 = 326
   };
#endif
/* Tokens.  */
#define IMPORT 258
#define CLASS 259
#define ID 260
#define SEMI_COLUMN 261
#define CLOSE_S 262
#define COMMA 263
#define DOT 264
#define BEGIN 265
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
#define LESS_THAN 304
#define LESS_OR_EQUAL 305
#define MORE_THAN 306
#define MORE_OR_EQUAL 307
#define TRUE 308
#define FALSE 309
#define NEW_LINE 310
#define PASS 311
#define CHAR_VALUE 312
#define OPEN_S 313
#define STRING_VALUE 314
#define INTEGER_VALUE 315
#define BREAK 316
#define CONTINUE 317
#define LONG_VALUE 318
#define FLOAT_VALUE 319
#define stmt_7 320
#define stmt_6 321
#define stmt_5 322
#define stmt_4 323
#define stmt_3 324
#define stmt_2 325
#define stmt_1 326




/* Copy the first part of user declarations.  */
#line 2 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"

	#include <iostream>
	#include <FlexLexer.h>
	using namespace std;
	int yylex(void);
	int yyparse();
	void yyerror(char *);
	
	FlexLexer* lexer = new yyFlexLexer();
	
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
#line 22 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
typedef union YYSTYPE {
	struct R{
		int intVal;
		float floatVal;
		char charVal;
		char* strVal;
		int myLineNo;
		int myColno;
	}r;
} YYSTYPE;
/* Line 196 of yacc.c.  */
#line 258 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 270 "yacc.cpp"

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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   781

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  61
/* YYNRULES -- Number of rules. */
#define YYNRULES  161
/* YYNRULES -- Number of states. */
#define YYNSTATES  269

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   326

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
      65,    66,    67,    68,    69,    70,    71
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    14,    16,    19,    23,
      29,    36,    40,    42,    46,    48,    52,    54,    57,    61,
      65,    68,    70,    72,    74,    77,    79,    84,    88,    91,
      98,   104,   110,   115,   119,   121,   123,   126,   130,   135,
     138,   142,   145,   147,   149,   151,   153,   155,   157,   159,
     161,   164,   169,   173,   179,   183,   186,   190,   194,   197,
     201,   204,   209,   213,   215,   220,   225,   230,   235,   239,
     243,   248,   252,   258,   260,   262,   264,   266,   268,   270,
     272,   274,   276,   278,   280,   282,   284,   287,   292,   296,
     300,   303,   305,   308,   310,   313,   318,   321,   325,   327,
     329,   332,   337,   339,   341,   343,   345,   349,   353,   355,
     357,   361,   365,   367,   369,   371,   373,   375,   377,   379,
     381,   383,   385,   387,   389,   391,   393,   395,   399,   402,
     406,   410,   414,   416,   419,   424,   429,   431,   433,   437,
     439,   443,   447,   451,   455,   459,   463,   465,   469,   474,
     479,   483,   489,   496,   503,   505,   507,   509,   511,   513,
     515,   517
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
      73,     0,    -1,    74,    -1,    74,    75,    -1,    75,    -1,
       3,    79,    76,    -1,    76,    -1,    77,    81,    -1,     4,
       5,     6,    -1,     4,     5,    58,     7,     6,    -1,     4,
       5,    58,    78,     7,     6,    -1,    78,     8,   129,    -1,
     129,    -1,    79,     8,    80,    -1,    80,    -1,    80,     9,
       5,    -1,     5,    -1,    10,    11,    -1,    10,    82,    11,
      -1,    82,    12,    83,    -1,    12,    83,    -1,    84,    -1,
      85,    -1,    76,    -1,   115,     5,    -1,     5,    -1,   115,
       5,    13,   129,    -1,     5,    13,   129,    -1,    86,    89,
      -1,   115,     5,    58,    87,     7,     6,    -1,     5,    58,
      87,     7,     6,    -1,   115,     5,    58,     7,     6,    -1,
       5,    58,     7,     6,    -1,    87,     8,    88,    -1,    88,
      -1,     5,    -1,    14,     5,    -1,     5,    13,   129,    -1,
      14,     5,    13,   129,    -1,    10,    11,    -1,    10,    90,
      11,    -1,    90,    91,    -1,    91,    -1,    92,    -1,    96,
      -1,    98,    -1,   101,    -1,   104,    -1,    89,    -1,   105,
      -1,    94,    91,    -1,    94,    91,    15,    91,    -1,    94,
      91,    93,    -1,    94,    91,    93,    15,    91,    -1,    95,
      91,    93,    -1,    95,    91,    -1,    16,   129,     6,    -1,
      17,   129,     6,    -1,    97,    91,    -1,    18,   129,     6,
      -1,    99,    91,    -1,    19,   100,    20,    78,    -1,   100,
       8,   116,    -1,   116,    -1,    21,     6,    91,   103,    -1,
      21,     6,    91,   102,    -1,    21,     6,    89,   103,    -1,
      21,     6,    89,   102,    -1,    22,     6,    89,    -1,    23,
       6,    91,    -1,    23,     6,   129,    91,    -1,    24,   129,
       6,    -1,    24,   129,    25,   116,     6,    -1,    78,    -1,
     106,    -1,   107,    -1,    56,    -1,   108,    -1,   111,    -1,
     109,    -1,   110,    -1,   114,    -1,    61,    -1,    62,    -1,
      79,    -1,   112,    -1,    26,   129,    -1,    26,   129,     8,
     129,    -1,   100,    27,    78,    -1,   100,    27,   126,    -1,
      28,   100,    -1,    29,    -1,    29,    78,    -1,   126,    -1,
      30,    78,    -1,    30,    51,    51,    78,    -1,    31,   113,
      -1,     5,     8,   113,    -1,     5,    -1,    32,    -1,    32,
     129,    -1,    32,   129,     8,   129,    -1,    33,    -1,    34,
      -1,    35,    -1,     5,    -1,    58,   100,     7,    -1,    36,
     100,    37,    -1,   117,    -1,   127,    -1,   118,     9,     5,
      -1,     5,     9,     5,    -1,   119,    -1,   117,    -1,   127,
      -1,   128,    -1,   120,    -1,   121,    -1,    59,    -1,    60,
      -1,    63,    -1,    64,    -1,    57,    -1,   122,    -1,   123,
      -1,   124,    -1,   125,    -1,    58,   129,     7,    -1,    58,
       7,    -1,    36,    78,    37,    -1,    38,    78,    38,    -1,
      58,   126,     7,    -1,    39,    -1,    39,    78,    -1,    40,
      36,    78,    37,    -1,    40,    36,    87,    37,    -1,   130,
      -1,   120,    -1,   129,   132,   129,    -1,   131,    -1,   129,
      27,   129,    -1,   129,    48,   129,    -1,   129,    49,   129,
      -1,   129,    50,   129,    -1,   129,    51,   129,    -1,   129,
      52,   129,    -1,     5,    -1,     5,    58,     7,    -1,     5,
      58,    78,     7,    -1,     5,    58,   129,     7,    -1,   131,
       9,     5,    -1,   131,     9,     5,    58,     7,    -1,   131,
       9,     5,    58,    78,     7,    -1,   131,     9,     5,    58,
     129,     7,    -1,    44,    -1,    45,    -1,    46,    -1,    47,
      -1,    41,    -1,    43,    -1,    14,    -1,    42,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,    47,    47,    49,    50,    52,    53,    55,    57,    58,
      60,    64,    65,    68,    70,    81,    82,    85,    86,    88,
      89,    91,    92,    93,    95,    96,    97,    98,   100,   102,
     103,   104,   105,   107,   108,   110,   111,   112,   113,   115,
     116,   118,   119,   121,   122,   123,   124,   125,   126,   127,
     129,   130,   131,   132,   144,   145,   150,   152,   154,   158,
     160,   163,   165,   166,   168,   169,   170,   171,   174,   176,
     178,   181,   182,   184,   185,   186,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   200,   201,   203,   204,
     206,   208,   209,   211,   213,   214,   216,   218,   219,   221,
     222,   223,   225,   226,   227,   229,   230,   231,   232,   233,
     236,   237,   239,   240,   241,   242,   245,   246,   248,   249,
     250,   251,   252,   254,   255,   256,   257,   259,   260,   262,
     264,   266,   268,   269,   271,   273,   275,   276,   277,   278,
     280,   281,   282,   283,   284,   285,   287,   288,   289,   290,
     291,   292,   293,   294,   296,   297,   298,   299,   300,   301,
     302,   303
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IMPORT", "CLASS", "ID", "SEMI_COLUMN",
  "CLOSE_S", "COMMA", "DOT", "BEGIN", "END", "DEF", "ASSIGN", "STAR",
  "ELSE", "IF", "ELIF", "WHILE", "FOR", "IN", "TRY", "FINALLY", "EXPECT",
  "WITH", "AS", "ASSERT", "EQUAL", "DEL", "RETURN", "PRINT", "GLOBAL",
  "RAISE", "PRIVATE", "PUBLIC", "PROTECTED", "OPEN_D", "CLOSE_D", "RE_COT",
  "YIELD", "PRIMARY", "OR", "AND", "NOT", "PLUS", "MINUS", "DIV", "MOD",
  "NOT_EQUAL", "LESS_THAN", "LESS_OR_EQUAL", "MORE_THAN", "MORE_OR_EQUAL",
  "TRUE", "FALSE", "NEW_LINE", "PASS", "CHAR_VALUE", "OPEN_S",
  "STRING_VALUE", "INTEGER_VALUE", "BREAK", "CONTINUE", "LONG_VALUE",
  "FLOAT_VALUE", "stmt_7", "stmt_6", "stmt_5", "stmt_4", "stmt_3",
  "stmt_2", "stmt_1", "$accept", "program", "units", "unit", "class_decl",
  "class_h", "expr_list", "import_list", "import", "class_body", "dm_list",
  "dm", "var_declaration", "method_declaration", "method_h", "args_list",
  "arg", "block_stmt", "stmt_list", "stmt", "if_stmt", "elif_stmt",
  "if_header", "elif_header", "while_stmt", "while_header", "for_stmt",
  "for_header", "target_list", "try_stmt", "finally_stmt", "except_stmt",
  "with_stmt", "simple_stmt_list", "assert_stmt", "assignment_stmt",
  "del_stmt", "return_stmt", "yield_stmt", "print_stmt", "global_stmt",
  "id_list", "raise_stmt", "access_modef", "target", "attributeref",
  "primary", "atom", "literal", "enclosure", "parenth_form",
  "list_display", "string_conversion", "yield_atom", "yield_expression",
  "subscription", "call", "expr", "condition", "long_id", "op", 0
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
     325,   326
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    72,    73,    74,    74,    75,    75,    76,    77,    77,
      77,    78,    78,    79,    79,    80,    80,    81,    81,    82,
      82,    83,    83,    83,    84,    84,    84,    84,    85,    86,
      86,    86,    86,    87,    87,    88,    88,    88,    88,    89,
      89,    90,    90,    91,    91,    91,    91,    91,    91,    91,
      92,    92,    92,    92,    93,    93,    94,    95,    96,    97,
      98,    99,   100,   100,   101,   101,   101,   101,   102,   103,
     103,   104,   104,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   106,   106,   107,   107,
     108,   109,   109,   110,   111,   111,   112,   113,   113,   114,
     114,   114,   115,   115,   115,   116,   116,   116,   116,   116,
     117,   117,   118,   118,   118,   118,   119,   119,   120,   120,
     120,   120,   120,   121,   121,   121,   121,   122,   122,   123,
     124,   125,   126,   126,   127,   128,   129,   129,   129,   129,
     130,   130,   130,   130,   130,   130,   131,   131,   131,   131,
     131,   131,   131,   131,   132,   132,   132,   132,   132,   132,
     132,   132
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     2,     1,     3,     1,     2,     3,     5,
       6,     3,     1,     3,     1,     3,     1,     2,     3,     3,
       2,     1,     1,     1,     2,     1,     4,     3,     2,     6,
       5,     5,     4,     3,     1,     1,     2,     3,     4,     2,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     3,     5,     3,     2,     3,     3,     2,     3,
       2,     4,     3,     1,     4,     4,     4,     4,     3,     3,
       4,     3,     5,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     4,     3,     3,
       2,     1,     2,     1,     2,     4,     2,     3,     1,     1,
       2,     4,     1,     1,     1,     1,     3,     3,     1,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     3,
       3,     3,     1,     2,     4,     4,     1,     1,     3,     1,
       3,     3,     3,     3,     3,     3,     1,     3,     4,     4,
       3,     5,     6,     6,     1,     1,     1,     1,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       0,     0,     0,     0,     2,     4,     6,     0,    16,     0,
      14,     0,     1,     3,     0,     7,     0,     5,     0,     8,
       0,    17,     0,     0,    13,    15,   146,     0,   122,   118,
     119,   120,   121,     0,   137,    12,   136,   139,    25,   102,
     103,   104,    23,    20,    21,    22,     0,     0,    18,     0,
       0,     9,     0,     0,   160,     0,   158,   161,   159,   154,
     155,   156,   157,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,    24,    19,   147,     0,    12,    10,
      11,   140,   141,   142,   143,   144,   145,   138,   150,    27,
      35,     0,     0,     0,    34,    16,    39,     0,     0,     0,
       0,     0,     0,     0,    91,     0,     0,    99,     0,     0,
     132,     0,    76,     0,    82,    83,    73,    84,    48,     0,
      42,    43,     0,    44,     0,    45,     0,     0,    46,    47,
      49,    74,    75,    77,    79,    80,    78,    85,    81,    63,
     108,     0,   112,   137,   117,   123,   124,   125,   126,    93,
     109,   115,     0,     0,   148,   149,     0,     0,    32,    36,
       0,     0,     0,     0,     0,   105,     0,   116,     0,     0,
      86,    90,    92,     0,    94,    98,    96,   100,   146,     0,
       0,     0,   133,     0,   128,     0,     0,     0,    40,    41,
      50,    58,    60,     0,     0,     0,    26,     0,     0,   151,
       0,    12,    37,     0,    30,    33,   111,    56,    59,     0,
       0,     0,    71,     0,     0,     0,     0,     0,   129,   107,
     130,   146,     0,     0,   106,   131,   127,     0,     0,    52,
       0,    62,    88,    89,   110,    31,     0,   152,   153,    38,
      61,     0,     0,    67,    66,    65,    64,     0,    87,    95,
      97,   101,   134,   135,    51,     0,     0,    55,    29,     0,
       0,    72,    57,    53,    54,    68,    69,    12,    70
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     3,     4,     5,     6,     7,   116,   117,    10,    15,
      23,    43,    44,    45,    46,    93,    94,   118,   119,   120,
     121,   229,   122,   230,   123,   124,   125,   126,   127,   128,
     243,   244,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   176,   138,    47,   139,   140,   141,   142,    34,   144,
     145,   146,   147,   148,   149,   150,   151,    35,    36,    37,
      68
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -167
static const short int yypact[] =
{
     166,    25,    33,    46,   166,  -167,  -167,    41,  -167,   148,
      57,    14,  -167,  -167,   160,  -167,    25,  -167,    66,  -167,
      21,  -167,   259,   162,    57,  -167,    16,    76,  -167,  -167,
    -167,  -167,  -167,   177,  -167,   690,  -167,    81,    10,  -167,
    -167,  -167,  -167,  -167,  -167,  -167,    99,   113,  -167,   259,
      60,  -167,   115,   260,  -167,   260,  -167,  -167,  -167,  -167,
    -167,  -167,  -167,   260,   260,   260,   260,   260,   260,   124,
     260,    97,   251,  -167,    11,  -167,  -167,   192,   563,  -167,
     690,   729,   729,   729,   729,   729,   729,   690,    16,   690,
     127,   151,   170,   195,  -167,   399,  -167,   260,   260,    74,
     172,   260,   260,    74,   320,    84,   184,   320,   123,   260,
     320,   178,  -167,    37,  -167,  -167,   198,   200,  -167,   311,
    -167,  -167,   371,  -167,   371,  -167,   371,     5,  -167,  -167,
    -167,  -167,  -167,  -167,  -167,  -167,  -167,  -167,  -167,  -167,
     207,   219,  -167,   236,  -167,  -167,  -167,  -167,  -167,  -167,
     257,  -167,   260,   144,  -167,  -167,   239,   260,  -167,   213,
     265,   101,   263,   458,   505,   264,    35,  -167,   371,   446,
     633,   266,   198,   225,   198,   270,  -167,   678,   118,    23,
      49,    -1,   198,   131,  -167,   217,   279,   575,  -167,  -167,
     145,  -167,  -167,    74,   295,   283,   690,   289,   250,  -167,
     252,   621,   690,   260,  -167,  -167,  -167,  -167,  -167,   260,
     262,   262,  -167,    74,   260,   260,   184,   260,  -167,  -167,
    -167,   348,    62,    90,  -167,  -167,  -167,   371,   260,   282,
     371,  -167,   198,  -167,  -167,  -167,   298,  -167,  -167,   690,
     198,   299,   300,  -167,  -167,  -167,  -167,   312,   690,   198,
    -167,   690,  -167,  -167,  -167,   517,   371,   284,  -167,    99,
     371,  -167,  -167,  -167,  -167,  -167,  -167,   191,  -167
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -167,  -167,  -167,   322,    13,  -167,   -17,   327,   315,  -167,
    -167,   287,  -167,  -167,  -167,  -142,   183,   -46,  -167,  -114,
    -167,    88,  -167,  -167,  -167,  -167,  -167,  -167,   -74,  -167,
     122,   135,  -167,  -167,  -167,  -167,  -167,  -167,  -167,  -167,
    -167,   132,  -167,  -167,  -166,  -167,  -167,  -167,   -63,  -167,
    -167,  -167,  -167,  -167,  -111,  -167,  -167,   -49,  -167,  -167,
    -167
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -147
static const short int yytable[] =
{
      73,    78,   186,    33,    80,   189,    81,    53,   190,   143,
     191,   198,   192,   193,    82,    83,    84,    85,    86,    87,
      19,    89,    17,    70,   152,   166,    26,   231,    27,   171,
       8,    53,   194,    77,   180,    42,   167,   220,    11,   185,
     167,   223,   178,   193,   184,   143,    12,   247,   163,   164,
     143,    14,   169,   170,   211,   209,   143,   193,   177,   143,
     218,   143,    42,   143,   187,    26,    18,    76,    71,   153,
      53,    25,    20,   108,  -147,   109,   110,   111,    28,   165,
      29,    30,    51,   233,    31,    32,   219,   172,   174,    26,
      69,   179,   181,   182,    28,   113,    29,    30,   161,   252,
      31,    32,    90,   196,    91,   143,    90,   201,   202,    72,
     108,    92,   109,   254,   111,    92,   257,    28,    74,    29,
      30,    79,   210,    31,    32,  -105,  -105,   253,   178,    88,
     167,    28,   113,    29,    30,   173,   221,    31,    32,   200,
     157,    28,   263,    29,    30,    92,   266,    31,    32,    90,
     167,   197,     2,   268,   239,  -105,    16,   158,    92,   108,
     227,   109,   228,   111,   143,   248,   222,   143,   251,     1,
       2,    21,    22,    48,    49,   159,    50,   232,   168,   255,
      28,   113,    29,    30,    52,    53,    31,    32,    28,   175,
      29,    30,   240,   143,    31,    32,    95,   143,   249,   154,
      53,    72,   160,   161,   143,    54,    53,    97,    16,    98,
      99,   267,   100,   265,   183,   101,  -113,   102,    55,   103,
     104,   105,   106,   107,   224,   193,   203,   108,   195,   109,
     110,   111,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    26,  -116,   199,   112,    28,   113,
      29,    30,   114,   115,    31,    32,    95,   236,   161,   237,
      53,    72,    96,     2,    38,    26,  -114,    97,   206,    98,
      99,   204,   100,   162,   193,   101,   215,   102,   216,   103,
     104,   105,   106,   107,   241,   242,   225,   108,   234,   109,
     110,   111,    39,    40,    41,   235,    28,   256,    29,    30,
      26,   228,    31,    32,   258,   259,   260,   112,    28,   113,
      29,    30,   114,   115,    31,    32,    95,    28,   261,    29,
      30,    72,   188,    31,    32,  -147,    13,    97,     9,    98,
      99,    24,   100,   245,   110,   101,    75,   102,     0,   103,
     104,   105,   106,   107,   205,   264,   246,   108,   250,   109,
     110,   111,    28,     0,    29,    30,   -35,     0,    31,    32,
       0,   157,     0,     0,     0,     0,     0,   112,    28,   113,
      29,    30,   114,   115,    31,    32,    95,  -147,     0,  -147,
    -147,    72,     0,  -147,  -147,   -35,     0,    97,     0,    98,
      99,     0,   100,     0,     0,   101,     0,   102,     0,   103,
     104,   105,   106,   107,     0,     0,    50,   108,  -146,   109,
     110,   111,     0,  -146,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -105,   112,    28,   113,
      29,    30,   114,   115,    31,    32,     0,     0,     0,     0,
    -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,
    -146,  -146,   212,     0,     0,     0,     0,  -147,     0,     0,
      54,     0,     0,     0,   207,     0,     0,     0,     0,     0,
       0,   213,    54,    55,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,     0,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,   208,     0,     0,     0,     0,     0,     0,     0,    54,
       0,     0,     0,   262,     0,     0,     0,     0,     0,     0,
       0,    54,    55,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    55,     0,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
     155,     0,     0,     0,     0,     0,     0,    54,     0,     0,
       0,     0,   226,     0,     0,     0,     0,     0,     0,    54,
      55,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,     0,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,   238,     0,
       0,     0,     0,     0,     0,    54,     0,     0,     0,     0,
       0,   214,     0,     0,     0,     0,     0,    54,    55,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      55,     0,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,   217,     0,     0,     0,
       0,     0,    54,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    54,    55,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    55,     0,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,  -147,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -147,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147
};

static const short int yycheck[] =
{
      46,    50,   113,    20,    53,   119,    55,     8,   122,    72,
     124,   153,   126,     8,    63,    64,    65,    66,    67,    68,
       6,    70,     9,    13,    13,    99,     5,   193,     7,   103,
       5,     8,    27,    50,   108,    22,    99,    38,     5,   113,
     103,   183,     5,     8,     7,   108,     0,   213,    97,    98,
     113,    10,   101,   102,   168,    20,   119,     8,   107,   122,
      37,   124,    49,   126,   113,     5,     9,     7,    58,    58,
       8,     5,    58,    36,    58,    38,    39,    40,    57,     5,
      59,    60,     6,   194,    63,    64,    37,   104,   105,     5,
       9,   108,   109,   110,    57,    58,    59,    60,     8,    37,
      63,    64,     5,   152,     7,   168,     5,   156,   157,    10,
      36,    14,    38,   227,    40,    14,   230,    57,     5,    59,
      60,     6,   168,    63,    64,     7,     8,    37,     5,     5,
     193,    57,    58,    59,    60,    51,     5,    63,    64,   156,
      13,    57,   256,    59,    60,    14,   260,    63,    64,     5,
     213,     7,     4,   267,   203,    37,     8,     6,    14,    36,
      15,    38,    17,    40,   227,   214,   183,   230,   217,     3,
       4,    11,    12,    11,    12,     5,    58,   194,     6,   228,
      57,    58,    59,    60,     7,     8,    63,    64,    57,     5,
      59,    60,   209,   256,    63,    64,     5,   260,   215,     7,
       8,    10,     7,     8,   267,    14,     8,    16,     8,    18,
      19,   260,    21,   259,    36,    24,     9,    26,    27,    28,
      29,    30,    31,    32,     7,     8,    13,    36,     9,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,     5,     9,     7,    56,    57,    58,
      59,    60,    61,    62,    63,    64,     5,     7,     8,     7,
       8,    10,    11,     4,     5,     5,     9,    16,     5,    18,
      19,     6,    21,     9,     8,    24,    51,    26,     8,    28,
      29,    30,    31,    32,    22,    23,     7,    36,     5,    38,
      39,    40,    33,    34,    35,     6,    57,    15,    59,    60,
       5,    17,    63,    64,     6,     6,     6,    56,    57,    58,
      59,    60,    61,    62,    63,    64,     5,    57,     6,    59,
      60,    10,    11,    63,    64,     5,     4,    16,     1,    18,
      19,    16,    21,   211,    39,    24,    49,    26,    -1,    28,
      29,    30,    31,    32,   161,   257,   211,    36,   216,    38,
      39,    40,    57,    -1,    59,    60,     8,    -1,    63,    64,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,     5,    57,    -1,    59,
      60,    10,    -1,    63,    64,    37,    -1,    16,    -1,    18,
      19,    -1,    21,    -1,    -1,    24,    -1,    26,    -1,    28,
      29,    30,    31,    32,    -1,    -1,    58,    36,     9,    38,
      39,    40,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,     6,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      14,    -1,    -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    14,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,
      -1,    -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    14,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,
      -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    14,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,     8,    -1,    -1,    -1,    -1,    -1,    14,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,     8,    -1,    -1,    -1,
      -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    14,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,     4,    73,    74,    75,    76,    77,     5,    79,
      80,     5,     0,    75,    10,    81,     8,    76,     9,     6,
      58,    11,    12,    82,    80,     5,     5,     7,    57,    59,
      60,    63,    64,    78,   120,   129,   130,   131,     5,    33,
      34,    35,    76,    83,    84,    85,    86,   115,    11,    12,
      58,     6,     7,     8,    14,    27,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,   132,     9,
      13,    58,    10,    89,     5,    83,     7,    78,   129,     6,
     129,   129,   129,   129,   129,   129,   129,   129,     5,   129,
       5,     7,    14,    87,    88,     5,    11,    16,    18,    19,
      21,    24,    26,    28,    29,    30,    31,    32,    36,    38,
      39,    40,    56,    58,    61,    62,    78,    79,    89,    90,
      91,    92,    94,    96,    97,    98,    99,   100,   101,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   114,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    13,    58,     7,     7,    58,    13,     6,     5,
       7,     8,     9,   129,   129,     5,   100,   120,     6,   129,
     129,   100,    78,    51,    78,     5,   113,   129,     5,    78,
     100,    78,    78,    36,     7,   100,   126,   129,    11,    91,
      91,    91,    91,     8,    27,     9,   129,     7,    87,     7,
      78,   129,   129,    13,     6,    88,     5,     6,     6,    20,
      89,    91,     6,    25,     8,    51,     8,     8,    37,    37,
      38,     5,    78,    87,     7,     7,     7,    15,    17,    93,
      95,   116,    78,   126,     5,     6,     7,     7,     7,   129,
      78,    22,    23,   102,   103,   102,   103,   116,   129,    78,
     113,   129,    37,    37,    91,   129,    15,    91,     6,     6,
       6,     6,     6,    91,    93,    89,    91,   129,    91
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
#line 47 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 3:
#line 49 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 4:
#line 50 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 5:
#line 52 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 6:
#line 53 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 7:
#line 55 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 8:
#line 57 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 9:
#line 59 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 10:
#line 62 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 11:
#line 64 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 12:
#line 65 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 13:
#line 68 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 14:
#line 70 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 15:
#line 81 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 16:
#line 82 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 17:
#line 85 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 18:
#line 86 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 19:
#line 88 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 20:
#line 89 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 21:
#line 91 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 22:
#line 92 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 23:
#line 93 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 24:
#line 95 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 25:
#line 96 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 26:
#line 97 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 27:
#line 98 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 28:
#line 100 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 29:
#line 102 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 30:
#line 103 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 31:
#line 104 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 32:
#line 105 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 33:
#line 107 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 34:
#line 108 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 35:
#line 110 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 36:
#line 111 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 37:
#line 112 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 38:
#line 113 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 39:
#line 115 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 40:
#line 116 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 41:
#line 118 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 42:
#line 119 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 43:
#line 121 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 44:
#line 122 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 45:
#line 123 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 46:
#line 124 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 47:
#line 125 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 48:
#line 126 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 49:
#line 127 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 50:
#line 129 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 51:
#line 130 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 52:
#line 131 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 53:
#line 132 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 54:
#line 144 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 55:
#line 145 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 56:
#line 150 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 57:
#line 152 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 58:
#line 154 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 59:
#line 158 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 60:
#line 160 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 61:
#line 163 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 62:
#line 165 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 63:
#line 166 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 64:
#line 168 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 65:
#line 169 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 66:
#line 170 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 67:
#line 171 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 68:
#line 174 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 69:
#line 176 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 70:
#line 178 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 71:
#line 181 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 72:
#line 182 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 73:
#line 184 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 74:
#line 185 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 75:
#line 186 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 76:
#line 188 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 77:
#line 189 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 78:
#line 190 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 79:
#line 191 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 80:
#line 192 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 81:
#line 193 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 82:
#line 194 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 83:
#line 195 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 84:
#line 196 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 85:
#line 197 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 86:
#line 200 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 87:
#line 201 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 88:
#line 203 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 89:
#line 204 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 90:
#line 206 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 91:
#line 208 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 92:
#line 209 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 93:
#line 211 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 94:
#line 213 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 95:
#line 214 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 96:
#line 216 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 97:
#line 218 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 98:
#line 219 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 99:
#line 221 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 100:
#line 222 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 101:
#line 223 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 102:
#line 225 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 103:
#line 226 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 104:
#line 227 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 105:
#line 229 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 106:
#line 230 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 107:
#line 231 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 108:
#line 232 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 109:
#line 233 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 110:
#line 236 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 111:
#line 237 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 112:
#line 239 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 113:
#line 240 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 114:
#line 241 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 115:
#line 242 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 116:
#line 245 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 117:
#line 246 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 118:
#line 248 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 119:
#line 249 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 120:
#line 250 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 121:
#line 251 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 122:
#line 252 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 123:
#line 254 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 124:
#line 255 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 125:
#line 256 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 126:
#line 257 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 127:
#line 259 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 128:
#line 260 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 129:
#line 262 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 130:
#line 264 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 131:
#line 266 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 132:
#line 268 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 133:
#line 269 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 134:
#line 271 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 135:
#line 273 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 136:
#line 275 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 137:
#line 276 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 138:
#line 277 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 139:
#line 278 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 140:
#line 280 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 141:
#line 281 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 142:
#line 282 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 143:
#line 283 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 144:
#line 284 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 145:
#line 285 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 146:
#line 287 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 147:
#line 288 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 148:
#line 289 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 149:
#line 290 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 150:
#line 291 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 151:
#line 292 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 152:
#line 293 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 153:
#line 294 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 154:
#line 296 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 155:
#line 297 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 156:
#line 298 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 157:
#line 299 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 158:
#line 300 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 159:
#line 301 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 160:
#line 302 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 161:
#line 303 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 2438 "yacc.cpp"

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


#line 305 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"

void yyerror(char *s) 
{
	;
}

int yylex()
{
	return lexer->yylex();

}
void main(void)
{
	Parser* p = new Parser();
	p->parse();
	
}
