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
      MLV_draw_filled_circle(930-(125*j.c),700,10,MLV_COLOR_YELLOW);
    }
    else if(j.numJ==3){
      MLV_draw_filled_circle(900-(125*j.c),730,10,MLV_COLOR_RED);
    }
    else if(j.numJ==4){
      MLV_draw_filled_circle(930-(125*j.c),730,10,MLV_COLOR_GREEN);
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
      MLV_draw_filled_circle(275,700-(125*(j.c-5)),10,MLV_COLOR_YELLOW);
    }
    else if(j.numJ==3){
      MLV_draw_filled_circle(245,730-(125*(j.c-5)),10,MLV_COLOR_RED);
    }
    else if(j.numJ==4){
      MLV_draw_filled_circle(275,730-(125*(j.c-5)),10,MLV_COLOR_GREEN);
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
      MLV_draw_filled_circle(305+(125*(j.c-10)),45,10,MLV_COLOR_YELLOW);
    }
    else if(j.numJ==3){
      MLV_draw_filled_circle(275+(125*(j.c-10)),75,10,MLV_COLOR_RED);
    }
    else if(j.numJ==4){
      MLV_draw_filled_circle(305+(125*(j.c-10)),75,10,MLV_COLOR_GREEN);
    }

 }else {
   case_17a20(j);
 }
  

}




void case_17a20(joueur j){
  
 if(j.c>=16 && j.c<=19){
    if(j.numJ==1){
      MLV_draw_filled_circle(900,75+(125*(j.c-15)),10,MLV_COLOR_BLUE);
    }
    else if(j.numJ==2){
      MLV_draw_filled_circle(930,75+(125*(j.c-15)),10,MLV_COLOR_YELLOW);
    }
    else if(j.numJ==3){
      MLV_draw_filled_circle(900,105+(125*(j.c-15)),10,MLV_COLOR_RED);
    }
    else if(j.numJ==4){
      MLV_draw_filled_circle(930,105+(125*(j.c-15)),10,MLV_COLOR_GREEN);
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
      MLV_draw_filled_circle(930-(125*(j.c-19)),575,10,MLV_COLOR_YELLOW);
    }
    else if(j.numJ==3){
      MLV_draw_filled_circle(900-(125*(j.c-19)),605,10,MLV_COLOR_RED);
    }
    else if(j.numJ==4){
      MLV_draw_filled_circle(930-(125*(j.c-19)),605,10,MLV_COLOR_GREEN);
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
      MLV_draw_filled_circle(430,575-(125*(j.c-23)),10,MLV_COLOR_YELLOW);
    }
    else if(j.numJ==3){
      MLV_draw_filled_circle(400,605-(125*(j.c-23)),10,MLV_COLOR_RED);
    }
    else if(j.numJ==4){
      MLV_draw_filled_circle(430,605-(125*(j.c-23)),10,MLV_COLOR_GREEN);
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
      MLV_draw_filled_circle(430+(125*(j.c-26)),200,10,MLV_COLOR_YELLOW);
    }
    else if(j.numJ==3){
      MLV_draw_filled_circle(400+(125*(j.c-26)),230,10,MLV_COLOR_RED);
    }
    else if(j.numJ==4){
      MLV_draw_filled_circle(430+(125*(j.c-26)),230,10,MLV_COLOR_GREEN);
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
      MLV_draw_filled_circle(805,200+(125*(j.c-29)),10,MLV_COLOR_YELLOW);
    }
    else if(j.numJ==3){
      MLV_draw_filled_circle(775,230+(125*(j.c-29)),10,MLV_COLOR_RED);
    }
    else if(j.numJ==4){
      MLV_draw_filled_circle(805,230+(125*(j.c-29)),10,MLV_COLOR_GREEN);
    }

 
  
  


}
}

void stat_j(joueur *j){
  int i;
  for(i=1;i<=j[0].numJ;i++){
    if(i==1){
      MLV_draw_text(5,5/*+(i*25)*/,"total : %d",MLV_COLOR_BLUE,j[i].total);
      printf("je suis passer a 1 \n");
		    }
    else if(i==2){
      MLV_draw_text(5,5+(i*25),"%d",MLV_COLOR_YELLOW,j[i].total);
      printf("je suis passer a 2 \n");
    }
     else if(i==3){
       MLV_draw_text(5,5+(i*25),"%d",MLV_COLOR_RED,j[i].total);
       printf("je suis passer a 3 \n");
    }
     else if(i==4){
       MLV_draw_text(5,5+(i*25),"%d",MLV_COLOR_GREEN,j[i].total);
       printf("je suis passer a 4 \n");
    }

  }

MLV_actualise_window();

}
