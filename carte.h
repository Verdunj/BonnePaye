#ifndef _CARTE_H_
#define _CARTE_H_


#define MAX 500
#define NBCOURRIER 50
#define NBACQUI 23
#define NBEVEN 23

typedef struct{
  char message[MAX]; /* le message du courrier */
  int somme; /* le montant du courrier */
  int valeur; /* = 0 si personne ne la détient, = n si le joueur n la possède */
  int numero; /* le numéro du courrier */
} courrier;

typedef struct{
  char titre[MAX]; /* le nom de l'acquisition */
  int achat; /* le prix d'achat */
  int vente; /* le prix de vente */
  int commission; /* le montant de la commission */
  int valeur; /* = 0 si personne ne la détient, = n si le joueur n la possède */
} acquisition;

typedef struct{
  char message[MAX]; /* le message de l'évènement */
  int somme; /* la somme à cotiser ou à recevoir */
} evenement;

#endif


