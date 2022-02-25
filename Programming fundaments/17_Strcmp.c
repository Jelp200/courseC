/*
    strcmp(Cadena1, Cadena2)

    Compara dos cadenas de texto caracter x caracter, dicha comparación es sensible a mayúsculas y minúsculas (case-sensitive).
    Cuando se encuentra con una diferencia, esta función devuelve un valor entero correspondiente a la diferencia de valor decimal según ASCII. El cuál
    correcponde a la siguiente tabla.

    (Cadena1 == Cadena2)    |       0
    (Cadena1 >  Cadena2)    |     n > 0
    (Cadena1 <  Cadena2)    |     n < 0
*/

// Directivas de procesador.
#include <stdio.h>
#include <string.h>

// Programa principal.
int main(){

    char PSW[] = "Moca.05", USRDGT[128];
    int intentos = 3;

    // Ciclo hacer-mientras
    do{
        puts("De el password: ");
        fflush(stdin);                                              // Libera memoria del buffer
        gets(USRDGT);

        // Proceso de validación

        if(strcmp(PSW, USRDGT) == 0){
            system("cls");
            puts("\nBienvenido al sistema");
            break;                                                  // Rompe el lazo del programa
        }else{
            intentos--;                                             // Disminuye los intentos hasta llegar a 0;
            printf("El password es incorrecto, le quedan %i intentos", intentos);
        }
    } while (intentos > 0);
    return 0;
}
