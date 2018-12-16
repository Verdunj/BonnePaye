#ifndef _TOUR_C_
#define _TOUR_C_

#include "tour.h"
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

void jouer_tour(int nJ, joueur listeJ[], courrier listeC[], acquisition listeA[], evenement listeE[], int *cagnotte, int liste_mois[], int nb_mois){
  int i, choix;
  for(i = nJ ; i <= listeJ[0].numJ ; i++){
    tour_joueur(listeJ[i],listeJ,cagnotte,liste_mois,nb_mois,listeC,listeA);
    if(liste_mois[listeJ[i].numJ] < nb_mois){
      if(listeJ[i].type == 1){
        do
	  fprintf(stdout, "Voulez-vous returer de l'argent (attention cela coûtera 150€). (Oui : 1 / Non : 2)\n");
        while(fscanf(stdin, "%d", &choix) != 1 || (choix != 1 && choix != 2));
        if(choix == 1)
	  retire_argent_j(&listeJ[i]);
        if(listeJ[i].c <= 23)
	  depose_joueur(&listeJ[i]);
	printf("on lance le dé du joueur %s\n",listeJ[i].Joueur);
	lancer_de_aff();
	lance_des(&listeJ[i], cagnotte);
	joueur_avance(&listeJ[i], listeJ, listeC, listeA, listeE, cagnotte, liste_mois);
      }
      else{
	if(listeJ[i].c == 0)
	  depose_ordi(&listeJ[i]);
	printf("on lance le dé du joueur %d\n",listeJ[i].numJ);
	lance_des(&listeJ[i], cagnotte);
	joueur_avance(&listeJ[i], listeJ, listeC, listeA, listeE, cagnotte, liste_mois);
	retire_argent_o(&listeJ[i]);
      }
      aff_jeu(listeJ);
    }
  }
}




    /* NE PAS OUBLIER NON PLUS DE MODIFIER DANS PLATEAU.C LA FONCTION POUR LES ACQUISITON ET POUR VENDEZ !!!!!!*/

#endif
