%%

program : declarations ;


declarations : declaration declarations |  ;

declaration : globalvariabledeclaration | functiondefinition | ... ;






expression: IDENTIFIER | INTEGERLITERAL | ...
expression: OPERATOR expression ;
expression: expression OPERATOR ;
expression: expression binaryoperator expression ;
binaryoperator: PLUS | MINUS | ASTERISK | DIV ;
