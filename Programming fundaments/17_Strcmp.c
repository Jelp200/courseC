/*
    strcmp(Cadena1, Cadena2)

    Compara dos cadenas de texto caracter x caracter, dicha comparaci�n es sensible a may�sculas y min�sculas (case-sensitive).
    Cuando se encuentra con una diferencia, esta funci�n devuelve un valor entero correspondiente a la diferencia de valor decimal seg�n ASCII. El cu�l
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

        // Proceso de validaci�n

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
