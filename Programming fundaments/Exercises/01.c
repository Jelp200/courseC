/*
    EJERCICIO 1

Pedir al usuario que digite dos números y tener que sumarlos, restarlos, multiplicarlos y dividirlos.
*/

// Directivas de procesador.
#include <stdio.h>

// Programa principal.
int main(){

    int n1, n2, S, R, M;
    float D;

    puts("\t\tPROGRAMA QUE SUMA, RESTA, MULTIPLICA Y DIVIDE\n");
    puts("\n\tDe el primer numero:"); scanf("%i", &n1);
    puts("\n\tDe el segundo numero:"); scanf("%i", &n2);

    S = n1 + n2;
    R = n1 - n2;
    M = n1 * n2;
    D = n1 / n2;

    printf("\n\n\n\tEl resultado de la suma es: %i", S);
    printf("\n\tEl resultado de la resta es: %i", R);
    printf("\n\tEl resultado de la multiplicacion es: %i", M);
    printf("\n\tEl resultado de la division es: %.2f", D);

    return 0;
}
