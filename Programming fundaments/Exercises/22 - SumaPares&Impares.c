/*
    EJERCICIO 22

Sumar un numero y restarle el siguiente (1 - 2 + 3 - 4 + 5 - 6 + 7 - par + impar)
*/

// Directivas de procesador.
#include <stdio.h>

// Programa principal.
int main(){

    int n, neg, i = 1, sPar = 0, sImpar = 0, sGnral = 0;

    printf("De el numero hasta el cual desea sumar: "); scanf("%i", &n);

    while(i <= n){
        if(i % 2 == 0){         // Pares
            neg = i * (-1);
            sPar += neg;
        }else{
            sImpar += i;
        }
        i++;
    }

    sGnral = sImpar + sPar;
    printf("El resultado es: %i", sGnral);

    return 0;
}
