/*
    EJERCICIO 18

Dar la calificacion de un alumno y su etiqueta correspondiente

    A - EXCELENTE
    B - BUENO
    C - APROBADO
    D - REPROBADO
*/

// Directivas de procesador.
#include <stdio.h>

// Programa principal.
int main(){

    char calif;

    puts("De la calificacion del alumno (A, B, C o D): "); scanf("%c", &calif);

    switch(calif){
        case 'A':
        case 'a':
            puts("EXCELENTE");
            break;
        case 'B':
        case 'b':
            puts("BUENO");
            break;
        case 'C':
        case 'c':
            puts("APROBADO");
            break;
        case 'D':
        case 'd':
            puts("REPROBADO");
            break;
        default:
            puts("De una calificación valida");
            break;
    }

    return 0;
}
