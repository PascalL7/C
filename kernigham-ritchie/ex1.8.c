/**
* K&R
* Exercice 1.8
* compte les espaces, les tabulations et les fins de lignes
**/

#include <stdio.h>

int main()
{
    int caractere, nombreEspaces = 0, nombreTabulations = 0, nombreFinsDeLignes = 0;

    printf("Programme qui compte les espaces, tabulations et fins de lignes\nA vous de saisir des caractères !\n\n");

    while ((caractere = getchar()) != EOF)
        if (caractere == ' ')
            nombreEspaces++;
        else if (caractere == '\t')
            nombreTabulations++;
        else if (caractere == '\n')
            nombreFinsDeLignes++;

    printf("Nombre d'espaces : %d\n", nombreEspaces);
    printf("Nombre de tabulations : %d\n", nombreTabulations);
    printf("Nombre de fins de lignes : %d\n", nombreFinsDeLignes);

    return 0;
}
