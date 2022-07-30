/*
** #########################################################################################
**      Archivo: 06-IF.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          if(condición){
**              ...
**              Código en C
**              ..
**          }
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Main Function
int main(){
    int PSWRD = 12345, PSWRDUsr;

    printf("De un password: "); scanf("%i", &PSWRDUsr);

    if (PSWRDUsr == PSWRD){
        puts("\n\nBienvenido a programming 2 hours...");
    }
    
    return 0;
}