YACC=yacc
LEX=flex

all: tryit

.c.o:
	cc -c $<

tryit: CxxGrammar.o CxxLexer.o
	cc -o tryit CxxGrammar.o CxxLexer.o

CxxGrammar.c CxxGrammar.h: CxxGrammar.y
	$(YACC) -dt CxxGrammar.y
	mv -f y.tab.c CxxGrammar.c
	mv -f y.tab.h CxxGrammar.h

CxxLexer.c: CxxLexer.l
	$(LEX) -t CxxLexer.l >CxxLexer.c

CxxLexer.o: CxxGrammar.h

clean:
	rm -f tryit *.o
	rm -f CxxLexer.c CxxGrammar.c CxxGrammar.h
