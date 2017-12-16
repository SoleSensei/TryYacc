%{

#include <stdio.h>
int num = 0;
%}

%%
P: E { printf ("calculator: %d\n", $1); }
E:    E'+'M { $$=$1+$3; } 
    | E'-'M { $$=$1-$3; }
    | M     { $$=$1; }
M:    M'*'N { $$=$1*$3; }
    | M'/'N { if($3 == 0){ printf( "Error: zero dividation\n" ); return 0; } $$=$1/$3; }    
    | '('E')' { $$=$2;}
    | N  { $$=$1; }
N:   N'1' { $$=$1*10+1; }
    |N'2' { $$=$1*10+2; }
    |N'3' { $$=$1*10+3; }
    |N'4' { $$=$1*10+4; }
    |N'5' { $$=$1*10+5; }
    |N'6' { $$=$1*10+6; }
    |N'7' { $$=$1*10+7; }
    |N'8' { $$=$1*10+8; }
    |N'9' { $$=$1*10+9; }
    |N'0' { $$=$1*10; }
    |     { $$=0; }
%%



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
