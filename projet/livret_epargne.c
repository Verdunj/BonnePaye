#ifndef _LIVRET_EPARGNE_C_
#define _LIVRET_EPARGNE_C_

#include <stdio.h>
#include <stdlib.h>
#include "livret_epargne.h"

int interet(int montant){
  if(montant < 100)
    return 0;
  return 50 * (montant / 500 + 1);
}


void livret(joueur *j){
  if(j->epargne != 0){
    fprintf(stdout, "Votre epargne vous rapporte %d ce mois-ci\n", interet(j->epargne));
    j->total += interet(j->epargne);
  }
}
/*pour des joueurs autres que ordi, à demander au début de chaque jour avant le 24*/
void depose_joueur(joueur *j){
  int montant;
  do
    fprintf(stdout, "Combien voulez-vous déposer ?\n");
  while(fscanf(stdin, "%d", &montant) != 1);
  j->total -= montant;
  j->epargne += montant;
}

/*uniquement pour les ordi, et seulement le quand il est sur la case 0*/
void depose_ordi(joueur *j){
  j->epargne += 5/100 * j->total;
  j->total -= 5/100 * j->total;
}

/*cette fonction n'est que pour les joueur autre que ordi, et il faut avant de l'exécuter, préciser que cela coutera 150€ au joueur*/
void retire_argent_j(joueur *j){
  int montant;
  do
    fprintf(stdout, "Combien voulez-vous retirer ?\n");
  while(fscanf(stdin, "%d", &montant) != 0);
  while(montant > j->epargne){
    do
      fprintf(stdout, "Vous n'avez pas cette somme sur votre livret, veuillez redonner un montant.\n");
    while(fscanf(stdin, "%d", &montant) != 0);
  }
  j->total = j->total - 150 + montant;
  j->epargne -= montant;
}

/*s'applique tous les jours de chaque mois, après avoir jouer*/
void retire_argent_o(joueur *j){
  if(j->total < 200 && j->epargne > 400){
    j->total = j->total + 400 - 150;
    j->epargne -= 400;
  }
}

#endif
