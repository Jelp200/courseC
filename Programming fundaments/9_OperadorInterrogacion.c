/*
Operador condicional de interrogación (?)

(Condicion) ? Expresión 1 : Expresión 2;

Una analogia valida es:
(Condicion) if (Valida, ejecuta esté codigo) :else (Falsa, ejecuta esté codigo)
*/

// Directivas de procesador
#include <stdio.h>

// Programa principal
int main(){

    int n;

    puts("De el número a evaluar: "); scanf("%i", &n);

    (n >= 0) ? (puts("El numero dado es positivo o igual a 0")) : (puts("El numero dado es negativo"));

    return 0;
}
