lab4: lex.yy.o punygram.tab.o main.o
	gcc -g -Wall lex.yy.o punygram.tab.o main.o -o lab4

punygram.tab.o: punygram.tab.c
	gcc -c -Wall punygram.tab.c

punygram.tab.c: punygram.y tree.h
	bison punygram.y

lex.yy.o: lex.yy.c tree.h
	gcc -c -Wall lex.yy.c

# ...

