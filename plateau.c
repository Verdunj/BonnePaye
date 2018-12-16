#ifndef _PLATEAU_C_
#define _PLATEAU_C_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "courrier.h"
#include "evenement.h"
#include "pret.h"
#include "livret_epargne.h"
#include "plateau.h"



/*Ne pas oubliez srand(time(NULL))*/


int est_case_courrier(int n){
  if (n == 1 || n == 11 || n == 18 || n == 24)
    return 1;
  if(n == 5 || n == 27)
    return 2;
  if(n == 3 || n == 16)
    return 3;
  return 0;
} /*retourne le nombre de courrier à piocher*/


int tombe_case_courrier(int n, joueur *j, courrier liste[]){
  int i;
  for(i = 0 ; i < n ; i++)
    case_courrier(liste, j);
  return 1;
}
  
int est_case_payer_banque(int n){
  if(n == 6)
    return 150;
  if(n == 19)
    return 250;
  return 0;
} /*retourne le montant à payer*/

int est_case_acquisiton(int n){
  if(n == 4 || n == 12 || n == 17 || n == 25)
    return 1;
  return 0;
}

int est_case_evenement(int n){
  if(n == 13 || n == 22)
    return 1;
  return 0;
}

int est_case_concours(int n){
  if(n == 2)
    return 1;
  return 0;
}

int est_course_velo(int n){
  if(n == 8)
    return 1;
  return 0;
}

int est_case_travaux(int n){
  if(n == 15)
    return 1;
  return 0;
}

int est_case_anniversaire(int n){
  if(n == 10)
    return 1;
  return 0;
}

int est_case_retour_en_arriere(int n){
  if(n == 26)
    return 1;
  return 0;
}


/*listeJ[] est la liste des joueurs, avec en position 0, au niveau de numJ le nb de joueurs*/


int case_loterie(joueur *j, joueur  liste[]){
  int i, loterie[liste[0].numJ], choix, gagnant, nb_joueur_participant = 0;
  for(i = 1 ; i < liste[0].numJ + 1 ; i++)
    loterie[i] = 0;
  for(i = j->numJ ; i < liste[0].numJ + 1 ; i++){
    if(liste[i].type == 1){ 
      do
	fprintf(stdout, "%s, voulez-vous jouer à la loterie ? Si oui entrez 1, sinon, entrez 2\n", liste[i].Joueur);
      while(fscanf(stdin, "%d", &choix) != 1 || (choix != 1 && choix != 2));
      if (choix == 1){
	liste[i].total -= 100;
	nb_joueur_participant++;
	do{
	  fprintf(stdout, "%s, choisissez un nombre entre 1 et 6, différents de ceux déjà choisi à cette loterie.\n", liste[i].Joueur);
	  fscanf(stdin, "%d", &choix);
	}
	while(loterie[choix] != 0);
	loterie[choix] = liste[i].numJ;
      }
    }
    else{
      if(liste[i].total > 100){
	liste[i].total -= 100;
	nb_joueur_participant++;
	do
	  choix = rand()% 5 + 1;
	while(loterie[choix] != 0);
	loterie[choix] = liste[i].numJ;
      }
    }
  }
  do
    gagnant = rand()% 5 + 1;
  while(loterie[gagnant] == 0);
  fprintf(stdout, "%s est le gagnant de cette loterie\n", liste[loterie[gagnant]].Joueur);
  liste[loterie[gagnant]].total += 1000 + 100 * nb_joueur_participant;
  return 1;
}

int case_fin(joueur *j, courrier liste[], int liste_mois[]){
  j->total += 1500;
  livret(j);
  paye_courrier(j, liste);
  paye_pret(j);
  j->c = 0;
  liste_mois[j->numJ]++;
  return 1;
}

int est_case_vendez(int n){
  if(n == 9 || n == 20 || n == 23 || n == 29)
    return 1;
  return 0;
}

int est_case_loterie(int n){
  if(n == 30)
    return 1;
  return 0;
}

int est_case_fin(int n){
  if(n == 31)
    return 1;
  return 0;
}
  
int joueur_avance(joueur *j, joueur listeJ[], courrier listeC[], acquisition listeA[], evenement listeE[], int *cagnotte, int liste_mois[]){
  int i;
  if (est_case_courrier(j->c) != 0)
    tombe_case_courrier(est_case_courrier(j->c), j, listeC);

  
  else{
    if(est_case_payer_banque(j->c) != 0)
      j->total -= est_case_payer_banque(j->c);

    
    else{
      if(est_case_acquisiton(j->c) != 0)
	piocher_acquisition(listeA,j);

      
      else{
	if(est_case_evenement(j->c) != 0)
	  case_evenement(j, listeE, cagnotte);
      }
    }
  }

  
  if(est_case_concours(j->c) != 0){
    fprintf(stdout, "Bravo, vous avez gagnez le concours de .... \nRecevez 1500€\n");
    j->total += 1500;
  }

	  
  else{
    if(est_course_velo(j->c) != 0){
      for(i = 1 ; i < listeJ[0].numJ + 1 ; i++){
	listeJ[i].total -= 150;
	cagnotte += 150;
      }
    }

	    
    else{
      if (est_case_travaux(j->c) != 0){
	j->total -= 150;
	cagnotte += 150;
      }

	      
      else{
	if (est_case_anniversaire(j->c) !=0){
	  for(i = 1 ; i < listeJ[0].numJ + 1 ; i++){
	    if(i != j->numJ)
	      listeJ[i].total -= 150;
	  }
	  j->total += (listeJ[0].numJ - 1) * 150;
	}
      }
    }
  }

		
  if(est_case_retour_en_arriere(j->c) != 0){
    if(j->c == 0)
      case_fin(j, listeC, liste_mois);
    else{
      for(i = 1 ; i < listeJ[0].numJ ; i++){
	listeJ[i].c--;
	joueur_avance(&listeJ[i], listeJ, listeC, listeA, listeE, cagnotte, liste_mois);
      }
    }
  }


  else{
    if (est_case_vendez(j->c) != 0){
      if(j->type==1){
	vente_acquisition(j,listeJ);
      }else{
	vente_acquisition_o(j,listeJ);
      }

    }
    else{
      if(est_case_loterie(j->c) != 0)
	case_loterie(j, listeJ);


      else{
	if(est_case_fin(j->c) != 0)
	  case_fin(j, listeC, liste_mois);
      }
    }
  }
  return 1;
}


	      

		    
/*int main(){
  joueur j;
  int  cagnotte = 900;
  joueur listeJ[7];
  courrier listeC[NBCOURRIER];
  evenement listeE[NBEVEN];
  acquisition listeA[NBACQUI];
  liste_courrier(listeC);
  liste_evenement(listeE);
  liste_acquisition(listeA);
  srand(time(NULL));
  j.total = 1000;
  j.type = 1;
  j.numJ = 5;
  joueur_avance(&j, listeJ, listeC, listeA, listeE, &cagnotte);
  printf("%d %d %d\n", j.total, j.c, cagnotte);
  exit(0);
}
*/

#endif
