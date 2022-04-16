/*
    EJERCICIO 7

Que el usuario de los °F y el sistema los convierta a °C. La formula es:

    °C = (°F - 32) / 1.8
*/

// Directivas de procesador.
#include <stdio.h>

// Programa principal.
int main(){

    float C = 0, F;

    puts("De los grados Farenheit a convertir: "); scanf("%f", &F);

    C = (F - 32) / 1.8;

    printf("%.2f °F son = %.2f °C", F, C);

    return 0;
}
