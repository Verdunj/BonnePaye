#ifndef ACQUISITION_H
#define ACQUISITION_H

#include "projet/carte.h"
#include "projet/joueur.h"
#include <MLV/MLV_all.h>




int est_disponible(acquisition acqui);

void achat_acquisition(joueur *j, acquisition *acqui);

void achat_acquisition_o(joueur *j,acquisition *acqui);

void vente_acquisition(joueur *j, joueur *TabJ);

void vente_acquisition_o(joueur *j,joueur *TabJ);

void piocher_acquisition(acquisition * lesacqui,joueur *j);

int acquisition_commission(joueur *j,joueur *TabJ);

void affiche_acquisition_achat_aff(joueur *j,acquisition *acqui);

int affiche_acquisition_vente_aff(joueur *j,acquisition *acqui);

void initialiser_acquisition();

void affiche_acquisition_achat(joueur j, acquisition acqui);

int affiche_acquisition_vente(joueur j,acquisition acqui);


#endif

