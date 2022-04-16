/*
    EJERCICIO 9

Realizar un programa que calcule la longitud de una circunferencia. La formula es:

    L = 2 * pi * r
*/

// Directivas de procesador.
#include <stdio.h>

// Defines.
#define pi 3.14159

// Programa principal.
int main(){

    float L = 0, r;

    puts("\n\n\tDe el radio del circulo: "); scanf("%f", &r);

    L = 2 * pi * r;

    printf("\n\tLa longitud del circulo es: %.2f", L);

    return 0;
}
