/**
* K&R
* Exercice 1.6
*
* Vérifier la valeur de EOF
*/

#include <stdio.h>

int main()
{
    int caractere;

    printf("Valeur de EOF avant votre saisie : %d\n", EOF);

    while (caractere = getchar() != EOF)
        printf("%d\n", caractere);

    printf("Valeur de EOF après votre saisie : %d\n", caractere);

    return 0;
}
