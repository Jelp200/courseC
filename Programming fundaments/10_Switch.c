/*
Estructura condicional Switch.

switch(var){
    case 1:
        ...
        C�digo opcion 1;
        ...
        break;
    case 2:
        ...
        C�digo opcion 2;
        ...
        break;
    case 3:
        ...
        C�digo opcion 3;
        ...
        break;
    case n:
        ...
        C�digo opcion n;
        ...
        break;
    default:
        ...
        C�digo por si ningun case anterior se cumple
        ...
        break;
}
*/

// Directivas de procesador
#include <stdio.h>
#define EXIT 'S'
// Programa principal

int main(){

    char opc;

    printf("********************\n");
    printf("* MENU DE OPCIONES *\n");
    printf("********************\n");
    printf("A. Tacos\n");
    printf("B. Tortas\n");
    printf("C. Gringas\n");
    printf("D. Bebidas\n");
    printf("E. Salir\n");
    printf("Seleccione una opcion: "); scanf("%c", &opc);

    switch(opc){
        case 'A':
            system("cls");
            printf("Selecciono la opcion de tacos.");
            break;
        case 'B':
            system("cls");
            printf("Selecciono la opcion de tortas.");
            break;
        case 'C':
            system("cls");
            printf("Selecciono la opcion de gringas.");
            break;
        case 'D':
            system("cls");
            printf("Selecciono la opcion de bebidas.");
            break;
        case 'E':
            break;
        default:
            printf("De una opcion valida...");
            break;
    }

    return 0;
}

/*
    No se repite el menu ya que no est� dentro de un bucle, para esto necesitariamos un bucle DO-WHILE
*/
