/*
    EJERCICIO 6

Calcular la cantidad de segundos almacenados en la hora especifica de un día.
*/

 // Directivas de procesador.
#include <stdio.h>

// Programa principal.
int main(){

    int Hi, Mi, S, Hf = 0, Mf = 0, St = 0;

    puts("De las horas: "); scanf("%i", &Hi);
    puts("De los minutos: "); scanf("%i", &Mi);
    puts("De los segundos: "); scanf("%i", &S);

    Hf = Hi * 3600;
    Mf = Mi * 60;

    St = Hf + Mf + S;

    printf("\n\nLos segundos totales son: %i\n", St);
    system("PAUSE");

    return 0;
}
