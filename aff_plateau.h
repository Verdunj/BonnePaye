#ifndef _AFF_PLATEAU_H_
#define _AFF_PLATEAU_H_

#include "courrier.h"
#include "carte.h"
#include "joueur.h"
#include "sauvegarde.h"








void afficher_plateau();

/* Affiche le plateau */

void case_1a6(joueur j);

/* Vérifie si le joueur est sur la case 1 à 6 sinon appel case7a11 */

void case_7a11(joueur j);

/* Vérifie si le joueur est sur la case 7 a 11 sinon appel la fonction 12a16 */

void case_12a16(joueur j);

/*  Même procéder que pour la fonction 7a11 */

void case_17a20(joueur j);

/*  Même procéder que pour la fonction 7a11 */

void case_21a24(joueur j);

/*  Même procéder que pour la fonction 7a11 */

void case_25a27(joueur j);

/*  Même procéder que pour la fonction 7a11 */

void case_28a30(joueur j);

/*  Même procéder que pour la fonction 7a11 */

void case_31a32(joueur j);

/*  Même procéder que pour la fonction 7a11 */

void stat_j(joueur *j);

/* Il affiche différente stat concernant les joueurs, leur total, leur emprunt et leur épargne */

void aff_jeu(joueur *j);

/* appel la fonction case_1a6 pour chaque joueur appel la fonction stat_j appel la fonction afficher_plateau */

void tour_joueur(joueur j,joueur *tabJ,int *cagnotte,int *liste_mois,int nb_tour, courrier *listeC,acquisition *listeA);

/* Afficher le joueur qui va jouer son tour ainsi qu'un bouton et PAUSE et un bouton permettant au joueur de lancer son tour */

void lancer_de_aff();

/* Affichage du bouton demandant au joueur de lancer son dé */

void pause(joueur j,joueur *tabJ,int *cagnotte,int *liste_mois,int nb_tour, courrier *listeC,acquisition *listeA);

/* Possède deux boutons sauvegarde pour appeler la fonction encrypter permetter de sauvegarder la partie et un bouton continuer permettant de reprendre la partie ou on en était arrêté */

#endif
