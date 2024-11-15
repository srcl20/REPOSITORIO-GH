#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

    float p1, s1, a1, a, b ,c;
    float puntos[3][2];
    puntos[0][0]=ingresarComponente('X',1);
    puntos[0][1]=ingresarComponente('Y',1);
    puntos[1][0]=ingresarComponente('X',2);
    puntos[1][1]=ingresarComponente('Y',2);
    puntos[2][0]=ingresarComponente('X',3);
    puntos[2][1]=ingresarComponente('Y',3);

    distancias(&a,&b,&c,puntos);
    perimetro(&p1,&s1,a,b,c);
    a1=area(s1,a,b,c);
    printf("El perimetro del triangulo es %f\n",p1);
    printf("El area del triangulo es %f\n",a1);

    return 0;
}