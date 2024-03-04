%term ASSIGN PLUS MINUS TIMES DIVIDE POWER IDENT
%right ASSIGN
%left PLUS MINUS
%left TIMES DIVIDE
%right POWER
%%
expr: expr ASSIGN expr
    | expr PLUS expr
    | expr MINUS expr
    | expr TIMES expr
    | expr DIVIDE expr
    | expr POWER expr
    | IDENT
    ;


parameterlist : '(' params_opt ')';

params_opt : params |  %empty ;

params : param | params ',' param  ;
