/**
* K&R
* Exercice 1.10
* copie son entrée sur sa sortie
* et remplace les tabulations par T
* les retour arrière par B
* et les backslashs par \
**/

#include <stdio.h>

int main()
{

    int caractere;

    while ((caractere = getchar()) != EOF) {
        if (caractere == '\t')
            putchar('T');
        else if (caractere == '\b')
            putchar('B');
        else if (caractere == '\\')
            putchar('\\\\');
        else
            putchar(caractere);
    }

    return 0;
}
