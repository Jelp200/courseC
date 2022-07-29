/*
** ############################################################################################
**	Archivo: 05-entradasSalidas.c
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
**      ENTRADAS BÁSICAS.
**          scanf("%tipoDato", &variable);      -> Tipos de datos: "%i", "%d", "%f", "%c", "%s"
**          vatiable = getchar();
**          gets(variableString);
**          fgets(variableString, longitud, stdin);
**
**      SALIDAS.
**          printf("Texto / %tipoDato", variable);
**          putc(variableChar, stdout);
**          puts("Texto");
** ############################################################################################
*/

// Directivas de preprocesador.
#include <stdio.h>

// Main function.
int main(){
	// Variable(s) local(es).
    unsigned short int n1, n2;
    char c, s[100];

    puts("De dos numeros: "); scanf("%hi %hi", &n1, &n2);
    printf("\nLos numeros son: %hi & %hi", n1, n2);

    printf("\nDe un caracter: "); fflush(stdin); c = getchar();
    printf("De un string: "); fflush(stdin); fgets(s, 100, stdin);

    printf("%c & %s", c, s);
    return 0;
}