/*
Pedir al usuario dos numeros y que realice las siguientes operaciones:

    Suma = n + n
    Resta = n - n
    Producto = n * n
    Cociente = n / n

*/

// Directivas de procesador.
#include <stdio.h>

// Programa principal.
int main(){

    float n1, n2, S, R, P, C;

    S = R = P = C = 0;

    puts("\t\t*******************************\n");
    puts("\t\t*** OPERACIONES ARITMETICAS ***\n");
    puts("\t\t*******************************\n\n");

    puts("De el primer numero real: "); scanf("%f", &n1);
    puts("De el segundo numero real: "); scanf("%f", &n2);

    S = n1 + n2;
    R = n1 - n2;
    P = n1 * n2;
    C = n1 / n2;

    system("cls");

    printf("Los resultados son...\n\tSuma: %.2f\n\tResta: %.2f\n\tProducto: %.2f\n\tCociente: %.2f\n", S, R, P, C);
    puts("\nICE 4 DUMMIES | IPN ESIME ZACATENCO");

    system("PAUSE");

    return 0;
}
