#ifndef _CARTE_H_
#define _CARTE_H_


#define MAX 500
#define NBCOURRIER 50
#define NBACQUI 23
#define NBEVEN 23

typedef struct{
  char message[MAX];
  int somme;
  int valeur; /* = 0 si personne ne la détient, = n si le joueur n la possède */
  int numero;
} courrier;

typedef struct{
  char titre[MAX];
  int achat;
  int vente;
  int commission;
  int valeur;
} acquisition;

typedef struct{
  char message[MAX];
  int somme;
} evenement;

#endif
