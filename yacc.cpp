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
     EXCEPT = 278,
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
     stmt_8 = 320,
     stmt_7 = 321,
     stmt_6 = 322,
     stmt_5 = 323,
     stmt_4 = 324,
     stmt_3 = 325,
     stmt_2 = 326,
     stmt_1 = 327
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
#define EXCEPT 278
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
#define stmt_8 320
#define stmt_7 321
#define stmt_6 322
#define stmt_5 323
#define stmt_4 324
#define stmt_3 325
#define stmt_2 326
#define stmt_1 327




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
		int lineNum;
		int colNum;
	}r;
} YYSTYPE;
/* Line 196 of yacc.c.  */
#line 260 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 272 "yacc.cpp"

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
#define YYLAST   921

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  61
/* YYNRULES -- Number of rules. */
#define YYNRULES  191
/* YYNRULES -- Number of states. */
#define YYNSTATES  334

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   327

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
      65,    66,    67,    68,    69,    70,    71,    72
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    14,    18,    24,    26,
      29,    33,    39,    46,    50,    52,    56,    62,    66,    72,
      78,    86,    90,    94,   100,   102,   106,   112,   115,   119,
     123,   126,   128,   130,   132,   135,   137,   142,   146,   149,
     156,   163,   169,   175,   181,   186,   190,   194,   198,   202,
     204,   207,   211,   216,   219,   223,   226,   228,   230,   232,
     234,   236,   238,   240,   242,   245,   250,   254,   260,   264,
     267,   271,   275,   278,   282,   285,   290,   297,   302,   306,
     312,   316,   322,   326,   328,   333,   338,   343,   348,   352,
     356,   361,   365,   371,   373,   375,   377,   379,   381,   383,
     385,   387,   389,   391,   393,   395,   397,   400,   405,   409,
     415,   419,   423,   429,   433,   436,   441,   444,   446,   449,
     451,   454,   459,   462,   466,   468,   470,   473,   478,   480,
     482,   484,   488,   494,   498,   502,   508,   512,   514,   516,
     520,   524,   526,   528,   530,   532,   534,   536,   538,   540,
     542,   544,   546,   548,   550,   552,   554,   558,   561,   565,
     569,   573,   575,   578,   583,   588,   593,   595,   597,   601,
     603,   607,   611,   615,   619,   623,   627,   629,   633,   638,
     643,   647,   653,   660,   667,   669,   671,   673,   675,   677,
     679,   681
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
      74,     0,    -1,    75,    -1,    75,    76,    -1,    76,    -1,
       3,    80,    77,    -1,     3,     5,    77,    -1,     3,     5,
       9,     5,    77,    -1,    77,    -1,    78,    82,    -1,     4,
       5,     6,    -1,     4,     5,    58,     7,     6,    -1,     4,
       5,    58,    79,     7,     6,    -1,    79,     8,   130,    -1,
     130,    -1,    80,     8,    81,    -1,     5,     9,     5,     8,
      81,    -1,    80,     8,     5,    -1,     5,     9,     5,     8,
       5,    -1,    80,     8,     5,     9,     5,    -1,     5,     9,
       5,     8,     5,     9,     5,    -1,     5,     8,    81,    -1,
       5,     8,     5,    -1,     5,     8,     5,     9,     5,    -1,
      81,    -1,    81,     9,     5,    -1,     5,     9,     5,     9,
       5,    -1,    10,    11,    -1,    10,    83,    11,    -1,    83,
      12,    84,    -1,    12,    84,    -1,    85,    -1,    86,    -1,
      77,    -1,   116,     5,    -1,     5,    -1,   116,     5,    13,
     130,    -1,     5,    13,   130,    -1,    87,    90,    -1,   116,
       5,    58,    88,     7,     6,    -1,   116,     5,    58,     5,
       7,     6,    -1,     5,    58,    88,     7,     6,    -1,     5,
      58,     5,     7,     6,    -1,   116,     5,    58,     7,     6,
      -1,     5,    58,     7,     6,    -1,    88,     8,    89,    -1,
       5,     8,    89,    -1,    88,     8,     5,    -1,     5,     8,
       5,    -1,    89,    -1,    14,     5,    -1,     5,    13,   130,
      -1,    14,     5,    13,   130,    -1,    10,    11,    -1,    10,
      91,    11,    -1,    91,    92,    -1,    92,    -1,    93,    -1,
      97,    -1,    99,    -1,   102,    -1,   105,    -1,    90,    -1,
     106,    -1,    95,    92,    -1,    95,    92,    15,    92,    -1,
      95,    92,    94,    -1,    95,    92,    94,    15,    92,    -1,
      96,    92,    94,    -1,    96,    92,    -1,    16,   130,     6,
      -1,    17,   130,     6,    -1,    98,    92,    -1,    18,   130,
       6,    -1,   100,    92,    -1,    19,   101,    20,    79,    -1,
      19,     5,     8,     5,    20,    79,    -1,    19,     5,    20,
      79,    -1,   101,     8,   117,    -1,     5,     8,     5,     8,
     117,    -1,   101,     8,     5,    -1,     5,     8,     5,     8,
       5,    -1,     5,     8,   117,    -1,   117,    -1,    21,     6,
      92,   104,    -1,    21,     6,    92,   103,    -1,    21,     6,
      90,   104,    -1,    21,     6,    90,   103,    -1,    22,     6,
      90,    -1,    23,     6,    92,    -1,    23,     6,   130,    92,
      -1,    24,   130,     6,    -1,    24,   130,    25,   117,     6,
      -1,    79,    -1,   107,    -1,   108,    -1,    56,    -1,   109,
      -1,   112,    -1,   110,    -1,   111,    -1,   115,    -1,    61,
      -1,    62,    -1,    80,    -1,   113,    -1,    26,   130,    -1,
      26,   130,     8,   130,    -1,   101,    27,    79,    -1,     5,
       8,     5,    27,    79,    -1,     5,    27,    79,    -1,   101,
      27,   127,    -1,     5,     8,     5,    27,   127,    -1,     5,
      27,   127,    -1,    28,   101,    -1,    28,     5,     8,     5,
      -1,    28,     5,    -1,    29,    -1,    29,    79,    -1,   127,
      -1,    30,    79,    -1,    30,    51,    51,    79,    -1,    31,
     114,    -1,     5,     8,   114,    -1,     5,    -1,    32,    -1,
      32,   130,    -1,    32,   130,     8,   130,    -1,    33,    -1,
      34,    -1,    35,    -1,    58,   101,     7,    -1,    58,     5,
       8,     5,     7,    -1,    58,     5,     7,    -1,    36,   101,
      37,    -1,    36,     5,     8,     5,    37,    -1,    36,     5,
      37,    -1,   118,    -1,   128,    -1,   119,     9,     5,    -1,
       5,     9,     5,    -1,   120,    -1,   118,    -1,   128,    -1,
     129,    -1,   121,    -1,   122,    -1,    59,    -1,    60,    -1,
      63,    -1,    64,    -1,    57,    -1,   123,    -1,   124,    -1,
     125,    -1,   126,    -1,    58,   130,     7,    -1,    58,     7,
      -1,    36,    79,    37,    -1,    38,    79,    38,    -1,    58,
     127,     7,    -1,    39,    -1,    39,    79,    -1,    40,    36,
      79,    37,    -1,    40,    36,    88,    37,    -1,    40,    36,
       5,    37,    -1,   131,    -1,   121,    -1,   130,   133,   130,
      -1,   132,    -1,   130,    27,   130,    -1,   130,    48,   130,
      -1,   130,    49,   130,    -1,   130,    50,   130,    -1,   130,
      51,   130,    -1,   130,    52,   130,    -1,     5,    -1,     5,
      58,     7,    -1,     5,    58,    79,     7,    -1,     5,    58,
     130,     7,    -1,   132,     9,     5,    -1,   132,     9,     5,
      58,     7,    -1,   132,     9,     5,    58,    79,     7,    -1,
     132,     9,     5,    58,   130,     7,    -1,    44,    -1,    45,
      -1,    46,    -1,    47,    -1,    41,    -1,    43,    -1,    14,
      -1,    42,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,    47,    47,    50,    51,    54,    55,    56,    57,    60,
      63,    64,    65,    69,    70,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    84,    95,    96,   100,   101,   104,
     105,   108,   109,   110,   113,   114,   115,   116,   119,   122,
     123,   124,   125,   126,   127,   130,   131,   132,   133,   134,
     137,   138,   139,   142,   143,   146,   147,   150,   151,   152,
     153,   154,   155,   156,   159,   160,   161,   162,   165,   166,
     169,   172,   175,   178,   181,   184,   185,   186,   189,   190,
     191,   192,   193,   194,   197,   198,   199,   200,   203,   206,
     207,   210,   211,   214,   215,   216,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   230,   231,   234,   235,
     236,   237,   238,   239,   242,   243,   244,   247,   248,   251,
     254,   255,   258,   261,   262,   265,   266,   267,   270,   271,
     272,   275,   276,   277,   278,   279,   280,   281,   282,   285,
     286,   289,   290,   291,   292,   295,   296,   299,   300,   301,
     302,   303,   306,   307,   308,   309,   312,   313,   316,   319,
     322,   325,   326,   329,   332,   333,   336,   337,   338,   339,
     342,   343,   344,   345,   346,   347,   350,   351,   352,   353,
     354,   355,   356,   357,   360,   361,   362,   363,   364,   365,
     366,   367
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IMPORT", "CLASS", "ID", "SEMI_COLUMN",
  "CLOSE_S", "COMMA", "DOT", "BEGIN", "END", "DEF", "ASSIGN", "STAR",
  "ELSE", "IF", "ELIF", "WHILE", "FOR", "IN", "TRY", "FINALLY", "EXCEPT",
  "WITH", "AS", "ASSERT", "EQUAL", "DEL", "RETURN", "PRINT", "GLOBAL",
  "RAISE", "PRIVATE", "PUBLIC", "PROTECTED", "OPEN_D", "CLOSE_D", "RE_COT",
  "YIELD", "PRIMARY", "OR", "AND", "NOT", "PLUS", "MINUS", "DIV", "MOD",
  "NOT_EQUAL", "LESS_THAN", "LESS_OR_EQUAL", "MORE_THAN", "MORE_OR_EQUAL",
  "TRUE", "FALSE", "NEW_LINE", "PASS", "CHAR_VALUE", "OPEN_S",
  "STRING_VALUE", "INTEGER_VALUE", "BREAK", "CONTINUE", "LONG_VALUE",
  "FLOAT_VALUE", "stmt_8", "stmt_7", "stmt_6", "stmt_5", "stmt_4",
  "stmt_3", "stmt_2", "stmt_1", "$accept", "program", "units", "unit",
  "class_decl", "class_h", "expr_list", "import_list", "import",
  "class_body", "dm_list", "dm", "var_declaration", "method_declaration",
  "method_h", "args_list", "arg", "block_stmt", "stmt_list", "stmt",
  "if_stmt", "elif_stmt", "if_header", "elif_header", "while_stmt",
  "while_header", "for_stmt", "for_header", "target_list", "try_stmt",
  "finally_stmt", "except_stmt", "with_stmt", "simple_stmt_list",
  "assert_stmt", "assignment_stmt", "del_stmt", "return_stmt",
  "yield_stmt", "print_stmt", "global_stmt", "id_list", "raise_stmt",
  "access_modef", "target", "attributeref", "primary", "atom", "literal",
  "enclosure", "parenth_form", "list_display", "string_conversion",
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
     325,   326,   327
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    73,    74,    75,    75,    76,    76,    76,    76,    77,
      78,    78,    78,    79,    79,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    81,    81,    82,    82,    83,
      83,    84,    84,    84,    85,    85,    85,    85,    86,    87,
      87,    87,    87,    87,    87,    88,    88,    88,    88,    88,
      89,    89,    89,    90,    90,    91,    91,    92,    92,    92,
      92,    92,    92,    92,    93,    93,    93,    93,    94,    94,
      95,    96,    97,    98,    99,   100,   100,   100,   101,   101,
     101,   101,   101,   101,   102,   102,   102,   102,   103,   104,
     104,   105,   105,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   107,   107,   108,   108,
     108,   108,   108,   108,   109,   109,   109,   110,   110,   111,
     112,   112,   113,   114,   114,   115,   115,   115,   116,   116,
     116,   117,   117,   117,   117,   117,   117,   117,   117,   118,
     118,   119,   119,   119,   119,   120,   120,   121,   121,   121,
     121,   121,   122,   122,   122,   122,   123,   123,   124,   125,
     126,   127,   127,   128,   129,   129,   130,   130,   130,   130,
     131,   131,   131,   131,   131,   131,   132,   132,   132,   132,
     132,   132,   132,   132,   133,   133,   133,   133,   133,   133,
     133,   133
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     2,     1,     3,     3,     5,     1,     2,
       3,     5,     6,     3,     1,     3,     5,     3,     5,     5,
       7,     3,     3,     5,     1,     3,     5,     2,     3,     3,
       2,     1,     1,     1,     2,     1,     4,     3,     2,     6,
       6,     5,     5,     5,     4,     3,     3,     3,     3,     1,
       2,     3,     4,     2,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     4,     3,     5,     3,     2,
       3,     3,     2,     3,     2,     4,     6,     4,     3,     5,
       3,     5,     3,     1,     4,     4,     4,     4,     3,     3,
       4,     3,     5,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     4,     3,     5,
       3,     3,     5,     3,     2,     4,     2,     1,     2,     1,
       2,     4,     2,     3,     1,     1,     2,     4,     1,     1,
       1,     3,     5,     3,     3,     5,     3,     1,     1,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     3,     3,
       3,     1,     2,     4,     4,     4,     1,     1,     3,     1,
       3,     3,     3,     3,     3,     3,     1,     3,     4,     4,
       3,     5,     6,     6,     1,     1,     1,     1,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       0,     0,     0,     0,     2,     4,     8,     0,     0,     0,
      24,     0,     1,     3,     0,     9,     0,     0,     6,     0,
       5,     0,    10,     0,    27,     0,     0,    22,    21,     0,
      17,    15,    25,   176,     0,   151,   147,   148,   149,   150,
       0,   167,    14,   166,   169,    35,   128,   129,   130,    33,
      30,    31,    32,     0,     0,    28,     0,     0,     0,     0,
       7,     0,     0,    11,     0,     0,   190,     0,   188,   191,
     189,   184,   185,   186,   187,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    38,    34,    29,    23,    18,
      16,    26,    19,   177,     0,    14,    12,    13,   170,   171,
     172,   173,   174,   175,   168,   180,    37,     0,     0,     0,
       0,    49,   176,    53,     0,     0,     0,     0,     0,     0,
       0,   117,     0,     0,   125,     0,     0,   161,     0,    96,
       0,   102,   103,    93,   104,    62,     0,    56,    57,     0,
      58,     0,    59,     0,     0,    60,    61,    63,    94,    95,
      97,    99,   100,    98,   105,   101,    83,   137,     0,   141,
     167,   146,   152,   153,   154,   155,   119,   138,   144,     0,
       0,     0,   178,   179,     0,     0,     0,     0,    44,    50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   145,
       0,     0,   106,   116,   114,   118,     0,   120,   124,   122,
     126,   176,     0,     0,     0,   162,     0,   176,   157,     0,
       0,     0,    54,    55,    64,    72,    74,     0,     0,     0,
      36,     0,     0,     0,    20,   181,     0,    14,    42,    48,
      46,    51,     0,    41,    47,    45,    22,    82,   140,   110,
     113,    70,    73,     0,     0,     0,     0,     0,     0,    91,
       0,     0,     0,     0,     0,     0,     0,   136,   158,   134,
     159,   176,     0,     0,   133,     0,   131,   160,   156,     0,
       0,    66,     0,    80,    78,   108,   111,   139,     0,    43,
       0,   182,   183,    52,     0,     0,     0,     0,   140,    77,
      75,     0,     0,    87,    86,    85,    84,     0,     0,   107,
     115,   121,   123,   127,     0,   165,   163,   164,     0,    65,
       0,     0,    69,    40,    39,    81,    79,    23,   109,   112,
       0,     0,     0,    92,   135,   132,    71,    67,    68,    76,
      88,    89,    14,    90
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     3,     4,     5,     6,     7,   133,   134,    10,    15,
      26,    50,    51,    52,    53,   110,   111,   135,   136,   137,
     138,   271,   139,   272,   140,   141,   142,   143,   144,   145,
     293,   294,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   199,   155,    54,   156,   157,   158,   159,    41,   161,
     162,   163,   164,   165,   166,   167,   168,    42,    43,    44,
      80
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -173
static const short int yypact[] =
{
     111,    22,    35,    43,   111,  -173,  -173,    63,   235,    38,
      85,    -3,  -173,  -173,   125,  -173,    96,   102,  -173,   113,
    -173,   116,  -173,   500,  -173,   340,   234,   140,    85,   276,
     151,    85,  -173,    67,   148,  -173,  -173,  -173,  -173,  -173,
     173,  -173,   857,  -173,   153,    -7,  -173,  -173,  -173,  -173,
    -173,  -173,  -173,   160,   183,  -173,   340,   197,   219,   224,
    -173,   244,   526,  -173,   252,   202,  -173,   202,  -173,  -173,
    -173,  -173,  -173,  -173,  -173,   202,   202,   202,   202,   202,
     202,   265,   202,   189,   332,  -173,    12,  -173,   267,   274,
      85,  -173,   267,  -173,   260,   703,  -173,   857,   869,   869,
     869,   869,   869,   869,   857,   229,   857,   145,   283,   304,
     287,  -173,    23,  -173,   202,   202,    70,   286,   202,   202,
     127,   545,   537,   322,   545,   168,   202,   545,   311,  -173,
      84,  -173,  -173,   344,   346,  -173,   392,  -173,  -173,   452,
    -173,   452,  -173,   452,     7,  -173,  -173,  -173,  -173,  -173,
    -173,  -173,  -173,  -173,  -173,  -173,  -173,   348,   360,  -173,
     367,  -173,  -173,  -173,  -173,  -173,  -173,   369,  -173,   202,
     243,   362,  -173,  -173,   560,   343,    54,   202,  -173,   372,
     374,    95,   177,   382,   401,   632,   644,   137,    29,  -173,
     452,   585,   806,   317,   399,   344,   361,   344,   406,  -173,
     818,    39,    21,    30,     3,   344,   112,     5,  -173,   333,
     402,   749,  -173,  -173,   239,  -173,  -173,   215,   401,   422,
     857,   203,   423,   358,   267,  -173,   375,   761,  -173,   428,
    -173,   857,   202,  -173,   428,  -173,    78,  -173,   427,   344,
    -173,  -173,  -173,   341,   440,   202,   202,   403,   403,  -173,
     379,   202,   439,   202,   322,   202,   481,  -173,  -173,  -173,
    -173,   142,    45,    46,  -173,   489,  -173,  -173,  -173,   452,
     202,   431,   452,   438,  -173,   344,  -173,  -173,   453,  -173,
     457,  -173,  -173,   857,   518,   461,   401,   169,  -173,   344,
     344,   463,   466,  -173,  -173,  -173,  -173,   438,   468,   857,
     425,   344,  -173,   857,    27,  -173,  -173,  -173,   298,  -173,
     691,   452,   450,  -173,  -173,   438,  -173,    86,   344,  -173,
     202,   160,   452,  -173,  -173,  -173,  -173,  -173,  -173,   344,
    -173,  -173,   272,  -173
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -173,  -173,  -173,   483,   330,  -173,   -23,   484,   -14,  -173,
    -173,   433,  -173,  -173,  -173,  -154,   -41,   -52,  -173,  -113,
    -173,   181,  -173,  -173,  -173,  -173,  -173,  -173,   122,  -173,
     247,   253,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,
    -173,   246,  -173,  -173,  -172,  -173,  -173,  -173,   -51,  -173,
    -173,  -173,  -173,  -173,  -122,  -173,  -173,   -58,  -173,  -173,
    -173
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -146
static const short int yytable[] =
{
      40,    85,    28,    22,    95,    31,    82,    97,   210,    98,
     237,    65,   264,   265,   244,   217,   223,    99,   100,   101,
     102,   103,   104,   213,   106,   169,   214,     8,   215,    65,
     216,   182,   183,   160,   218,   284,   244,   217,   217,    94,
      11,   260,     2,    12,    90,   274,    19,   256,   244,   246,
     184,    83,   263,    65,   181,    23,   185,   186,   258,   229,
     191,   192,   240,    62,   324,   189,   200,   259,   109,   189,
     170,   237,   211,    14,   160,   187,   257,   248,   298,   160,
     237,    62,   306,   307,   237,   160,  -146,   285,   160,   207,
     160,   208,   160,   237,    21,  -140,   276,    62,   195,   197,
     234,    27,   202,   204,   205,   286,   125,    29,   126,   109,
     128,   220,   316,  -140,     1,     2,   227,   261,    30,   231,
     125,    32,   126,   127,   128,    62,   109,    35,   130,    36,
      37,   189,   193,    38,    39,   230,    24,    25,   247,   160,
     235,    35,   130,    36,    37,   243,   244,    38,    39,    57,
     176,   226,   175,   176,    63,   177,   309,   245,   177,   312,
      61,   239,    81,   125,   319,   126,   189,   128,    28,    35,
      84,    36,    37,   201,   283,    38,    39,   284,   244,   305,
      64,    65,   236,   262,    35,   130,    36,    37,    86,   320,
      38,    39,   189,   299,   107,   275,   108,   303,   327,   189,
      62,   189,    88,   109,   125,   189,   126,    33,   128,   331,
     278,   176,   310,   125,   189,   126,   177,   128,   160,   333,
     273,   160,   289,   290,    89,    35,   130,    36,    37,    91,
     301,    38,    39,   189,    35,   130,    36,    37,   188,     2,
      38,    39,   194,    16,    17,    55,    56,   203,   221,    92,
     222,   125,   209,   126,   269,   128,   270,   109,    96,    35,
     160,    36,    37,   318,   332,    38,    39,   172,    65,   330,
     105,   160,    35,   130,    36,    37,    59,   112,    38,    39,
       2,   160,    84,   171,    58,    59,    66,  -146,   114,   178,
     115,   116,   190,   117,   180,   181,   118,   329,   119,    67,
     120,   121,   122,   123,   124,   325,   284,   244,   125,   179,
     126,   127,   128,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,   252,   244,   198,   129,    35,
     130,    36,    37,   131,   132,    38,    39,   112,    18,    20,
     266,   217,    84,   113,     2,    45,   287,   206,   114,   228,
     115,   116,    65,   117,    19,    49,   118,  -142,   119,    60,
     120,   121,   122,   123,   124,   280,   181,   224,   125,   219,
     126,   127,   128,    46,    47,    48,  -145,   125,  -143,   126,
     233,   128,   281,    65,   297,   232,    49,   238,   129,    35,
     130,    36,    37,   131,   132,    38,    39,   112,    35,   130,
      36,    37,    84,   212,    38,    39,    33,   217,   114,   267,
     115,   116,   253,   117,   254,   125,   118,   126,   119,   128,
     120,   121,   122,   123,   124,   291,   292,   277,   125,   279,
     126,   127,   128,   284,   244,  -146,    35,   130,    36,    37,
     127,   177,    38,    39,   300,   288,   311,   244,   129,    35,
     130,    36,    37,   131,   132,    38,    39,   112,    35,   313,
      36,    37,    84,   314,    38,    39,   317,   270,   114,   321,
     115,   116,   322,   117,   323,   125,   118,   126,   119,   128,
     120,   121,   122,   123,   124,     9,   304,    13,   125,    87,
     126,   127,   128,   328,   308,   295,    35,   130,    36,    37,
     302,   296,    38,    39,     0,    33,     0,    34,   129,    35,
     130,    36,    37,   131,   132,    38,    39,   125,     0,   126,
       0,   128,     0,   315,     0,   125,     0,   126,     0,   128,
       0,    33,     0,    93,     0,     0,     0,     0,    35,   130,
      36,    37,    33,     0,    38,    39,    35,   130,    36,    37,
    -146,     0,    38,    39,   125,     0,   126,    35,   128,    36,
      37,     0,     0,    38,    39,    33,     0,   225,     0,     0,
       0,     0,     0,     0,     0,    35,   130,    36,    37,     0,
       0,    38,    39,    35,     0,    36,    37,     0,   196,    38,
      39,   249,     0,     0,    35,     0,    36,    37,     0,    66,
      38,    39,  -146,     0,  -146,  -146,     0,     0,  -146,  -146,
     250,     0,    67,     0,     0,     0,     0,    35,     0,    36,
      37,     0,     0,    38,    39,     0,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,   241,     0,
       0,     0,     0,     0,     0,     0,    66,     0,     0,     0,
     242,     0,     0,     0,     0,     0,     0,     0,    66,    67,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    67,     0,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,   326,     0,     0,
       0,     0,     0,     0,     0,    66,     0,     0,     0,     0,
     173,     0,     0,     0,     0,     0,     0,    66,    67,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      67,     0,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,   268,     0,     0,     0,
       0,     0,     0,    66,     0,     0,     0,     0,   282,     0,
       0,     0,     0,     0,     0,    66,    67,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    67,     0,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,   251,     0,     0,     0,     0,     0,
      66,     0,     0,     0,     0,     0,   255,     0,     0,     0,
       0,     0,    66,    67,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    67,     0,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    66,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -146,    67,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -146,     0,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
    -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,
    -146,  -146
};

static const short int yycheck[] =
{
      23,    53,    16,     6,    62,    19,    13,    65,   130,    67,
     182,     8,     7,     8,     9,     8,   170,    75,    76,    77,
      78,    79,    80,   136,    82,    13,   139,     5,   141,     8,
     143,     8,     9,    84,    27,     8,     9,     8,     8,    62,
       5,    38,     4,     0,    58,   217,     8,     8,     9,    20,
      27,    58,   206,     8,     8,    58,   114,   115,    37,     5,
     118,   119,   184,    58,    37,   116,   124,    37,    14,   120,
      58,   243,   130,    10,   125,     5,    37,   190,   250,   130,
     252,    58,    37,    37,   256,   136,     8,     9,   139,     5,
     141,     7,   143,   265,     9,     9,   218,    58,   121,   122,
       5,     5,   125,   126,   127,    27,    36,     5,    38,    14,
      40,   169,   284,    27,     3,     4,   174,     5,     5,   177,
      36,     5,    38,    39,    40,    58,    14,    57,    58,    59,
      60,   182,     5,    63,    64,   176,    11,    12,   190,   190,
     181,    57,    58,    59,    60,     8,     9,    63,    64,     9,
       8,   174,     7,     8,     6,    13,   269,    20,    13,   272,
       9,   184,     9,    36,   286,    38,   217,    40,   182,    57,
      10,    59,    60,     5,   232,    63,    64,     8,     9,    37,
       7,     8,     5,   206,    57,    58,    59,    60,     5,    20,
      63,    64,   243,   251,     5,   218,     7,   255,   311,   250,
      58,   252,     5,    14,    36,   256,    38,     5,    40,   322,
       7,     8,   270,    36,   265,    38,    13,    40,   269,   332,
       5,   272,   245,   246,     5,    57,    58,    59,    60,     5,
     253,    63,    64,   284,    57,    58,    59,    60,   116,     4,
      63,    64,   120,     8,     9,    11,    12,   125,     5,     5,
       7,    36,   130,    38,    15,    40,    17,    14,     6,    57,
     311,    59,    60,   286,   322,    63,    64,     7,     8,   321,
       5,   322,    57,    58,    59,    60,     9,     5,    63,    64,
       4,   332,    10,     9,     8,     9,    14,    58,    16,     6,
      18,    19,     6,    21,     7,     8,    24,   320,    26,    27,
      28,    29,    30,    31,    32,     7,     8,     9,    36,     5,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,     8,     9,     5,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     5,     8,     9,
       7,     8,    10,    11,     4,     5,     5,    36,    16,     6,
      18,    19,     8,    21,     8,    25,    24,     9,    26,    29,
      28,    29,    30,    31,    32,     7,     8,     5,    36,     9,
      38,    39,    40,    33,    34,    35,     9,    36,     9,    38,
       6,    40,     7,     8,     5,    13,    56,     5,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     5,    57,    58,
      59,    60,    10,    11,    63,    64,     5,     8,    16,     7,
      18,    19,    51,    21,     8,    36,    24,    38,    26,    40,
      28,    29,    30,    31,    32,    22,    23,     5,    36,     6,
      38,    39,    40,     8,     9,     8,    57,    58,    59,    60,
      39,    13,    63,    64,     5,     5,    15,     9,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     5,    57,     6,
      59,    60,    10,     6,    63,    64,     5,    17,    16,     6,
      18,    19,     6,    21,     6,    36,    24,    38,    26,    40,
      28,    29,    30,    31,    32,     1,     5,     4,    36,    56,
      38,    39,    40,   312,     5,   248,    57,    58,    59,    60,
     254,   248,    63,    64,    -1,     5,    -1,     7,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    36,    -1,    38,
      -1,    40,    -1,     5,    -1,    36,    -1,    38,    -1,    40,
      -1,     5,    -1,     7,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,     5,    -1,    63,    64,    57,    58,    59,    60,
       5,    -1,    63,    64,    36,    -1,    38,    57,    40,    59,
      60,    -1,    -1,    63,    64,     5,    -1,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,    -1,
      -1,    63,    64,    57,    -1,    59,    60,    -1,    51,    63,
      64,     6,    -1,    -1,    57,    -1,    59,    60,    -1,    14,
      63,    64,    57,    -1,    59,    60,    -1,    -1,    63,    64,
      25,    -1,    27,    -1,    -1,    -1,    -1,    57,    -1,    59,
      60,    -1,    -1,    63,    64,    -1,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,     6,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,
       6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    14,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    14,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,     8,    -1,    -1,    -1,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    -1,     8,    -1,    -1,    -1,
      -1,    -1,    14,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    14,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,     4,    74,    75,    76,    77,    78,     5,    80,
      81,     5,     0,    76,    10,    82,     8,     9,    77,     8,
      77,     9,     6,    58,    11,    12,    83,     5,    81,     5,
       5,    81,     5,     5,     7,    57,    59,    60,    63,    64,
      79,   121,   130,   131,   132,     5,    33,    34,    35,    77,
      84,    85,    86,    87,   116,    11,    12,     9,     8,     9,
      77,     9,    58,     6,     7,     8,    14,    27,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
     133,     9,    13,    58,    10,    90,     5,    84,     5,     5,
      81,     5,     5,     7,    79,   130,     6,   130,   130,   130,
     130,   130,   130,   130,   130,     5,   130,     5,     7,    14,
      88,    89,     5,    11,    16,    18,    19,    21,    24,    26,
      28,    29,    30,    31,    32,    36,    38,    39,    40,    56,
      58,    61,    62,    79,    80,    90,    91,    92,    93,    95,
      97,    98,    99,   100,   101,   102,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   115,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,    13,
      58,     9,     7,     7,    58,     7,     8,    13,     6,     5,
       7,     8,     8,     9,    27,   130,   130,     5,   101,   121,
       6,   130,   130,     5,   101,    79,    51,    79,     5,   114,
     130,     5,    79,   101,    79,    79,    36,     5,     7,   101,
     127,   130,    11,    92,    92,    92,    92,     8,    27,     9,
     130,     5,     7,    88,     5,     7,    79,   130,     6,     5,
      89,   130,    13,     6,     5,    89,     5,   117,     5,    79,
     127,     6,     6,     8,     9,    20,    20,    90,    92,     6,
      25,     8,     8,    51,     8,     8,     8,    37,    37,    37,
      38,     5,    79,    88,     7,     8,     7,     7,     7,    15,
      17,    94,    96,     5,   117,    79,   127,     5,     7,     6,
       7,     7,     7,   130,     8,     9,    27,     5,     5,    79,
      79,    22,    23,   103,   104,   103,   104,     5,   117,   130,
       5,    79,   114,   130,     5,    37,    37,    37,     5,    92,
     130,    15,    92,     6,     6,     5,   117,     5,    79,   127,
      20,     6,     6,     6,    37,     7,     6,    92,    94,    79,
      90,    92,   130,    92
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
#line 50 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 4:
#line 51 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 5:
#line 54 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 6:
#line 55 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 7:
#line 56 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 8:
#line 57 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 9:
#line 60 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 10:
#line 63 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 12:
#line 65 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 13:
#line 69 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 14:
#line 70 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 15:
#line 74 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 16:
#line 75 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 17:
#line 76 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 18:
#line 77 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 19:
#line 78 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 20:
#line 79 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 21:
#line 80 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 22:
#line 81 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 23:
#line 82 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 24:
#line 84 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 25:
#line 95 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 27:
#line 100 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 28:
#line 101 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 29:
#line 104 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 30:
#line 105 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 31:
#line 108 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 32:
#line 109 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 33:
#line 110 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 34:
#line 113 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 35:
#line 114 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 36:
#line 115 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 37:
#line 116 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 38:
#line 119 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 39:
#line 122 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 40:
#line 123 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 41:
#line 124 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 42:
#line 125 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 43:
#line 126 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 44:
#line 127 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 45:
#line 130 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 46:
#line 131 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 47:
#line 132 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 48:
#line 133 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 49:
#line 134 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 50:
#line 137 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 51:
#line 138 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 52:
#line 139 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 53:
#line 142 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 54:
#line 143 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 55:
#line 146 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 56:
#line 147 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 57:
#line 150 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 58:
#line 151 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 59:
#line 152 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 60:
#line 153 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 61:
#line 154 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 62:
#line 155 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 63:
#line 156 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 64:
#line 159 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 65:
#line 160 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 66:
#line 161 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 67:
#line 162 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 68:
#line 165 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 69:
#line 166 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 70:
#line 169 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 71:
#line 172 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 72:
#line 175 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 73:
#line 178 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 74:
#line 181 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 75:
#line 184 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 76:
#line 185 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 77:
#line 186 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 78:
#line 189 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 79:
#line 190 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 80:
#line 191 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 81:
#line 192 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 82:
#line 193 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 83:
#line 194 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 84:
#line 197 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 85:
#line 198 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 86:
#line 199 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 87:
#line 200 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 88:
#line 203 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 89:
#line 206 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 90:
#line 207 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 91:
#line 210 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 92:
#line 211 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 93:
#line 214 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 94:
#line 215 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 95:
#line 216 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 96:
#line 218 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 97:
#line 219 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 98:
#line 220 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
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
#line 224 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 103:
#line 225 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 104:
#line 226 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 105:
#line 227 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
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
#line 234 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 109:
#line 235 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
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
#line 238 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 113:
#line 239 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 114:
#line 242 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 115:
#line 243 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 116:
#line 244 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 117:
#line 247 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 118:
#line 248 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 119:
#line 251 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 120:
#line 254 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 121:
#line 255 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 122:
#line 258 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 123:
#line 261 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 124:
#line 262 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 125:
#line 265 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 126:
#line 266 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 127:
#line 267 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 128:
#line 270 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 129:
#line 271 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 130:
#line 272 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 131:
#line 275 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 132:
#line 276 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 133:
#line 277 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 134:
#line 278 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 135:
#line 279 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 136:
#line 280 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 137:
#line 281 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 138:
#line 282 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 139:
#line 285 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 140:
#line 286 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 141:
#line 289 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 142:
#line 290 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 143:
#line 291 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 144:
#line 292 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 145:
#line 295 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 146:
#line 296 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 147:
#line 299 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 148:
#line 300 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 149:
#line 301 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 150:
#line 302 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 151:
#line 303 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 152:
#line 306 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 153:
#line 307 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 154:
#line 308 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 155:
#line 309 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 156:
#line 312 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 157:
#line 313 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 158:
#line 316 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 159:
#line 319 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 160:
#line 322 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 161:
#line 325 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 162:
#line 326 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 163:
#line 329 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 164:
#line 332 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 165:
#line 333 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 166:
#line 336 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 167:
#line 337 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 168:
#line 338 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 169:
#line 339 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 170:
#line 342 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 171:
#line 343 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 172:
#line 344 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 173:
#line 345 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 174:
#line 346 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 175:
#line 347 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 176:
#line 350 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 177:
#line 351 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 178:
#line 352 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 179:
#line 353 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 180:
#line 354 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 181:
#line 355 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 182:
#line 356 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 183:
#line 357 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 184:
#line 360 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 185:
#line 361 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 186:
#line 362 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 187:
#line 363 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 188:
#line 364 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 189:
#line 365 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 190:
#line 366 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 191:
#line 367 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 2659 "yacc.cpp"

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


#line 369 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"

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
