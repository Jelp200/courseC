// Funciones en C (Sin retorno)

/*
    void nombreFunción(parametros){
        ...
        Intrucciones
        ...
    }

    void = vacio, entonces decimos que una función void siempre tendra un retorno vacio.
*/

// Directivas de procesador.
#include <stdio.h>

// Declaramos la función.
void txt();

// Lazo principal.
int main(){

    // Llamamos a la función.
    txt();

    return 0;
}

// Función.
void txt(){
    puts("Hola IPN desde una función void...");
}

/*
    DE OTRA MANERA SERIA:

void txt(){
    puts("Hola ESIME desde una funcion void...");
}

int main(){
    txt();
    return 0;
}

*/
