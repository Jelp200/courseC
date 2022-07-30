/*
** #########################################################################################
**      Archivo: 06-IF.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          if(condición){
**              Código en C
**              if(condición 2){
**                  Código en C
**                  if(condición 3){
**                      ...
**                      IF's
**                  }
**              }
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
    }
    
    return 0;
}