/*
    strlen(Cadena)
    Devuelve un n�mero entero el cu�l representa la longitud de una cadena de texto (incluyendo espacios en blanco, pero exlcuyendo NULL).
*/

// Directivas de procesador.
#include <stdio.h>
#include <string.h>                                         // Nueva biblioteca a utilizar.

// Programa principal.
int main(){

    // Declaramos un array de dimensi�n 200
    char A[200];
    puts("Ingresa cualquier frase:");

    fflush(stdin);                                          // Limpiamos el buffer.

    gets(A);

    system("cls");

    // Mostramos la longitud del array
    printf("La longitud de la cadena es: %i", strlen(A));

    return 0;
}
