/*
    EJERCICIO 24

Suma de 20 numeros pares
*/

// Directivas de procesador.
#include <stdio.h>

// Programa principal.
int main(){

    int i, S = 0;

    for(i = 0; i <= 20; i += 2){
        S += i;
    }
    printf("El valor final de la suma es: %i", S);

    return 0;
}
