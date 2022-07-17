// Directivas de procesador y variables en C.

// Directivas de preprocesador, bibliotecas o headers en C.
#include <stdio.h>                                              // Incluye la libreria estandar de entrada y salida en C.
#include <math.h>

#define PI 3.1416                                               // Variable global (Se puede utilizar en todo el programa).

// Programa principal.
int main(){

    // Variables locales.
    float r, L;

    printf("De el radio del circulo: "); scanf("%f", &r);

    L = PI * (pow(r, 2));

    printf("\nLa longitud del circulo es de: %.2f", L);           //"%.2f" hace que solo muentre dos digitos de todos los dados.

    return 0;
}
