/*
    Arreglos o arrays

    Su estructura está dada por:

    tipoDato nombreArray[tamaño] = {Valor1, Valo2, ..., ValorN};

    Lo podemos visualizar cómo una fila de datos:

    Salor 3 con cuatro bancas en la fila = Banca 1, banca 2, banca 3, banca 4.
    int S3[4] = {1, 2, 3, 4};
*/

int main(){
    // Declaramos el array con 3 indices y valores asignados.
    int A[4] = {1, 2, 3, 4};

    // Accedemos indivividualmente a los valores.
    printf("\n La primer banca es: %d", A[0]);
    printf("\n La segunda banca es: %d", A[1]);
    printf("\n La tercer banca es: %d", A[2]);
    printf("\n La cuarta banca es: %d\n", A[3]);

    system("PAUSE");
    system("cls");

    // De igual manera una vez declarado el array podemos manipularlo de cualquier forma.
    A[0] = 13;
    printf("\n El nuevo valor es: %d", A[0]);

    return 0;
}

/*
 La posiciónn del array va de la siguiente manera

        A = { 1 , 2 , 3 , 4 }
              ^   ^   ^   ^
              │   │   │   │
              0   1   2   3
*/
