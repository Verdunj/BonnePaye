#ifndef _EVENEMENT_H_
#define _EVENEMENT_H_

#include "carte.h"
#include "joueur.h"

/* NE PAS OUBLIER srand(time(NULL))*/

int liste_evenement(evenement liste[]); /* insitialise la liste des évènements dans la liste entrée en paramètre */

void afficher_evenement_interface(evenement e); /* première version d'un affichage des évènements avec MLV */

void afficher_evenement(evenement e); /* affiche un évènement sur le terminal */

void case_evenement(joueur *j, evenement liste[], int *cagnotte); /* fait piocher un évènement à un joueur, et retire ou ajoute la  somme au total du joueur (selon si la carte est une carte garder l'argent ou cotiser pour la cagnotte) */


#endif
