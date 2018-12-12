#ifndef _COURRIER_H_
#define _COURRIER_H_

#include "joueur.h"

/* NE PAS OUBLIER srand(time(NULL))*/

int liste_courrier(courrier liste[]);
  
int est_besoin_argent(courrier c); 

int est_carte_assurance(courrier c);

int est_carte_medecin(courrier c);

int est_type_medecin(courrier c);

int est_type_voiture(courrier c);

void afficher_courrier_interface(courrier c);

void afficher_courrier(courrier c);

void case_courrier(courrier liste[], joueur *j);

void paye_courrier(joueur *j, courrier liste[]);


#endif
