#ifndef _COURRIER_C_
#define _COURRIER_C_

#include <stdlib.h>
#include <stdio.h>
#include <MLV/MLV_all.h>
#include <time.h>
#include <string.h>
#include "courrier.h"
#include "carte.h"


/* NE PAS OUBLIER srand(time(NULL))*/

/*liste doit absolument être de taille NBCOURRIER*/
int liste_courrier(courrier liste[]){
  int i;
  for(i = 0; i < NBCOURRIER;i++){
    liste[i].valeur = 0;
    liste[i].valeur = 1;
  }
  strcpy(liste[0].message, "Vacances pour presque rien\nPayez 100€");
  liste[0].somme = 100;
  strcpy(liste[1].message, "Vacances à la neige\nPayez 250€");
  liste[1].somme = 250;
  strcpy(liste[2].message, "Facture Cours de langage des signes.\nTrès pratique !\nPayez 100€");
  liste[2].somme = 100;
  strcpy(liste[3].message, "Facture Bla bla bla Télécomunications\nTarifs préférentiels pour les supers bavard(e)s\nPayez 150€");
  liste[3].somme = 150;
  strcpy(liste[4].message, "Monsieur le Proviseur,\nJe sui le Papa de Toto. Je vous écri pour vous dire que comme j'ai la rougeole je ne pourré pas acisté ô cours cette semène.\nSigné :\n     Le Papa de Toto");
  liste[4].somme = 0;
  strcpy(liste[5].message, "      PUB     \n  Assur'Enfant  \nEn souscrivant, vous êtes définitivement protégé contre les privations de desserts et de télé, les punitions et les mauvaises notes.");
  liste[5].somme = 0;
  strcpy(liste[6].message, "Facture Poissonier\nOuvert uniquement pour le poisson d'avril\nPayez 100€");
  liste[6].somme = 100;
  strcpy(liste[7].message, "Coup de chance !\nGros gain de Loto\nRecevez 450€");
  liste[7].somme = -450;
  strcpy(liste[8].message, "Ma chère belle-mère,\nC'est avec plaisir que je serais venu vous chercher à la gare, mais la voiture est en révision au garage. La gare est à cinq kilomètres de la maison, mais vous verez, c'est en descente.\nVotre dévoué,\nHubert");
  liste[8].somme = 0;
  strcpy(liste[9].message, "     PUB     \nJuste Unecorde\nDevenez un virtuose du violon!");
  liste[9].somme = 0;
  strcpy(liste[10].message, "     PUB     \n Achetez les Raquettes Petifuté.\nElles permettent de jouer au tennis l'été et de marcher dans la neige l'hiver.");
  liste[10].somme = 0;
  strcpy(liste[11].message, "Chère Maman,\nLa colo est super mais je n'ai plus d'argent pour t'acheter un cadeau. Peux-tu m'en envoyer s'il te plait. Et n'oublie pas quand on aime on ne compte pas.\nDamien qui t'aime beaucoup, beaucoup\n...");
  liste[11].somme = 0;
  strcpy(liste[12].message, "Madame Irma,\nVous m'aviez prédit un grand voyage et beaucoup de réussite. Or je suis toujours gardien de phare. Etes-vous vraiment sûre de pouvoir lire l'avenir dans uen boule de pétanque ?\nRené Laborde");
  liste[12].somme = 0;
  strcpy(liste[13].message, "     PUB     \nVaisselle EnCarton\nGarrantie incassable, idéale pour s'entraîner au frisbee.");
  liste[13].somme = 0;
  strcpy(liste[14].message, "Vacances au soleil\nPayez 400€");
  liste[14].somme = 400;
  strcpy(liste[15].message, "Facture Jean Frémy, Doreur\nRend vos affaires reluisantes et vos idées brillantes.\nPayez 50€");
  liste[15].somme = 50;
  strcpy(liste[16].message, "Facture Chez Coup de Ciseaux\nTailleur sur mesure.Il vous va comme un gant !\nPayez 100€");
  liste[16].somme = 100;
  strcpy(liste[17].message, "Vacances en camping\nPayez 150€");
  liste[17].somme = 150;
  strcpy(liste[18].message, "Cher cousin François,\nMerci pour ton cadeau de Noël. Tu m'avais dit que ce serait des huîtres avec des algues. A la place j'ai reçu uen salade délicieuse avec de gros cailloux. Dis à quoi ça ressemble uen huître ?\nCousin Geoffrey");
  liste[18].somme = 0;
  strcpy(liste[19].message, "Cours particuliers\n École de Karaté de Maître King Fu. Devenez ceinture noire en deux temps trois manchettes !\nFrais d'inscription 300€");
  liste[19].somme = 300;
  strcpy(liste[20].message, "Cours particuliers\nDécoration pâtissière.\nN'oubliez pas votre tablier, on en a jusqu'aux coudes!\nFrais d'inscription 250€");
  liste[20].somme = 250;
  strcpy(liste[21].message, "Coup de chance !\nUn investissement arrive à maturité\nRecevez 100€");
  liste[21].somme = -100;
  strcpy(liste[22].message, "Facture Coiffeur (et Jardinier)\n Pour tous types de coupes en semaine et le week end !\nPayez 50€");
  liste[22].somme = 50;
  strcpy(liste[23].message, "Facture société des étincelles électriques\nAh le choc!\nPayez 50€");
  liste[23].somme = 50;
  strcpy(liste[24].message, "Facture à la Bonne Bouche\nSandwishs et salades pour vos petites faims !\nPayez 50€");
  liste[24].somme = 50;
  strcpy(liste[25].message, "Cours particuliers\nLa salsa dans tous ses états !\nTrouvez un partenaire et c'est parti !\nFrais d'inscription 150€");
  liste[25].somme = 150;
  strcpy(liste[26].message, "Coup de chance !\nUn ami vous rembourse un emprunt\nRecevez 50€");
  liste[26].somme = -50;
  strcpy(liste[27].message, "Dr. Sarah COURCI\nPayez 300€");
  liste[27].somme = 300;
  strcpy(liste[28].message, "Dr. Hector TICOLI\n Payez 100€");
  liste[28].somme = 100;
  strcpy(liste[29].message, "Dr. Sophie STIQUEY\nPayez 450€");
  liste[29].somme = 450;
  strcpy(liste[30].message, "Dr. Guy LIGUILI\nPayez 300€");
  liste[30].somme = 300;
  strcpy(liste[31].message, "Dr. Barbe ITURIQUE\nPayez 50€");
  liste[31].somme = 50;
  strcpy(liste[32].message, "Dr. Sévère MÉJUSTE\nPayez 50€");
  liste[32].somme = 50;
  strcpy(liste[33].message, "Dr. Joe SKULTE\nPayez 250€");
  liste[33].somme = 250;
  strcpy(liste[34].message, "Au pare-chocs de choc\nInstallation d'un siège éjectable pour passager casse-pieds !\nSomme à régler 100€");
  liste[34].somme = 100;
  strcpy(liste[35].message, "Garage de la Belle Bielle\nInstallation de fusées pour une meilleure reprise !\nSomme à régler 450€");
  liste[35].somme = 450;
  strcpy(liste[36].message, "Chez Hippo d'Échappement\nLunette spéciales pour voiture qui ont les phares qui louchent.\nSomme à régler 300€");
  liste[36].somme = 300;
  strcpy(liste[37].message, "Garage de la Roue Libre\nEssuie-glace anti-contravention. Bougent et coupent dès qu'un policier s'en approche.\nSomme à régler 150€");
  liste[37].somme = 150;
  strcpy(liste[38].message, "Chez D.Glingé\nInstallation de nouveaux pare-chocs... Dernier modèle, entièrement en chewing-gum !\nSomme à régler 250€");
  liste[38].somme = 250;
  strcpy( liste[39].message, "Facture La Voiture Écolo\nSans moteur, enfin une voiture qui ne pollue pas ! Fonctionne seulement dans les descentes et par vent arrière.\nPayez 450€");
  liste[39].somme = 450;
  strcpy( liste[40].message, "O.Marteau\nRemplacement des pneus lisses en pneus cloutés !\nSomme à régler 300€");
  liste[40].somme = 300;
  for(i = 41 ; i < 44 ; i++){
    strcpy(liste[i].message, "Assur'Auto\nCette carte annule toutes vos factures de garagiste.\nPayez 600€");
    liste[i].somme = 600;
  }
  for(i = 44 ; i < 47 ; i++){
    strcpy(liste[i].message, "Médic'Assur\nCette carte annule tous vos honoraire de médecin.\nPayez 450€");
    liste[i].somme = 450;
  }
  for(i = 47 ; i < NBCOURRIER ; i++){
    strcpy(liste[i].message, "Besoin d'argent ?\nParriez une somme inférieur à 300€ et lancez le dés. Si vous obtenez un 5 ou un 6, touchez 10 fois votre mise auprès de la banque. Si vous obtenez n'importe qu'elle autre chiffre, versez votre mise à la Cagnotte de la Bonne Paye. Cette carte peut être utilisée à n'importe quel moment.");
    liste[i].somme = 0;
  }
  for(i = 0 ; i < NBCOURRIER ; i++){
    liste[i].valeur = 0;
    liste[i].numero = i;
  }
  return 1;
}
  

  
  
int est_besoin_argent(courrier c){
  if(c.numero > 46)
    return 1;
  return 0;
} 


int est_carte_assurance(courrier c){
   if(c.numero > 40 && c.numero < 47)
    return 1;
  return 0;
}

int est_carte_medecin(courrier c){
   if(c.numero > 43 && c.numero < 47)
    return 1;
  return 0;
}

int est_type_medecin(courrier c){
  if(c.numero > 26 && c.numero < 34)
    return 1;
  return 0;
}

int est_type_voiture(courrier c){
   if(c.numero > 33 && c.numero < 41)
    return 1;
  return 0;
}

void afficher_courrier(courrier c){
  fprintf(stdout, "%s\n", c.message);
}

void case_courrier(courrier liste[], joueur *j){
  int num, choix;
  do
    num = rand()%NBCOURRIER;
  while(liste[num].valeur != 0);
  afficher_courrier(liste[num]);
  if(est_carte_assurance(liste[num]) == 1){
    if (j->type == 1){
      do
      fprintf(stdout, "Voulez-vous acheter cette carte assurance ?\nSi oui tapez 1, sinon tapez 2\n");
      while(fscanf(stdin, "%d", &choix) != 1 && choix != 1 && choix != 2);
      if(choix == 1){
	j->total = j->total - liste[num].somme;
	liste[num].valeur = j->numJ;
	j->nb_courrier++;
	j->sesCourriers[j->nb_courrier] = liste[num];
      }
    }
    else{
      if((j->total - liste[num].somme >= 300 + 10 / 100 * j->pret)  && j->pret > 0){
	j->total = j->total - liste[num].somme;
	liste[num].valeur = j->numJ;
	j->nb_courrier++;
	j->sesCourriers[j->nb_courrier] = liste[num];
      }
    }
  }
  else{
    liste[num].valeur = j->numJ;
    j->nb_courrier++;
    j->sesCourriers[j->nb_courrier] = liste[num];
  }
}


void paye_courrier(joueur *j, courrier  liste[]){
  int i, medecin = 0, voiture = 0, nb_assurances = 0;
  courrier tmp;
  for(i = 1 ; i < j->nb_courrier + 1 ; i++){
    if (est_carte_assurance(j->sesCourriers[i]) == 1){
      if(est_carte_medecin(j->sesCourriers[i]) == 1){
	medecin = i;
	tmp = j->sesCourriers[1];
	j->sesCourriers[1] = j->sesCourriers[i];
	j->sesCourriers[i] = tmp;
	nb_assurances++;
      }
      else{
	voiture = i;
	tmp = j->sesCourriers[1];
	j->sesCourriers[1] = j->sesCourriers[i];
	j->sesCourriers[i] = tmp;
	nb_assurances++;
      }
    }
  }
  if(medecin == 0 && voiture == 0){
    for(i = 1 ; i < j->nb_courrier + 1 ; i++){
      j->total = j->total - j->sesCourriers[i].somme;
      liste[j->sesCourriers[i].numero].valeur = 0;
    }
    j->nb_courrier = 0;
  }
  else{
    if (medecin != 0){
      if (voiture != 0){
	for(i = 1 ; i < j->nb_courrier + 1 ; i++){
	  if(est_type_medecin(j->sesCourriers[i]) == 0 && est_type_voiture(j->sesCourriers[i]) == 0 && est_carte_assurance(j->sesCourriers[i]) == 0)
	    j->total = j->total - j->sesCourriers[i].somme;
	  liste[j->sesCourriers[i].numero].valeur = 0;
	}
      }
      else{
	for(i = 1 ; i < j->nb_courrier + 1 ; i++){
	  if(est_type_medecin(j->sesCourriers[i]) == 0 && est_carte_assurance(j->sesCourriers[i]) == 0)
	    j->total = j->total - j->sesCourriers[i].somme;
	  liste[j->sesCourriers[i].numero].valeur = 0;
	}
      }
    }
    else{
     for(i = 1 ; i < j->nb_courrier + 1 ; i++){
       if(est_type_voiture(j->sesCourriers[i]) == 0 && est_carte_assurance(j->sesCourriers[i]) == 0)
	 j->total = j->total - j->sesCourriers[i].somme;
       liste[j->sesCourriers[i].numero].valeur = 0;
     }  
    }
    j->nb_courrier = nb_assurances;
  }
}




/*int main(){
  joueur j;
  int i;
  courrier liste[NBCOURRIER];
  liste_courrier(liste);
  srand(time(NULL));
  j.total = 1000;
  j.type = 1;
  j.numJ = 5;
  case_courrier(liste, &j);
  case_courrier(liste, &j);
  case_courrier(liste, &j);
  paye_courrier(&j, liste);
  printf("%d\n", j.total);
  exit(0);
}



*/












#endif


