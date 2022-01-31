/*
    Bucles o ciclos

Su estructura es:

while(algo){
    ...
    Código a ejecutar en el while
    ...
}
*/

// Directivas de procesador
#include <stdio.h>

// Programa principal
int main(){

    int i = 0, j = 2000;                                                // i = iterador

    while(i <= 100){
        /*
        Lo que hace este bucle es sumar 1 a nuestra variable, ejemplo:
        i = 0, 0 + 1 = 1, 1 + 1 = 2, 2 + 1 = 3, 3 + 1 = 4, ...
        El valor es 0
        El valor es 2
        El valor es 3
        El valor es 4
        El valor es n
        */
        printf("\nEl valor es %i", i);
        i++;                                                            // i = i + 1 -> i += 1 -> i++
    }

    printf("\n");
    system("PAUSE");

    while(j >= 100){
        /*
        Lo que hace este bucle es restar 1 a nuestra variable, ejemplo:
        j = 2000, 2000 - 1 = 1999, 1999 - 1 = 1998, 1998 - 1 = 1997, 1997 - 1 = 1996, ...
        El valor es 2000
        El valor es 1999
        El valor es 1998
        El valor es 1997
        El valor es n
        */
        printf("\nEl valor es %i", j);
        j--;                                                            // j = j - 1 -> j -= 1 -> j--
    }

    return 0;
}
