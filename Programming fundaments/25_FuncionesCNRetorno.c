// Funciones en C (Sin retorno)

/*
    tipoDeDato nombreFunción(parametros){
        ...
        Intrucciones
        ...
    }

    tipoDeDato = int, float, char, etc.
*/

// Directivas de procesador.
#include <stdio.h>

// Declaramos la función.
int sumar();

// Variables globales a utilizar.
int n1, n2;

// Lazo principal.
int main(){

    // Pedimos dos numeros al usuario para sumar los cuales se guardaran en las variables globales n1 y n2.
    puts("De dos numeros a sumar: "); scanf("%i %i", &n1, &n2);

    // Llamamos a la función y pasamos los parametros antes pedidos.
    printf("La suma de %i y %i es: %i", n1, n2, sumar(n1, n2));
    return 0;
}

// Función.
int sumar(int N1, int N2){
    //Creamos una variable local en la función para asi poder sumar.
    int suma = 0;
    suma = N1 + N2;
    return suma;
}

/*
    DE OTRA MANERA SERIA:

int Suma = 0, n1, n2;

int sumar(int N1, int N2){
    int suma = 0;
    suma = N1 + N2;
    return suma;
}

int main(){
    puts("De dos numeros a sumar: "); scanf("%i %i", &n1, &n2);
    Suma = sumar(n1, n2);
    printf("La suma de %i y %i es: %i", n1, n2, Suma);
    return 0;
}
-------------------------------------------------------------------------
int n1, n2;

int sumar(int N1, int N2){
    int suma = 0;
    suma = N1 + N2;
    return suma;
}

int main(){
    puts("De dos numeros a sumar: "); scanf("%i %i", &n1, &n2);
    printf("La suma de %i y %i es: %i", n1, n2, sumar(n1, n2);
    return 0;
}
*/
