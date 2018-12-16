#ifndef _PLATEAU_H_
#define _PLATEAU_H_

#include "courrier.h"
#include "evenement.h"
#include "pret.h"
#include "livret_epargne.h"
#include "acquisition.h"

int est_case_courrier(int n);

int tombe_case_courrier(int n, joueur *j, courrier liste[]);

int est_case_payer_banque(int n);

int est_case_acquisiton(int n);

int est_case_evenement(int n);

int est_case_concours(int n);

int est_course_velo(int n);

int est_case_travaux(int n);

int est_case_anniversaire(int n);

int est_case_retour_en_arriere(int n);

int case_loterie(joueur *j, joueur  liste[]);

int case_fin(joueur *j, courrier liste[], int liste_mois[]);

int est_case_vendez(int n);

int est_case_loterie(int n);

int est_case_fin(int n);

int joueur_avance(joueur *j, joueur listeJ[], courrier listeC[], acquisition listeA[], evenement listeE[], int *cagnotte, int liste_mois[]);



#endif
