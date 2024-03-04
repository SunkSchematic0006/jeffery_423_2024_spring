%{
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include "tree.h"
    #define YYDEBUG 1

    extern struct tree *root;
    extern char *yytext;
    extern int yyerror(char *message);
    extern int yylex(void);
%}

%union {
    struct tree *treeptr;
    struct token *leaf;
}

%start file

%token <treeptr>UNDEF
%token <treeptr>BREAK 
%token <treeptr>DOUBLE 
%token <treeptr>ELSE 
%token <treeptr>FOR 
%token <treeptr>IF 
%token <treeptr>INT 
%token <treeptr>VOID 
%token <treeptr>WHILE 
%token <treeptr>FLOAT 
%token <treeptr>LONG
%token <treeptr>IDENTIFIER 
%token <treeptr>CLASSNAME 
%token <treeptr>CLASS 
%token <treeptr>STRING 
%token <treeptr>BOOL
%token <treeptr>INTLIT 
%token <treeptr>DOUBLELIT 
%token <treeptr>STRINGLIT 
%token <treeptr>BOOLLIT 
%token <treeptr>NULLVAL
%token <treeptr>LEQ 
%token <treeptr>GEQ 
%token <treeptr>CHAR 
%token <treeptr>EQ 
%token <treeptr>NEQ 
%token <treeptr>LAND 
%token <treeptr>LOR
%token <treeptr>INCR 
%token <treeptr>DECR 
%token <treeptr>PUBLIC 
%token <treeptr>STATIC 
%token <treeptr>NEW 
%token <treeptr>RETURN
%token<treeptr> '['
%token<treeptr> ']'
%token<treeptr> '{'
%token<treeptr> '}'
%token<treeptr> '('
%token<treeptr> ')'
%token<treeptr> ':'
%token<treeptr> ';'
%token<treeptr> '.'
%token<treeptr> ','
%token<treeptr> '+'
%token<treeptr> '-'
%token<treeptr> '*'
%token<treeptr> '/'
%token<treeptr> '%'
%token<treeptr> '='
%token<treeptr> '<'
%token<treeptr> '>'
%token<treeptr> '!'

%type<treeptr> file
%type<treeptr> ClassDecl
%type<treeptr> ClassBody
%type<treeptr> ClassBodyDecls
%type<treeptr> ClassBodyDecl
%type<treeptr> FieldDecl
%type<treeptr> Type
%type<treeptr> Name
%type<treeptr> QualifiedName
%type<treeptr> VarDecls
%type<treeptr> VarDeclarator
%type<treeptr> MethodDecl
%type<treeptr> MethodHeader
%type<treeptr> MethodDeclarator
%type<treeptr> FormalParmListOpt
%type<treeptr> FormalParmList
%type<treeptr> FormalParm
%type<treeptr> ConstructorDecl
%type<treeptr> ConstructorDeclarator
%type<treeptr> ArgListOpt
%type<treeptr> Block
%type<treeptr> BlockStmtsOpt
%type<treeptr> BlockStmts
%type<treeptr> BlockStmt
%type<treeptr> LocalVarDeclStmt
%type<treeptr> LocalVarDecl
%type<treeptr> StmtWoTrailingStmt
%type<treeptr> Stmt
%type<treeptr> ExprStmt
%type<treeptr> StmtExpr
%type<treeptr> IfThenStmt
%type<treeptr> IfThenElseStmt
%type<treeptr> IfThenElseIfStmt
%type<treeptr> ElseIfSequence
%type<treeptr> ElseIfStmt
%type<treeptr> WhileStmt
%type<treeptr> ForStmt
%type<treeptr> ForInit
%type<treeptr> ExprOpt
%type<treeptr> ForUpdate
%type<treeptr> StmtExprList
%type<treeptr> BreakStmt
%type<treeptr> ReturnStmt
%type<treeptr> Primary
%type<treeptr> Literal
%type<treeptr> InstantiationExpr
%type<treeptr> ArgList
%type<treeptr> FieldAccess
%type<treeptr> MethodCall
%type<treeptr> PostFixExpr
%type<treeptr> UnaryExpr
%type<treeptr> MulExpr
%type<treeptr> AddExpr
%type<treeptr> RelOp
%type<treeptr> RelExpr
%type<treeptr> EqExpr
%type<treeptr> CondAndExpr
%type<treeptr> CondOrExpr
%type<treeptr> Expr
%type<treeptr> Assignment
%type<treeptr> LeftHandSide
%type<treeptr> AssignOp
%type<treeptr> ArrayDecl
%type<treeptr> DeclHeader
%type<treeptr> ArrayAssign


%%
file: ClassDecl      { root = $1; /*treeprint($1, 0);*/ };

ClassDecl: PUBLIC CLASS IDENTIFIER ClassBody       { $$ = treemake(ClassDecl, "ClassDecl", 4, $1, $2, $3, $4); };

ClassBody: '{' ClassBodyDecls '}'       { $$ = treemake(ClassBody, "ClassBody", 1, $2); } | '{' '}'       { $$ = treemake(ClassBody, "ClassBody", 2, $1, $2); };

ClassBodyDecls: ClassBodyDecl       { $$ = treemake(ClassBodyDecls, "ClassBodyDecls", 1, $1); } | ClassBodyDecls ClassBodyDecl        { $$ = treemake(ClassBodyDecls, "ClassBodyDecls", 2, $1, $2); };

ClassBodyDecl: FieldDecl        { $$ = treemake(ClassBodyDecl, "ClassBodyDecl", 1, $1); } | MethodDecl       { $$ = treemake(ClassBodyDecl, "ClassBodyDecl", 1, $1); } | ConstructorDecl      { $$ = treemake(ClassBodyDecl, "ClassBodyDecl", 1, $1); };

FieldDecl: DeclHeader VarDecls ';'        { $$ = treemake(FieldDecl, "FieldDecl", 2, $1, $2); };

DeclHeader: PUBLIC STATIC Type              { $$ = treemake(DeclHeader, "DeclHeader", 3, $1, $2, $3); } | PUBLIC STATIC VOID          { $$ = /*$1; $$=$2; $$=$3;*/ treemake(DeclHeader, "DeclHeader", 3, $1, $2, $3); } ;

Type: INT         { $$ = $1; } | DOUBLE         { $$ = $1; } | BOOL         { $$ = $1; } | STRING         { $$ = $1; } | CHAR           { $$=$1; } ;

Name: IDENTIFIER         { $$ = $1; } | QualifiedName         { $$ = treemake(Name, "Name", 1, $1); } ;

QualifiedName: Name '.' IDENTIFIER         { $$ = treemake(QualifiedName, "QualifiedName", 2, $1, $3); } ;

VarDecls: VarDeclarator         { $$ = treemake(VarDecls, "VarDecls", 1, $1); } | ArrayDecl { $$ = treemake(VarDecls, "VarDecls", 1, $1); } ;

VarDeclarator: IDENTIFIER         { $$ = $1; } ;

ArrayDecl: VarDeclarator '[' ']'         { $$ = treemake(ArrayDecl, "ArrayDecl", 1, $1); } ;

MethodDecl: MethodHeader Block         { $$ = treemake(MethodDecl, "MethodDecl", 2, $1, $2); };

MethodHeader: DeclHeader MethodDeclarator         { $$ = treemake(MethodHeader, "MethodHeader", 2, $1, $2); };

MethodDeclarator: IDENTIFIER '(' FormalParmListOpt ')'         { $$ = treemake(MethodDeclarator, "MethodDeclarator", 2, $1, $3); };

FormalParmListOpt: FormalParmList         { $$ = treemake(FormalParmListOpt, "FormalParmListOpt", 1, $1); } |           { $$ = NULL; };

FormalParmList: FormalParm         { $$ = treemake(FormalParmList, "FormalParmList", 1, $1); } | FormalParmList ',' FormalParm         { $$ = treemake(FormalParmList, "FormalParmList", 2, $1, $2); };

FormalParm: Type VarDeclarator         { $$ = treemake(FormalParm, "FormalParm", 2, $1, $2); } | Type ArrayDecl     {$$ = treemake(FormalParm, "FormalParm", 2, $1, $2); } ;

ConstructorDecl: ConstructorDeclarator Block         { $$ = treemake(ConstructorDecl, "ConstructorDecl", 2, $1, $2); };

ConstructorDeclarator: IDENTIFIER '(' FormalParmListOpt ')'         { $$ = treemake(ConstructorDeclarator, "ConstructorDeclarator", 2, $1, $3); };

ArgListOpt: ArgList         { $$ = treemake(ArgListOpt, "ArgListOpt", 1, $1); } |         { $$ = NULL; };

Block: '{' BlockStmtsOpt '}'         { $$ = treemake(Block, "Block", 1, $2); };

BlockStmtsOpt: BlockStmts         { $$ = treemake(BlockStmtsOpt, "BlockStmtsOpt", 1, $1); } |         { $$ = NULL; };

BlockStmts:  BlockStmt         { $$ = treemake(BlockStmts, "BlockStmts", 1, $1); } | BlockStmts BlockStmt         { $$ = treemake(BlockStmts, "BlockStmts", 2, $1, $2); };

BlockStmt:   LocalVarDeclStmt         { $$ = treemake(BlockStmt, "BlockStmt", 1, $1); } | Stmt         { $$ = treemake(BlockStmt, "BlockStmt",1, $1); };

LocalVarDeclStmt: LocalVarDecl ';'         { $$ = treemake(LocalVarDeclStmt, "LocalVarDeclStmt", 1, $1); };

LocalVarDecl: Type VarDecls         { $$ = treemake(LocalVarDecl, "ClassBodyDecls", 2, $1, $2); };

StmtWoTrailingStmt: Block         { $$ = treemake(StmtWoTrailingStmt, "StmtWoTrailingStmt", 1, $1); } | ';'         { $$ = $1; } | ExprStmt         { $$ = treemake(StmtWoTrailingStmt, "StmtWoTrailingStmt", 1, $1); } | BreakStmt         { $$ = treemake(StmtWoTrailingStmt, "StmtWoTrailingStmt", 1, $1); } | ReturnStmt         { $$ = treemake(StmtWoTrailingStmt, "StmtWoTrailingStmt", 1, $1); };

Stmt: StmtWoTrailingStmt         { $$ = treemake(Stmt, "Stmt", 1, $1); } | IfThenStmt         { $$ = treemake(Stmt, "Stmt", 1, $1); } | IfThenElseStmt         { $$ = treemake(Stmt, "Stmt", 1, $1); } | IfThenElseIfStmt         { $$ = treemake(Stmt, "Stmt", 1, $1); } | WhileStmt         { $$ = treemake(Stmt, "Stmt", 1, $1); } | ForStmt         { $$ = treemake(Stmt, "Stmt", 1, $1); };

ExprStmt: StmtExpr ';'         { $$ = treemake(ExprStmt, "ExprStmt", 1, $1); };

StmtExpr: Assignment         { $$ = treemake(StmtExpr, "StmtExpr", 1, $1); } | MethodCall         { $$ = treemake(StmtExpr, "StmtExpr", 1, $1); } | InstantiationExpr         { $$ = treemake(StmtExpr, "StmtExpr", 1, $1); };

IfThenStmt: IF '(' Expr ')' Block         { $$ = treemake(IfThenStmt, "IfThenStmt", 2, $3, $5); };

IfThenElseStmt: IF '(' Expr ')' Block ELSE Block         { $$ = treemake(IfThenElseStmt, "IfThenElseStmt", 3, $3, $5, $7); };

IfThenElseIfStmt: IF '(' Expr ')' Block ElseIfSequence         { $$ = treemake(IfThenElseIfStmt, "IfThenElseStmt", 3, $3, $5, $6); } |  IF '(' Expr ')' Block ElseIfSequence ELSE Block         { $$ = treemake(IfThenElseIfStmt, "IfThenElseStmt", 4, $3, $5, $6, $8); };

ElseIfSequence: ElseIfStmt         { $$ = treemake(ElseIfSequence, "ElseIfSequence", 1, $1); } | ElseIfSequence ElseIfStmt         { $$ = treemake(ElseIfSequence, "ElseIfSequence", 2, $1, $2); };

ElseIfStmt: ELSE IfThenStmt         { $$ = treemake(ElseIfStmt, "ElseIfStmt", 1, $2); };

WhileStmt: WHILE '(' Expr ')' Stmt         { $$ = treemake(WhileStmt, "WhileStmt", 2, $3, $5); };

ForStmt: FOR '(' ForInit ';' ExprOpt ';' ForUpdate ')' Block         { $$ = treemake(ForStmt, "ForStmt", 4, $3, $5, $7, $9); };

ForInit: StmtExprList         { $$ = treemake(ForInit, "ForInit", 1, $1); } | LocalVarDecl         { $$ = treemake(ForInit, "ForInit", 1, $1); } | { $$ = NULL; };

ExprOpt: Expr         { $$ = treemake(ExprOpt, "ExprOpt", 1, $1); } |  { $$ = NULL; };

ForUpdate: StmtExprList         { $$ = treemake(ForUpdate, "ForUpdate", 1, $1); } | { $$ = NULL; };

StmtExprList: StmtExpr         { $$ = treemake(StmtExprList, "StmtExprList", 1, $1); } | StmtExprList ',' StmtExpr         { $$ = treemake(StmtExprList, "StmtExprList", 2, $1, $3); };

BreakStmt: BREAK ';'         { $$ = $1; } | BREAK IDENTIFIER ';'         { $$ = treemake(BreakStmt, "BreakStmt", 2, $1, $2); };

ReturnStmt: RETURN ExprOpt ';'         { $$ = treemake(ReturnStmt, "ReturnStmt", 1, $2); };

Primary:  Literal         { $$ = treemake(Primary, "Primary", 1, $1); } | '(' Expr ')'         { $$ = treemake(Primary, "Primary", 1, $2); } | FieldAccess         { $$ = treemake(Primary, "Primary", 1, $1); } | MethodCall         { $$ = treemake(Primary, "Primary", 1, $1); };

Literal: INTLIT         { $$ = $1; } | DOUBLELIT         { $$ = $1; } | BOOLLIT         { $$ = $1; } | STRINGLIT         { $$ = $1; } | NULLVAL ;

InstantiationExpr: NEW Name '(' ArgListOpt ')'         { $$ = treemake(InstantiationExpr, "ForStmt", 5, $1, $2, $3, $4, $5); };

ArgList: Expr         { $$ = treemake(ArgList, "ArgList", 1, $1); } | ArgList ',' Expr         { $$ = treemake(ArgList, "ArgList", 2, $1, $3); };

FieldAccess: Primary '.' IDENTIFIER         { $$ = treemake(FieldAccess, "FieldAccess", 2, $1, $3); };

MethodCall: Name '(' ArgListOpt ')'         { $$ = treemake(MethodCall, "MethodCall", 2, $1, $3); } | Name '{' ArgListOpt '}'         { $$ = treemake(MethodCall, "MethodCall", 2, $1, $3); } | Primary '.' IDENTIFIER '(' ArgListOpt ')'       { $$ = treemake(MethodCall, "MethodCall", 3, $1, $3, $5); } | Primary '.' IDENTIFIER '{' ArgListOpt '}'         { $$ = treemake(MethodCall, "MethodCall", 3, $1, $3, $5); };

PostFixExpr: Primary         { $$ = treemake(PostFixExpr, "PostFixExpr", 1, $1); } | Name         { $$ = treemake(PostFixExpr, "PostFixExpr", 1, $1); };

UnaryExpr:  '-' UnaryExpr         { $$ = treemake(UnaryExpr, "UnaryExpr", 2, $1, $2); } | '!' UnaryExpr         { $$ = treemake(UnaryExpr, "UnaryExpr", 2, $1, $2); } | PostFixExpr         { $$ = treemake(UnaryExpr, "UnaryExpr", 1, $1); };

MulExpr: UnaryExpr         { $$ = treemake(MulExpr, "MulExpr", 1, $1); } | MulExpr '*' UnaryExpr         { $$ = treemake(MulExpr, "MulExpr", 2, $1, $2); } | MulExpr '/' UnaryExpr         { $$ = treemake(MulExpr, "MulExpr", 2, $1, $2); } | MulExpr '%' UnaryExpr         { $$ = treemake(MulExpr, "MulExpr", 2, $1, $2); };

AddExpr: MulExpr         { $$ = treemake(AddExpr, "AddExpr", 1, $1); } | AddExpr '+' MulExpr         { $$ = treemake(AddExpr, "AddExpr", 2, $1, $3); } | AddExpr '-' MulExpr         { $$ = treemake(AddExpr, "AddExpr", 2, $1, $3); };

RelOp: LEQ         { $$ = $1; } | GEQ         { $$ = $1; } | '<'         { $$ = $1; } | '>'         { $$ = $1; };

RelExpr: AddExpr         { $$ = treemake(RelExpr, "RelExpr", 1, $1); } | RelExpr RelOp AddExpr         { $$ = treemake(RelExpr, "RelExpr", 3, $1, $2, $3); };

EqExpr: RelExpr         { $$ = treemake(EqExpr, "EqExpr", 1, $1); } | EqExpr EQ RelExpr         { $$ = treemake(EqExpr, "EqExpr", 2, $1, $3); } | EqExpr NEQ RelExpr         { $$ = treemake(EqExpr, "EqExpr", 2, $1, $3); };

CondAndExpr: EqExpr         { $$ = treemake(CondAndExpr, "CondAndExpr", 1, $1); } | CondAndExpr LAND EqExpr         { $$ = treemake(CondAndExpr, "CondAndExpr", 2, $1, $3); };

CondOrExpr: CondAndExpr         { $$ = treemake(CondOrExpr, "CondOrExpr", 1, $1); } | CondOrExpr LOR CondAndExpr         { $$ = treemake(CondOrExpr, "CondOrExpr", 2, $1, $3); };

Expr: CondOrExpr         { $$ = treemake(Expr, "Expr", 1, $1); } | Assignment         { $$ = treemake(Expr, "Expr", 1, $1); } | ArrayAssign           {$$=treemake(Expr, "Expr", 1, $1);} ;

ArrayAssign: NEW Type '[' INTLIT ']'            { $$ = treemake(ArrayAssign, "ArrayAssign", 2, $2, $4); }

Assignment: LeftHandSide AssignOp Expr         { $$ = treemake(Assignment, "Assignment", 3, $1, $2, $3); };

LeftHandSide: Name         { $$ = treemake(LeftHandSide, "LeftHandSide", 1, $1); } | FieldAccess         { $$ = treemake(LeftHandSide, "LeftHandSide", 1, $1); };

AssignOp: '='         { $$ = $1; } | INCR         { $$ = $1; } | DECR         { $$ = $1; };

%%
const char *yyname(int sym) {
    return yytname[sym-UNDEF+3];
}