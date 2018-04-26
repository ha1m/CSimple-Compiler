/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 4 "parser.y"

#include "func.h"

extern int yylex();
extern int yylineno;
extern char *yytext;

node *globalTree;

#line 15 "parser.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union 
{
	char *string; /*terminals*/
	struct node *node; /*leafs*/
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 44 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define BOOL 257
#define CHAR 258
#define VOID 259
#define INT 260
#define STRING 261
#define INTP 262
#define CHARP 263
#define IF 264
#define ELSE 265
#define WHILE 266
#define DO 267
#define FOR 268
#define RETURN 269
#define NULLL 270
#define MAIN 271
#define CHARR 272
#define AND 273
#define OR 274
#define PLACEMENT 275
#define EQUAL 276
#define BIGGER_THEN 277
#define BIGGER_EQUAL_THEN 278
#define SMALLER_THEN 279
#define SMALLER_EQUAL_THEN 280
#define MINUS 281
#define PLUS 282
#define NOT 283
#define NOT_EQUAL 284
#define MUL 285
#define DIV 286
#define COMMA 287
#define TRUEE 288
#define FALSEE 289
#define INTEGER_NUMBER 290
#define HEX_NUMBER 291
#define OCT_NUMBER 292
#define BIN_NUMBER 293
#define IDENTIFIER 294
#define SEMICOLON 295
#define ADDRESS 296
#define POINTER 297
#define T_STRING 298
#define COLON 299
#define OPEN_ARRAY 300
#define CLOSE_ARRAY 301
#define OPEN_BLOCK 302
#define CLOSE_BLOCK 303
#define OPEN_PAREN 304
#define CLOSE_PAREN 305
#define LENGTH 306
#define IFX 307
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,   28,   28,   29,   29,    1,    1,    1,    1,    1,
    1,    1,    1,   26,   26,   26,   26,   26,    2,    2,
    3,    3,    6,   25,   25,   25,   25,    4,    4,    5,
    5,    5,    5,    5,    5,    5,    7,    7,    7,    7,
    9,    9,   27,   27,    8,    8,    8,    8,    8,    8,
    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,
    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,
    8,    8,    8,    8,    8,    8,    8,    8,   32,   32,
   24,   24,   24,   23,   10,   10,   30,   30,   30,   30,
   30,   30,   30,   30,   31,   31,   31,   31,   22,   22,
   11,   12,   12,   12,   12,   13,   13,   13,   14,   15,
   15,   16,   16,   17,   18,   19,   20,   20,   20,   21,
   21,
};
static const YYINT yylen[] = {                            2,
    1,    2,    0,    5,    6,    2,    2,    3,    2,    2,
    2,    2,    0,    2,    1,    1,    1,    1,    3,    5,
    1,    2,    3,    1,    3,    1,    3,    1,    3,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    5,    7,    1,    1,    2,    4,    1,    2,    4,    4,
    4,    6,    6,    3,    5,    5,    1,    2,    4,    1,
    1,    1,    1,    2,    4,    4,    2,    4,    4,    3,
    3,    3,    3,    3,    3,    3,    5,    5,    1,    1,
    1,    3,    0,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    3,    2,
    3,    3,    4,    8,    4,    1,    1,    1,    9,    1,
    0,    1,    0,    5,    6,    6,    2,    3,    0,    4,
    3,
};
static const YYINT yydefred[] = {                         0,
   30,   32,    0,   31,   33,   34,   35,    0,    0,    1,
    0,    0,    0,    0,    2,    0,    0,   22,    0,    0,
   37,   38,   39,   40,    0,    0,    0,   36,    0,    0,
    0,    4,   96,   95,   97,   98,    0,    0,   23,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  106,  107,  108,    0,    0,
   27,   25,    0,  118,    5,    0,    0,    0,    0,   63,
   61,   79,   80,    0,   85,   86,  100,    0,    0,   84,
    0,    0,    0,    0,    0,    0,   62,    0,    0,  101,
    6,    0,    0,    0,    7,   12,    0,    9,   10,   11,
    0,    0,  112,    0,    0,  110,    0,    0,    0,    0,
    0,    0,   94,   93,   87,   89,   90,   91,   92,   88,
    0,    0,    0,    0,    0,   99,    0,    0,    0,    0,
    0,    0,  102,    0,    0,    0,   19,    0,    8,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   70,   71,   72,   73,   74,   75,    0,    0,
    0,  103,    0,    0,  105,    0,    0,    0,  120,    0,
   16,   44,    0,   15,   18,   17,   43,    0,  114,    0,
    0,   46,   65,   66,   68,   69,    0,    0,    0,    0,
    0,   50,   49,   59,    0,   82,    0,   20,    0,    0,
   14,    0,  115,    0,   77,   78,   55,   56,    0,    0,
    0,   29,  116,   42,    0,   52,   53,    0,    0,  104,
  109,
};
static const YYINT yydgoto[] = {                          8,
   48,   49,   83,  167,   51,   18,   84,  103,   52,   86,
   53,   54,   55,   56,  107,  104,   57,   58,   59,   30,
   64,   60,   87,  135,   27,  177,  178,   10,   11,  122,
   37,   88,
};
static const YYINT yysindex[] = {                        22,
    0,    0, -260,    0,    0,    0,    0,    0, -275,    0,
   22, -283, -249, -248,    0, -236, -133,    0,   54, -245,
    0,    0,    0,    0,  -67,  -67, -217,    0, -275, -210,
   34,    0,    0,    0,    0,    0, -133, -133,    0, -199,
 -245, -205, -202, -245, -201,   51, -275, -195,   34, -257,
 -275,   34,   34, -191,   34,    0,    0,    0,   34,   34,
    0,    0,   54,    0,    0,   80,   80, -161, -212,    0,
    0,    0,    0, -275,    0,    0,    0, -275, -275,    0,
   80, -275,  177,  191, -181,  191,    0,   14, -160,    0,
    0,  109,   80, -270,    0,    0,   34,    0,    0,    0,
 -275, -188,    0, -187, -180,    0, -167,  -22,  191,  191,
 -169, -158,    0,    0,    0,    0,    0,    0,    0,    0,
   80,   80,   80,   80,   80,    0,   80,   80,  191,  -67,
   80, -288,    0, -142, -155, -275,    0,   54,    0, -199,
   34,   34,   80,   80,   80,   80,   80,   80,   80,  191,
  191, -154,    0,    0,    0,    0,    0,    0,   80,   80,
   80,    0, -275,   80,    0, -134, -140, -138,    0, -275,
    0,    0, -123,    0,    0,    0,    0,  -91,    0, -126,
 -115,    0,    0,    0,    0,    0,   80,   80,   80,   80,
  191,    0,    0,    0, -272,    0, -275,    0, -245, -122,
    0,   34,    0, -212,    0,    0,    0,    0,   80,   80,
 -133,    0,    0,    0, -120,    0,    0, -116,   34,    0,
    0,
};
static const YYINT yyrindex[] = {                       183,
    0,    0, -108,    0,    0,    0,    0,    0,    0,    0,
  183,    0,  143,    0,    0,    0,    0,    0, -111,    0,
    0,    0,    0,    0, -251, -231,    0,    0,    0,    0,
 -107,    0,    0,    0,    0,    0,    0,    0,    0, -105,
    0,    0,    0,    0,    0,    0,    0,    0, -107,    0,
    0, -107, -107,    0, -107,    0,    0,    0, -107, -107,
    0,    0,    0,    0,    0,    0, -103,    0,  -90,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -246, -232,    0, -198,    0,    0,    0,    0,
    0,    0,  -98,    0,    0,    0, -107,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -189, -186, -165,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -98,    0,    0,    0,    0,    0,    0,    0, -164, -143,
    0,    0,    0,  -97,    0,    0,    0, -111,    0,  -95,
    0,    0, -103,  -84,    0,    0,    0,    0,    0, -117,
  -96,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -98,    0,  -78,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -25,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -89,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -79,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,
};
static const YYINT yygindex[] = {                         0,
  116,    0,   -7,   32,    1,    0,  -10,  100, -109,    0,
  -15,  -55, -106,    0,   26, -113,    0,    0,  -81,  102,
  110,  -65,    0, -121,  -34,    0, -119,  242,    0,  -71,
  -18,   68,
};
#define YYTABLESIZE 481
static const YYINT yytable[] = {                        152,
    9,   14,   61,   62,   32,   13,   26,   38,   72,   73,
   12,    9,  124,  106,  127,  163,  136,   92,   13,   29,
   16,   40,  179,   50,  137,   65,   26,   26,   68,  180,
  181,  171,  171,  138,  174,  174,  145,  146,  148,   89,
   47,   50,  196,   94,   50,   50,   93,   50,   47,   26,
   17,   50,   50,   26,   57,   19,   31,  159,   47,  175,
  175,   50,   57,  101,  123,  125,  108,  128,   20,   24,
  109,  110,   57,   24,  112,  176,  176,  130,  187,  189,
  129,   13,  214,   39,   47,  173,  173,   63,   60,   50,
  147,  149,  171,  140,   41,  174,   60,   45,   66,  221,
   64,   67,   69,   97,  105,   45,   60,   90,   64,  171,
  160,  161,  174,  126,  131,   45,  141,  142,   64,  209,
  175,   67,   48,  143,  109,  172,  172,  144,  166,   67,
   48,  188,  190,   50,   50,  150,  176,  175,   29,   67,
   48,  170,  170,   58,  164,   85,  173,  151,  106,  165,
  191,   58,  197,  176,  198,  195,   21,   22,   23,   24,
   25,   58,  200,  173,   91,  102,  199,   95,   96,   76,
   98,  201,  210,  202,   99,  100,  218,   76,  203,  204,
  111,  138,    3,  213,  219,   36,  172,   76,  220,  166,
   54,  133,  134,  119,   50,   13,   50,   51,   54,  117,
   26,  113,  170,  172,  111,   51,   83,   81,   54,  121,
  113,   50,  139,   33,   34,   51,   28,   35,   36,  170,
  134,  153,  154,  155,  156,  111,  157,  158,  212,  215,
  162,   41,   41,   41,   41,   41,   41,   41,   41,  168,
   41,   41,   41,   41,  182,  183,  184,  185,  186,  169,
  113,  114,   15,  115,  116,  117,  118,  119,  192,  193,
  194,  120,  211,  134,    0,    0,    0,    0,   41,    0,
    0,   41,    0,    0,    0,    0,   41,   41,    1,    2,
    3,    4,    5,    6,    7,    0,  205,  206,  207,  208,
    1,    2,   28,    4,    5,    6,    7,   42,    0,   43,
   44,   45,   46,   21,   22,   23,   24,   13,  216,  217,
    1,    2,   28,    4,    5,    6,    7,    0,    0,    0,
   70,    0,   71,    0,    0,    0,    0,   13,    0,    0,
   47,   72,   73,   74,    0,   31,    0,    0,   75,   76,
   21,   22,   23,   24,   13,   77,   78,   79,   80,   70,
    0,   71,    0,    0,   81,    0,   82,    0,    0,    0,
   72,   73,   74,    0,    0,    0,    0,   75,   76,   21,
   22,   23,   24,   13,    0,   78,   79,   80,   70,    0,
   71,    0,    0,   81,    0,   82,    0,    0,    0,   72,
   73,   74,    0,    0,    0,    0,   75,   76,   21,   22,
   23,   24,   13,    0,  132,   79,   80,    0,    0,    0,
    0,    0,   81,    0,   82,   21,   21,   21,   21,   21,
   21,   21,   21,   21,   21,    0,   21,   21,   21,   21,
    0,    0,    0,    0,    0,    0,    0,   21,    0,    0,
    0,    0,    0,    0,    0,    0,   21,   21,   21,  113,
  114,    0,  115,  116,  117,  118,  119,   33,   34,    0,
  120,   35,   36,  113,  114,    0,  115,  116,  117,  118,
  119,   33,   34,    0,  120,   35,   36,    0,    0,    0,
  121,
};
static const YYINT yycheck[] = {                        121,
    0,    9,   37,   38,   20,  294,   17,   26,  281,  282,
  271,   11,   84,   69,   86,  304,  287,  275,  294,   19,
  304,   29,  142,   31,  295,   41,   37,   38,   44,  143,
  144,  141,  142,  304,  141,  142,  108,  109,  110,   47,
  287,   49,  164,   51,   52,   53,  304,   55,  295,  301,
  300,   59,   60,  305,  287,  304,  302,  129,  305,  141,
  142,   69,  295,   63,   83,   84,   74,   86,  305,  301,
   78,   79,  305,  305,   82,  141,  142,   88,  150,  151,
   88,  294,  202,  301,  297,  141,  142,  287,  287,   97,
  109,  110,  202,  101,  305,  202,  295,  287,  304,  219,
  287,  304,  304,  295,  266,  295,  305,  303,  295,  219,
  129,  130,  219,  295,  275,  305,  305,  305,  305,  191,
  202,  287,  287,  304,  132,  141,  142,  295,  136,  295,
  295,  150,  151,  141,  142,  305,  202,  219,  138,  305,
  305,  141,  142,  287,  287,   46,  202,  306,  204,  305,
  305,  295,  287,  219,  295,  163,  290,  291,  292,  293,
  294,  305,  170,  219,   49,   66,  305,   52,   53,  287,
   55,  295,  191,  265,   59,   60,  211,  295,  305,  295,
   81,  304,    0,  199,  305,  294,  202,  305,  305,  197,
  287,   92,   93,  305,  202,  303,  204,  287,  295,  305,
  211,  305,  202,  219,  295,  295,  305,  305,  305,  305,
  295,  219,   97,  281,  282,  305,  295,  285,  286,  219,
  121,  122,  123,  124,  125,  305,  127,  128,  197,  204,
  131,  257,  258,  259,  260,  261,  262,  263,  264,  138,
  266,  267,  268,  269,  145,  146,  147,  148,  149,  140,
  273,  274,   11,  276,  277,  278,  279,  280,  159,  160,
  161,  284,  195,  164,   -1,   -1,   -1,   -1,  294,   -1,
   -1,  297,   -1,   -1,   -1,   -1,  302,  303,  257,  258,
  259,  260,  261,  262,  263,   -1,  187,  188,  189,  190,
  257,  258,  259,  260,  261,  262,  263,  264,   -1,  266,
  267,  268,  269,  290,  291,  292,  293,  294,  209,  210,
  257,  258,  259,  260,  261,  262,  263,   -1,   -1,   -1,
  270,   -1,  272,   -1,   -1,   -1,   -1,  294,   -1,   -1,
  297,  281,  282,  283,   -1,  302,   -1,   -1,  288,  289,
  290,  291,  292,  293,  294,  295,  296,  297,  298,  270,
   -1,  272,   -1,   -1,  304,   -1,  306,   -1,   -1,   -1,
  281,  282,  283,   -1,   -1,   -1,   -1,  288,  289,  290,
  291,  292,  293,  294,   -1,  296,  297,  298,  270,   -1,
  272,   -1,   -1,  304,   -1,  306,   -1,   -1,   -1,  281,
  282,  283,   -1,   -1,   -1,   -1,  288,  289,  290,  291,
  292,  293,  294,   -1,  296,  297,  298,   -1,   -1,   -1,
   -1,   -1,  304,   -1,  306,  273,  274,  275,  276,  277,
  278,  279,  280,  281,  282,   -1,  284,  285,  286,  287,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  295,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  304,  305,  306,  273,
  274,   -1,  276,  277,  278,  279,  280,  281,  282,   -1,
  284,  285,  286,  273,  274,   -1,  276,  277,  278,  279,
  280,  281,  282,   -1,  284,  285,  286,   -1,   -1,   -1,
  304,
};
#define YYFINAL 8
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 307
#define YYUNDFTOKEN 342
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"BOOL","CHAR","VOID","INT",
"STRING","INTP","CHARP","IF","ELSE","WHILE","DO","FOR","RETURN","NULLL","MAIN",
"CHARR","AND","OR","PLACEMENT","EQUAL","BIGGER_THEN","BIGGER_EQUAL_THEN",
"SMALLER_THEN","SMALLER_EQUAL_THEN","MINUS","PLUS","NOT","NOT_EQUAL","MUL",
"DIV","COMMA","TRUEE","FALSEE","INTEGER_NUMBER","HEX_NUMBER","OCT_NUMBER",
"BIN_NUMBER","IDENTIFIER","SEMICOLON","ADDRESS","POINTER","T_STRING","COLON",
"OPEN_ARRAY","CLOSE_ARRAY","OPEN_BLOCK","CLOSE_BLOCK","OPEN_PAREN",
"CLOSE_PAREN","LENGTH","IFX",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : ok",
"ok : Gstate",
"Gstate : funcWmain Gstate",
"Gstate :",
"funcWmain : VOID MAIN OPEN_PAREN CLOSE_PAREN block",
"funcWmain : type identifier OPEN_PAREN parameters CLOSE_PAREN block",
"state : initialization state",
"state : condition state",
"state : simpelAct SEMICOLON state",
"state : loop state",
"state : func state",
"state : return state",
"state : block state",
"state :",
"oneState : simpelAct SEMICOLON",
"oneState : loop",
"oneState : condition",
"oneState : return",
"oneState : func",
"initialization : type identifier SEMICOLON",
"initialization : type identifier COMMA multivars SEMICOLON",
"identifier : IDENTIFIER",
"identifier : IDENTIFIER array",
"array : OPEN_ARRAY numericExpr CLOSE_ARRAY",
"numericExpr : num",
"numericExpr : num opr numericExpr",
"numericExpr : IDENTIFIER",
"numericExpr : IDENTIFIER opr numericExpr",
"multivars : identifier",
"multivars : identifier COMMA multivars",
"type : BOOL",
"type : INT",
"type : CHAR",
"type : STRING",
"type : INTP",
"type : CHARP",
"type : VOID",
"num : INTEGER_NUMBER",
"num : HEX_NUMBER",
"num : OCT_NUMBER",
"num : BIN_NUMBER",
"condition : IF OPEN_PAREN expr CLOSE_PAREN oneORmore",
"condition : IF OPEN_PAREN expr CLOSE_PAREN oneORmore ELSE oneORmore",
"oneORmore : oneState",
"oneORmore : block",
"expr : NOT identifier",
"expr : NOT identifier relation expr",
"expr : identifier",
"expr : minusPlus identifier",
"expr : minusPlus identifier opr expr",
"expr : minusPlus identifier relation expr",
"expr : identifier OPEN_PAREN sendedParameters CLOSE_PAREN",
"expr : identifier OPEN_PAREN sendedParameters CLOSE_PAREN relation expr",
"expr : identifier OPEN_PAREN sendedParameters CLOSE_PAREN opr expr",
"expr : LENGTH identifier LENGTH",
"expr : LENGTH identifier LENGTH relation expr",
"expr : LENGTH identifier LENGTH opr expr",
"expr : num",
"expr : minusPlus num",
"expr : minusPlus num opr expr",
"expr : boolean",
"expr : CHARR",
"expr : string",
"expr : NULLL",
"expr : ADDRESS identifier",
"expr : ADDRESS identifier relation expr",
"expr : ADDRESS identifier opr expr",
"expr : POINTER identifier",
"expr : POINTER identifier relation expr",
"expr : POINTER identifier opr expr",
"expr : identifier relation expr",
"expr : identifier opr expr",
"expr : num relation expr",
"expr : num opr expr",
"expr : boolean relation expr",
"expr : boolean opr expr",
"expr : OPEN_PAREN expr CLOSE_PAREN",
"expr : OPEN_PAREN expr CLOSE_PAREN relation expr",
"expr : OPEN_PAREN expr CLOSE_PAREN opr expr",
"minusPlus : MINUS",
"minusPlus : PLUS",
"sendedParameters : expr",
"sendedParameters : expr COMMA sendedParameters",
"sendedParameters :",
"string : T_STRING",
"boolean : TRUEE",
"boolean : FALSEE",
"relation : EQUAL",
"relation : NOT_EQUAL",
"relation : BIGGER_THEN",
"relation : BIGGER_EQUAL_THEN",
"relation : SMALLER_THEN",
"relation : SMALLER_EQUAL_THEN",
"relation : OR",
"relation : AND",
"opr : PLUS",
"opr : MINUS",
"opr : MUL",
"opr : DIV",
"return : RETURN expr SEMICOLON",
"return : RETURN SEMICOLON",
"block : OPEN_BLOCK state CLOSE_BLOCK",
"simpelAct : identifier PLACEMENT expr",
"simpelAct : POINTER identifier PLACEMENT expr",
"simpelAct : identifier PLACEMENT ADDRESS OPEN_PAREN identifier minusPlus numericExpr CLOSE_PAREN",
"simpelAct : identifier OPEN_PAREN sendedParameters CLOSE_PAREN",
"loop : for",
"loop : while",
"loop : do",
"for : FOR OPEN_PAREN place13 SEMICOLON place2 SEMICOLON place13 CLOSE_PAREN oneORmore",
"place13 : simpelAct",
"place13 :",
"place2 : expr",
"place2 :",
"while : WHILE OPEN_PAREN place2 CLOSE_PAREN oneORmore",
"do : DO block WHILE OPEN_PAREN place2 CLOSE_PAREN",
"func : type identifier OPEN_PAREN parameters CLOSE_PAREN block",
"parameters : type identifier",
"parameters : type identifier multiparm",
"parameters :",
"multiparm : COMMA type identifier multiparm",
"multiparm : COMMA type identifier",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 207 "parser.y"

#include "lex.yy.c"

void yyerror(const char *msg)
{
	fflush(stdout);
	fprintf(stderr, "Error: %s at line %d\n", msg, yylineno);
	fprintf(stderr, "Parser does not expect '%s'\n", yytext);
}

int yywrap(void)
{
	return 1;
}

int main()
{
	int check=1;
	if (!yyparse())
	{
		//printTree(globalTree, 0);
		check = checkProgram(globalTree, push(0));
		pop();
		if (cMain == 0 && check==1)
			{
				check=0;
				printf("ERROR: The code must have a main function!\n");
			}
		printglobalScope(stack);
		if(check==1)
			printf("%s",GenProgram(globalTree));
		return 0; //ok
	}
	else
		return 1; //error
}
#line 573 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 40 "parser.y"
	{globalTree = yystack.l_mark[0].node;}
break;
case 2:
#line 41 "parser.y"
	{yyval.node = makeNode("func statement", yystack.l_mark[-1].node, yystack.l_mark[0].node, NULL);}
break;
case 3:
#line 42 "parser.y"
	{yyval.node = NULL;}
break;
case 4:
#line 45 "parser.y"
	{yyval.node = makeNode("MAIN",makeNode("MAININFO", makeNode("void", NULL, NULL, NULL), makeNode("main", NULL, NULL, NULL), NULL), yystack.l_mark[0].node, NULL);}
break;
case 5:
#line 48 "parser.y"
	{yyval.node = makeNode("func", makeNode("FUNCINFO", yystack.l_mark[-5].node, yystack.l_mark[-4].node, yystack.l_mark[-2].node), yystack.l_mark[0].node, NULL);}
break;
case 6:
#line 50 "parser.y"
	{yyval.node = makeNode("init statement", yystack.l_mark[-1].node, yystack.l_mark[0].node, NULL);}
break;
case 7:
#line 51 "parser.y"
	{yyval.node = makeNode("if/else statement", yystack.l_mark[-1].node, yystack.l_mark[0].node, NULL);}
break;
case 8:
#line 52 "parser.y"
	{yyval.node = makeNode("simple statement", yystack.l_mark[-2].node, yystack.l_mark[0].node, NULL);}
break;
case 9:
#line 53 "parser.y"
	{yyval.node = makeNode("loops statement", yystack.l_mark[-1].node, yystack.l_mark[0].node, NULL);}
break;
case 10:
#line 54 "parser.y"
	{yyval.node = makeNode("func statement", yystack.l_mark[-1].node, yystack.l_mark[0].node, NULL);}
break;
case 11:
#line 55 "parser.y"
	{yyval.node = makeNode("return statement", yystack.l_mark[-1].node, yystack.l_mark[0].node, NULL);}
break;
case 12:
#line 56 "parser.y"
	{yyval.node = makeNode("block statement", yystack.l_mark[-1].node, yystack.l_mark[0].node, NULL);}
break;
case 13:
#line 57 "parser.y"
	{yyval.node = NULL;}
break;
case 14:
#line 59 "parser.y"
	{yyval.node = makeNode("simple statement", yystack.l_mark[-1].node, NULL, NULL);}
break;
case 15:
#line 60 "parser.y"
	{yyval.node = makeNode("loops statement", yystack.l_mark[0].node, NULL, NULL);}
break;
case 16:
#line 61 "parser.y"
	{yyval.node = makeNode("if/else statement", yystack.l_mark[0].node, NULL, NULL);}
break;
case 17:
#line 62 "parser.y"
	{yyval.node = makeNode("return statement", yystack.l_mark[0].node, NULL, NULL);}
break;
case 18:
#line 63 "parser.y"
	{yyval.node = makeNode("func statement", yystack.l_mark[0].node, NULL, NULL);}
break;
case 19:
#line 66 "parser.y"
	{yyval.node = makeNode("init", yystack.l_mark[-2].node, yystack.l_mark[-1].node, NULL);}
break;
case 20:
#line 67 "parser.y"
	{yyval.node = makeNode("init", yystack.l_mark[-4].node, yystack.l_mark[-3].node, yystack.l_mark[-1].node);}
break;
case 21:
#line 69 "parser.y"
	{yyval.node = makeNode(yystack.l_mark[0].string, NULL, NULL, NULL);}
break;
case 22:
#line 70 "parser.y"
	{yyval.node = makeNode("array",makeNode(yystack.l_mark[-1].string, NULL, NULL, NULL), yystack.l_mark[0].node, NULL);}
break;
case 23:
#line 72 "parser.y"
	{yyval.node = makeNode("arrayLength", yystack.l_mark[-1].node, NULL, NULL);}
break;
case 24:
#line 74 "parser.y"
	{yyval.node = makeNode("NUM", yystack.l_mark[0].node , NULL, NULL);}
break;
case 25:
#line 75 "parser.y"
	{yyval.node = makeNode(yystack.l_mark[-1].string,makeNode("NUM", yystack.l_mark[-2].node , NULL, NULL), yystack.l_mark[0].node, NULL);}
break;
case 26:
#line 76 "parser.y"
	{yyval.node =makeNode("identifier",makeNode(yystack.l_mark[0].string, NULL, NULL, NULL), NULL, NULL);}
break;
case 27:
#line 77 "parser.y"
	{yyval.node = makeNode(yystack.l_mark[-1].string, makeNode("identifier",makeNode(yystack.l_mark[-2].string, NULL, NULL, NULL), NULL, NULL), yystack.l_mark[0].node, NULL);}
break;
case 28:
#line 80 "parser.y"
	{yyval.node = makeNode("multivars", yystack.l_mark[0].node, NULL, NULL);}
break;
case 29:
#line 81 "parser.y"
	{yyval.node = makeNode("multivars", yystack.l_mark[-2].node, yystack.l_mark[0].node, NULL);}
break;
case 30:
#line 83 "parser.y"
	{yyval.node = makeNode("BOOLEAN", NULL, NULL, NULL);}
break;
case 31:
#line 84 "parser.y"
	{yyval.node = makeNode("INT", NULL, NULL, NULL);}
break;
case 32:
#line 85 "parser.y"
	{yyval.node = makeNode("CHAR", NULL, NULL, NULL);}
break;
case 33:
#line 86 "parser.y"
	{yyval.node = makeNode("STRING", NULL, NULL, NULL);}
break;
case 34:
#line 87 "parser.y"
	{yyval.node = makeNode("INTP", NULL, NULL, NULL);}
break;
case 35:
#line 88 "parser.y"
	{yyval.node = makeNode("CHARP", NULL, NULL, NULL);}
break;
case 36:
#line 89 "parser.y"
	{yyval.node = makeNode("VOID", NULL, NULL, NULL);}
break;
case 37:
#line 91 "parser.y"
	{yyval.node = makeNode(yystack.l_mark[0].string, NULL, NULL, NULL);}
break;
case 38:
#line 92 "parser.y"
	{yyval.node = makeNode(yystack.l_mark[0].string, NULL, NULL, NULL);}
break;
case 39:
#line 93 "parser.y"
	{yyval.node = makeNode(yystack.l_mark[0].string, NULL, NULL, NULL);}
break;
case 40:
#line 94 "parser.y"
	{yyval.node = makeNode(yystack.l_mark[0].string, NULL, NULL, NULL);}
break;
case 41:
#line 97 "parser.y"
	{yyval.node = makeNode("IF", yystack.l_mark[-2].node, yystack.l_mark[0].node, NULL);}
break;
case 42:
#line 99 "parser.y"
	{yyval.node = makeNode("IF", yystack.l_mark[-4].node, yystack.l_mark[-2].node, makeNode("ELSE", yystack.l_mark[0].node, NULL, NULL));}
break;
case 43:
#line 101 "parser.y"
	{yyval.node = yystack.l_mark[0].node;}
break;
case 44:
#line 102 "parser.y"
	{yyval.node = yystack.l_mark[0].node;}
break;
case 45:
#line 104 "parser.y"
	{yyval.node = makeNode("!", makeNode("identifier", yystack.l_mark[0].node, NULL, NULL), NULL, NULL);}
break;
case 46:
#line 105 "parser.y"
	{yyval.node = makeNode(yystack.l_mark[-1].string,makeNode("!", makeNode("identifier", yystack.l_mark[-2].node, NULL, NULL), NULL, NULL),yystack.l_mark[0].node,NULL);}
break;
case 47:
#line 106 "parser.y"
	{yyval.node = makeNode("identifier", yystack.l_mark[0].node, NULL, NULL);}
break;
case 48:
#line 107 "parser.y"
	{yyval.node = makeNode(yystack.l_mark[-1].string, makeNode("identifier", yystack.l_mark[0].node, NULL, NULL), NULL, NULL);}
break;
case 49:
#line 108 "parser.y"
	{yyval.node = makeNode(yystack.l_mark[-1].string,makeNode(yystack.l_mark[-3].string, makeNode("identifier", yystack.l_mark[-2].node, NULL, NULL), NULL, NULL),yystack.l_mark[0].node, NULL);}
break;
case 50:
#line 109 "parser.y"
	{yyval.node = makeNode(yystack.l_mark[-1].string,makeNode(yystack.l_mark[-3].string, makeNode("identifier", yystack.l_mark[-2].node, NULL, NULL), NULL, NULL),yystack.l_mark[0].node, NULL);}
break;
case 51:
#line 110 "parser.y"
	{yyval.node = makeNode("FuncExpr", yystack.l_mark[-3].node, yystack.l_mark[-1].node, NULL);}
break;
case 52:
#line 111 "parser.y"
	{yyval.node = makeNode(yystack.l_mark[-1].string, makeNode("FuncExpr", yystack.l_mark[-5].node, yystack.l_mark[-3].node, NULL), yystack.l_mark[0].node, NULL);}
break;
case 53:
#line 112 "parser.y"
	{yyval.node = makeNode(yystack.l_mark[-1].string, makeNode("FuncExpr", yystack.l_mark[-5].node, yystack.l_mark[-3].node, NULL), yystack.l_mark[0].node, NULL);}
break;
case 54:
#line 113 "parser.y"
	{yyval.node = makeNode("length/absolute",  makeNode("identifier", yystack.l_mark[-1].node, NULL, NULL), NULL, NULL);}
break;
case 55:
#line 114 "parser.y"
	{yyval.node = makeNode(yystack.l_mark[-1].string,makeNode("length/absolute",  makeNode("identifier", yystack.l_mark[-3].node, NULL, NULL), NULL, NULL),yystack.l_mark[0].node, NULL);}
break;
case 56:
#line 115 "parser.y"
	{yyval.node = makeNode(yystack.l_mark[-1].string,makeNode("length/absolute",  makeNode("identifier", yystack.l_mark[-3].node, NULL, NULL), NULL, NULL),yystack.l_mark[0].node, NULL);}
break;
case 57:
#line 116 "parser.y"
	{yyval.node = makeNode("NUM", yystack.l_mark[0].node, NULL, NULL);}
break;
case 58:
#line 117 "parser.y"
	{yyval.node = makeNode(yystack.l_mark[-1].string, makeNode("NUM",yystack.l_mark[0].node, NULL, NULL),NULL, NULL);}
break;
case 59:
#line 118 "parser.y"
	{yyval.node = makeNode(yystack.l_mark[-1].string,makeNode(yystack.l_mark[-3].string, makeNode("NUM",yystack.l_mark[-2].node, NULL, NULL),NULL, NULL),yystack.l_mark[0].node,NULL);}
break;
case 60:
#line 119 "parser.y"
	{yyval.node = makeNode("boolean", yystack.l_mark[0].node, NULL, NULL);}
break;
case 61:
#line 120 "parser.y"
	{yyval.node = makeNode("CHAR", makeNode( yystack.l_mark[0].string,NULL, NULL, NULL), NULL, NULL);}
break;
case 62:
#line 121 "parser.y"
	{yyval.node = makeNode("string", yystack.l_mark[0].node, NULL, NULL);}
break;
case 63:
#line 122 "parser.y"
	{yyval.node = makeNode("NULL", NULL, NULL, NULL);}
break;
case 64:
#line 123 "parser.y"
	{yyval.node = makeNode("addres",makeNode("identifier", yystack.l_mark[0].node, NULL, NULL), NULL, NULL);}
break;
case 65:
#line 124 "parser.y"
	{yyval.node = makeNode(yystack.l_mark[-1].string,makeNode("addres", makeNode("identifier", yystack.l_mark[-2].node, NULL, NULL), NULL, NULL), yystack.l_mark[0].node, NULL);}
break;
case 66:
#line 125 "parser.y"
	{yyval.node = makeNode(yystack.l_mark[-1].string,makeNode("addres", makeNode("identifier", yystack.l_mark[-2].node, NULL, NULL), NULL, NULL), yystack.l_mark[0].node, NULL);}
break;
case 67:
#line 126 "parser.y"
	{yyval.node = makeNode("pointer", makeNode("identifier", yystack.l_mark[0].node, NULL, NULL), NULL, NULL);}
break;
case 68:
#line 127 "parser.y"
	{yyval.node = makeNode(yystack.l_mark[-1].string,makeNode("pointer", makeNode("identifier", yystack.l_mark[-2].node, NULL, NULL), NULL, NULL), yystack.l_mark[0].node, NULL);}
break;
case 69:
#line 128 "parser.y"
	{yyval.node = makeNode(yystack.l_mark[-1].string,makeNode("pointer", makeNode("identifier", yystack.l_mark[-2].node, NULL, NULL), NULL, NULL), yystack.l_mark[0].node, NULL);}
break;
case 70:
#line 129 "parser.y"
	{yyval.node = makeNode(yystack.l_mark[-1].string, makeNode("identifier", yystack.l_mark[-2].node, NULL, NULL), yystack.l_mark[0].node, NULL);}
break;
case 71:
#line 130 "parser.y"
	{yyval.node = makeNode(yystack.l_mark[-1].string, makeNode("identifier", yystack.l_mark[-2].node, NULL, NULL), yystack.l_mark[0].node, NULL);}
break;
case 72:
#line 131 "parser.y"
	{yyval.node = makeNode(yystack.l_mark[-1].string, makeNode("NUM", yystack.l_mark[-2].node, NULL, NULL), yystack.l_mark[0].node, NULL);}
break;
case 73:
#line 132 "parser.y"
	{yyval.node = makeNode(yystack.l_mark[-1].string, makeNode("NUM", yystack.l_mark[-2].node, NULL, NULL), yystack.l_mark[0].node, NULL);}
break;
case 74:
#line 133 "parser.y"
	{yyval.node = makeNode(yystack.l_mark[-1].string, makeNode("boolean", yystack.l_mark[-2].node, NULL, NULL), yystack.l_mark[0].node, NULL);}
break;
case 75:
#line 134 "parser.y"
	{yyval.node = makeNode(yystack.l_mark[-1].string, makeNode("boolean", yystack.l_mark[-2].node, NULL, NULL), yystack.l_mark[0].node, NULL);}
break;
case 76:
#line 135 "parser.y"
	{yyval.node = yystack.l_mark[-1].node;}
break;
case 77:
#line 136 "parser.y"
	{yyval.node = makeNode(yystack.l_mark[-1].string, yystack.l_mark[-3].node, yystack.l_mark[0].node, NULL);}
break;
case 78:
#line 137 "parser.y"
	{yyval.node = makeNode(yystack.l_mark[-1].string, yystack.l_mark[-3].node, yystack.l_mark[0].node, NULL);}
break;
case 79:
#line 139 "parser.y"
	{yyval.string ="-";}
break;
case 80:
#line 140 "parser.y"
	{yyval.string ="+";}
break;
case 81:
#line 142 "parser.y"
	{yyval.node = makeNode("parmater", yystack.l_mark[0].node, NULL, NULL);}
break;
case 82:
#line 143 "parser.y"
	{yyval.node = makeNode("multiparm", yystack.l_mark[-2].node, yystack.l_mark[0].node, NULL);}
break;
case 83:
#line 144 "parser.y"
	{yyval.node = NULL;}
break;
case 84:
#line 146 "parser.y"
	{yyval.node = makeNode(yystack.l_mark[0].string, NULL, NULL, NULL);}
break;
case 85:
#line 148 "parser.y"
	{yyval.node = makeNode("true", NULL, NULL, NULL);}
break;
case 86:
#line 149 "parser.y"
	{yyval.node = makeNode("false", NULL, NULL, NULL);}
break;
case 87:
#line 151 "parser.y"
	{yyval.string = "=="; }
break;
case 88:
#line 152 "parser.y"
	{yyval.string = "!=";}
break;
case 89:
#line 153 "parser.y"
	{yyval.string = ">"; }
break;
case 90:
#line 154 "parser.y"
	{yyval.string = ">=";}
break;
case 91:
#line 155 "parser.y"
	{yyval.string = "<";}
break;
case 92:
#line 156 "parser.y"
	{yyval.string ="<=";}
break;
case 93:
#line 157 "parser.y"
	{yyval.string = "OR";}
break;
case 94:
#line 158 "parser.y"
	{yyval.string = "AND";}
break;
case 95:
#line 161 "parser.y"
	{yyval.string = "+";}
break;
case 96:
#line 162 "parser.y"
	{yyval.string = "-";}
break;
case 97:
#line 163 "parser.y"
	{yyval.string = "*";}
break;
case 98:
#line 164 "parser.y"
	{yyval.string = "/";}
break;
case 99:
#line 166 "parser.y"
	{yyval.node = makeNode("return", yystack.l_mark[-1].node, NULL, NULL);}
break;
case 100:
#line 167 "parser.y"
	{yyval.node = makeNode("return", NULL, NULL, NULL);}
break;
case 101:
#line 169 "parser.y"
	{yyval.node = makeNode("BLOCK", yystack.l_mark[-1].node, NULL, NULL);}
break;
case 102:
#line 171 "parser.y"
	{yyval.node = makeNode("=", yystack.l_mark[-2].node, yystack.l_mark[0].node, NULL);}
break;
case 103:
#line 172 "parser.y"
	{yyval.node = makeNode("=", makeNode("pointer", yystack.l_mark[-2].node, NULL, NULL), yystack.l_mark[0].node, NULL);}
break;
case 104:
#line 174 "parser.y"
	{yyval.node = makeNode("=", yystack.l_mark[-7].node, makeNode("addres", makeNode(yystack.l_mark[-2].string, yystack.l_mark[-3].node, yystack.l_mark[-1].node, NULL), NULL, NULL), NULL);}
break;
case 105:
#line 175 "parser.y"
	{yyval.node = makeNode("callFunc",yystack.l_mark[-3].node, yystack.l_mark[-1].node, NULL);}
break;
case 106:
#line 177 "parser.y"
	{yyval.node = makeNode("LOOP", yystack.l_mark[0].node, NULL, NULL);}
break;
case 107:
#line 178 "parser.y"
	{yyval.node = makeNode("LOOP", yystack.l_mark[0].node, NULL, NULL);}
break;
case 108:
#line 179 "parser.y"
	{yyval.node = makeNode("LOOP", yystack.l_mark[0].node, NULL, NULL);}
break;
case 109:
#line 182 "parser.y"
	{yyval.node = makeNode("FOR", makeNode("FORPART", yystack.l_mark[-6].node, yystack.l_mark[-4].node, yystack.l_mark[-2].node), yystack.l_mark[0].node, NULL);}
break;
case 110:
#line 184 "parser.y"
	{yyval.node = yystack.l_mark[0].node;}
break;
case 111:
#line 185 "parser.y"
	{yyval.node = NULL;}
break;
case 112:
#line 187 "parser.y"
	{yyval.node = yystack.l_mark[0].node;}
break;
case 113:
#line 188 "parser.y"
	{yyval.node = NULL;}
break;
case 114:
#line 190 "parser.y"
	{yyval.node = makeNode("WHILE", yystack.l_mark[-2].node, yystack.l_mark[0].node, NULL);}
break;
case 115:
#line 192 "parser.y"
	{yyval.node = makeNode("DO", yystack.l_mark[-4].node, makeNode("WHILE", yystack.l_mark[-1].node, NULL, NULL), NULL);}
break;
case 116:
#line 197 "parser.y"
	{yyval.node = makeNode("func", makeNode("FUNCINFO", yystack.l_mark[-5].node, yystack.l_mark[-4].node, yystack.l_mark[-2].node), yystack.l_mark[0].node, NULL);}
break;
case 117:
#line 199 "parser.y"
	{yyval.node = makeNode("parm", yystack.l_mark[-1].node, yystack.l_mark[0].node, NULL);}
break;
case 118:
#line 200 "parser.y"
	{yyval.node = makeNode("parm", yystack.l_mark[-2].node, yystack.l_mark[-1].node, yystack.l_mark[0].node);}
break;
case 119:
#line 201 "parser.y"
	{yyval.node = NULL;}
break;
case 120:
#line 203 "parser.y"
	{yyval.node = makeNode("multiparm", yystack.l_mark[-2].node, yystack.l_mark[-1].node, yystack.l_mark[0].node);}
break;
case 121:
#line 204 "parser.y"
	{yyval.node = makeNode("multiparm", yystack.l_mark[-1].node, yystack.l_mark[0].node, NULL);}
break;
#line 1259 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
