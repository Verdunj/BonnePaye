#ifndef _TOUR_C_
#define _TOUR_C_

#include "joueur.h"
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

void tour(int nJ, joueur listeJ[], courrier listeC[], acquisition listeA[], evenement listeE[], int *cagnotte, int *tour, int *nb_tour){
  int i;
  for(i = nJ ; i < listeJ[0].numJ ; i++){
    lance_des(listeJ[i], cagnotte);
    joueur_avance(j, listeJ, listeC, listeE, cagnotte);



    /*ATTENTION POUR LA SAUVEGARDE, LES LISTE DE COURRIERS ET D'ACQUISITION NE PEUVEN TPOUYR L'INSTANT PAS ÊTRE RÉCUPÉRÉES !!!!!!!*/

    /* NE PAS OUBLIER NON PLUS DE MODIFIER DANS PLATEAU.C LA FONCTION POUR LES ACQUISITON ET POUR VENDEZ !!!!!!*/

#endif
