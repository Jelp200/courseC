/*
    Bucles o ciclos

Su estructura es:

do{
    ...
    Código
    ...
} while(condición);
*/

// Directivas de procesador
#include <stdio.h>

// Programa principal
int main(){

    int i = 0;


    do{
        /*
        Proceso del código:

        i = 1, 1 + 1 = 2, 2 + 1 = 3, 3 + 1 = 4, ...

        0.
        1.
        2.
        3.
        4.
        ...
        ...
        ...
        20.
        */
        printf("%i.\n", i);
        i++;
    } while(i <= 20);

    return 0;
}
