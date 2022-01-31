/*
    Bucles o ciclos

Su estructura es:

for(inicializaci�n; condici�n; incremento){
    ...
    C�digo que se ejecuta en el for
    ...
}
*/

// Directivas de procesador.
#include <stdio.h>

// Programa principal
int main(){

    /*
    O tambien podemos inicializar la variable en el for
    int i = 0;
    */

    for(int i = 32; i <= 254; i++){
        printf("%c\n", i);
    }

    // Lo que imprime es el c�digo ASCII

    return 0;
}
