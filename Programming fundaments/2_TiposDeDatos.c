// Tipos de datos en C.

// Directivas de procesador.
#include <stdio.h>

// Programa principal.
int main(){

    // Tipos de datos.
    int x = 5;                                              // Datos tipo entero (2 bytes = 16 bits)
    float y = 5.16;                                         // Datos tipo flotante o decimal (4 bytes = 32 bits)
    char c = 'C';                                           // Datos tipo caracter (1 byte = 8 bits)
    double d = 5.161322;                                    // Datos tipo flotante o decimal dobles (8 bytes = 64 bits)
    short e = 2;                                            // Datos tipo entero pequeños (2 bytes = 16 bits)
    long f = 22222222;                                      // Datos tipo entero largos (4 bytes = 32 bits)
    long double h = 21212121212121;                         // Datos tipo entero doblemente largos
    unsigned int k = 123;                                   // Datos tipo enteros positivos (2 bytes = 16 bits)

    /*
    Imprimir en pantalla.

    printf("Texto a imprimir %tipoVar", Var);
    Ejemplo:
    */

    printf("La variable x es entera y tiene un valor de: %i\n", x);     // "\n" es un salto de línea.

    /*
    Para imprimir las variables utilizamos:
    "%i" para datos enteros.
    "%f" para datos flotantes.
    "%c" para datos tipo caracter.
    "%s" para datos tipo string.
    "%lf" para datos long float.
    "%li" para datos long int.
    */

    return 0;
}
