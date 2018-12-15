#ifndef _TOUR_H_
#define _TOUR_H_

#include "joueur.h"
#include "livret_epargne.h"
#include "plateau.h"

int lance_des(joueur *j, int *cagnotte);

void jouer_tour(int nJ, joueur listeJ[], courrier listeC[],acquisition listeA[],evenement listeE[],int *cagnotte);

#endif
