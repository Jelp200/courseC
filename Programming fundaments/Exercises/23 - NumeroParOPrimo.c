/*
    EJERCICIO 23

Determinar si un numero primo
*/

// Directivas de procesador.
#include <stdio.h>

// Programa principal.
int main(){

    int n, cont = 0, i;

    printf("Escribe un numero: "); scanf("%i", &n);

    for(i = 1; i <= n; i++){
        if(n % i == 0){
            cont++;
        }
    }
    if(cont > 2){
        printf("El numero %i no es primo", n);
    }else{
        printf("El numero %i es primo", n);
    }

    return 0;
}
