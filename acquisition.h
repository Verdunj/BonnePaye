
#define NBACQUI 23
#define MAX 1000
#define NBCOURRIER 80
#define TAILLE 120



typedef struct {
  char titre[MAX];
  int achat;
  int vente;
  int commission;
  int valeur;
}acquisition;

typedef struct {
  char message[MAX];
  int somme;
  int valeur;
  int numero;
}courrier;

typedef struct{
  char * Joueur[MAX];
  int numJ;
  int total;
  courrier sesCourriers[NBCOURRIER];
  int nbCourriers;
  acquisition sesAcquisitions[NBACQUI];
  int nbAcquisitions;
  int pret;
  int c;
}joueur;


int est_disponible(acquisition acqui);

void achat_acquisition(joueur j, acquisition acqui);

int vente_acquisition(joueur j);

int piocher_acquisition(acquisition * lesacqui,joueur j);

int acquisition_commission(int nbjoueur);

void affiche_acquisition_achat_aff(joueur j,acquisition acqui);

int affiche_acquisition_vente_aff(joueur j,acquisition acqui);

void initialiser_acquisition();


void affiche_acquisition_achat(joueur j, acquisition acqui);

int affiche_acquisition_vente(joueur j,acquisition acqui);
