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
extern YYSTYPE yylval;
