#ifndef _JOUEUR_H_
#define _JOUEUR_H_

#include "carte.h"


typedef struct{
  char Joueur[MAX]; /* le nom du joueur */
  int numJ; /* le uméro du joueur */
  int total; /* le total de l'argent du joueur */
  int c; /* le numéro de la case sur laquelle se trouve le joueur */
  courrier sesCourriers[NBCOURRIER]; /* la liste des courriers que possède le joueur */
  int nb_courrier; /* le nombre de courriers que possède le courrier */
  acquisition sesAcquisitions[NBACQUI]; /* la liste des acquisitions que possède le joueur */
  int nb_acquisition; /* le nombre d'acquisition que possède le joueur */
  int pret; /* le montant du ou des prêt(s) du joueur */
  int epargne; /* le montant de l'épargne du joueur */
  int type; /* = 0 si c'est un ordinateur, = 1 sinon */
} joueur;

#endif
