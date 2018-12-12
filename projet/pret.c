#ifndef _PRET_C_
#define _PRET_C_

#include <stdio.h>
#include <stdlib.h>
#include "pret.h"

void choisi_pret(joueur *j){
  int nb;
  do
    fprintf(stdout, "Combien de pret voulez vous faire ?\n");
  while(fscanf(stdin, "%d", &nb) != 1);
  j->total += nb * 1500;
  j->pret += nb *1500;
}

void paye_pret(joueur *j){
  int choix = 0, montant;
  j->total -= 10/100 * j->pret;
  if(j->pret != 0)
  do
    fprintf(stdout, "Voulez-vous rembourser une partie de votre prêt ?\n (oui = 1 / non = 2)\n");
  while(fscanf(stdin, "%d", &choix) != 0 && choix != 1 && choix != 2);
  if(choix == 1){
    do
      fprintf(stdout, "Combien ?\n");
    while(fscanf(stdin, "%d", &montant) != 1);
    j->total -= montant;
    j->pret -= montant;
  }
}

#endif
