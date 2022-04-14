/*
    EJERCICIO 3

En un supermercado quieren disminuir los precios al 15% global para ayudar a las personas y que no quede merma en la tienda.

Se debera dar el precio y el sistema debe dar el precio final.
*/

// Directivas de procesador.
#include <stdio.h>

// Defines.
#define dscnB 0.15

// Programa principal.
int main(){

    float P, PF = 0;

    puts("De el precio del articulo:"); scanf("%f", &P);

    PF = P * dscnB;
    PF = P - PF;

    printf("El precio final con el 15 porciento es: %.2f", PF);

    return 0;
}
