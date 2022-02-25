/*
    strcpy(destino, fuente)

    strcpy nos permite copiar una cadena de texto en otra, se debe considerar la dimensión de nuestro arreglo 'array' de destino, ya que este debe ser mayor
    o igual al de origen, y además sobrescribe el contenido del destino (si existe).

    aDestino >= aOrigen ; [50] >= [49]
*/

// Directivas de procesador.
#include <stdio.h>
#include <string.h>                                         // Nueva biblioteca a utilizar.

// Programa principal.
int main(){

    char Origen[] = "IPN";                                  // Array con 3 caracteres.

    // Creamos el array de destino.
    char Destino[] = "UNAM";

    // Utilizamos la nueva función.
    strcpy(Destino, Origen);

    printf("%s", Destino);

    return 0;
}
