#ifndef _JOUEUR_C_
#define _JOUEUR_C_

#include "joueur.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lance_des(joueur *j, int *cagnotte){
  int i;
  i = rand()%6 + 1;
  if (i == 6){
    j->total += (*cagnotte);
    (*cagnotte) = 0;
  }
  if (j->c + i > 31)
    j->c = 31;
  else
    j->c += i;
  return j->c;
}





int main(){
  joueur j;
  int cagnotte = 50;
  srand(time(NULL));
  j.c = 0;
  j.total = 50;
  printf("%d\n",lance_des(&j, &cagnotte));
  printf("%d %d %d\n", j.c, j.total, cagnotte);
  exit(0);
}




#endif
