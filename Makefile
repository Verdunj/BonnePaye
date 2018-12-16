CC=gcc
OPTIONS= -Wall `pkg-config --cflags MLV` `pkg-config --libs-only-other --libs-only-L MLV`
MLV= `pkg-config --libs-only-l MLV`

prog : acquisition.o aff_plateau.o menu.o courrier.o plateau.o evenement.o livret_epargne.o pret.o sauvegarde.o tour.o BonnePaye.o rapport.pdf
	$(CC) $(OPTIONS) BonnePaye.o menu.o acquisition.o aff_plateau.o courrier.o plateau.o evenement.o livret_epargne.o pret.o sauvegarde.o tour.o $(MLV) -o BonnePaye

BonnePaye.o :
	$(CC) $(OPTIONS) -c BonnePaye.c	
acquisition.o : acquisition.c acquisition.h
	$(CC) $(OPTIONS) -c acquisition.c

aff_plateau.o : aff_plateau.c aff_plateau.h
	$(CC) $(OPTIONS) -c aff_plateau.c

courrier.o : courrier.c courrier.h
	$(CC) $(OPTIONS) -c courrier.c

menu.o : menu.c menu.h
	$(CC) $(OPTIONS) -c menu.c

plateau.o : plateau.c plateau.h
	$(CC) $(OPTIONS) -c plateau.c

evenement.o : evenement.c evenement.h
	$(CC) $(OPTIONS) -c evenement.c

livret_epargne.o : livret_epargne.c livret_epargne.h
	$(CC) $(OPTIONS) -c livret_epargne.c

pret.o : pret.c pret.h
	$(CC) $(OPTIONS) -c pret.c

sauvegarde.o : sauvegarde.c sauvegarde.h
	$(CC) $(OPTIONS) -c sauvegarde.c

tour.o : tour.c tour.h
	$(CC) $(OPTIONS) -c tour.c

rapport.pdf :rapport.tex
	pdflatex rapport.tex
clean :
	rm -f *.o *.pdf

