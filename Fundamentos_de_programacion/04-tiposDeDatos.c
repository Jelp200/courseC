/*
** #########################################################################################
**	Archivo: 04-tiposDeDatos.c
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
**      Dentro de el lenguaje C tenemos varios tipos de datos.
**
**      TIPO BOOL.
**          bool                    (1b)                    (x == 0 && x == 1)
**      DATOS TIPO CARACTER.
**          char                    (8b)                    (-127 >= x <= 127)
**          signed char             (8b)                    (-127 >= x <= 127)
**          unsigned char           (8b)                    (0 >= x <= 255)
**      DATOS TIPO ENTERO.
**          short int               (16b)                   (-32768 >= x <= 32767)
**          unsigned short int      (16b)                   (0 >= x <= 65536)
**          int                     (32b)                   (-2*10^6 >= x <= 2*10^6)
**          unsigned int            (32b)                   (0 >= x <= 4.294*10^6)
**          long int                (32b)                   (-2*10^6 >= x <= 2*10^6)
**          unsigned long int       (32b)                   (0 >= x <= 4.294*10^6)
**          long long int           (64b)                   (-9*10^18 >= x <= 9*10^18)
**          unsigned long long int  (64b)                   (0 >= x <= 18.446*10^18)
**      DATOS TIPO FLOTANTE O DECIMAL.
**          float                   (32b)                   (1.17*10^-38 >= x <= 3*10^38)
**      DATOS TIPO DOBLE
**          double                  (64b)                   (2.2*10^-308 >= x <= 1.7*10^308)
**
**
**  Al momento de diseñar nuestro programa o sistema, necesitamos tomar en cuenta el tipo de
**  datos que vamos a utilizar ya que estos ocuparan memoria y tambien es una buena praxis.
** #########################################################################################
*/

// Directivas de preprocesador.
#include <stdio.h>

// Main function.
int main(){
	// Variable(s) local(es).
    bool T = true, F = false;

    unsigned char c = 'C';

    unsigned short int USI = 100;

    float f = 3.141516;

    double d = 12345678910;

	return 0;
}