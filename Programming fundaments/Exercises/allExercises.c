/*
    EXERCISES COURSE & CHILL CODE IN C

National Polytechnic Institute

Higer School of Mechanical & Electrical Engineering Zacatenco
Communications and electronic engineering

México, México.

---------------------------------------------------------------------------------------------------------------------------------------
To run the programs you need copy the program that you want starting in the #inlcude until the return 0 of the program that you select.
---------------------------------------------------------------------------------------------------------------------------------------
*/

/*************************************************************************************************************************
******************************                      B  L  O  C  K    1                      ******************************
**************************************************************************************************************************/

// 1.
#include <stdio.h>

int main(){
    printf("Hello world, and wellcome to the ESIME Z");

    return 0;
}

// 2.
#include <stdio.h>

int main(){
    puts("[Jorge Penha] [21] [IPN] [ESIME Z] [2022]");

    return 0;
}

// 3.
#include <stdio.h>

int main(){

    puts("\n\t*****************************************\n");
    puts("\t********* C O U R S E   I N   C *********\n");
    puts("\t*****************************************\n\n");
    puts("University: National Polytechnic Institute");
    puts("\nSchool: ESIME Z");
    puts("\nCareer: ICE");
    puts("Date: 31/01/2022");
    puts("Name: Jorge Peña");

    return 0;
}

/*
    NOTES: We've two types of functions to print (printf & puts), the first one accept more parameters like variables and strings, and the second one only accepts strings and chars
*/

// 4.
#include <stdio.h>

int main(){

    int n1 = 10, n2 = 3, S, R, M, D = 0;
    S = R = M = D;

    S = n1 + n2;
    R = n1 - n2;
    M = n1 * n2;
    D = n1 / n2;

    printf("The sum of %i and %i is: %i\n", n1, n2, S);
    printf("The rest of %i and %i is: %i\n", n1, n2, R);
    printf("The product of %i and %i is: %i\n", n1, n2, M);
    printf("The division of %i and %i is: %i\n", n1, n2, D);
    
    return 0;
}

// 5.
#include <stdio.h>

int main(){

    int n1 = 10, n2 = 3, M = 0;
    S = R = M = D;

    M = n1 % n2;

    printf("The mod of %i and %i is: %i\n", n1, n2, M);
    
    return 0;
}

/*
    NOTES: We can asignated values to a variables with a sign of equal (=), like this:
        "var = value"
*/

// 6.
#include <stdio.h>

int main(){

    float n1, n2, n3, n4, S, R, M, D = 0;
    S = R = M = D;

    puts("Give the first number:"); scanf("%f", &n1);
    system("cls");
    puts("Give the second number:"); scanf("%f", &n2);
    system("cls");
    puts("Give the third number:"); scanf("%f", &n3);
    system("cls");
    puts("Give the fourth number:"); scanf("%f", &n4);

    S = n1 + n2;
    R = n3 - n4;
    M = n3 * n4;
    D = n1 / n2;

    printf("The sum of %.2f and %.2f is: %.2f\n", n1, n2, S);
    printf("The rest of %.2f and %.2f is: %.2f\n", n3, n4, R);
    printf("The product %.2f and %.2f is: %.2f\n", n3, n4, M);
    printf("The division of %.2f and %.2f is: %.2f\n", n1, n2, D);
    
    return 0;
}

// 7.
#include <stdio.h>
#include <math.h>

int main(){

    float x1, x2, y1, y2, D = 0;

    puts("Give X1:"); scanf("%f", &x1);
    system("cls");
    puts("Give X2:"); scanf("%f", &x2);
    system("cls");
    puts("Give Y1:"); scanf("%f", &y1);
    system("cls");
    puts("Give Y2:"); scanf("%f", &y2);

    D = sqrt((pow(x1, 2)-pow(x2, 2))+(pow(y1, 2)-pow(y2, 2)));

    printf("The distance of the right triangle is: %.2f", D);
    
    return 0;
}

// 8.
#include <stdio.h>

int main(){

    char U[30], S[20], C[20], D[10], N[30];

    puts("Give your university:"); gets(U);
    system("cls");
    system("PAUSE");
    puts("Give your school:"); gets(S);
    system("cls");
    system("PAUSE");
    puts("Give your career:"); gets(C);
    system("cls");
    system("PAUSE");
    puts("Give the date DD/MM/YY:"); gets(D);
    /*
    Example:
    Give the date DD/MM/YY: 16/10/2022
    */
    system("cls");
    system("PAUSE");
    puts("Give your name:"); gets(N);

    system("cls");
    system("PAUSE");
    puts("\n\t*****************************************\n");
    puts("\t********* C O U R S E   I N   C *********\n");
    puts("\t*****************************************\n\n");
    printf("University: %s", U);
    puts("\nSchool: %s", S);
    puts("\nCareer: %s", C);
    puts("Date: %s", D);
    puts("Name: %s", N);

    return 0;
}

// 9.
#include <stdio.h>
#include <math.h>

#define PI 3.1416

int main(){

    /*
    L = pi * r^2
    */
    
    float L = 0, r;

    puts("Give the radius of the circle:"); scanf("%f", &r);

    L = PI * (pow(r, 2));

    printf("The longitude of the circle is: %.2f", L);
    return 0;
}

// 10.
#include <stdio.h>

#define S 0
#define R 0
#define M 0
#define D 0

int main(){
    
    int n1, n2;

    puts("Give the first number:"); scanf("%f", &n1);
    system("cls");
    puts("Give the second number:"); scanf("%f", &n2);
    system("cls");

    S = n1 + n2;
    R = n1 - n2;
    M = n1 * n2;
    D = n1 / n2;

    printf("The sum of %i and %i is: %i\n", n1, n2, S);
    printf("The rest of %i and %i is: %i\n", n3, n4, R);
    printf("The product %i and %i is: %i\n", n3, n4, M);
    printf("The division of %i and %i is: %.2f\n", n1, n2, D);

    return 0;
}

// 11.
#include <stdio.h>

#define PRICE 1000
#define DSCNT 0.85
#define FPRICE 0

int main(){
    
    FPRICE = PRICE * DSCNT;

    printf("The final price is: %.2f\n", FPRICE);

    return 0;
}