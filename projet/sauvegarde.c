#include "joueur.h"
#include <stdio.h>
#include <stdlib.h>


/* Attention, lorsque encrypter est utiliser, il faut vérifier la valeur de retour, pour savoir si la sauvegarde à bien était crée*/

int encrypter(joueur j, joueur listeJ[], int cagnotte, int tour, int nb_tour){
  int i, k;
  char s[MAX];
  FILE * f;
  do
    fprintf(stdout, "Entre le nom du fichier de sauvegarde. (Attention, toute donnée du fichier sera effacée avant la création de la sauvegarde).\n");
  while(fscanf(stdin, "%s", s) != 1);
  if((f = fopen(s, "w")) == NULL){
    fprintf(stderr, "Erreur lors de l'ouverture du fichier\n");
    return 0;
  }
  fprintf(f, "%d %d %d %d %d\n", tour, nb_tour, j.numJ, listeJ[0].numJ, cagnotte);
  for(i = 1; i < listeJ[0].numJ ; i++){
    fprintf(f, "%s %d %d %d %d %d %d %d %d\n", listeJ[i].Joueur, listeJ[i].numJ, listeJ[i].total, listeJ[i].c, listeJ[i].pret, listeJ[i].epargne, listeJ[i].type, listeJ[i].nb_courrier, listeJ[i].nb_acquisition);
    for(k = 0 ; k < listeJ[i].nb_courrier ; k++)
      fprintf(f, "%s %d %d %d\n", listeJ[i].sesCourriers[k].message, listeJ[i].sesCourriers[k].somme, listeJ[i].sesCourriers[k].valeur, listeJ[i].sesCourriers[k].numero);
    for(k = 0 ; k < listeJ[i].nb_acquisition ; k++)
      fprintf(f, "%s %d %d %d %d\n", listeJ[i].sesAcquisitions[k].titre, listeJ[i].sesAcquisitions[k].achat, listeJ[i].sesAcquisitions[k].vente, listeJ[i].sesAcquisitions[k].commission, listeJ[i].sesAcquisitions[k].valeur);
  }
  return 1;
}

/* Ne pas oublier d'ouvrir le ficher avant de l'utiliser !!!! */
int decrypter(FILE *f,joueur j, joueur listeJ[], int cagnotte, int tour, int nb_tour){
  int i, k;
  fscanf(f, "%d %d %d %d %d", &tour, &nb_tour, &j.numJ, &listeJ[0].numJ, &cagnotte);
  for(i = 1; i < listeJ[0].numJ ; i++){
    fscanf(f, "%s %d %d %d %d %d %d %d %d", listeJ[i].Joueur, &listeJ[i].numJ, &listeJ[i].total, &listeJ[i].c, &listeJ[i].pret, &listeJ[i].epargne, &listeJ[i].type, &listeJ[i].nb_courrier, &listeJ[i].nb_acquisition);
    for(k = 0 ; k < listeJ[i].nb_courrier ; k++)
      fscanf(f, "%s %d %d %d", listeJ[i].sesCourriers[k].message, &listeJ[i].sesCourriers[k].somme, &listeJ[i].sesCourriers[k].valeur, &listeJ[i].sesCourriers[k].numero);
    for(k = 0 ; k < listeJ[i].nb_acquisition ; k++)
      fscanf(f, "%s %d %d %d %d", listeJ[i].sesAcquisitions[k].titre, &listeJ[i].sesAcquisitions[k].achat, &listeJ[i].sesAcquisitions[k].vente, &listeJ[i].sesAcquisitions[k].commission, &listeJ[i].sesAcquisitions[k].valeur);
  }
  return 1;
}

