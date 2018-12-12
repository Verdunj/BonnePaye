CC=gcc
OPTIONS= -Wall

prog : acquisition.o test.o acquisition.h aff_plateau.o aff_plateau.h
	$(CC) $(OPTIONS) acquisition.o aff_plateau.o test.o -o prog
test.o : test.c acquisition.h
	$(CC) $(OPTIONS) -c test.c
acquisition.o : acquisition.c acquisition.h
	$(CC) $(OPTIONS) -c acquisition.c
aff_plateau.o : aff_plateau.c aff_plateau.h
	$(CC) $(OPTIONS) -c aff_plateau.c
