/*
    strrchr(Cadena, Caracter)
    Regresa el restante de la cadena a partir de la primera aparición del caracter indicado.
*/

// Directivas de procesador.
#include <stdio.h>
#include <string.h>

// Programa principal.
int main(){

    char ABC[] = "abcdefghijklmnopqrstuvwxyz", Corte;

    puts("De la letra donde se cortara el abecedario: "); fflush(stdin); scanf("%c", &Corte);

    printf("\n%s", strrchr(ABC, Corte));

    return 0;
}
