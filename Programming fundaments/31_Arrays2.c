/*
    Arreglos o arrays

    Su estructura está dada por:

    tipoDato nombreArray[tamaño] = {Valor1, Valo2, ..., ValorN};

    Lo podemos visualizar cómo una fila de datos:

    Salor 3 con cuatro bancas en la fila = Banca 1, banca 2, banca 3, banca 4.
    int S3[4] = {1, 2, 3, 4};
*/

// Directivas de procesador
#include <stdio.h>

// Programa principal
int main(){
    // Declaramos el array sin ningún valor, solo con el tamaño.
    int A[5];

    // Realizamos un ciclo for
    for (int i = 0; i < 5; i++){                                    // El ciclo iniciara en 0 y se ejecutara hasta 5
        printf("\nEscribe el valor para el indice %i: ", i);          // Escribe el valor el cual se guardara en nuestro arreglo
        scanf("%i", &A[i]);                                       // Guarda el valor ingresado en la posición del array que se especifica.
        // A[i] -> i = nIngresado
    }
    // Mostramos los valores del array y utilizamos un pre-incremento en la condición
    int indice = -1;
    while (++indice < 5)
    printf("%d ", A[indice]);

    return 0;
}
