/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

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

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

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
     tVAR = 258,
     tMSVAR = 259,
     tGLOBREF = 260,
     tUSE = 261,
     tCOLOR = 262,
     tMS = 263,
     tINVARIANT = 264,
     tCHANNEL = 265,
     tERROR = 266,
     tDOTDOT = 267,
     tWITH = 268,
     tDECLARE = 269,
     tTIMED = 270,
     tUNIT = 271,
     tINT = 272,
     tBOOL = 273,
     tREAL = 274,
     tSTRING = 275,
     tINDEX = 276,
     tPRODUCT = 277,
     tRECORD = 278,
     tLIST = 279,
     tUNION = 280,
     tSUBSET = 281,
     tAND = 282,
     tBY = 283,
     tHACK = 284,
     tMLSEMI = 285,
     tMLDOTDOT = 286,
     tMLDECL = 287,
     tMLCOL = 288,
     tID = 289
   };
#endif
/* Tokens.  */
#define tVAR 258
#define tMSVAR 259
#define tGLOBREF 260
#define tUSE 261
#define tCOLOR 262
#define tMS 263
#define tINVARIANT 264
#define tCHANNEL 265
#define tERROR 266
#define tDOTDOT 267
#define tWITH 268
#define tDECLARE 269
#define tTIMED 270
#define tUNIT 271
#define tINT 272
#define tBOOL 273
#define tREAL 274
#define tSTRING 275
#define tINDEX 276
#define tPRODUCT 277
#define tRECORD 278
#define tLIST 279
#define tUNION 280
#define tSUBSET 281
#define tAND 282
#define tBY 283
#define tHACK 284
#define tMLSEMI 285
#define tMLDOTDOT 286
#define tMLDECL 287
#define tMLCOL 288
#define tID 289




/* Copy the first part of user declarations.  */
#line 26 "mlparse.y"

#define YYERROR_VERBOSE

#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
#include <malloc.h>
#endif

int escape (char *s);
extern int lineno;
int indent = 0;
/* needed to fix bug #563 */
extern int in_stringwithopt;
void starttag (char *s, int newline);
int closetag ();

typedef struct tag_s {
  char *tagname;
  struct tag_s *previous;
  int newline;
} tag_t;

tag_t *tagstack = NULL;

extern FILE *yyout;


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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 56 "mlparse.y"
{ char *string; }
/* Line 193 of yacc.c.  */
#line 195 "mlparse.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 208 "mlparse.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
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
      while (YYID (0))
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
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   160

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  83
/* YYNRULES -- Number of rules.  */
#define YYNRULES  123
/* YYNRULES -- Number of states.  */
#define YYNSTATES  187

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   289

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      39,    40,    42,    43,    38,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    35,    36,
       2,    37,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    41,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     6,     9,    11,    12,    13,    14,
      15,    26,    27,    28,    29,    30,    40,    41,    42,    49,
      50,    51,    56,    57,    58,    67,    68,    69,    70,    79,
      80,    81,    89,    91,    92,    94,    98,   100,   101,   104,
     105,   108,   109,   112,   114,   115,   118,   119,   122,   123,
     127,   128,   132,   133,   137,   138,   142,   143,   147,   148,
     152,   153,   160,   161,   165,   166,   170,   171,   176,   177,
     181,   182,   187,   188,   192,   193,   194,   198,   199,   200,
     208,   209,   210,   215,   216,   217,   222,   223,   224,   225,
     226,   234,   235,   236,   241,   245,   247,   251,   253,   257,
     259,   260,   265,   266,   267,   272,   273,   278,   279,   282,
     284,   285,   290,   291,   295,   296,   300,   301,   303,   305,
     308,   311,   312,   316
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,    -1,    46,    -1,    47,    46,    -1,    47,
      -1,    -1,    -1,    -1,    -1,     3,    48,    68,    35,    49,
      76,    50,    67,    36,    51,    -1,    -1,    -1,    -1,    -1,
       4,    52,    68,    35,    53,    76,    54,    36,    55,    -1,
      -1,    -1,     5,    56,    76,    37,    69,    57,    -1,    -1,
      -1,     6,    58,    69,    59,    -1,    -1,    -1,     7,    60,
      76,    37,    80,   123,    36,    61,    -1,    -1,    -1,    -1,
       9,    62,    78,    35,    63,    76,    64,    36,    -1,    -1,
      -1,    10,    65,    78,    35,    76,    36,    66,    -1,    75,
      -1,    -1,     8,    -1,    76,    38,    68,    -1,    76,    -1,
      -1,    70,    30,    -1,    -1,    72,    31,    -1,    -1,    74,
      33,    -1,    32,    -1,    -1,    77,    34,    -1,    -1,    79,
      34,    -1,    -1,    16,    81,    94,    -1,    -1,    18,    82,
      96,    -1,    -1,    17,    83,    98,    -1,    -1,    19,    84,
     100,    -1,    -1,    20,    85,   102,    -1,    -1,    13,    86,
     108,    -1,    -1,    21,    87,    76,    13,    71,    73,    -1,
      -1,    22,    88,   109,    -1,    -1,    23,    89,   110,    -1,
      -1,    24,    90,    76,   113,    -1,    -1,    25,    91,   115,
      -1,    -1,    26,    92,    76,   120,    -1,    -1,    93,    29,
      76,    -1,    -1,    -1,    13,    95,    76,    -1,    -1,    -1,
      13,    97,    39,    76,    38,    76,    40,    -1,    -1,    -1,
      13,    99,    71,    73,    -1,    -1,    -1,    13,   101,    71,
      73,    -1,    -1,    -1,    -1,    -1,    13,   103,    71,   104,
      73,   105,   106,    -1,    -1,    -1,    27,   107,    71,    73,
      -1,   108,    41,    76,    -1,    76,    -1,   109,    42,    76,
      -1,    76,    -1,   110,    42,   111,    -1,   111,    -1,    -1,
     112,    76,    35,    76,    -1,    -1,    -1,    13,   114,    71,
      73,    -1,    -1,   115,    43,   116,   118,    -1,    -1,   117,
     118,    -1,    76,    -1,    -1,    76,    35,   119,    76,    -1,
      -1,    28,   121,    73,    -1,    -1,    13,   122,    73,    -1,
      -1,   124,    -1,   126,    -1,   126,   124,    -1,   124,   126,
      -1,    -1,    14,   125,    68,    -1,    15,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    68,    68,    69,    72,    74,    78,    78,    78,    78,
      78,    80,    80,    80,    80,    80,    82,    82,    82,    84,
      84,    84,    86,    86,    86,    88,    88,    88,    88,    89,
      89,    89,    91,    95,    96,   100,   102,   106,   106,   112,
     112,   118,   118,   124,   130,   130,   134,   134,   138,   138,
     140,   140,   142,   142,   144,   144,   146,   146,   148,   148,
     150,   150,   152,   152,   154,   154,   156,   156,   158,   158,
     160,   160,   162,   162,   167,   168,   168,   173,   174,   174,
     179,   180,   180,   185,   186,   186,   191,   192,   195,   195,
     192,   201,   202,   202,   206,   208,   212,   214,   218,   220,
     224,   224,   229,   230,   230,   234,   234,   236,   236,   240,
     242,   242,   246,   246,   248,   248,   252,   253,   254,   255,
     256,   259,   259,   263
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tVAR", "tMSVAR", "tGLOBREF", "tUSE",
  "tCOLOR", "tMS", "tINVARIANT", "tCHANNEL", "tERROR", "tDOTDOT", "tWITH",
  "tDECLARE", "tTIMED", "tUNIT", "tINT", "tBOOL", "tREAL", "tSTRING",
  "tINDEX", "tPRODUCT", "tRECORD", "tLIST", "tUNION", "tSUBSET", "tAND",
  "tBY", "tHACK", "tMLSEMI", "tMLDOTDOT", "tMLDECL", "tMLCOL", "tID",
  "':'", "';'", "'='", "','", "'('", "')'", "'|'", "'*'", "'+'", "$accept",
  "declarations", "nedeclarations", "declaration", "@1", "@2", "@3", "@4",
  "@5", "@6", "@7", "@8", "@9", "@10", "@11", "@12", "@13", "@14", "@15",
  "@16", "@17", "@18", "@19", "msvarhack", "idlist", "mlsemi", "@20",
  "mldotdot", "@21", "mlcol", "@22", "mldecl", "id", "@23", "name", "@24",
  "csspec", "@25", "@26", "@27", "@28", "@29", "@30", "@31", "@32", "@33",
  "@34", "@35", "@36", "@37", "withunitopt", "@38", "withboolopt", "@39",
  "withintopt", "@40", "withrealopt", "@41", "withstringopt", "@42", "@43",
  "@44", "withstringlenopt", "@45", "enumidlist", "prodcslist",
  "recfieldlist", "recfield", "@46", "withlistopt", "@47",
  "unionfieldlist", "@48", "@49", "unionfield", "@50", "subsetspec", "@51",
  "@52", "declaretimedopt", "declare", "@53", "timed", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,    58,    59,    61,    44,    40,
      41,   124,    42,    43
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    45,    46,    46,    48,    49,    50,    51,
      47,    52,    53,    54,    55,    47,    56,    57,    47,    58,
      59,    47,    60,    61,    47,    62,    63,    64,    47,    65,
      66,    47,    47,    67,    67,    68,    68,    70,    69,    72,
      71,    74,    73,    75,    77,    76,    79,    78,    81,    80,
      82,    80,    83,    80,    84,    80,    85,    80,    86,    80,
      87,    80,    88,    80,    89,    80,    90,    80,    91,    80,
      92,    80,    93,    80,    94,    95,    94,    96,    97,    96,
      98,    99,    98,   100,   101,   100,   102,   103,   104,   105,
     102,   106,   107,   106,   108,   108,   109,   109,   110,   110,
     112,   111,   113,   114,   113,   116,   115,   117,   115,   118,
     119,   118,   121,   120,   122,   120,   123,   123,   123,   123,
     123,   125,   124,   126
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     2,     1,     0,     0,     0,     0,
      10,     0,     0,     0,     0,     9,     0,     0,     6,     0,
       0,     4,     0,     0,     8,     0,     0,     0,     8,     0,
       0,     7,     1,     0,     1,     3,     1,     0,     2,     0,
       2,     0,     2,     1,     0,     2,     0,     2,     0,     3,
       0,     3,     0,     3,     0,     3,     0,     3,     0,     3,
       0,     6,     0,     3,     0,     3,     0,     4,     0,     3,
       0,     4,     0,     3,     0,     0,     3,     0,     0,     7,
       0,     0,     4,     0,     0,     4,     0,     0,     0,     0,
       7,     0,     0,     4,     3,     1,     3,     1,     3,     1,
       0,     4,     0,     0,     4,     0,     4,     0,     2,     1,
       0,     4,     0,     3,     0,     3,     0,     1,     1,     2,
       2,     0,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     6,    11,    16,    19,    22,    25,    29,    43,     0,
       3,     5,    32,    44,    44,    44,    37,    44,    46,    46,
       1,     4,     0,    36,     0,     0,     0,    20,     0,     0,
       0,     0,     0,     7,    44,    45,    12,    37,    21,    38,
      72,    26,    47,    44,    44,    35,    44,    17,    58,    48,
      52,    50,    54,    56,    60,    62,    64,    66,    68,    70,
     116,     0,    44,     0,     8,    13,    18,    44,    74,    80,
      77,    83,    86,    44,    44,   100,    44,   107,    44,   121,
     123,     0,   117,   118,    44,    27,    30,    33,     0,    95,
      59,    75,    49,    81,    53,    78,    51,    84,    55,    87,
      57,     0,    97,    63,    65,    99,    44,   102,    69,    44,
       0,    44,    23,   120,   119,    73,     0,    31,    34,     0,
      14,    44,    44,    39,     0,    39,    39,    39,    44,   100,
       0,   103,    67,   105,   109,   108,   114,   112,    71,   122,
      24,    28,     9,    15,    94,    76,    41,     0,    44,    41,
      88,    41,    96,    98,    44,    39,    44,   110,    41,    41,
      10,    82,     0,    40,     0,    85,    41,    61,   101,    41,
     106,    44,   115,   113,    42,    44,    89,   104,   111,     0,
      91,    79,    92,    90,    39,    41,    93
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    13,    44,    87,   160,    14,    46,
      88,   143,    15,    66,    16,    38,    17,   140,    18,    62,
     116,    19,   117,   119,    22,    27,    28,   146,   147,   161,
     162,    12,    23,    24,    30,    31,    60,    68,    70,    69,
      71,    72,    67,    73,    74,    75,    76,    77,    78,    61,
      92,   122,    96,   124,    94,   123,    98,   125,   100,   126,
     166,   180,   183,   184,    90,   103,   104,   105,   106,   132,
     155,   108,   156,   109,   135,   171,   138,   159,   158,    81,
      82,   111,    83
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -144
static const yytype_int16 yypact[] =
{
      34,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,    11,
    -144,    34,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,
    -144,  -144,   -23,   -25,   -20,   -18,   -19,  -144,   -11,   -17,
     -10,    -7,    -3,  -144,  -144,  -144,  -144,  -144,  -144,  -144,
      54,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,
      -5,     1,  -144,   -12,  -144,  -144,  -144,  -144,    21,    22,
      23,    32,    33,  -144,  -144,  -144,  -144,  -144,  -144,  -144,
    -144,    12,    35,    37,  -144,  -144,  -144,    41,    17,  -144,
      13,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,
    -144,    42,  -144,    14,    15,  -144,  -144,    47,    25,  -144,
      -6,  -144,  -144,  -144,  -144,  -144,    28,  -144,  -144,    29,
    -144,  -144,  -144,  -144,    43,  -144,  -144,  -144,  -144,  -144,
      46,  -144,  -144,  -144,    48,  -144,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,    53,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,
    -144,  -144,    52,  -144,    49,  -144,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,    50,
      59,  -144,  -144,  -144,  -144,  -144,  -144
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -144,  -144,    77,  -144,  -144,  -144,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,   -13,    55,  -144,  -122,  -144,  -143,
    -144,  -144,   -15,  -144,    70,  -144,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,   -36,  -144,  -144,
    -144,  -144,  -144,  -144,   -61,  -144,  -144,  -144,  -144,  -144,
      16,  -144,    18
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      26,    25,    29,   149,   150,   151,   165,   136,   167,    79,
      80,    20,    33,    34,    35,   172,   173,    36,    37,    39,
      40,    45,   137,   176,    86,    41,   177,    42,    63,    64,
      84,    65,    43,   169,    91,    93,    95,     1,     2,     3,
       4,     5,   186,     6,     7,    97,    99,    85,   112,   118,
      80,    79,    89,   120,   121,   127,   128,   129,   101,   102,
     131,   107,   185,   110,   141,   142,     8,    48,   133,   115,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,   154,   148,   157,   163,   174,   182,   175,    21,    32,
     181,   130,    47,   153,   134,   170,     0,     0,   139,   114,
     113,     0,     0,     0,     0,     0,   144,   145,     0,     0,
       0,     0,     0,   152,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   164,     0,     0,     0,     0,     0,   168,
       0,   134,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   178,     0,     0,     0,
     179
};

static const yytype_int16 yycheck[] =
{
      15,    14,    17,   125,   126,   127,   149,    13,   151,    14,
      15,     0,    35,    38,    34,   158,   159,    35,    37,    30,
      37,    34,    28,   166,    36,    35,   169,    34,    43,    44,
      29,    46,    35,   155,    13,    13,    13,     3,     4,     5,
       6,     7,   185,     9,    10,    13,    13,    62,    36,     8,
      15,    14,    67,    36,    41,    13,    42,    42,    73,    74,
      13,    76,   184,    78,    36,    36,    32,    13,    43,    84,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    35,    39,    35,    31,    33,    27,    38,    11,    19,
      40,   106,    37,   129,   109,   156,    -1,    -1,   111,    83,
      82,    -1,    -1,    -1,    -1,    -1,   121,   122,    -1,    -1,
      -1,    -1,    -1,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,   154,
      -1,   156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,
     175
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     9,    10,    32,    45,
      46,    47,    75,    48,    52,    56,    58,    60,    62,    65,
       0,    46,    68,    76,    77,    68,    76,    69,    70,    76,
      78,    79,    78,    35,    38,    34,    35,    37,    59,    30,
      37,    35,    34,    35,    49,    68,    53,    69,    13,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      80,    93,    63,    76,    76,    76,    57,    86,    81,    83,
      82,    84,    85,    87,    88,    89,    90,    91,    92,    14,
      15,   123,   124,   126,    29,    76,    36,    50,    54,    76,
     108,    13,    94,    13,    98,    13,    96,    13,   100,    13,
     102,    76,    76,   109,   110,   111,   112,    76,   115,   117,
      76,   125,    36,   126,   124,    76,    64,    66,     8,    67,
      36,    41,    95,    99,    97,   101,   103,    13,    42,    42,
      76,    13,   113,    43,    76,   118,    13,    28,   120,    68,
      61,    36,    36,    55,    76,    76,    71,    72,    39,    71,
      71,    71,    76,   111,    35,   114,   116,    35,   122,   121,
      51,    73,    74,    31,    76,    73,   104,    73,    76,    71,
     118,   119,    73,    73,    33,    38,    73,    73,    76,    76,
     105,    40,    27,   106,   107,    71,    73
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
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
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
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
      YYSIZE_T yyn = 0;
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
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
      int yychecklim = YYLAST - yyn + 1;
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
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
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
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  YYUSE (yyvaluep);

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
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

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
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

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
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


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
	yytype_int16 *yyss1 = yyss;
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

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
#line 68 "mlparse.y"
    { ;}
    break;

  case 4:
#line 73 "mlparse.y"
    { ;}
    break;

  case 5:
#line 75 "mlparse.y"
    { ;}
    break;

  case 6:
#line 78 "mlparse.y"
    { starttag("var", 1); yybegin(12); ;}
    break;

  case 7:
#line 78 "mlparse.y"
    { starttag("type", 1); ;}
    break;

  case 8:
#line 78 "mlparse.y"
    { closetag(); ;}
    break;

  case 9:
#line 78 "mlparse.y"
    { yybegin(0); ;}
    break;

  case 10:
#line 79 "mlparse.y"
    { closetag(); ;}
    break;

  case 11:
#line 80 "mlparse.y"
    { starttag("msvar", 1); yybegin(12); ;}
    break;

  case 12:
#line 80 "mlparse.y"
    { starttag("type", 1); ;}
    break;

  case 13:
#line 80 "mlparse.y"
    { closetag(); ;}
    break;

  case 14:
#line 80 "mlparse.y"
    { yybegin(0); ;}
    break;

  case 15:
#line 81 "mlparse.y"
    { closetag(); ;}
    break;

  case 16:
#line 82 "mlparse.y"
    { starttag("globref", 1); yybegin(12); ;}
    break;

  case 17:
#line 82 "mlparse.y"
    { yybegin(0); ;}
    break;

  case 18:
#line 83 "mlparse.y"
    { closetag(); ;}
    break;

  case 19:
#line 84 "mlparse.y"
    { starttag("use", 1); yybegin(12); ;}
    break;

  case 20:
#line 84 "mlparse.y"
    { yybegin(0); ;}
    break;

  case 21:
#line 85 "mlparse.y"
    { closetag(); ;}
    break;

  case 22:
#line 86 "mlparse.y"
    { starttag("color", 1); yybegin(12); ;}
    break;

  case 23:
#line 86 "mlparse.y"
    { yybegin(0); ;}
    break;

  case 24:
#line 87 "mlparse.y"
    { closetag(); ;}
    break;

  case 25:
#line 88 "mlparse.y"
    { starttag("invariant", 1); yybegin(12); ;}
    break;

  case 26:
#line 88 "mlparse.y"
    { starttag("type", 1); ;}
    break;

  case 27:
#line 88 "mlparse.y"
    { closetag(); ;}
    break;

  case 28:
#line 88 "mlparse.y"
    { yybegin(0); ;}
    break;

  case 29:
#line 89 "mlparse.y"
    { starttag("channel", 1); yybegin(12); ;}
    break;

  case 30:
#line 89 "mlparse.y"
    { yybegin(0); ;}
    break;

  case 31:
#line 90 "mlparse.y"
    { closetag(); ;}
    break;

  case 33:
#line 95 "mlparse.y"
    { ;}
    break;

  case 34:
#line 97 "mlparse.y"
    { starttag("msvarhack", 1); closetag(); ;}
    break;

  case 35:
#line 101 "mlparse.y"
    { ;}
    break;

  case 36:
#line 103 "mlparse.y"
    { ;}
    break;

  case 37:
#line 106 "mlparse.y"
    { resetBuffer(); yybegin(1); ;}
    break;

  case 38:
#line 107 "mlparse.y"
    { starttag("ml", 0);
           escape((yyvsp[(2) - (2)].string));
           closetag(); ;}
    break;

  case 39:
#line 112 "mlparse.y"
    { resetBuffer(); yybegin(4); ;}
    break;

  case 40:
#line 113 "mlparse.y"
    { starttag("ml", 0);
             escape((yyvsp[(2) - (2)].string));
             closetag(); ;}
    break;

  case 41:
#line 118 "mlparse.y"
    { resetBuffer(); yybegin(8); ;}
    break;

  case 42:
#line 119 "mlparse.y"
    { starttag("ml", 0);
          escape((yyvsp[(2) - (2)].string));
          closetag(); ;}
    break;

  case 43:
#line 125 "mlparse.y"
    { starttag("ml", 0);
           escape((yyvsp[(1) - (1)].string));
           closetag(); ;}
    break;

  case 44:
#line 130 "mlparse.y"
    { yybegin(7); ;}
    break;

  case 45:
#line 131 "mlparse.y"
    { starttag("id", 0); fprintf(yyout, (yyvsp[(2) - (2)].string)); closetag(); ;}
    break;

  case 46:
#line 134 "mlparse.y"
    { yybegin(7); ;}
    break;

  case 47:
#line 135 "mlparse.y"
    { starttag("name", 0); fprintf(yyout, (yyvsp[(2) - (2)].string)); closetag(); ;}
    break;

  case 48:
#line 138 "mlparse.y"
    { starttag("unit", 1); ;}
    break;

  case 49:
#line 139 "mlparse.y"
    { closetag(); ;}
    break;

  case 50:
#line 140 "mlparse.y"
    { starttag("bool", 1); ;}
    break;

  case 51:
#line 141 "mlparse.y"
    { closetag(); ;}
    break;

  case 52:
#line 142 "mlparse.y"
    { starttag("int", 1); ;}
    break;

  case 53:
#line 143 "mlparse.y"
    { closetag(); ;}
    break;

  case 54:
#line 144 "mlparse.y"
    { starttag("real", 1); ;}
    break;

  case 55:
#line 145 "mlparse.y"
    { closetag(); ;}
    break;

  case 56:
#line 146 "mlparse.y"
    { starttag("string", 1); ;}
    break;

  case 57:
#line 147 "mlparse.y"
    { closetag(); ;}
    break;

  case 58:
#line 148 "mlparse.y"
    { starttag("enum", 1); ;}
    break;

  case 59:
#line 149 "mlparse.y"
    { closetag(); ;}
    break;

  case 60:
#line 150 "mlparse.y"
    { starttag("index", 1); ;}
    break;

  case 61:
#line 151 "mlparse.y"
    { closetag(); ;}
    break;

  case 62:
#line 152 "mlparse.y"
    { starttag("product", 1); ;}
    break;

  case 63:
#line 153 "mlparse.y"
    { closetag(); ;}
    break;

  case 64:
#line 154 "mlparse.y"
    { starttag("record", 1); ;}
    break;

  case 65:
#line 155 "mlparse.y"
    { closetag(); ;}
    break;

  case 66:
#line 156 "mlparse.y"
    { starttag("list", 1); ;}
    break;

  case 67:
#line 157 "mlparse.y"
    { closetag(); ;}
    break;

  case 68:
#line 158 "mlparse.y"
    { starttag("union", 1); ;}
    break;

  case 69:
#line 159 "mlparse.y"
    { closetag(); ;}
    break;

  case 70:
#line 160 "mlparse.y"
    { starttag("subset", 1); ;}
    break;

  case 71:
#line 161 "mlparse.y"
    { closetag(); ;}
    break;

  case 72:
#line 162 "mlparse.y"
    { starttag("alias", 1); ;}
    break;

  case 73:
#line 163 "mlparse.y"
    { closetag(); ;}
    break;

  case 74:
#line 167 "mlparse.y"
    { ;}
    break;

  case 75:
#line 168 "mlparse.y"
    { starttag("with", 1); ;}
    break;

  case 76:
#line 169 "mlparse.y"
    { closetag(); ;}
    break;

  case 77:
#line 173 "mlparse.y"
    { ;}
    break;

  case 78:
#line 174 "mlparse.y"
    { starttag("with", 1); ;}
    break;

  case 79:
#line 175 "mlparse.y"
    { closetag(); ;}
    break;

  case 80:
#line 179 "mlparse.y"
    { ;}
    break;

  case 81:
#line 180 "mlparse.y"
    { starttag("with", 1); ;}
    break;

  case 82:
#line 181 "mlparse.y"
    { closetag(); ;}
    break;

  case 83:
#line 185 "mlparse.y"
    { ;}
    break;

  case 84:
#line 186 "mlparse.y"
    { starttag("with", 1); ;}
    break;

  case 85:
#line 187 "mlparse.y"
    { closetag(); ;}
    break;

  case 86:
#line 191 "mlparse.y"
    { ;}
    break;

  case 87:
#line 192 "mlparse.y"
    { starttag("with", 1); ;}
    break;

  case 88:
#line 195 "mlparse.y"
    { in_stringwithopt = 1; ;}
    break;

  case 89:
#line 195 "mlparse.y"
    { in_stringwithopt = 0; ;}
    break;

  case 90:
#line 197 "mlparse.y"
    { closetag(); ;}
    break;

  case 91:
#line 201 "mlparse.y"
    { ;}
    break;

  case 92:
#line 202 "mlparse.y"
    { starttag("and", 1); ;}
    break;

  case 93:
#line 203 "mlparse.y"
    { closetag(); ;}
    break;

  case 94:
#line 207 "mlparse.y"
    { ;}
    break;

  case 95:
#line 209 "mlparse.y"
    { ;}
    break;

  case 96:
#line 213 "mlparse.y"
    { ;}
    break;

  case 97:
#line 215 "mlparse.y"
    { ;}
    break;

  case 98:
#line 219 "mlparse.y"
    { ;}
    break;

  case 99:
#line 221 "mlparse.y"
    { ;}
    break;

  case 100:
#line 224 "mlparse.y"
    { starttag("recordfield", 1); ;}
    break;

  case 101:
#line 225 "mlparse.y"
    { closetag(); ;}
    break;

  case 102:
#line 229 "mlparse.y"
    { ;}
    break;

  case 103:
#line 230 "mlparse.y"
    { starttag("with", 1); ;}
    break;

  case 104:
#line 231 "mlparse.y"
    { closetag(); ;}
    break;

  case 105:
#line 234 "mlparse.y"
    { starttag("unionfield", 1); ;}
    break;

  case 106:
#line 235 "mlparse.y"
    { closetag(); ;}
    break;

  case 107:
#line 236 "mlparse.y"
    { starttag("unionfield", 1); ;}
    break;

  case 108:
#line 237 "mlparse.y"
    { closetag(); ;}
    break;

  case 109:
#line 241 "mlparse.y"
    { ;}
    break;

  case 110:
#line 242 "mlparse.y"
    { starttag("type", 1); ;}
    break;

  case 111:
#line 243 "mlparse.y"
    { closetag(); ;}
    break;

  case 112:
#line 246 "mlparse.y"
    { starttag("by", 1); ;}
    break;

  case 113:
#line 247 "mlparse.y"
    { closetag(); ;}
    break;

  case 114:
#line 248 "mlparse.y"
    { starttag("with", 1); ;}
    break;

  case 115:
#line 249 "mlparse.y"
    { closetag(); ;}
    break;

  case 121:
#line 259 "mlparse.y"
    { starttag("declare", 1); ;}
    break;

  case 122:
#line 260 "mlparse.y"
    { closetag(); ;}
    break;

  case 123:
#line 264 "mlparse.y"
    { starttag("timed", 0); closetag(); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2173 "mlparse.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
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
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
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
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
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
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
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
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 267 "mlparse.y"

int
escape (char *s)
{
  if (s) {
    while (*s) {
      switch (*s) {
        case '&':
          fprintf(yyout, "&amp;");
          break;
        case '<':
          fprintf(yyout, "&lt;");
          break;
        case '>':
          fprintf(yyout, "&gt;");
          break;
        case '\'':
          fprintf(yyout, "&apos;");
          break;
        case '\"':
          fprintf(yyout, "&quot;");
          break;
        default: 
          fprintf(yyout, "%c", *s);
          break;
      }
      s++;
    }
  }
  else {
	yyerror("no string found");
  }	
  return 0;
}	

void
indent_fill ()
{
  int i;
  for (i = 0; i < indent; i++)
    fprintf(yyout, "  ");
}

void
starttag (char *s, int newline)
{
  tag_t *t = malloc(sizeof(tag_t));
  t->tagname = s;
  t->previous = tagstack;
  t->newline = newline;
  tagstack = t;
  indent_fill();
  fprintf(yyout, "<%s linenumber=\"%d\">%s", s, lineno, newline ? "\n" : "");
  indent++;
}

int
closetag ()
{
  tag_t *t = tagstack;
  if (tagstack == NULL) return 0;
  indent--;
  if (tagstack->newline) indent_fill();
  fprintf(yyout, "</%s>\n", tagstack->tagname);
  tagstack = tagstack->previous;
  free(t);
  return 1;
}


