execute_code: ../outputs/yacc_output.py
	python ../outputs/yacc_output.py

myshell: lex.yy.c y.tab.c
	g++ -I../src -o raccoons.out lex.yy.c y.tab.c

lex.yy.c: ../src/readCode.l
	lex ../src/readCode.l

y.tab.c: ../src/rc_parser.y
	yacc -d ../src/rc_parser.y

clean:
	rm -f lex.yy.c y.tab.c y.tab.h raccoons.out
