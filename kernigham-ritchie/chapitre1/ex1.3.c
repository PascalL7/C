/**
* K&R
* Exercice 1.3
*
* Affiche la table de conversion Fahrenheit-Celsius
* pour farhrenheit = 0, 20, ..., 300
* version virgule flottante
*/

#include <stdio.h>

#define MINIMUM 0                               // borne inférieure de la table
#define MAXIMUM 300                             // borne supérieure de la table
#define INTERVALLE 20                           // intervalle entre les valeurs en degrés Fahrenheit
#define FORMULE (5.0/9.0) * (fahrenheit-32.0)   // formule de conversion

int main () {

    float fahrenheit, celsius;

    fahrenheit = MINIMUM;

    printf("TABLE DE CONVERSION Fahrenheit - Celsius\n----------------------------------------\n");

    while (fahrenheit <= MAXIMUM) {
        celsius = FORMULE;

        printf("%3.0f %6.1f\n", fahrenheit, celsius);

        fahrenheit+=INTERVALLE;
    }

    return 0;
}
