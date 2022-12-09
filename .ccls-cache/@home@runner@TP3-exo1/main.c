#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "type.h"
#include "fonction.h"

int main(void) //fonction principale 
{
  Carte carte; //on initialise une varibale avec la définition Carte

  printf("Quelle couleur : ");  
  scanf("%d", &(carte.couleur)); //on demande à l'utilisateur une couleur de carte


  printf("Quelle valeur : ");
  scanf("%d", &(carte.valeur)); //on demande à l'utilisateur une valeur du jeu de carte 

  printf("La carte est "); //on affiche la carte 
  displayCarte(carte);
  printf("\n");
  printf("\n");

  srand(time(NULL)); //on initialise la fonction random et on mets l'heure à 0

  for (int i=0; i<5; i++) //on tire 5 cartes aléatoire 
    {
       printf("La cartes aléatoire est ");
       displayCarte(drawCarte());
       printf("\n");
    
    }
 
  return 0;
}
