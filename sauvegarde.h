#ifndef _SAUVEGARDE_H_
#define _SAUVEGARDE_H_
#include "joueur.h"

int encrypter(joueur j, joueur listeJ[], int cagnotte, int liste_mois, int nb_tour, courrier listeC[], acquisition listeA[]);

int decrypter(FILE *f, int *nJ, joueur listeJ[], int *cagnotte, int liste_mois, int *nb_tour, courrier listeC[], acquisition listeA[]);

#endif
