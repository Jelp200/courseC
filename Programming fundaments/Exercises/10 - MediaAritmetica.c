/*
    EJERCICIO 10

Media de 3 números dados por el usuario.
*/

// Directivas de procesador.
#include <stdio.h>

// Programa principal.
int main(){

    int n1, n2, n3;
    float M = 0;

    printf("De el numero 1: "); scanf("%i", &n1);
    printf("De el numero 2: "); scanf("%i", &n2);
    printf("De el numero 3: "); scanf("%i", &n3);

    M = (n1 + n2 + n3) / 3;

    printf("La media es: %.2f", M);

    return 0;
}
