#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "acquisition.h"
/*#include <MLV/MLV_all.h>*/
/*#include "BonnePaye.h"
 */
#define NBACQUI 23
#define MAX 200
#define NBCOURRIER 80
#define TAILLE 120




/*typedef struct {
  char titre[MAX];
  int achat;
  int vente;
  int commission;
  int valeur;
}acquisition;

typedef struct {
  char message[MAX]
  int somme;
  int valeur;
  int numero
}courrier;
*/

/* void affiche_acquisition_achat_aff(joueur j,acquisition acqui){
  int x,y,choix = 1;
  MLV_Event event;
   Dessine une boîte affichant les valeurs de l'acquisition 
 MLV_draw_text_box(50,50,TAILLE,TAILLE,"Acquisition: %s\n Prix d'achat : %d\n Prix de vente : %d\n Montant de la Commission : %d \n Voulez vous l'acheter ? ",acqui.titre,acqui.achat,acqui.vente,acqui.commission,9,MLV_COLOR_RED,MLV_COLOR_WHITE,MLV_COLOR_BLACK);
  MLV_draw_text_box(90,90,30,10,"OUI",9,MLV_COLOR_RED,MLV_COLOR_WHITE,MLV_COLOR_BLACK);
  MLV_draw_text_box(140,140,30,10,"NON",9,MLV_COLOR_RED,MLV_COLOR_WHITE,MLV_COLOR_BLACK);
  MLV_actualise_window();
   Récupération de la position de la souris au moment du clique 
while(choix == 1){
  do{
    event = MLV_get_event(NULL, NULL, NULL,
			  NULL, NULL,
			  &x, &y, NULL,
			  NULL);
  }while( event != MLV_MOUSE_BUTTON);
   On vérifie si il est sur oui ou sur non 
if(x>=90 && y>=90 && x<=120 && y<=100){
    achat_acquisition(j,acqui);
    choix = 0;
  }else if(x>=140 && y>=140 && x<=170 && y<=100)
    choix = 0;
    }
  }
*/
/*int affiche_acquisition_vente_aff(joueur j,acquisition acqui){
 int x,y,choix = 1;
  MLV_Event event;
   Dessine une boîte affichant les valeurs de l'acquisition 
MLV_draw_text_box(50,50,TAILLE,TAILLE,"Acquisition: %s\n Prix d'achat : %d\n Prix de vente : %d\n Montant de la Commission : %d \n Voulez vous la vendre ? ",acqui.titre,acqui.achat,acqui.vente,acqui.commission,9,MLV_COLOR_RED,MLV_COLOR_WHITE,MLV_COLOR_BLACK);
  MLV_draw_text_box(90,90,30,10,"OUI",9,MLV_COLOR_RED,MLV_COLOR_WHITE,MLV_COLOR_BLACK);
  MLV_draw_text_box(140,140,30,10,"NON",9,MLV_COLOR_RED,MLV_COLOR_WHITE,MLV_COLOR_BLACK);
  MLV_actualise_window();
   Récupération de la position de la souris au moment du clique 
while(choix == 1){
  do{
    event = MLV_get_event(NULL, NULL, NULL,
			  NULL, NULL,
			  &x, &y, NULL,
			  NULL);
  }while( event != MLV_MOUSE_BUTTON);
   On vérifie si il est sur oui ou sur non 
 if(x>=90 && y>=90 && x<=120 && y<=100){
    vente_acquisition(j,acqui);
    return choix;
  }else if(x>=140 && y>=140 && x<=170 && y<=100)
    return 0;
    }
}
*/
int est_disponible(acquisition acqui){
  if(acqui.valeur>0){
    return 1;
      }else{
    return 0;
  }
}

void achat_acquisition(joueur j, acquisition acqui){
  acqui.valeur = j.numJ;
  j.total = j.total-acqui.achat;
  j.sesAcquisitions[j.nbAcquisitions]=acqui;
  j.nbAcquisitions ++;
}

/*int vente_acquisition(joueur j){
  int i=0;
   Parcours de la liste d'acquisition + affichage (dans l'affichage il y a le choix de ventes ou non de l'acquisition 
  while(i<j.nbAcquisitions && affiche_acquisition_vente(j.sesAcquisitions[i])==0){
    i++;
  }
  j.sesAcquisitions[i].valeur=0;
  j.total = j.total+j.sesAcquisitions[i].vente;
  j.nbAcquisitions --;
}
*/


/*int piocher_acquisition(acquisition * lesacqui,joueur j){
  int alea;
  alea=rand()%NBACQUI;
  
  while(est_disponible(lesacqui[alea])==0){
    alea=rand()%NBACQUI;
  }
  
  affiche_acquisition(lesacqui[alea]);


}
*/
int acquisition_commission(int nbjoueur){


}

void initialiser_acquisition(acquisition * tab[]){
  strcpy(tab[0]->titre,"Déguisement de super-héros");
  tab[0]->achat=450;
  tab[0]->vente=1200;
  tab[0]->commission=100;
  tab[0]->valeur=0;

  strcpy(tab[1]->titre,"Tracteur Agricole");
  tab[1]->achat=2850;
  tab[1]->vente=3600;
  tab[1]->commission=300;
  tab[1]->valeur=0;
  
  strcpy(tab[2]->titre,"Stand de glace");
  tab[2]->achat=3000;
  tab[2]->vente=7500;
  tab[2]->commission=300;
  tab[2]->valeur=0;

  strcpy(tab[3]->titre,"Caravane");
  tab[3]->achat=3300;
  tab[3]->vente=4800;
  tab[3]->commission=350;
  tab[3]->valeur=0;

  strcpy(tab[4]->titre,"Cabane de Luxe dans le désert");
  tab[4]->achat=3000;
  tab[4]->vente=4500;
  tab[4]->commission=450;
  tab[4]->valeur=0;

  strcpy(tab[5]->titre,"Robot Chien");
  tab[5]->achat=600;
  tab[5]->vente=1650;
  tab[5]->commission=100;
  tab[5]->valeur=0;

  strcpy(tab[6]->titre,"Collection de B.D");
  tab[6]->achat=600;
  tab[6]->vente=1650;
  tab[6]->commission=50;
  tab[6]->valeur=0;

  strcpy(tab[7]->titre,"Oeuf de dinosaure");
  tab[7]->achat=2100;
  tab[7]->vente=4200;
  tab[7]->commission=200;
  tab[7]->valeur=0;

  strcpy(tab[8]->titre,"Paire de jumelles à vision nocturne");
  tab[8]->achat=2400;
  tab[8]->vente=3600;
  tab[8]->commission=150;
  tab[8]->valeur=0;

  strcpy(tab[9]->titre,"Fourmilière géante");
  tab[9]->achat=1050;
  tab[9]->vente=1800;
  tab[9]->commission=100;
  tab[9]->valeur=0;

  strcpy(tab[10]->titre,"Cheveux de Toutânkhamon");
  tab[10]->achat=4500;
  tab[10]->vente=7500;
  tab[10]->commission=300;
  tab[10]->valeur=0;

  strcpy(tab[11]->titre,"Sous-vêtement du roi Louis XIV");
  tab[11]->achat=2100;
  tab[11]->vente=4200;
  tab[11]->commission=200;
  tab[11]->valeur=0;

  strcpy(tab[12]->titre,"Cheval de course");
  tab[12]->achat=3300;
  tab[12]->vente=4800;
  tab[12]->commission=400;
  tab[12]->valeur=0;

  strcpy(tab[13]->titre,"Camion de pizza");
  tab[13]->achat=1050;
  tab[13]->vente=1800;
  tab[13]->commission=150;
  tab[13]->valeur=0;

  strcpy(tab[14]->titre,"Jacuzzi de luxe");
  tab[14]->achat=2400;
  tab[14]->vente=3600;
  tab[14]->commission=150;
  tab[14]->valeur=0;

  strcpy(tab[15]->titre,"Vieux Tacot");
  tab[15]->achat=1050;
  tab[15]->vente=1800;
  tab[15]->commission=150;
  tab[15]->valeur=0;

  strcpy(tab[16]->titre,"Bateau gonflable");
  tab[16]->achat=1000;
  tab[16]->vente=1800;
  tab[16]->commission=100;
  tab[16]->valeur=0;

  strcpy(tab[17]->titre,"Collier de chien serti de diamants");
  tab[17]->achat=2850;
  tab[17]->vente=3600;
  tab[17]->commission=300;
  tab[17]->valeur=0;

  strcpy(tab[18]->titre,"Baguette Magique");
  tab[18]->achat=2400;
  tab[18]->vente=3600;
  tab[18]->commission=150;
  tab[18]->valeur=0;

  strcpy(tab[19]->titre,"Labyrinthe de maïs");
  tab[19]->achat=3000;
  tab[19]->vente=7500;
  tab[19]->commission=300;
  tab[19]->valeur=0;

  strcpy(tab[20]->titre,"Tétine en or");
  tab[20]->achat=1050;
  tab[20]->vente=1800;
  tab[20]->commission=150;
  tab[20]->valeur=0;

  strcpy(tab[21]->titre,"Stylo Gadget");
  tab[21]->achat=450;
  tab[21]->vente=1200;
  tab[21]->commission=100;
  tab[21]->valeur=0;

  strcpy(tab[22]->titre,"Collier de chien serti de diamants");
  tab[22]->achat=1050;
  tab[22]->vente=1800;
  tab[22]->commission=150;
  tab[22]->valeur=0;
  
}
