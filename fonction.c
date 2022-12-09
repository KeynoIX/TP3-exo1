#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "type.h"

void displayCarte(Carte carte)
{
  switch (carte.valeur) //on affecte un nombre aux têtes et à l'As du jeu de carte
    {
        case 1 : printf("As"); break;
        case 2 : printf("2"); break;
        case 3 : printf("3"); break;
        case 4 : printf("4"); break;
        case 5 : printf("5"); break;
        case 6 : printf("6"); break;
        case 7 : printf("7"); break;
        case 8 : printf("8"); break;
        case 9 : printf("9"); break;
        case 10 : printf("10"); break;
        case 11 : printf("Valet"); break;
        case 12 : printf("Dame"); break;
        case 13 : printf("Roi"); break;
        case 14 : printf("As"); break;

        return 0;
    }
    
    

    printf(" de"); //préposition

    switch (carte.couleur) //on affecte un nombre à une couleur
    {
        case 1 : printf(" Coeur"); break;
        case 2 : printf(" Pique"); break;
        case 3 : printf(" Trefle"); break;
        case 4 : printf(" Carreau"); break;

        return 0;
    }
}

Carte drawCarte(void) //on tire aléatoire une carte dans le jeu de carte
{
  Carte carte;

  int couleur = (rand()%4)+1; 
  int valeur = (rand()%14)+1; 
  
  carte.couleur = couleur; 
  carte.valeur = valeur;
  
  return carte; 
  
  
}
