/*
    EJERCICIO 15

Realizar un simulador de cajero el cual deje hacer retiros y depositos. El cajero debera verse así.

    *************************
    *** CAJERO AUTOMATICO ***
    *************************

    1.- Ver saldo.
    2.- Depositar.
    3.- Retirar.
    4.- Salir.

*/

// Directivas de procesador.
#include <stdio.h>

// Defines.
#define montoInicial 1500

// Programa principal.
int main(){

    float agregar, retirar;
    int opc;

    printf("\n\t*************************\n");
    printf("\t*** CAJERO AUTOMATICO ***\n");
    printf("\t*************************\n");
    puts("\t1.- Ver saldo");
    puts("\t2.- Depositar");
    puts("\t3.- Retirar");
    puts("\t4.- Salir");
    printf("\n\tDe la opcion a elegir: "); scanf("%i", &opc);

    switch(opc){
        case 1:
            system("cls");
            puts("\n\tM I   S A L D O");
            printf("\n\tSu saldo es de: $%i", montoInicial);
        break;

        case 2:
            system("cls");
            puts("\n\tD E P O S I T A R");
            printf("\n\tDe el monto a depositar: $"); scanf("%f", &agregar);
            agregar += montoInicial;
            printf("\n\n\tSu saldo actual es de: $%.2f", agregar);
        break;

        case 3:
            system("cls");
            puts("\n\tR E T I R A R");
            printf("\n\tDe el monto a retirar: $"); scanf("%f", &retirar);
            retirar = montoInicial - retirar;
            printf("\n\n\tSu saldo actual es de: $%.2f", retirar);
        break;

        case 4:
        break;

        default:
            system("cls");
            puts("\n\tDe una opcion correcta...");
        break;
    }

    return 0;
}
