/*
** #########################################################################################
**      Archivo: 08-IfElse.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          if(condición){
**              ...
**              Código si se cumple la condición
**              ...
**         } else {
**              ...
**              Código si no se cumple la condición
**          }
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Main Function
int main(){
    int PSWRD = 12345, PSWRDUsr, USR = 12345, USRUsr;

    printf("De un usuario: "); scanf("%i", &USRUsr);

    if (USRUsr == USR){
        printf("De su password: "); scanf("%i", &PSWRDUsr);
        if (PSWRDUsr == PSWRD){
            printf("\nBienvenido al sistema %i", USR);
        } 
    }else printf("De el usuario correcto...");
    
    return 0;
}