/*
    Funcion recursiva

    La recursividad es una función la cual se llama a si misma
*/

// Librerias (Directivas de procesador)
#include <stdio.h>

// Declaración de funciones
long factorial(int n);

// Programa principal
int main(){
    int n;

    puts("De un numero: "); scanf("%i", &n);

    printf("El factorial de %i es: %li\n", n, factorial(n));

    return 0;
}

// Funcion
long factorial(int n){
    if (n <= 1){
        return 1;
    } else {
        return(n * factorial(n - 1));
    }
}

/*
    La formula de un factorial es la siguiente:

    n! = n * (n-1) * (n-1) * ...
*/
