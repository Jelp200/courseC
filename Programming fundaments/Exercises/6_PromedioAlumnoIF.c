// Que el alumno de 5 calificaciones, si el promedio en mayor a 6 podra pasar de año, sino debera repetir el año.

// Directivas de procesador
#include <stdio.h>

// Lazo principal
int main(){

    float c1, c2, c3, c4, c5, Prom = 0;
    char nom[40];

    puts("\t\tESIME Zacatenco | ICE\n");
    puts("De su nombre: "); gets(nom);
    puts("\nCalificacion 1:"); scanf("%f", &c1);
    puts("\nCalificacion 2:"); scanf("%f", &c2);
    puts("\nCalificacion 3:"); scanf("%f", &c3);
    puts("\nCalificacion 4:"); scanf("%f", &c4);
    puts("\nCalificacion 5:"); scanf("%f", &c5);

    system("cls");

    Prom = (c1+c2+c3+c4+c5)/5;

    printf("\t\tBienvenido %s a sus calificaciones en cobalto\n", nom);
    if(Prom >= 6){
        printf("Su calificacion es de %.2f y puede pasar de anho.", Prom);
    }else {
        printf("Su calificacion es de %.2f y no puede pasar de anho.", Prom);
    }

    return 0;
}
