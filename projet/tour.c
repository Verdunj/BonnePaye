#ifndef _TOUR_C_
#define _TOUR_C_

#include "joueur.h"
#include "livret_epargne.h"
#include "plateau.h"
#include <stdio.h>
#include <stdlib.h>

int lance_des(joueur *j, int *cagnotte){
  int i;
  i = rand()%6 + 1;
  if (i == 6){
    j->total += (*cagnotte);
    (*cagnotte) = 0;
  }
  if (j->c + i > 31)
    j->c = 31;
  else
    j->c += i;
  return j->c;
}

void jouer_tour(int nJ, joueur listeJ[], courrier listeC[], acquisition listeA[], evenement listeE[], int *cagnotte){
  int i, choix;
  for(i = nJ ; i < listeJ[0].numJ ; i++){
    if(listeJ[i].type == 1){
      do
	fprintf(stdout, "Voulez-vous returer de l'argent (attention cela coûtera 150€). (Oui : 1 / Non : 2)\n");
      while(fscanf(stdin, "%d", &choix) != 1 || (choix != 1 && choix != 2));
      if(choix == 1)
	retire_argent_j(&listeJ[i]);
      if(listeJ[i].c <= 23)
	depose_joueur(&listeJ[i]);
    }
    else{
      retire_argent_o(&listeJ[i]);
      if(listeJ[i].c == 0)
	depose_ordi(&listeJ[i]);
    }
    lance_des(&listeJ[i], cagnotte);
    joueur_avance(&listeJ[i], listeJ, listeC, listeA, listeE, cagnotte);
  }
}




    /* NE PAS OUBLIER NON PLUS DE MODIFIER DANS PLATEAU.C LA FONCTION POUR LES ACQUISITON ET POUR VENDEZ !!!!!!*/

#endif