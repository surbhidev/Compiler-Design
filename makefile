myshell: lex.yy.c y.tab.c
	gcc lex.yy.c y.tab.c typechecker.c -o raccoon

lex.yy.c: readCode.l
	lex readCode.l

y.tab.c: rc_parser.y
	yacc -d rc_parser.y

clean:
	rm -f lex.yy.c y.tab.c y.tab.h raccoon 