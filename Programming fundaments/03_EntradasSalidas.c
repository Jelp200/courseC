// Entradas y salidas en C.

// Directivas de procesador.
#include <stdio.h>

// Programa principal.
int main(){

    /* Entradas.
    scanf("%tipoVar", &Var);

       Salidad.
    printf("Texto %tipoVar", Var);

    Ejemplo:
    */

    int x, y, S = 0;

    printf("Programa que suma dos numeros enteros...\n");
    printf("De el primer numero: "); scanf("%i", &x);
    printf("\nDe el segundo numero: "); scanf("%i", &y);

    S = x + y;

    printf("La suma de x mas y es: %i", S);

    return 0;
}
