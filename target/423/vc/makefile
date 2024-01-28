CC=gcc
CFLAGS=-c -g -Wall
OBJ=vgo.o lex.yy.o go.tab.o yyerror.o tree.o token.o

vgo: $(OBJ)
	$(CC) -o vgo $(OBJ)

vgo.o: vgo.c
	$(CC) $(CFLAGS) vgo.c

lex.yy.o: lex.yy.c
	$(CC) $(CFLAGS) lex.yy.c

lex.yy.c: go.l go.tab.h
	flex go.l

go.tab.o: go.tab.c tree.h
	$(CC) $(CFLAGS) go.tab.c

go.tab.c: go.y
	bison go.y

go.tab.h: go.y
	bison -d go.y

token.o: token.c token.h
	$(CC) $(CFLAGS) token.c

tree.o: tree.c tree.h
	$(CC) $(CFLAGS) tree.c

yyerror.o: yyerror.c
	$(CC) $(CFLAGS) yyerror.c

foo2:
	sed -i 's/the/this/g' foo
