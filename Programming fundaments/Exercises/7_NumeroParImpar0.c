// Que el usuario de un numero entero y el programa diga si es par, impar o cero.

// Directivas de proceador.
#include <stdio.h>

// Lazo principal.
int main(){

    int n;

    puts("De el numero entero a evaluar:"); scanf("%i", &n);

    if(n % 2 == 0){
        puts("El numero es par...");
    }else{
        puts("El numero es impar...");
    }if(n == 0){
        puts("El numero es 0...");
    }

    return 0;
}
