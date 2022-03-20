// Recursividad en C.

// Directivas de procesador.
#include <stdio.h>

// Funciones.
void cntaRegresiva(int nActual){
    // Si el argumento es menor que 0, se termina.
    if (nActual < 0){
        return;
    }else{
    // En el caso contrario, muestra el n�mero y ejecuta su instrucci�n a si misma en decremento.
    printf("\n%d", nActual);
    cntaRegresiva(nActual - 1);
    }
}

// Programa principal.
int main(){
    int n;
    printf("Numero a empezar\n"); scanf("%d", &n);
    cntaRegresiva(n);

    return 0;
}

/*
    Lo que hace en si el programa es tomar la misma funci�n, ejecutar el c�digo y retornar el valor
    para poder mostrarlo u/o hacer otra instrucci�n.
*/
