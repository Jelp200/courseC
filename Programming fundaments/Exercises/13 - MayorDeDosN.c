/*
    EJERCICIO 13

Que el usuario digite dos numeros y el programa diga cual de estos dos numeros es el menor.
*/

// Directivas de procesador
#include <stdio.h>

// Programa principal
int main(){

    int n1, n2;

    printf("De n1: "); scanf("%i", &n1);
    printf("De n2: "); scanf("%i", &n2);

    if(n1 < n2){
        printf("\nEl numero %i es menor que %i", n1, n2);
    }else if(n1 > n2){
        printf("\nEl numero %i es menor que %i", n2, n1);
    }else if(n1 == n2){
        printf("\Son iguales");
    }
    return 0;
}
