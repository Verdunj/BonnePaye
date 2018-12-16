#ifndef ACQUISITION_H
#define ACQUISITION_H

#include "carte.h"
#include "joueur.h"
#include <MLV/MLV_all.h>





int est_disponible(acquisition acqui);

/* Vérifie si l'acquisition appartient a un joueur */

void achat_acquisition(joueur *j, acquisition *acqui);
/* Ajoute l'acquisition a la liste des acqui du joueur en lui retirant de l'argent en fonction du prix de l'acquisition et met dans les tableau la valeur à celle du numJ qui l'a possède */

void achat_acquisition_o(joueur *j,acquisition *acqui);
/* Achat acquisition met rajoute des contrainte pour l'IA pour qu'il décide si oui ou non il achète l'acquisition (si il lui reste assez d'argent après l'achat) */

void vente_acquisition(joueur *j, joueur *TabJ);
/* Affiche chacune des acquisitions des joueurs et le joueurs choisis une acquisition a vendre, après la vente de l'acquisition la fonction acquisition_commission est appelé pour commencer la commission*/

void vente_acquisition_o(joueur *j,joueur *TabJ);
/* L'IA vend l'acquisition lui rapportant le plus d'argent */ 

void piocher_acquisition(acquisition * lesacqui,joueur *j);

/* Pioche un acquisition et regarde si elle est disponible avec est_disponible, sinon il en repioche jusqu'a trouver une acquisition disponible  */

int acquisition_commission(joueur *j,joueur *TabJ);

/* Lance un dé pour chaque joueur en commencant par celui ayant vendu l'acquisition celui qui fait le plus grand chiffre remporte la commission */

void affiche_acquisition_achat_aff(joueur *j,acquisition *acqui);
/* Affichage de l'acquisition sur l'interface graphique*/

int affiche_acquisition_vente_aff(joueur *j,acquisition *acqui);
/* Affichage de l'acquisition sur l'interface graphique */

void initialiser_acquisition();
/* Crée toute les acquisition existante dans le jeu (Pour le début de partie) */




#endif

