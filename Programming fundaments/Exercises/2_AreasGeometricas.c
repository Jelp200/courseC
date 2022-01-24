/*
Areas geometricas.

    Cuadrado: L^2
    Rectanculo: B * H
    Triangulo: (B * H)/2
    Circulo: PI * r^2
*/

// Directivas de procesador.
#include <stdio.h>
#include <math.h>

#define PI 3.1416

// Programa principal.
int main(){

    float L, BR, HR, BT, HT, r, AC, AR, AT, ACi;

    AC = AR = AT = ACi = 0;

    puts("\t\t*******************************\n");
    puts("\t\t***    AREAS GEOMETRICAS    ***\n");
    puts("\t\t*******************************\n\n");

    puts("De el lado del cuadrado: "); scanf("%f", &L);
    system("cls");
    puts("De la base del rectangulo: "); scanf("%f", &BR);
    puts("De la altura del rectangulo: "); scanf("%f", &HR);
    system("cls");
    puts("De la base del triangulo: "); scanf("%f", &BT);
    puts("De la altura del triangulo: "); scanf("%f", &HT);
    system("cls");
    puts("De el radio del circulo: "); scanf("%f", &r);

    AC = pow(L, 2);
    AR = BR * HR;
    AT = (BT * HT)/2;
    ACi = PI * (pow(r, 2));

    system("cls");
    printf("El area del cuadrado es: %.2f", AC);
    printf("\nEl area del rectangulo es: %.2f", AR);
    printf("\nEl area del triangulo es: %.2f", AT);
    printf("\nEl area del circulo es: %.2f", ACi);

    puts("\nICE 4 DUMMIES | IPN ESIME ZACATENCO");

    system("PAUSE");

    return 0;
}
