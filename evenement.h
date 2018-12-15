#ifndef _EVENEMENT_H_
#define _EVENEMENT_H_

#include "carte.h"
#include "joueur.h"

/* NE PAS OUBLIER srand(time(NULL))*/

int liste_evenement(evenement liste[]);

void afficher_evenement_interface(evenement e);

void afficher_evenement(evenement e);

void case_evenement(joueur *j, evenement liste[], int *cagnotte);


#endif
