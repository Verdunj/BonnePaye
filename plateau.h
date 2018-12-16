#ifndef _PLATEAU_H_
#define _PLATEAU_H_

#include "courrier.h"
#include "evenement.h"
#include "pret.h"
#include "livret_epargne.h"
#include "acquisition.h"

int est_case_courrier(int n); /* = 0 si la case n'est pas une case courrier,  = m si c'est une case courrier, avec m le nombre de courriers à piocher ; n le numéro de la case */

int tombe_case_courrier(int n, joueur *j, courrier liste[]); /* fonction qui exécute la pioche du nombre de courriers nécessaire et effectue case_courrier de courrier.h ; n le nombre de courriers à piocher, j le joueur qui joue, liste la liste des courriers */

int est_case_payer_banque(int n); /* = 0 si la case n'est pas une case ou il faut payer à la banque, = m sinon, avec m le montant à payer ; n le numéro de la case */

int est_case_acquisiton(int n); /* = 0 si la case n'est pas une case acquisition, = 1 sinon ; n le numéro de la case */

int est_case_evenement(int n); /* = 0 si la case n'est pas une case évènement, = 1 sinon ; n le numéro de la case */

int est_case_concours(int n); /* = 0 si la case n'est pas une case concours, = 1 sinon ; n le numéro de la case */

int est_course_velo(int n); /* = 0 si la case n'est pas la case course de vélos, = 1 sinon ; n le numéro de la case */

int est_case_travaux(int n); /* = 0 si la case n'est pas la case travaux, = 1 sinon ; n le numéro de la case */

int est_case_anniversaire(int n); /* = 0 si la case n'est pas la case anniversaire, = 1 sinon ; n le numéro de la case */

int est_case_retour_en_arriere(int n); /* = 0 si la case n'est pas la case retour en arrière, = 1 sinon ; n le numéro de la case */

int case_loterie(joueur *j, joueur  liste[]); /* demande aux joueur s'il veut participer, leur fait choisir un numéro et lance le dés avant de donner la somme gagnée au joueur ; j le jouer qui a joué, liste la liste des joueurs */

int case_fin(joueur *j, courrier liste[], int liste_mois[]); /* fait payer au joueur ce qu'il doivent, et leur verse ce qu'il doivent toucher ; j le joueur qui a joué, liste la liste des courriers, liste_mois, la liste du nombre de mois déjà fait par chaque joueur*/

int est_case_vendez(int n); /* = 0 si la case n'est pas une case vendez, = 1 sinon ; n le numéro de la case */

int est_case_loterie(int n); /* = 0 si la case n'est pas la case loterie, = 1 sinon ; n le numéro de la case*/

int est_case_fin(int n); /* = 0 si la case n'est pas la case jour de paye, = 1 sinon ; n le numéro de la case */

int joueur_avance(joueur *j, joueur listeJ[], courrier listeC[], acquisition listeA[], evenement listeE[], int *cagnotte, int liste_mois[]); /* identifie la case sur laquelle se trouve le joueur et ralise ce qu'il doit se passer ; j le joueur qui a lancé le dés, listeJ la liste des joueurs, listeC la liste des courriers, listeA la liste des acquisitions, listeE la liste des évènements, cagnotte la cagnotte, liste_mois la liste du nombre de mois fait par chaque joueurs */



#endif
