#ifndef _LIVRETEPARGNE_C_
#define _LIVRETEPARGNE_C_

#include "joueur.h"

int interer(int montant); /* détermine les intérêts en fonction du montant entré en paramètre */

void livret(joueur *j); /* donne au joueur en paramètre les intérêts perçus */

void depose_joueur(joueur *j); /* propose au jouer j (pour les joueurs autres que ordinateurs) de déposer de l'argent sur son épargne */

void depose_ordi(joueur *j); /* s'exécute pour les ordinateurs et dépose 5% du total du joueur j */

void retire_argent_j(joueur *j); /* propose à un joueur j, autre que ordinateur, de retirer de l'argent */

void retire_argent_o(joueur * j); /* pour les ordinateurs, retire 400€ du livret d'épargne, seulement si le joueur j à moins de 200€ et plus de 400€ sur son livret d'épargne */



#endif
