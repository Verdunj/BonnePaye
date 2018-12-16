#ifndef _MENU_C_
#define _MENU_C_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"



void initialiser(int *nb_tour, int liste_mois[], courrier listeC[], acquisition listeA[], joueur listeJ[], evenement listeE[], int *nJ, int *cagnotte){
  int i, type_partie, choix, nb_ordi = 0;
  char fichier[MAX];
  FILE *f;
  
  /* on cherche à savoir si les joueurs veulent charger une partie déjà existante, on en commencer une nouvelle */
  do
    fprintf(stdout, "Nouvelle partie : 1 / Sauvegarde : 2\n");
  while(fscanf(stdin, "%d", &type_partie) != 1 || (type_partie != 1 && type_partie != 2));
  
  /* s'il choissisent une sauvegarde, on leur demande le chemin de la sauvegarde, puis on la décrypte avec la fonction decrypter */
  if(type_partie == 2){
    do
      fprintf(stdout, "Entrez le chemin du fichier de sauvegarde\n");
    while(fscanf(stdin, "%s", fichier) != 1);
    f = fopen(fichier, "r");
    decrypter(f, nJ, listeJ, cagnotte, liste_mois, nb_tour, listeC, listeA);
  }
  
  /* sinon, on définit les paramètres de la nouvelle partie */
  else{
    
    /* on commence par chercher à connaitre le nombre de joueur (qui ne doit pas dépasser 6 */
    do
      fprintf(stdout, "Entrez le nombre de joueur (au plus 6): ");
    while(fscanf(stdin, "%d", &listeJ[0].numJ) != 1 || listeJ[0].numJ > 6);
    
    /* on propose ensuite, si le nombre de joueurs est strictement inférieur à 6, s'ils veulent ajouter des ordinateurs et si oui combien (toujours en gardant le nombre total de joueurs inférieur ou égal à 6 */
    if (listeJ[0].numJ < 6){
      do
	fprintf(stdout, "Voulez vous rajouter des ordinateurs ? (Oui : 1 / Non : 2)");
      while(fscanf(stdin, "%d", &choix) != 1 || (choix != 1 && choix != 2));
      if(choix == 1){
	do
	  fprintf(stdout, "Combien d'ordinateurs voulez-vous ajouter (maximum %d).", 6 - listeJ[0].numJ);
	while(fscanf(stdin, "%d", &nb_ordi) != 1 || nb_ordi > 6 - listeJ[0].numJ);
      }
      listeJ[0].numJ += nb_ordi; 
    }
    
    /* on demande le nombre de mois qu'ils souhaitent faire */
    do
      fprintf(stdout, "Entrez le nombre de mois :");
    while(fscanf(stdin, "%d", nb_tour) != 1);
    
    /* puis, pour les joueurs autres que ordinateur, on leur demande un pseudo et on définit le type de joueurs qu'ils sont ainsi que les différents paramètre de départ (somme de départ, prêt à 0, epargne à 0 , localisation sur la case 0,... */
    for(i = 1 ; i < listeJ[0].numJ + 1 - nb_ordi ; i++){
      do
	fprintf(stdout, "Joueur %d :", i);
      while(fscanf(stdin, "%s", listeJ[i].Joueur) != 1);
      listeJ[i].type = 1;
      listeJ[i].numJ = i;
      listeJ[i].c = 0;
      listeJ[i].nb_courrier = 0;
      listeJ[i].nb_acquisition = 0;
      listeJ[i].pret = 0;
      listeJ[i].epargne = 0;
      listeJ[i].total = 1500;
    }
    
    /* on fait de même pour les ordinateurs */

    for(i = listeJ[0].numJ + 1 - nb_ordi ; i < listeJ[0].numJ + 1 ; i++){
      sprintf(listeJ[i].Joueur, "ordinateur %d", i - (listeJ[0].numJ - nb_ordi));
      printf("%s\n", listeJ[i].Joueur);
      listeJ[i].type = 0;
      listeJ[i].numJ = i;
      listeJ[i].c = 0;
      listeJ[i].nb_courrier = 0;
      listeJ[i].nb_acquisition = 0;
      listeJ[i].pret = 0;
      listeJ[i].epargne = 0;
      listeJ[i].total = 1500;
    }
    liste_courrier(listeC);
    initialiser_acquisition(listeA);
    liste_evenement(listeE);
  }
 
}



int jouer(){
  int quitter = 0, numT = 0, cagnotte = 0, nb_tour = 0, nJ = 1, i, somme;
  int liste_mois[7];
  courrier listeC[NBCOURRIER];
  acquisition listeA[NBACQUI];
  evenement listeE[NBEVEN];
  joueur listeJ[7];
  MLV_create_window( "La Bonne Paye", "Bonne Paye", 1000, 800);
  initialiser(&nb_tour, liste_mois, listeC, listeA, listeJ,listeE, &nJ, &cagnotte);
  aff_jeu(listeJ);
  for(i = 1 ; i < listeJ[0].numJ + 1 ; i++)
    liste_mois[i] = 0;
  somme = 0;
  while(quitter != 1 && somme < listeJ[0].numJ * nb_tour){
    somme = 0;
    jouer_tour(nJ, listeJ, listeC, listeA, listeE, &cagnotte, liste_mois, nb_tour);
    for(i =  1 ; i < listeJ[0].numJ + 1 ; i++)
    	somme += liste_mois[i];
  }
  return 1;
}
    
/*int main(){
  printf("test");
  jouer;
  exit(0);
}
*/




#endif
