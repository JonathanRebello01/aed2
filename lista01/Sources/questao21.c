#include <stdio.h>
#include <stdlib.h>
#include "Headers/questao21.h"

void entrada21(float *n1, float *n2, float *n3);
void processamento21(float *n1, float *n2, float *n3, float *ax);
void saida21(float *n1, float *n2, float *n3);

void questao21(void)
{
    float num1, num2, num3, aux = 0;

    entrada21(&num1, &num2, &num3);
    processamento21(&num1, &num2, &num3, &aux);
    saida21(&num1, &num2, &num3);
}

void entrada21(float *n1, float *n2, float *n3)
{
    printf("Digite o primeiro numero: ");
    scanf("%f", n1);

    printf("Digite o segundo numero: ");
    scanf("%f", n2);

    printf("Digite o terceiro numero: ");
    scanf("%f", n3);
}

void processamento21(float *n1, float *n2, float *n3, float *ax)
{
    if (*n1 > *n2) {
        *ax = *n1;
        *n1 = *n2;
        *n2 = *ax;
    }

    if (*n1 > *n3) {
        *ax = *n1;
        *n1 = *n3;
        *n3 = *ax;
    }

    if (*n2 > *n3) {
        *ax = *n2;
        *n2 = *n3;
        *n3 = *ax;
    }

}

void saida21(float *n1, float *n2, float *n3)
{
    printf("Os numeros em ordem crescente sao: %.2f, %.2f e %.2f", *n1, *n2, *n3);
}