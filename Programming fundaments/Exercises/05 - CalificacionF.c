/*
    EJERCICIO 5

Realizar un programa el cual calcule la calificación de un alumno a travez de la siguiente metodologia de evaluacion:

    50% examen
    20% tareas
    15% apuntes
    15% asistencias
*/

// Directivas de procesador.
#include <stdio.h>

// Programa principal.
int main(){

    int Ce, Ct, Ca, Cas;
    float Cep = 0, Ctp = 0, Cap = 0, Casp = 0, CF = 0;

    puts("De la calificacion del examen: "); scanf("%i", &Ce);
    Cep = Ce * .5;

    puts("De la calificacion de las tareas: "); scanf("%i", &Ct);
    Ctp = Ct * .2;

    puts("De la calificacion de los apuntes: "); scanf("%i", &Ca);
    Cap = Ca * .15;

    puts("De la calificacion de las asistencias: "); scanf("%i", &Cas);
    Casp = Cas * .15;

    CF = Cep + Ctp + Cap + Casp;

    if(CF >= 6)
    printf("aprobado. Calif final: %.2f", CF);
    else
    printf("Reprobado. Calif final: %.2f", CF);

    return 0;
}
