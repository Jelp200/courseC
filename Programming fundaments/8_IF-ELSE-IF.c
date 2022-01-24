/*
Condicional IF-ELSE-IF

if(condicional){
    ...
    Código de instrucciones a ejecutar si se cumple la condicion
    ...
} else if (condicional) {
    ...
    Código de instrucciones a ejecutar si el condicional anterior no se cumple
    ...
} else {
    ...
    Código de instrucciones a ejecutar por si ningún condicional de cumple.
}
*/

// Directivas de procesador.
#include <stdio.h>

// Programa principal.
int main(){

    int a = 5, b = 10;

    if(a + b == 15){
        puts("La variable A & B suman 15");
    }else if(a + b == 10){
        puts("La variable A & B suman 10");
    }else{
        puts("La variable A & B suman diferente de 15 y de 10");
    }

    return 0;
}
