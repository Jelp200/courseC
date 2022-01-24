// Manejo de strings en C.

// Directivas de procesador.
#include <stdio.h>

// Programa principal.
int main(){

    char S[40];

    printf("De el nombre de su escuela:\n"); gets(S);                       // Deja ingresar una cadena de caracteres.
    printf("\n\nUsted estudia en: %s", S);

}
