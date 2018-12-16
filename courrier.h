#ifndef _COURRIER_H_
#define _COURRIER_H_

#include "joueur.h"

/* NE PAS OUBLIER srand(time(NULL))*/

int liste_courrier(courrier liste[]); /*initialise la liste des courriers dans une liste entrée en paramètre */
  
int est_besoin_argent(courrier c); /*détermine si le courrier en paramètre est un courrier besoin d'argent */

int est_carte_assurance(courrier c); /* détermine si le courrier en paramètre est une carte assurance */

int est_carte_medecin(courrier c); /* détermine si le courrier en paramètre est une assurance médecin */

int est_type_medecin(courrier c); /*détermine si le courrier en paramètre est un courrier du type médecin */

int est_type_voiture(courrier c); /*détermine si le courrier en paramètre est un courrier du type voitre */

void afficher_courrier_interface(courrier c); /*première version de fonction pour afficher un courrier avec l'interface MLV */

void afficher_courrier(courrier c); /* fonction pour afficher un courrier dans le terminal */

void case_courrier(courrier liste[], joueur *j); /* exécute la pioche d'un courrier par un joueur j, si ce joueur n'est pas un ordinateur et pioche une carte assurance, on lui propose de l'acheté, si c'est un ordinateur, on lui fait acheter sous certaines conditions ; ajoute en même temps le courrier piocher à la liste des courriers du joueur (seullemtn s'il l'achète dans le cas d'une assurance) ; la pioche est faite aléatoirement dans liste*/

void paye_courrier(joueur *j, courrier liste[]); /* fonction qui s'exécute à la fin d'un mois, et fait payer au joueur les courriers qu'il doit payer tout en les supprimant de la liste de ses courriers */

int a_besoin_argent(joueur j); /* retourne 1 si le joueur possède au moins un besoin d'argent, 0 sinon */


#endif
