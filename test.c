#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <MLV/MLV_all.h>
#include "acquisition.h"
#include "aff_plateau.h"
#include "carte.h"
#define NBACQUI 23

int main(){
  int i;
  joueur j,j2,j3,j4;
  acquisition acqui[NBACQUI];
  j2.numJ=1;
  j3.numJ=2;
  j4.numJ=3;
  j2.c=25;
  j3.c=25;
  j4.c=25;
  
  j.numJ=0;
  j.c=25;
  j.nbAcquisitions=0;
  MLV_create_window( "beginner - 4 - texts and boxes", "texts and boxes", 1000, 800);
  
  srand(time(NULL));
  initialiser_acquisition(acqui);
  for(i=0;i<NBACQUI;i++){
    printf("%s\t %d \t %d\n",acqui[i].titre,acqui[i].achat,acqui[i].vente);
  }
  afficher_plateau();
  printf("Valeur de la carte : %d   %d\n",j.sesAcquisitions[0].valeur,j.nbAcquisitions);
  case_1a6(j);
  case_1a6(j2);
  case_1a6(j3);
  case_1a6(j4);
  while(1>0);  
  MLV_free_window();
  exit(1);




}
