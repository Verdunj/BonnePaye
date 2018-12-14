#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "acquisition.h"
#include <MLV/MLV_all.h>

#define NBACQUI 23
#define TAILLE 120



void affiche_acquisition_achat_aff(joueur *j,acquisition *acqui){
  int x,y,choix = 1;
  MLV_Event event;
  /*Dessine une boîte affichant les valeurs de l'acquisition*/ 
  MLV_draw_adapted_text_box(50,50,acqui->titre,9,MLV_COLOR_RED,MLV_COLOR_WHITE,MLV_COLOR_BLACK,MLV_TEXT_LEFT,MLV_HORIZONTAL_CENTER,MLV_VERTICAL_CENTER);/*,acqui.titre,acqui.achat,acqui.vente,acqui.commission,9,MLV_COLOR_RED,MLV_COLOR_WHITE,MLV_COLOR_BLACK);*/
  MLV_draw_text_box(90,90,30,20,"OUI",9,MLV_COLOR_RED,MLV_COLOR_WHITE,MLV_COLOR_BLACK,MLV_TEXT_LEFT,MLV_HORIZONTAL_CENTER,MLV_VERTICAL_CENTER);
  MLV_draw_text_box(140,140,30,20,"NON",9,MLV_COLOR_RED,MLV_COLOR_WHITE,MLV_COLOR_BLACK,MLV_TEXT_LEFT,MLV_HORIZONTAL_CENTER,MLV_VERTICAL_CENTER);
  MLV_actualise_window();
  /* Récupération de la position de la souris au moment du clique*/ 
while(choix == 1){
  do{
    event = MLV_get_event(NULL, NULL, NULL,
			  NULL, NULL,
			  &x, &y, NULL,
			  NULL);
  }while( event != MLV_MOUSE_BUTTON);
  /* On vérifie si il est sur oui ou sur non */ 
if(x>=90 && y>=90 && x<=120 && y<=110){
    achat_acquisition(j,acqui);
    choix = 0;
  }else if(x>=140 && y>=140 && x<=170 && y<=110)
    choix = 0;
    }
  }

int affiche_acquisition_vente_aff(joueur *j,acquisition *acqui){
 int x,y,choix = 1;
  MLV_Event event;
  /* Dessine une boîte affichant les valeurs de l'acquisition*/ 
  MLV_draw_adapted_text_box(50,50,acqui->titre,9,MLV_COLOR_RED,MLV_COLOR_WHITE,MLV_COLOR_BLACK,MLV_TEXT_LEFT,MLV_HORIZONTAL_CENTER,MLV_VERTICAL_CENTER);
  
  MLV_draw_text_box(90,90,30,10,"OUI",9,MLV_COLOR_RED,MLV_COLOR_WHITE,MLV_COLOR_BLACK,MLV_TEXT_LEFT,MLV_HORIZONTAL_CENTER,MLV_VERTICAL_CENTER);
  MLV_draw_text_box(140,140,30,10,"NON",9,MLV_COLOR_RED,MLV_COLOR_WHITE,MLV_COLOR_BLACK,MLV_TEXT_LEFT,MLV_HORIZONTAL_CENTER,MLV_VERTICAL_CENTER);
  MLV_actualise_window();
  /* Récupération de la position de la souris au moment du clique*/ 
while(choix == 1){
  do{
    event = MLV_get_event(NULL, NULL, NULL,
			  NULL, NULL,
			  &x, &y, NULL,
			  NULL);
  }while( event != MLV_MOUSE_BUTTON);
  /* On vérifie si il est sur oui ou sur non*/ 
 if(x>=120 && y>=90 && x<=140 && y<=100){ /*if(x>=90 && y>=90 && x<=120 && y<=100)*/
    return choix;
  }else if(x>=140 && y>=140 && x<=170 && y<=100)
    return 0;
    }
 return 0;
}

int est_disponible(acquisition acqui){
  if(acqui.valeur>0){
    return 0;
      }else{
    return 1;
  }
}

void achat_acquisition(joueur *j, acquisition *acqui){
  printf("On achete \n");
  acqui->valeur = j->numJ;
  j->total = j->total-acqui->achat;
  j->sesAcquisitions[j->nb_acquisition]=*acqui;/*  *acqui */
  j->nb_acquisition ++;
}
/* Achat acquisition pour l'ia, si il possède plus de 500€ après l'achat de l'acquisition il valide l'achat */
void achat_acquisition_o(joueur *j, acquisition *acqui){
  if(j->total-(acqui->achat-500)>0){
    acqui->valeur = j->numJ;
    j->total = j->total-acqui->achat;
    j->sesAcquisitions[j->nb_acquisition]=*acqui;
    j->nb_acquisition ++;
  }
}
/* Il prend l'acquisition lui rapportant le plus d'argent */
/* La vérification si c'est une IA se fait de le main */ 
void vente_acquisition_o(joueur *j){
  int i=0, n=0,x=0;
  
  while(x<j->nb_acquisition){
    if(j->sesAcquisitions[i].valeur == j->numJ){
      if(j->sesAcquisitions[i].vente>j->sesAcquisitions[n].vente){
	n=i;
      }
      x++;
    }
    i++;
  }
  if(j->nb_acquisition!=0){
    j->sesAcquisitions[n].valeur=0;
    j->total = j->total+j->sesAcquisitions[n].vente;
    j->nb_acquisition --;
  }

}

void vente_acquisition(joueur *j){
  int i=0,x=0;
  /*Parcours de la liste d'acquisition + affichage (dans l'affichage il y a le choix de ventes ou non de l'acquisition*/ 
  while(x<j->nb_acquisition){
      if(j->sesAcquisitions[i].valeur == j->numJ){
	x++;
	if(affiche_acquisition_vente_aff(j,&j->sesAcquisitions[i])==1){
	  x=j->nb_acquisition;
	}
      }
      i++;
  }
  j->sesAcquisitions[i].valeur=0;
  j->total = j->total+j->sesAcquisitions[i].vente;
  j->nb_acquisition --;
}



void piocher_acquisition(acquisition * lesacqui,joueur *j){
  int alea;
  alea=rand()%NBACQUI;
  
  while(est_disponible(lesacqui[alea])==0){
    alea=rand()%NBACQUI;
  }
  if(j->type==1){
  affiche_acquisition_achat_aff(j,&lesacqui[alea]);
  }else{
    achat_acquisition_o(j,&lesacqui[alea]);
  }
  }
/* On regarde quelle lancer dé est le plus haut et on récupère le numJ du lancer de dé */
int acquisition_commission(joueur *j){
  int temp,jetG=0,numG,i;
  for(i=1;i<=j[0].numJ;i++){
    temp=(rand()%5)+1;
    if(temp>jetG){
      jetG=temp;
      numG=j[i].numJ;
    }
    
  }
  return numG;

}

void initialiser_acquisition(acquisition * tab){
  strcpy(tab[0].titre,"Déguisement de super héro\n Prix d'achat : 450€\n Prix de vente : 1200€\n Montant de la Commission :  100€\n Voulez vous l'acheter ? ");
  tab[0].achat=450;
  tab[0].vente=1200;
  tab[0].commission=100;
  tab[0].valeur=0;

  strcpy(tab[1].titre,"Tracteur Agricole\n Prix d'achat : 2850€\n Prix de vente : 3600€\n Montant de la Commission : 300€\nVoulez vous l'acheter?");
  tab[1].achat=2850;
  tab[1].vente=3600;
  tab[1].commission=300;
  tab[1].valeur=0;
  
  strcpy(tab[2].titre,"Stande de glace\n Prix d'achat : 3000€\n Prix de vente : 7500€\n Montant de la Commission : 300€\nVoulez vous l'acheter?");
  tab[2].achat=3000;
  tab[2].vente=7500;
  tab[2].commission=300;
  tab[2].valeur=0;

  strcpy(tab[3].titre,"Caravane\n Prix d'achat : 3300€\n Prix de vente : 4800€\n Montant de la Commission : 350€\nVoulez vous l'acheter?");
  tab[3].achat=3300;
  tab[3].vente=4800;
  tab[3].commission=350;
  tab[3].valeur=0;

  strcpy(tab[4].titre,"Cabane de Luxe dans le désert\n Prix d'achat : 3000€\n Prix de vente : 4500€\n Montant de la Commission: 450€\nVoulez bous l'acheter?");
  tab[4].achat=3000;
  tab[4].vente=4500;
  tab[4].commission=450;
  tab[4].valeur=0;

  strcpy(tab[5].titre,"Robot Chien\n Prix d'achat : 600€\n Prix de vente : 1650€\n Montant de la Commission: 100€\nVoulez bous l'acheter?");
  tab[5].achat=600;
  tab[5].vente=1650;
  tab[5].commission=100;
  tab[5].valeur=0;

  strcpy(tab[6].titre,"Collection de B.D\n Prix d'achat : 600€\n Prix de vente : 1650€\n Montant de la Commission: 50€\nVoulez bous l'acheter?");
  tab[6].achat=600;
  tab[6].vente=1650;
  tab[6].commission=50;
  tab[6].valeur=0;

  strcpy(tab[7].titre,"Oeuf de dinosaure\n Prix d'achat : 2100€\n Prix de vente : 4200€\n Montant de la Commission: 200€\nVoulez bous l'acheter?");
  tab[7].achat=2100;
  tab[7].vente=4200;
  tab[7].commission=200;
  tab[7].valeur=0;

  strcpy(tab[8].titre,"Paire de jumelles à vision nocturne\n Prix d'achat : 2400€\n Prix de vente : 3600€\n Montant de la Commission: 150€\nVoulez bous l'acheter?");
  tab[8].achat=2400;
  tab[8].vente=3600;
  tab[8].commission=150;
  tab[8].valeur=0;

  strcpy(tab[9].titre,"Fourmilière géante\n Prix d'achat : 1050€\n Prix de vente : 1800€\n Montant de la Commission: 100€\nVoulez bous l'acheter?");
  tab[9].achat=1050;
  tab[9].vente=1800;
  tab[9].commission=100;
  tab[9].valeur=0;

  strcpy(tab[10].titre,"Cheveux de Toutânkhamon\n Prix d'achat : 4500€\n Prix de vente : 7500€\n Montant de la Commission: 300€\nVoulez bous l'acheter?");
  tab[10].achat=4500;
  tab[10].vente=7500;
  tab[10].commission=300;
  tab[10].valeur=0;

  strcpy(tab[11].titre,"Sous-vêtement du roi Louis XIV\n Prix d'achat : 2100€\n Prix de vente : 4200€\n Montant de la Commission: 200€\nVoulez bous l'acheter?");
  tab[11].achat=2100;
  tab[11].vente=4200;
  tab[11].commission=200;
  tab[11].valeur=0;

  strcpy(tab[12].titre,"Cheval de course\n Prix d'achat : 3300€\n Prix de vente : 4800€\n Montant de la Commission: 400€\nVoulez bous l'acheter?");
  tab[12].achat=3300;
  tab[12].vente=4800;
  tab[12].commission=400;
  tab[12].valeur=0;

  strcpy(tab[13].titre,"Camion de pizza\n Prix d'achat : 1050€\n Prix de vente : 1800€\n Montant de la Commission: 150€\nVoulez bous l'acheter?");
  tab[13].achat=1050;
  tab[13].vente=1800;
  tab[13].commission=150;
  tab[13].valeur=0;

  strcpy(tab[14].titre,"Jacuzzi de luxe\n Prix d'achat : 2400€\n Prix de vente : 3600€\n Montant de la Commission: 150€\nVoulez bous l'acheter?");
  tab[14].achat=2400;
  tab[14].vente=3600;
  tab[14].commission=150;
  tab[14].valeur=0;

  strcpy(tab[15].titre,"Vieux Tacot\n Prix d'achat : 1050€\n Prix de vente : 1800€\n Montant de la Commission: 150€\nVoulez bous l'acheter?");
  tab[15].achat=1050;
  tab[15].vente=1800;
  tab[15].commission=150;
  tab[15].valeur=0;

  strcpy(tab[16].titre,"Bateau gonflable\n Prix d'achat : 1000€\n Prix de vente : 1800€\n Montant de la Commission: 100€\nVoulez bous l'acheter?");
  tab[16].achat=1000;
  tab[16].vente=1800;
  tab[16].commission=100;
  tab[16].valeur=0;

  strcpy(tab[17].titre,"Collier de chien serti de diamants\n Prix d'achat : 2850€\n Prix de vente : 3600€\n Montant de la Commission: 300€\nVoulez bous l'acheter?");
  tab[17].achat=2850;
  tab[17].vente=3600;
  tab[17].commission=300;
  tab[17].valeur=0;

  strcpy(tab[18].titre,"Baguette Magique\n Prix d'achat : 2400€\n Prix de vente : 3600€\n Montant de la Commission: 150€\nVoulez bous l'acheter?");
  tab[18].achat=2400;
  tab[18].vente=3600;
  tab[18].commission=150;
  tab[18].valeur=0;

  strcpy(tab[19].titre,"Labyrinthe de maïs\n Prix d'achat : 3000€\n Prix de vente : 7500€\n Montant de la Commission: 300€\nVoulez bous l'acheter?");
  tab[19].achat=3000;
  tab[19].vente=7500;
  tab[19].commission=300;
  tab[19].valeur=0;

  strcpy(tab[20].titre,"Tétine en or\n Prix d'achat : 1050€\n Prix de vente : 1800€\n Montant de la Commission: 150€\nVoulez bous l'acheter?");
  tab[20].achat=1050;
  tab[20].vente=1800;
  tab[20].commission=150;
  tab[20].valeur=0;

  strcpy(tab[21].titre,"Stylo Gadget\n Prix d'achat : 450€\n Prix de vente : 1200€\n Montant de la Commission: 100€\nVoulez bous l'acheter?");
  tab[21].achat=450;
  tab[21].vente=1200;
  tab[21].commission=100;
  tab[21].valeur=0;

  strcpy(tab[22].titre,"Collier de chien serti de diamants\n Prix d'achat : 1050€\n Prix de vente : 1800€\n Montant de la Commission: 150€\nVoulez bous l'acheter?");
  tab[22].achat=1050;
  tab[22].vente=1800;
  tab[22].commission=150;
  tab[22].valeur=0;
  
}
