/*
** #############################################################################
**	Archivo: 03-variables.c
**	Proyecto: courseC
**	SO:
**		Windows (10)
**	Herramienta: Code::Blocks
**	Compilador: gcc (Windows)
**	Version: 20.03
**	Autores:
**		Jelp200
**	Escuela:
**		ESIME Zacatenco - IPN
**  Notas:
**      Forma correcta de declarar una variable:
**          x, y, variable1, Var2, siSenhor.
**      Forma incorrecta de declarar una variable:
**          1x, 2y, v@riable1, Var.2, siSeñor.
** #############################################################################
*/

// Directivas de preprocesador.
#include <stdio.h>

// Variable(s) global(es).
#define pi 3.1415
int a;

// Main function.
int main(){
	// Variable(s) local(es).
    char Nombre[] = "JELP200";

	printf("El usuario es: %s", Nombre);

	a = 5;
	a = pi * a * a;

	printf("\nEl area del circulo es: %i", a);

	return 0;
}