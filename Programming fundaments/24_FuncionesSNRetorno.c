// Funciones en C (Sin retorno)

/*
    void nombreFunci�n(parametros){
        ...
        Intrucciones
        ...
    }

    void = vacio, entonces decimos que una funci�n void siempre tendra un retorno vacio.
*/

// Directivas de procesador.
#include <stdio.h>

// Declaramos la funci�n.
void txt();

// Lazo principal.
int main(){

    // Llamamos a la funci�n.
    txt();

    return 0;
}

// Funci�n.
void txt(){
    puts("Hola IPN desde una funci�n void...");
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
