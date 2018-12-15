#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <MLV/MLV_all.h>
#include "acquisition.h"
#include "aff_plateau.h"
#include "projet/carte.h"
#include "projet/joueur.h"
#include "projet/courrier.h"
#define NBACQUI 23

int main(){
  int i;
  joueur j[5];
  acquisition acqui[NBACQUI];
  j[0].numJ=4;
  j[1].numJ=1;
  j[2].numJ=2;
  j[1].total = 50000;
  j[1].epargne=1500;
  j[1].pret=3000;
  j[3].numJ=3;
  j[4].numJ=4;
  j[1].c=25;

  MLV_create_window( "beginner - 4 - texts and boxes", "texts and boxes", 1000, 800);
  
  srand(time(NULL));
  initialiser_acquisition(acqui);
  for(i=0;i<NBACQUI;i++){
    printf("%s\t %d \t %d\n",acqui[i].titre,acqui[i].achat,acqui[i].vente);
  }
  aff_jeu(j);
  printf("test");
  /* afficher_plateau();
  j[1].c=25;
  case_1a6(j[1]);
  stat_j(j);*/
  while(1>0);
  MLV_free_window();
  exit(1);




}
