/*
    EJERCICIO 11

Verificar si un alumno pasara su materia o no
*/

// Directivas de procesador.
#include <stdio.h>

// Programa principal.
int main(){

    int c1, c2, c3, P = 0;

    puts("De su primer calif: "); scanf("%i", &c1);
    puts("De su segunda calif: "); scanf("%i", &c2);
    puts("De su tercer calif: "); scanf("%i", &c3);

    P = (c1 + c2 + c3) / 3;

    if(P >= 6){
        system("cls");
        puts("Pasas la materia");
    }else{
        system("cls");
        puts("Debes recursar");
    }

    return 0;
}
