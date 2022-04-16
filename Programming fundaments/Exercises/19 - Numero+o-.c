/*
    EJERCICIO 19

Realizar un programa que verifique si el número dado por el usuario es mayor o igual a 0, o menor a 0.
*/

// Directivas de procesador.
#include <stdio.h>

// Programa principal.
int main(){

    int n;

    printf("De el numero a evaluar: "); scanf("%i", &n);

    (n >= 0) ? (puts("El numero dado es positivo o igual a 0")) : (puts("El numero dado es negativo"));

    return 0;
}
