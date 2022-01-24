/*
Hipotenusa de un triangulo rectangulo dado sus dos catetos

Formula:    sqrt((cateto A ^ 2) + (cateto B ^ 2));

*/

// Directivas de procesador
#include <stdio.h>
#include <math.h>

// Programa principal
int main(){

    float C1, C2, Hip;

    Hip = 0;

    puts("De el cateto uno:"); scanf("%f", &C1);
    puts("De el cateto dos:"); scanf("%f", &C2);

    Hip = sqrt(pow(C1, 2)+ pow(C2, 2));

    printf("La hipotenusa del triangulo es: %.2f", Hip);

    return 0;
}
