myshell: lex.yy.c y.tab.c
	g++ -o raccoons.out lex.yy.c y.tab.c

lex.yy.c: readCode.l
	lex readCode.l

y.tab.c: rc_parser.y
	yacc -d rc_parser.y

clean:
	rm -f lex.yy.c y.tab.c y.tab.h raccoons.out