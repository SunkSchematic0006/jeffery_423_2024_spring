puny : main.o lex.yy.o
	gcc -o puny main.o lex.yy.o

main.o: main.c tokens.h
	gcc -c -Wall main.c

lex.yy.o: lex.yy.c
	gcc -c -Wall lex.yy.c

lex.yy.c: punylex.l
	flex punylex.l
