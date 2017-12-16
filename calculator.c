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

#line 2 "calculator.y"

#include <stdio.h>
int num = 0;
#line 25 "calculator.c"

#if ! defined(YYSTYPE) && ! defined(YYSTYPE_IS_DECLARED)
/* Default: YYSTYPE is the semantic value type. */
typedef int YYSTYPE;
# define YYSTYPE_IS_DECLARED 1
#endif

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

#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    1,    1,    1,    2,    2,    2,    2,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,
};
static const YYINT yylen[] = {                            2,
    1,    3,    3,    1,    3,    3,    3,    1,    2,    2,
    2,    2,    2,    2,    2,    2,    2,    2,    0,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,   19,   19,
    9,   10,   11,   12,   13,   14,   15,   16,   17,   18,
    7,    0,    0,    0,    0,
};
static const YYINT yydgoto[] = {                          2,
    3,    4,    5,
};
static const YYINT yysindex[] = {                       -40,
  -40,    0,  -14,  -12,  -46,   -5,  -40,  -40,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  -12,  -12,  -46,  -46,
};
static const YYINT yyrindex[] = {                        17,
  -29,    0,   15,   78,   34,    0,    1,    1,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   85,   90,   41,   61,
};
static const YYINT yygindex[] = {                         0,
   36,   25,   82,
};
#define YYTABLESIZE 135
static const YYINT yytable[] = {                          1,
   19,   20,   11,   12,   13,   14,   15,   16,   17,   18,
   19,   19,   19,   19,    1,   19,   19,   19,   19,   19,
   19,   19,   19,   19,   19,   19,   19,   19,    7,    9,
    8,   22,   23,    8,   10,   21,    6,    7,    0,    8,
    5,   19,   19,   19,    0,   19,    0,   19,   19,   19,
   19,   19,   19,   19,   19,   19,   19,   19,   19,   19,
    6,   19,    0,   19,   19,   19,   19,   19,   19,   19,
   19,   19,   19,   19,    8,    8,    8,    4,    8,    0,
    8,    5,    5,    5,    2,    5,    0,    5,    0,    3,
   24,   25,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    6,    6,    6,    0,    6,    0,    6,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    4,    0,
    4,    0,    4,    0,    0,    2,    0,    2,    0,    2,
    3,    0,    3,    0,    3,
};
static const YYINT yycheck[] = {                         40,
    0,   48,   49,   50,   51,   52,   53,   54,   55,   56,
   57,   41,   42,   43,    0,   45,    0,   47,   48,   49,
   50,   51,   52,   53,   54,   55,   56,   57,   43,   42,
   45,    7,    8,    0,   47,   41,    1,   43,   -1,   45,
    0,   41,   42,   43,   -1,   45,   -1,   47,   48,   49,
   50,   51,   52,   53,   54,   55,   56,   57,   42,   43,
    0,   45,   -1,   47,   48,   49,   50,   51,   52,   53,
   54,   55,   56,   57,   41,   42,   43,    0,   45,   -1,
   47,   41,   42,   43,    0,   45,   -1,   47,   -1,    0,
    9,   10,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   41,   42,   43,   -1,   45,   -1,   47,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   41,   -1,
   43,   -1,   45,   -1,   -1,   41,   -1,   43,   -1,   45,
   41,   -1,   43,   -1,   45,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 256
#define YYUNDFTOKEN 262
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"'('","')'","'*'","'+'",0,"'-'",0,"'/'","'0'","'1'","'2'","'3'",
"'4'","'5'","'6'","'7'","'8'","'9'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : P",
"P : E",
"E : E '+' M",
"E : E '-' M",
"E : M",
"M : M '*' N",
"M : M '/' N",
"M : '(' E ')'",
"M : N",
"N : N '1'",
"N : N '2'",
"N : N '3'",
"N : N '4'",
"N : N '5'",
"N : N '6'",
"N : N '7'",
"N : N '8'",
"N : N '9'",
"N : N '0'",
"N :",

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
#line 28 "calculator.y"



int main(){
    printf( "type an expression: ");
    yyparse();
    return 0;
}

yylex(){
    int c;
    c = getchar();
    if ( c=='\n') return 0;
    yylval = c;
    return c;
};

yyerror (char *s) {
    printf ( "Calc eval: %s\n", s);
};
#line 226 "calculator.c"

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
#line 8 "calculator.y"
	{ printf ("calculator: %d\n", yystack.l_mark[0]); }
break;
case 2:
#line 9 "calculator.y"
	{ yyval=yystack.l_mark[-2]+yystack.l_mark[0]; }
break;
case 3:
#line 10 "calculator.y"
	{ yyval=yystack.l_mark[-2]-yystack.l_mark[0]; }
break;
case 4:
#line 11 "calculator.y"
	{ yyval=yystack.l_mark[0]; }
break;
case 5:
#line 12 "calculator.y"
	{ yyval=yystack.l_mark[-2]*yystack.l_mark[0]; }
break;
case 6:
#line 13 "calculator.y"
	{ if(yystack.l_mark[0] == 0){ printf( "Error: zero dividation\n" ); return 0; } yyval=yystack.l_mark[-2]/yystack.l_mark[0]; }
break;
case 7:
#line 14 "calculator.y"
	{ yyval=yystack.l_mark[-1];}
break;
case 8:
#line 15 "calculator.y"
	{ yyval=yystack.l_mark[0]; }
break;
case 9:
#line 16 "calculator.y"
	{ yyval=yystack.l_mark[-1]*10+1; }
break;
case 10:
#line 17 "calculator.y"
	{ yyval=yystack.l_mark[-1]*10+2; }
break;
case 11:
#line 18 "calculator.y"
	{ yyval=yystack.l_mark[-1]*10+3; }
break;
case 12:
#line 19 "calculator.y"
	{ yyval=yystack.l_mark[-1]*10+4; }
break;
case 13:
#line 20 "calculator.y"
	{ yyval=yystack.l_mark[-1]*10+5; }
break;
case 14:
#line 21 "calculator.y"
	{ yyval=yystack.l_mark[-1]*10+6; }
break;
case 15:
#line 22 "calculator.y"
	{ yyval=yystack.l_mark[-1]*10+7; }
break;
case 16:
#line 23 "calculator.y"
	{ yyval=yystack.l_mark[-1]*10+8; }
break;
case 17:
#line 24 "calculator.y"
	{ yyval=yystack.l_mark[-1]*10+9; }
break;
case 18:
#line 25 "calculator.y"
	{ yyval=yystack.l_mark[-1]*10; }
break;
case 19:
#line 26 "calculator.y"
	{ yyval=0; }
break;
#line 504 "calculator.c"
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
