// Operadores de asigancion en C.

// Directivas de Procesador.
#include <stdio.h>

// Programa principal.
int main(){

    int a, b;

    /*
    Operadores de asignación:
    =                   +=
    ==                  -=
    !=                  *=
    <=                  /=
    >=                  %=
    <                   ...
    >                   ...

    Ejemplo:
    */

    printf("El numero a sera mayor que b?\n");

    a = 10; b = 5;

    if(a > b){
        printf("a si es mayor que b");
    } else {
        printf("a no es mayor que b");
    }

    return 0;
}
