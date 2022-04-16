/*
    EJERCICIO 17

Realizar un programa que al precionar la tecla 1 esté limpie la pantalla.

*/

// Directivas de procesador.
#include <stdio.h>

// Programa principal.
int main(){

    int cls;

    printf("Para borrar la pantalla pulse 1...\n"); scanf("%i", &cls);

    if(cls == 1){
        system("cls");
        printf("Ha borrado la pantalla");
    }else
    printf("Ha pulsado otro numero (%i)", cls);

    return 0;
}
