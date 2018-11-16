CC=gcc
OPTIONS= -Wall

prog : acquisition.o test.o acquisition.h
	$(CC) $(OPTIONS) acquisition.o test.o -o prog
prog : test.c acquisition.h
	$(CC) $(OPTIONS) -c test.c
prog : acquisition.c acquisition.h
	$(CC) $(OPTIONS) -c acquisition.c
