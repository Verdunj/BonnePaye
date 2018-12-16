#ifndef _TOUR_H_
#define _TOUR_H_

#include "joueur.h"
#include "livret_epargne.h"
#include "plateau.h"
#include "aff_plateau.h"

int lance_des(joueur *j, int *cagnotte); /* réalise un lancer de dés et dépalce le joueur */

void jouer_tour(int nJ, joueur listeJ[], courrier listeC[],acquisition listeA[],evenement listeE[],int *cagnotte, int liste_mois[], int nb_mois); /* réalise un tour de jouer pour une partie (lancer de dés, déplacement, exécution de ce qu'il se passe en fonction de la case, proposition d'épargner, si les conditons sont respéctées, et de retirer de l'argent) */

#endif
