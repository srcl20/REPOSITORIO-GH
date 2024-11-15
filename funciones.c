#include <stdio.h>
#include <math.h>
#include "funciones.h"

float ingresarComponente(char comp, int i){
    float c;
    printf("Ingrese la componente %c del punto %d: ",comp,i);
    scanf("%f",&c);
    return c;
}

void distancias(float *a, float *b, float *c, float *d, float *e, float *f, float p[4][3]) {
    *a = sqrt(pow(p[0][0] - p[1][0], 2) + pow(p[0][1] - p[1][1], 2) + pow(p[0][2] - p[1][2], 2));
    *b = sqrt(pow(p[0][0] - p[2][0], 2) + pow(p[0][1] - p[2][1], 2) + pow(p[0][2] - p[2][2], 2));
    *c = sqrt(pow(p[1][0] - p[2][0], 2) + pow(p[1][1] - p[2][1], 2) + pow(p[1][2] - p[2][2], 2));
    *d = sqrt(pow(p[0][0] - p[3][0], 2) + pow(p[0][1] - p[3][1], 2) + pow(p[0][2] - p[3][2], 2));
    *e = sqrt(pow(p[1][0] - p[3][0], 2) + pow(p[1][1] - p[3][1], 2) + pow(p[1][2] - p[3][2], 2));
    *f = sqrt(pow(p[2][0] - p[3][0], 2) + pow(p[2][1] - p[3][1], 2) + pow(p[2][2] - p[3][2], 2));
}

void perimetro(float *p, float *s, float a, float b, float c){
    *p=a+b+c;
    *s=*p / 2;
}

float area(float s, float a, float b, float c){
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}