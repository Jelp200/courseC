// Funciones matematicas

/*
    sin(x)
    cos(x)
    tan(x)
    asin(x)
    acos(x)
    atan(x)
*/

// Directivas de procesador.
#include <stdio.h>
#include <math.h>                                               // Siempre utilizaremos math.h para estos casos

int main(){
    // Llamamos a la función.
    fTrig();
    return 0;
}

void fTrig(){
    float x;
    puts("De el primer numero a evaluar:"); scanf("%f", &x);

    system("cls");

    // sin
    printf("Seno de %.2f: %.2f", x, sin(x));
    // cos
    printf("\nCoseno de %.2f: %.2f", x, cos(x));
    // tan
    printf("\nTangente de %.2f: %.2f", x, tan(x));
    // asin
    printf("\naSeno de %.2f: %.2f", x, asin(x));
    // acos
    printf("\naCoseno de %.2f: %.2f", x, acos(x));
    // atan
    printf("\naTangente de %.2f: %.2f", x, atan(x));
}
