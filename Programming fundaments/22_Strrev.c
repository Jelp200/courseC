/*
    strrev(Cadena)
    Invierte la cadena dada.
*/

// Directivas de procesador.
#include <stdio.h>
#include <string.h>

// Programa principal.
int main(){

    char Cad[100];

    puts("De la cadena a invertir: "); fflush(stdin); gets(Cad);

    // Invertimos la cadena.
    strrev(Cad);

    printf("\n%s", Cad);

    return 0;
}
