// Funcion aleatoria

/*
    srand(time(NULL));
    variable = limiteInferior + rand()%((limiteSuperior + 1) - limiteInferior);
*/

// Directivas de procesador
#include <stdio.h>
#include <time.h>

// Funciones
void funcionAleatoria();

// Función principal
int main(){
    funcionAleatoria();
    return 0;
}

// Funcion
void funcionAleatoria(){
    int num;
    srand(time(NULL));

    num = 1 + rand()%((10-1) - 1);
    printf("%d", num);
}
