/*
    EJERCICIO 8

Un cliente compra 5 articulos y en la tienda donde compro los articulos tienen una oferta de 30% de descuento en la compra final, calcular
el total a pagar con el descuento.
*/

// Directivas de procesador.
#include <stdio.h>

// Programa principal.
int main(){

    int c1, c2, c3, c4, c5;
    float cp = 0, dscnt = 0, cf = 0;

    puts("De el monto del primer articulo: "); scanf("%i", &c1);
    puts("De el monto del segundo articulo: "); scanf("%i", &c2);
    puts("De el monto del tercer articulo: "); scanf("%i", &c3);
    puts("De el monto del cuarto articulo: "); scanf("%i", &c4);
    puts("De el monto del quinto articulo: "); scanf("%i", &c5);

    cp = c1 + c2 + c3 + c4 + c5;
    dscnt = cp * .3;
    cf = cp - dscnt;

    printf("El monto a pagar es: $%.2f", cf);

    return 0;
}
