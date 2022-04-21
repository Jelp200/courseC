/*
    EJERCICIO 20

Realizar la suma de todos los numeros anteriores al que de el usuario.
*/

// Directivas de procesador.
#include <stdio.h>

// Programa principal.
int main(){

    int cont, n, S = 0;

    puts("De el número hasta donde quieras que se haga la suma: "); scanf("%i", &n);

    cont = 1;

    while(cont <= n){
        S += cont;
        cont++;
    }

    printf("\n\nLa suma hasta el numero %i es de: %i", n, S);

    return 0;
}
