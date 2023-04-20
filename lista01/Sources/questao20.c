#include <stdio.h>
#include <stdlib.h>
#include "Headers/questao20.h"

void entrada20(float *n1, float *n2, float *n3);
void processamento20(float *n1, float *n2, float *n3, float *mr);
void saida20(float *mr);

void questao20(void)
{
    float num1, num2, num3, maior;

    entrada20(&num1, &num2, &num3);
    processamento20(&num1, &num2, &num3, &maior);
    saida20(&maior);
}

void entrada20(float *n1, float *n2, float *n3)
{
    printf("Digite o primeiro numero: ");
    scanf("%f", n1);

    printf("Digite o segundo numero: ");
    scanf("%f", n2);

    printf("Digite o terceiro numero: ");
    scanf("%f", n3);
}

void processamento20(float *n1, float *n2, float *n3, float *mr)
{
    *mr = *n1;

    if (*n2 > *mr)
    {
        *mr = *n2;
    }

    if (*n3 > *mr)
    {
        *mr = *n3;
    }
    if (*n1 == *n2 && *n1 == *n3)
    {
        printf("Numeros identicos\n");
    }
}

void saida20(float *mr)
{
        printf("O maior numero e: %f\n", *mr);
}