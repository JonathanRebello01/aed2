#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Headers/questao15.h"

void entrada15(float *num1, float *num2);
void processamento15(float *num1, float *num2, int *aux);
void saida15(int *valida, float *num1, float *num2);

void questao15(void)
{
    float numero1, numero2;
    int aux;
    entrada15(&numero1, &numero2);
    processamento15(&numero1, &numero2, &aux);
    saida15(&aux, &numero1, &numero2);
}

void entrada15(float *num1, float *num2)
{
    printf("digite o numero1: ");
    scanf("%f", num1);
    printf("digite o numero2: ");
    scanf("%f", num2);
}

void processamento15(float *num1, float *num2, int *aux)
{
    if (*num1 > *num2)
    {
        *aux = 1;
    }
    else if (*num2 > *num1)
    {
        *aux = 2;
    }
    else{
        *aux = 3;
    }
}

void saida15(int *valida, float *num1, float *num2)
{
    if (*valida == 1)
    {
        printf("o maior e: %.2f", *num1);
    }
    else if (*valida == 2)
    {
        printf("O maior e: %.2f", *num2);
    }
    else if(*valida == 3)
    {
        printf("os dois numeros possuem o mesmo valor");
    }
}