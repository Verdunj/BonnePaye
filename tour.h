#ifndef _TOUR_H_
#define _TOUR_H_

#include "joueur.h"
#include "livret_epargne.h"
#include "plateau.h"
#include "aff_plateau.h"

int lance_des(joueur *j, int *cagnotte); /* réalise un lancer de dés et déplace le joueur j, en lui faisant gagner la cagnotte s'il fait 6 */

void jouer_tour(int nJ, joueur listeJ[], courrier listeC[],acquisition listeA[],evenement listeE[],int *cagnotte, int liste_mois[], int nb_mois); /* réalise un tour de jouer pour une partie (lancer de dés, déplacement, exécution de ce qu'il se passe en fonction de la case, proposition d'épargner, si les conditons sont respéctées, et de retirer de l'argent) ; nJ le joueur qui doit jouer, listeJ la liste des joueurs, listeC la liste des courriers, listeA la liste des acquisitions, listeE la liste des évènements, cagnotte la cagnotte, liste_mois la liste du nombre de mois fait par chaque joueur, nb_mois le nombre de mois maximum */

#endif
