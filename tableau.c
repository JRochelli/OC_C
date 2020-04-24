#include <stdio.h>
#include <stdlib.h>
#include "tableau.h"

/*int main()
{
    int tableau[4] = {2,4,1,3};
    int tableauCopie[4] = {0};
    int taille = 4;

    printf("Tableau de reference : ");
    afficheTableau(tableau, taille);

    printf("La somme du tableau est de %d\n", sommeTableau(tableau, 4));

    printf("La moyenne du tableau est de %f\n", moyenneTableau(tableau, 4));

    printf("Tableau de copie initialise : ");
    afficheTableau(tableauCopie, taille);

    printf("Tableau copie : ");
    copie(tableau, tableauCopie, taille);
    afficheTableau(tableauCopie, taille);

    printf("Valeur superieur a 2 sont mise a 0 : ");
    maximumTableau(tableau, taille, 2);
    afficheTableau(tableau, taille);

    int tableauTri[4] = {15, 81, 22, 13};
    printf("Tri du tableau :");
    ordonnerTableau(tableauTri, taille);
    afficheTableau(tableauTri, taille);
    return 0;
}

int sommeTableau(int tableau[], int tailleTableau)
{
    int somme = 0;
    for (int i=0; i<tailleTableau; i++)
    {
        somme += tableau[i];
    }
    return somme;
}

double moyenneTableau(int tableau[], int tailleTableau)
{
    float tailleTableauf = tailleTableau;
    return sommeTableau(tableau, tailleTableau)/tailleTableauf;
}

void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau)
{
    for (int i=0; i<tailleTableau; i++)
    {
        tableauCopie[i] = tableauOriginal[i];
    }
}

void afficheTableau (int tableau[], int tailleTableau)
{
    printf("[");
    for (int i=0; i<tailleTableau-1; i++)
    {
        printf("%d, ", tableau[i]);
    }
    printf("%d", tableau[tailleTableau-1]);
    printf("]\n");
}

void maximumTableau(int tableau[], int tailleTableau, int valeurMax)
{
    for (int i=0; i<tailleTableau; i++)
    {
        if (tableau[i] > valeurMax)
        {
            tableau[i]=0;
        }
    }
}

void ordonnerTableau(int tableau[], int tailleTableau)
{
    int permut = 1;
    while (permut)
    {
        permut = 0;
        for (int i=0; i<tailleTableau-1; i++)
        {
            if (tableau[i] > tableau[i+1])
            {
                int pivot = tableau[i];
                tableau[i] = tableau[i+1];
                tableau[i+1] = pivot;
                permut = 1;
            }
        }
    }
}*/

