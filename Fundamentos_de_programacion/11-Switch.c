/*
** #########################################################################################
**      Archivo: 11-Switch.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          Estructura de selección SWITCH.
**
**          switch(selección){
**              case 1:
**                  ...
**                  Código en C
**                  ...
**                  break;
**              case 'n':
**                  ...
**                  Código en C
**                  ...
**                  break;
**              default:
**                  ...
**                  Código en C
**                  ...
**                  break;
**          }
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Main Function
int main(){
    int n;

    printf("De un número del 1 - 10: "); scanf("%i", &n);

    switch(n){
        case 1: printf("Eligio el numero %i.", n); break;
        case 2: printf("Eligio el numero %i.", n); break;
        case 3: printf("Eligio el numero %i.", n); break;
        case 4: printf("Eligio el numero %i.", n); break;
        case 5: printf("Eligio el numero %i.", n); break;
        case 6: printf("Eligio el numero %i.", n); break;
        case 7: printf("Eligio el numero %i.", n); break;
        case 8: printf("Eligio el numero %i.", n); break;
        case 9: printf("Eligio el numero %i.", n); break;
        case 10: printf("Eligio el numero %i.", n); break;
        default: puts("No dio un número del 1 al 10"); break;
    }

    return 0;
}