/*
Dar el precio de un producto y aplicarle el descuento que el usuario le de.
*/

// Directivas de procesador.
#include <stdio.h>

// Programa principal.
int main(){

    float P, DscntoD, Dscnto;

    puts("De el precio del producto: "); scanf("%f", &P);
    puts("De el descuento a aplicar: "); scanf("%f", &DscntoD);

    Dscnto = (DscntoD * P)/100;
    Dscnto = P - Dscnto;

    system("cls");

    printf("El precio sin descuento es de: $ %.2f", P);
    printf("\nEl descuento es de: %.2f porciento de descuento", DscntoD);
    printf("\n\nEl precio final es de: $ %.2f\n", Dscnto);

    system("PAUSE");

    return 0;
}
