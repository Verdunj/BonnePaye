#ifndef _EVENEMENT_C_
#define _EVENEMENT_C_


#include <stdlib.h>
#include <stdio.h>
#include <MLV/MLV_all.h>
#include <time.h>
#include <string.h>
#include "evenement.h"


/* NE PAS OUBLIER srand(time(NULL))*/

int liste_evenement(evenement liste[]){
  strcpy(liste[0].message, "Gagnez un mini-marathon !\n26 pas du début à la fin\nRecevez 200€");
  liste[0].somme = -200;
  strcpy(liste[1].message, "Vous survivez à une attaque de canard !\nVendez votre histoire à la presse.\nRecevez 100€");
  liste[1].somme = -100;
  strcpy(liste[2].message, "Vous découvrez une ancienne poterie enterrée dnas votre jardin!\nRecevez 500#");
  liste[2].somme = -500;
  strcpy(liste[3].message, "Vous louez votre maison pour le tournage d'un film.\nRecevez 400€");
  liste[3].somme = -400;
  strcpy(liste[4].message, "Donnez un coup de jeune à cette chère Mme Pindeseigle.\nRecevez 100€");
  liste[4].somme = -100;
  strcpy(liste[5].message, "Faites du babysitting.\nRecevez 300€");
  liste[5].somme = -300;
  strcpy(liste[6].message, "Remportez la seconde place du concours de genoux cagneux !\nRecevez 200€");
  liste[6].somme = -200;
  strcpy(liste[7].message, "Travaillez tard pour impressionner votre nouveau patron.\nRecevez 400€");
  liste[7].somme = -400;
  strcpy(liste[8].message, "Construisez une niche de luxe pour Fifi, le caniche du voisin.\nRecevez 600€");
  liste[8].somme = -600;
  strcpy(liste[9].message, "Votre ballon fracasse la serre du voisin !\nCotisez pour la cagnotte 600€");
  liste[9].somme = 600;
  strcpy(liste[10].message, "Il vous faut un maillot de bain sur mesure pour vos vacances !\nCotisez pour la cagnotte 100€");
  liste[10].somme = 100;
  strcpy(liste[11].message, "Installez un stand de limonade.\nCotisez pour la cagnotte 400€");
  liste[11].somme = 400;
  strcpy(liste[12].message, "Convainquez votre professeur de vous écrire une lettre de motivation.\nCotisez pour la cagnotte 100€");
  liste[12].somme = 100;
  strcpy(liste[13].message, "Vous dinez avec le président.\nCotisez pour la cagnotte 400€");
  liste[13].somme = 400;
  strcpy(liste[14].message, "Offrez à votre belle-mère un aller simple pour Tombouctou.\nCotisez pour la cagnotte 500€");
  liste[14].somme = 500;
  strcpy(liste[15].message, "Vous gagnez la compétition du \"plus gros mangeur d'hamburgers\" !\nRecevez 400€");
  liste[15].somme = -400;
  strcpy(liste[16].message, "Vous refaites la surface de votre allée en or !\nCotisez pour la cagnotte 50€");
  liste[16].somme = 50;
  strcpy(liste[17].message, "Grattez et gagnez !\nRecevez 200€");
  liste[17].somme = -200;
  strcpy(liste[18].message, "Créer votre propre site internet !\nCotisez pour la cagnotte 400€");
  liste[18].somme = 400;
  strcpy(liste[19].message, "Louez un parc d'attraction rien que pour vous pour une journée !\nCotisez pour la cagnotte 800€");
  liste[19].somme = 800;
  strcpy(liste[20].message, "Passez un message à votre meilleure amie par la radio.\ncotisez pour la cagnotte 300€");
  liste[20].somme =300;
  strcpy(liste[21].message, "Sautez en parachute !\nCotisez pour la cagnotte 200€");
  liste[21].somme = 200;
  strcpy(liste[22].message, "Vous héritez de Grand-maman !\nRecevez 800€");
  liste[22].somme = -800;
  return 1;
}
  

void afficher_evenement(evenement e){
  fprintf(stdout, "%s\n", e.message);
}

void case_evenement(joueur *j, evenement liste[], int *cagnotte){
  int num;
  num = rand()%NBEVEN;
  afficher_evenement(liste[num]);
  j->total = j->total - liste[num].somme;
  if (liste[num].somme > 0)
    (*cagnotte) += liste[num].somme;
}


int main(){
  joueur j;
  int cagnotte = 50;
  evenement liste[NBEVEN];
  liste_evenement(liste);
  srand(time(NULL));
  j.total = 1000;
  j.type = 1;
  j.numJ = 5;
  case_evenement(&j, liste, &cagnotte);
  printf("%d %d\n", j.total, cagnotte);
  exit(0);
}




#endif

