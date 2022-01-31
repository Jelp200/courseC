/*
    - continue: Nos sirve para terminar una iteraci�n y pasarla a la siguiente iteraci�n en seguida a la terminada.
    - break: No solo termina con la iteraci�n, sino tambien con el ciclo completo.
*/

// Directivas de procesador
#include <stdio.h>

// Programa principal
int main(){

    int n, i = 0;

    printf("Uso de CONTINUE\n\n");
    printf("Escriba el n�mero a ignorar:"); scanf("%i", &n);

    for(i = 0; i <= 20; i++){
        if(i == n){
            continue;
        }
        printf("%i\n", i);
    }

    system("PAUSE");
    system("cls");

    printf("Uso de BREAK\n\n");
    for(i = 0; i < 100; i ++){
        if(i == 6){
            break;
        }
        printf("%i\n", i);
    }

    return 0;
}
