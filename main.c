#include <stdio.h>
#include <stdlib.h>
#include "personne.h"

int main()
{
    int nbJoueurs = 2;
    Personne joueurs[2];
    int i;
    for (i=0; i<nbJoueurs; i++){

        printf("Prenom du joueur %i : ", i+1);
        scanf("%s", joueurs[i].prenom);
        printf("Nom du joueur %i : ", i+1);
        scanf("%s", joueurs[i].nom);
    }

    for (i=0; i<nbJoueurs; i++){

        printf("Prenom du joueur %i : %s \n", i+1, joueurs[i].prenom);
        printf("Nom du joueur %i : %s \n", i+1, joueurs[i].nom);
    }
}
