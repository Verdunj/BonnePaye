#ifndef _PRET_H_
#define _PRET_H_

#include "joueur.h"

void choisi_pret(joueur *j); /* demande à un joueur j s'il veut faire un prêt et si oui de combien */

void paye_pret(joueur *j); /* fait payer 10% du prêt du joueur j, et propose au joueur de rembourser plus du prêt */

#endif
