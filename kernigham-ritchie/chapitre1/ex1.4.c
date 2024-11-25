/**
* K&R
* Exercice 1.4
*
* Affiche la table de conversion Celsius-Fahrenheit
* pour celsius = 0, 20, ..., 300
* version virgule flottante
*/

#include <stdio.h>

#define MINIMUM 0                               // borne inférieure de la table
#define MAXIMUM 300                             // borne supérieure de la table
#define INTERVALLE 20                           // intervalle entre les valeurs en degrés Fahrenheit
#define FORMULE (celsius * 9.0 / 5.0) + 32.0    // formule de conversion

int main () {

    float fahrenheit, celsius;

    celsius = MINIMUM;

    printf("TABLE DE CONVERSION Celsius - Fahrenheit\n----------------------------------------\n");

    while (celsius <= MAXIMUM) {
        fahrenheit = FORMULE;

        printf("%3.0f %6.1f\n", celsius, fahrenheit);

        celsius+=INTERVALLE;
    }

    return 0;
}
