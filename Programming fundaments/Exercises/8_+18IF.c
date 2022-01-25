// Pedir a un usuario que si es mayor de edad de sus datos de consulta.

// Directivas de procesador
#include <stdio.h>

// Lazo principal
int main(){

    int edad;
    char nom[40], cel[10], sex, edo[20], cd[30], opc;

    puts("De su edad: "); scanf("%i", &edad);

    if(edad >= 18){

        system("cls");
        puts("\n\t\t\tDATOS DE CONTACTO DOT\n\n");
        puts("De su nombre:"); scanf("%s", &nom);
        puts("De su celular:"); scanf("%s", &cel);
        puts("De su sexo [H/M]:"); scanf("%c", &sex);
        puts("Estado donde vive:"); scanf("%s", &edo);
        puts("Ciudad donde vive:"); scanf("%s", &cd);

        puts("\n¿Desea que se le contacte? [S/N]"); scanf("%c", &opc);
        if(opc == 'S' || opc == 's'){
                printf("\n\nNombre:\t %s", nom);
                printf("\nEdad:\t %i", edad);
                printf("\n\nSexo:\t %c", sex);
                printf("\n\nCelular:\t %s", cel);
                printf("\n\nEstado:\t %s", edo);
                printf("\n\nCiudad:\t %s", cd);

                system("PAUSE");
                system("cls");

                puts("\n\nSe le contactara pronto...");
                puts("\nSe ha registrado correctamente...");
        }else if(opc == 'N' || opc == 'n'){
            system("cls");
            puts("\n\nSe ha registrado correctamente...");
        }
    }else {
        puts("Necesita ser mayor de edad...");
    }

    return 0;
}
