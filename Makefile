CC=gcc
OPTIONS= -Wall `pkg-config --cflags MLV` `pkg-config --libs-only-other --libs-only-L MLV`
MLV= `pkg-config --libs-only-l MLV`

prog : acquisition.o aff_plateau.o menu.o courrier.o plateau.o evenement.o livret_epargne.o pret.o sauvegarde.o tour.o
	$(CC) $(OPTIONS) menu.o acquisition.o aff_plateau.o courrier.o plateau.o evenement.o livret_epargne.o pret.o sauvegarde.o tour.o $(MLV) -o prog

test.o : test.c acquisition.h
	$(CC) $(OPTIONS) -c test.c

acquisition.o : acquisition.c acquisition.h
	$(CC) $(OPTIONS) -c acquisition.c

aff_plateau.o : aff_plateau.c aff_plateau.h
	$(CC) $(OPTIONS) -c aff_plateau.c

courrier.o : projet/courrier.c projet/courrier.h
	$(CC) $(OPTIONS) -c projet/courrier.c

menu.o : menu.c menu.h
	$(CC) $(OPTIONS) -c menu.c

plateau.o : projet/plateau.c projet/plateau.h
	$(CC) $(OPTIONS) -c projet/plateau.c

evenement.o : projet/evenement.c projet/evenement.h
	$(CC) $(OPTIONS) -c projet/evenement.c

livret_epargne.o : projet/livret_epargne.c projet/livret_epargne.h
	$(CC) $(OPTIONS) -c projet/livret_epargne.c

pret.o : projet/pret.c projet/pret.h
	$(CC) $(OPTIONS) -c projet/pret.c

sauvegarde.o : projet/sauvegarde.c projet/sauvegarde.h
	$(CC) $(OPTIONS) -c projet/sauvegarde.c

tour.o : projet/tour.c projet/tour.h
	$(CC) $(OPTIONS) -c projet/tour.c


