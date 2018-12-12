#ifndef ACQUISITION_H
#define ACQUISITION_H

#include "carte.h"




int est_disponible(acquisition acqui);

void achat_acquisition(joueur *j, acquisition *acqui);

void vente_acquisition(joueur j);

void piocher_acquisition(acquisition * lesacqui,joueur *j);

int acquisition_commission(int nbjoueur);

void affiche_acquisition_achat_aff(joueur *j,acquisition *acqui);

int affiche_acquisition_vente_aff(joueur j,acquisition acqui);

void initialiser_acquisition();

void affiche_acquisition_achat(joueur j, acquisition acqui);

int affiche_acquisition_vente(joueur j,acquisition acqui);


#endif

