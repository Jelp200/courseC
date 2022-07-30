/*
** #########################################################################################
**      Archivo: 04-Entradas y salidas.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          Entradas básicas.
**              scanf("%tipoDato", &variable);
**              gets(variable);
**          Salidas básicas.
**              puts("texto");
**              printf("Texto / %tipoDato", variable);
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Variables globales.
#define PI 3.1416

// Main Function
int main(){
    float R, A = 0;                 // Inicializamos la variable A en 0 para que así no haya ningún problema.
    char texto1[30], texto2[30];

    puts("De el radio de un circulo: "); scanf("%f", &R);
    A = PI * R * R;
    printf("\nEl area del circulo conradio \'%.2f\' es de: %.2f\n\n", R, A);

    system("PAUSE");
    system("cls");

    printf("\nDe una cadena de texto: "); fflush(stdin); gets(texto1);
    printf("\nDe una cadena de texto 2: "); fflush(stdin); gets(texto2);

    printf("\nLa cadena de texto 1 es: %s", texto1);
    printf("\nLa cadena de texto 2 es: %s", texto2);

    return 0;
}