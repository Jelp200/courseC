/*
    Creamos un archivo txt el cuál nos servira para la busqueda
*/

// Directivas de procesador.
#include <stdio.h>
#include <string.h>

// Programa principal.
int main(){

    FILE* Archivo = fopen("23_BusquedaStr.txt", "r");                       // Apuntador al archivo de busqueda.
    int Apariciones = 0;                                                    // Contador.

    // Evalua si se puede leer el archivo.
    if(Archivo == NULL){
        puts("\nError al intenar acceder al archivo.");
    }else{
        char TxtRecibido[1000];                                             // Declaramos está variable para que se pueda leer el archivo de busqueda
        char PalabraB[] = "IPN";                                            // Podemos sustituirlo por otra palabra.

        // Loop
        while(fscanf(Archivo, "%s", TxtRecibido) != EOF){                   // EOF (End of file).
            Apariciones++;                                                  // Cuenta las veces que aparece en el archivo.
        }
    }

    // Cerramos el archivo.
    fclose(Archivo);

    printf("\nApariciones de la palabra: %d", Apariciones);

    return 0;
}
