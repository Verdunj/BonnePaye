#ifndef _SAUVEGARDE_C_
#define _SAUVEGARDE_C_
#include "joueur.h"
#include <stdio.h>
#include <stdlib.h>


/* Attention, lorsque encrypter est utiliser, il faut vérifier la valeur de retour, pour savoir si la sauvegarde à bien était crée*/

int encrypter(joueur j, joueur listeJ[], int *cagnotte, int liste_mois[], int nb_tour, courrier listeC[], acquisition listeA[]){
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
  fprintf(f, "%d %d %d %d\n", nb_tour, j.numJ, listeJ[0].numJ,*cagnotte);
  
  for(i = 1; i < listeJ[0].numJ ; i++){
    fprintf(f, "%s %d %d %d %d %d %d %d %d\n", listeJ[i].Joueur, listeJ[i].numJ, listeJ[i].total, listeJ[i].c, listeJ[i].pret, listeJ[i].epargne, listeJ[i].type, listeJ[i].nb_courrier, listeJ[i].nb_acquisition);
    for(k = 0 ; k < listeJ[i].nb_courrier ; k++)
      fprintf(f, "%s %d %d %d\n", listeJ[i].sesCourriers[k].message, listeJ[i].sesCourriers[k].somme, listeJ[i].sesCourriers[k].valeur, listeJ[i].sesCourriers[k].numero);
    for(k = 0 ; k < listeJ[i].nb_acquisition ; k++)
      fprintf(f, "%s %d %d %d %d\n", listeJ[i].sesAcquisitions[k].titre, listeJ[i].sesAcquisitions[k].achat, listeJ[i].sesAcquisitions[k].vente, listeJ[i].sesAcquisitions[k].commission, listeJ[i].sesAcquisitions[k].valeur);
  }
  for(i = 0 ; i < NBCOURRIER ; i++)
    fprintf(f, "%s %d %d %d\n", listeC[i].message, listeC[i].somme, listeC[i].valeur, listeC[i].numero);
  for(i = 0 ; i < NBACQUI ; i++)
    fprintf(f, "%s %d %d %d %d\n", listeA[i].titre, listeA[i].achat, listeA[i].vente, listeA[i].commission, listeA[i].valeur);
  for(i = 1 ; i < listeJ[0].numJ + 1 ; i++)
    fprintf(f, "%d\n", liste_mois[i]);
  return 1;
}

/* Ne pas oublier d'ouvrir le ficher avant de l'utiliser !!!! */
int decrypter(FILE *f, int *nJ, joueur listeJ[], int *cagnotte, int liste_mois[], int *nb_tour, courrier listeC[], acquisition listeA[]){
  int i, k;
  fscanf(f, "%d %d %d %d", nb_tour, nJ, &listeJ[0].numJ, cagnotte);
  for(i = 1; i < listeJ[0].numJ ; i++){
    fscanf(f, "%s %d %d %d %d %d %d %d %d", listeJ[i].Joueur, &listeJ[i].numJ, &listeJ[i].total, &listeJ[i].c, &listeJ[i].pret, &listeJ[i].epargne, &listeJ[i].type, &listeJ[i].nb_courrier, &listeJ[i].nb_acquisition);
    for(k = 0 ; k < listeJ[i].nb_courrier ; k++)
      fscanf(f, "%s %d %d %d", listeJ[i].sesCourriers[k].message, &listeJ[i].sesCourriers[k].somme, &listeJ[i].sesCourriers[k].valeur, &listeJ[i].sesCourriers[k].numero);
    for(k = 0 ; k < listeJ[i].nb_acquisition ; k++)
      fscanf(f, "%s %d %d %d %d", listeJ[i].sesAcquisitions[k].titre, &listeJ[i].sesAcquisitions[k].achat, &listeJ[i].sesAcquisitions[k].vente, &listeJ[i].sesAcquisitions[k].commission, &listeJ[i].sesAcquisitions[k].valeur);
  }
  for(i = 0 ; i < NBCOURRIER ; i++)
    fscanf(f, "%s %d %d %d", listeC[i].message, &listeC[i].somme, &listeC[i].valeur, &listeC[i].numero);
  for(i = 0 ; i < NBACQUI ; i++)
    fscanf(f, "%s %d %d %d %d", listeA[i].titre, &listeA[i].achat, &listeA[i].vente, &listeA[i].commission, &listeA[i].valeur);
  for(i = 1 ; i < listeJ[0].numJ + 1 ; i++)
    fscanf(f, "%d\n", &liste_mois[i]);
  return 1;
}

#endif
