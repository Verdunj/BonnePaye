#ifndef _MENU_H_
#define _MENU_H_
#include "joueur.h"
#include "sauvegarde.h"
#include "courrier.h"
#include "acquisition.h"
#include <MLV/MLV_all.h>
#include "aff_plateau.h"
#include "tour.h"


void intialiser(int *nb_tour, int liste_mois, courrier listeC[], acquisition listeA[], joueur listeJ[],evenement listeE[], int *nJ,int *cagnotte); /* initialise la partie avec choix de prendre une sauvegarde ou une nouvelle partie, et si c'est une nouvelle partie qui est choisit, demande du nombre de tours, de joueurs, etc. Cette fontion prend en paramètre, le nombre de tour, le numéro du tour en court, la liste des courrier, la liste des acquisitions, la liste des joueurs et ne numéro du joueur qui doit jouer (chacun de ses paramètre pour les modifier et les initialiser) ; nb_tour est le nomrbre de mois, liste_mois et la liste du nombre de mois fait par chaque joueur, listeC la liste des courries, listA la liste des acquisitions, listeJ la liste des joueurs, listeE la liste des évènements, nJ le ,numéro du joueur à qui c'est le tour de jouer, cagnotte la cagnotte*/


int jouer(); /* le jeu */

#endif
