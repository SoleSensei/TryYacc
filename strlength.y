%{

#include <stdio.h>

%}

%%
P: S { printf ("length: %d\n", $1); }
S: '('A')'S { $$=$4+1; } | { $$=0; } 
A: '('A')'A { $$=0; } | { $$=0; }
%%



int main(){
    printf( "type a string: ");
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
    printf ( "Len eval: %s\n", s);
};
