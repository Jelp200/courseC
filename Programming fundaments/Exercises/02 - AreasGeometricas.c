/*
    EJERCICIO 2

Realizar el área de un triangulo, cuadrado, rectangulo y circulo.
*/

// Directivas de procesador.
#include <stdio.h>
#include <math.h>

// Defines.
#define pi 3.14159

// Programa principal.
int main(){

    float Bt, Ht, L, Br, Hr, R, At, Ac, Ar, Acr;

    puts("\t\tAREAS DE FIGURAS\n");

    system("cls");

    puts("\n\n\tDe la base del triangulo:"); scanf("%f", &Bt);
    puts("\n\tDe la altura del triangulo:"); scanf("%f", &Ht);

    system("cls");

    puts("\n\n\tDe el lado del cuadrado:"); scanf("%f", &L);

    system("cls");

    puts("\n\n\tDe la base del rectangulo:"); scanf("%f", &Br);
    puts("\n\tDe la altura del rectangulo:"); scanf("%f", &Hr);

    system("cls");

    puts("\n\n\tDe el radio del circulo:"); scanf("%f", &R);

    At = (Bt * Ht)/2;
    Ac = pow(L, 2);
    Ar = Br * Hr;
    Acr = pi * (pow(R, 2));

    system("cls");

    printf("\n\n\tArea del triangulo: %.2f", At);
    printf("\n\tArea del cuadrado: %.2f", Ac);
    printf("\n\tArea del rectangulo: %.2f", Ar);
    printf("\n\tArea del circulo: %.2f", Acr);

    return 0;
}
