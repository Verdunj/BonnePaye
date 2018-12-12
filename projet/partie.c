#include <stdio.h>
#include <stdlib.h>
#include "plateau.h"
#include "joueur.h"


int menu(){
  int type, nbTour;
  char fichier[MAX];
  FILE *f;
  joueur listeJ[7];
  do
    fprintf(stdout, "Nouvelle partie : 1 / Sauvegarde : 2\n");
  while(fscanf(stdin, "%d", &type) != 1 && type != 1 && typae != 2);
  if(type == 2){
    do
      fprintf(stdout, "Entrez le chemin du fichier de sauvegarde\n");
    while(fscanf(stdin, "%s", fichier) != 1);
    f = fopen(fichier, "r");
    decrypter_sauvegarde(f);
    /*...*/
  }
  else{
    
