/*
    EJERCICIO 21

Poner todos los multiplos de 5, de 1 hasta n
*/

// Directivas de procesador.
#include <stdio.h>

// Programa principal.
int main(){

    int n, i = 0;

    puts("De el numero hasta el cual desee que sean los multiplos de 5: "); scanf("%i", &n);

    while(i <= n){
        if(i % 5 == 0){
            printf("%i es multiplo de 5.\n", i);
        }
        i++;
    }

    return 0;
}
