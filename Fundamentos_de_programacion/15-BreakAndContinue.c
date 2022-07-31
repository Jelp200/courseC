/*
** #########################################################################################
**      Archivo: 15-BreakAndContinue.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Variables globales
int n, i = 0;

// Main Function
int main(){
    puts("\t\t\tUSO DEL CONTINUE");
    printf("De el número a ignorar: "); scanf("%i", &n);

    for (i = 0; i <= 20; i++){
        if (i == n){
            continue;
        }
        printf("%i.\n", i);
    }
    
    system("PAUSE");
    system("cls");

    puts("\t\t\tUSO DEL BREAK");
    printf("De el número donde se rompera la cuenta: "); scanf("%i", &n);
    for (i = 0; i < 100; i++){
        if (i == n){
            break;
        }
        printf("%i.\n", i);
    }
    

    return 0;
}

/*
FUNCIONAMIENTO DEL PROGRAMA

Podemos ver que "continue" nos sirve para seguir el programa en un punto establecido por el programador o usuario.

Mientras que "break" nos sirve para romper el programa en un punto establecido dentro del programa.
*/