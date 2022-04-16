/*
    EJERCICIO 16

El usuario digitara su nombre y signo zodiacal, si esté es libra debera ingresar al sistema, sino lo rechazara.

*/

// Directivas de procesador.
#include <stdio.h>
#include <string.h>

// Programa principal.
int main(){

    char nombre[20],signo[20];

    printf("Escribe tu nombre:\n"); fgets(nombre,20,stdin); strtok(nombre,"\n");

    printf("Escribe tu signo:\n"); fgets(signo,20,stdin); strtok(signo,"\n");

    if(strcmp(signo,"Libra")==0 || strcmp(signo,"libra")==0){
        printf("\nBienvenido Sr. %s al sistema astrologico nacional xD",nombre);
    }else{
            printf("\nTipico de geminis...\n");
    }

    return 0;
}
