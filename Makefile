all: test

test: cson.c   cson.h   test.cpp
	g++ test.cpp cson.c -o test
