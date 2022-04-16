/*
    EJERCICIO 12

El usuario debera recargar saldo a su celular y el sistema le dira en que tipo de plan entra.

    30 < Basica =< 100
    120 =< Intermedia =< 500
    520 =< Premium =< 1000
*/

// Directivas de procesador
#include <stdio.h>

// Defines
#define T1 "Basico"
#define T2 "Intermedio"
#define T3 "Premium"

// Programa principal
int main(){

    float S;

    printf("\n\nDe el saldo a recargar: $"); scanf("%f", &S);

    if(S >= 30 && S < 100){
        system("cls");
        printf("Su saldo es de $%.2f y su plan es el %s\n", S, T1);
    }else if(S >= 100 && S < 500){
        system("cls");
        printf("Su saldo es de $%.2f y su plan es el %s\n", S, T2);
    }else if(S >= 500 && S < 1000){
        system("cls");
        printf("Su saldo es de $%.2f y su plan es el %s\n", S, T3);
    }else{
        system("cls");
        printf("Su saldo es de $%.2f y no entra en ningun plan\n", S);
    }

    system("PAUSE");

    return 0;
}
