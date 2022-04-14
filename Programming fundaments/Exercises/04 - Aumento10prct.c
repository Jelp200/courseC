/*
    EJERCICIO 4

Aumentar el salario de una persona en un 10%, se debera ver así la salida.

    [Nombre] [Salario] [Salario nuevo]
*/

// Directivas de procesador.
#include <stdio.h>

// Programa principal.
int main(){

    float sueldo, sueldoP = 0, sueldoF = 0;
    char name[30];

    puts("\n\n\tDe el nombre del empleado:"); gets(name);
    printf("De el sueldo actual: $"); scanf("%f", &sueldo);

    sueldoP = sueldo * .1;
    sueldoF = sueldo + sueldoP;

    printf("\n\n\n[%s] [$%.2f] [$%.2f]\n", name, sueldo, sueldoF);
    system("PAUSE");

    return 0;
}
