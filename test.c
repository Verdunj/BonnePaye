#include <stdio.h>
#include <stdlib.h>
#include "acquisition.h"
#define NBACQUI 23

int main(){
  acquisition acqui[NBACQUI];
  int i;
  initialiser_acquisition(acqui);
  for(i=0;i<NBACQUI;i++){
    printf("%s\n",acqui[i].titre);
  }
  exit(1);




}
