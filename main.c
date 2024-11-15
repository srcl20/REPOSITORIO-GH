//Taller modificar código
#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

    float p1, p2, p3, p4, perimetro_total, area_superficial;
    float s1, s2, s3, s4;
    float area1, area2, area3, area4;
    float a, b, c, d, e, f;
    float puntos[4][3];

    puntos[0][0]=ingresarComponente('X', 1);
    puntos[0][1]=ingresarComponente('Y', 1);
    puntos[0][2]=ingresarComponente('Z', 1);
    puntos[1][0]=ingresarComponente('X', 2);
    puntos[1][1]=ingresarComponente('Y', 2);
    puntos[1][2]=ingresarComponente('Z', 2);
    puntos[2][0]=ingresarComponente('X', 3);
    puntos[2][1]=ingresarComponente('Y', 3);
    puntos[2][2]=ingresarComponente('Z', 3);
    puntos[3][0]=ingresarComponente('X', 4);
    puntos[3][1]=ingresarComponente('Y', 4);
    puntos[3][2]=ingresarComponente('Z', 4);

    distancias(&a, &b, &c, &d, &e, &f, puntos);
    
    perimetro(&p1, &s1, a, b, c);
    area1 = area(s1, a, b, c);

    perimetro(&p2, &s2, a, d, e); 
    area2 = area(s2, a, d, e);

    perimetro(&p3, &s3, c, e, f); 
    area3 = area(s3, c, e, f);

    perimetro(&p4, &s4, d, f, b); 
    area4 = area(s4, d, f, b);
    
    perimetro_total = a + b + c + d + e + f;

    area_superficial = area1 + area2 + area3 + area4;

    printf("El perimetro total de la piramide es: %.2f\n", perimetro_total);
    printf("El area superficial total de la piramide es: %.2f\n", area_superficial);

    return 0;
}