// Funciones matematicas

/*
    ceil(x)     -> Redondea al entero > más cercano
    fabs(x)     -> |x|
    floor(x)    -> Redondea al entero < más cercano
    sqrt(x)     -> Raíz cuadrada de x
    fmod(x, y)     -> Operador % o calcula el resto de la división entre x/y
    pow(x, p)   -> Calcula x elevado a una potencia p
*/

// Directivas de procesador.
#include <stdio.h>

int main(){
    // Llamamos a la función.
    fMath();
    return 0;
}

void fMath(){
    float x, y, p;
    puts("De el primer numero del programa:"); scanf("%f", &x);
    puts("De el segundo numero del programa:"); scanf("%f", &y);
    puts("De la potencia:"); scanf("%f", &p);

    system("cls");

    // ceil
    printf("El redondeo > de %.2f es: %.2f", x, ceil(x));
    // fabs
    printf("\nEl |x| es: %.2f", x, fabs(x));
    //floor
    printf("\nEl redondeo < de %.2f es: %.2f", x, floor(x));
    // sqrt
    printf("\nLa raíz cuadrada de %.2f es: %.2f", x, sqrt(x));
    // fmod
    printf("\nEl % es: %.2f", fmod(x, y));
    // pow
    printf("\n %f a la %f es: %.2f", pow(x, p));
}
