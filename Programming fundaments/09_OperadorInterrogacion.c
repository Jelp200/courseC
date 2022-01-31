/*
Operador condicional de interrogaci�n (?)

(Condicion) ? Expresi�n 1 : Expresi�n 2;

Una analogia valida es:
(Condicion) if (Valida, ejecuta est� codigo) :else (Falsa, ejecuta est� codigo)
*/

// Directivas de procesador
#include <stdio.h>

// Programa principal
int main(){

    int n;

    puts("De el n�mero a evaluar: "); scanf("%i", &n);

    (n >= 0) ? (puts("El numero dado es positivo o igual a 0")) : (puts("El numero dado es negativo"));

    return 0;
}
