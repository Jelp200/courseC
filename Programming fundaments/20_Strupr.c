/*
    strupr(Cadena)
    Convierte a mayusculas todas las letras de una cadena de texto.
*/

// Directivas de procesador.
#include <stdio.h>
#include <string.h>                                         // Nueva biblioteca a utilizar.

// Programa principal.
int main(){

    char txt[20];
    puts("Escribe un texto con minusculas:"); fflush(stdin); gets(txt);

    // Hace la conversión.
    puts("El nuevo texto es:\n");
    printf("%s\n", strupr(txt));

    return 0;
}
