/**
* K&R
* Exercice 1.9
* copie son entrée sur sa sortie et remplace les séries d'espaces par un seul espace
**/

#include <stdio.h>

#define ESPACE ' '

int main()
{
    int caractereEnCours, caracterePrecedent;
    caracterePrecedent = '1';
    while ((caractereEnCours = getchar()) != EOF) {
        if (caractereEnCours != ESPACE || caracterePrecedent != ESPACE)
            putchar(caractereEnCours);

        caracterePrecedent = caractereEnCours;
    }

    return 0;
}
