#ifndef _SAUVEGARDE_H_
#define _SAUVEGARDE_H_
#include "joueur.h"

int encrypter(joueur j, joueur listeJ[], int cagnotte, int liste_mois[], int nb_tour, courrier listeC[], acquisition listeA[]); /* écrit sur un fichier, dont le nom est demandé au joueur, les données de la partie ; j le joueur qui a joué, listeJ la liste des joueurs, cagnotte la cagnotte, liste_mois la liste du nombre de mois fait par chaque joueur, nb_tour le nombre de mois maximum, listeC la liste des courriers, listeA la liste des acquisitions */

int decrypter(FILE *f, int *nJ, joueur listeJ[], int *cagnotte, int liste_mois[], int *nb_tour, courrier listeC[], acquisition listeA[]); /*lit sur un fichier, dont le nom est demandé au joueur, les données d'une partie, et les rentre dans les paramètres afin de les récupérer ; f un fichier de sauvegarde, nJ le numéro du joueur qui doit jouer ensuite, listeJ la liste des joueurs, cagnotte la cagnotte, liste_mois la liste du nombre de mois fait par chaque joueur, nb_tour le nombre de mois maximum, listeC la liste des courriers, listeA la liste des acquisitions*/

#endif
