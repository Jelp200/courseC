/*
    strcat(destino, fuente)

    Concatena la cadena fuente en la de destino. Se debe considerar que la cadena de destino debe tener un tamaño tal que alberga la cadena resultante.

    cad1[20], cad2[30] ;

    => strcat(cad1, cad2) = cad1[20] + cad2[30] ;
*/

// Directivas de procesador.
#include <stdio.h>
#include <string.h>

// Programa principal.
int main(){

    char cad1[] = "Jorge", cad2[] = "Penya", cadF[50];

    // Concatenamos con strcat

    strcat(cadF, cad1);                                             // cadF -> Jorge
    strcat(cadF, "-");                                              // cadF -> Jorge-
    strcat(cadF, cad2);                                             // cadF -> Jorge-Penya

    printf("%s", cadF);                                             // Imprime "Jorge-Penya"

    return 0;
}
