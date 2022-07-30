/*
** #########################################################################################
**      Archivo: 03-Variables.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          Veremos los tipos de variables en C y como poder imprimirlas o visualizarlas en
**          consola.
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Variables globales.
unsigned short int n1 = 10;                 // Estas variables las podremos utulizar en todo el programa.
#define PI 3.146

// Main Function
int main(){
    // Variables locales.
    float n2 = 3.256;                       // Estas variables solo se podran utilizar en el bloque de código.
    char nombre[10] = "JELP200";

    printf("Mi nombre de usuario es: %s", nombre);
    printf("\nLa variable global n1 es: %hi", n1);
    printf("\nLa variable global PI es: %.3f", PI);
    printf("\nLa variable local n2 es: %.3f", n2);

    return 0;
}