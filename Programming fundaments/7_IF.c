/*
Estructura condicional IF

if (condicion){
    ...
    Código que se ejecuta al cumplir la condicion
}

*/

// Directivas de procesador
#include <stdio.h>

// Pograma principal
int main(){

    int n1, n2;

    puts("De un numero entero: "); scanf("%i", &n1);
    puts("De otro numero entero: "); scanf("%i", &n2);

    if(n1 >= n2 && n1 > 0){
        system("cls");
        printf("El numero %i es mayor o igual a %i y es positivo", n1, n2);
    } else {
        system("cls");
        printf("El numero %i es menor a %i", n1, n2);
    }
    return 0;
}
