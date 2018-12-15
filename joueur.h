#ifndef _JOUEUR_H_
#define _JOUEUR_H_

#include "carte.h"


typedef struct{
  char Joueur[MAX];
  int numJ;
  int total;
  int c;
  courrier sesCourriers[NBCOURRIER];
  int nb_courrier;
  acquisition sesAcquisitions[NBACQUI];
  int nb_acquisition;
  int pret;
  int epargne;
  int type;
} joueur;

#endif
