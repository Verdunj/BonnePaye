#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aff_plateau.h"
#include <MLV/MLV_all.h>

#define DECALAGE 200


void afficher_plateau(){
  int width= 1400, height=800;
  MLV_Image *image;
  image = MLV_load_image("plateau.jpg");
  MLV_resize_image_with_proportions(image, width, height);
  MLV_draw_image(image, 200, 0);
  MLV_actualise_window();
}
/* Positionnement du pions des joueurs, case 0 joueur 1 x=900 y=700 pas 125*/
void case_1a6(joueur j){
  if (j.c>=0 && j.c<=5){
    /* On regarde quel pion doit être bouger c'est pourqoi on regarde le numJ */
    if(j.numJ==1){
      
      MLV_draw_filled_circle(900-(125*j.c),700,10,MLV_COLOR_BLUE);
    }
    else if(j.numJ==2){
      MLV_draw_filled_circle(930-(125*j.c),700,10,MLV_COLOR_PURPLE);
    }
    else if(j.numJ==3){
      MLV_draw_filled_circle(900-(125*j.c),730,10,MLV_COLOR_RED);
    }
    else if(j.numJ==4){
      MLV_draw_filled_circle(930-(125*j.c),730,10,MLV_COLOR_GREEN);
    }
      else if(j.numJ==5){
      MLV_draw_filled_circle(900-(125*j.c),760,10,MLV_COLOR_PINK);
    }
    else if(j.numJ==6){
      MLV_draw_filled_circle(930-(125*j.c),760,10,MLV_COLOR_BLACK);
    }
  }
  else{
    case_7a11(j);
  }
  MLV_actualise_window();
}
/* on reapplique la fonction si dessus pour toute les colonnes et lignes du plateau*/
void case_7a11(joueur j){
  if(j.c>=6 && j.c<=10){
    if(j.numJ==1){
      MLV_draw_filled_circle(245,700-(125*(j.c-5)),10,MLV_COLOR_BLUE);
    }
    else if(j.numJ==2){
      MLV_draw_filled_circle(275,700-(125*(j.c-5)),10,MLV_COLOR_PURPLE);
    }
    else if(j.numJ==3){
      MLV_draw_filled_circle(245,730-(125*(j.c-5)),10,MLV_COLOR_RED);
    }
    else if(j.numJ==4){
      MLV_draw_filled_circle(275,730-(125*(j.c-5)),10,MLV_COLOR_GREEN);
    }
    else if(j.numJ==5){
      MLV_draw_filled_circle(245,760-(125*(j.c-5)),10,MLV_COLOR_PINK);
    }
    else if(j.numJ==6){
      MLV_draw_filled_circle(275,760-(125*(j.c-5)),10,MLV_COLOR_BLACK);
    }
   

  }
  else{
    case_12a16(j);
  }
}





void case_12a16(joueur j){

 if(j.c>=11 && j.c<=15){
    if(j.numJ==1){
      MLV_draw_filled_circle(275+(125*(j.c-10)),45,10,MLV_COLOR_BLUE);
    }
    else if(j.numJ==2){
      MLV_draw_filled_circle(305+(125*(j.c-10)),45,10,MLV_COLOR_PURPLE);
    }
    else if(j.numJ==3){
      MLV_draw_filled_circle(275+(125*(j.c-10)),75,10,MLV_COLOR_RED);
    }
    else if(j.numJ==4){
      MLV_draw_filled_circle(305+(125*(j.c-10)),75,10,MLV_COLOR_GREEN);
    }
    else if(j.numJ==5){
      MLV_draw_filled_circle(275+(125*(j.c-10)),105,10,MLV_COLOR_PINK);
    }
    else if(j.numJ==6){
      MLV_draw_filled_circle(305+(125*(j.c-10)),105,10,MLV_COLOR_BLACK);

 }else {
   case_17a20(j);
 }
  

}

}


void case_17a20(joueur j){
  
 if(j.c>=16 && j.c<=19){
    if(j.numJ==1){
      MLV_draw_filled_circle(900,75+(125*(j.c-15)),10,MLV_COLOR_BLUE);
    }
    else if(j.numJ==2){
      MLV_draw_filled_circle(930,75+(125*(j.c-15)),10,MLV_COLOR_PURPLE);
    }
    else if(j.numJ==3){
      MLV_draw_filled_circle(900,105+(125*(j.c-15)),10,MLV_COLOR_RED);
    }
    else if(j.numJ==4){
      MLV_draw_filled_circle(930,105+(125*(j.c-15)),10,MLV_COLOR_GREEN);
    }
    else if(j.numJ==5){
      MLV_draw_filled_circle(900,135+(125*(j.c-15)),10,MLV_COLOR_PINK);
    }
    else if(j.numJ==6){
      MLV_draw_filled_circle(930,135+(125*(j.c-15)),10,MLV_COLOR_BLACK);
    }

 }else{
   case_21a24(j);
   
 }

}

void case_21a24(joueur j){
 if(j.c>=20 && j.c<=23){
    if(j.numJ==1){
      MLV_draw_filled_circle(900-(125*(j.c-19)),575,10,MLV_COLOR_BLUE);
    }
    else if(j.numJ==2){
      MLV_draw_filled_circle(930-(125*(j.c-19)),575,10,MLV_COLOR_PURPLE);
    }
    else if(j.numJ==3){
      MLV_draw_filled_circle(900-(125*(j.c-19)),605,10,MLV_COLOR_RED);
    }
    else if(j.numJ==4){
      MLV_draw_filled_circle(930-(125*(j.c-19)),605,10,MLV_COLOR_GREEN);
    }
    else if(j.numJ==5){
      MLV_draw_filled_circle(900-(125*(j.c-19)),635,10,MLV_COLOR_PINK);
    }
    else if(j.numJ==6){
      MLV_draw_filled_circle(930-(125*(j.c-19)),635,10,MLV_COLOR_BLACK);
    }

 }else{
   case_25a27(j);
 }

}

void case_25a27(joueur j){

 if(j.c>=24 && j.c<=26){
    if(j.numJ==1){
      MLV_draw_filled_circle(400,575-(125*(j.c-23)),10,MLV_COLOR_BLUE);
    }
    else if(j.numJ==2){
      MLV_draw_filled_circle(430,575-(125*(j.c-23)),10,MLV_COLOR_PURPLE);
    }
    else if(j.numJ==3){
      MLV_draw_filled_circle(400,605-(125*(j.c-23)),10,MLV_COLOR_RED);
    }
    else if(j.numJ==4){
      MLV_draw_filled_circle(430,605-(125*(j.c-23)),10,MLV_COLOR_GREEN);
    }
    else if(j.numJ==5){
      MLV_draw_filled_circle(400,635-(125*(j.c-23)),10,MLV_COLOR_PINK);
    }
    else if(j.numJ==6){
      MLV_draw_filled_circle(430,635-(125*(j.c-23)),10,MLV_COLOR_BLACK);
    }

 }else{
   case_28a30(j);
 }


 

}

void case_28a30(joueur j){

 if(j.c>=27 && j.c<=29){
    if(j.numJ==1){
      MLV_draw_filled_circle(400+(125*(j.c-26)),200,10,MLV_COLOR_BLUE);
    }
    else if(j.numJ==2){
      MLV_draw_filled_circle(430+(125*(j.c-26)),200,10,MLV_COLOR_PURPLE);
    }
    else if(j.numJ==3){
      MLV_draw_filled_circle(400+(125*(j.c-26)),230,10,MLV_COLOR_RED);
    }
    else if(j.numJ==4){
      MLV_draw_filled_circle(430+(125*(j.c-26)),230,10,MLV_COLOR_GREEN);
    }
     else if(j.numJ==5){
      MLV_draw_filled_circle(400+(125*(j.c-26)),260,10,MLV_COLOR_PINK);
    }
     else if(j.numJ==6){
      MLV_draw_filled_circle(430+(125*(j.c-26)),260,10,MLV_COLOR_BLACK);
    }

 }else{
   case_31a32(j);
 }



}



void case_31a32(joueur j){

 if(j.c>=30 && j.c<=31){
    if(j.numJ==1){
      MLV_draw_filled_circle(775,200+(125*(j.c-29)),10,MLV_COLOR_BLUE);
    }
    else if(j.numJ==2){
      MLV_draw_filled_circle(805,200+(125*(j.c-29)),10,MLV_COLOR_PURPLE);
    }
    else if(j.numJ==3){
      MLV_draw_filled_circle(775,230+(125*(j.c-29)),10,MLV_COLOR_RED);
    }
    else if(j.numJ==4){
      MLV_draw_filled_circle(805,230+(125*(j.c-29)),10,MLV_COLOR_GREEN);
    }
    else if(j.numJ==5){
      MLV_draw_filled_circle(775,230+(125*(j.c-29)),10,MLV_COLOR_PINK);
    }
    else if(j.numJ==6){
      MLV_draw_filled_circle(805,230+(125*(j.c-29)),10,MLV_COLOR_BLACK);
    }

 
  
  
 }
}

void stat_j(joueur *j){
  int i,x;
  MLV_draw_text(20,450,"Assurance",MLV_COLOR_BLACK);
  MLV_draw_text(20,460,"Médecin",MLV_COLOR_BLACK);
  MLV_draw_text(100,450,"Assurance",MLV_COLOR_BLACK);
  MLV_draw_text(100,460,"Voiture",MLV_COLOR_BLACK);
  /* On affiche les statistiques des joueurs (epargne total pret et aussi si il possède oui ou non une assurance voiture/medecin */
  for(i=1;i<=j[0].numJ;i++){
    if(i==1){
      MLV_draw_text(5,5+((i-1)*40),"Joueur : %s",MLV_COLOR_BLUE,j[i].Joueur);
      MLV_draw_text(5,15+((i-1)*40),"total : %d",MLV_COLOR_BLUE,j[i].total);
      MLV_draw_text(5,25+((i-1)*40),"pret : %d",MLV_COLOR_BLUE,j[i].pret);
      MLV_draw_text(5,35+((i-1)*40),"epargne : %d",MLV_COLOR_BLUE,j[i].epargne);
      MLV_draw_rectangle(40,480+((i-1)*30),20,20,MLV_COLOR_BLUE);
      MLV_draw_rectangle(120,480+((i-1)*30),20,20,MLV_COLOR_BLUE);
      for(x=0;x<j[i].nb_courrier;x++){
	if(est_carte_assurance(j[i].sesCourriers[x])){
	  if(est_carte_medecin(j[i].sesCourriers[x])){
	    MLV_draw_filled_rectangle(40,480+((i-1)*30),20,20,MLV_COLOR_BLUE);
	  }else{
	    MLV_draw_filled_rectangle(120,480+((i-1)*30),20,20,MLV_COLOR_BLUE);
	  }
	}

      }
    }

  else if(i==2){
    MLV_draw_text(5,5+((i-1)*40),"Joueur : %s",MLV_COLOR_PURPLE,j[i].Joueur);
    MLV_draw_text(5,15+((i-1)*40),"total : %d",MLV_COLOR_PURPLE,j[i].total);
    MLV_draw_text(5,25+((i-1)*40),"pret : %d",MLV_COLOR_PURPLE,j[i].pret);
    MLV_draw_text(5,35+((i-1)*40),"epargne : %d",MLV_COLOR_PURPLE,j[i].epargne);
    MLV_draw_rectangle(40,480+((i-1)*30),20,20,MLV_COLOR_PURPLE);
    MLV_draw_rectangle(120,480+((i-1)*30),20,20,MLV_COLOR_PURPLE);

    for(x=0;x<j[i].nb_courrier;x++){
      if(est_carte_assurance(j[i].sesCourriers[x])){
	if(est_carte_medecin(j[i].sesCourriers[x])){
	  MLV_draw_filled_rectangle(40,480+((i-1)*30),20,20,MLV_COLOR_PURPLE);
	}else{
	  MLV_draw_filled_rectangle(120,480+((i-1)*30),20,20,MLV_COLOR_PURPLE);
	}
      }
    }
  }
 

 else if(i==3){
   MLV_draw_text(5,5+((i-1)*40),"Joueur : %s",MLV_COLOR_RED,j[i].Joueur);
   MLV_draw_text(5,15+((i-1)*40),"total : %d",MLV_COLOR_RED,j[i].total);
   MLV_draw_text(5,25+((i-1)*40),"pret : %d",MLV_COLOR_RED,j[i].pret);
   MLV_draw_text(5,35+((i-1)*40),"epargne : %d",MLV_COLOR_RED,j[i].epargne);
   MLV_draw_rectangle(40,480+((i-1)*30),20,20,MLV_COLOR_RED);
   MLV_draw_rectangle(120,480+((i-1)*30),20,20,MLV_COLOR_RED);
   for(x=0;x<j[i].nb_courrier;x++){
     if(est_carte_assurance(j[i].sesCourriers[x])){
       if(est_carte_medecin(j[i].sesCourriers[x])){
	 MLV_draw_filled_rectangle(40,480+((i-1)*30),20,20,MLV_COLOR_RED);
       }else{
	 MLV_draw_filled_rectangle(120,480+((i-1)*30),20,20,MLV_COLOR_RED);
       }
     }
   }
 }


    else if(i==4){
      MLV_draw_text(5,5+((i-1)*40),"Joueur : %s",MLV_COLOR_GREEN,j[i].Joueur);
      MLV_draw_text(5,15+((i-1)*40),"total : %d",MLV_COLOR_GREEN,j[i].total);
      MLV_draw_text(5,25+((i-1)*40),"pret : %d",MLV_COLOR_GREEN,j[i].pret);
      MLV_draw_text(5,35+((i-1)*40),"epargne : %d",MLV_COLOR_GREEN,j[i].epargne);
      MLV_draw_rectangle(40,480+((i-1)*30),20,20,MLV_COLOR_GREEN);
      MLV_draw_rectangle(120,480+((i-1)*30),20,20,MLV_COLOR_GREEN);
      for(x=0;x<j[i].nb_courrier;x++){
	if(est_carte_assurance(j[i].sesCourriers[x])){
	  if(est_carte_medecin(j[i].sesCourriers[x])){
	    MLV_draw_filled_rectangle(40,480+((i-1)*30),20,20,MLV_COLOR_GREEN);
	  }else{
	    MLV_draw_filled_rectangle(120,480+((i-1)*30),20,20,MLV_COLOR_GREEN);
	  }


	}

      }
    }
    else if(i==5){
      MLV_draw_text(5,5+((i-1)*40),"Joueur : %s",MLV_COLOR_PINK,j[i].Joueur);
      MLV_draw_text(5,15+((i-1)*40),"total : %d",MLV_COLOR_PINK,j[i].total);
      MLV_draw_text(5,25+((i-1)*40),"pret : %d",MLV_COLOR_PINK,j[i].pret);
      MLV_draw_text(5,35+((i-1)*40),"epargne : %d",MLV_COLOR_PINK,j[i].epargne);
      MLV_draw_rectangle(40,480+((i-1)*30),20,20,MLV_COLOR_PINK);
      MLV_draw_rectangle(120,480+((i-1)*30),20,20,MLV_COLOR_PINK);
      for(x=0;x<j[i].nb_courrier;x++){
	if(est_carte_assurance(j[i].sesCourriers[x])){
	  if(est_carte_medecin(j[i].sesCourriers[x])){
	    MLV_draw_filled_rectangle(40,480+((i-1)*30),20,20,MLV_COLOR_PINK);
	  }else{
	    MLV_draw_filled_rectangle(120,480+((i-1)*30),20,20,MLV_COLOR_PINK);
	  }


	}

      }
    }
      else if(i==6){
      MLV_draw_text(5,5+((i-1)*40),"Joueur : %s",MLV_COLOR_BLACK,j[i].Joueur);
      MLV_draw_text(5,15+((i-1)*40),"total : %d",MLV_COLOR_BLACK,j[i].total);
      MLV_draw_text(5,25+((i-1)*40),"pret : %d",MLV_COLOR_BLACK,j[i].pret);
      MLV_draw_text(5,35+((i-1)*40),"epargne : %d",MLV_COLOR_BLACK,j[i].epargne);
      MLV_draw_rectangle(40,480+((i-1)*30),20,20,MLV_COLOR_BLACK);
      MLV_draw_rectangle(120,480+((i-1)*30),20,20,MLV_COLOR_BLACK);
      for(x=0;x<j[i].nb_courrier;x++){
	if(est_carte_assurance(j[i].sesCourriers[x])){
	  if(est_carte_medecin(j[i].sesCourriers[x])){
	    MLV_draw_filled_rectangle(40,480+((i-1)*30),20,20,MLV_COLOR_BLACK);
	  }else{
	    MLV_draw_filled_rectangle(120,480+((i-1)*30),20,20,MLV_COLOR_BLACK);
	  }


	}

      }
    }
  
    
}

MLV_actualise_window();

}


void aff_jeu(joueur *j,int *cagnotte){
  int i;
  
  MLV_clear_window(MLV_COLOR_WHITE);
  afficher_plateau();
  for(i=1;i<=j[0].numJ;i++){
    case_1a6(j[i]);
  }
  MLV_draw_text(5,255,"Cagnotte : %d",MLV_COLOR_BLACK,*cagnotte);
  stat_j(j);
  MLV_actualise_window();
}


void tour_joueur(joueur j,joueur *tabJ,int *cagnotte,int *liste_mois,int nb_tour, courrier *listeC,acquisition *listeA){
  int i=0,x,y;
  MLV_Event event;

 
  while(i==0){
    
      MLV_draw_text(5,300,"Joueur : %s",MLV_COLOR_BLACK,j.Joueur);
  MLV_draw_text_box(5,320,70,20,"Continuer",9,
		    MLV_COLOR_GREEN,MLV_COLOR_BLACK,MLV_COLOR_GREEN,MLV_TEXT_LEFT,MLV_HORIZONTAL_CENTER,MLV_VERTICAL_CENTER);
  MLV_draw_text_box(60,700,70,20,"PAUSE",9,MLV_COLOR_BLACK,MLV_COLOR_BLACK,MLV_COLOR_WHITE,MLV_TEXT_LEFT,MLV_HORIZONTAL_CENTER,MLV_VERTICAL_CENTER,j.Joueur);
  MLV_actualise_window();
    do{
event = MLV_get_event(NULL, NULL, NULL,
			  NULL, NULL,
			  &x, &y, NULL,
			  NULL);


    }while( event != MLV_MOUSE_BUTTON);
    if(x>=5 && y>=320 && x<= 75 && y <= 340){
      i=1;
    }
    else if(x>=60 && y>=700 && x<=130 && y<=720){
      pause(j,tabJ,cagnotte,liste_mois,nb_tour,listeC,listeA);
    }
  }
  aff_jeu(tabJ,cagnotte);
}

void lancer_de_aff(){
  int i=0,x,y;
  MLV_Event event;
   MLV_draw_text_box(5,360,120,20,"Lancer le dé",9,
		    MLV_COLOR_GREEN,MLV_COLOR_BLACK,MLV_COLOR_GREEN,MLV_TEXT_LEFT,MLV_HORIZONTAL_CENTER,MLV_VERTICAL_CENTER);
   MLV_actualise_window();
 while(i==0){
    do{
event = MLV_get_event(NULL, NULL, NULL,
			  NULL, NULL,
			  &x, &y, NULL,
			  NULL);


    }while( event != MLV_MOUSE_BUTTON);
    if(x>=5 && y>=360 && x<= 125 && y <= 380){
      i=1;
    }
  }
    
}

void pause(joueur j, joueur *tabJ,int *cagnotte,int *liste_mois,int nb_tour, courrier *listeC,acquisition *listeA){
  int i=0,x,y;
  MLV_Event event;
  MLV_clear_window(MLV_COLOR_WHITE);
  MLV_draw_text_box(300,300,80,20,"Continuer",9,MLV_COLOR_BLACK,MLV_COLOR_BLACK,MLV_COLOR_WHITE,MLV_TEXT_LEFT,MLV_HORIZONTAL_CENTER,MLV_VERTICAL_CENTER);
  MLV_draw_text_box(300,400,80,20,"Sauvegarde",9,MLV_COLOR_BLACK,MLV_COLOR_BLACK,MLV_COLOR_WHITE,MLV_TEXT_LEFT,MLV_HORIZONTAL_CENTER,MLV_VERTICAL_CENTER);
  MLV_actualise_window();
  while(i==0){
do{
event = MLV_get_event(NULL, NULL, NULL,
			  NULL, NULL,
			  &x, &y, NULL,
			  NULL);


    }while( event != MLV_MOUSE_BUTTON);
    if(x>=300 && y>=300 && x<= 380 && y <= 320){
      aff_jeu(tabJ,cagnotte);
      i=1;
    }
    else if( x>=300 && y>=400 && x<=380 && y<=420){
      encrypter(j,tabJ,cagnotte,liste_mois,nb_tour,listeC,listeA);
      aff_jeu(tabJ,cagnotte);
      i=1;
    }
  }


}

/*void aff_bouton(){



}
*/
