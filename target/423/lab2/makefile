punny: main.o lex.yy.o token.o
	gcc -o punny main.o lex.yy.o token.o

main.o: main.c token.h
	gcc -c -Wall main.c

lex.yy.o: lex.yy.c token.h
	gcc -c -Wall lex.yy.c

lex.yy.c: dummylex.l
	flex dummylex.l

token.o: token.c token.h
	gcc -c -Wall token.c

test:
	./punny test1.py
	./punny test2.py 
	./punny test3.py 
