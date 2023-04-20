#include<stdio.h>
#include<stdlib.h>
#include "Headers/questao07.h"

void entrada07(float *r);
void processamento07(float *r, float *d, float *p, float *a, float *v);
void saida07(float *r, float *d, float *p, float *a, float *v);


void questao07(void)
{
float raio, diametro, perimetro, area, volume;

    entrada07(&raio);
    processamento07(&raio, &diametro, &perimetro, &area, &volume);
    saida07(&raio, &diametro, &perimetro, &area, &volume);
}

void entrada07(float *r)
{
    printf("digite o raio do circulo: ");
    scanf("%f", r);
}

void processamento07(float *r, float *d, float *p, float *a, float *v)
{
*d = (2* (*r));
*p = (2) * (3.14) * (*r);
*a = (3.14) * (*r) * (*r);
*v = (3.0/4.0) * (3.14) * (*r) * (*r) * (*r); 
}

void saida07(float *r, float *d, float *p, float *a, float *v)
{
    
printf("o diametro do circulo e: %.2f", *d);

printf("\no perimetro do circulo e: %.2f", *p);

printf("\na area do circulo e: %.2f", *a);

printf("\no volume da esfera e: %.2f", *v);

}