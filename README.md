# Compiler-Design

**Build and Run Instructions**

Navigate to the build directory
```
cd build
```
Execute the makefile
```
make -s run INPUT_FILE=../samples/sample1.rc
```
Replace sample1.rc by sample2.rc, sample3.rc etc to run other sample codes

**Directory Structure**
1. src - contains all the compiler source code
2. build 
    - contains the makefile
    - all the files generated during the compilation like y.tab.h, t.tab.c, lex.yy.c and the raccoons.out file are stored here
3. inputs - meant to store the csv files
4. outputs - to store the outputs of each phase
5. samples - contains DSL code files (files with .rc extension)


