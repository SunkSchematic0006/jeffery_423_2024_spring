
%%


compoundstmt : '{' stmtlist '}' ;

compoundstmt : '{' '}' ;
stmtlist : stmtlist stmt;
stmtlist : stmt ;
stmt: assignmentstmt;
stmt: whilestmt;
stmt: ifstmt;


switchblock : '{' switchstmtlist '}' ;
switchstmtlist : switchstmtlist switchstmt;
switchstmtlist : switchstmt;

switchstmt: caselabels stmtlist breakstmt;
switchstmt: breakstmt;

caselabels: caselabels caselabel ;
caselabels: caselabel ;

caselabel: CASE constvalue ':' ;


switchstmt : SWITCH '(' expr ')' switchblock;
