#ifndef _SAUVEGARDE_H_
#define _SAUVEGARDE_H_
#include "joueur.h"

int encrypter(joueur j, joueur listeJ[], int cagnotte, int liste_mois[], int nb_tour, courrier listeC[], acquisition listeA[]); /* écrit sur un fichier, dont le nom est demandé au joueur, les données de la partie */

int decrypter(FILE *f, int *nJ, joueur listeJ[], int *cagnotte, int liste_mois[], int *nb_tour, courrier listeC[], acquisition listeA[]); /*lit sur un ficier, dont le nom est demandé au joueur, les données d'une partie, et les rentre dans les paramètres afin de les récupérer */

#endif
