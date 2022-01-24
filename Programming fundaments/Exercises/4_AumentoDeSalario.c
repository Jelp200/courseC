/*
Aumento de salario a 3 empleados de una empresa.

[Nombre Empleado] [Salario anterior] [Aumento correspondiente] [Salario final]

*/

// Directivas de procesador
#include <stdio.h>

// Programa principal
int main(){

    char n1[30], n2[30], n3[30];
    int A1, A2, A3;
    float S1, S2, S3, F1, F2, F3;

    F1 = F2 = F3 = 0;

    puts("\t\t*******************************\n");
    puts("\t\t***      GRADUS NOMINA      ***\n");
    puts("\t\t*******************************\n\n");

    puts("De el nombre del primer empleado:"); scanf("%s", &n1);
    puts("De el salario del primer empleado:"); scanf("%f", &S1);
    puts("De el aumento del primer empleado (%):"); scanf("%i", &A1);

    system("cls");

    puts("De el nombre del segundo empleado:"); scanf("%s", &n2);
    puts("De el salario del segundo empleado:"); scanf("%f", &S2);
    puts("De el aumento del segundo empleado (%):"); scanf("%i", &A2);

    system("cls");

    puts("De el nombre del tercer empleado:"); scanf("%s", &n3);
    puts("De el salario del tercer empleado:"); scanf("%f", &S3);
    puts("De el aumento del tercer empleado (%):"); scanf("%i", &A3);

    F1 = S1 + ((A1 * S1)/100); // Sn + ((An * Sn) / 100)
    F2 = S2 + ((A2 * S2)/100);
    F3 = S3 + ((A3 * S3)/100);

    system("cls");

    printf("%s\t\t\t$%.2f\t\t\t%i\t\t\t$%.2f", n1, S1, A1, F1);
    printf("\n%s\t\t\t$%.2f\t\t\t%i\t\t\t$%.2f", n2, S2, A2, F2);
    printf("\n%s\t\t\t$%.2f\t\t\t%i\t\t\t$%.2f", n3, S3, A3, F3);

    return 0;
}
