CFLAGS= -c -g -Wall
#OBJ= ironymain.o lex.yy.o cgram.tab.o yyerror.o tree.o type.o symtab.o tac.o
OBJ=ironymain.o lex.yy.o rustgram.tab.o yyerror.o
SRC= ironymain.c yyerror.c tree.c type.c symtab.c tac.c
HDR= tree.h type.h symtab.h tac.h

irony: $(OBJ)
	gcc -o irony $(OBJ)

#puny: $(OBJ)
#	gcc -o puny $(OBJ)

main.o : main.c
	gcc $(CFLAGS) main.c

type.o : type.c type.h symtab.h token.h cgram.tab.h
	gcc $(CFLAGS) type.c

symtab.o : symtab.c symtab.h
	gcc $(CFLAGS) symtab.c

yyerror.o: yyerror.c
	gcc $(CFLAGS) yyerror.c

tree.o: tree.c tree.h
	gcc $(CFLAGS) tree.c

tac.o: tac.c tac.h
	gcc $(CFLAGS) tac.c

lex.yy.o: lex.yy.c tree.h
	gcc $(CFLAGS) lex.yy.c

lex.yy.c : clex.l
	flex clex.l

cgram.tab.o: cgram.tab.c tree.h
	gcc $(CFLAGS) cgram.tab.c

cgram.tab.h cgram.tab.c : cgram.y
	bison -d cgram.y

zip: $(SRC) $(HDR) cgram.y clex.l
	zip labdemo.zip $(SRC) $(HDR) cgram.y clex.l
