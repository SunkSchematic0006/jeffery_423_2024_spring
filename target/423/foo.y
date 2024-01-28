%right ASSIGN
%left PLUS MINUS
%left TIMES DIVIDE
%right POWER
%token IDENT
%%
expr: expr ASSIGN expr
    | expr PLUS expr
    | expr MINUS expr
    | expr TIMES expr
    | expr DIVIDE expr
    | expr POWER expr
    | IDENT
    ;
