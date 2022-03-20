/*
    Arreglos o arrays

    Su estructura est� dada por:

    tipoDato nombreArray[tama�o] = {Valor1, Valo2, ..., ValorN};

    Lo podemos visualizar c�mo una fila de datos:

    Salor 3 con cuatro bancas en la fila = Banca 1, banca 2, banca 3, banca 4.
    int S3[4] = {1, 2, 3, 4};
*/

// Directivas de procesador
#include <stdio.h>

// Programa principal
int main(){
    // Declaramos el array sin ning�n valor, solo con el tama�o.
    int A[5];

    // Realizamos un ciclo for
    for (int i = 0; i < 5; i++){                                    // El ciclo iniciara en 0 y se ejecutara hasta 5
        printf("\nEscribe el valor para el indice %i: ", i);          // Escribe el valor el cual se guardara en nuestro arreglo
        scanf("%i", &A[i]);                                       // Guarda el valor ingresado en la posici�n del array que se especifica.
        // A[i] -> i = nIngresado
    }
    // Mostramos los valores del array y utilizamos un pre-incremento en la condici�n
    int indice = -1;
    while (++indice < 5)
    printf("%d ", A[indice]);

    return 0;
}
