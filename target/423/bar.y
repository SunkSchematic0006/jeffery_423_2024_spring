%token OPEN CLOSE X

%%

nt1 : nt2 nt3 nt4 ;
nt2 : OPEN ;
nt3 : nt3 X | X ;
nt4 : CLOSE ;
