INPUT_FILE = ../samples/samp.rc  # default input file

run: execute_code2
	python3 yacc_output.py

execute_code2: myshell
	./raccoons.out $(INPUT_FILE)

myshell: lex.yy.c y.tab.c
	g++ -I../src -o raccoons.out lex.yy.c y.tab.c

lex.yy.c: ../src/readCode.l
	lex ../src/readCode.l

y.tab.c: ../src/rc_parser.y
	yacc -d ../src/rc_parser.y

clean:
	rm -f lex.yy.c y.tab.c y.tab.h raccoons.out yacc_output.py
